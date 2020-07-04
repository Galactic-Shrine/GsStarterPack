// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FProjectSettings;
#ifdef PARAMETRESDESJEUX_ParametresDesJeuxBPLibrary_generated_h
#error "ParametresDesJeuxBPLibrary.generated.h already included, missing '#pragma once' in ParametresDesJeuxBPLibrary.h"
#endif
#define PARAMETRESDESJEUX_ParametresDesJeuxBPLibrary_generated_h

#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectSettings_Statics; \
	PARAMETRESDESJEUX_API static class UScriptStruct* StaticStruct();


template<> PARAMETRESDESJEUX_API UScriptStruct* StaticStruct<struct FProjectSettings>();

#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_SPARSE_DATA
#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProjectSettings) \
	{ \
		P_GET_STRUCT_REF(FProjectSettings,Z_Param_Out_PSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UParametresDesJeuxBPLibrary::GetProjectSettings(Z_Param_Out_PSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameVersion) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UParametresDesJeuxBPLibrary::GameVersion(Z_Param_Out_PVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompanyDistinguishedName) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PCompanyDistinguishedName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UParametresDesJeuxBPLibrary::CompanyDistinguishedName(Z_Param_Out_PCompanyDistinguishedName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompanyName) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PCompanyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UParametresDesJeuxBPLibrary::CompanyName(Z_Param_Out_PCompanyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParametresDesJeuxSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UParametresDesJeuxBPLibrary::ParametresDesJeuxSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProjectSettings) \
	{ \
		P_GET_STRUCT_REF(FProjectSettings,Z_Param_Out_PSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UParametresDesJeuxBPLibrary::GetProjectSettings(Z_Param_Out_PSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameVersion) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UParametresDesJeuxBPLibrary::GameVersion(Z_Param_Out_PVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompanyDistinguishedName) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PCompanyDistinguishedName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UParametresDesJeuxBPLibrary::CompanyDistinguishedName(Z_Param_Out_PCompanyDistinguishedName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompanyName) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PCompanyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UParametresDesJeuxBPLibrary::CompanyName(Z_Param_Out_PCompanyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParametresDesJeuxSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UParametresDesJeuxBPLibrary::ParametresDesJeuxSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParametresDesJeuxBPLibrary(); \
	friend struct Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UParametresDesJeuxBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParametresDesJeux"), NO_API) \
	DECLARE_SERIALIZER(UParametresDesJeuxBPLibrary)


#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUParametresDesJeuxBPLibrary(); \
	friend struct Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UParametresDesJeuxBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParametresDesJeux"), NO_API) \
	DECLARE_SERIALIZER(UParametresDesJeuxBPLibrary)


#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParametresDesJeuxBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParametresDesJeuxBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParametresDesJeuxBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParametresDesJeuxBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParametresDesJeuxBPLibrary(UParametresDesJeuxBPLibrary&&); \
	NO_API UParametresDesJeuxBPLibrary(const UParametresDesJeuxBPLibrary&); \
public:


#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParametresDesJeuxBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParametresDesJeuxBPLibrary(UParametresDesJeuxBPLibrary&&); \
	NO_API UParametresDesJeuxBPLibrary(const UParametresDesJeuxBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParametresDesJeuxBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParametresDesJeuxBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParametresDesJeuxBPLibrary)


#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_PRIVATE_PROPERTY_OFFSET
#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_116_PROLOG
#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_PRIVATE_PROPERTY_OFFSET \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_SPARSE_DATA \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_RPC_WRAPPERS \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_INCLASS \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_PRIVATE_PROPERTY_OFFSET \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_SPARSE_DATA \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_INCLASS_NO_PURE_DECLS \
	GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARAMETRESDESJEUX_API UClass* StaticClass<class UParametresDesJeuxBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GsPlugins_Plugins_ParametresDesJeux_Source_ParametresDesJeux_Public_ParametresDesJeuxBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
