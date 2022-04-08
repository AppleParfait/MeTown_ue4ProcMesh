// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeTown_ProcMesh/MeTown_ProcMeshGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeTown_ProcMeshGameMode() {}
// Cross Module References
	METOWN_PROCMESH_API UClass* Z_Construct_UClass_AMeTown_ProcMeshGameMode_NoRegister();
	METOWN_PROCMESH_API UClass* Z_Construct_UClass_AMeTown_ProcMeshGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MeTown_ProcMesh();
// End Cross Module References
	void AMeTown_ProcMeshGameMode::StaticRegisterNativesAMeTown_ProcMeshGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMeTown_ProcMeshGameMode_NoRegister()
	{
		return AMeTown_ProcMeshGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMeTown_ProcMeshGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeTown_ProcMeshGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeTown_ProcMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeTown_ProcMeshGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MeTown_ProcMeshGameMode.h" },
		{ "ModuleRelativePath", "MeTown_ProcMeshGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeTown_ProcMeshGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeTown_ProcMeshGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeTown_ProcMeshGameMode_Statics::ClassParams = {
		&AMeTown_ProcMeshGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMeTown_ProcMeshGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeTown_ProcMeshGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeTown_ProcMeshGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeTown_ProcMeshGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeTown_ProcMeshGameMode, 3330171565);
	template<> METOWN_PROCMESH_API UClass* StaticClass<AMeTown_ProcMeshGameMode>()
	{
		return AMeTown_ProcMeshGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeTown_ProcMeshGameMode(Z_Construct_UClass_AMeTown_ProcMeshGameMode, &AMeTown_ProcMeshGameMode::StaticClass, TEXT("/Script/MeTown_ProcMesh"), TEXT("AMeTown_ProcMeshGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeTown_ProcMeshGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
