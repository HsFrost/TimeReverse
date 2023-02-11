// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeReverse/ComponentTimeReverse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentTimeReverse() {}
// Cross Module References
	TIMEREVERSE_API UClass* Z_Construct_UClass_UComponentTimeReverse_NoRegister();
	TIMEREVERSE_API UClass* Z_Construct_UClass_UComponentTimeReverse();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TimeReverse();
// End Cross Module References
	void UComponentTimeReverse::StaticRegisterNativesUComponentTimeReverse()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentTimeReverse);
	UClass* Z_Construct_UClass_UComponentTimeReverse_NoRegister()
	{
		return UComponentTimeReverse::StaticClass();
	}
	struct Z_Construct_UClass_UComponentTimeReverse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentTimeReverse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeReverse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentTimeReverse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponentTimeReverse.h" },
		{ "ModuleRelativePath", "ComponentTimeReverse.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentTimeReverse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentTimeReverse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentTimeReverse_Statics::ClassParams = {
		&UComponentTimeReverse::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponentTimeReverse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentTimeReverse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentTimeReverse()
	{
		if (!Z_Registration_Info_UClass_UComponentTimeReverse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentTimeReverse.OuterSingleton, Z_Construct_UClass_UComponentTimeReverse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentTimeReverse.OuterSingleton;
	}
	template<> TIMEREVERSE_API UClass* StaticClass<UComponentTimeReverse>()
	{
		return UComponentTimeReverse::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentTimeReverse);
	struct Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_ComponentTimeReverse_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_ComponentTimeReverse_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComponentTimeReverse, UComponentTimeReverse::StaticClass, TEXT("UComponentTimeReverse"), &Z_Registration_Info_UClass_UComponentTimeReverse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentTimeReverse), 2005578681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_ComponentTimeReverse_h_3801602123(TEXT("/Script/TimeReverse"),
		Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_ComponentTimeReverse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_ComponentTimeReverse_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
