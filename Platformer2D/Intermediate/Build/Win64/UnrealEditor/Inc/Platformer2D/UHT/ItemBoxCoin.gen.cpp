// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/ItemBoxCoin.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemBoxCoin() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBoxCoin();
PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBoxCoin_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UPickupDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AItemBoxCoin *************************************************************
void AItemBoxCoin::StaticRegisterNativesAItemBoxCoin()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AItemBoxCoin;
UClass* AItemBoxCoin::GetPrivateStaticClass()
{
	using TClass = AItemBoxCoin;
	if (!Z_Registration_Info_UClass_AItemBoxCoin.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemBoxCoin"),
			Z_Registration_Info_UClass_AItemBoxCoin.InnerSingleton,
			StaticRegisterNativesAItemBoxCoin,
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
	return Z_Registration_Info_UClass_AItemBoxCoin.InnerSingleton;
}
UClass* Z_Construct_UClass_AItemBoxCoin_NoRegister()
{
	return AItemBoxCoin::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AItemBoxCoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBoxCoin.h" },
		{ "ModuleRelativePath", "ItemBoxCoin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBoxCoin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBoxCoin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "Data Asset" },
		{ "ModuleRelativePath", "ItemBoxCoin.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBoxCoin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBoxCoin, Root), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBoxCoin, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBoxCoin, DataAsset), Z_Construct_UClass_UPickupDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBoxCoin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_DataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemBoxCoin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemBoxCoin_Statics::ClassParams = {
	&AItemBoxCoin::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AItemBoxCoin_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemBoxCoin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemBoxCoin()
{
	if (!Z_Registration_Info_UClass_AItemBoxCoin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemBoxCoin.OuterSingleton, Z_Construct_UClass_AItemBoxCoin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemBoxCoin.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBoxCoin);
AItemBoxCoin::~AItemBoxCoin() {}
// ********** End Class AItemBoxCoin ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBoxCoin_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemBoxCoin, AItemBoxCoin::StaticClass, TEXT("AItemBoxCoin"), &Z_Registration_Info_UClass_AItemBoxCoin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemBoxCoin), 1512746641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBoxCoin_h__Script_Platformer2D_858385277(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBoxCoin_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBoxCoin_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
