// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMarioState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioState();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioState_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UMarioDataAsset_NoRegister();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EMarioDirection();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EMarioForm();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EMarioState();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMarioState ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarioState;
static UEnum* EMarioState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMarioState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMarioState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EMarioState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EMarioState"));
	}
	return Z_Registration_Info_UEnum_EMarioState.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioState>()
{
	return EMarioState_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EMarioState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "EMarioState::Dead" },
		{ "Ducking.DisplayName", "Ducking" },
		{ "Ducking.Name", "EMarioState::Ducking" },
		{ "Falling.DisplayName", "Falling" },
		{ "Falling.Name", "EMarioState::Falling" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EMarioState::Idle" },
		{ "Jumping.DisplayName", "Jumping" },
		{ "Jumping.Name", "EMarioState::Jumping" },
		{ "ModuleRelativePath", "MarioState.h" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EMarioState::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMarioState::Idle", (int64)EMarioState::Idle },
		{ "EMarioState::Walking", (int64)EMarioState::Walking },
		{ "EMarioState::Jumping", (int64)EMarioState::Jumping },
		{ "EMarioState::Falling", (int64)EMarioState::Falling },
		{ "EMarioState::Ducking", (int64)EMarioState::Ducking },
		{ "EMarioState::Dead", (int64)EMarioState::Dead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EMarioState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EMarioState",
	"EMarioState",
	Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EMarioState()
{
	if (!Z_Registration_Info_UEnum_EMarioState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarioState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EMarioState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMarioState.InnerSingleton;
}
// ********** End Enum EMarioState *****************************************************************

// ********** Begin Enum EMarioForm ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarioForm;
static UEnum* EMarioForm_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMarioForm.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMarioForm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EMarioForm, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EMarioForm"));
	}
	return Z_Registration_Info_UEnum_EMarioForm.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioForm>()
{
	return EMarioForm_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EMarioForm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MarioState.h" },
		{ "Small.DisplayName", "Small" },
		{ "Small.Name", "EMarioForm::Small" },
		{ "Super.DisplayName", "Super" },
		{ "Super.Name", "EMarioForm::Super" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMarioForm::Small", (int64)EMarioForm::Small },
		{ "EMarioForm::Super", (int64)EMarioForm::Super },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EMarioForm",
	"EMarioForm",
	Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EMarioForm()
{
	if (!Z_Registration_Info_UEnum_EMarioForm.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarioForm.InnerSingleton, Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMarioForm.InnerSingleton;
}
// ********** End Enum EMarioForm ******************************************************************

// ********** Begin Enum EMarioDirection ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarioDirection;
static UEnum* EMarioDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMarioDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMarioDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EMarioDirection, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EMarioDirection"));
	}
	return Z_Registration_Info_UEnum_EMarioDirection.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioDirection>()
{
	return EMarioDirection_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EMarioDirection::Left" },
		{ "ModuleRelativePath", "MarioState.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EMarioDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMarioDirection::Right", (int64)EMarioDirection::Right },
		{ "EMarioDirection::Left", (int64)EMarioDirection::Left },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EMarioDirection",
	"EMarioDirection",
	Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EMarioDirection()
{
	if (!Z_Registration_Info_UEnum_EMarioDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarioDirection.InnerSingleton, Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMarioDirection.InnerSingleton;
}
// ********** End Enum EMarioDirection *************************************************************

// ********** Begin Class AMarioState **************************************************************
void AMarioState::StaticRegisterNativesAMarioState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMarioState;
UClass* AMarioState::GetPrivateStaticClass()
{
	using TClass = AMarioState;
	if (!Z_Registration_Info_UClass_AMarioState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MarioState"),
			Z_Registration_Info_UClass_AMarioState.InnerSingleton,
			StaticRegisterNativesAMarioState,
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
	return Z_Registration_Info_UClass_AMarioState.InnerSingleton;
}
UClass* Z_Construct_UClass_AMarioState_NoRegister()
{
	return AMarioState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMarioState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MarioState.h" },
		{ "ModuleRelativePath", "MarioState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "Data Asset" },
		{ "ModuleRelativePath", "MarioState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunningMeter_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MarioState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MarioState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MarioState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RunningMeter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioState_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioState, DataAsset), Z_Construct_UClass_UMarioDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMarioState_Statics::NewProp_RunningMeter = { "RunningMeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioState, RunningMeter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunningMeter_MetaData), NewProp_RunningMeter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMarioState_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioState, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMarioState_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioState, Lives), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lives_MetaData), NewProp_Lives_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioState_Statics::NewProp_DataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioState_Statics::NewProp_RunningMeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioState_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioState_Statics::NewProp_Lives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMarioState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioState_Statics::ClassParams = {
	&AMarioState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMarioState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMarioState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMarioState()
{
	if (!Z_Registration_Info_UClass_AMarioState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioState.OuterSingleton, Z_Construct_UClass_AMarioState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMarioState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioState);
AMarioState::~AMarioState() {}
// ********** End Class AMarioState ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h__Script_Platformer2D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMarioState_StaticEnum, TEXT("EMarioState"), &Z_Registration_Info_UEnum_EMarioState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2194363724U) },
		{ EMarioForm_StaticEnum, TEXT("EMarioForm"), &Z_Registration_Info_UEnum_EMarioForm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2824036458U) },
		{ EMarioDirection_StaticEnum, TEXT("EMarioDirection"), &Z_Registration_Info_UEnum_EMarioDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 347350823U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMarioState, AMarioState::StaticClass, TEXT("AMarioState"), &Z_Registration_Info_UClass_AMarioState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioState), 807209101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h__Script_Platformer2D_2800307605(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h__Script_Platformer2D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h__Script_Platformer2D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
