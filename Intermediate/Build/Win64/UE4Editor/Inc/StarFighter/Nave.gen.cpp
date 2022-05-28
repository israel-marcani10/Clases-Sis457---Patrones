// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Nave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void ANave::StaticRegisterNativesANave()
	{
	}
	UClass* Z_Construct_UClass_ANave_NoRegister()
	{
		return ANave::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaulSceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaulSceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathExplosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathExplosionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Field_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Field_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Nave.h" },
		{ "ModuleRelativePath", "Nave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_DefaulSceneRoot_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// Propiedades de la nave padre\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Propiedades de la nave padre" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_DefaulSceneRoot = { "DefaulSceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, DefaulSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_DefaulSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_DefaulSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_ShipParticle_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nave.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_ShipParticle = { "ShipParticle", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, ShipParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_ShipParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_ShipParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_ShipMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "// para el propulsor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "para el propulsor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_ShipMesh = { "ShipMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, ShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_ShipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_ShipMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_ShipCollision_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "// la malla o cascara\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "la malla o cascara" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_ShipCollision = { "ShipCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, ShipCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_ShipCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_ShipCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_DeathExplosionSound_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "// para colisiones \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "para colisiones" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_DeathExplosionSound = { "DeathExplosionSound", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, DeathExplosionSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_DeathExplosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_DeathExplosionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_BulletSpawnPoint_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "// sonido de muerte\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "sonido de muerte" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_BulletSpawnPoint = { "BulletSpawnPoint", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, BulletSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_BulletSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_BulletSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_Field_Width_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// tama?o del campo de juego\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "tama?o del campo de juego" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_Field_Width = { "Field_Width", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, Field_Width), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_Field_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_Field_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_Field_Height_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// ancho del campo\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "ancho del campo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_Field_Height = { "Field_Height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, Field_Height), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_Field_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_Field_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_MaxVelocity_MetaData[] = {
		{ "Category", "Nave" },
		{ "Comment", "// propiedad velocidad maxima de la nave\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "propiedad velocidad maxima de la nave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, MaxVelocity), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_MaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_MaxVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_DefaulSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_ShipParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_ShipMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_ShipCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_DeathExplosionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_BulletSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_Field_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_Field_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_MaxVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Statics::ClassParams = {
		&ANave::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave, 3571166147);
	template<> STARFIGHTER_API UClass* StaticClass<ANave>()
	{
		return ANave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave(Z_Construct_UClass_ANave, &ANave::StaticClass, TEXT("/Script/StarFighter"), TEXT("ANave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
