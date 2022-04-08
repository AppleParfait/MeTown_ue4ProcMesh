// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METOWN_PROCMESH_ProcMeshManager_generated_h
#error "ProcMeshManager.generated.h already included, missing '#pragma once' in ProcMeshManager.h"
#endif
#define METOWN_PROCMESH_ProcMeshManager_generated_h

#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_SPARSE_DATA
#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeProcMeshData); \
	DECLARE_FUNCTION(execCreateTriangle); \
	DECLARE_FUNCTION(execInitDicVertices);


#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeProcMeshData); \
	DECLARE_FUNCTION(execCreateTriangle); \
	DECLARE_FUNCTION(execInitDicVertices);


#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProcMeshManager(); \
	friend struct Z_Construct_UClass_AProcMeshManager_Statics; \
public: \
	DECLARE_CLASS(AProcMeshManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeTown_ProcMesh"), NO_API) \
	DECLARE_SERIALIZER(AProcMeshManager)


#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProcMeshManager(); \
	friend struct Z_Construct_UClass_AProcMeshManager_Statics; \
public: \
	DECLARE_CLASS(AProcMeshManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeTown_ProcMesh"), NO_API) \
	DECLARE_SERIALIZER(AProcMeshManager)


#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProcMeshManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProcMeshManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProcMeshManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProcMeshManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProcMeshManager(AProcMeshManager&&); \
	NO_API AProcMeshManager(const AProcMeshManager&); \
public:


#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProcMeshManager(AProcMeshManager&&); \
	NO_API AProcMeshManager(const AProcMeshManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProcMeshManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProcMeshManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProcMeshManager)


#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_proceduralMeshComp() { return STRUCT_OFFSET(AProcMeshManager, m_proceduralMeshComp); } \
	FORCEINLINE static uint32 __PPO__bOriginalMeshLoad() { return STRUCT_OFFSET(AProcMeshManager, bOriginalMeshLoad); } \
	FORCEINLINE static uint32 __PPO__bOriginalVerticesLoad() { return STRUCT_OFFSET(AProcMeshManager, bOriginalVerticesLoad); } \
	FORCEINLINE static uint32 __PPO__timeSpent() { return STRUCT_OFFSET(AProcMeshManager, timeSpent); }


#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_11_PROLOG
#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_PRIVATE_PROPERTY_OFFSET \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_SPARSE_DATA \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_RPC_WRAPPERS \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_INCLASS \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_PRIVATE_PROPERTY_OFFSET \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_SPARSE_DATA \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_INCLASS_NO_PURE_DECLS \
	MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METOWN_PROCMESH_API UClass* StaticClass<class AProcMeshManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MeTown_ProcMesh_Source_MeTown_ProcMesh_Private_ProcMeshManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
