// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SpanishCourseUE5 : ModuleRules
{
	public SpanishCourseUE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
