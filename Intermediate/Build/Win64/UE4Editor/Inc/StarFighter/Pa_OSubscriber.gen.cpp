// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Pa_OSubscriber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePa_OSubscriber() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_UPa_OSubscriber_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPa_OSubscriber();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void UPa_OSubscriber::StaticRegisterNativesUPa_OSubscriber()
	{
	}
	UClass* Z_Construct_UClass_UPa_OSubscriber_NoRegister()
	{
		return UPa_OSubscriber::StaticClass();
	}
	struct Z_Construct_UClass_UPa_OSubscriber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPa_OSubscriber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPa_OSubscriber_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pa_OSubscriber.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPa_OSubscriber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPa_OSubscriber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPa_OSubscriber_Statics::ClassParams = {
		&UPa_OSubscriber::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPa_OSubscriber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPa_OSubscriber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPa_OSubscriber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPa_OSubscriber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPa_OSubscriber, 3579125223);
	template<> STARFIGHTER_API UClass* StaticClass<UPa_OSubscriber>()
	{
		return UPa_OSubscriber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPa_OSubscriber(Z_Construct_UClass_UPa_OSubscriber, &UPa_OSubscriber::StaticClass, TEXT("/Script/StarFighter"), TEXT("UPa_OSubscriber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPa_OSubscriber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
