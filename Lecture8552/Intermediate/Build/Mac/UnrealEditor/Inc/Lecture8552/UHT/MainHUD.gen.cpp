// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/MainHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMainHUD() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UMainHUD(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UInventoryComponent(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UItemSlot(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UMainHUD(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMainHUD Function RefreshSlotQuantities **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMainHUD_RefreshSlotQuantities_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/MainHUD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshSlotQuantities constinit property declarations *****************
// ********** End Function RefreshSlotQuantities constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMainHUD, nullptr, "RefreshSlotQuantities", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMainHUD_RefreshSlotQuantities(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMainHUD::execRefreshSlotQuantities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshSlotQuantities();
	P_NATIVE_END;
}
// ********** End Class UMainHUD Function RefreshSlotQuantities ************************************

// ********** Begin Class UMainHUD *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMainHUD_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/MainHUD.h" },
		{ "ModuleRelativePath", "Public/UI/MainHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot0_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MainHUD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMainHUD constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMainHUD constinit property declarations ***********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RefreshSlotQuantities"), .Pointer = &UMainHUD::execRefreshSlotQuantities },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainHUD_RefreshSlotQuantities, "RefreshSlotQuantities" }, // 19f8321843e7912515fdde58eaed836370cfc4bc
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMainHUD Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Slot0 = { "Slot0", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMainHUD, Slot0), Z_Construct_UClass_UItemSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot0_MetaData), NewProp_Slot0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Slot1 = { "Slot1", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMainHUD, Slot1), Z_Construct_UClass_UItemSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot1_MetaData), NewProp_Slot1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMainHUD, InventoryComponent), Z_Construct_UClass_UInventoryComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Slot0,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Slot1,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InventoryComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMainHUD Property Definitions **********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMainHUD,
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
static void UMainHUD_StaticRegisterNativesUMainHUD()
{
	UClass* Class = UMainHUD::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMainHUD;
UClass* Z_Construct_UClass_UMainHUD(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMainHUD;
		if (!Z_Registration_Info_UClass_UMainHUD.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MainHUD"),
				Z_Registration_Info_UClass_UMainHUD.InnerSingleton,
				UMainHUD_StaticRegisterNativesUMainHUD,
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
		return Z_Registration_Info_UClass_UMainHUD.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMainHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainHUD.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainHUD.OuterSingleton;
}
#undef UHT_STATICS
UMainHUD::UMainHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMainHUD);
UMainHUD::~UMainHUD() {}
// ********** End Class UMainHUD *******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_UI_MainHUD_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainHUD, TEXT("UMainHUD"), &Z_Registration_Info_UClass_UMainHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainHUD), 1903715682U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_UI_MainHUD_h__Script_Lecture8552_8edf4479ec1fabcb71671751e8952e77e5e1d4a4{
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
