// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/Flag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlag() {}

// Begin Cross Module References
CLEPORTE_API UScriptStruct* Z_Construct_UScriptStruct_FFlag();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin ScriptStruct FFlag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Flag;
class UScriptStruct* FFlag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Flag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Flag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlag, (UObject*)Z_Construct_UPackage__Script_ClePorte(), TEXT("Flag"));
	}
	return Z_Registration_Info_UScriptStruct_Flag.OuterSingleton;
}
template<> CLEPORTE_API UScriptStruct* StaticStruct<FFlag>()
{
	return FFlag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Flag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Flag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagName_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Flag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Flag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exact_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Flag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlagName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_Exact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Exact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlag_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlag, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlag_Statics::NewProp_FlagName = { "FlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlag, FlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagName_MetaData), NewProp_FlagName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlag_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlag, value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
void Z_Construct_UScriptStruct_FFlag_Statics::NewProp_Exact_SetBit(void* Obj)
{
	((FFlag*)Obj)->Exact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlag_Statics::NewProp_Exact = { "Exact", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFlag), &Z_Construct_UScriptStruct_FFlag_Statics::NewProp_Exact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exact_MetaData), NewProp_Exact_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlag_Statics::NewProp_category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlag_Statics::NewProp_FlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlag_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlag_Statics::NewProp_Exact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
	nullptr,
	&NewStructOps,
	"Flag",
	Z_Construct_UScriptStruct_FFlag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlag_Statics::PropPointers),
	sizeof(FFlag),
	alignof(FFlag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlag()
{
	if (!Z_Registration_Info_UScriptStruct_Flag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Flag.InnerSingleton, Z_Construct_UScriptStruct_FFlag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Flag.InnerSingleton;
}
// End ScriptStruct FFlag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Flag_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlag::StaticStruct, Z_Construct_UScriptStruct_FFlag_Statics::NewStructOps, TEXT("Flag"), &Z_Registration_Info_UScriptStruct_Flag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlag), 347593685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Flag_h_2404870230(TEXT("/Script/ClePorte"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Flag_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Flag_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
