// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestProject()
	{
		if (!Z_Registration_Info_UPackage__Script_TestProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x638D4822,
				0xDF337B07,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestProject(Z_Construct_UPackage__Script_TestProject, TEXT("/Script/TestProject"), Z_Registration_Info_UPackage__Script_TestProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x638D4822, 0xDF337B07));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
