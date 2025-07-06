// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/KeyDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyDoor() {}

// Begin Cross Module References
CLEPORTE_API UClass* Z_Construct_UClass_AKeyDoor();
CLEPORTE_API UClass* Z_Construct_UClass_AKeyDoor_NoRegister();
CLEPORTE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin Class AKeyDoor
void AKeyDoor::StaticRegisterNativesAKeyDoor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKeyDoor);
UClass* Z_Construct_UClass_AKeyDoor_NoRegister()
{
	return AKeyDoor::StaticClass();
}
struct Z_Construct_UClass_AKeyDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class UStaticMeshComponent;\n//class USceneComponent;\n//class UMaterialInterface;\n" },
#endif
		{ "IncludePath", "KeyDoor.h" },
		{ "ModuleRelativePath", "KeyDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UStaticMeshComponent;\nclass USceneComponent;\nclass UMaterialInterface;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Key" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Id unique de la cl\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "KeyDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id unique de la cl\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyMesh_MetaData[] = {
		{ "Category", "Key" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh assignable \xef\xbf\xbd la cl\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "KeyDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh assignable \xef\xbf\xbd la cl\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Key" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Liste de mat\xef\xbf\xbdriaux utilisable en fonction de l'id\n" },
#endif
		{ "ModuleRelativePath", "KeyDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Liste de mat\xef\xbf\xbdriaux utilisable en fonction de l'id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Racine qui sera utilis\xef\xbf\xbd pour le bp\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Racine qui sera utilis\xef\xbf\xbd pour le bp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Le mesh \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Le mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIPoint_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKeyDoor_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyDoor, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyDoor_Statics::NewProp_KeyMesh = { "KeyMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyDoor, KeyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyMesh_MetaData), NewProp_KeyMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyDoor_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AKeyDoor_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyDoor, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyDoor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyDoor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyDoor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyDoor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyDoor_Statics::NewProp_UIPoint = { "UIPoint", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyDoor, UIPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIPoint_MetaData), NewProp_UIPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyDoor_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyDoor_Statics::NewProp_KeyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyDoor_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyDoor_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyDoor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyDoor_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyDoor_Statics::NewProp_UIPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKeyDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AKeyDoor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AKeyDoor, IInteractable), false },  // 2460469446
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeyDoor_Statics::ClassParams = {
	&AKeyDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKeyDoor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKeyDoor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_AKeyDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKeyDoor()
{
	if (!Z_Registration_Info_UClass_AKeyDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeyDoor.OuterSingleton, Z_Construct_UClass_AKeyDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKeyDoor.OuterSingleton;
}
template<> CLEPORTE_API UClass* StaticClass<AKeyDoor>()
{
	return AKeyDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyDoor);
AKeyDoor::~AKeyDoor() {}
// End Class AKeyDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_KeyDoor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeyDoor, AKeyDoor::StaticClass, TEXT("AKeyDoor"), &Z_Registration_Info_UClass_AKeyDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeyDoor), 4080792014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_KeyDoor_h_2891531013(TEXT("/Script/ClePorte"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_KeyDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_KeyDoor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
