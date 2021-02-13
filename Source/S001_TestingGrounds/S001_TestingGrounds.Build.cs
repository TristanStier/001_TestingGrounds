// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class S001_TestingGrounds : ModuleRules
{
	public S001_TestingGrounds(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
