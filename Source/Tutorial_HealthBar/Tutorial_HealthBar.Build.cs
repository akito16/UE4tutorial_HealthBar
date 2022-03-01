// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tutorial_HealthBar : ModuleRules
{
	public Tutorial_HealthBar(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
