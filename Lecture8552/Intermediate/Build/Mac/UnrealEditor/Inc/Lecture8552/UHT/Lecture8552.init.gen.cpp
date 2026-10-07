// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLecture8552_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	LECTURE8552_API UFunction* Z_Construct_UDelegateFunction_Lecture8552_OnEnergyChanged__DelegateSignature(ETypeConstructPhase);
	LECTURE8552_API UFunction* Z_Construct_UDelegateFunction_Lecture8552_OnInventoryUpdated__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Lecture8552;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Lecture8552(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_Lecture8552.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Lecture8552_OnEnergyChanged__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Lecture8552_OnInventoryUpdated__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Lecture8552",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x37995F58,
			0xC15D36C0,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Lecture8552.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Lecture8552.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Lecture8552(Z_Construct_UPackage__Script_Lecture8552, TEXT("/Script/Lecture8552"), Z_Registration_Info_UPackage__Script_Lecture8552, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x37995F58, 0xC15D36C0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
