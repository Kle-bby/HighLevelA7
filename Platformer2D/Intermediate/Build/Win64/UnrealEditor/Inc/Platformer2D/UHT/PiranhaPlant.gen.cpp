// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/PiranhaPlant.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePiranhaPlant() {}

// ********** Begin Cross Module References ********************************************************
PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy();
PLATFORMER2D_API UClass* Z_Construct_UClass_APiranhaPlant();
PLATFORMER2D_API UClass* Z_Construct_UClass_APiranhaPlant_NoRegister();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EPiranhaPlantState();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPiranhaPlantState ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPiranhaPlantState;
static UEnum* EPiranhaPlantState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPiranhaPlantState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPiranhaPlantState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EPiranhaPlantState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EPiranhaPlantState"));
	}
	return Z_Registration_Info_UEnum_EPiranhaPlantState.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EPiranhaPlantState>()
{
	return EPiranhaPlantState_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EPiranhaPlantState::Active" },
		{ "AnimatingDown.DisplayName", "AnimatingDown" },
		{ "AnimatingDown.Name", "EPiranhaPlantState::AnimatingDown" },
		{ "AnimatingUp.DisplayName", "AnimatingUp" },
		{ "AnimatingUp.Name", "EPiranhaPlantState::AnimatingUp" },
		{ "BlueprintType", "true" },
		{ "Hiding.DisplayName", "Hiding" },
		{ "Hiding.Name", "EPiranhaPlantState::Hiding" },
		{ "ModuleRelativePath", "PiranhaPlant.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EPiranhaPlantState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPiranhaPlantState::Unknown", (int64)EPiranhaPlantState::Unknown },
		{ "EPiranhaPlantState::Hiding", (int64)EPiranhaPlantState::Hiding },
		{ "EPiranhaPlantState::AnimatingUp", (int64)EPiranhaPlantState::AnimatingUp },
		{ "EPiranhaPlantState::Active", (int64)EPiranhaPlantState::Active },
		{ "EPiranhaPlantState::AnimatingDown", (int64)EPiranhaPlantState::AnimatingDown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EPiranhaPlantState",
	"EPiranhaPlantState",
	Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EPiranhaPlantState()
{
	if (!Z_Registration_Info_UEnum_EPiranhaPlantState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPiranhaPlantState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPiranhaPlantState.InnerSingleton;
}
// ********** End Enum EPiranhaPlantState **********************************************************

// ********** Begin Class APiranhaPlant ************************************************************
void APiranhaPlant::StaticRegisterNativesAPiranhaPlant()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APiranhaPlant;
UClass* APiranhaPlant::GetPrivateStaticClass()
{
	using TClass = APiranhaPlant;
	if (!Z_Registration_Info_UClass_APiranhaPlant.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PiranhaPlant"),
			Z_Registration_Info_UClass_APiranhaPlant.InnerSingleton,
			StaticRegisterNativesAPiranhaPlant,
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
	return Z_Registration_Info_UClass_APiranhaPlant.InnerSingleton;
}
UClass* Z_Construct_UClass_APiranhaPlant_NoRegister()
{
	return APiranhaPlant::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APiranhaPlant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PiranhaPlant.h" },
		{ "ModuleRelativePath", "PiranhaPlant.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiranhaPlant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APiranhaPlant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APiranhaPlant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APiranhaPlant_Statics::ClassParams = {
	&APiranhaPlant::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiranhaPlant_Statics::Class_MetaDataParams), Z_Construct_UClass_APiranhaPlant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APiranhaPlant()
{
	if (!Z_Registration_Info_UClass_APiranhaPlant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APiranhaPlant.OuterSingleton, Z_Construct_UClass_APiranhaPlant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APiranhaPlant.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APiranhaPlant);
APiranhaPlant::~APiranhaPlant() {}
// ********** End Class APiranhaPlant **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h__Script_Platformer2D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPiranhaPlantState_StaticEnum, TEXT("EPiranhaPlantState"), &Z_Registration_Info_UEnum_EPiranhaPlantState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 76609838U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APiranhaPlant, APiranhaPlant::StaticClass, TEXT("APiranhaPlant"), &Z_Registration_Info_UClass_APiranhaPlant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APiranhaPlant), 186513736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h__Script_Platformer2D_593138200(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h__Script_Platformer2D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h__Script_Platformer2D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
