// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLEPORTE_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define CLEPORTE_Interactable_generated_h

#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetUIText_Implementation() { return TEXT(""); }; \
	virtual FVector GetPositionUI_Implementation() { return FVector(ForceInit); }; \
	virtual void interact_Implementation() {}; \
	DECLARE_FUNCTION(execGetUIText); \
	DECLARE_FUNCTION(execGetPositionUI); \
	DECLARE_FUNCTION(execinteract);


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_CALLBACK_WRAPPERS
#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLEPORTE_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractable(UInteractable&&); \
	UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLEPORTE_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	CLEPORTE_API virtual ~UInteractable();


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ClePorte"), CLEPORTE_API) \
	DECLARE_SERIALIZER(UInteractable)


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static FVector Execute_GetPositionUI(UObject* O); \
	static FString Execute_GetUIText(UObject* O); \
	static void Execute_interact(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_13_PROLOG
#define FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_CALLBACK_WRAPPERS \
	FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLEPORTE_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
