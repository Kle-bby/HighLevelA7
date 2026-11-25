// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Pickup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePickup() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_APickup();
PLATFORMER2D_API UClass* Z_Construct_UClass_APickup_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UPickupDataAsset_NoRegister();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EPickupState();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EPickupType();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPickupType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPickupType;
static UEnum* EPickupType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPickupType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPickupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EPickupType, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EPickupType"));
	}
	return Z_Registration_Info_UEnum_EPickupType.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EPickupType>()
{
	return EPickupType_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EPickupType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Coin.DisplayName", "Coin" },
		{ "Coin.Name", "EPickupType::Coin" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "Mushroom.DisplayName", "Mushroom" },
		{ "Mushroom.Name", "EPickupType::Mushroom" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EPickupType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPickupType::Unknown", (int64)EPickupType::Unknown },
		{ "EPickupType::Mushroom", (int64)EPickupType::Mushroom },
		{ "EPickupType::Coin", (int64)EPickupType::Coin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EPickupType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EPickupType",
	"EPickupType",
	Z_Construct_UEnum_Platformer2D_EPickupType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EPickupType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EPickupType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EPickupType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EPickupType()
{
	if (!Z_Registration_Info_UEnum_EPickupType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPickupType.InnerSingleton, Z_Construct_UEnum_Platformer2D_EPickupType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPickupType.InnerSingleton;
}
// ********** End Enum EPickupType *****************************************************************

// ********** Begin Enum EPickupState **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPickupState;
static UEnum* EPickupState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPickupState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPickupState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EPickupState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EPickupState"));
	}
	return Z_Registration_Info_UEnum_EPickupState.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EPickupState>()
{
	return EPickupState_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EPickupState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EPickupState::Active" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "Spawning.DisplayName", "Spawning" },
		{ "Spawning.Name", "EPickupState::Spawning" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EPickupState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPickupState::Unknown", (int64)EPickupState::Unknown },
		{ "EPickupState::Spawning", (int64)EPickupState::Spawning },
		{ "EPickupState::Active", (int64)EPickupState::Active },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EPickupState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EPickupState",
	"EPickupState",
	Z_Construct_UEnum_Platformer2D_EPickupState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EPickupState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EPickupState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EPickupState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EPickupState()
{
	if (!Z_Registration_Info_UEnum_EPickupState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPickupState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EPickupState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPickupState.InnerSingleton;
}
// ********** End Enum EPickupState ****************************************************************

// ********** Begin Class APickup ******************************************************************
void APickup::StaticRegisterNativesAPickup()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APickup;
UClass* APickup::GetPrivateStaticClass()
{
	using TClass = APickup;
	if (!Z_Registration_Info_UClass_APickup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Pickup"),
			Z_Registration_Info_UClass_APickup.InnerSingleton,
			StaticRegisterNativesAPickup,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APickup.InnerSingleton;
}
UClass* Z_Construct_UClass_APickup_NoRegister()
{
	return APickup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "Data Asset" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, DataAsset), Z_Construct_UClass_UPickupDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_DataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
	&APickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams), Z_Construct_UClass_APickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickup()
{
	if (!Z_Registration_Info_UClass_APickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickup.OuterSingleton, Z_Construct_UClass_APickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickup.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
APickup::~APickup() {}
// ********** End Class APickup ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h__Script_Platformer2D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPickupType_StaticEnum, TEXT("EPickupType"), &Z_Registration_Info_UEnum_EPickupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 693801512U) },
		{ EPickupState_StaticEnum, TEXT("EPickupState"), &Z_Registration_Info_UEnum_EPickupState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 705100635U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickup, APickup::StaticClass, TEXT("APickup"), &Z_Registration_Info_UClass_APickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickup), 3001898211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h__Script_Platformer2D_3543154137(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h__Script_Platformer2D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h__Script_Platformer2D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
