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
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShipWithPattern_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyShipPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyShipPattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarFighterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShipPattern_MetaData[] = {
		{ "Category", "Spawn Nodriza" },
		{ "ModuleRelativePath", "StarFighterGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShipPattern = { "EnemyShipPattern", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarFighterGameModeBase, EnemyShipPattern), Z_Construct_UClass_AEnemyShipWithPattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShipPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShipPattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStarFighterGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_MotherShip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_EnemyShipPattern,
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
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::PropPointers),
		0,
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
	IMPLEMENT_CLASS(AStarFighterGameModeBase, 423449008);
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
