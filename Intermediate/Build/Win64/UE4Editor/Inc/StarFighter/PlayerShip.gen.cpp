// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PlayerShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerShip() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APlayerShip_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APlayerShip();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void APlayerShip::StaticRegisterNativesAPlayerShip()
	{
	}
	UClass* Z_Construct_UClass_APlayerShip_NoRegister()
	{
		return APlayerShip::StaticClass();
	}
	struct Z_Construct_UClass_APlayerShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipExplosionPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipExplosionPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Current_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Current_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerShip.h" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosionPlayer_MetaData[] = {
		{ "Category", "Component" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosionPlayer = { "ShipExplosionPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, ShipExplosionPlayer), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosionPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosionPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Health_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "Comment", "// propiedades propias de la nave jugador\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "propiedades propias de la nave jugador" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Health = { "Max_Health", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, Max_Health), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Health_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "Comment", "// salud maxima\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "salud maxima" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Health = { "Current_Health", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, Current_Health), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Armor_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "Comment", "// salud actual\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "salud actual" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Armor = { "Max_Armor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, Max_Armor), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Armor_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "Comment", "// armadura maxima\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "armadura maxima" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Armor = { "Current_Armor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, Current_Armor), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "Comment", "// propiedad para saber la puntuacion del jugador\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "propiedad para saber la puntuacion del jugador" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, PlayerScore), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Offset from the ships location to spawn projectiles */" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// variable para saber que tan rapido dispara el arma\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "variable para saber que tan rapido dispara el arma" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, FireRate), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "// sonido del disparo\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "sonido del disparo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_FireSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosionPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Max_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Current_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_FireSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerShip_Statics::ClassParams = {
		&APlayerShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerShip, 1309324346);
	template<> STARFIGHTER_API UClass* StaticClass<APlayerShip>()
	{
		return APlayerShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerShip(Z_Construct_UClass_APlayerShip, &APlayerShip::StaticClass, TEXT("/Script/StarFighter"), TEXT("APlayerShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
