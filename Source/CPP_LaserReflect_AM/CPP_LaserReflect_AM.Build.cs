// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_LaserReflect_AM : ModuleRules
{
	public CPP_LaserReflect_AM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
