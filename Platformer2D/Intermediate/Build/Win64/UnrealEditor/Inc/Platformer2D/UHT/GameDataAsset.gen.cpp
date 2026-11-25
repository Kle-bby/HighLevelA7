// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/GameDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UGameDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UGameDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameDataAsset ***********************************************************
void UGameDataAsset::StaticRegisterNativesUGameDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameDataAsset;
UClass* UGameDataAsset::GetPrivateStaticClass()
{
	using TClass = UGameDataAsset;
	if (!Z_Registration_Info_UClass_UGameDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameDataAsset"),
			Z_Registration_Info_UClass_UGameDataAsset.InnerSingleton,
			StaticRegisterNativesUGameDataAsset,
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
	return Z_Registration_Info_UClass_UGameDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameDataAsset_NoRegister()
{
	return UGameDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameDataAsset.h" },
		{ "ModuleRelativePath", "GameDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "GameDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyActorAtZ_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameDuration_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyActorAtZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultGameDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameDataAsset_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameDataAsset, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameDataAsset_Statics::NewProp_DestroyActorAtZ = { "DestroyActorAtZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameDataAsset, DestroyActorAtZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyActorAtZ_MetaData), NewProp_DestroyActorAtZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameDataAsset_Statics::NewProp_DefaultGameDuration = { "DefaultGameDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameDataAsset, DefaultGameDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameDuration_MetaData), NewProp_DefaultGameDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDataAsset_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDataAsset_Statics::NewProp_DestroyActorAtZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDataAsset_Statics::NewProp_DefaultGameDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameDataAsset_Statics::ClassParams = {
	&UGameDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameDataAsset()
{
	if (!Z_Registration_Info_UClass_UGameDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameDataAsset.OuterSingleton, Z_Construct_UClass_UGameDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameDataAsset.OuterSingleton;
}
UGameDataAsset::UGameDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameDataAsset);
UGameDataAsset::~UGameDataAsset() {}
// ********** End Class UGameDataAsset *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_GameDataAsset_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameDataAsset, UGameDataAsset::StaticClass, TEXT("UGameDataAsset"), &Z_Registration_Info_UClass_UGameDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameDataAsset), 2509592668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_GameDataAsset_h__Script_Platformer2D_1927204469(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_GameDataAsset_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_GameDataAsset_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
