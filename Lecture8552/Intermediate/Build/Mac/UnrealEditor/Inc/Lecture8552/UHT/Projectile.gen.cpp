// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Projectile.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectile() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USphereComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_AProjectile(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_AProjectile(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AProjectile Function OnHit ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AProjectile_OnHit_Statics
struct UHT_STATICS
{
	struct Projectile_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectile/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnHit constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnHit constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnHit Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnHit Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AProjectile, nullptr, "OnHit", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Projectile_eventOnHit_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Projectile_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectile_OnHit(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AProjectile::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class AProjectile Function OnHit *************************************************

// ********** Begin Class AProjectile **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AProjectile_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Projectile/Projectile.h" },
		{ "ModuleRelativePath", "Public/Projectile/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollider_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRadialDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Projectile/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchGravityScale_MetaData[] = {
		{ "Category", "Projectile Physics" },
		{ "ModuleRelativePath", "Public/Projectile/Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AProjectile constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollider;
	static void NewProp_bApplyRadialDamage_SetBit(void* Obj)
	{
		((AProjectile*)Obj)->bApplyRadialDamage = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRadialDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchGravityScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AProjectile constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnHit"), .Pointer = &AProjectile::execOnHit },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectile_OnHit, "OnHit" }, // f50a22f4872b48d24fee951e23a2ae2281797966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AProjectile Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SphereCollider = { "SphereCollider", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, SphereCollider), Z_Construct_UClass_USphereComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollider_MetaData), NewProp_SphereCollider_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bApplyRadialDamage = { "bApplyRadialDamage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectile), &UHT_STATICS::NewProp_bApplyRadialDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyRadialDamage_MetaData), NewProp_bApplyRadialDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LaunchGravityScale = { "LaunchGravityScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, LaunchGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchGravityScale_MetaData), NewProp_LaunchGravityScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SphereCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bApplyRadialDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaunchGravityScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AProjectile Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AProjectile,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AProjectile_StaticRegisterNativesAProjectile()
{
	UClass* Class = AProjectile::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectile;
UClass* Z_Construct_UClass_AProjectile(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AProjectile;
		if (!Z_Registration_Info_UClass_AProjectile.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Projectile"),
				Z_Registration_Info_UClass_AProjectile.InnerSingleton,
				AProjectile_StaticRegisterNativesAProjectile,
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
		return Z_Registration_Info_UClass_AProjectile.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectile.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectile.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProjectile);
AProjectile::~AProjectile() {}
// ********** End Class AProjectile ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Projectile_Projectile_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile, TEXT("AProjectile"), &Z_Registration_Info_UClass_AProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile), 661234802U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Projectile_Projectile_h__Script_Lecture8552_cc397c6fe59f6166202aeafff067704db9205a3f{
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
