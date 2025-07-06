// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/InteractableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableObject() {}

// Begin Cross Module References
CLEPORTE_API UClass* Z_Construct_UClass_AInteractableObject();
CLEPORTE_API UClass* Z_Construct_UClass_AInteractableObject_NoRegister();
CLEPORTE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin Class AInteractableObject Function GetPositionUI
struct InteractableObject_eventGetPositionUI_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	InteractableObject_eventGetPositionUI_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_AInteractableObject_GetPositionUI = FName(TEXT("GetPositionUI"));
FVector AInteractableObject::GetPositionUI()
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractableObject_GetPositionUI);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InteractableObject_eventGetPositionUI_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetPositionUI_Implementation();
	}
}
struct Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableObject_eventGetPositionUI_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableObject, nullptr, "GetPositionUI", nullptr, nullptr, Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::PropPointers), sizeof(InteractableObject_eventGetPositionUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractableObject_eventGetPositionUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableObject_GetPositionUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableObject_GetPositionUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableObject::execGetPositionUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPositionUI_Implementation();
	P_NATIVE_END;
}
// End Class AInteractableObject Function GetPositionUI

// Begin Class AInteractableObject Function GetUIText
struct InteractableObject_eventGetUIText_Parms
{
	FString ReturnValue;
};
static const FName NAME_AInteractableObject_GetUIText = FName(TEXT("GetUIText"));
FString AInteractableObject::GetUIText()
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractableObject_GetUIText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InteractableObject_eventGetUIText_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetUIText_Implementation();
	}
}
struct Z_Construct_UFunction_AInteractableObject_GetUIText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableObject_eventGetUIText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableObject, nullptr, "GetUIText", nullptr, nullptr, Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::PropPointers), sizeof(InteractableObject_eventGetUIText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractableObject_eventGetUIText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableObject_GetUIText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableObject_GetUIText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableObject::execGetUIText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUIText_Implementation();
	P_NATIVE_END;
}
// End Class AInteractableObject Function GetUIText

// Begin Class AInteractableObject Function interact
static const FName NAME_AInteractableObject_interact = FName(TEXT("interact"));
void AInteractableObject::interact()
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractableObject_interact);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		interact_Implementation();
	}
}
struct Z_Construct_UFunction_AInteractableObject_interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableObject_interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableObject, nullptr, "interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableObject_interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableObject_interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AInteractableObject_interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableObject_interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableObject::execinteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->interact_Implementation();
	P_NATIVE_END;
}
// End Class AInteractableObject Function interact

// Begin Class AInteractableObject
void AInteractableObject::StaticRegisterNativesAInteractableObject()
{
	UClass* Class = AInteractableObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPositionUI", &AInteractableObject::execGetPositionUI },
		{ "GetUIText", &AInteractableObject::execGetUIText },
		{ "interact", &AInteractableObject::execinteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableObject);
UClass* Z_Construct_UClass_AInteractableObject_NoRegister()
{
	return AInteractableObject::StaticClass();
}
struct Z_Construct_UClass_AInteractableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableObject.h" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aspect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InteractableObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UiPointingLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InteractableObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InteractableObject" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InteractableObject" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Aspect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UiPointingLocation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableObject_GetPositionUI, "GetPositionUI" }, // 3329999938
		{ &Z_Construct_UFunction_AInteractableObject_GetUIText, "GetUIText" }, // 3543516245
		{ &Z_Construct_UFunction_AInteractableObject_interact, "interact" }, // 3113127660
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_Aspect = { "Aspect", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableObject, Aspect), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aspect_MetaData), NewProp_Aspect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_UiPointingLocation = { "UiPointingLocation", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableObject, UiPointingLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UiPointingLocation_MetaData), NewProp_UiPointingLocation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableObject, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableObject, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectName_MetaData), NewProp_ObjectName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_Aspect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_UiPointingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_ObjectName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableObject_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AInteractableObject, IInteractable), false },  // 2460469446
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableObject_Statics::ClassParams = {
	&AInteractableObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractableObject_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableObject()
{
	if (!Z_Registration_Info_UClass_AInteractableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableObject.OuterSingleton, Z_Construct_UClass_AInteractableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableObject.OuterSingleton;
}
template<> CLEPORTE_API UClass* StaticClass<AInteractableObject>()
{
	return AInteractableObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableObject);
AInteractableObject::~AInteractableObject() {}
// End Class AInteractableObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableObject, AInteractableObject::StaticClass, TEXT("AInteractableObject"), &Z_Registration_Info_UClass_AInteractableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableObject), 2007377660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_3931328744(TEXT("/Script/ClePorte"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_InteractableObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
