// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMarioDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UMarioDataAsset();
PLATFORMER2D_API UClass* Z_Construct_UClass_UMarioDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMarioDataAsset **********************************************************
void UMarioDataAsset::StaticRegisterNativesUMarioDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMarioDataAsset;
UClass* UMarioDataAsset::GetPrivateStaticClass()
{
	using TClass = UMarioDataAsset;
	if (!Z_Registration_Info_UClass_UMarioDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MarioDataAsset"),
			Z_Registration_Info_UClass_UMarioDataAsset.InnerSingleton,
			StaticRegisterNativesUMarioDataAsset,
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
	return Z_Registration_Info_UClass_UMarioDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UMarioDataAsset_NoRegister()
{
	return UMarioDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMarioDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MarioDataAsset.h" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRunningMeter_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// General constants\n" },
#endif
		{ "ModuleRelativePath", "MarioDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General constants" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStartingLives_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvincibleTime_MetaData[] = {
		{ "Category", "Invincibility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Invincibility constants\n" },
#endif
		{ "ModuleRelativePath", "MarioDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invincibility constants" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvincibleVisibilityDuration_MetaData[] = {
		{ "Category", "Invincibility" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadHoldTime_MetaData[] = {
		{ "Category", "Dead" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dead constants\n" },
#endif
		{ "ModuleRelativePath", "MarioDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dead constants" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadImpulseZ_MetaData[] = {
		{ "Category", "Dead" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceImpulseZ_MetaData[] = {
		{ "Category", "Bounce" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bounce constants\n" },
#endif
		{ "ModuleRelativePath", "MarioDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bounce constants" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "Jump" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Jump constants\n" },
#endif
		{ "ModuleRelativePath", "MarioDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump constants" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControl_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpZVelocity_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpMaxHoldTimeWalking_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpMaxHoldTimeRunning_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpIncreasePerSegment_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[] = {
		{ "Category", "Walk" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Walking / Running\n" },
#endif
		{ "ModuleRelativePath", "MarioDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Walking / Running" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinWalkSpeed_MetaData[] = {
		{ "Category", "Walk" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "Walk" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "Walk" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStepHeight_MetaData[] = {
		{ "Category", "Walk" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeedPerSegment_MetaData[] = {
		{ "Category", "Run" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSegmentIncrementDuration_MetaData[] = {
		{ "Category", "Run" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSegmentDecrementDuration_MetaData[] = {
		{ "Category", "Run" },
		{ "ModuleRelativePath", "MarioDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRunningMeter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultStartingLives;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvincibleTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvincibleVisibilityDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadHoldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadImpulseZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceImpulseZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpZVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpMaxHoldTimeWalking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpMaxHoldTimeRunning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpIncreasePerSegment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeedPerSegment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSegmentIncrementDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSegmentDecrementDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarioDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MaxRunningMeter = { "MaxRunningMeter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, MaxRunningMeter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRunningMeter_MetaData), NewProp_MaxRunningMeter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_DefaultStartingLives = { "DefaultStartingLives", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, DefaultStartingLives), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStartingLives_MetaData), NewProp_DefaultStartingLives_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_InvincibleTime = { "InvincibleTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, InvincibleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvincibleTime_MetaData), NewProp_InvincibleTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_InvincibleVisibilityDuration = { "InvincibleVisibilityDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, InvincibleVisibilityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvincibleVisibilityDuration_MetaData), NewProp_InvincibleVisibilityDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_DeadHoldTime = { "DeadHoldTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, DeadHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadHoldTime_MetaData), NewProp_DeadHoldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_DeadImpulseZ = { "DeadImpulseZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, DeadImpulseZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadImpulseZ_MetaData), NewProp_DeadImpulseZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_BounceImpulseZ = { "BounceImpulseZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, BounceImpulseZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceImpulseZ_MetaData), NewProp_BounceImpulseZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_AirControl = { "AirControl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, AirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControl_MetaData), NewProp_AirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_JumpZVelocity = { "JumpZVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, JumpZVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpZVelocity_MetaData), NewProp_JumpZVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_JumpMaxHoldTimeWalking = { "JumpMaxHoldTimeWalking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, JumpMaxHoldTimeWalking), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpMaxHoldTimeWalking_MetaData), NewProp_JumpMaxHoldTimeWalking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_JumpMaxHoldTimeRunning = { "JumpMaxHoldTimeRunning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, JumpMaxHoldTimeRunning), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpMaxHoldTimeRunning_MetaData), NewProp_JumpMaxHoldTimeRunning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_JumpIncreasePerSegment = { "JumpIncreasePerSegment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, JumpIncreasePerSegment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpIncreasePerSegment_MetaData), NewProp_JumpIncreasePerSegment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, GroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundFriction_MetaData), NewProp_GroundFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MinWalkSpeed = { "MinWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, MinWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinWalkSpeed_MetaData), NewProp_MinWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeed_MetaData), NewProp_MaxWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, MaxAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAcceleration_MetaData), NewProp_MaxAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MaxStepHeight = { "MaxStepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, MaxStepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStepHeight_MetaData), NewProp_MaxStepHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_RunSpeedPerSegment = { "RunSpeedPerSegment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, RunSpeedPerSegment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeedPerSegment_MetaData), NewProp_RunSpeedPerSegment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_RunSegmentIncrementDuration = { "RunSegmentIncrementDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, RunSegmentIncrementDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSegmentIncrementDuration_MetaData), NewProp_RunSegmentIncrementDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_RunSegmentDecrementDuration = { "RunSegmentDecrementDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarioDataAsset, RunSegmentDecrementDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSegmentDecrementDuration_MetaData), NewProp_RunSegmentDecrementDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarioDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MaxRunningMeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_DefaultStartingLives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_InvincibleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_InvincibleVisibilityDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_DeadHoldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_DeadImpulseZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_BounceImpulseZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_AirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_JumpZVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_JumpMaxHoldTimeWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_JumpMaxHoldTimeRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_JumpIncreasePerSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_GroundFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MinWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MaxAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_MaxStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_RunSpeedPerSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_RunSegmentIncrementDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarioDataAsset_Statics::NewProp_RunSegmentDecrementDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarioDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMarioDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarioDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarioDataAsset_Statics::ClassParams = {
	&UMarioDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMarioDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMarioDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMarioDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMarioDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMarioDataAsset()
{
	if (!Z_Registration_Info_UClass_UMarioDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarioDataAsset.OuterSingleton, Z_Construct_UClass_UMarioDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMarioDataAsset.OuterSingleton;
}
UMarioDataAsset::UMarioDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMarioDataAsset);
UMarioDataAsset::~UMarioDataAsset() {}
// ********** End Class UMarioDataAsset ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioDataAsset_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMarioDataAsset, UMarioDataAsset::StaticClass, TEXT("UMarioDataAsset"), &Z_Registration_Info_UClass_UMarioDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarioDataAsset), 1192547687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioDataAsset_h__Script_Platformer2D_3027842832(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioDataAsset_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioDataAsset_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
