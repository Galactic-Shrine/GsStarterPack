// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParametresDesJeux/Public/ParametresDesJeuxBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParametresDesJeuxBPLibrary() {}
// Cross Module References
	PARAMETRESDESJEUX_API UScriptStruct* Z_Construct_UScriptStruct_FProjectSettings();
	UPackage* Z_Construct_UPackage__Script_ParametresDesJeux();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PARAMETRESDESJEUX_API UClass* Z_Construct_UClass_UParametresDesJeuxBPLibrary_NoRegister();
	PARAMETRESDESJEUX_API UClass* Z_Construct_UClass_UParametresDesJeuxBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PARAMETRESDESJEUX_API UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName();
	PARAMETRESDESJEUX_API UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName();
	PARAMETRESDESJEUX_API UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion();
	PARAMETRESDESJEUX_API UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings();
	PARAMETRESDESJEUX_API UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction();
// End Cross Module References
class UScriptStruct* FProjectSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PARAMETRESDESJEUX_API uint32 Get_Z_Construct_UScriptStruct_FProjectSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectSettings, Z_Construct_UPackage__Script_ParametresDesJeux(), TEXT("ProjectSettings"), sizeof(FProjectSettings), Get_Z_Construct_UScriptStruct_FProjectSettings_Hash());
	}
	return Singleton;
}
template<> PARAMETRESDESJEUX_API UScriptStruct* StaticStruct<FProjectSettings>()
{
	return FProjectSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectSettings(FProjectSettings::StaticStruct, TEXT("/Script/ParametresDesJeux"), TEXT("ProjectSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ParametresDesJeux_StaticRegisterNativesFProjectSettings
{
	FScriptStruct_ParametresDesJeux_StaticRegisterNativesFProjectSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProjectSettings")),new UScriptStruct::TCppStructOps<FProjectSettings>);
	}
} ScriptStruct_ParametresDesJeux_StaticRegisterNativesFProjectSettings;
	struct Z_Construct_UScriptStruct_FProjectSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowWindowResize_MetaData[];
#endif
		static void NewProp_bAllowWindowResize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowWindowResize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMinimize_MetaData[];
#endif
		static void NewProp_bAllowMinimize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMinimize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMaximize_MetaData[];
#endif
		static void NewProp_bAllowMaximize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMaximize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowClose_MetaData[];
#endif
		static void NewProp_bAllowClose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartInVR_MetaData[];
#endif
		static void NewProp_bStartInVR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartInVR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBorderlessWindow_MetaData[];
#endif
		static void NewProp_bUseBorderlessWindow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBorderlessWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldWindowPreserveAspectRatio_MetaData[];
#endif
		static void NewProp_bShouldWindowPreserveAspectRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldWindowPreserveAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectDebugTitleInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ProjectDebugTitleInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectDisplayedTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ProjectDisplayedTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivacyPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrivacyPolicy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LicensingTerms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LicensingTerms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyrightNotice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CopyrightNotice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportContact_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupportContact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hompage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hompage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompanyDistinguishedName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompanyDistinguishedName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompanyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CompanyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowWindowResize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowWindowResize_SetBit(void* Obj)
	{
		((FProjectSettings*)Obj)->bAllowWindowResize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowWindowResize = { "bAllowWindowResize", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectSettings), &Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowWindowResize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowWindowResize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowWindowResize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMinimize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMinimize_SetBit(void* Obj)
	{
		((FProjectSettings*)Obj)->bAllowMinimize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMinimize = { "bAllowMinimize", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectSettings), &Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMinimize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMinimize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMinimize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMaximize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMaximize_SetBit(void* Obj)
	{
		((FProjectSettings*)Obj)->bAllowMaximize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMaximize = { "bAllowMaximize", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectSettings), &Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMaximize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMaximize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMaximize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowClose_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowClose_SetBit(void* Obj)
	{
		((FProjectSettings*)Obj)->bAllowClose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowClose = { "bAllowClose", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectSettings), &Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowClose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bStartInVR_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should the game attempt to start in VR, regardless of whether -vr was set on the commandline */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "Should the game attempt to start in VR, regardless of whether -vr was set on the commandline" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bStartInVR_SetBit(void* Obj)
	{
		((FProjectSettings*)Obj)->bStartInVR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bStartInVR = { "bStartInVR", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectSettings), &Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bStartInVR_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bStartInVR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bStartInVR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bUseBorderlessWindow_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should the game use a borderless Slate window instead of a window with system title bar and border */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "Should the game use a borderless Slate window instead of a window with system title bar and border" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bUseBorderlessWindow_SetBit(void* Obj)
	{
		((FProjectSettings*)Obj)->bUseBorderlessWindow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bUseBorderlessWindow = { "bUseBorderlessWindow", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectSettings), &Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bUseBorderlessWindow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bUseBorderlessWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bUseBorderlessWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should the game's window preserve its aspect ratio when resized by user. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "Should the game's window preserve its aspect ratio when resized by user." },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio_SetBit(void* Obj)
	{
		((FProjectSettings*)Obj)->bShouldWindowPreserveAspectRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio = { "bShouldWindowPreserveAspectRatio", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectSettings), &Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDebugTitleInfo_MetaData[] = {
		{ "Category", "Displayed" },
		{ "Comment", "/** Additional data to be displayed on the window title bar in non-shipping configurations (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text) */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "Additional data to be displayed on the window title bar in non-shipping configurations (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDebugTitleInfo = { "ProjectDebugTitleInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, ProjectDebugTitleInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDebugTitleInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDebugTitleInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDisplayedTitle_MetaData[] = {
		{ "Category", "Displayed" },
		{ "Comment", "/** The project's title as displayed on the window title bar (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text) */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's title as displayed on the window title bar (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDisplayedTitle = { "ProjectDisplayedTitle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, ProjectDisplayedTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDisplayedTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDisplayedTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectName_MetaData[] = {
		{ "Category", "About" },
		{ "Comment", "/** The project's name. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's name." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, ProjectName), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectVersion_MetaData[] = {
		{ "Category", "About" },
		{ "Comment", "/** The project's version number. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's version number." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectVersion = { "ProjectVersion", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, ProjectVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectID_MetaData[] = {
		{ "Category", "About" },
		{ "Comment", "/** The project's unique identifier. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's unique identifier." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectID = { "ProjectID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, ProjectID), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "About" },
		{ "Comment", "/** The project's description text. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's description text." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_PrivacyPolicy_MetaData[] = {
		{ "Category", "Legal" },
		{ "Comment", "/** The project's privacy policy. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's privacy policy." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_PrivacyPolicy = { "PrivacyPolicy", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, PrivacyPolicy), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_PrivacyPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_PrivacyPolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_LicensingTerms_MetaData[] = {
		{ "Category", "Legal" },
		{ "Comment", "/** The project's licensing terms. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's licensing terms." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_LicensingTerms = { "LicensingTerms", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, LicensingTerms), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_LicensingTerms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_LicensingTerms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CopyrightNotice_MetaData[] = {
		{ "Category", "Legal" },
		{ "Comment", "/** The project's copyright and/or trademark notices. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's copyright and/or trademark notices." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CopyrightNotice = { "CopyrightNotice", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, CopyrightNotice), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CopyrightNotice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CopyrightNotice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_SupportContact_MetaData[] = {
		{ "Category", "Publisher" },
		{ "Comment", "/** The project's support contact information. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's support contact information." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_SupportContact = { "SupportContact", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, SupportContact), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_SupportContact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_SupportContact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Hompage_MetaData[] = {
		{ "Category", "Publisher" },
		{ "Comment", "/** The project's homepage URL. */" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The project's homepage URL." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Hompage = { "Hompage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, Hompage), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Hompage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Hompage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyDistinguishedName_MetaData[] = {
		{ "Category", "Publisher" },
		{ "Comment", "/** \n\x09\x09\x09The distinguished name of the company (author, provider) that created the project.\n\x09\x09\x09Le nom distingu? de la soci?t? (auteur, fournisseur) qui a cr?? le projet.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The distinguished name of the company (author, provider) that created the project.\nLe nom distingu? de la soci?t? (auteur, fournisseur) qui a cr?? le projet." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyDistinguishedName = { "CompanyDistinguishedName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, CompanyDistinguishedName), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyDistinguishedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyDistinguishedName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyName_MetaData[] = {
		{ "Category", "Publisher" },
		{ "Comment", "/** \n\x09\x09\x09The name of the company (author, provider) that created the project.\n\x09\x09\x09Le nom de la soci?t? (auteur, fournisseur) qui a cr?? le projet.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "The name of the company (author, provider) that created the project.\nLe nom de la soci?t? (auteur, fournisseur) qui a cr?? le projet." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyName = { "CompanyName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectSettings, CompanyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowWindowResize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMinimize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowMaximize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bAllowClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bStartInVR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bUseBorderlessWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_bShouldWindowPreserveAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDebugTitleInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectDisplayedTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_ProjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_PrivacyPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_LicensingTerms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CopyrightNotice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_SupportContact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_Hompage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyDistinguishedName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectSettings_Statics::NewProp_CompanyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ParametresDesJeux,
		nullptr,
		&NewStructOps,
		"ProjectSettings",
		sizeof(FProjectSettings),
		alignof(FProjectSettings),
		Z_Construct_UScriptStruct_FProjectSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ParametresDesJeux();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectSettings"), sizeof(FProjectSettings), Get_Z_Construct_UScriptStruct_FProjectSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProjectSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectSettings_Hash() { return 3678453305U; }
	void UParametresDesJeuxBPLibrary::StaticRegisterNativesUParametresDesJeuxBPLibrary()
	{
		UClass* Class = UParametresDesJeuxBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompanyDistinguishedName", &UParametresDesJeuxBPLibrary::execCompanyDistinguishedName },
			{ "CompanyName", &UParametresDesJeuxBPLibrary::execCompanyName },
			{ "GameVersion", &UParametresDesJeuxBPLibrary::execGameVersion },
			{ "GetProjectSettings", &UParametresDesJeuxBPLibrary::execGetProjectSettings },
			{ "ParametresDesJeuxSampleFunction", &UParametresDesJeuxBPLibrary::execParametresDesJeuxSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics
	{
		struct ParametresDesJeuxBPLibrary_eventCompanyDistinguishedName_Parms
		{
			FString PCompanyDistinguishedName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PCompanyDistinguishedName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::NewProp_PCompanyDistinguishedName = { "PCompanyDistinguishedName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParametresDesJeuxBPLibrary_eventCompanyDistinguishedName_Parms, PCompanyDistinguishedName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::NewProp_PCompanyDistinguishedName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GalacticShrine|SystemInformation|Game" },
		{ "CompactNodeTitle", "Company Distinguished Name" },
		{ "DisplayName", "Company Distinguished Name" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParametresDesJeuxBPLibrary, nullptr, "CompanyDistinguishedName", nullptr, nullptr, sizeof(ParametresDesJeuxBPLibrary_eventCompanyDistinguishedName_Parms), Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics
	{
		struct ParametresDesJeuxBPLibrary_eventCompanyName_Parms
		{
			FString PCompanyName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PCompanyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::NewProp_PCompanyName = { "PCompanyName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParametresDesJeuxBPLibrary_eventCompanyName_Parms, PCompanyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::NewProp_PCompanyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GalacticShrine|SystemInformation|Game" },
		{ "CompactNodeTitle", "Company Name" },
		{ "DisplayName", "Company Name" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParametresDesJeuxBPLibrary, nullptr, "CompanyName", nullptr, nullptr, sizeof(ParametresDesJeuxBPLibrary_eventCompanyName_Parms), Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics
	{
		struct ParametresDesJeuxBPLibrary_eventGameVersion_Parms
		{
			FString PVersion;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::NewProp_PVersion = { "PVersion", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParametresDesJeuxBPLibrary_eventGameVersion_Parms, PVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::NewProp_PVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "GalacticShrine|SystemInformation|Game" },
		{ "CompactNodeTitle", "GameVersion" },
		{ "DisplayName", "Game Version" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParametresDesJeuxBPLibrary, nullptr, "GameVersion", nullptr, nullptr, sizeof(ParametresDesJeuxBPLibrary_eventGameVersion_Parms), Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics
	{
		struct ParametresDesJeuxBPLibrary_eventGetProjectSettings_Parms
		{
			FProjectSettings PSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::NewProp_PSettings = { "PSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParametresDesJeuxBPLibrary_eventGetProjectSettings_Parms, PSettings), Z_Construct_UScriptStruct_FProjectSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::NewProp_PSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"GalacticShrine|SystemInformation|Utility\")\n" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"GalacticShrine|SystemInformation|Utility\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParametresDesJeuxBPLibrary, nullptr, "GetProjectSettings", nullptr, nullptr, sizeof(ParametresDesJeuxBPLibrary_eventGetProjectSettings_Parms), Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics
	{
		struct ParametresDesJeuxBPLibrary_eventParametresDesJeuxSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParametresDesJeuxBPLibrary_eventParametresDesJeuxSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParametresDesJeuxBPLibrary_eventParametresDesJeuxSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ParametresDesJeuxTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "ParametresDesJeux sample test testing" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParametresDesJeuxBPLibrary, nullptr, "ParametresDesJeuxSampleFunction", nullptr, nullptr, sizeof(ParametresDesJeuxBPLibrary_eventParametresDesJeuxSampleFunction_Parms), Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UParametresDesJeuxBPLibrary_NoRegister()
	{
		return UParametresDesJeuxBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ParametresDesJeux,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyDistinguishedName, "CompanyDistinguishedName" }, // 2672316933
		{ &Z_Construct_UFunction_UParametresDesJeuxBPLibrary_CompanyName, "CompanyName" }, // 334219666
		{ &Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GameVersion, "GameVersion" }, // 1331934041
		{ &Z_Construct_UFunction_UParametresDesJeuxBPLibrary_GetProjectSettings, "GetProjectSettings" }, // 1803174046
		{ &Z_Construct_UFunction_UParametresDesJeuxBPLibrary_ParametresDesJeuxSampleFunction, "ParametresDesJeuxSampleFunction" }, // 1302910171
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "ParametresDesJeuxBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ParametresDesJeuxBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParametresDesJeuxBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics::ClassParams = {
		&UParametresDesJeuxBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParametresDesJeuxBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParametresDesJeuxBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParametresDesJeuxBPLibrary, 1564141513);
	template<> PARAMETRESDESJEUX_API UClass* StaticClass<UParametresDesJeuxBPLibrary>()
	{
		return UParametresDesJeuxBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParametresDesJeuxBPLibrary(Z_Construct_UClass_UParametresDesJeuxBPLibrary, &UParametresDesJeuxBPLibrary::StaticClass, TEXT("/Script/ParametresDesJeux"), TEXT("UParametresDesJeuxBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParametresDesJeuxBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
