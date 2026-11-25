// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/CoinPickup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoinPickup() {}

// ********** Begin Cross Module References ********************************************************
PLATFORMER2D_API UClass* Z_Construct_UClass_ACoinPickup();
PLATFORMER2D_API UClass* Z_Construct_UClass_ACoinPickup_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_APickup();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACoinPickup **************************************************************
void ACoinPickup::StaticRegisterNativesACoinPickup()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACoinPickup;
UClass* ACoinPickup::GetPrivateStaticClass()
{
	using TClass = ACoinPickup;
	if (!Z_Registration_Info_UClass_ACoinPickup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoinPickup"),
			Z_Registration_Info_UClass_ACoinPickup.InnerSingleton,
			StaticRegisterNativesACoinPickup,
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
	return Z_Registration_Info_UClass_ACoinPickup.InnerSingleton;
}
UClass* Z_Construct_UClass_ACoinPickup_NoRegister()
{
	return ACoinPickup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACoinPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CoinPickup.h" },
		{ "ModuleRelativePath", "CoinPickup.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACoinPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinPickup_Statics::ClassParams = {
	&ACoinPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoinPickup()
{
	if (!Z_Registration_Info_UClass_ACoinPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinPickup.OuterSingleton, Z_Construct_UClass_ACoinPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoinPickup.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinPickup);
ACoinPickup::~ACoinPickup() {}
// ********** End Class ACoinPickup ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_CoinPickup_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoinPickup, ACoinPickup::StaticClass, TEXT("ACoinPickup"), &Z_Registration_Info_UClass_ACoinPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinPickup), 372932116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_CoinPickup_h__Script_Platformer2D_292397123(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_CoinPickup_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_CoinPickup_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
