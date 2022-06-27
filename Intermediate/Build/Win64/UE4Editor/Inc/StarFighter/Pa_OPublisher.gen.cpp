// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Pa_OPublisher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePa_OPublisher() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APa_OPublisher_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APa_OPublisher();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void APa_OPublisher::StaticRegisterNativesAPa_OPublisher()
	{
	}
	UClass* Z_Construct_UClass_APa_OPublisher_NoRegister()
	{
		return APa_OPublisher::StaticClass();
	}
	struct Z_Construct_UClass_APa_OPublisher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subscribers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subscribers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subscribers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APa_OPublisher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OPublisher_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pa_OPublisher.h" },
		{ "ModuleRelativePath", "Pa_OPublisher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APa_OPublisher_Statics::NewProp_Subscribers_Inner = { "Subscribers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OPublisher_Statics::NewProp_Subscribers_MetaData[] = {
		{ "Comment", "//Los suscriptores de este Publisher\n" },
		{ "ModuleRelativePath", "Pa_OPublisher.h" },
		{ "ToolTip", "Los suscriptores de este Publisher" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APa_OPublisher_Statics::NewProp_Subscribers = { "Subscribers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APa_OPublisher, Subscribers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APa_OPublisher_Statics::NewProp_Subscribers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OPublisher_Statics::NewProp_Subscribers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APa_OPublisher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APa_OPublisher_Statics::NewProp_Subscribers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APa_OPublisher_Statics::NewProp_Subscribers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APa_OPublisher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APa_OPublisher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APa_OPublisher_Statics::ClassParams = {
		&APa_OPublisher::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APa_OPublisher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APa_OPublisher_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APa_OPublisher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OPublisher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APa_OPublisher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APa_OPublisher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APa_OPublisher, 1720582364);
	template<> STARFIGHTER_API UClass* StaticClass<APa_OPublisher>()
	{
		return APa_OPublisher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APa_OPublisher(Z_Construct_UClass_APa_OPublisher, &APa_OPublisher::StaticClass, TEXT("/Script/StarFighter"), TEXT("APa_OPublisher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APa_OPublisher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
