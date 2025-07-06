// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/LeHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeHUD() {}

// Begin Cross Module References
CLEPORTE_API UClass* Z_Construct_UClass_ALeHUD();
CLEPORTE_API UClass* Z_Construct_UClass_ALeHUD_NoRegister();
CLEPORTE_API UClass* Z_Construct_UClass_UInteractionWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin Class ALeHUD
void ALeHUD::StaticRegisterNativesALeHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeHUD);
UClass* Z_Construct_UClass_ALeHUD_NoRegister()
{
	return ALeHUD::StaticClass();
}
struct Z_Construct_UClass_ALeHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LeHUD.h" },
		{ "ModuleRelativePath", "LeHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mInteractionWidgetPrefab_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LeHUD" },
		{ "ModuleRelativePath", "LeHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_mInteractionWidgetPrefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALeHUD_Statics::NewProp_mInteractionWidgetPrefab = { "mInteractionWidgetPrefab", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeHUD, mInteractionWidgetPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_UInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mInteractionWidgetPrefab_MetaData), NewProp_mInteractionWidgetPrefab_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeHUD_Statics::NewProp_mInteractionWidgetPrefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALeHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeHUD_Statics::ClassParams = {
	&ALeHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALeHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALeHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ALeHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALeHUD()
{
	if (!Z_Registration_Info_UClass_ALeHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeHUD.OuterSingleton, Z_Construct_UClass_ALeHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALeHUD.OuterSingleton;
}
template<> CLEPORTE_API UClass* StaticClass<ALeHUD>()
{
	return ALeHUD::StaticClass();
}
ALeHUD::ALeHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALeHUD);
ALeHUD::~ALeHUD() {}
// End Class ALeHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALeHUD, ALeHUD::StaticClass, TEXT("ALeHUD"), &Z_Registration_Info_UClass_ALeHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeHUD), 2664304585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_2690455524(TEXT("/Script/ClePorte"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_LeHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
