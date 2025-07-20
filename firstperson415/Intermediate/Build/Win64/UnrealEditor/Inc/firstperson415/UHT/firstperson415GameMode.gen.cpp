// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "firstperson415/firstperson415GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefirstperson415GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FIRSTPERSON415_API UClass* Z_Construct_UClass_Afirstperson415GameMode();
FIRSTPERSON415_API UClass* Z_Construct_UClass_Afirstperson415GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_firstperson415();
// End Cross Module References

// Begin Class Afirstperson415GameMode
void Afirstperson415GameMode::StaticRegisterNativesAfirstperson415GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Afirstperson415GameMode);
UClass* Z_Construct_UClass_Afirstperson415GameMode_NoRegister()
{
	return Afirstperson415GameMode::StaticClass();
}
struct Z_Construct_UClass_Afirstperson415GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "firstperson415GameMode.h" },
		{ "ModuleRelativePath", "firstperson415GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afirstperson415GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Afirstperson415GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_firstperson415,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Afirstperson415GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Afirstperson415GameMode_Statics::ClassParams = {
	&Afirstperson415GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Afirstperson415GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Afirstperson415GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Afirstperson415GameMode()
{
	if (!Z_Registration_Info_UClass_Afirstperson415GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Afirstperson415GameMode.OuterSingleton, Z_Construct_UClass_Afirstperson415GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Afirstperson415GameMode.OuterSingleton;
}
template<> FIRSTPERSON415_API UClass* StaticClass<Afirstperson415GameMode>()
{
	return Afirstperson415GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Afirstperson415GameMode);
Afirstperson415GameMode::~Afirstperson415GameMode() {}
// End Class Afirstperson415GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Afirstperson415GameMode, Afirstperson415GameMode::StaticClass, TEXT("Afirstperson415GameMode"), &Z_Registration_Info_UClass_Afirstperson415GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Afirstperson415GameMode), 2592262956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415GameMode_h_4049862818(TEXT("/Script/firstperson415"),
	Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
