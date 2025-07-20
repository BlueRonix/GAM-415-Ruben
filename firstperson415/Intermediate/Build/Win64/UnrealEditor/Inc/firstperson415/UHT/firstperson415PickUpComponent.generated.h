// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "firstperson415PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class Afirstperson415Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRSTPERSON415_firstperson415PickUpComponent_generated_h
#error "firstperson415PickUpComponent.generated.h already included, missing '#pragma once' in firstperson415PickUpComponent.h"
#endif
#define FIRSTPERSON415_firstperson415PickUpComponent_generated_h

#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h_12_DELEGATE \
FIRSTPERSON415_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, Afirstperson415Character* PickUpCharacter);


#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUfirstperson415PickUpComponent(); \
	friend struct Z_Construct_UClass_Ufirstperson415PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(Ufirstperson415PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/firstperson415"), NO_API) \
	DECLARE_SERIALIZER(Ufirstperson415PickUpComponent)


#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Ufirstperson415PickUpComponent(Ufirstperson415PickUpComponent&&); \
	Ufirstperson415PickUpComponent(const Ufirstperson415PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ufirstperson415PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ufirstperson415PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Ufirstperson415PickUpComponent) \
	NO_API virtual ~Ufirstperson415PickUpComponent();


#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h_14_PROLOG
#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSON415_API UClass* StaticClass<class Ufirstperson415PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_firstperson415PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
