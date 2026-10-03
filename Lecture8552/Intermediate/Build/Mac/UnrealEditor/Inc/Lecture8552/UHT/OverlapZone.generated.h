// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Environment/OverlapZone.h"

#ifdef LECTURE8552_OverlapZone_generated_h
#error "OverlapZone.generated.h already included, missing '#pragma once' in OverlapZone.h"
#endif
#define LECTURE8552_OverlapZone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AOverlapZone *************************************************************
#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnOverlapEnd_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex); \
	virtual void OnOverlapBegin_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AOverlapZone_Statics;
LECTURE8552_API UClass* Z_Construct_UClass_AOverlapZone(ETypeConstructPhase);

#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AOverlapZone_Statics; \
	friend LECTURE8552_API UClass* ::Z_Construct_UClass_AOverlapZone(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AOverlapZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lecture8552"), Z_Construct_UClass_AOverlapZone) \
	DECLARE_SERIALIZER(AOverlapZone)


#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOverlapZone(AOverlapZone&&) = delete; \
	AOverlapZone(const AOverlapZone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOverlapZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOverlapZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOverlapZone) \
	NO_API virtual ~AOverlapZone();


#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_11_PROLOG
#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_14_CALLBACK_WRAPPERS \
	FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_14_INCLASS_NO_PURE_DECLS \
	FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOverlapZone;

// ********** End Class AOverlapZone ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Environment_OverlapZone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
