// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/Interactable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}

// Begin Cross Module References
CLEPORTE_API UClass* Z_Construct_UClass_UInteractable();
CLEPORTE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin Interface UInteractable Function GetPositionUI
struct Interactable_eventGetPositionUI_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	Interactable_eventGetPositionUI_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IInteractable::GetPositionUI()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPositionUI instead.");
	Interactable_eventGetPositionUI_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteractable_GetPositionUI = FName(TEXT("GetPositionUI"));
FVector IInteractable::Execute_GetPositionUI(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
	Interactable_eventGetPositionUI_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractable_GetPositionUI);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
	{
		Parms.ReturnValue = I->GetPositionUI_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractable_GetPositionUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventGetPositionUI_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "GetPositionUI", nullptr, nullptr, Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::PropPointers), sizeof(Interactable_eventGetPositionUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interactable_eventGetPositionUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractable_GetPositionUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_GetPositionUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractable::execGetPositionUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPositionUI_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractable Function GetPositionUI

// Begin Interface UInteractable Function GetUIText
struct Interactable_eventGetUIText_Parms
{
	FString ReturnValue;
};
FString IInteractable::GetUIText()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetUIText instead.");
	Interactable_eventGetUIText_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteractable_GetUIText = FName(TEXT("GetUIText"));
FString IInteractable::Execute_GetUIText(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
	Interactable_eventGetUIText_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractable_GetUIText);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
	{
		Parms.ReturnValue = I->GetUIText_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractable_GetUIText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInteractable_GetUIText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventGetUIText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractable_GetUIText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractable_GetUIText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_GetUIText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_GetUIText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "GetUIText", nullptr, nullptr, Z_Construct_UFunction_UInteractable_GetUIText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_GetUIText_Statics::PropPointers), sizeof(Interactable_eventGetUIText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_GetUIText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractable_GetUIText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interactable_eventGetUIText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractable_GetUIText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_GetUIText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractable::execGetUIText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUIText_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractable Function GetUIText

// Begin Interface UInteractable Function interact
void IInteractable::interact()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_interact instead.");
}
static FName NAME_UInteractable_interact = FName(TEXT("interact"));
void IInteractable::Execute_interact(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractable_interact);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
	{
		I->interact_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractable_interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractable_interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractable_interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractable::execinteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->interact_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractable Function interact

// Begin Interface UInteractable
void UInteractable::StaticRegisterNativesUInteractable()
{
	UClass* Class = UInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPositionUI", &IInteractable::execGetPositionUI },
		{ "GetUIText", &IInteractable::execGetUIText },
		{ "interact", &IInteractable::execinteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractable);
UClass* Z_Construct_UClass_UInteractable_NoRegister()
{
	return UInteractable::StaticClass();
}
struct Z_Construct_UClass_UInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractable_GetPositionUI, "GetPositionUI" }, // 2485549193
		{ &Z_Construct_UFunction_UInteractable_GetUIText, "GetUIText" }, // 2180536339
		{ &Z_Construct_UFunction_UInteractable_interact, "interact" }, // 2580858385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
	&UInteractable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractable()
{
	if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, Z_Construct_UClass_UInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
}
template<> CLEPORTE_API UClass* StaticClass<UInteractable>()
{
	return UInteractable::StaticClass();
}
UInteractable::UInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
UInteractable::~UInteractable() {}
// End Interface UInteractable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, UInteractable::StaticClass, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 2460469446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_1781397497(TEXT("/Script/ClePorte"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Interactable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
