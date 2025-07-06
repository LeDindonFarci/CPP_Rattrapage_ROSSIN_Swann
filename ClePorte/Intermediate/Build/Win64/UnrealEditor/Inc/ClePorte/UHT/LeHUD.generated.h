// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LeHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLEPORTE_LeHUD_generated_h
#error "LeHUD.generated.h already included, missing '#pragma once' in LeHUD.h"
#endif
#define CLEPORTE_LeHUD_generated_h

#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALeHUD(); \
	friend struct Z_Construct_UClass_ALeHUD_Statics; \
public: \
	DECLARE_CLASS(ALeHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClePorte"), NO_API) \
	DECLARE_SERIALIZER(ALeHUD)


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALeHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALeHUD(ALeHUD&&); \
	ALeHUD(const ALeHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALeHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALeHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALeHUD) \
	NO_API virtual ~ALeHUD();


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_13_PROLOG
#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLEPORTE_API UClass* StaticClass<class ALeHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
