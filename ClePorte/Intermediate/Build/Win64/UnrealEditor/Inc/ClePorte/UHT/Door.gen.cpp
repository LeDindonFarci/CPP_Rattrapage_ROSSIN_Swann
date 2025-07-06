// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClePorte/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}

// Begin Cross Module References
CLEPORTE_API UClass* Z_Construct_UClass_ADoor();
CLEPORTE_API UClass* Z_Construct_UClass_ADoor_NoRegister();
CLEPORTE_API UClass* Z_Construct_UClass_UFlagTrigger_NoRegister();
CLEPORTE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ClePorte();
// End Cross Module References

// Begin Class ADoor Function MoveDoor
struct Z_Construct_UFunction_ADoor_MoveDoor_Statics
{
	struct Door_eventMoveDoor_Parms
	{
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADoor_MoveDoor_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Door_eventMoveDoor_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_MoveDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_MoveDoor_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_MoveDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_MoveDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "MoveDoor", nullptr, nullptr, Z_Construct_UFunction_ADoor_MoveDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_MoveDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_MoveDoor_Statics::Door_eventMoveDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_MoveDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_MoveDoor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoor_MoveDoor_Statics::Door_eventMoveDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_MoveDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_MoveDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execMoveDoor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveDoor(Z_Param_Time);
	P_NATIVE_END;
}
// End Class ADoor Function MoveDoor

// Begin Class ADoor
void ADoor::StaticRegisterNativesADoor()
{
	UClass* Class = ADoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveDoor", &ADoor::execMoveDoor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
UClass* Z_Construct_UClass_ADoor_NoRegister()
{
	return ADoor::StaticClass();
}
struct Z_Construct_UClass_ADoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftDoor_MetaData[] = {
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tout ceci permet de cr\xef\xbf\xbd""e les futur composant de tout ce dont on a besoin, entre autre, les meshs de la porte, les serrures, ainsi que les UI dont nous aurons besoin\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tout ceci permet de cr\xef\xbf\xbd""e les futur composant de tout ce dont on a besoin, entre autre, les meshs de la porte, les serrures, ainsi que les UI dont nous aurons besoin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightDoor_MetaData[] = {
		{ "Category", "Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLock_MetaData[] = {
		{ "Category", "Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightLock_MetaData[] = {
		{ "Category", "Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightUI_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Timeline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ceci permet de cr\xef\xbf\xbd""e la curve qu'on utilise lors de notre Timeline\n" },
#endif
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ceci permet de cr\xef\xbf\xbd""e la curve qu'on utilise lors de notre Timeline" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenSpeed_MetaData[] = {
		{ "Category", "Timeline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ici on vient setup la vitesse d'animation\n" },
#endif
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ici on vient setup la vitesse d'animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKey0Inserted_MetaData[] = {
		{ "Category", "Flags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//L\xef\xbf\xbd on cr\xef\xbf\xbd""e les flag de d\xef\xbf\xbdtection des cl\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "L\xef\xbf\xbd on cr\xef\xbf\xbd""e les flag de d\xef\xbf\xbdtection des cl\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKey1Inserted_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeline_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ici on cr\xef\xbf\xbd""e la timeline\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ici on cr\xef\xbf\xbd""e la timeline" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagTrigger_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftInitialRotation_MetaData[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightInitialRotation_MetaData[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineCallback_MetaData[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftLock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightLock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenSpeed;
	static void NewProp_bKey0Inserted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKey0Inserted;
	static void NewProp_bKey1Inserted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKey1Inserted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Timeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagTrigger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftInitialRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightInitialRotation;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TimelineCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_MoveDoor, "MoveDoor" }, // 2038825024
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_LeftDoor = { "LeftDoor", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, LeftDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftDoor_MetaData), NewProp_LeftDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RightDoor = { "RightDoor", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RightDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightDoor_MetaData), NewProp_RightDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_LeftLock = { "LeftLock", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, LeftLock), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLock_MetaData), NewProp_LeftLock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RightLock = { "RightLock", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RightLock), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightLock_MetaData), NewProp_RightLock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_CenterUI = { "CenterUI", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, CenterUI), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterUI_MetaData), NewProp_CenterUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_LeftUI = { "LeftUI", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, LeftUI), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftUI_MetaData), NewProp_LeftUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RightUI = { "RightUI", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RightUI), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightUI_MetaData), NewProp_RightUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_OpenSpeed = { "OpenSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, OpenSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenSpeed_MetaData), NewProp_OpenSpeed_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bKey0Inserted_SetBit(void* Obj)
{
	((ADoor*)Obj)->bKey0Inserted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bKey0Inserted = { "bKey0Inserted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bKey0Inserted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKey0Inserted_MetaData), NewProp_bKey0Inserted_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bKey1Inserted_SetBit(void* Obj)
{
	((ADoor*)Obj)->bKey1Inserted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bKey1Inserted = { "bKey1Inserted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bKey1Inserted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKey1Inserted_MetaData), NewProp_bKey1Inserted_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_Timeline = { "Timeline", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, Timeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeline_MetaData), NewProp_Timeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_FlagTrigger = { "FlagTrigger", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, FlagTrigger), Z_Construct_UClass_UFlagTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagTrigger_MetaData), NewProp_FlagTrigger_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_LeftInitialRotation = { "LeftInitialRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, LeftInitialRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftInitialRotation_MetaData), NewProp_LeftInitialRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RightInitialRotation = { "RightInitialRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RightInitialRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightInitialRotation_MetaData), NewProp_RightInitialRotation_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_TimelineCallback = { "TimelineCallback", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, TimelineCallback), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineCallback_MetaData), NewProp_TimelineCallback_MetaData) }; // 2854256714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_LeftDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RightDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_LeftLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RightLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_CenterUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_LeftUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RightUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_OpenSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bKey0Inserted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bKey1Inserted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_Timeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_FlagTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_LeftInitialRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RightInitialRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_TimelineCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ClePorte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ADoor, IInteractable), false },  // 2460469446
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
	&ADoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoor()
{
	if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor.OuterSingleton;
}
template<> CLEPORTE_API UClass* StaticClass<ADoor>()
{
	return ADoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
ADoor::~ADoor() {}
// End Class ADoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Door_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 3083769100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Door_h_2834552433(TEXT("/Script/ClePorte"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_ClePorte_Source_ClePorte_Door_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
