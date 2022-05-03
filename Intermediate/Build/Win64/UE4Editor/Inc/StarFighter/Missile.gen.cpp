// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Missile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissile() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AMissile_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMissile();
	STARFIGHTER_API UClass* Z_Construct_UClass_AProyectil();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AMissile::StaticRegisterNativesAMissile()
	{
	}
	UClass* Z_Construct_UClass_AMissile_NoRegister()
	{
		return AMissile::StaticClass();
	}
	struct Z_Construct_UClass_AMissile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMissile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProyectil,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Missile.h" },
		{ "ModuleRelativePath", "Missile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMissile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMissile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMissile_Statics::ClassParams = {
		&AMissile::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AMissile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMissile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMissile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMissile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMissile, 275553053);
	template<> STARFIGHTER_API UClass* StaticClass<AMissile>()
	{
		return AMissile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMissile(Z_Construct_UClass_AMissile, &AMissile::StaticClass, TEXT("/Script/StarFighter"), TEXT("AMissile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMissile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
