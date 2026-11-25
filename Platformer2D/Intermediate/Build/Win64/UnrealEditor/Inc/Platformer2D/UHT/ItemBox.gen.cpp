// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/ItemBox.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemBox() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBox();
PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBox_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBoxCoin_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMushroomPickup_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UPickupDataAsset_NoRegister();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EItemBoxContents();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EItemBoxState();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EItemBoxState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemBoxState;
static UEnum* EItemBoxState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemBoxState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemBoxState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EItemBoxState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EItemBoxState"));
	}
	return Z_Registration_Info_UEnum_EItemBoxState.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EItemBoxState>()
{
	return EItemBoxState_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EItemBoxState::Active" },
		{ "AnimDown.DisplayName", "AnimDown" },
		{ "AnimDown.Name", "EItemBoxState::AnimDown" },
		{ "AnimUp.DisplayName", "AnimUp" },
		{ "AnimUp.Name", "EItemBoxState::AnimUp" },
		{ "BlueprintType", "true" },
		{ "Inactive.DisplayName", "Inactive" },
		{ "Inactive.Name", "EItemBoxState::Inactive" },
		{ "ModuleRelativePath", "ItemBox.h" },
		{ "Spawning.DisplayName", "Spawning" },
		{ "Spawning.Name", "EItemBoxState::Spawning" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EItemBoxState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemBoxState::Unknown", (int64)EItemBoxState::Unknown },
		{ "EItemBoxState::Active", (int64)EItemBoxState::Active },
		{ "EItemBoxState::AnimUp", (int64)EItemBoxState::AnimUp },
		{ "EItemBoxState::AnimDown", (int64)EItemBoxState::AnimDown },
		{ "EItemBoxState::Spawning", (int64)EItemBoxState::Spawning },
		{ "EItemBoxState::Inactive", (int64)EItemBoxState::Inactive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EItemBoxState",
	"EItemBoxState",
	Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EItemBoxState()
{
	if (!Z_Registration_Info_UEnum_EItemBoxState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemBoxState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemBoxState.InnerSingleton;
}
// ********** End Enum EItemBoxState ***************************************************************

// ********** Begin Enum EItemBoxContents **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemBoxContents;
static UEnum* EItemBoxContents_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemBoxContents.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemBoxContents.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EItemBoxContents, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EItemBoxContents"));
	}
	return Z_Registration_Info_UEnum_EItemBoxContents.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EItemBoxContents>()
{
	return EItemBoxContents_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Coin1.DisplayName", "Coin1" },
		{ "Coin1.Name", "EItemBoxContents::Coin1" },
		{ "Coin10.DisplayName", "Coin10" },
		{ "Coin10.Name", "EItemBoxContents::Coin10" },
		{ "Coin5.DisplayName", "Coin5" },
		{ "Coin5.Name", "EItemBoxContents::Coin5" },
		{ "ModuleRelativePath", "ItemBox.h" },
		{ "Mushroom.DisplayName", "Mushroom" },
		{ "Mushroom.Name", "EItemBoxContents::Mushroom" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemBoxContents::Mushroom", (int64)EItemBoxContents::Mushroom },
		{ "EItemBoxContents::Coin1", (int64)EItemBoxContents::Coin1 },
		{ "EItemBoxContents::Coin5", (int64)EItemBoxContents::Coin5 },
		{ "EItemBoxContents::Coin10", (int64)EItemBoxContents::Coin10 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EItemBoxContents",
	"EItemBoxContents",
	Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EItemBoxContents()
{
	if (!Z_Registration_Info_UEnum_EItemBoxContents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemBoxContents.InnerSingleton, Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemBoxContents.InnerSingleton;
}
// ********** End Enum EItemBoxContents ************************************************************

// ********** Begin Class AItemBox Function OnHit **************************************************
struct Z_Construct_UFunction_AItemBox_OnHit_Statics
{
	struct ItemBox_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBox_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBox_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBox_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AItemBox, nullptr, "OnHit", Z_Construct_UFunction_AItemBox_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBox_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemBox_OnHit_Statics::ItemBox_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBox_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemBox_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AItemBox_OnHit_Statics::ItemBox_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemBox_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemBox_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemBox::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class AItemBox Function OnHit ****************************************************

// ********** Begin Class AItemBox *****************************************************************
void AItemBox::StaticRegisterNativesAItemBox()
{
	UClass* Class = AItemBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &AItemBox::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AItemBox;
UClass* AItemBox::GetPrivateStaticClass()
{
	using TClass = AItemBox;
	if (!Z_Registration_Info_UClass_AItemBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemBox"),
			Z_Registration_Info_UClass_AItemBox.InnerSingleton,
			StaticRegisterNativesAItemBox,
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
	return Z_Registration_Info_UClass_AItemBox.InnerSingleton;
}
UClass* Z_Construct_UClass_AItemBox_NoRegister()
{
	return AItemBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AItemBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBox.h" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "Data Asset" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contents_MetaData[] = {
		{ "Category", "Contents" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MushroomPickupTemplate_MetaData[] = {
		{ "Category", "Templates" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemBoxCoinTemplate_MetaData[] = {
		{ "Category", "Templates" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InactiveFlipbook;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Contents_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Contents;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MushroomPickupTemplate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemBoxCoinTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemBox_OnHit, "OnHit" }, // 2497671257
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, DataAsset), Z_Construct_UClass_UPickupDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_ActiveFlipbook = { "ActiveFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, ActiveFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveFlipbook_MetaData), NewProp_ActiveFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_InactiveFlipbook = { "InactiveFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, InactiveFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveFlipbook_MetaData), NewProp_InactiveFlipbook_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_Contents_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, Contents), Z_Construct_UEnum_Platformer2D_EItemBoxContents, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contents_MetaData), NewProp_Contents_MetaData) }; // 131004962
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_MushroomPickupTemplate = { "MushroomPickupTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, MushroomPickupTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AMushroomPickup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MushroomPickupTemplate_MetaData), NewProp_MushroomPickupTemplate_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_ItemBoxCoinTemplate = { "ItemBoxCoinTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, ItemBoxCoinTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemBoxCoin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemBoxCoinTemplate_MetaData), NewProp_ItemBoxCoinTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_DataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_ActiveFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_InactiveFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_Contents_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_Contents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_MushroomPickupTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_ItemBoxCoinTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemBox_Statics::ClassParams = {
	&AItemBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItemBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemBox()
{
	if (!Z_Registration_Info_UClass_AItemBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemBox.OuterSingleton, Z_Construct_UClass_AItemBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemBox.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBox);
AItemBox::~AItemBox() {}
// ********** End Class AItemBox *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h__Script_Platformer2D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemBoxState_StaticEnum, TEXT("EItemBoxState"), &Z_Registration_Info_UEnum_EItemBoxState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2698768517U) },
		{ EItemBoxContents_StaticEnum, TEXT("EItemBoxContents"), &Z_Registration_Info_UEnum_EItemBoxContents, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 131004962U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemBox, AItemBox::StaticClass, TEXT("AItemBox"), &Z_Registration_Info_UClass_AItemBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemBox), 3469923631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h__Script_Platformer2D_2117100641(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h__Script_Platformer2D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h__Script_Platformer2D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
