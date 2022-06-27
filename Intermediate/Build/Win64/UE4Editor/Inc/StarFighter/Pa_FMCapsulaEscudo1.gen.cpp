// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Pa_FMCapsulaEscudo1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePa_FMCapsulaEscudo1() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APa_FMCapsulaEscudo1_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APa_FMCapsulaEscudo1();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APa_FMCapsulaEscudo1::StaticRegisterNativesAPa_FMCapsulaEscudo1()
	{
	}
	UClass* Z_Construct_UClass_APa_FMCapsulaEscudo1_NoRegister()
	{
		return APa_FMCapsulaEscudo1::StaticClass();
	}
	struct Z_Construct_UClass_APa_FMCapsulaEscudo1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APa_FMCapsulaEscudo1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_FMCapsulaEscudo1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pa_FMCapsulaEscudo1.h" },
		{ "ModuleRelativePath", "Pa_FMCapsulaEscudo1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APa_FMCapsulaEscudo1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APa_FMCapsulaEscudo1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APa_FMCapsulaEscudo1_Statics::ClassParams = {
		&APa_FMCapsulaEscudo1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APa_FMCapsulaEscudo1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APa_FMCapsulaEscudo1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APa_FMCapsulaEscudo1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APa_FMCapsulaEscudo1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APa_FMCapsulaEscudo1, 1700668753);
	template<> STARFIGHTER_API UClass* StaticClass<APa_FMCapsulaEscudo1>()
	{
		return APa_FMCapsulaEscudo1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APa_FMCapsulaEscudo1(Z_Construct_UClass_APa_FMCapsulaEscudo1, &APa_FMCapsulaEscudo1::StaticClass, TEXT("/Script/StarFighter"), TEXT("APa_FMCapsulaEscudo1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APa_FMCapsulaEscudo1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
