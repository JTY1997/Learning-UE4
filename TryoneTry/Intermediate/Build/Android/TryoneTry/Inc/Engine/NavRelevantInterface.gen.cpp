// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavRelevantInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavRelevantInterface::StaticRegisterNativesUNavRelevantInterface()
	{
	}
	UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister()
	{
		return UNavRelevantInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNavRelevantInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavRelevantInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavRelevantInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavRelevantInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavRelevantInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavRelevantInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavRelevantInterface_Statics::ClassParams = {
		&UNavRelevantInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavRelevantInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavRelevantInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavRelevantInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavRelevantInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavRelevantInterface, 1476055756);
	template<> ENGINE_API UClass* StaticClass<UNavRelevantInterface>()
	{
		return UNavRelevantInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavRelevantInterface(Z_Construct_UClass_UNavRelevantInterface, &UNavRelevantInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UNavRelevantInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavRelevantInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
