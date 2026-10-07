// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/ItemSlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeItemSlot() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UImage(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UTextBlock(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UItemSlot(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UItemDataAsset(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UItemSlot(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UItemSlot Function SetupSlot *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UItemSlot_SetupSlot_Statics
struct UHT_STATICS
{
	struct ItemSlot_eventSetupSlot_Parms
	{
		UItemDataAsset* InItemDataAsset;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/ItemSlot.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetupSlot constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemDataAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetupSlot constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetupSlot Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InItemDataAsset = { "InItemDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlot_eventSetupSlot_Parms, InItemDataAsset), Z_Construct_UClass_UItemDataAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlot_eventSetupSlot_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InItemDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetupSlot Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UItemSlot, nullptr, "SetupSlot", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ItemSlot_eventSetupSlot_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ItemSlot_eventSetupSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlot_SetupSlot(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UItemSlot::execSetupSlot)
{
	P_GET_OBJECT(UItemDataAsset,Z_Param_InItemDataAsset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupSlot(Z_Param_InItemDataAsset,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UItemSlot Function SetupSlot ***********************************************

// ********** Begin Class UItemSlot ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UItemSlot_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ItemSlot.h" },
		{ "ModuleRelativePath", "Public/UI/ItemSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Item Slot" },
		{ "ModuleRelativePath", "Public/UI/ItemSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ItemSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantityText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ItemSlot.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UItemSlot constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuantityText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UItemSlot constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetupSlot"), .Pointer = &UItemSlot::execSetupSlot },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemSlot_SetupSlot, "SetupSlot" }, // 3c576f5f8f723c534838fd1bff38a89cea97697e
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UItemSlot Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlot, Item), Z_Construct_UClass_UItemDataAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlot, Thumbnail), Z_Construct_UClass_UImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumbnail_MetaData), NewProp_Thumbnail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_QuantityText = { "QuantityText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlot, QuantityText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantityText_MetaData), NewProp_QuantityText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QuantityText,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UItemSlot Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UItemSlot,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UItemSlot_StaticRegisterNativesUItemSlot()
{
	UClass* Class = UItemSlot::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemSlot;
UClass* Z_Construct_UClass_UItemSlot(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UItemSlot;
		if (!Z_Registration_Info_UClass_UItemSlot.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ItemSlot"),
				Z_Registration_Info_UClass_UItemSlot.InnerSingleton,
				UItemSlot_StaticRegisterNativesUItemSlot,
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
		return Z_Registration_Info_UClass_UItemSlot.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UItemSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemSlot.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemSlot.OuterSingleton;
}
#undef UHT_STATICS
UItemSlot::UItemSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UItemSlot);
UItemSlot::~UItemSlot() {}
// ********** End Class UItemSlot ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_UI_ItemSlot_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemSlot, TEXT("UItemSlot"), &Z_Registration_Info_UClass_UItemSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemSlot), 4099965895U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_UI_ItemSlot_h__Script_Lecture8552_e3966627bf6b61d3645a69cbe21b6944eaef0640{
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
