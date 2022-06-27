// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Pa_OPlayerShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePa_OPlayerShip() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APa_OPlayerShip_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APa_OPlayerShip();
	STARFIGHTER_API UClass* Z_Construct_UClass_APa_OPublisher();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APa_OPlayerShip::StaticRegisterNativesAPa_OPlayerShip()
	{
	}
	UClass* Z_Construct_UClass_APa_OPlayerShip_NoRegister()
	{
		return APa_OPlayerShip::StaticClass();
	}
	struct Z_Construct_UClass_APa_OPlayerShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMesh;
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
	UObject* (*const Z_Construct_UClass_APa_OPlayerShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APa_OPublisher,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OPlayerShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pa_OPlayerShip.h" },
		{ "ModuleRelativePath", "Pa_OPlayerShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_ShipMesh_MetaData[] = {
		{ "Category", "Nave Jugador" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pa_OPlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_ShipMesh = { "ShipMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APa_OPlayerShip, ShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_ShipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_ShipMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Width_MetaData[] = {
		{ "Category", "Pa_OPlayerShip" },
		{ "Comment", "// la malla o cascara\n// tama?o del campo de juego\n" },
		{ "ModuleRelativePath", "Pa_OPlayerShip.h" },
		{ "ToolTip", "la malla o cascara\ntama?o del campo de juego" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Width = { "Field_Width", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APa_OPlayerShip, Field_Width), METADATA_PARAMS(Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Height_MetaData[] = {
		{ "Category", "Pa_OPlayerShip" },
		{ "Comment", "// ancho del campo\n" },
		{ "ModuleRelativePath", "Pa_OPlayerShip.h" },
		{ "ToolTip", "ancho del campo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Height = { "Field_Height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APa_OPlayerShip, Field_Height), METADATA_PARAMS(Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_MaxVelocity_MetaData[] = {
		{ "Category", "Pa_OPlayerShip" },
		{ "Comment", "// propiedad velocidad maxima de la nave\n" },
		{ "ModuleRelativePath", "Pa_OPlayerShip.h" },
		{ "ToolTip", "propiedad velocidad maxima de la nave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APa_OPlayerShip, MaxVelocity), METADATA_PARAMS(Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_MaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_MaxVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APa_OPlayerShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_ShipMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_Field_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APa_OPlayerShip_Statics::NewProp_MaxVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APa_OPlayerShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APa_OPlayerShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APa_OPlayerShip_Statics::ClassParams = {
		&APa_OPlayerShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APa_OPlayerShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APa_OPlayerShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APa_OPlayerShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OPlayerShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APa_OPlayerShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APa_OPlayerShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APa_OPlayerShip, 1212330673);
	template<> STARFIGHTER_API UClass* StaticClass<APa_OPlayerShip>()
	{
		return APa_OPlayerShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APa_OPlayerShip(Z_Construct_UClass_APa_OPlayerShip, &APa_OPlayerShip::StaticClass, TEXT("/Script/StarFighter"), TEXT("APa_OPlayerShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APa_OPlayerShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
