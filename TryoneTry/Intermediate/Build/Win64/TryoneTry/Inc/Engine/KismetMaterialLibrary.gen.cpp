// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/KismetMaterialLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetMaterialLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetMaterialLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetMaterialLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UKismetMaterialLibrary::execCreateDynamicMaterialInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=UKismetMaterialLibrary::CreateDynamicMaterialInstance(Z_Param_WorldContextObject,Z_Param_Parent,Z_Param_OptionalName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetMaterialLibrary::execGetVectorParameterValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UKismetMaterialLibrary::GetVectorParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetMaterialLibrary::execGetScalarParameterValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetMaterialLibrary::GetScalarParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetMaterialLibrary::execSetVectorParameterValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetMaterialLibrary::SetVectorParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName,Z_Param_Out_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetMaterialLibrary::execSetScalarParameterValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetMaterialLibrary::SetScalarParameterValue(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	void UKismetMaterialLibrary::StaticRegisterNativesUKismetMaterialLibrary()
	{
		UClass* Class = UKismetMaterialLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDynamicMaterialInstance", &UKismetMaterialLibrary::execCreateDynamicMaterialInstance },
			{ "GetScalarParameterValue", &UKismetMaterialLibrary::execGetScalarParameterValue },
			{ "GetVectorParameterValue", &UKismetMaterialLibrary::execGetVectorParameterValue },
			{ "SetScalarParameterValue", &UKismetMaterialLibrary::execSetScalarParameterValue },
			{ "SetVectorParameterValue", &UKismetMaterialLibrary::execSetVectorParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics
	{
		struct KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms
		{
			UObject* WorldContextObject;
			UMaterialInterface* Parent;
			FName OptionalName;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_OptionalName = { "OptionalName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, OptionalName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_OptionalName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Creates a Dynamic Material Instance which you can modify during gameplay. */" },
		{ "CPP_Default_OptionalName", "None" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Creates a Dynamic Material Instance which you can modify during gameplay." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "CreateDynamicMaterialInstance", nullptr, nullptr, sizeof(KismetMaterialLibrary_eventCreateDynamicMaterialInstance_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics
	{
		struct KismetMaterialLibrary_eventGetScalarParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventGetScalarParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_Collection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Gets a scalar parameter value from the material collection instance. Logs if ParameterName is invalid. */" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Gets a scalar parameter value from the material collection instance. Logs if ParameterName is invalid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "GetScalarParameterValue", nullptr, nullptr, sizeof(KismetMaterialLibrary_eventGetScalarParameterValue_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics
	{
		struct KismetMaterialLibrary_eventGetVectorParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventGetVectorParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_Collection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Gets a vector parameter value from the material collection instance. Logs if ParameterName is invalid. */" },
		{ "Keywords", "GetColorParameterValue" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Gets a vector parameter value from the material collection instance. Logs if ParameterName is invalid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "GetVectorParameterValue", nullptr, nullptr, sizeof(KismetMaterialLibrary_eventGetVectorParameterValue_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics
	{
		struct KismetMaterialLibrary_eventSetScalarParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			float ParameterValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, ParameterValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventSetScalarParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_ParameterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_Collection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Sets a scalar parameter value on the material collection instance. Logs if ParameterName is invalid. */" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Sets a scalar parameter value on the material collection instance. Logs if ParameterName is invalid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "SetScalarParameterValue", nullptr, nullptr, sizeof(KismetMaterialLibrary_eventSetScalarParameterValue_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics
	{
		struct KismetMaterialLibrary_eventSetVectorParameterValue_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterName;
			FLinearColor ParameterValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetMaterialLibrary_eventSetVectorParameterValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_Collection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Sets a vector parameter value on the material collection instance. Logs if ParameterName is invalid. */" },
		{ "Keywords", "SetColorParameterValue" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ToolTip", "Sets a vector parameter value on the material collection instance. Logs if ParameterName is invalid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetMaterialLibrary, nullptr, "SetVectorParameterValue", nullptr, nullptr, sizeof(KismetMaterialLibrary_eventSetVectorParameterValue_Parms), Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetMaterialLibrary_NoRegister()
	{
		return UKismetMaterialLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetMaterialLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetMaterialLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetMaterialLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_CreateDynamicMaterialInstance, "CreateDynamicMaterialInstance" }, // 119915033
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_GetScalarParameterValue, "GetScalarParameterValue" }, // 4121220955
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_GetVectorParameterValue, "GetVectorParameterValue" }, // 3979677955
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_SetScalarParameterValue, "SetScalarParameterValue" }, // 797290769
		{ &Z_Construct_UFunction_UKismetMaterialLibrary_SetVectorParameterValue, "SetVectorParameterValue" }, // 2854745960
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetMaterialLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetMaterialLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetMaterialLibrary.h" },
		{ "ScriptName", "MaterialLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetMaterialLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetMaterialLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetMaterialLibrary_Statics::ClassParams = {
		&UKismetMaterialLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKismetMaterialLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetMaterialLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetMaterialLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetMaterialLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetMaterialLibrary, 330509292);
	template<> ENGINE_API UClass* StaticClass<UKismetMaterialLibrary>()
	{
		return UKismetMaterialLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetMaterialLibrary(Z_Construct_UClass_UKismetMaterialLibrary, &UKismetMaterialLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetMaterialLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetMaterialLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
