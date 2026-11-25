// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/PickupDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePickupDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UPickupDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UPickupDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPickupDataAsset *********************************************************
void UPickupDataAsset::StaticRegisterNativesUPickupDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPickupDataAsset;
UClass* UPickupDataAsset::GetPrivateStaticClass()
{
	using TClass = UPickupDataAsset;
	if (!Z_Registration_Info_UClass_UPickupDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PickupDataAsset"),
			Z_Registration_Info_UClass_UPickupDataAsset.InnerSingleton,
			StaticRegisterNativesUPickupDataAsset,
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
	return Z_Registration_Info_UClass_UPickupDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UPickupDataAsset_NoRegister()
{
	return UPickupDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPickupDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PickupDataAsset.h" },
		{ "ModuleRelativePath", "PickupDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemBoxAnimationDuration_MetaData[] = {
		{ "Category", "ItemBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ItemBox settings\n" },
#endif
		{ "ModuleRelativePath", "PickupDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ItemBox settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemBoxCoinImpulseZ_MetaData[] = {
		{ "Category", "ItemBox" },
		{ "ModuleRelativePath", "PickupDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupAnimationDuration_MetaData[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pickup settings\n" },
#endif
		{ "ModuleRelativePath", "PickupDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pickup settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MushroomSpeed_MetaData[] = {
		{ "Category", "Mushroom Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mushroom settings\n" },
#endif
		{ "ModuleRelativePath", "PickupDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mushroom settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemBoxAnimationDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemBoxCoinImpulseZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PickupAnimationDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MushroomSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPickupDataAsset_Statics::NewProp_ItemBoxAnimationDuration = { "ItemBoxAnimationDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPickupDataAsset, ItemBoxAnimationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemBoxAnimationDuration_MetaData), NewProp_ItemBoxAnimationDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPickupDataAsset_Statics::NewProp_ItemBoxCoinImpulseZ = { "ItemBoxCoinImpulseZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPickupDataAsset, ItemBoxCoinImpulseZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemBoxCoinImpulseZ_MetaData), NewProp_ItemBoxCoinImpulseZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPickupDataAsset_Statics::NewProp_PickupAnimationDuration = { "PickupAnimationDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPickupDataAsset, PickupAnimationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupAnimationDuration_MetaData), NewProp_PickupAnimationDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPickupDataAsset_Statics::NewProp_MushroomSpeed = { "MushroomSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPickupDataAsset, MushroomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MushroomSpeed_MetaData), NewProp_MushroomSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPickupDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupDataAsset_Statics::NewProp_ItemBoxAnimationDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupDataAsset_Statics::NewProp_ItemBoxCoinImpulseZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupDataAsset_Statics::NewProp_PickupAnimationDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupDataAsset_Statics::NewProp_MushroomSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPickupDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupDataAsset_Statics::ClassParams = {
	&UPickupDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPickupDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPickupDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickupDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPickupDataAsset()
{
	if (!Z_Registration_Info_UClass_UPickupDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupDataAsset.OuterSingleton, Z_Construct_UClass_UPickupDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPickupDataAsset.OuterSingleton;
}
UPickupDataAsset::UPickupDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupDataAsset);
UPickupDataAsset::~UPickupDataAsset() {}
// ********** End Class UPickupDataAsset ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PickupDataAsset_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPickupDataAsset, UPickupDataAsset::StaticClass, TEXT("UPickupDataAsset"), &Z_Registration_Info_UClass_UPickupDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupDataAsset), 1994147721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PickupDataAsset_h__Script_Platformer2D_3858764513(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PickupDataAsset_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PickupDataAsset_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
