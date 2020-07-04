// Galactic-Shrine © 2019-2020 - Tous droits résérvés.

#include "ParametresDesJeuxBPLibrary.h"
#include "ParametresDesJeux.h"
#include "Misc/ConfigCacheIni.h" // Donne l'accès au GConfig

/**UParametresDesJeuxBPLibrary::UParametresDesJeuxBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer) {

}*/

/** The name of the company (author, provider) that created the project. - Le nom de la société (auteur, fournisseur) qui a créé le projet.	*/
void UParametresDesJeuxBPLibrary::CompanyName(FString& PCompanyName) {
  
  PCompanyName = GetDefault<UGeneralProjectSettings>()->CompanyName;
}

/** The distinguished name of the company (author, provider) that created the project. - Le nom distingué de la société (auteur, fournisseur) qui a créé le projet.	*/
void UParametresDesJeuxBPLibrary::CompanyDistinguishedName(FString& PCompanyDistinguishedName) {

  PCompanyDistinguishedName = GetDefault<UGeneralProjectSettings>()->CompanyDistinguishedName;
}

/** The project's homepage URL. - L'URL de la page d'accueil du projet.*/
void UParametresDesJeuxBPLibrary::Homepage(FString& PHomepage) {

  PHomepage = GetDefault<UGeneralProjectSettings>()->Homepage;
}

/** The project's support contact information. - Les coordonnées des personnes à contacter pour le soutien du projet. */
void UParametresDesJeuxBPLibrary::SupportContact(FString& PSupportContact) {

  PSupportContact = GetDefault<UGeneralProjectSettings>()->SupportContact;
}

/** The project's copyright and/or trademark notices. - Les avis de droit d'auteur et/ou de marque du projet. */
void UParametresDesJeuxBPLibrary::CopyrightNotice(FString& PCopyrightNotice) {

  PCopyrightNotice = GetDefault<UGeneralProjectSettings>()->CopyrightNotice;
}

/** Getting the project version - Recuper la version du projet */
void UParametresDesJeuxBPLibrary::GameVersion(FString& PVersion) {

  PVersion = GetDefault<UGeneralProjectSettings>()->ProjectVersion;
}


void UParametresDesJeuxBPLibrary::GetProjectSettings(FProjectSettings& Settings) {

  const UGeneralProjectSettings* ProjectSettings = GetDefault<UGeneralProjectSettings>();

  Settings = FProjectSettings();
  Settings.ProjectVersion = ProjectSettings->ProjectVersion;
  Settings.CopyrightNotice = ProjectSettings->CopyrightNotice;
  Settings.CompanyName = ProjectSettings->CompanyName;
  Settings.bAllowClose = ProjectSettings->bAllowClose;
}

/*void UParametresDesJeuxBPLibrary::GameVersion(FString &PVersion) {

    GConfig->GetString(
        TEXT("/Script/EngineSettings.GeneralProjectSettings"),
        TEXT("ProjectVersion"),
        PVersion,
        GGameIni
    );
}
FString UParametresDesJeuxBPLibrary::GameVersion() {

    FString Version;
    GConfig->GetString(
        TEXT("/Script/EngineSettings.GeneralProjectSettings"),
        TEXT("ProjectVersion"),
        PVersion,
        GGameIni
    );
    return PVersion;
}*/
