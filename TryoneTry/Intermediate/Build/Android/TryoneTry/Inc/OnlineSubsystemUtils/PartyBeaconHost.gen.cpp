// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/PartyBeaconHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyBeaconHost() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconHost_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconHost();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UPartyBeaconState_NoRegister();
// End Cross Module References
	void APartyBeaconHost::StaticRegisterNativesAPartyBeaconHost()
	{
	}
	UClass* Z_Construct_UClass_APartyBeaconHost_NoRegister()
	{
		return APartyBeaconHost::StaticClass();
	}
	struct Z_Construct_UClass_APartyBeaconHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravelSessionTimeoutSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TravelSessionTimeoutSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionTimeoutSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SessionTimeoutSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLogoutOnSessionTimeout_MetaData[];
#endif
		static void NewProp_bLogoutOnSessionTimeout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLogoutOnSessionTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APartyBeaconHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconHost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon host used for taking reservations for an existing game session\n */" },
		{ "IncludePath", "PartyBeaconHost.h" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs_MetaData[] = {
		{ "Comment", "/** Seconds that can elapse before a reservation is removed due to player not being registered with the session during a travel */" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "Seconds that can elapse before a reservation is removed due to player not being registered with the session during a travel" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs = { "TravelSessionTimeoutSecs", nullptr, (EPropertyFlags)0x0020080000006000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyBeaconHost, TravelSessionTimeoutSecs), METADATA_PARAMS(Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_SessionTimeoutSecs_MetaData[] = {
		{ "Comment", "/** Seconds that can elapse before a reservation is removed due to player not being registered with the session */" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "Seconds that can elapse before a reservation is removed due to player not being registered with the session" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_SessionTimeoutSecs = { "SessionTimeoutSecs", nullptr, (EPropertyFlags)0x0020080000006000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyBeaconHost, SessionTimeoutSecs), METADATA_PARAMS(Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_SessionTimeoutSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_SessionTimeoutSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_MetaData[] = {
		{ "Comment", "/** Do the timeouts below cause a player to be removed from the reservation list */" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "Do the timeouts below cause a player to be removed from the reservation list" },
	};
#endif
	void Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_SetBit(void* Obj)
	{
		((APartyBeaconHost*)Obj)->bLogoutOnSessionTimeout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout = { "bLogoutOnSessionTimeout", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APartyBeaconHost), &Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** State of the beacon */" },
		{ "ModuleRelativePath", "Public/PartyBeaconHost.h" },
		{ "ToolTip", "State of the beacon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyBeaconHost, State), Z_Construct_UClass_UPartyBeaconState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartyBeaconHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_SessionTimeoutSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APartyBeaconHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartyBeaconHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APartyBeaconHost_Statics::ClassParams = {
		&APartyBeaconHost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APartyBeaconHost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APartyBeaconHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APartyBeaconHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APartyBeaconHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APartyBeaconHost, 3234098815);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<APartyBeaconHost>()
	{
		return APartyBeaconHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APartyBeaconHost(Z_Construct_UClass_APartyBeaconHost, &APartyBeaconHost::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("APartyBeaconHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APartyBeaconHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
