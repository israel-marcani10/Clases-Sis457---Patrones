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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshShipEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshShipEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityShip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityShip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefenseSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefenseSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplacementSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplacementSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_MeshShipEnemy_MetaData[] = {
		{ "Category", "Nave enemiga con Patron" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyShipWithPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_MeshShipEnemy = { "MeshShipEnemy", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShipWithPattern, MeshShipEnemy), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_MeshShipEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_MeshShipEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_VelocityShip_MetaData[] = {
		{ "Category", "Nave enemiga con Patron" },
		{ "ModuleRelativePath", "EnemyShipWithPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_VelocityShip = { "VelocityShip", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShipWithPattern, VelocityShip), METADATA_PARAMS(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_VelocityShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_VelocityShip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_BulletSpawnPoint_MetaData[] = {
		{ "Category", "Nave enemiga con Patron" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyShipWithPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_BulletSpawnPoint = { "BulletSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShipWithPattern, BulletSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_BulletSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_BulletSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DefenseSystem_MetaData[] = {
		{ "Category", "Nave enemiga con Patron" },
		{ "ModuleRelativePath", "EnemyShipWithPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DefenseSystem = { "DefenseSystem", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShipWithPattern, DefenseSystem), METADATA_PARAMS(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DefenseSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DefenseSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DisplacementSystem_MetaData[] = {
		{ "Category", "Nave enemiga con Patron" },
		{ "ModuleRelativePath", "EnemyShipWithPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DisplacementSystem = { "DisplacementSystem", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShipWithPattern, DisplacementSystem), METADATA_PARAMS(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DisplacementSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DisplacementSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyShipWithPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_MeshShipEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_VelocityShip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_BulletSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DefenseSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShipWithPattern_Statics::NewProp_DisplacementSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyShipWithPattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShipWithPattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShipWithPattern_Statics::ClassParams = {
		&AEnemyShipWithPattern::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyShipWithPattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPattern_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AEnemyShipWithPattern, 2822355099);
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
