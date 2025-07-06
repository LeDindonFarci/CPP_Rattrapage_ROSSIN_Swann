// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLEPORTE_InteractableObject_generated_h
#error "InteractableObject.generated.h already included, missing '#pragma once' in InteractableObject.h"
#endif
#define CLEPORTE_InteractableObject_generated_h

#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUIText); \
	DECLARE_FUNCTION(execGetPositionUI); \
	DECLARE_FUNCTION(execinteract);


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_13_CALLBACK_WRAPPERS
#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableObject(); \
	friend struct Z_Construct_UClass_AInteractableObject_Statics; \
public: \
	DECLARE_CLASS(AInteractableObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClePorte"), NO_API) \
	DECLARE_SERIALIZER(AInteractableObject) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableObject*>(this); }


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractableObject(AInteractableObject&&); \
	AInteractableObject(const AInteractableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableObject) \
	NO_API virtual ~AInteractableObject();


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_10_PROLOG
#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_13_CALLBACK_WRAPPERS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLEPORTE_API UClass* StaticClass<class AInteractableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
