// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTask/Public/Skate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNREALTASK_API UClass* Z_Construct_UClass_ASkate();
	UNREALTASK_API UClass* Z_Construct_UClass_ASkate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealTask();
// End Cross Module References
	void ASkate::StaticRegisterNativesASkate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkate);
	UClass* Z_Construct_UClass_ASkate_NoRegister()
	{
		return ASkate::StaticClass();
	}
	struct Z_Construct_UClass_ASkate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTask,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkate_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Skate.h" },
		{ "ModuleRelativePath", "Public/Skate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkate_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Skate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASkate_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkate, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASkate_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ASkate_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkate_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkate_Statics::ClassParams = {
		&ASkate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASkate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASkate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASkate_Statics::Class_MetaDataParams), Z_Construct_UClass_ASkate_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkate_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASkate()
	{
		if (!Z_Registration_Info_UClass_ASkate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkate.OuterSingleton, Z_Construct_UClass_ASkate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASkate.OuterSingleton;
	}
	template<> UNREALTASK_API UClass* StaticClass<ASkate>()
	{
		return ASkate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkate);
	ASkate::~ASkate() {}
	struct Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_Public_Skate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_Public_Skate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASkate, ASkate::StaticClass, TEXT("ASkate"), &Z_Registration_Info_UClass_ASkate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkate), 2039873492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_Public_Skate_h_3042252688(TEXT("/Script/UnrealTask"),
		Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_Public_Skate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealTask_UnrealTask_Source_UnrealTask_Public_Skate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
