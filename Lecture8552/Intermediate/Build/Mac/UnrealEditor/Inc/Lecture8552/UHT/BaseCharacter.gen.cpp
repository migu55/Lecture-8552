// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/BaseCharacter.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ABaseCharacter(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_ABaseCharacter(ETypeConstructPhase);
LECTURE8552_API UClass* Z_Construct_UClass_AProjectile(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ABaseCharacter Function LaunchProjectile *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ABaseCharacter_LaunchProjectile_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/BaseCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LaunchProjectile constinit property declarations **********************
// ********** End Function LaunchProjectile constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ABaseCharacter, nullptr, "LaunchProjectile", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ABaseCharacter_LaunchProjectile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ABaseCharacter::execLaunchProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchProjectile();
	P_NATIVE_END;
}
// ********** End Class ABaseCharacter Function LaunchProjectile ***********************************

// ********** Begin Class ABaseCharacter Function SpawnProjectile **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ABaseCharacter_SpawnProjectile_Statics
struct UHT_STATICS
{
	struct BaseCharacter_eventSpawnProjectile_Parms
	{
		FName SocketName;
		TSubclassOf<AProjectile> ProjectileClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/BaseCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnProjectile constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnProjectile constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnProjectile Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventSpawnProjectile_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventSpawnProjectile_Parms, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnProjectile Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ABaseCharacter, nullptr, "SpawnProjectile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::BaseCharacter_eventSpawnProjectile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::BaseCharacter_eventSpawnProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseCharacter_SpawnProjectile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ABaseCharacter::execSpawnProjectile)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_GET_OBJECT(UClass,Z_Param_ProjectileClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile(Z_Param_SocketName,Z_Param_ProjectileClass);
	P_NATIVE_END;
}
// ********** End Class ABaseCharacter Function SpawnProjectile ************************************

// ********** Begin Class ABaseCharacter ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ABaseCharacter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSpawnedProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/BaseCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABaseCharacter constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveSpawnedProjectile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABaseCharacter constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LaunchProjectile"), .Pointer = &ABaseCharacter::execLaunchProjectile },
		{ .NameUTF8 = UTF8TEXT("SpawnProjectile"), .Pointer = &ABaseCharacter::execSpawnProjectile },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_LaunchProjectile, "LaunchProjectile" }, // c52a0570e2cf77dde7479a23599cf46fc0a60bb8
		{ &Z_Construct_UFunction_ABaseCharacter_SpawnProjectile, "SpawnProjectile" }, // b4a13d94c7a3e74f39b7202874e91b31720a5ebc
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ABaseCharacter Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveSpawnedProjectile = { "ActiveSpawnedProjectile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, ActiveSpawnedProjectile), Z_Construct_UClass_AProjectile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSpawnedProjectile_MetaData), NewProp_ActiveSpawnedProjectile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSpawnedProjectile,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ABaseCharacter Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_ACharacter,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Lecture8552,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ABaseCharacter,
	"Game",
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
static void ABaseCharacter_StaticRegisterNativesABaseCharacter()
{
	UClass* Class = ABaseCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseCharacter;
UClass* Z_Construct_UClass_ABaseCharacter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ABaseCharacter;
		if (!Z_Registration_Info_UClass_ABaseCharacter.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BaseCharacter"),
				Z_Registration_Info_UClass_ABaseCharacter.InnerSingleton,
				ABaseCharacter_StaticRegisterNativesABaseCharacter,
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
		return Z_Registration_Info_UClass_ABaseCharacter.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABaseCharacter);
ABaseCharacter::~ABaseCharacter() {}
// ********** End Class ABaseCharacter *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Character_BaseCharacter_h__Script_Lecture8552_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 4146429730U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Character_BaseCharacter_h__Script_Lecture8552_3e99217db0c590ca63cb4854d2c6858967d43a9e{
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
