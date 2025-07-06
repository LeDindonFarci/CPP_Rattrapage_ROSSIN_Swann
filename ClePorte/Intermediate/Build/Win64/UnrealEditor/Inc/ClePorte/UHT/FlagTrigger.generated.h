// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlagTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLEPORTE_FlagTrigger_generated_h
#error "FlagTrigger.generated.h already included, missing '#pragma once' in FlagTrigger.h"
#endif
#define CLEPORTE_FlagTrigger_generated_h

#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlagTriggerCallback); \
	DECLARE_FUNCTION(execGetFlagValue); \
	DECLARE_FUNCTION(execGetFlagListNumber); \
	DECLARE_FUNCTION(execsetFlagListNumber); \
	DECLARE_FUNCTION(execIsOneFlagTriggered); \
	DECLARE_FUNCTION(execIsFlagTriggered);


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlagTrigger(); \
	friend struct Z_Construct_UClass_UFlagTrigger_Statics; \
public: \
	DECLARE_CLASS(UFlagTrigger, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClePorte"), NO_API) \
	DECLARE_SERIALIZER(UFlagTrigger)


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFlagTrigger(UFlagTrigger&&); \
	UFlagTrigger(const UFlagTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlagTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlagTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlagTrigger) \
	NO_API virtual ~UFlagTrigger();


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_12_PROLOG
#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLEPORTE_API UClass* StaticClass<class UFlagTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
