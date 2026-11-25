// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Lecture8552GameInstance.h"
#include "Core/Lecture8552SaveGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLecture8552GameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ULecture8552GameInstance(ETypeConstructPhase);
LECTURE8552_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSaveData(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ULecture8552GameInstance(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ULecture8552SaveGame(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ULecture8552GameInstance Function SaveNPCData ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULecture8552GameInstance_SaveNPCData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552GameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveNPCData constinit property declarations ***************************
// ********** End Function SaveNPCData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULecture8552GameInstance, nullptr, "SaveNPCData", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ULecture8552GameInstance_SaveNPCData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULecture8552GameInstance::execSaveNPCData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveNPCData();
	P_NATIVE_END;
}
// ********** End Class ULecture8552GameInstance Function SaveNPCData ******************************

// ********** Begin Class ULecture8552GameInstance Function SavePlayerData *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULecture8552GameInstance_SavePlayerData_Statics
struct UHT_STATICS
{
	struct Lecture8552GameInstance_eventSavePlayerData_Parms
	{
		FPlayerSaveData PlayerSaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552GameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SavePlayerData constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SavePlayerData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SavePlayerData Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerSaveData = { "PlayerSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Lecture8552GameInstance_eventSavePlayerData_Parms, PlayerSaveData), Z_Construct_UScriptStruct_FPlayerSaveData, METADATA_PARAMS(0, nullptr) }; // 29447a6b8fd3a4b6c89e035c5e9b5133e0328a99
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerSaveData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SavePlayerData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULecture8552GameInstance, nullptr, "SavePlayerData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Lecture8552GameInstance_eventSavePlayerData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Lecture8552GameInstance_eventSavePlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULecture8552GameInstance_SavePlayerData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULecture8552GameInstance::execSavePlayerData)
{
	P_GET_STRUCT(FPlayerSaveData,Z_Param_PlayerSaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SavePlayerData(Z_Param_PlayerSaveData);
	P_NATIVE_END;
}
// ********** End Class ULecture8552GameInstance Function SavePlayerData ***************************

// ********** Begin Class ULecture8552GameInstance *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULecture8552GameInstance_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Lecture8552GameInstance.h" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveData_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/Core/Lecture8552GameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULecture8552GameInstance constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULecture8552GameInstance constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SaveNPCData"), .Pointer = &ULecture8552GameInstance::execSaveNPCData },
		{ .NameUTF8 = UTF8TEXT("SavePlayerData"), .Pointer = &ULecture8552GameInstance::execSavePlayerData },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULecture8552GameInstance_SaveNPCData, "SaveNPCData" }, // 93da5ad9bb3bcd9ed953a72f09fde3cc527e25c4
		{ &Z_Construct_UFunction_ULecture8552GameInstance_SavePlayerData, "SavePlayerData" }, // 91ee3bc7a1361ce4e3bcbb7bbbae01bb4f45a922
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULecture8552GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ULecture8552GameInstance Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULecture8552GameInstance, SaveData), Z_Construct_UClass_ULecture8552SaveGame, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveData_MetaData), NewProp_SaveData_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ULecture8552GameInstance, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Slot,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ULecture8552GameInstance Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGameInstance,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULecture8552GameInstance,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ULecture8552GameInstance_StaticRegisterNativesULecture8552GameInstance()
{
	UClass* Class = ULecture8552GameInstance::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULecture8552GameInstance;
UClass* Z_Construct_UClass_ULecture8552GameInstance(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULecture8552GameInstance;
		if (!Z_Registration_Info_UClass_ULecture8552GameInstance.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Lecture8552GameInstance"),
				Z_Registration_Info_UClass_ULecture8552GameInstance.InnerSingleton,
				ULecture8552GameInstance_StaticRegisterNativesULecture8552GameInstance,
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
		return Z_Registration_Info_UClass_ULecture8552GameInstance.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULecture8552GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULecture8552GameInstance.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULecture8552GameInstance.OuterSingleton;
}
#undef UHT_STATICS
ULecture8552GameInstance::ULecture8552GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULecture8552GameInstance);
ULecture8552GameInstance::~ULecture8552GameInstance() {}
// ********** End Class ULecture8552GameInstance ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Core_Lecture8552GameInstance_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULecture8552GameInstance, TEXT("ULecture8552GameInstance"), &Z_Registration_Info_UClass_ULecture8552GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULecture8552GameInstance), 3472801627U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Core_Lecture8552GameInstance_h__Script_Lecture8552_828e30cc7169ce55221660c4adcc9061e1275ceb{
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
