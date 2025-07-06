// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/FlagTrigger.h"
#include "ClePorte/Flag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlagTrigger() {}

// Begin Cross Module References
CLEPORTE_API UClass* Z_Construct_UClass_UFlagTrigger();
CLEPORTE_API UClass* Z_Construct_UClass_UFlagTrigger_NoRegister();
CLEPORTE_API UFunction* Z_Construct_UDelegateFunction_ClePorte_FlagValueChanged__DelegateSignature();
CLEPORTE_API UScriptStruct* Z_Construct_UScriptStruct_FFlag();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin Class UFlagTrigger Function FlagTriggerCallback
struct Z_Construct_UFunction_UFlagTrigger_FlagTriggerCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagTrigger_FlagTriggerCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagTrigger, nullptr, "FlagTriggerCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_FlagTriggerCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagTrigger_FlagTriggerCallback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFlagTrigger_FlagTriggerCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagTrigger_FlagTriggerCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagTrigger::execFlagTriggerCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlagTriggerCallback();
	P_NATIVE_END;
}
// End Class UFlagTrigger Function FlagTriggerCallback

// Begin Class UFlagTrigger Function GetFlagListNumber
struct Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics
{
	struct FlagTrigger_eventGetFlagListNumber_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagTrigger_eventGetFlagListNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagTrigger, nullptr, "GetFlagListNumber", nullptr, nullptr, Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::FlagTrigger_eventGetFlagListNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::FlagTrigger_eventGetFlagListNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagTrigger::execGetFlagListNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFlagListNumber();
	P_NATIVE_END;
}
// End Class UFlagTrigger Function GetFlagListNumber

// Begin Class UFlagTrigger Function GetFlagValue
struct Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics
{
	struct FlagTrigger_eventGetFlagValue_Parms
	{
		int32 NumberList;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::NewProp_NumberList = { "NumberList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagTrigger_eventGetFlagValue_Parms, NumberList), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagTrigger_eventGetFlagValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::NewProp_NumberList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagTrigger, nullptr, "GetFlagValue", nullptr, nullptr, Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::FlagTrigger_eventGetFlagValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::FlagTrigger_eventGetFlagValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagTrigger_GetFlagValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagTrigger_GetFlagValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagTrigger::execGetFlagValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFlagValue(Z_Param_NumberList);
	P_NATIVE_END;
}
// End Class UFlagTrigger Function GetFlagValue

// Begin Class UFlagTrigger Function IsFlagTriggered
struct Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics
{
	struct FlagTrigger_eventIsFlagTriggered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlagTrigger_eventIsFlagTriggered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlagTrigger_eventIsFlagTriggered_Parms), &Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagTrigger, nullptr, "IsFlagTriggered", nullptr, nullptr, Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::FlagTrigger_eventIsFlagTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::FlagTrigger_eventIsFlagTriggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagTrigger::execIsFlagTriggered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFlagTriggered();
	P_NATIVE_END;
}
// End Class UFlagTrigger Function IsFlagTriggered

// Begin Class UFlagTrigger Function IsOneFlagTriggered
struct Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics
{
	struct FlagTrigger_eventIsOneFlagTriggered_Parms
	{
		int32 flag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_flag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagTrigger_eventIsOneFlagTriggered_Parms, flag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlagTrigger_eventIsOneFlagTriggered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlagTrigger_eventIsOneFlagTriggered_Parms), &Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::NewProp_flag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagTrigger, nullptr, "IsOneFlagTriggered", nullptr, nullptr, Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::FlagTrigger_eventIsOneFlagTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::FlagTrigger_eventIsOneFlagTriggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagTrigger::execIsOneFlagTriggered)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_flag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOneFlagTriggered(Z_Param_flag);
	P_NATIVE_END;
}
// End Class UFlagTrigger Function IsOneFlagTriggered

// Begin Class UFlagTrigger Function setFlagListNumber
struct Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics
{
	struct FlagTrigger_eventsetFlagListNumber_Parms
	{
		int32 number;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagTrigger_eventsetFlagListNumber_Parms, number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::NewProp_number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlagTrigger, nullptr, "setFlagListNumber", nullptr, nullptr, Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::FlagTrigger_eventsetFlagListNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::FlagTrigger_eventsetFlagListNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlagTrigger_setFlagListNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlagTrigger_setFlagListNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlagTrigger::execsetFlagListNumber)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_number);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->setFlagListNumber(Z_Param_number);
	P_NATIVE_END;
}
// End Class UFlagTrigger Function setFlagListNumber

