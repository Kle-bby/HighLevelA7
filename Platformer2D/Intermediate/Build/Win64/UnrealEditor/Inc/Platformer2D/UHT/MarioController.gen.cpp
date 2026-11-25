// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMarioController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioController();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMarioController *********************************************************
void AMarioController::StaticRegisterNativesAMarioController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMarioController;
UClass* AMarioController::GetPrivateStaticClass()
{
	using TClass = AMarioController;
	if (!Z_Registration_Info_UClass_AMarioController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MarioController"),
			Z_Registration_Info_UClass_AMarioController.InnerSingleton,
			StaticRegisterNativesAMarioController,
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
	return Z_Registration_Info_UClass_AMarioController.InnerSingleton;
}
UClass* Z_Construct_UClass_AMarioController_NoRegister()
{
	return AMarioController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMarioController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MarioController.h" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuckInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpInputAction_MetaData[] = {
		{ "Category", "Enhanced input" },
		{ "ModuleRelativePath", "MarioController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DuckInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpInputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_MoveInputAction = { "MoveInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, MoveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputAction_MetaData), NewProp_MoveInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_RunInputAction = { "RunInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, RunInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunInputAction_MetaData), NewProp_RunInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_JumpInputAction = { "JumpInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, JumpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpInputAction_MetaData), NewProp_JumpInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_DuckInputAction = { "DuckInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, DuckInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuckInputAction_MetaData), NewProp_DuckInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioController_Statics::NewProp_UpInputAction = { "UpInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioController, UpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpInputAction_MetaData), NewProp_UpInputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_MoveInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_RunInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_JumpInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_DuckInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioController_Statics::NewProp_UpInputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMarioController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioController_Statics::ClassParams = {
	&AMarioController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMarioController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMarioController()
{
	if (!Z_Registration_Info_UClass_AMarioController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioController.OuterSingleton, Z_Construct_UClass_AMarioController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMarioController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioController);
AMarioController::~AMarioController() {}
// ********** End Class AMarioController ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioController_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMarioController, AMarioController::StaticClass, TEXT("AMarioController"), &Z_Registration_Info_UClass_AMarioController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioController), 3473929096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioController_h__Script_Platformer2D_24604364(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioController_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioController_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
