// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/AirEnemy3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirEnemy3() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AAirEnemy3_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AAirEnemy3();
	STARFIGHTER_API UClass* Z_Construct_UClass_AAirEnemy1();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void AAirEnemy3::StaticRegisterNativesAAirEnemy3()
	{
	}
	UClass* Z_Construct_UClass_AAirEnemy3_NoRegister()
	{
		return AAirEnemy3::StaticClass();
	}
	struct Z_Construct_UClass_AAirEnemy3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Misil_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Misil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bomba_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bomba;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirEnemy3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAirEnemy1,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirEnemy3_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AirEnemy3.h" },
		{ "ModuleRelativePath", "AirEnemy3.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Misil_MetaData[] = {
		{ "Category", "AirEnemy3" },
		{ "Comment", "// propiedades de la nave aerea enemiga 3\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AirEnemy3.h" },
		{ "ToolTip", "propiedades de la nave aerea enemiga 3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Misil = { "Misil", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAirEnemy3, Misil), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Misil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Misil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Bomba_MetaData[] = {
		{ "Category", "AirEnemy3" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AirEnemy3.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Bomba = { "Bomba", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAirEnemy3, Bomba), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Bomba_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Bomba_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAirEnemy3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Misil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirEnemy3_Statics::NewProp_Bomba,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirEnemy3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirEnemy3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAirEnemy3_Statics::ClassParams = {
		&AAirEnemy3::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAirEnemy3_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy3_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAirEnemy3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirEnemy3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAirEnemy3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAirEnemy3, 1588716574);
	template<> STARFIGHTER_API UClass* StaticClass<AAirEnemy3>()
	{
		return AAirEnemy3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAirEnemy3(Z_Construct_UClass_AAirEnemy3, &AAirEnemy3::StaticClass, TEXT("/Script/StarFighter"), TEXT("AAirEnemy3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirEnemy3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
