// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/WorldTileSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldTileSpawner() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_AWorldTileSpawner_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_AWorldTileSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TESTPROJECT_API UClass* Z_Construct_UClass_AActorCppParent_NoRegister();
// End Cross Module References
	void AWorldTileSpawner::StaticRegisterNativesAWorldTileSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldTileSpawner);
	UClass* Z_Construct_UClass_AWorldTileSpawner_NoRegister()
	{
		return AWorldTileSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AWorldTileSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tileBlueprintToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_tileBlueprintToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldTileSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldTileSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldTileSpawner.h" },
		{ "ModuleRelativePath", "WorldTileSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldTileSpawner_Statics::NewProp_tileBlueprintToSpawn_MetaData[] = {
		{ "Category", "WorldTileSpawner" },
		{ "ModuleRelativePath", "WorldTileSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldTileSpawner_Statics::NewProp_tileBlueprintToSpawn = { "tileBlueprintToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldTileSpawner, tileBlueprintToSpawn), Z_Construct_UClass_AActorCppParent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWorldTileSpawner_Statics::NewProp_tileBlueprintToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldTileSpawner_Statics::NewProp_tileBlueprintToSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldTileSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldTileSpawner_Statics::NewProp_tileBlueprintToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldTileSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldTileSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldTileSpawner_Statics::ClassParams = {
		&AWorldTileSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWorldTileSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldTileSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldTileSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldTileSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldTileSpawner()
	{
		if (!Z_Registration_Info_UClass_AWorldTileSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldTileSpawner.OuterSingleton, Z_Construct_UClass_AWorldTileSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldTileSpawner.OuterSingleton;
	}
	template<> TESTPROJECT_API UClass* StaticClass<AWorldTileSpawner>()
	{
		return AWorldTileSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldTileSpawner);
	struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_WorldTileSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_WorldTileSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldTileSpawner, AWorldTileSpawner::StaticClass, TEXT("AWorldTileSpawner"), &Z_Registration_Info_UClass_AWorldTileSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldTileSpawner), 388382070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_WorldTileSpawner_h_1632331663(TEXT("/Script/TestProject"),
		Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_WorldTileSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_WorldTileSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
