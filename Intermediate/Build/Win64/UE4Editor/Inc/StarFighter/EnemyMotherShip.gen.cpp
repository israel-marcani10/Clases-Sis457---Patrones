// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EnemyMotherShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyMotherShip() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyMotherShip_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyMotherShip();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShip();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AEnemyMotherShip::StaticRegisterNativesAEnemyMotherShip()
	{
	}
	UClass* Z_Construct_UClass_AEnemyMotherShip_NoRegister()
	{
		return AEnemyMotherShip::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyMotherShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyMotherShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyShip,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyMotherShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyMotherShip.h" },
		{ "ModuleRelativePath", "EnemyMotherShip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyMotherShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyMotherShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyMotherShip_Statics::ClassParams = {
		&AEnemyMotherShip::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemyMotherShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyMotherShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyMotherShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyMotherShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyMotherShip, 864794810);
	template<> STARFIGHTER_API UClass* StaticClass<AEnemyMotherShip>()
	{
		return AEnemyMotherShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyMotherShip(Z_Construct_UClass_AEnemyMotherShip, &AEnemyMotherShip::StaticClass, TEXT("/Script/StarFighter"), TEXT("AEnemyMotherShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyMotherShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
