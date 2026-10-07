// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ItemDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeItemDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UEnum* Z_Construct_UEnum_Lecture8552_EItemType(ETypeConstructPhase);
LECTURE8552_API UScriptStruct* Z_Construct_UScriptStruct_FItemData(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UItemDataAsset(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UItemDataAsset(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EItemType *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Lecture8552_EItemType_Statics
template<> LECTURE8552_NON_ATTRIBUTED_API UEnum* StaticEnum<EItemType>()
{
	return Z_Construct_UEnum_Lecture8552_EItemType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
		{ "Potion.DisplayName", "Potion" },
		{ "Potion.Name", "EItemType::Potion" },
		{ "Relic.DisplayName", "Relic" },
		{ "Relic.Name", "EItemType::Relic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::Relic", (int64)EItemType::Relic },
		{ "EItemType::Potion", (int64)EItemType::Potion },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
	nullptr,
	"EItemType",
	"EItemType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EItemType;
UEnum* Z_Construct_UEnum_Lecture8552_EItemType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EItemType.OuterSingleton)
		{
			ZRIE_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Lecture8552_EItemType, (UObject*)Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase::Outer), TEXT("EItemType"));
		}
		return ZRIE_EItemType.OuterSingleton;
	}
	if (!ZRIE_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EItemType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EItemType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EItemType *******************************************************************

// ********** Begin ScriptStruct FItemData *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FItemData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FItemData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FItemData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestoreAmount_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FItemData constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestoreAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FItemData constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FItemData Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemType), Z_Construct_UEnum_Lecture8552_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 69238d3712bbe630119bdde6af561223ca64b6ff
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Icon), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RestoreAmount = { "RestoreAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, RestoreAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestoreAmount_MetaData), NewProp_RestoreAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RestoreAmount,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FItemData Property Definitions **************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
	nullptr,
	&NewStructOps,
	"ItemData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FItemData>(),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemData;
UScriptStruct* Z_Construct_UScriptStruct_FItemData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase::Outer), TEXT("ItemData"));
		}
		return Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FItemData ***********************************************************

// ********** Begin Class UItemDataAsset ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UItemDataAsset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Data/ItemDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Data/ItemDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UItemDataAsset constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UItemDataAsset constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UItemDataAsset Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataAsset, ItemData), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) }; // 9e4f2bba3b6e1c812b4cfad0724c0e965a7789b6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ItemData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UItemDataAsset Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UPrimaryDataAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UItemDataAsset,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UItemDataAsset;
UClass* Z_Construct_UClass_UItemDataAsset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UItemDataAsset;
		if (!Z_Registration_Info_UClass_UItemDataAsset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ItemDataAsset"),
				Z_Registration_Info_UClass_UItemDataAsset.InnerSingleton,
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
		return Z_Registration_Info_UClass_UItemDataAsset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UItemDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDataAsset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDataAsset.OuterSingleton;
}
#undef UHT_STATICS
UItemDataAsset::UItemDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UItemDataAsset);
UItemDataAsset::~UItemDataAsset() {}
// ********** End Class UItemDataAsset *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_Lecture8552_EItemType, TEXT("EItemType"), &ZRIE_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1763937591U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FItemData, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"),&Z_Registration_Info_UScriptStruct_FItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 2655988666U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemDataAsset, TEXT("UItemDataAsset"), &Z_Registration_Info_UClass_UItemDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDataAsset), 3538108987U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h__Script_Lecture8552_6a7dabc0139470d1f1dca4804643dfccc80d27d4{
	TEXT("/Script/Lecture8552"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
