// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/FlagManager.h"
#include "ClePorte/FlagList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlagManager() {}

// Begin Cross Module References
CLEPORTE_API UClass* Z_Construct_UClass_UFlagManager();
CLEPORTE_API UClass* Z_Construct_UClass_UFlagManager_NoRegister();
CLEPORTE_API UFunction* Z_Construct_UDelegateFunction_ClePorte_FlagValueChanged__DelegateSignature();
CLEPORTE_API UScriptStruct* Z_Construct_UScriptStruct_FFlagList();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin Delegate FFlagValueChanged
struct Z_Construct_UDelegateFunction_ClePorte_FlagValueChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlagManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ClePorte_FlagValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ClePorte, nullptr, "FlagValueChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClePorte_FlagValueChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ClePorte_FlagValueChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ClePorte_FlagValueChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ClePorte_FlagValueChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFlagValueChanged_DelegateWrapper(const FMulticastScriptDelegate& FlagValueChanged)
{
	FlagValueChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FFlagValueChanged

// Begin Class UFlagManager Function decrementFlag
struct Z_Construct_UFunction_UFlagManager_decrementFlag_Statics
{
	struct FlagManager_eventdecrementFlag_Parms
	{
		FString category;
		FString FlagName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventdecrementFlag_Parms, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::NewProp_FlagName = { "FlagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventdecrementFlag_Parms, FlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagName_MetaData), NewProp_FlagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::NewProp_category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::NewProp_FlagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagManager, nullptr, "decrementFlag", nullptr, nullptr, Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::FlagManager_eventdecrementFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::FlagManager_eventdecrementFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagManager_decrementFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagManager_decrementFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagManager::execdecrementFlag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_category);
	P_GET_PROPERTY(FStrProperty,Z_Param_FlagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->decrementFlag(Z_Param_category,Z_Param_FlagName);
	P_NATIVE_END;
}
// End Class UFlagManager Function decrementFlag

// Begin Class UFlagManager Function EditFlag
struct Z_Construct_UFunction_UFlagManager_EditFlag_Statics
{
	struct FlagManager_eventEditFlag_Parms
	{
		FString category;
		FString flagName;
		int32 value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_flagName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_flagName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_EditFlag_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventEditFlag_Parms, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_EditFlag_Statics::NewProp_flagName = { "flagName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventEditFlag_Parms, flagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_flagName_MetaData), NewProp_flagName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlagManager_EditFlag_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventEditFlag_Parms, value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagManager_EditFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_EditFlag_Statics::NewProp_category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_EditFlag_Statics::NewProp_flagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_EditFlag_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_EditFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagManager_EditFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagManager, nullptr, "EditFlag", nullptr, nullptr, Z_Construct_UFunction_UFlagManager_EditFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_EditFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagManager_EditFlag_Statics::FlagManager_eventEditFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_EditFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagManager_EditFlag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagManager_EditFlag_Statics::FlagManager_eventEditFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagManager_EditFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagManager_EditFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagManager::execEditFlag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_category);
	P_GET_PROPERTY(FStrProperty,Z_Param_flagName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EditFlag(Z_Param_category,Z_Param_flagName,Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class UFlagManager Function EditFlag

// Begin Class UFlagManager Function GetFlagValue
struct Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics
{
	struct FlagManager_eventGetFlagValue_Parms
	{
		FString category;
		FString flagName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_flagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_flagName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventGetFlagValue_Parms, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::NewProp_flagName = { "flagName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventGetFlagValue_Parms, flagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_flagName_MetaData), NewProp_flagName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventGetFlagValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::NewProp_category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::NewProp_flagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagManager, nullptr, "GetFlagValue", nullptr, nullptr, Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::FlagManager_eventGetFlagValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::FlagManager_eventGetFlagValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagManager_GetFlagValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagManager_GetFlagValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagManager::execGetFlagValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_category);
	P_GET_PROPERTY(FStrProperty,Z_Param_flagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFlagValue(Z_Param_category,Z_Param_flagName);
	P_NATIVE_END;
}
// End Class UFlagManager Function GetFlagValue

// Begin Class UFlagManager Function incrementFlag
struct Z_Construct_UFunction_UFlagManager_incrementFlag_Statics
{
	struct FlagManager_eventincrementFlag_Parms
	{
		FString category;
		FString FlagName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventincrementFlag_Parms, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::NewProp_FlagName = { "FlagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventincrementFlag_Parms, FlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagName_MetaData), NewProp_FlagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::NewProp_category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::NewProp_FlagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagManager, nullptr, "incrementFlag", nullptr, nullptr, Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::FlagManager_eventincrementFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::FlagManager_eventincrementFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagManager_incrementFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagManager_incrementFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagManager::execincrementFlag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_category);
	P_GET_PROPERTY(FStrProperty,Z_Param_FlagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->incrementFlag(Z_Param_category,Z_Param_FlagName);
	P_NATIVE_END;
}
// End Class UFlagManager Function incrementFlag

// Begin Class UFlagManager Function IsFlagTrigger
struct Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics
{
	struct FlagManager_eventIsFlagTrigger_Parms
	{
		FString category;
		FString flagName;
		int32 value;
		bool exact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_flagName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_flagName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_exact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_exact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventIsFlagTrigger_Parms, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_flagName = { "flagName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventIsFlagTrigger_Parms, flagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_flagName_MetaData), NewProp_flagName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventIsFlagTrigger_Parms, value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
void Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_exact_SetBit(void* Obj)
{
	((FlagManager_eventIsFlagTrigger_Parms*)Obj)->exact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_exact = { "exact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlagManager_eventIsFlagTrigger_Parms), &Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_exact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlagManager_eventIsFlagTrigger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlagManager_eventIsFlagTrigger_Parms), &Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_flagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_exact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagManager, nullptr, "IsFlagTrigger", nullptr, nullptr, Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::FlagManager_eventIsFlagTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::FlagManager_eventIsFlagTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagManager_IsFlagTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagManager_IsFlagTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagManager::execIsFlagTrigger)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_category);
	P_GET_PROPERTY(FStrProperty,Z_Param_flagName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
	P_GET_UBOOL(Z_Param_exact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFlagTrigger(Z_Param_category,Z_Param_flagName,Z_Param_Out_value,Z_Param_exact);
	P_NATIVE_END;
}
// End Class UFlagManager Function IsFlagTrigger

// Begin Class UFlagManager Function IsFlagValid
struct Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics
{
	struct FlagManager_eventIsFlagValid_Parms
	{
		FString category;
		FString flagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_flagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_flagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventIsFlagValid_Parms, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::NewProp_flagName = { "flagName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventIsFlagValid_Parms, flagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_flagName_MetaData), NewProp_flagName_MetaData) };
void Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlagManager_eventIsFlagValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlagManager_eventIsFlagValid_Parms), &Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::NewProp_category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::NewProp_flagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagManager, nullptr, "IsFlagValid", nullptr, nullptr, Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::FlagManager_eventIsFlagValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::FlagManager_eventIsFlagValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagManager_IsFlagValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagManager_IsFlagValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagManager::execIsFlagValid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_category);
	P_GET_PROPERTY(FStrProperty,Z_Param_flagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFlagValid(Z_Param_category,Z_Param_flagName);
	P_NATIVE_END;
}
// End Class UFlagManager Function IsFlagValid

// Begin Class UFlagManager Function ResetAllFlags
struct Z_Construct_UFunction_UFlagManager_ResetAllFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagManager_ResetAllFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagManager, nullptr, "ResetAllFlags", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_ResetAllFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagManager_ResetAllFlags_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFlagManager_ResetAllFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagManager_ResetAllFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagManager::execResetAllFlags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllFlags();
	P_NATIVE_END;
}
// End Class UFlagManager Function ResetAllFlags

// Begin Class UFlagManager Function ResetFlagCategory
struct Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics
{
	struct FlagManager_eventResetFlagCategory_Parms
	{
		FString category;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_category;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagManager_eventResetFlagCategory_Parms, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::NewProp_category,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagManager, nullptr, "ResetFlagCategory", nullptr, nullptr, Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::FlagManager_eventResetFlagCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::FlagManager_eventResetFlagCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagManager_ResetFlagCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagManager_ResetFlagCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagManager::execResetFlagCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_category);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetFlagCategory(Z_Param_category);
	P_NATIVE_END;
}
// End Class UFlagManager Function ResetFlagCategory

// Begin Class UFlagManager
void UFlagManager::StaticRegisterNativesUFlagManager()
{
	UClass* Class = UFlagManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "decrementFlag", &UFlagManager::execdecrementFlag },
		{ "EditFlag", &UFlagManager::execEditFlag },
		{ "GetFlagValue", &UFlagManager::execGetFlagValue },
		{ "incrementFlag", &UFlagManager::execincrementFlag },
		{ "IsFlagTrigger", &UFlagManager::execIsFlagTrigger },
		{ "IsFlagValid", &UFlagManager::execIsFlagValid },
		{ "ResetAllFlags", &UFlagManager::execResetAllFlags },
		{ "ResetFlagCategory", &UFlagManager::execResetFlagCategory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlagManager);
UClass* Z_Construct_UClass_UFlagManager_NoRegister()
{
	return UFlagManager::StaticClass();
}
struct Z_Construct_UClass_UFlagManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FlagManager.h" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlagManager_decrementFlag, "decrementFlag" }, // 2623032445
		{ &Z_Construct_UFunction_UFlagManager_EditFlag, "EditFlag" }, // 1866609401
		{ &Z_Construct_UFunction_UFlagManager_GetFlagValue, "GetFlagValue" }, // 20694777
		{ &Z_Construct_UFunction_UFlagManager_incrementFlag, "incrementFlag" }, // 791681782
		{ &Z_Construct_UFunction_UFlagManager_IsFlagTrigger, "IsFlagTrigger" }, // 47816636
		{ &Z_Construct_UFunction_UFlagManager_IsFlagValid, "IsFlagValid" }, // 3061586877
		{ &Z_Construct_UFunction_UFlagManager_ResetAllFlags, "ResetAllFlags" }, // 1645965878
		{ &Z_Construct_UFunction_UFlagManager_ResetFlagCategory, "ResetFlagCategory" }, // 3156889898
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlagManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlagManager_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlagList, METADATA_PARAMS(0, nullptr) }; // 795442761
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlagManager_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlagManager, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 795442761
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlagManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlagManager_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlagManager_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlagManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlagManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlagManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlagManager_Statics::ClassParams = {
	&UFlagManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFlagManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlagManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlagManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlagManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlagManager()
{
	if (!Z_Registration_Info_UClass_UFlagManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlagManager.OuterSingleton, Z_Construct_UClass_UFlagManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlagManager.OuterSingleton;
}
template<> CLEPORTE_API UClass* StaticClass<UFlagManager>()
{
	return UFlagManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlagManager);
UFlagManager::~UFlagManager() {}
// End Class UFlagManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlagManager, UFlagManager::StaticClass, TEXT("UFlagManager"), &Z_Registration_Info_UClass_UFlagManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlagManager), 3990733003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_3802565198(TEXT("/Script/ClePorte"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
