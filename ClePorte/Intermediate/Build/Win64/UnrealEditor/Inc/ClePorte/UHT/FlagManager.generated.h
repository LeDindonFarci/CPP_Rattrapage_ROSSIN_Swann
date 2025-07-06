// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlagManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLEPORTE_FlagManager_generated_h
#error "FlagManager.generated.h already included, missing '#pragma once' in FlagManager.h"
#endif
#define CLEPORTE_FlagManager_generated_h

#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_10_DELEGATE \
CLEPORTE_API void FFlagValueChanged_DelegateWrapper(const FMulticastScriptDelegate& FlagValueChanged);


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFlagValue); \
	DECLARE_FUNCTION(execIsFlagTrigger); \
	DECLARE_FUNCTION(execResetAllFlags); \
	DECLARE_FUNCTION(execResetFlagCategory); \
	DECLARE_FUNCTION(execdecrementFlag); \
	DECLARE_FUNCTION(execincrementFlag); \
	DECLARE_FUNCTION(execEditFlag); \
	DECLARE_FUNCTION(execIsFlagValid);


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlagManager(); \
	friend struct Z_Construct_UClass_UFlagManager_Statics; \
public: \
	DECLARE_CLASS(UFlagManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClePorte"), NO_API) \
	DECLARE_SERIALIZER(UFlagManager)


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFlagManager(UFlagManager&&); \
	UFlagManager(const UFlagManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlagManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlagManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlagManager) \
	NO_API virtual ~UFlagManager();


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_12_PROLOG
#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLEPORTE_API UClass* StaticClass<class UFlagManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
