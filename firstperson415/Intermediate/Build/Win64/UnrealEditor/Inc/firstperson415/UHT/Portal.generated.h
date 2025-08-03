// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Portal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class Afirstperson415Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRSTPERSON415_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define FIRSTPERSON415_Portal_generated_h

#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_Portal_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePortals); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_Portal_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/firstperson415"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_Portal_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APortal(APortal&&); \
	APortal(const APortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal) \
	NO_API virtual ~APortal();


#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_Portal_h_14_PROLOG
#define FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_Portal_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_Portal_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_Portal_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_Portal_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSON415_API UClass* StaticClass<class APortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_blue1_Documents_Unreal_Projects_firstperson415_GAM_415_Ruben_firstperson415_Source_firstperson415_Portal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
