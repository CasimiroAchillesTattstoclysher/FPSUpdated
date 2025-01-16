// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Fps2 : ModuleRules
{
	public Fps2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
