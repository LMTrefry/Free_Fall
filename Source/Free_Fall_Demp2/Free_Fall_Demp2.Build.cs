// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Free_Fall_Demp2 : ModuleRules
{
	public Free_Fall_Demp2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
