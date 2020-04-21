// Galactic-Shrine © 2019-2020 - Tous droits résérvés.

using UnrealBuildTool;
using System.Collections.Generic;

public class GsStarterPackTarget : TargetRules
{
	public GsStarterPackTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "GsStarterPack" } );
	}
}
