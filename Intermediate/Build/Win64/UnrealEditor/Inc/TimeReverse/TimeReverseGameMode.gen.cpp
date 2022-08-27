// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeReverse/TimeReverseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeReverseGameMode() {}
// Cross Module References
	TIMEREVERSE_API UClass* Z_Construct_UClass_ATimeReverseGameMode_NoRegister();
	TIMEREVERSE_API UClass* Z_Construct_UClass_ATimeReverseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TimeReverse();
// End Cross Module References
	void ATimeReverseGameMode::StaticRegisterNativesATimeReverseGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimeReverseGameMode);
	UClass* Z_Construct_UClass_ATimeReverseGameMode_NoRegister()
	{
		return ATimeReverseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATimeReverseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeReverseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeReverse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeReverseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TimeReverseGameMode.h" },
		{ "ModuleRelativePath", "TimeReverseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeReverseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeReverseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeReverseGameMode_Statics::ClassParams = {
		&ATimeReverseGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATimeReverseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReverseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimeReverseGameMode()
	{
		if (!Z_Registration_Info_UClass_ATimeReverseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeReverseGameMode.OuterSingleton, Z_Construct_UClass_ATimeReverseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATimeReverseGameMode.OuterSingleton;
	}
	template<> TIMEREVERSE_API UClass* StaticClass<ATimeReverseGameMode>()
	{
		return ATimeReverseGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeReverseGameMode);
	struct Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_TimeReverseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_TimeReverseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATimeReverseGameMode, ATimeReverseGameMode::StaticClass, TEXT("ATimeReverseGameMode"), &Z_Registration_Info_UClass_ATimeReverseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeReverseGameMode), 708230758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_TimeReverseGameMode_h_2192903581(TEXT("/Script/TimeReverse"),
		Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_TimeReverseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TimeReverse_Source_TimeReverse_TimeReverseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
