// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/FloorSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorSwitch() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFloorSwitch_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFloorSwitch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AFloorSwitch::StaticRegisterNativesAFloorSwitch()
	{
	}
	UClass* Z_Construct_UClass_AFloorSwitch_NoRegister()
	{
		return AFloorSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AFloorSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorSwitch.h" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Door to move when the floor switch is stepped on */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Door to move when the floor switch is stepped on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Switch for the character to step up */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Switch for the character to step up" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch = { "FloorSwitch", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, FloorSwitch), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "/** Overlap volume for functionality to be triggered */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Overlap volume for functionality to be triggered" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloorSwitch_Statics::ClassParams = {
		&AFloorSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloorSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloorSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorSwitch, 2472244395);
	template<> FIRSTPROJECT_API UClass* StaticClass<AFloorSwitch>()
	{
		return AFloorSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorSwitch(Z_Construct_UClass_AFloorSwitch, &AFloorSwitch::StaticClass, TEXT("/Script/FirstProject"), TEXT("AFloorSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
