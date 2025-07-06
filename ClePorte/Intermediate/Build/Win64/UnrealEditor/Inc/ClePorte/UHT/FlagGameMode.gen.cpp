// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/FlagGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlagGameMode() {}

// Begin Cross Module References
CLEPORTE_API UClass* Z_Construct_UClass_AFlagGameMode();
CLEPORTE_API UClass* Z_Construct_UClass_AFlagGameMode_NoRegister();
CLEPORTE_API UClass* Z_Construct_UClass_UFlagManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin Class AFlagGameMode Function GetFlagManager
struct Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics
{
	struct FlagGameMode_eventGetFlagManager_Parms
	{
		UFlagManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "FlagGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlagGameMode_eventGetFlagManager_Parms, ReturnValue), Z_Construct_UClass_UFlagManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlagGameMode, nullptr, "GetFlagManager", nullptr, nullptr, Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::FlagGameMode_eventGetFlagManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::FlagGameMode_eventGetFlagManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlagGameMode_GetFlagManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlagGameMode_GetFlagManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlagGameMode::execGetFlagManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFlagManager**)Z_Param__Result=P_THIS->GetFlagManager();
	P_NATIVE_END;
}
// End Class AFlagGameMode Function GetFlagManager

// Begin Class AFlagGameMode
void AFlagGameMode::StaticRegisterNativesAFlagGameMode()
{
	UClass* Class = AFlagGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFlagManager", &AFlagGameMode::execGetFlagManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlagGameMode);
UClass* Z_Construct_UClass_AFlagGameMode_NoRegister()
{
	return AFlagGameMode::StaticClass();
}
struct Z_Construct_UClass_AFlagGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FlagGameMode.h" },
		{ "ModuleRelativePath", "FlagGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mFlagManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Flag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlagGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mFlagManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlagGameMode_GetFlagManager, "GetFlagManager" }, // 736883874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlagGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlagGameMode_Statics::NewProp_mFlagManager = { "mFlagManager", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlagGameMode, mFlagManager), Z_Construct_UClass_UFlagManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mFlagManager_MetaData), NewProp_mFlagManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlagGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlagGameMode_Statics::NewProp_mFlagManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlagGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlagGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlagGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlagGameMode_Statics::ClassParams = {
	&AFlagGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFlagGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlagGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlagGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlagGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlagGameMode()
{
	if (!Z_Registration_Info_UClass_AFlagGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlagGameMode.OuterSingleton, Z_Construct_UClass_AFlagGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlagGameMode.OuterSingleton;
}
template<> CLEPORTE_API UClass* StaticClass<AFlagGameMode>()
{
	return AFlagGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlagGameMode);
AFlagGameMode::~AFlagGameMode() {}
// End Class AFlagGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlagGameMode, AFlagGameMode::StaticClass, TEXT("AFlagGameMode"), &Z_Registration_Info_UClass_AFlagGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlagGameMode), 572061221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_3508263675(TEXT("/Script/ClePorte"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_FlagGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
