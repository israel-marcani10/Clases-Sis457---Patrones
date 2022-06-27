// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Pa_OAcciones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePa_OAcciones() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_UPa_OAcciones_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPa_OAcciones();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void UPa_OAcciones::StaticRegisterNativesUPa_OAcciones()
	{
	}
	UClass* Z_Construct_UClass_UPa_OAcciones_NoRegister()
	{
		return UPa_OAcciones::StaticClass();
	}
	struct Z_Construct_UClass_UPa_OAcciones_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPa_OAcciones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPa_OAcciones_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pa_OAcciones.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPa_OAcciones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPa_OAcciones>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPa_OAcciones_Statics::ClassParams = {
		&UPa_OAcciones::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPa_OAcciones_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPa_OAcciones_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPa_OAcciones()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPa_OAcciones_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPa_OAcciones, 450677163);
	template<> STARFIGHTER_API UClass* StaticClass<UPa_OAcciones>()
	{
		return UPa_OAcciones::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPa_OAcciones(Z_Construct_UClass_UPa_OAcciones, &UPa_OAcciones::StaticClass, TEXT("/Script/StarFighter"), TEXT("UPa_OAcciones"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPa_OAcciones);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
