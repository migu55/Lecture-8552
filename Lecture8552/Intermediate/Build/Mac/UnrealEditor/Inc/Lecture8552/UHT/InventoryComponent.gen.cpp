// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/InventoryComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UInventoryComponent(ETypeConstructPhase);
LECTURE8552_API UFunction* Z_Construct_UDelegateFunction_Lecture8552_OnInventoryUpdated__DelegateSignature(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UInventoryComponent(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UItemDataAsset(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnInventoryUpdated ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_Lecture8552_OnInventoryUpdated__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnInventoryUpdated constinit property declarations *******************
// ********** End Delegate FOnInventoryUpdated constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552, nullptr, "OnInventoryUpdated__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_Lecture8552_OnInventoryUpdated__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnInventoryUpdated *****************************************************

// ********** Begin Class UInventoryComponent Function AddItem *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInventoryComponent_AddItem_Statics
struct UHT_STATICS
{
	struct InventoryComponent_eventAddItem_Parms
	{
		UItemDataAsset* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItem constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InventoryComponent_eventAddItem_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItem constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItem Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, Item), Z_Construct_UClass_UItemDataAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventAddItem_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddItem Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInventoryComponent, nullptr, "AddItem", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InventoryComponent_eventAddItem_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InventoryComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_AddItem(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInventoryComponent::execAddItem)
{
	P_GET_OBJECT(UItemDataAsset,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function AddItem ***************************************

// ********** Begin Class UInventoryComponent Function GetItems ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInventoryComponent_GetItems_Statics
struct UHT_STATICS
{
	struct InventoryComponent_eventGetItems_Parms
	{
		TArray<UItemDataAsset*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItems constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItems constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItems Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDataAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetItems Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInventoryComponent, nullptr, "GetItems", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InventoryComponent_eventGetItems_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InventoryComponent_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetItems(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInventoryComponent::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UItemDataAsset*>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function GetItems **************************************

// ********** Begin Class UInventoryComponent Function GetQuantity *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInventoryComponent_GetQuantity_Statics
struct UHT_STATICS
{
	struct InventoryComponent_eventGetQuantity_Parms
	{
		UItemDataAsset* TargetItem;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetQuantity constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQuantity constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQuantity Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetItem = { "TargetItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetQuantity_Parms, TargetItem), Z_Construct_UClass_UItemDataAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetQuantity Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInventoryComponent, nullptr, "GetQuantity", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InventoryComponent_eventGetQuantity_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InventoryComponent_eventGetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetQuantity(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInventoryComponent::execGetQuantity)
{
	P_GET_OBJECT(UItemDataAsset,Z_Param_TargetItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetQuantity(Z_Param_TargetItem);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function GetQuantity ***********************************

// ********** Begin Class UInventoryComponent Function RemoveItem **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics
struct UHT_STATICS
{
	struct InventoryComponent_eventRemoveItem_Parms
	{
		UItemDataAsset* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveItem constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InventoryComponent_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveItem constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveItem Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, Item), Z_Construct_UClass_UItemDataAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveItem_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveItem Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItem", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InventoryComponent_eventRemoveItem_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItem(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInventoryComponent::execRemoveItem)
{
	P_GET_OBJECT(UItemDataAsset,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function RemoveItem ************************************

// ********** Begin Class UInventoryComponent ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInventoryComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInventoryComponent constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Capacity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInventoryComponent constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddItem"), .Pointer = &UInventoryComponent::execAddItem },
		{ .NameUTF8 = UTF8TEXT("GetItems"), .Pointer = &UInventoryComponent::execGetItems },
		{ .NameUTF8 = UTF8TEXT("GetQuantity"), .Pointer = &UInventoryComponent::execGetQuantity },
		{ .NameUTF8 = UTF8TEXT("RemoveItem"), .Pointer = &UInventoryComponent::execRemoveItem },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddItem, "AddItem" }, // 9a5a36724fe792bfd0e8c3a11515495bf8087211
		{ &Z_Construct_UFunction_UInventoryComponent_GetItems, "GetItems" }, // 7f99f1de4cfa7c8eead00ac3a838dbc1d1e96e35
		{ &Z_Construct_UFunction_UInventoryComponent_GetQuantity, "GetQuantity" }, // 06a046a6537462e462b3b7fdfaf99cc3edb1c555
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItem, "RemoveItem" }, // 8381d46219ab3bb4975ac99da71e64445392b020
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UInventoryComponent Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, Capacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capacity_MetaData), NewProp_Capacity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemDataAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_Lecture8552_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdated_MetaData), NewProp_OnInventoryUpdated_MetaData) }; // d06fd1adbef57880649c076454006c79041f2c94
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Capacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnInventoryUpdated,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UInventoryComponent Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInventoryComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UInventoryComponent_StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryComponent;
UClass* Z_Construct_UClass_UInventoryComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInventoryComponent;
		if (!Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("InventoryComponent"),
				Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton,
				UInventoryComponent_StaticRegisterNativesUInventoryComponent,
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
		return Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// ********** End Class UInventoryComponent ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Components_InventoryComponent_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 4187825907U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Components_InventoryComponent_h__Script_Lecture8552_d6ac791963cdc2b805dfe34cb4c2a59c9f9dc20c{
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
