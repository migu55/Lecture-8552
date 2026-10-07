// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ItemDataAsset.h"

#ifdef LECTURE8552_ItemDataAsset_generated_h
#error "ItemDataAsset.generated.h already included, missing '#pragma once' in ItemDataAsset.h"
#endif
#define LECTURE8552_ItemDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FItemData *********************************************************
struct Z_Construct_UScriptStruct_FItemData_Statics;
LECTURE8552_API UScriptStruct* Z_Construct_UScriptStruct_FItemData(ETypeConstructPhase);

#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FItemData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FItemData(ETypeConstructPhase::Inner); }


struct FItemData;
// ********** End ScriptStruct FItemData ***********************************************************

// ********** Begin Class UItemDataAsset ***********************************************************
struct Z_Construct_UClass_UItemDataAsset_Statics;
LECTURE8552_API UClass* Z_Construct_UClass_UItemDataAsset(ETypeConstructPhase);

#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h_45_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UItemDataAsset_Statics; \
	friend LECTURE8552_API UClass* ::Z_Construct_UClass_UItemDataAsset(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UItemDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Lecture8552"), Z_Construct_UClass_UItemDataAsset) \
	DECLARE_SERIALIZER(UItemDataAsset)


#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemDataAsset(UItemDataAsset&&) = delete; \
	UItemDataAsset(const UItemDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemDataAsset) \
	NO_API virtual ~UItemDataAsset();


#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h_42_PROLOG
#define FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h_45_INCLASS_NO_PURE_DECLS \
	FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemDataAsset;

// ********** End Class UItemDataAsset *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mmarasigan2_Documents_Unreal_Projects_Lecture_5882_Lecture8552_Source_Lecture8552_Public_Data_ItemDataAsset_h

// ********** Begin Enum EItemType *****************************************************************
#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Relic) \
	op(EItemType::Potion) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> UE_NODEBUG LECTURE8552_NON_ATTRIBUTED_API UEnum* StaticEnum<EItemType>();
// ********** End Enum EItemType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
