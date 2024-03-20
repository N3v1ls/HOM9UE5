// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HOM8 : ModuleRules
{
	public HOM8(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
