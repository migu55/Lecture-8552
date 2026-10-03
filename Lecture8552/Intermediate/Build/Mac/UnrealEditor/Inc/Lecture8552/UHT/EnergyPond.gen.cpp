// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Environment/EnergyPond.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEnergyPond() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_AEnergyPond(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_AOverlapZone(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_AEnergyPond(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AEnergyPond **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AEnergyPond_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Environment/EnergyPond.h" },
		{ "ModuleRelativePath", "Public/Environment/EnergyPond.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnergyRegenRate_MetaData[] = {
		{ "Category", "Energy Pond" },
		{ "ModuleRelativePath", "Public/Environment/EnergyPond.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenInterval_MetaData[] = {
		{ "Category", "Energy Pond" },
		{ "ModuleRelativePath", "Public/Environment/EnergyPond.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AEnergyPond constinit property declarations ******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnergyRegenRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AEnergyPond constinit property declarations ********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnergyPond>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AEnergyPond Property Definitions *****************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EnergyRegenRate = { "EnergyRegenRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AEnergyPond, EnergyRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnergyRegenRate_MetaData), NewProp_EnergyRegenRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RegenInterval = { "RegenInterval", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AEnergyPond, RegenInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenInterval_MetaData), NewProp_RegenInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnergyRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegenInterval,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AEnergyPond Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AOverlapZone,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AEnergyPond,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_AEnergyPond;
UClass* Z_Construct_UClass_AEnergyPond(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AEnergyPond;
		if (!Z_Registration_Info_UClass_AEnergyPond.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("EnergyPond"),
				Z_Registration_Info_UClass_AEnergyPond.InnerSingleton,
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
		return Z_Registration_Info_UClass_AEnergyPond.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AEnergyPond.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnergyPond.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnergyPond.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEnergyPond);
AEnergyPond::~AEnergyPond() {}
// ********** End Class AEnergyPond ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_EnergyPond_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnergyPond, TEXT("AEnergyPond"), &Z_Registration_Info_UClass_AEnergyPond, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnergyPond), 4288613638U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_EnergyPond_h__Script_Lecture8552_bc1b353e5f4516efbcba7a12c869a32f9391b0ae{
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
