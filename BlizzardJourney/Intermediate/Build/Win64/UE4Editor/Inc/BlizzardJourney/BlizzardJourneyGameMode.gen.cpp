// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlizzardJourney/BlizzardJourneyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlizzardJourneyGameMode() {}
// Cross Module References
	BLIZZARDJOURNEY_API UClass* Z_Construct_UClass_ABlizzardJourneyGameMode_NoRegister();
	BLIZZARDJOURNEY_API UClass* Z_Construct_UClass_ABlizzardJourneyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BlizzardJourney();
// End Cross Module References
	void ABlizzardJourneyGameMode::StaticRegisterNativesABlizzardJourneyGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABlizzardJourneyGameMode_NoRegister()
	{
		return ABlizzardJourneyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABlizzardJourneyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlizzardJourneyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlizzardJourney,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlizzardJourneyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BlizzardJourneyGameMode.h" },
		{ "ModuleRelativePath", "BlizzardJourneyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlizzardJourneyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlizzardJourneyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlizzardJourneyGameMode_Statics::ClassParams = {
		&ABlizzardJourneyGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABlizzardJourneyGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlizzardJourneyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlizzardJourneyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlizzardJourneyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlizzardJourneyGameMode, 2431239900);
	template<> BLIZZARDJOURNEY_API UClass* StaticClass<ABlizzardJourneyGameMode>()
	{
		return ABlizzardJourneyGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlizzardJourneyGameMode(Z_Construct_UClass_ABlizzardJourneyGameMode, &ABlizzardJourneyGameMode::StaticClass, TEXT("/Script/BlizzardJourney"), TEXT("ABlizzardJourneyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlizzardJourneyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
