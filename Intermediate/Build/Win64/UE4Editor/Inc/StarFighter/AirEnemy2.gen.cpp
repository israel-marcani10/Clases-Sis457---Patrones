// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/AirEnemy2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirEnemy2() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AAirEnemy2_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AAirEnemy2();
	STARFIGHTER_API UClass* Z_Construct_UClass_AAirEnemy1();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void AAirEnemy2::StaticRegisterNativesAAirEnemy2()
	{
	}
	UClass* Z_Construct_UClass_AAirEnemy2_NoRegister()
	{
		return AAirEnemy2::StaticClass();
	}
	struct Z_Construct_UClass_AAirEnemy2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bala_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bala;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirEnemy2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAirEnemy1,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirEnemy2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AirEnemy2.h" },
		{ "ModuleRelativePath", "AirEnemy2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirEnemy2_Statics::NewProp_Bala_MetaData[] = {
		{ "Category", "AirEnemy2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AirEnemy2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirEnemy2_Statics::NewProp_Bala = { "Bala", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAirEnemy2, Bala), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAirEnemy2_Statics::NewProp_Bala_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy2_Statics::NewProp_Bala_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAirEnemy2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirEnemy2_Statics::NewProp_Bala,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirEnemy2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirEnemy2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAirEnemy2_Statics::ClassParams = {
		&AAirEnemy2::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAirEnemy2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAirEnemy2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirEnemy2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAirEnemy2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAirEnemy2, 1281676994);
	template<> STARFIGHTER_API UClass* StaticClass<AAirEnemy2>()
	{
		return AAirEnemy2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAirEnemy2(Z_Construct_UClass_AAirEnemy2, &AAirEnemy2::StaticClass, TEXT("/Script/StarFighter"), TEXT("AAirEnemy2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirEnemy2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
