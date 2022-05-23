// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/BulletEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletEnemy() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ABulletEnemy_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ABulletEnemy();
	STARFIGHTER_API UClass* Z_Construct_UClass_AProyectil();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void ABulletEnemy::StaticRegisterNativesABulletEnemy()
	{
	}
	UClass* Z_Construct_UClass_ABulletEnemy_NoRegister()
	{
		return ABulletEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABulletEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABulletEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProyectil,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BulletEnemy.h" },
		{ "ModuleRelativePath", "BulletEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABulletEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABulletEnemy_Statics::ClassParams = {
		&ABulletEnemy::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ABulletEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABulletEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABulletEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABulletEnemy, 1340777232);
	template<> STARFIGHTER_API UClass* StaticClass<ABulletEnemy>()
	{
		return ABulletEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABulletEnemy(Z_Construct_UClass_ABulletEnemy, &ABulletEnemy::StaticClass, TEXT("/Script/StarFighter"), TEXT("ABulletEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
