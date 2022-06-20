// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/StarFighterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarFighterGameModeBase() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AStarFighterGameModeBase_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AStarFighterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMotherShipEnemy_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APatternEnemyShipDirector_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APatternEnemyShip1_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaAda_CreateFood_NoRegister();
// End Cross Module References
	void AStarFighterGameModeBase::StaticRegisterNativesAStarFighterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AStarFighterGameModeBase_NoRegister()
	{
		return AStarFighterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStarFighterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotherShip_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MotherShip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatternEnemyShipDirector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatternEnemyShipDirector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatternEnemyShip1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatternEnemyShip1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyShip1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyShip1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarFighterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StarFighterGameModeBase.h" },
		{ "ModuleRelativePath", "StarFighterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_MotherShip_MetaData[] = {
		{ "Category", "Spawn Nodriza" },
		{ "Comment", "// TSubclassOf es una clase de plantilla que proporciona seguridad de tipo UClass.\n" },
		{ "ModuleRelativePath", "StarFighterGameModeBase.h" },
		{ "ToolTip", "TSubclassOf es una clase de plantilla que proporciona seguridad de tipo UClass." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_MotherShip = { "MotherShip", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarFighterGameModeBase, MotherShip), Z_Construct_UClass_AMotherShipEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_MotherShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_MotherShip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShipDirector_MetaData[] = {
		{ "Category", "Implementacion Builder" },
		{ "Comment", "// propiedades para el patron builder\n" },
		{ "ModuleRelativePath", "StarFighterGameModeBase.h" },
		{ "ToolTip", "propiedades para el patron builder" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShipDirector = { "PatternEnemyShipDirector", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarFighterGameModeBase, PatternEnemyShipDirector), Z_Construct_UClass_APatternEnemyShipDirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShipDirector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShipDirector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShip1_MetaData[] = {
		{ "Category", "Implementacion Builder" },
		{ "ModuleRelativePath", "StarFighterGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShip1 = { "PatternEnemyShip1", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarFighterGameModeBase, PatternEnemyShip1), Z_Construct_UClass_APatternEnemyShip1_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShip1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShip1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShip1_MetaData[] = {
		{ "Category", "Implementacion Builder" },
		{ "ModuleRelativePath", "StarFighterGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShip1 = { "EnemyShip1", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarFighterGameModeBase, EnemyShip1), Z_Construct_UClass_APatternEnemyShip1_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShip1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShip1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStarFighterGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_MotherShip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShipDirector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_PatternEnemyShip1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShip1,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaAda_CreateFood_NoRegister, (int32)VTABLE_OFFSET(AStarFighterGameModeBase, IPaAda_CreateFood), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarFighterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarFighterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::ClassParams = {
		&AStarFighterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStarFighterGameModeBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStarFighterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarFighterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarFighterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarFighterGameModeBase, 2711836888);
	template<> STARFIGHTER_API UClass* StaticClass<AStarFighterGameModeBase>()
	{
		return AStarFighterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarFighterGameModeBase(Z_Construct_UClass_AStarFighterGameModeBase, &AStarFighterGameModeBase::StaticClass, TEXT("/Script/StarFighter"), TEXT("AStarFighterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarFighterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
