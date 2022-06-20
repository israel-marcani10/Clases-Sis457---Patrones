// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PatternEnemyShip1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternEnemyShip1() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APatternEnemyShip1_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APatternEnemyShip1();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShipWithPattern_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UEnemyShipWithPatternBuilder_NoRegister();
// End Cross Module References
	void APatternEnemyShip1::StaticRegisterNativesAPatternEnemyShip1()
	{
	}
	UClass* Z_Construct_UClass_APatternEnemyShip1_NoRegister()
	{
		return APatternEnemyShip1::StaticClass();
	}
	struct Z_Construct_UClass_APatternEnemyShip1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshShipE_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshShipE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatternEnemyShip1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatternEnemyShip1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatternEnemyShip1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatternEnemyShip1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PatternEnemyShip1.h" },
		{ "ModuleRelativePath", "PatternEnemyShip1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_MeshShipE_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PatternEnemyShip1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_MeshShipE = { "MeshShipE", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatternEnemyShip1, MeshShipE), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_MeshShipE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_MeshShipE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_BulletSpawnPoint_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PatternEnemyShip1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_BulletSpawnPoint = { "BulletSpawnPoint", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatternEnemyShip1, BulletSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_BulletSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_BulletSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_PatternEnemyShip1_MetaData[] = {
		{ "Category", "Nave Enemiga con patron 1" },
		{ "ModuleRelativePath", "PatternEnemyShip1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_PatternEnemyShip1 = { "PatternEnemyShip1", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatternEnemyShip1, PatternEnemyShip1), Z_Construct_UClass_AEnemyShipWithPattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_PatternEnemyShip1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_PatternEnemyShip1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatternEnemyShip1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_MeshShipE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_BulletSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatternEnemyShip1_Statics::NewProp_PatternEnemyShip1,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APatternEnemyShip1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemyShipWithPatternBuilder_NoRegister, (int32)VTABLE_OFFSET(APatternEnemyShip1, IEnemyShipWithPatternBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatternEnemyShip1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatternEnemyShip1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatternEnemyShip1_Statics::ClassParams = {
		&APatternEnemyShip1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APatternEnemyShip1_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APatternEnemyShip1_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APatternEnemyShip1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatternEnemyShip1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatternEnemyShip1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatternEnemyShip1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatternEnemyShip1, 1155446143);
	template<> STARFIGHTER_API UClass* StaticClass<APatternEnemyShip1>()
	{
		return APatternEnemyShip1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatternEnemyShip1(Z_Construct_UClass_APatternEnemyShip1, &APatternEnemyShip1::StaticClass, TEXT("/Script/StarFighter"), TEXT("APatternEnemyShip1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatternEnemyShip1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
