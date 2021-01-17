// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlizzardJourney/BlizzardJourneyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlizzardJourneyHUD() {}
// Cross Module References
	BLIZZARDJOURNEY_API UClass* Z_Construct_UClass_ABlizzardJourneyHUD_NoRegister();
	BLIZZARDJOURNEY_API UClass* Z_Construct_UClass_ABlizzardJourneyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_BlizzardJourney();
// End Cross Module References
	void ABlizzardJourneyHUD::StaticRegisterNativesABlizzardJourneyHUD()
	{
	}
	UClass* Z_Construct_UClass_ABlizzardJourneyHUD_NoRegister()
	{
		return ABlizzardJourneyHUD::StaticClass();
	}
	struct Z_Construct_UClass_ABlizzardJourneyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlizzardJourneyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_BlizzardJourney,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlizzardJourneyHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "BlizzardJourneyHUD.h" },
		{ "ModuleRelativePath", "BlizzardJourneyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlizzardJourneyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlizzardJourneyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlizzardJourneyHUD_Statics::ClassParams = {
		&ABlizzardJourneyHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABlizzardJourneyHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlizzardJourneyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlizzardJourneyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlizzardJourneyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlizzardJourneyHUD, 1966942792);
	template<> BLIZZARDJOURNEY_API UClass* StaticClass<ABlizzardJourneyHUD>()
	{
		return ABlizzardJourneyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlizzardJourneyHUD(Z_Construct_UClass_ABlizzardJourneyHUD, &ABlizzardJourneyHUD::StaticClass, TEXT("/Script/BlizzardJourney"), TEXT("ABlizzardJourneyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlizzardJourneyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
