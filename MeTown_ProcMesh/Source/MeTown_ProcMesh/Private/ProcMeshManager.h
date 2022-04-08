//=======================================================================================================================================
// Copyright (C) 2022, AppleParfait, All Rights Reserved.
//=======================================================================================================================================
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "ProcMeshManager.generated.h"

UCLASS()
class AProcMeshManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProcMeshManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	/// <summary>
	/// 20220408 AppleParfait: ue4 procedural mesh component
	/// </summary>
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UProceduralMeshComponent* m_proceduralMeshComp;

	/// <summary>
	/// 20220408 AppleParfait: check true when the original static mesh is loaded.
	/// </summary>
	UPROPERTY()
		bool bOriginalMeshLoad = false;

	/// <summary>
	/// 20220408 AppleParfait: check true when vertices of the original static meshes are loaded.
	/// </summary>
	UPROPERTY()
		bool bOriginalVerticesLoad = false;

	/// <summary>
	/// 20220408 AppleParfait: timeSpent for a simple animation.
	/// </summary>
	UPROPERTY()
		float timeSpent = 0.0f;

	/// <summary>
	/// 20220408 AppleParfait: a dictionary for vertices in MeshSection of procedural mesh
	/// </summary>
	TMap<int32, TArray<FVector>> dic_originalVertices;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/// <summary>
	/// 20220408 AppleParfait: This is called when actor is spawned (at runtime or when you drop it into the world in editor)
	/// </summary>
	virtual void PostActorCreated() override;

	/// <summary>
	/// 20220408 AppleParfait: This is called when actor is already in level and map is opened
	/// </summary>
	virtual void PostLoad() override;

	/// <summary>
	/// 20220408 AppleParfait: Initialize dic_originalVertices
	/// 20220408 AppleParfait: Note that the function named 'CopyProceduralMeshfromStaticMeshComponent' is only available on blueprint.
	/// 20220408 AppleParfait: So, we have to assign 'BlueprintCallable' on the function.
	/// </summary>
	UFUNCTION(BlueprintCallable)
		void InitDicVertices();

private:
	/// <summary>
	/// 20220408 AppleParfait: an example of Creating a triangle by using UProceduralMeshComponent (not a UStaticMeshComp) 
	/// </summary>
	UFUNCTION()
		void CreateTriangle();

	/// <summary>
	/// 20220408 AppleParfait: Change MeshData(only hadling vertices in the example function) for for a simple animation.
	/// </summary>
	UFUNCTION()
		void ChangeProcMeshData(float _deltaTime);
};
