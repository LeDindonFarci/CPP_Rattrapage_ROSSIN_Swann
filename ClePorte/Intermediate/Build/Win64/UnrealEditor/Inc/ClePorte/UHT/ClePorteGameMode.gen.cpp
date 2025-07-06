// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/ClePorteGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClePorteGameMode() {}

// Begin Cross Module References
CLEPORTE_API UClass* Z_Construct_UClass_AClePorteGameMode();
CLEPORTE_API UClass* Z_Construct_UClass_AClePorteGameMode_NoRegister();
CLEPORTE_API UClass* Z_Construct_UClass_UFlagManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin Class AClePorteGameMode Function GetFlagManager
struct Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics
{
	struct ClePorteGameMode_eventGetFlagManager_Parms
	{
		UFlagManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "ClePorteGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClePorteGameMode_eventGetFlagManager_Parms, ReturnValue), Z_Construct_UClass_UFlagManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClePorteGameMode, nullptr, "GetFlagManager", nullptr, nullptr, Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::ClePorteGameMode_eventGetFlagManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::ClePorteGameMode_eventGetFlagManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClePorteGameMode_GetFlagManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClePorteGameMode_GetFlagManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClePorteGameMode::execGetFlagManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFlagManager**)Z_Param__Result=P_THIS->GetFlagManager();
	P_NATIVE_END;
}
// End Class AClePorteGameMode Function GetFlagManager

// Begin Class AClePorteGameMode
void AClePorteGameMode::StaticRegisterNativesAClePorteGameMode()
{
	UClass* Class = AClePorteGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFlagManager", &AClePorteGameMode::execGetFlagManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClePorteGameMode);
UClass* Z_Construct_UClass_AClePorteGameMode_NoRegister()
{
	return AClePorteGameMode::StaticClass();
}
struct Z_Construct_UClass_AClePorteGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ClePorteGameMode.h" },
		{ "ModuleRelativePath", "ClePorteGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mFlagManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Flag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClePorteGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mFlagManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AClePorteGameMode_GetFlagManager, "GetFlagManager" }, // 2641807595
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClePorteGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClePorteGameMode_Statics::NewProp_mFlagManager = { "mFlagManager", nullptr, (EPropertyFlags)0x004000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClePorteGameMode, mFlagManager), Z_Construct_UClass_UFlagManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mFlagManager_MetaData), NewProp_mFlagManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClePorteGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClePorteGameMode_Statics::NewProp_mFlagManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClePorteGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AClePorteGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClePorteGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClePorteGameMode_Statics::ClassParams = {
	&AClePorteGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AClePorteGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AClePorteGameMode_Statics::PropPointers),
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClePorteGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AClePorteGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClePorteGameMode()
{
	if (!Z_Registration_Info_UClass_AClePorteGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClePorteGameMode.OuterSingleton, Z_Construct_UClass_AClePorteGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClePorteGameMode.OuterSingleton;
}
template<> CLEPORTE_API UClass* StaticClass<AClePorteGameMode>()
{
	return AClePorteGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClePorteGameMode);
AClePorteGameMode::~AClePorteGameMode() {}
// End Class AClePorteGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClePorteGameMode, AClePorteGameMode::StaticClass, TEXT("AClePorteGameMode"), &Z_Registration_Info_UClass_AClePorteGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClePorteGameMode), 2682783005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_2368079243(TEXT("/Script/ClePorte"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_ClePorteGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
