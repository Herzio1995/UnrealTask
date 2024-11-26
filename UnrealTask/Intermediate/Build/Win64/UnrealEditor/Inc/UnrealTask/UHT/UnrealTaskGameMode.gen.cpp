// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTask/UnrealTaskGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealTaskGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALTASK_API UClass* Z_Construct_UClass_AUnrealTaskGameMode();
	UNREALTASK_API UClass* Z_Construct_UClass_AUnrealTaskGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealTask();
// End Cross Module References
	void AUnrealTaskGameMode::StaticRegisterNativesAUnrealTaskGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealTaskGameMode);
	UClass* Z_Construct_UClass_AUnrealTaskGameMode_NoRegister()
	{
		return AUnrealTaskGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealTaskGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealTaskGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTask,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealTaskGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealTaskGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealTaskGameMode.h" },
		{ "ModuleRelativePath", "UnrealTaskGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealTaskGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealTaskGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealTaskGameMode_Statics::ClassParams = {
		&AUnrealTaskGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealTaskGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealTaskGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUnrealTaskGameMode()
	{
		if (!Z_Registration_Info_UClass_AUnrealTaskGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealTaskGameMode.OuterSingleton, Z_Construct_UClass_AUnrealTaskGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealTaskGameMode.OuterSingleton;
	}
	template<> UNREALTASK_API UClass* StaticClass<AUnrealTaskGameMode>()
	{
		return AUnrealTaskGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealTaskGameMode);
	AUnrealTaskGameMode::~AUnrealTaskGameMode() {}
	struct Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_UnrealTaskGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_UnrealTaskGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealTaskGameMode, AUnrealTaskGameMode::StaticClass, TEXT("AUnrealTaskGameMode"), &Z_Registration_Info_UClass_AUnrealTaskGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealTaskGameMode), 250837950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_UnrealTaskGameMode_h_1704437263(TEXT("/Script/UnrealTask"),
		Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_UnrealTaskGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_UnrealTaskGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
