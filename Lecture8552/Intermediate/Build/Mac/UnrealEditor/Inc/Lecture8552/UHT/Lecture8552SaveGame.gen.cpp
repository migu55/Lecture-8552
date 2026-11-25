// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Lecture8552SaveGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLecture8552SaveGame() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USaveGame(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ULecture8552SaveGame(ETypeConstructPhase);
LECTURE8552_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSaveData(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UItemDataAsset(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ULecture8552SaveGame(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FPlayerSaveData ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPlayerSaveData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPlayerSaveData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPlayerSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTransform_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRotation_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552SaveGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPlayerSaveData constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Energy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPlayerSaveData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPlayerSaveData Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerTransform = { "PlayerTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSaveData, PlayerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTransform_MetaData), NewProp_PlayerTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerRotation = { "PlayerRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSaveData, PlayerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRotation_MetaData), NewProp_PlayerRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSaveData, Energy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Energy_MetaData), NewProp_Energy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDataAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSaveData, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Energy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPlayerSaveData Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
	nullptr,
	&NewStructOps,
	"PlayerSaveData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPlayerSaveData>(),
	alignof(FPlayerSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerSaveData;
UScriptStruct* Z_Construct_UScriptStruct_FPlayerSaveData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPlayerSaveData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPlayerSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerSaveData, (UObject*)Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase::Outer), TEXT("PlayerSaveData"));
		}
		return Z_Registration_Info_UScriptStruct_FPlayerSaveData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPlayerSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerSaveData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPlayerSaveData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPlayerSaveData *****************************************************

// ********** Begin Class ULecture8552SaveGame *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULecture8552SaveGame_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Core/Lecture8552SaveGame.h" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSaveData_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCTransforms_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552SaveGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULecture8552SaveGame constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSaveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULecture8552SaveGame constinit property declarations ***********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULecture8552SaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ULecture8552SaveGame Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerSaveData = { "PlayerSaveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ULecture8552SaveGame, PlayerSaveData), Z_Construct_UScriptStruct_FPlayerSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSaveData_MetaData), NewProp_PlayerSaveData_MetaData) }; // 29447a6b8fd3a4b6c89e035c5e9b5133e0328a99
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NPCTransforms_Inner = { "NPCTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_NPCTransforms = { "NPCTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ULecture8552SaveGame, NPCTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCTransforms_MetaData), NewProp_NPCTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerSaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCTransforms,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ULecture8552SaveGame Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USaveGame,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULecture8552SaveGame,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ULecture8552SaveGame;
UClass* Z_Construct_UClass_ULecture8552SaveGame(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULecture8552SaveGame;
		if (!Z_Registration_Info_UClass_ULecture8552SaveGame.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Lecture8552SaveGame"),
				Z_Registration_Info_UClass_ULecture8552SaveGame.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_ULecture8552SaveGame.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULecture8552SaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULecture8552SaveGame.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULecture8552SaveGame.OuterSingleton;
}
#undef UHT_STATICS
ULecture8552SaveGame::ULecture8552SaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULecture8552SaveGame);
ULecture8552SaveGame::~ULecture8552SaveGame() {}
// ********** End Class ULecture8552SaveGame *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Core_Lecture8552SaveGame_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FPlayerSaveData, Z_Construct_UScriptStruct_FPlayerSaveData_Statics::NewStructOps, TEXT("PlayerSaveData"),&Z_Registration_Info_UScriptStruct_FPlayerSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerSaveData), 692353643U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULecture8552SaveGame, TEXT("ULecture8552SaveGame"), &Z_Registration_Info_UClass_ULecture8552SaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULecture8552SaveGame), 3799319074U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Core_Lecture8552SaveGame_h__Script_Lecture8552_ee466d660ebe9f314e1b8d970770574cec164b8c{
	TEXT("/Script/Lecture8552"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
