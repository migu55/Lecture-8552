// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Lecture8552GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLecture8552GameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ALecture8552GameMode(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ALecture8552GameMode(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ANPCCharacter(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ALecture8552GameMode Function SpawnActors ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ALecture8552GameMode_SpawnActors_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552GameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnActors constinit property declarations ***************************
// ********** End Function SpawnActors constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ALecture8552GameMode, nullptr, "SpawnActors", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ALecture8552GameMode_SpawnActors(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ALecture8552GameMode::execSpawnActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnActors();
	P_NATIVE_END;
}
// ********** End Class ALecture8552GameMode Function SpawnActors **********************************

// ********** Begin Class ALecture8552GameMode *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ALecture8552GameMode_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/Lecture8552GameMode.h" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCClassToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552GameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNPCSpawnLocations_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552GameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALecture8552GameMode constinit property declarations *********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_NPCClassToSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultNPCSpawnLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultNPCSpawnLocations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ALecture8552GameMode constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SpawnActors"), .Pointer = &ALecture8552GameMode::execSpawnActors },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALecture8552GameMode_SpawnActors, "SpawnActors" }, // 2ae51a8cd7afa51bb76409ed4e35ba7fb508a18d
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALecture8552GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ALecture8552GameMode Property Definitions ********************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_NPCClassToSpawn = { "NPCClassToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ALecture8552GameMode, NPCClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ANPCCharacter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCClassToSpawn_MetaData), NewProp_NPCClassToSpawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DefaultNPCSpawnLocations_Inner = { "DefaultNPCSpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_DefaultNPCSpawnLocations = { "DefaultNPCSpawnLocations", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ALecture8552GameMode, DefaultNPCSpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNPCSpawnLocations_MetaData), NewProp_DefaultNPCSpawnLocations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultNPCSpawnLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultNPCSpawnLocations,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ALecture8552GameMode Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AGameModeBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ALecture8552GameMode,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ALecture8552GameMode_StaticRegisterNativesALecture8552GameMode()
{
	UClass* Class = ALecture8552GameMode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALecture8552GameMode;
UClass* Z_Construct_UClass_ALecture8552GameMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ALecture8552GameMode;
		if (!Z_Registration_Info_UClass_ALecture8552GameMode.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Lecture8552GameMode"),
				Z_Registration_Info_UClass_ALecture8552GameMode.InnerSingleton,
				ALecture8552GameMode_StaticRegisterNativesALecture8552GameMode,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_ALecture8552GameMode.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ALecture8552GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALecture8552GameMode.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ALecture8552GameMode.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALecture8552GameMode);
ALecture8552GameMode::~ALecture8552GameMode() {}
// ********** End Class ALecture8552GameMode *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Core_Lecture8552GameMode_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALecture8552GameMode, TEXT("ALecture8552GameMode"), &Z_Registration_Info_UClass_ALecture8552GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALecture8552GameMode), 1086181179U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Core_Lecture8552GameMode_h__Script_Lecture8552_39d9b9fc7317546edcebcb3eb2e13740659bd48c{
	TEXT("/Script/Lecture8552"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
