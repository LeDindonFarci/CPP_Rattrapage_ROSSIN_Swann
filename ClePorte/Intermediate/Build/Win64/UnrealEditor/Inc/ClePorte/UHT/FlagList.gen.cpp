// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/FlagList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlagList() {}

// Begin Cross Module References
CLEPORTE_API UScriptStruct* Z_Construct_UScriptStruct_FFlagList();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin ScriptStruct FFlagList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlagList;
class UScriptStruct* FFlagList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlagList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlagList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlagList, (UObject*)Z_Construct_UPackage__Script_ClePorte(), TEXT("FlagList"));
	}
	return Z_Registration_Info_UScriptStruct_FlagList.OuterSingleton;
}
template<> CLEPORTE_API UScriptStruct* StaticStruct<FFlagList>()
{
	return FFlagList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlagList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FlagList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlagList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlagList_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlagList, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlagList_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlagList_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlagList, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlagList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlagList_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlagList_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlagList_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlagList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlagList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
	nullptr,
	&NewStructOps,
	"FlagList",
	Z_Construct_UScriptStruct_FFlagList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlagList_Statics::PropPointers),
	sizeof(FFlagList),
	alignof(FFlagList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlagList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlagList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlagList()
{
	if (!Z_Registration_Info_UScriptStruct_FlagList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlagList.InnerSingleton, Z_Construct_UScriptStruct_FFlagList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlagList.InnerSingleton;
}
// End ScriptStruct FFlagList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagList_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlagList::StaticStruct, Z_Construct_UScriptStruct_FFlagList_Statics::NewStructOps, TEXT("FlagList"), &Z_Registration_Info_UScriptStruct_FlagList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlagList), 795442761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagList_h_3822153911(TEXT("/Script/ClePorte"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagList_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
