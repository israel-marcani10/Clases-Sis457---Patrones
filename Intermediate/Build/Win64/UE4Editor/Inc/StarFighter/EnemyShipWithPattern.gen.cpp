// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EnemyShipWithPattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyShipWithPattern() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShipWithPattern_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShipWithPattern();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AEnemyShipWithPattern::StaticRegisterNativesAEnemyShipWithPattern()
	{
	}
	UClass* Z_Construct_UClass_AEnemyShipWithPattern_NoRegister()
	{
		return AEnemyShipWithPattern::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyShipWithPattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyShipWithPattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShipWithPattern_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyShipWithPattern.h" },
		{ "ModuleRelativePath", "EnemyShipWithPattern.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyShipWithPattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShipWithPattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShipWithPattern_Statics::ClassParams = {
		&AEnemyShipWithPattern::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyShipWithPattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyShipWithPattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyShipWithPattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyShipWithPattern, 1839778918);
	template<> STARFIGHTER_API UClass* StaticClass<AEnemyShipWithPattern>()
	{
		return AEnemyShipWithPattern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyShipWithPattern(Z_Construct_UClass_AEnemyShipWithPattern, &AEnemyShipWithPattern::StaticClass, TEXT("/Script/StarFighter"), TEXT("AEnemyShipWithPattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyShipWithPattern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
