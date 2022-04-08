// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MeTown_ProcMesh : ModuleRules
{
	public MeTown_ProcMesh(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "ProceduralMeshComponent" });
	}
}
