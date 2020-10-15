// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
struct FBlueprintSessionResult;
class UJoinSessionCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_JoinSessionCallbackProxy_generated_h
#error "JoinSessionCallbackProxy.generated.h already included, missing '#pragma once' in JoinSessionCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_JoinSessionCallbackProxy_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoinSession);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoinSession);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJoinSessionCallbackProxy(); \
	friend struct Z_Construct_UClass_UJoinSessionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UJoinSessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UJoinSessionCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUJoinSessionCallbackProxy(); \
	friend struct Z_Construct_UClass_UJoinSessionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UJoinSessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UJoinSessionCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UJoinSessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoinSessionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UJoinSessionCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoinSessionCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UJoinSessionCallbackProxy(UJoinSessionCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UJoinSessionCallbackProxy(const UJoinSessionCallbackProxy&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UJoinSessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UJoinSessionCallbackProxy(UJoinSessionCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UJoinSessionCallbackProxy(const UJoinSessionCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UJoinSessionCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoinSessionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoinSessionCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_13_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class JoinSessionCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UJoinSessionCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
