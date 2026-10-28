// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/HealthComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDamageType(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UHealthComponent(ETypeConstructPhase);
LECTURE8552_API UFunction* Z_Construct_UDelegateFunction_Lecture8552_OnHealthChangedSignature__DelegateSignature(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_UHealthComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnHealthChangedSignature *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_Lecture8552_OnHealthChangedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_Lecture8552_eventOnHealthChangedSignature_Parms
	{
		UHealthComponent* HealthComp;
		float Health;
		float HealthDeficit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnHealthChangedSignature constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthDeficit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnHealthChangedSignature constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnHealthChangedSignature Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Lecture8552_eventOnHealthChangedSignature_Parms, HealthComp), Z_Construct_UClass_UHealthComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComp_MetaData), NewProp_HealthComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Lecture8552_eventOnHealthChangedSignature_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HealthDeficit = { "HealthDeficit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Lecture8552_eventOnHealthChangedSignature_Parms, HealthDeficit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HealthComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HealthDeficit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnHealthChangedSignature Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552, nullptr, "OnHealthChangedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_Lecture8552_eventOnHealthChangedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_Lecture8552_eventOnHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Lecture8552_OnHealthChangedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnHealthChangedSignature ***********************************************

// ********** Begin Class UHealthComponent Function HandleTakeAnyDamage ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage_Statics
struct UHT_STATICS
{
	struct HealthComponent_eventHandleTakeAnyDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTakeAnyDamage constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleTakeAnyDamage constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleTakeAnyDamage Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventHandleTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleTakeAnyDamage Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UHealthComponent, nullptr, "HandleTakeAnyDamage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::HealthComponent_eventHandleTakeAnyDamage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::HealthComponent_eventHandleTakeAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UHealthComponent::execHandleTakeAnyDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class UHealthComponent Function HandleTakeAnyDamage ******************************

// ********** Begin Class UHealthComponent *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UHealthComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/HealthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHealthComponent constinit property declarations *************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHealthComponent constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleTakeAnyDamage"), .Pointer = &UHealthComponent::execHandleTakeAnyDamage },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_HandleTakeAnyDamage, "HandleTakeAnyDamage" }, // 975b416ffc5d1d834f1ef03b139643b911abd7dd
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UHealthComponent Property Definitions ************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_Lecture8552_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 0897103be6fe1372c56d729e9e724f32d383d681
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UHealthComponent Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UHealthComponent,
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
static void UHealthComponent_StaticRegisterNativesUHealthComponent()
{
	UClass* Class = UHealthComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHealthComponent;
UClass* Z_Construct_UClass_UHealthComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UHealthComponent;
		if (!Z_Registration_Info_UClass_UHealthComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("HealthComponent"),
				Z_Registration_Info_UClass_UHealthComponent.InnerSingleton,
				UHealthComponent_StaticRegisterNativesUHealthComponent,
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
		return Z_Registration_Info_UClass_UHealthComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHealthComponent);
UHealthComponent::~UHealthComponent() {}
// ********** End Class UHealthComponent ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Components_HealthComponent_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthComponent, TEXT("UHealthComponent"), &Z_Registration_Info_UClass_UHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponent), 2258800547U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Components_HealthComponent_h__Script_Lecture8552_bc62d926160d9063473ca065770b4177bcad7359{
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
