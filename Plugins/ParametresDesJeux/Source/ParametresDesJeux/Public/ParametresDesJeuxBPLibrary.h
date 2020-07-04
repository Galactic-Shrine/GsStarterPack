// Galactic-Shrine © 2019-2020 - Tous droits résérvés.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "GeneralProjectSettings.h" // Nécessite le module EngineSettings
#include "ParametresDesJeuxBPLibrary.generated.h"


USTRUCT(BlueprintType)
struct FProjectSettings {

	//GENERATED_UCLASS_BODY()
	GENERATED_BODY()

		/** The name of the company (author, provider) that created the project. - Le nom de la société (auteur, fournisseur) qui a créé le projet.	*/
		UPROPERTY(BlueprintReadOnly, Category = Publisher)
			FString CompanyName;

		/** The distinguished name of the company (author, provider) that created the project. - Le nom distingué de la société (auteur, fournisseur) qui a créé le projet.	*/
		UPROPERTY(BlueprintReadOnly, Category = Publisher)
			FString CompanyDistinguishedName;

		/** The project's homepage URL. - L'URL de la page d'accueil du projet.*/
		UPROPERTY(BlueprintReadOnly, Category = Publisher)
			FString Homepage;

		/** The project's support contact information. - Les coordonnées des personnes à contacter pour le soutien du projet. */
		UPROPERTY(BlueprintReadOnly, Category = Publisher)
			FString SupportContact;

		/** The project's copyright and/or trademark notices. - Les avis de droit d'auteur et/ou de marque du projet. */
		UPROPERTY(BlueprintReadOnly, Category = Legal)
			FString CopyrightNotice;

		/** The project's licensing terms. */
		UPROPERTY(BlueprintReadOnly, Category = Legal)
			FString LicensingTerms;

		/** The project's privacy policy. */
		UPROPERTY(BlueprintReadOnly, Category = Legal)
			FString PrivacyPolicy;

		/** The project's description text. */
		UPROPERTY(BlueprintReadOnly, Category = About)
			FString Description;

		/** The project's unique identifier. */
		UPROPERTY(BlueprintReadOnly, Category = About)
			FString ProjectID;

		/** The project's version number. */
		UPROPERTY(BlueprintReadOnly, Category = About)
			FString ProjectVersion;

		/** The project's name. */
		UPROPERTY(BlueprintReadOnly, Category = About)
			FGuid ProjectName;

		/** The project's title as displayed on the window title bar (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text) */
		UPROPERTY(BlueprintReadOnly, Category = Displayed)
			FText ProjectDisplayedTitle;

		/** Additional data to be displayed on the window title bar in non-shipping configurations (can include the tokens {GameName}, {PlatformArchitecture}, {BuildConfiguration} or {RHIName}, which will be replaced with the specified text) */
		UPROPERTY(BlueprintReadOnly, Category = Displayed)
			FText ProjectDebugTitleInfo;

		/** Should the game's window preserve its aspect ratio when resized by user. */
		UPROPERTY(BlueprintReadOnly, Category = Settings)
			bool bShouldWindowPreserveAspectRatio;

		/** Should the game use a borderless Slate window instead of a window with system title bar and border */
		UPROPERTY(BlueprintReadOnly, Category = Settings)
			bool bUseBorderlessWindow;

		/** Should the game attempt to start in VR, regardless of whether -vr was set on the commandline */
		UPROPERTY(BlueprintReadOnly, Category = Settings)
			bool bStartInVR;

		UPROPERTY(BlueprintReadOnly, Category = Settings)
			bool bAllowClose;

		UPROPERTY(BlueprintReadOnly, Category = Settings)
			bool bAllowMaximize;

		UPROPERTY(BlueprintReadOnly, Category = Settings)
			bool bAllowMinimize;

		UPROPERTY(BlueprintReadOnly, Category = Settings)
			bool bAllowWindowResize;
};

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UParametresDesJeuxBPLibrary : public UBlueprintFunctionLibrary {
	//GENERATED_UCLASS_BODY()
	GENERATED_BODY()

	/** The name of the company (author, provider) that created the project. - Le nom de la société (auteur, fournisseur) qui a créé le projet.	*/
	public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Company Name", CompactNodeTitle = "CompanyName"), Category = "GalacticShrine|SystemInformation|Publisher")
			static void CompanyName(FString& PCompanyName);

	/** The distinguished name of the company (author, provider) that created the project. - Le nom distingué de la société (auteur, fournisseur) qui a créé le projet.	*/
	public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Company Distinguished Name", CompactNodeTitle = "CompanyDistinguishedName"), Category = "GalacticShrine|SystemInformation|Publisher")
			static void CompanyDistinguishedName(FString& PCompanyDistinguishedName);

	/** The project's homepage URL. - L'URL de la page d'accueil du projet.*/
	public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Homepage", CompactNodeTitle = "Homepage"), Category = "GalacticShrine|SystemInformation|Publisher")
			static void Homepage(FString& PHomepage);

	/** The project's support contact information. - Les coordonnées des personnes à contacter pour le soutien du projet. */
	public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Support Contact", CompactNodeTitle = "SupportContact"), Category = "GalacticShrine|SystemInformation|Publisher")
			static void SupportContact(FString& PSupportContact);

	/** The project's copyright and/or trademark notices. - Les avis de droit d'auteur et/ou de marque du projet. */
	public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Copyright Notice", CompactNodeTitle = "CopyrightNotice"), Category = "GalacticShrine|SystemInformation|Legal")
			static void CopyrightNotice(FString& PCopyrightNotice);

	/** Getting the project version - Recuper la version du projet */
	public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Game Version", CompactNodeTitle = "GameVersion"), Category = "GalacticShrine|SystemInformation|About")
			static void GameVersion(FString& PVersion);

	public:
		UFUNCTION(BlueprintCallable)
			static void GetProjectSettings(FProjectSettings& Settings);
	
	/**
	public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "Game Version", CompactNodeTitle = "GameVersion"), Category = "GalacticShrine|SystemInformation|About")
			static FString GameVersion();

	public:
		UFUNCTION(BlueprintCallable, Category = "GalacticShrine|SystemInformation|Utility")
			static void GetProjectSettings(FProjectSettings& Settings);
	*/
};
