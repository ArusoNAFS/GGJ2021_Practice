// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BLIZZARDJOURNEY_BlizzardJourneyProjectile_generated_h
#error "BlizzardJourneyProjectile.generated.h already included, missing '#pragma once' in BlizzardJourneyProjectile.h"
#endif
#define BLIZZARDJOURNEY_BlizzardJourneyProjectile_generated_h

#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_SPARSE_DATA
#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlizzardJourneyProjectile(); \
	friend struct Z_Construct_UClass_ABlizzardJourneyProjectile_Statics; \
public: \
	DECLARE_CLASS(ABlizzardJourneyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlizzardJourney"), NO_API) \
	DECLARE_SERIALIZER(ABlizzardJourneyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABlizzardJourneyProjectile(); \
	friend struct Z_Construct_UClass_ABlizzardJourneyProjectile_Statics; \
public: \
	DECLARE_CLASS(ABlizzardJourneyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlizzardJourney"), NO_API) \
	DECLARE_SERIALIZER(ABlizzardJourneyProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlizzardJourneyProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlizzardJourneyProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlizzardJourneyProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlizzardJourneyProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlizzardJourneyProjectile(ABlizzardJourneyProjectile&&); \
	NO_API ABlizzardJourneyProjectile(const ABlizzardJourneyProjectile&); \
public:


#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlizzardJourneyProjectile(ABlizzardJourneyProjectile&&); \
	NO_API ABlizzardJourneyProjectile(const ABlizzardJourneyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlizzardJourneyProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlizzardJourneyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlizzardJourneyProjectile)


#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABlizzardJourneyProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABlizzardJourneyProjectile, ProjectileMovement); }


#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_9_PROLOG
#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_SPARSE_DATA \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_RPC_WRAPPERS \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_INCLASS \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_SPARSE_DATA \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_INCLASS_NO_PURE_DECLS \
	BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLIZZARDJOURNEY_API UClass* StaticClass<class ABlizzardJourneyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlizzardJourney_Source_BlizzardJourney_BlizzardJourneyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
