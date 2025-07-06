// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlagGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFlagManager;
#ifdef CLEPORTE_FlagGameMode_generated_h
#error "FlagGameMode.generated.h already included, missing '#pragma once' in FlagGameMode.h"
#endif
#define CLEPORTE_FlagGameMode_generated_h

#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFlagManager);


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlagGameMode(); \
	friend struct Z_Construct_UClass_AFlagGameMode_Statics; \
public: \
	DECLARE_CLASS(AFlagGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClePorte"), NO_API) \
	DECLARE_SERIALIZER(AFlagGameMode)


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFlagGameMode(AFlagGameMode&&); \
	AFlagGameMode(const AFlagGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlagGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlagGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlagGameMode) \
	NO_API virtual ~AFlagGameMode();


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_14_PROLOG
#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLEPORTE_API UClass* StaticClass<class AFlagGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
