// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaFM_GeneradorCapsulasEnergia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_GeneradorCapsulasEnergia() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_GeneradorCapsulas();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule_NoRegister();
// End Cross Module References
	void APaFM_GeneradorCapsulasEnergia::StaticRegisterNativesAPaFM_GeneradorCapsulasEnergia()
	{
	}
	UClass* Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_NoRegister()
	{
		return APaFM_GeneradorCapsulasEnergia::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsulaEnergia1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CapsulaEnergia1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_GeneradorCapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_GeneradorCapsulasEnergia.h" },
		{ "ModuleRelativePath", "PaFM_GeneradorCapsulasEnergia.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::NewProp_CapsulaEnergia1_MetaData[] = {
		{ "Category", "Tipo Capsulas" },
		{ "ModuleRelativePath", "PaFM_GeneradorCapsulasEnergia.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::NewProp_CapsulaEnergia1 = { "CapsulaEnergia1", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaFM_GeneradorCapsulasEnergia, CapsulaEnergia1), Z_Construct_UClass_AMyCapsule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::NewProp_CapsulaEnergia1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::NewProp_CapsulaEnergia1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::NewProp_CapsulaEnergia1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_GeneradorCapsulasEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::ClassParams = {
		&APaFM_GeneradorCapsulasEnergia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_GeneradorCapsulasEnergia, 747871303);
	template<> STARFIGHTER_API UClass* StaticClass<APaFM_GeneradorCapsulasEnergia>()
	{
		return APaFM_GeneradorCapsulasEnergia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_GeneradorCapsulasEnergia(Z_Construct_UClass_APaFM_GeneradorCapsulasEnergia, &APaFM_GeneradorCapsulasEnergia::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaFM_GeneradorCapsulasEnergia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_GeneradorCapsulasEnergia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
