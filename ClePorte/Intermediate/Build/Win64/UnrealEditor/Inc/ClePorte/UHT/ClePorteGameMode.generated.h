// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClePorteGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFlagManager;
#ifdef CLEPORTE_ClePorteGameMode_generated_h
#error "ClePorteGameMode.generated.h already included, missing '#pragma once' in ClePorteGameMode.h"
#endif
#define CLEPORTE_ClePorteGameMode_generated_h

#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFlagManager);


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClePorteGameMode(); \
	friend struct Z_Construct_UClass_AClePorteGameMode_Statics; \
public: \
	DECLARE_CLASS(AClePorteGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClePorte"), NO_API) \
	DECLARE_SERIALIZER(AClePorteGameMode)


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AClePorteGameMode(AClePorteGameMode&&); \
	AClePorteGameMode(const AClePorteGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClePorteGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClePorteGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClePorteGameMode) \
	NO_API virtual ~AClePorteGameMode();


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_10_PROLOG
#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLEPORTE_API UClass* StaticClass<class AClePorteGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
