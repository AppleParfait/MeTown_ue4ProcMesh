//=======================================================================================================================================
// Copyright (C) 2022, AppleParfait, All Rights Reserved.
//=======================================================================================================================================


#include "ProcMeshManager.h"
#include "Components/StaticMeshComponent.h"
#include "Rendering/PositionVertexBuffer.h"
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AProcMeshManager::AProcMeshManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/// <summary>
	/// 20220408 AppleParfait:
	/// </summary>
	m_proceduralMeshComp = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = m_proceduralMeshComp;

	/// <summary>
	/// 20220408 AppleParfait: New in UE 4.17, multi-threaded PhysX cooking.
	/// </summary>
	m_proceduralMeshComp->bUseAsyncCooking = true;
}

// Called when the game starts or when spawned
void AProcMeshManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProcMeshManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/// <summary>
	/// 20220408 AppleParfait: New in UE 4.17, multi-threaded PhysX cooking.
	/// </summary>
	if (bOriginalMeshLoad)
	{
		ChangeProcMeshData(DeltaTime);
	}
}

/// <summary>
/// 20220408 AppleParfait: This is called when actor is spawned (at runtime or when you drop it into the world in editor)
/// </summary>
void AProcMeshManager::PostActorCreated()
{
	Super::PostActorCreated();

	//CreateTriangle();
}

/// <summary>
/// 20220408 AppleParfait : This is called when actor is already in level and map is opened
/// </summary>
void AProcMeshManager::PostLoad()
{
	Super::PostLoad();

	//CreateTriangle();
}

/// <summary>
/// 20220408 AppleParfait: Initialize dic_originalVertices
/// </summary>
void AProcMeshManager::InitDicVertices()
{
	int maxHandlingSectionCount = m_proceduralMeshComp->GetNumSections();
	for (int i = 0; i < maxHandlingSectionCount; i++)
	{
		dic_originalVertices.Add(i);
	}

	bOriginalMeshLoad = true;
}

/// <summary>
/// 20220408 AppleParfait: an example of Creating a triangle by using UProceduralMeshComponent (not a UStaticMeshComp) 
/// </summary>
void AProcMeshManager::CreateTriangle()
{
	TArray<FVector> vertices;
	vertices.Add(FVector(0, 0, 0));
	vertices.Add(FVector(0, 100, 0));
	vertices.Add(FVector(0, 0, 100));

	TArray<int32> Triangles;
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(2);

	TArray<FVector> normals;
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));
	normals.Add(FVector(1, 0, 0));

	TArray<FVector2D> UV0;
	UV0.Add(FVector2D(0, 0));
	UV0.Add(FVector2D(10, 0));
	UV0.Add(FVector2D(0, 10));


	TArray<FProcMeshTangent> tangents;
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));
	tangents.Add(FProcMeshTangent(0, 1, 0));

	TArray<FLinearColor> vertexColors;
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));

	//
	m_proceduralMeshComp->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV0, vertexColors, tangents, true);

	// Enable collision data
	m_proceduralMeshComp->ContainsPhysicsTriMeshData(true);
}

/// <summary>
/// 20220408 AppleParfait: Change MeshData(only hadling vertices in the example function) for for a simple animation.
/// </summary>
void AProcMeshManager::ChangeProcMeshData(float _deltaTime)
{
	timeSpent += _deltaTime;
	float changeValue = FMath::Sin(3.14f * timeSpent);

	TArray<FVector> vertices;
	TArray<FVector> normals;
	TArray<FVector2D> UV0;
	TArray<FProcMeshTangent> tangents;
	TArray<FColor> vertexColors;

	if (!bOriginalVerticesLoad)
	{
		for (auto& Elem : dic_originalVertices)
		{
			FProcMeshSection* aa = m_proceduralMeshComp->GetProcMeshSection(Elem.Key);

			int vertexCount = aa->ProcVertexBuffer.Num();

			for (int i = 0; i < vertexCount; i++)
			{
				Elem.Value.Add(aa->ProcVertexBuffer[i].Position);
			}
		}

		bOriginalVerticesLoad = true;
	}

	for (int j = 0; j < m_proceduralMeshComp->GetNumSections(); j++)
	{
		vertices.Empty();

		FProcMeshSection* aa = m_proceduralMeshComp->GetProcMeshSection(j);

		int vertexCount = aa->ProcVertexBuffer.Num();

		for (int i = 0; i < vertexCount; i++)
		{
			vertices.Add(dic_originalVertices[j][i] * FMath::Abs(changeValue));
		}

		m_proceduralMeshComp->UpdateMeshSection(j, vertices, normals, UV0, vertexColors, tangents);
	}

}

