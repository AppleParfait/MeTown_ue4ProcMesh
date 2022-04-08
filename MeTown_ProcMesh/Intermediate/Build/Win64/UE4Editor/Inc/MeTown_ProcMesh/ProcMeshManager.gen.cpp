// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeTown_ProcMesh/Private/ProcMeshManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcMeshManager() {}
// Cross Module References
	METOWN_PROCMESH_API UClass* Z_Construct_UClass_AProcMeshManager_NoRegister();
	METOWN_PROCMESH_API UClass* Z_Construct_UClass_AProcMeshManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MeTown_ProcMesh();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProcMeshManager::execChangeProcMeshData)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeProcMeshData(Z_Param__deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProcMeshManager::execCreateTriangle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTriangle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProcMeshManager::execInitDicVertices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitDicVertices();
		P_NATIVE_END;
	}
	void AProcMeshManager::StaticRegisterNativesAProcMeshManager()
	{
		UClass* Class = AProcMeshManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeProcMeshData", &AProcMeshManager::execChangeProcMeshData },
			{ "CreateTriangle", &AProcMeshManager::execCreateTriangle },
			{ "InitDicVertices", &AProcMeshManager::execInitDicVertices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics
	{
		struct ProcMeshManager_eventChangeProcMeshData_Parms
		{
			float _deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::NewProp__deltaTime = { "_deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProcMeshManager_eventChangeProcMeshData_Parms, _deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::NewProp__deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// 20220408 AppleParfait: Change MeshData(only hadling vertices in the example function) for for a simple animation.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Private/ProcMeshManager.h" },
		{ "ToolTip", "<summary>\n20220408 AppleParfait: Change MeshData(only hadling vertices in the example function) for for a simple animation.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProcMeshManager, nullptr, "ChangeProcMeshData", nullptr, nullptr, sizeof(ProcMeshManager_eventChangeProcMeshData_Parms), Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProcMeshManager_CreateTriangle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProcMeshManager_CreateTriangle_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// 20220408 AppleParfait: an example of Creating a triangle by using UProceduralMeshComponent (not a UStaticMeshComp) \n/// </summary>\n" },
		{ "ModuleRelativePath", "Private/ProcMeshManager.h" },
		{ "ToolTip", "<summary>\n20220408 AppleParfait: an example of Creating a triangle by using UProceduralMeshComponent (not a UStaticMeshComp)\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProcMeshManager_CreateTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProcMeshManager, nullptr, "CreateTriangle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProcMeshManager_CreateTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProcMeshManager_CreateTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProcMeshManager_CreateTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProcMeshManager_CreateTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProcMeshManager_InitDicVertices_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProcMeshManager_InitDicVertices_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// 20220408 AppleParfait: Initialize dic_originalVertices\n/// 20220408 AppleParfait: Note that the function named 'CopyProceduralMeshfromStaticMeshComponent' is only available on blueprint.\n/// 20220408 AppleParfait: So, we have to assign 'BlueprintCallable' on the function.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Private/ProcMeshManager.h" },
		{ "ToolTip", "<summary>\n20220408 AppleParfait: Initialize dic_originalVertices\n20220408 AppleParfait: Note that the function named 'CopyProceduralMeshfromStaticMeshComponent' is only available on blueprint.\n20220408 AppleParfait: So, we have to assign 'BlueprintCallable' on the function.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProcMeshManager_InitDicVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProcMeshManager, nullptr, "InitDicVertices", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProcMeshManager_InitDicVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProcMeshManager_InitDicVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProcMeshManager_InitDicVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProcMeshManager_InitDicVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProcMeshManager_NoRegister()
	{
		return AProcMeshManager::StaticClass();
	}
	struct Z_Construct_UClass_AProcMeshManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_proceduralMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_proceduralMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOriginalMeshLoad_MetaData[];
#endif
		static void NewProp_bOriginalMeshLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOriginalMeshLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOriginalVerticesLoad_MetaData[];
#endif
		static void NewProp_bOriginalVerticesLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOriginalVerticesLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeSpent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeSpent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProcMeshManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MeTown_ProcMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProcMeshManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProcMeshManager_ChangeProcMeshData, "ChangeProcMeshData" }, // 3629849845
		{ &Z_Construct_UFunction_AProcMeshManager_CreateTriangle, "CreateTriangle" }, // 2360847617
		{ &Z_Construct_UFunction_AProcMeshManager_InitDicVertices, "InitDicVertices" }, // 1048890221
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcMeshManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProcMeshManager.h" },
		{ "ModuleRelativePath", "Private/ProcMeshManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcMeshManager_Statics::NewProp_m_proceduralMeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/// <summary>\n/// 20220408 AppleParfait: ue4 procedural mesh component\n/// </summary>\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProcMeshManager.h" },
		{ "ToolTip", "<summary>\n20220408 AppleParfait: ue4 procedural mesh component\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProcMeshManager_Statics::NewProp_m_proceduralMeshComp = { "m_proceduralMeshComp", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcMeshManager, m_proceduralMeshComp), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProcMeshManager_Statics::NewProp_m_proceduralMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshManager_Statics::NewProp_m_proceduralMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalMeshLoad_MetaData[] = {
		{ "Comment", "/// <summary>\n/// 20220408 AppleParfait: check true when the original static mesh is loaded.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Private/ProcMeshManager.h" },
		{ "ToolTip", "<summary>\n20220408 AppleParfait: check true when the original static mesh is loaded.\n</summary>" },
	};
#endif
	void Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalMeshLoad_SetBit(void* Obj)
	{
		((AProcMeshManager*)Obj)->bOriginalMeshLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalMeshLoad = { "bOriginalMeshLoad", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProcMeshManager), &Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalMeshLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalMeshLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalMeshLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalVerticesLoad_MetaData[] = {
		{ "Comment", "/// <summary>\n/// 20220408 AppleParfait: check true when vertices of the original static meshes are loaded.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Private/ProcMeshManager.h" },
		{ "ToolTip", "<summary>\n20220408 AppleParfait: check true when vertices of the original static meshes are loaded.\n</summary>" },
	};
#endif
	void Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalVerticesLoad_SetBit(void* Obj)
	{
		((AProcMeshManager*)Obj)->bOriginalVerticesLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalVerticesLoad = { "bOriginalVerticesLoad", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProcMeshManager), &Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalVerticesLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalVerticesLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalVerticesLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProcMeshManager_Statics::NewProp_timeSpent_MetaData[] = {
		{ "Comment", "/// <summary>\n/// 20220408 AppleParfait: timeSpent for a simple animation.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Private/ProcMeshManager.h" },
		{ "ToolTip", "<summary>\n20220408 AppleParfait: timeSpent for a simple animation.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProcMeshManager_Statics::NewProp_timeSpent = { "timeSpent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProcMeshManager, timeSpent), METADATA_PARAMS(Z_Construct_UClass_AProcMeshManager_Statics::NewProp_timeSpent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshManager_Statics::NewProp_timeSpent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProcMeshManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshManager_Statics::NewProp_m_proceduralMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalMeshLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshManager_Statics::NewProp_bOriginalVerticesLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshManager_Statics::NewProp_timeSpent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProcMeshManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProcMeshManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProcMeshManager_Statics::ClassParams = {
		&AProcMeshManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProcMeshManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshManager_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProcMeshManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProcMeshManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProcMeshManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProcMeshManager, 3730937338);
	template<> METOWN_PROCMESH_API UClass* StaticClass<AProcMeshManager>()
	{
		return AProcMeshManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProcMeshManager(Z_Construct_UClass_AProcMeshManager, &AProcMeshManager::StaticClass, TEXT("/Script/MeTown_ProcMesh"), TEXT("AProcMeshManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProcMeshManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
