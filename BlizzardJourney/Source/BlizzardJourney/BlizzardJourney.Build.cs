// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BlizzardJourney : ModuleRules
{
	public BlizzardJourney(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