// Begin Class UFlagTrigger
void UFlagTrigger::StaticRegisterNativesUFlagTrigger()
{
	UClass* Class = UFlagTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlagTriggerCallback", &UFlagTrigger::execFlagTriggerCallback },
		{ "GetFlagListNumber", &UFlagTrigger::execGetFlagListNumber },
		{ "GetFlagValue", &UFlagTrigger::execGetFlagValue },
		{ "IsFlagTriggered", &UFlagTrigger::execIsFlagTriggered },
		{ "IsOneFlagTriggered", &UFlagTrigger::execIsOneFlagTriggered },
		{ "setFlagListNumber", &UFlagTrigger::execsetFlagListNumber },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlagTrigger);
UClass* Z_Construct_UClass_UFlagTrigger_NoRegister()
{
	return UFlagTrigger::StaticClass();
}
struct Z_Construct_UClass_UFlagTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FlagTrigger.h" },
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlagChanged_MetaData[] = {
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mFlags_MetaData[] = {
		{ "AllPrivateAccess", "true" },
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mListen_MetaData[] = {
		{ "AllPrivateAccess", "true" },
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagNumber_MetaData[] = {
		{ "AllPrivateAccess", "true" },
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlagChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_mFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_mFlags;
	static void NewProp_mListen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_mListen;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FlagNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlagTrigger_FlagTriggerCallback, "FlagTriggerCallback" }, // 319807759
		{ &Z_Construct_UFunction_UFlagTrigger_GetFlagListNumber, "GetFlagListNumber" }, // 2876316674
		{ &Z_Construct_UFunction_UFlagTrigger_GetFlagValue, "GetFlagValue" }, // 1459497879
		{ &Z_Construct_UFunction_UFlagTrigger_IsFlagTriggered, "IsFlagTriggered" }, // 4259964239
		{ &Z_Construct_UFunction_UFlagTrigger_IsOneFlagTriggered, "IsOneFlagTriggered" }, // 3476420715
		{ &Z_Construct_UFunction_UFlagTrigger_setFlagListNumber, "setFlagListNumber" }, // 2121498777
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlagTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlagTrigger_Statics::NewProp_OnFlagChanged = { "OnFlagChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlagTrigger, OnFlagChanged), Z_Construct_UDelegateFunction_ClePorte_FlagValueChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlagChanged_MetaData), NewProp_OnFlagChanged_MetaData) }; // 3347370769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlagTrigger_Statics::NewProp_mFlags_Inner = { "mFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlag, METADATA_PARAMS(0, nullptr) }; // 347593685
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlagTrigger_Statics::NewProp_mFlags = { "mFlags", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlagTrigger, mFlags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mFlags_MetaData), NewProp_mFlags_MetaData) }; // 347593685
void Z_Construct_UClass_UFlagTrigger_Statics::NewProp_mListen_SetBit(void* Obj)
{
	((UFlagTrigger*)Obj)->mListen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlagTrigger_Statics::NewProp_mListen = { "mListen", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlagTrigger), &Z_Construct_UClass_UFlagTrigger_Statics::NewProp_mListen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mListen_MetaData), NewProp_mListen_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlagTrigger_Statics::NewProp_FlagNumber = { "FlagNumber", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlagTrigger, FlagNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagNumber_MetaData), NewProp_FlagNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlagTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlagTrigger_Statics::NewProp_OnFlagChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlagTrigger_Statics::NewProp_mFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlagTrigger_Statics::NewProp_mFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlagTrigger_Statics::NewProp_mListen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlagTrigger_Statics::NewProp_FlagNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlagTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlagTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlagTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlagTrigger_Statics::ClassParams = {
	&UFlagTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFlagTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlagTrigger_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlagTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlagTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlagTrigger()
{
	if (!Z_Registration_Info_UClass_UFlagTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlagTrigger.OuterSingleton, Z_Construct_UClass_UFlagTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlagTrigger.OuterSingleton;
}
template<> CLEPORTE_API UClass* StaticClass<UFlagTrigger>()
{
	return UFlagTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlagTrigger);
UFlagTrigger::~UFlagTrigger() {}
// End Class UFlagTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlagTrigger, UFlagTrigger::StaticClass, TEXT("UFlagTrigger"), &Z_Registration_Info_UClass_UFlagTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlagTrigger), 2139000411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_3347036496(TEXT("/Script/ClePorte"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
