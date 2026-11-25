// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/EnemyDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UEnemyDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UEnemyDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnemyDataAsset **********************************************************
void UEnemyDataAsset::StaticRegisterNativesUEnemyDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemyDataAsset;
UClass* UEnemyDataAsset::GetPrivateStaticClass()
{
	using TClass = UEnemyDataAsset;
	if (!Z_Registration_Info_UClass_UEnemyDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyDataAsset"),
			Z_Registration_Info_UClass_UEnemyDataAsset.InnerSingleton,
			StaticRegisterNativesUEnemyDataAsset,
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
	return Z_Registration_Info_UClass_UEnemyDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemyDataAsset_NoRegister()
{
	return UEnemyDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemyDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemyDataAsset.h" },
		{ "ModuleRelativePath", "EnemyDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PiranhaPlantOffsetZ_MetaData[] = {
		{ "Category", "Piranha Plant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Piranha Plant settings\n" },
#endif
		{ "ModuleRelativePath", "EnemyDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Piranha Plant settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PiranhaPlantAnimationDuration_MetaData[] = {
		{ "Category", "Piranha Plant" },
		{ "ModuleRelativePath", "EnemyDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PiranhaPlantActiveDuration_MetaData[] = {
		{ "Category", "Piranha Plant" },
		{ "ModuleRelativePath", "EnemyDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PiranhaPlantHiddenDurationMin_MetaData[] = {
		{ "Category", "Piranha Plant" },
		{ "ModuleRelativePath", "EnemyDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PiranhaPlantHiddenDurationMax_MetaData[] = {
		{ "Category", "Piranha Plant" },
		{ "ModuleRelativePath", "EnemyDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoombaSpeed_MetaData[] = {
		{ "Category", "Goomba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Goomba constants\n" },
#endif
		{ "ModuleRelativePath", "EnemyDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Goomba constants" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoombaSquishedDuration_MetaData[] = {
		{ "Category", "Goomba" },
		{ "ModuleRelativePath", "EnemyDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PiranhaPlantOffsetZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PiranhaPlantAnimationDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PiranhaPlantActiveDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PiranhaPlantHiddenDurationMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PiranhaPlantHiddenDurationMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GoombaSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GoombaSquishedDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantOffsetZ = { "PiranhaPlantOffsetZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyDataAsset, PiranhaPlantOffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PiranhaPlantOffsetZ_MetaData), NewProp_PiranhaPlantOffsetZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantAnimationDuration = { "PiranhaPlantAnimationDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyDataAsset, PiranhaPlantAnimationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PiranhaPlantAnimationDuration_MetaData), NewProp_PiranhaPlantAnimationDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantActiveDuration = { "PiranhaPlantActiveDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyDataAsset, PiranhaPlantActiveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PiranhaPlantActiveDuration_MetaData), NewProp_PiranhaPlantActiveDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantHiddenDurationMin = { "PiranhaPlantHiddenDurationMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyDataAsset, PiranhaPlantHiddenDurationMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PiranhaPlantHiddenDurationMin_MetaData), NewProp_PiranhaPlantHiddenDurationMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantHiddenDurationMax = { "PiranhaPlantHiddenDurationMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyDataAsset, PiranhaPlantHiddenDurationMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PiranhaPlantHiddenDurationMax_MetaData), NewProp_PiranhaPlantHiddenDurationMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_GoombaSpeed = { "GoombaSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyDataAsset, GoombaSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoombaSpeed_MetaData), NewProp_GoombaSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_GoombaSquishedDuration = { "GoombaSquishedDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyDataAsset, GoombaSquishedDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoombaSquishedDuration_MetaData), NewProp_GoombaSquishedDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantAnimationDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantActiveDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantHiddenDurationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_PiranhaPlantHiddenDurationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_GoombaSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDataAsset_Statics::NewProp_GoombaSquishedDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyDataAsset_Statics::ClassParams = {
	&UEnemyDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemyDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyDataAsset()
{
	if (!Z_Registration_Info_UClass_UEnemyDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyDataAsset.OuterSingleton, Z_Construct_UClass_UEnemyDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyDataAsset.OuterSingleton;
}
UEnemyDataAsset::UEnemyDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyDataAsset);
UEnemyDataAsset::~UEnemyDataAsset() {}
// ********** End Class UEnemyDataAsset ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_EnemyDataAsset_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyDataAsset, UEnemyDataAsset::StaticClass, TEXT("UEnemyDataAsset"), &Z_Registration_Info_UClass_UEnemyDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyDataAsset), 3298618976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_EnemyDataAsset_h__Script_Platformer2D_3852642265(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_EnemyDataAsset_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_EnemyDataAsset_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
