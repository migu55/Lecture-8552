// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/SpawnProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSpawnProjectile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_USpawnProjectile(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_AProjectile(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_USpawnProjectile(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class USpawnProjectile *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USpawnProjectile_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Projectile/SpawnProjectile.h" },
		{ "ModuleRelativePath", "Public/Projectile/SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Projectile/SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Projectile/SpawnProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USpawnProjectile constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USpawnProjectile constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class USpawnProjectile Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnProjectile, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnProjectile, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class USpawnProjectile Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAnimNotify,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USpawnProjectile,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_USpawnProjectile;
UClass* Z_Construct_UClass_USpawnProjectile(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USpawnProjectile;
		if (!Z_Registration_Info_UClass_USpawnProjectile.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SpawnProjectile"),
				Z_Registration_Info_UClass_USpawnProjectile.InnerSingleton,
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
		return Z_Registration_Info_UClass_USpawnProjectile.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USpawnProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnProjectile.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USpawnProjectile.OuterSingleton;
}
#undef UHT_STATICS
USpawnProjectile::USpawnProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USpawnProjectile);
USpawnProjectile::~USpawnProjectile() {}
// ********** End Class USpawnProjectile ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Projectile_SpawnProjectile_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpawnProjectile, TEXT("USpawnProjectile"), &Z_Registration_Info_UClass_USpawnProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnProjectile), 3714674069U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Projectile_SpawnProjectile_h__Script_Lecture8552_a9c07b448b41da9dc67da0fe0e2e2bbc94947869{
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
