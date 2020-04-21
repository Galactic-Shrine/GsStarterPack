// Galactic-Shrine © 2019-2020 - Tous droits résérvés.

using UnrealBuildTool;
using System.Collections.Generic;

public class GsStarterPackEditorTarget : TargetRules
{
	public GsStarterPackEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "GsStarterPack" } );
	}
}
