// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMarioHUD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioHUD();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMarioHUD ****************************************************************
void AMarioHUD::StaticRegisterNativesAMarioHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMarioHUD;
UClass* AMarioHUD::GetPrivateStaticClass()
{
	using TClass = AMarioHUD;
	if (!Z_Registration_Info_UClass_AMarioHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MarioHUD"),
			Z_Registration_Info_UClass_AMarioHUD.InnerSingleton,
			StaticRegisterNativesAMarioHUD,
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
	return Z_Registration_Info_UClass_AMarioHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AMarioHUD_NoRegister()
{
	return AMarioHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMarioHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MarioHUD.h" },
		{ "ModuleRelativePath", "MarioHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetTemplate_MetaData[] = {
		{ "Category", "Templates" },
		{ "ModuleRelativePath", "MarioHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UserWidgetTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMarioHUD_Statics::NewProp_UserWidgetTemplate = { "UserWidgetTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioHUD, UserWidgetTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserWidgetTemplate_MetaData), NewProp_UserWidgetTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioHUD_Statics::NewProp_UserWidgetTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMarioHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioHUD_Statics::ClassParams = {
	&AMarioHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMarioHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMarioHUD_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMarioHUD()
{
	if (!Z_Registration_Info_UClass_AMarioHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioHUD.OuterSingleton, Z_Construct_UClass_AMarioHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMarioHUD.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioHUD);
AMarioHUD::~AMarioHUD() {}
// ********** End Class AMarioHUD ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioHUD_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMarioHUD, AMarioHUD::StaticClass, TEXT("AMarioHUD"), &Z_Registration_Info_UClass_AMarioHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioHUD), 1874713082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioHUD_h__Script_Platformer2D_2600967782(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioHUD_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioHUD_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
