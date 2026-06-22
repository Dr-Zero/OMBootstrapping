#ifndef NFType__H
#define NFType__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_Type_T__ANYTYPE__desc;

extern struct record_description DAE_Type_T__ARRAY__desc;

extern struct record_description DAE_Type_T__BOOL__desc;

extern struct record_description DAE_Type_T__CLOCK__desc;

extern struct record_description DAE_Type_T__ENUMERATION__desc;

extern struct record_description DAE_Type_T__FUNCTION__REFERENCE__FUNC__desc;

extern struct record_description DAE_Type_T__FUNCTION__REFERENCE__VAR__desc;

extern struct record_description DAE_Type_T__INTEGER__desc;

extern struct record_description DAE_Type_T__METABOXED__desc;

extern struct record_description DAE_Type_T__METAPOLYMORPHIC__desc;

extern struct record_description DAE_Type_T__NORETCALL__desc;

extern struct record_description DAE_Type_T__REAL__desc;

extern struct record_description DAE_Type_T__STRING__desc;

extern struct record_description DAE_Type_T__TUPLE__desc;

extern struct record_description DAE_Type_T__UNKNOWN__desc;

extern struct record_description NFComplexType_RECORD__desc;

extern struct record_description NFDimension_UNKNOWN__desc;

extern struct record_description NFType_ARRAY__desc;

extern struct record_description NFType_COMPLEX__desc;

extern struct record_description NFType_CONDITIONAL__ARRAY__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description NFType_METABOXED__desc;

extern struct record_description NFType_TUPLE__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description NFType_UNTYPED__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFType_complexSize(threadData_t *threadData, modelica_metatype _ty, modelica_boolean _resize);
DLLDirection
modelica_metatype boxptr_NFType_complexSize(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _resize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_complexSize,2,0) {(void*) boxptr_NFType_complexSize,0}};
#define boxvar_NFType_complexSize MMC_REFSTRUCTLIT(boxvar_lit_NFType_complexSize)


DLLDirection
modelica_integer omc_NFType_sizeOf_fold__comp__size(threadData_t *threadData, modelica_metatype _comp, modelica_integer _sz);
DLLDirection
modelica_metatype boxptr_NFType_sizeOf_fold__comp__size(threadData_t *threadData, modelica_metatype _comp, modelica_metatype _sz);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_sizeOf_fold__comp__size,2,0) {(void*) boxptr_NFType_sizeOf_fold__comp__size,0}};
#define boxvar_NFType_sizeOf_fold__comp__size MMC_REFSTRUCTLIT(boxvar_lit_NFType_sizeOf_fold__comp__size)


DLLDirection
modelica_integer omc_NFType_sizeOf(threadData_t *threadData, modelica_metatype _ty, modelica_boolean _resize);
DLLDirection
modelica_metatype boxptr_NFType_sizeOf(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _resize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_sizeOf,2,0) {(void*) boxptr_NFType_sizeOf,0}};
#define boxvar_NFType_sizeOf MMC_REFSTRUCTLIT(boxvar_lit_NFType_sizeOf)


DLLDirection
modelica_metatype omc_NFType_simplify(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty);
#define boxptr_NFType_simplify omc_NFType_simplify
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_simplify,2,0) {(void*) boxptr_NFType_simplify,0}};
#define boxvar_NFType_simplify MMC_REFSTRUCTLIT(boxvar_lit_NFType_simplify)


DLLDirection
modelica_metatype omc_NFType_sizeType(threadData_t *threadData, modelica_metatype _arrayTy);
#define boxptr_NFType_sizeType omc_NFType_sizeType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_sizeType,2,0) {(void*) boxptr_NFType_sizeType,0}};
#define boxvar_NFType_sizeType MMC_REFSTRUCTLIT(boxvar_lit_NFType_sizeType)


DLLDirection
modelica_boolean omc_NFType_isBoxed(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isBoxed(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isBoxed,2,0) {(void*) boxptr_NFType_isBoxed,0}};
#define boxvar_NFType_isBoxed MMC_REFSTRUCTLIT(boxvar_lit_NFType_isBoxed)


DLLDirection
modelica_metatype omc_NFType_unbox(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_unbox omc_NFType_unbox
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_unbox,2,0) {(void*) boxptr_NFType_unbox,0}};
#define boxvar_NFType_unbox MMC_REFSTRUCTLIT(boxvar_lit_NFType_unbox)


DLLDirection
modelica_metatype omc_NFType_box(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_box omc_NFType_box
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_box,2,0) {(void*) boxptr_NFType_box,0}};
#define boxvar_NFType_box MMC_REFSTRUCTLIT(boxvar_lit_NFType_box)


DLLDirection
modelica_integer omc_NFType_enumSize(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_enumSize(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_enumSize,2,0) {(void*) boxptr_NFType_enumSize,0}};
#define boxvar_NFType_enumSize MMC_REFSTRUCTLIT(boxvar_lit_NFType_enumSize)


DLLDirection
modelica_metatype omc_NFType_enumName(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_enumName omc_NFType_enumName
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_enumName,2,0) {(void*) boxptr_NFType_enumName,0}};
#define boxvar_NFType_enumName MMC_REFSTRUCTLIT(boxvar_lit_NFType_enumName)


DLLDirection
modelica_integer omc_NFType_tupleFieldCount(threadData_t *threadData, modelica_metatype _tupleType);
DLLDirection
modelica_metatype boxptr_NFType_tupleFieldCount(threadData_t *threadData, modelica_metatype _tupleType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_tupleFieldCount,2,0) {(void*) boxptr_NFType_tupleFieldCount,0}};
#define boxvar_NFType_tupleFieldCount MMC_REFSTRUCTLIT(boxvar_lit_NFType_tupleFieldCount)


DLLDirection
void omc_NFType_updateRecordFieldsIndexMap(threadData_t *threadData, modelica_metatype _fields, modelica_metatype _indexMap);
#define boxptr_NFType_updateRecordFieldsIndexMap omc_NFType_updateRecordFieldsIndexMap
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_updateRecordFieldsIndexMap,2,0) {(void*) boxptr_NFType_updateRecordFieldsIndexMap,0}};
#define boxvar_NFType_updateRecordFieldsIndexMap MMC_REFSTRUCTLIT(boxvar_lit_NFType_updateRecordFieldsIndexMap)


DLLDirection
modelica_metatype omc_NFType_setRecordFields(threadData_t *threadData, modelica_metatype _field_lst, modelica_metatype __omcQ_24in_5FrecordType);
#define boxptr_NFType_setRecordFields omc_NFType_setRecordFields
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_setRecordFields,2,0) {(void*) boxptr_NFType_setRecordFields,0}};
#define boxvar_NFType_setRecordFields MMC_REFSTRUCTLIT(boxvar_lit_NFType_setRecordFields)


DLLDirection
modelica_metatype omc_NFType_recordFields(threadData_t *threadData, modelica_metatype _recordType);
#define boxptr_NFType_recordFields omc_NFType_recordFields
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_recordFields,2,0) {(void*) boxptr_NFType_recordFields,0}};
#define boxvar_NFType_recordFields MMC_REFSTRUCTLIT(boxvar_lit_NFType_recordFields)


DLLDirection
modelica_integer omc_NFType_recordFieldCount(threadData_t *threadData, modelica_metatype _recordType);
DLLDirection
modelica_metatype boxptr_NFType_recordFieldCount(threadData_t *threadData, modelica_metatype _recordType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_recordFieldCount,2,0) {(void*) boxptr_NFType_recordFieldCount,0}};
#define boxvar_NFType_recordFieldCount MMC_REFSTRUCTLIT(boxvar_lit_NFType_recordFieldCount)


DLLDirection
modelica_metatype omc_NFType_lookupRecordFieldType(threadData_t *threadData, modelica_string _name, modelica_metatype _recordType);
#define boxptr_NFType_lookupRecordFieldType omc_NFType_lookupRecordFieldType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_lookupRecordFieldType,2,0) {(void*) boxptr_NFType_lookupRecordFieldType,0}};
#define boxvar_NFType_lookupRecordFieldType MMC_REFSTRUCTLIT(boxvar_lit_NFType_lookupRecordFieldType)


DLLDirection
modelica_boolean omc_NFType_isDiscrete(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isDiscrete(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isDiscrete,2,0) {(void*) boxptr_NFType_isDiscrete,0}};
#define boxvar_NFType_isDiscrete MMC_REFSTRUCTLIT(boxvar_lit_NFType_isDiscrete)


DLLDirection
modelica_integer omc_NFType_hashContinue(threadData_t *threadData, modelica_metatype _ty, modelica_integer __omcQ_24in_5Fhash);
DLLDirection
modelica_metatype boxptr_NFType_hashContinue(threadData_t *threadData, modelica_metatype _ty, modelica_metatype __omcQ_24in_5Fhash);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_hashContinue,2,0) {(void*) boxptr_NFType_hashContinue,0}};
#define boxvar_NFType_hashContinue MMC_REFSTRUCTLIT(boxvar_lit_NFType_hashContinue)


DLLDirection
modelica_boolean omc_NFType_isEqual(threadData_t *threadData, modelica_metatype _ty1, modelica_metatype _ty2);
DLLDirection
modelica_metatype boxptr_NFType_isEqual(threadData_t *threadData, modelica_metatype _ty1, modelica_metatype _ty2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isEqual,2,0) {(void*) boxptr_NFType_isEqual,0}};
#define boxvar_NFType_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFType_isEqual)


DLLDirection
modelica_metatype omc_NFType_subscript(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _subs, modelica_boolean _failOnError);
DLLDirection
modelica_metatype boxptr_NFType_subscript(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _subs, modelica_metatype _failOnError);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_subscript,2,0) {(void*) boxptr_NFType_subscript,0}};
#define boxvar_NFType_subscript MMC_REFSTRUCTLIT(boxvar_lit_NFType_subscript)


DLLDirection
modelica_metatype omc_NFType_toDAE(threadData_t *threadData, modelica_metatype _ty, modelica_boolean _makeTypeVars);
DLLDirection
modelica_metatype boxptr_NFType_toDAE(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _makeTypeVars);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_toDAE,2,0) {(void*) boxptr_NFType_toDAE,0}};
#define boxvar_NFType_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFType_toDAE)


DLLDirection
modelica_string omc_NFType_typenameString(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_typenameString omc_NFType_typenameString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_typenameString,2,0) {(void*) boxptr_NFType_typenameString,0}};
#define boxvar_NFType_typenameString MMC_REFSTRUCTLIT(boxvar_lit_NFType_typenameString)


DLLDirection
modelica_metatype omc_NFType_toFlatDeclarationStream(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFType_toFlatDeclarationStream omc_NFType_toFlatDeclarationStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_toFlatDeclarationStream,2,0) {(void*) boxptr_NFType_toFlatDeclarationStream,0}};
#define boxvar_NFType_toFlatDeclarationStream MMC_REFSTRUCTLIT(boxvar_lit_NFType_toFlatDeclarationStream)


DLLDirection
modelica_string omc_NFType_dimensionsToFlatString(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _format);
#define boxptr_NFType_dimensionsToFlatString omc_NFType_dimensionsToFlatString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_dimensionsToFlatString,2,0) {(void*) boxptr_NFType_dimensionsToFlatString,0}};
#define boxvar_NFType_dimensionsToFlatString MMC_REFSTRUCTLIT(boxvar_lit_NFType_dimensionsToFlatString)


DLLDirection
modelica_string omc_NFType_toFlatString(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _format);
#define boxptr_NFType_toFlatString omc_NFType_toFlatString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_toFlatString,2,0) {(void*) boxptr_NFType_toFlatString,0}};
#define boxvar_NFType_toFlatString MMC_REFSTRUCTLIT(boxvar_lit_NFType_toFlatString)


DLLDirection
modelica_string omc_NFType_toString(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_toString omc_NFType_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_toString,2,0) {(void*) boxptr_NFType_toString,0}};
#define boxvar_NFType_toString MMC_REFSTRUCTLIT(boxvar_lit_NFType_toString)


DLLDirection
modelica_string omc_NFType_nthEnumLiteral(threadData_t *threadData, modelica_metatype _ty, modelica_integer _index);
DLLDirection
modelica_metatype boxptr_NFType_nthEnumLiteral(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_nthEnumLiteral,2,0) {(void*) boxptr_NFType_nthEnumLiteral,0}};
#define boxvar_NFType_nthEnumLiteral MMC_REFSTRUCTLIT(boxvar_lit_NFType_nthEnumLiteral)


DLLDirection
modelica_metatype omc_NFType_foldDims(threadData_t *threadData, modelica_metatype _ty, modelica_fnptr _func, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFType_foldDims omc_NFType_foldDims
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_foldDims,2,0) {(void*) boxptr_NFType_foldDims,0}};
#define boxvar_NFType_foldDims MMC_REFSTRUCTLIT(boxvar_lit_NFType_foldDims)


DLLDirection
modelica_metatype omc_NFType_mapDims(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_fnptr _func);
#define boxptr_NFType_mapDims omc_NFType_mapDims
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_mapDims,2,0) {(void*) boxptr_NFType_mapDims,0}};
#define boxvar_NFType_mapDims MMC_REFSTRUCTLIT(boxvar_lit_NFType_mapDims)


DLLDirection
modelica_boolean omc_NFType_hasZeroDimension(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_hasZeroDimension(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_hasZeroDimension,2,0) {(void*) boxptr_NFType_hasZeroDimension,0}};
#define boxvar_NFType_hasZeroDimension MMC_REFSTRUCTLIT(boxvar_lit_NFType_hasZeroDimension)


DLLDirection
modelica_boolean omc_NFType_hasKnownSize(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_hasKnownSize(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_hasKnownSize,2,0) {(void*) boxptr_NFType_hasKnownSize,0}};
#define boxvar_NFType_hasKnownSize MMC_REFSTRUCTLIT(boxvar_lit_NFType_hasKnownSize)


DLLDirection
modelica_integer omc_NFType_dimensionDiff(threadData_t *threadData, modelica_metatype _ty1, modelica_metatype _ty2);
DLLDirection
modelica_metatype boxptr_NFType_dimensionDiff(threadData_t *threadData, modelica_metatype _ty1, modelica_metatype _ty2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_dimensionDiff,2,0) {(void*) boxptr_NFType_dimensionDiff,0}};
#define boxvar_NFType_dimensionDiff MMC_REFSTRUCTLIT(boxvar_lit_NFType_dimensionDiff)


DLLDirection
modelica_integer omc_NFType_dimensionCount(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_dimensionCount(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_dimensionCount,2,0) {(void*) boxptr_NFType_dimensionCount,0}};
#define boxvar_NFType_dimensionCount MMC_REFSTRUCTLIT(boxvar_lit_NFType_dimensionCount)


DLLDirection
modelica_metatype omc_NFType_nthDimension(threadData_t *threadData, modelica_metatype _ty, modelica_integer _index);
DLLDirection
modelica_metatype boxptr_NFType_nthDimension(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _index);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_nthDimension,2,0) {(void*) boxptr_NFType_nthDimension,0}};
#define boxvar_NFType_nthDimension MMC_REFSTRUCTLIT(boxvar_lit_NFType_nthDimension)


DLLDirection
modelica_metatype omc_NFType_applyToDims(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_fnptr _func);
#define boxptr_NFType_applyToDims omc_NFType_applyToDims
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_applyToDims,2,0) {(void*) boxptr_NFType_applyToDims,0}};
#define boxvar_NFType_applyToDims MMC_REFSTRUCTLIT(boxvar_lit_NFType_applyToDims)


DLLDirection
modelica_metatype omc_NFType_copyDims(threadData_t *threadData, modelica_metatype _srcType, modelica_metatype _dstType);
#define boxptr_NFType_copyDims omc_NFType_copyDims
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_copyDims,2,0) {(void*) boxptr_NFType_copyDims,0}};
#define boxvar_NFType_copyDims MMC_REFSTRUCTLIT(boxvar_lit_NFType_copyDims)


DLLDirection
modelica_metatype omc_NFType_arrayDims(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_arrayDims omc_NFType_arrayDims
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_arrayDims,2,0) {(void*) boxptr_NFType_arrayDims,0}};
#define boxvar_NFType_arrayDims MMC_REFSTRUCTLIT(boxvar_lit_NFType_arrayDims)


DLLDirection
modelica_metatype omc_NFType_copyElementType(threadData_t *threadData, modelica_metatype _dstType, modelica_metatype _srcType);
#define boxptr_NFType_copyElementType omc_NFType_copyElementType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_copyElementType,2,0) {(void*) boxptr_NFType_copyElementType,0}};
#define boxvar_NFType_copyElementType MMC_REFSTRUCTLIT(boxvar_lit_NFType_copyElementType)


DLLDirection
modelica_metatype omc_NFType_elementType(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_elementType omc_NFType_elementType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_elementType,2,0) {(void*) boxptr_NFType_elementType,0}};
#define boxvar_NFType_elementType MMC_REFSTRUCTLIT(boxvar_lit_NFType_elementType)


DLLDirection
modelica_metatype omc_NFType_setArrayElementType(threadData_t *threadData, modelica_metatype _arrayTy, modelica_metatype _elementTy);
#define boxptr_NFType_setArrayElementType omc_NFType_setArrayElementType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_setArrayElementType,2,0) {(void*) boxptr_NFType_setArrayElementType,0}};
#define boxvar_NFType_setArrayElementType MMC_REFSTRUCTLIT(boxvar_lit_NFType_setArrayElementType)


DLLDirection
modelica_metatype omc_NFType_arrayElementType(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_arrayElementType omc_NFType_arrayElementType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_arrayElementType,2,0) {(void*) boxptr_NFType_arrayElementType,0}};
#define boxvar_NFType_arrayElementType MMC_REFSTRUCTLIT(boxvar_lit_NFType_arrayElementType)


DLLDirection
modelica_metatype omc_NFType_nthTupleType(threadData_t *threadData, modelica_metatype _ty, modelica_integer _n);
DLLDirection
modelica_metatype boxptr_NFType_nthTupleType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _n);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_nthTupleType,2,0) {(void*) boxptr_NFType_nthTupleType,0}};
#define boxvar_NFType_nthTupleType MMC_REFSTRUCTLIT(boxvar_lit_NFType_nthTupleType)


DLLDirection
modelica_metatype omc_NFType_firstTupleType(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_firstTupleType omc_NFType_firstTupleType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_firstTupleType,2,0) {(void*) boxptr_NFType_firstTupleType,0}};
#define boxvar_NFType_firstTupleType MMC_REFSTRUCTLIT(boxvar_lit_NFType_firstTupleType)


DLLDirection
modelica_boolean omc_NFType_isPolymorphicNamed(threadData_t *threadData, modelica_metatype _ty, modelica_string _name);
DLLDirection
modelica_metatype boxptr_NFType_isPolymorphicNamed(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isPolymorphicNamed,2,0) {(void*) boxptr_NFType_isPolymorphicNamed,0}};
#define boxvar_NFType_isPolymorphicNamed MMC_REFSTRUCTLIT(boxvar_lit_NFType_isPolymorphicNamed)


DLLDirection
modelica_boolean omc_NFType_isPolymorphic(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isPolymorphic(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isPolymorphic,2,0) {(void*) boxptr_NFType_isPolymorphic,0}};
#define boxvar_NFType_isPolymorphic MMC_REFSTRUCTLIT(boxvar_lit_NFType_isPolymorphic)


DLLDirection
modelica_boolean omc_NFType_isKnown(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isKnown(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isKnown,2,0) {(void*) boxptr_NFType_isKnown,0}};
#define boxvar_NFType_isKnown MMC_REFSTRUCTLIT(boxvar_lit_NFType_isKnown)


DLLDirection
modelica_boolean omc_NFType_isUnknown(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isUnknown(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isUnknown,2,0) {(void*) boxptr_NFType_isUnknown,0}};
#define boxvar_NFType_isUnknown MMC_REFSTRUCTLIT(boxvar_lit_NFType_isUnknown)


DLLDirection
modelica_boolean omc_NFType_isTuple(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isTuple(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isTuple,2,0) {(void*) boxptr_NFType_isTuple,0}};
#define boxvar_NFType_isTuple MMC_REFSTRUCTLIT(boxvar_lit_NFType_isTuple)


DLLDirection
modelica_boolean omc_NFType_isScalarBuiltin(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isScalarBuiltin(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isScalarBuiltin,2,0) {(void*) boxptr_NFType_isScalarBuiltin,0}};
#define boxvar_NFType_isScalarBuiltin MMC_REFSTRUCTLIT(boxvar_lit_NFType_isScalarBuiltin)


DLLDirection
modelica_boolean omc_NFType_isNumeric(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isNumeric(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isNumeric,2,0) {(void*) boxptr_NFType_isNumeric,0}};
#define boxvar_NFType_isNumeric MMC_REFSTRUCTLIT(boxvar_lit_NFType_isNumeric)


DLLDirection
modelica_boolean omc_NFType_isBasicNumeric(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isBasicNumeric(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isBasicNumeric,2,0) {(void*) boxptr_NFType_isBasicNumeric,0}};
#define boxvar_NFType_isBasicNumeric MMC_REFSTRUCTLIT(boxvar_lit_NFType_isBasicNumeric)


DLLDirection
modelica_boolean omc_NFType_isBasic(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isBasic(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isBasic,2,0) {(void*) boxptr_NFType_isBasic,0}};
#define boxvar_NFType_isBasic MMC_REFSTRUCTLIT(boxvar_lit_NFType_isBasic)


DLLDirection
modelica_boolean omc_NFType_isRecord(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isRecord(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isRecord,2,0) {(void*) boxptr_NFType_isRecord,0}};
#define boxvar_NFType_isRecord MMC_REFSTRUCTLIT(boxvar_lit_NFType_isRecord)


DLLDirection
modelica_boolean omc_NFType_isExternalObject(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isExternalObject(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isExternalObject,2,0) {(void*) boxptr_NFType_isExternalObject,0}};
#define boxvar_NFType_isExternalObject MMC_REFSTRUCTLIT(boxvar_lit_NFType_isExternalObject)


DLLDirection
modelica_boolean omc_NFType_isExpandableConnector(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isExpandableConnector(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isExpandableConnector,2,0) {(void*) boxptr_NFType_isExpandableConnector,0}};
#define boxvar_NFType_isExpandableConnector MMC_REFSTRUCTLIT(boxvar_lit_NFType_isExpandableConnector)


DLLDirection
modelica_boolean omc_NFType_isStreamConnector(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isStreamConnector(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isStreamConnector,2,0) {(void*) boxptr_NFType_isStreamConnector,0}};
#define boxvar_NFType_isStreamConnector MMC_REFSTRUCTLIT(boxvar_lit_NFType_isStreamConnector)


DLLDirection
modelica_boolean omc_NFType_isConnector(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isConnector(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isConnector,2,0) {(void*) boxptr_NFType_isConnector,0}};
#define boxvar_NFType_isConnector MMC_REFSTRUCTLIT(boxvar_lit_NFType_isConnector)


DLLDirection
modelica_metatype omc_NFType_complexComponents(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_complexComponents omc_NFType_complexComponents
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_complexComponents,2,0) {(void*) boxptr_NFType_complexComponents,0}};
#define boxvar_NFType_complexComponents MMC_REFSTRUCTLIT(boxvar_lit_NFType_complexComponents)


DLLDirection
modelica_metatype omc_NFType_complexNode(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_complexNode omc_NFType_complexNode
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_complexNode,2,0) {(void*) boxptr_NFType_complexNode,0}};
#define boxvar_NFType_complexNode MMC_REFSTRUCTLIT(boxvar_lit_NFType_complexNode)


DLLDirection
modelica_boolean omc_NFType_isComplexArray(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isComplexArray(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isComplexArray,2,0) {(void*) boxptr_NFType_isComplexArray,0}};
#define boxvar_NFType_isComplexArray MMC_REFSTRUCTLIT(boxvar_lit_NFType_isComplexArray)


DLLDirection
modelica_boolean omc_NFType_isComplex(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isComplex(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isComplex,2,0) {(void*) boxptr_NFType_isComplex,0}};
#define boxvar_NFType_isComplex MMC_REFSTRUCTLIT(boxvar_lit_NFType_isComplex)


DLLDirection
modelica_boolean omc_NFType_isUnspecifiedEnumeration(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isUnspecifiedEnumeration(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isUnspecifiedEnumeration,2,0) {(void*) boxptr_NFType_isUnspecifiedEnumeration,0}};
#define boxvar_NFType_isUnspecifiedEnumeration MMC_REFSTRUCTLIT(boxvar_lit_NFType_isUnspecifiedEnumeration)


DLLDirection
modelica_boolean omc_NFType_isBuiltinEnumeration(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isBuiltinEnumeration(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isBuiltinEnumeration,2,0) {(void*) boxptr_NFType_isBuiltinEnumeration,0}};
#define boxvar_NFType_isBuiltinEnumeration MMC_REFSTRUCTLIT(boxvar_lit_NFType_isBuiltinEnumeration)


DLLDirection
modelica_boolean omc_NFType_isEnumeration(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isEnumeration(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isEnumeration,2,0) {(void*) boxptr_NFType_isEnumeration,0}};
#define boxvar_NFType_isEnumeration MMC_REFSTRUCTLIT(boxvar_lit_NFType_isEnumeration)


DLLDirection
modelica_boolean omc_NFType_isSingleElementArray(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isSingleElementArray(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isSingleElementArray,2,0) {(void*) boxptr_NFType_isSingleElementArray,0}};
#define boxvar_NFType_isSingleElementArray MMC_REFSTRUCTLIT(boxvar_lit_NFType_isSingleElementArray)


DLLDirection
modelica_boolean omc_NFType_isEmptyArray(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isEmptyArray(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isEmptyArray,2,0) {(void*) boxptr_NFType_isEmptyArray,0}};
#define boxvar_NFType_isEmptyArray MMC_REFSTRUCTLIT(boxvar_lit_NFType_isEmptyArray)


DLLDirection
modelica_boolean omc_NFType_isSquareMatrix(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isSquareMatrix(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isSquareMatrix,2,0) {(void*) boxptr_NFType_isSquareMatrix,0}};
#define boxvar_NFType_isSquareMatrix MMC_REFSTRUCTLIT(boxvar_lit_NFType_isSquareMatrix)


DLLDirection
modelica_boolean omc_NFType_isMatrix(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isMatrix(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isMatrix,2,0) {(void*) boxptr_NFType_isMatrix,0}};
#define boxvar_NFType_isMatrix MMC_REFSTRUCTLIT(boxvar_lit_NFType_isMatrix)


DLLDirection
modelica_boolean omc_NFType_isVector(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isVector(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isVector,2,0) {(void*) boxptr_NFType_isVector,0}};
#define boxvar_NFType_isVector MMC_REFSTRUCTLIT(boxvar_lit_NFType_isVector)


DLLDirection
modelica_metatype omc_NFType_simplifyConditionalArray(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFType_simplifyConditionalArray omc_NFType_simplifyConditionalArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_simplifyConditionalArray,2,0) {(void*) boxptr_NFType_simplifyConditionalArray,0}};
#define boxvar_NFType_simplifyConditionalArray MMC_REFSTRUCTLIT(boxvar_lit_NFType_simplifyConditionalArray)


DLLDirection
modelica_boolean omc_NFType_isMatchedBranch(threadData_t *threadData, modelica_boolean _condition, modelica_metatype _condType);
DLLDirection
modelica_metatype boxptr_NFType_isMatchedBranch(threadData_t *threadData, modelica_metatype _condition, modelica_metatype _condType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isMatchedBranch,2,0) {(void*) boxptr_NFType_isMatchedBranch,0}};
#define boxvar_NFType_isMatchedBranch MMC_REFSTRUCTLIT(boxvar_lit_NFType_isMatchedBranch)


DLLDirection
modelica_metatype omc_NFType_removeSizeOneArraysAndRecords(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty);
#define boxptr_NFType_removeSizeOneArraysAndRecords omc_NFType_removeSizeOneArraysAndRecords
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_removeSizeOneArraysAndRecords,2,0) {(void*) boxptr_NFType_removeSizeOneArraysAndRecords,0}};
#define boxvar_NFType_removeSizeOneArraysAndRecords MMC_REFSTRUCTLIT(boxvar_lit_NFType_removeSizeOneArraysAndRecords)


DLLDirection
modelica_metatype omc_NFType_setConditionalArrayTypes(threadData_t *threadData, modelica_metatype _condType, modelica_metatype _trueType, modelica_metatype _falseType);
#define boxptr_NFType_setConditionalArrayTypes omc_NFType_setConditionalArrayTypes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_setConditionalArrayTypes,2,0) {(void*) boxptr_NFType_setConditionalArrayTypes,0}};
#define boxvar_NFType_setConditionalArrayTypes MMC_REFSTRUCTLIT(boxvar_lit_NFType_setConditionalArrayTypes)


DLLDirection
modelica_boolean omc_NFType_isAny(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isAny(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isAny,2,0) {(void*) boxptr_NFType_isAny,0}};
#define boxvar_NFType_isAny MMC_REFSTRUCTLIT(boxvar_lit_NFType_isAny)


DLLDirection
modelica_boolean omc_NFType_sizeKnown(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_sizeKnown(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_sizeKnown,2,0) {(void*) boxptr_NFType_sizeKnown,0}};
#define boxvar_NFType_sizeKnown MMC_REFSTRUCTLIT(boxvar_lit_NFType_sizeKnown)


DLLDirection
modelica_boolean omc_NFType_isResizable(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isResizable(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isResizable,2,0) {(void*) boxptr_NFType_isResizable,0}};
#define boxvar_NFType_isResizable MMC_REFSTRUCTLIT(boxvar_lit_NFType_isResizable)


DLLDirection
modelica_boolean omc_NFType_isConditionalArray(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isConditionalArray(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isConditionalArray,2,0) {(void*) boxptr_NFType_isConditionalArray,0}};
#define boxvar_NFType_isConditionalArray MMC_REFSTRUCTLIT(boxvar_lit_NFType_isConditionalArray)


DLLDirection
modelica_boolean omc_NFType_isArray(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isArray(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isArray,2,0) {(void*) boxptr_NFType_isArray,0}};
#define boxvar_NFType_isArray MMC_REFSTRUCTLIT(boxvar_lit_NFType_isArray)


DLLDirection
modelica_boolean omc_NFType_isScalar(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isScalar(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isScalar,2,0) {(void*) boxptr_NFType_isScalar,0}};
#define boxvar_NFType_isScalar MMC_REFSTRUCTLIT(boxvar_lit_NFType_isScalar)


DLLDirection
modelica_boolean omc_NFType_isContinuous(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isContinuous(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isContinuous,2,0) {(void*) boxptr_NFType_isContinuous,0}};
#define boxvar_NFType_isContinuous MMC_REFSTRUCTLIT(boxvar_lit_NFType_isContinuous)


DLLDirection
modelica_boolean omc_NFType_isClock(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isClock(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isClock,2,0) {(void*) boxptr_NFType_isClock,0}};
#define boxvar_NFType_isClock MMC_REFSTRUCTLIT(boxvar_lit_NFType_isClock)


DLLDirection
modelica_boolean omc_NFType_isString(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isString(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isString,2,0) {(void*) boxptr_NFType_isString,0}};
#define boxvar_NFType_isString MMC_REFSTRUCTLIT(boxvar_lit_NFType_isString)


DLLDirection
modelica_boolean omc_NFType_isBoolean(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isBoolean(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isBoolean,2,0) {(void*) boxptr_NFType_isBoolean,0}};
#define boxvar_NFType_isBoolean MMC_REFSTRUCTLIT(boxvar_lit_NFType_isBoolean)


DLLDirection
modelica_boolean omc_NFType_isReal(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isReal(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isReal,2,0) {(void*) boxptr_NFType_isReal,0}};
#define boxvar_NFType_isReal MMC_REFSTRUCTLIT(boxvar_lit_NFType_isReal)


DLLDirection
modelica_boolean omc_NFType_isInteger(threadData_t *threadData, modelica_metatype _ty);
DLLDirection
modelica_metatype boxptr_NFType_isInteger(threadData_t *threadData, modelica_metatype _ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_isInteger,2,0) {(void*) boxptr_NFType_isInteger,0}};
#define boxvar_NFType_isInteger MMC_REFSTRUCTLIT(boxvar_lit_NFType_isInteger)


DLLDirection
modelica_metatype omc_NFType_unliftArrayN(threadData_t *threadData, modelica_integer _N, modelica_metatype __omcQ_24in_5Fty);
DLLDirection
modelica_metatype boxptr_NFType_unliftArrayN(threadData_t *threadData, modelica_metatype _N, modelica_metatype __omcQ_24in_5Fty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_unliftArrayN,2,0) {(void*) boxptr_NFType_unliftArrayN,0}};
#define boxvar_NFType_unliftArrayN MMC_REFSTRUCTLIT(boxvar_lit_NFType_unliftArrayN)


DLLDirection
modelica_metatype omc_NFType_unliftArray(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty);
#define boxptr_NFType_unliftArray omc_NFType_unliftArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_unliftArray,2,0) {(void*) boxptr_NFType_unliftArray,0}};
#define boxvar_NFType_unliftArray MMC_REFSTRUCTLIT(boxvar_lit_NFType_unliftArray)


DLLDirection
modelica_metatype omc_NFType_liftArrayRightList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _dims);
#define boxptr_NFType_liftArrayRightList omc_NFType_liftArrayRightList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_liftArrayRightList,2,0) {(void*) boxptr_NFType_liftArrayRightList,0}};
#define boxvar_NFType_liftArrayRightList MMC_REFSTRUCTLIT(boxvar_lit_NFType_liftArrayRightList)


DLLDirection
modelica_metatype omc_NFType_liftArrayLeftList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _dims);
#define boxptr_NFType_liftArrayLeftList omc_NFType_liftArrayLeftList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_liftArrayLeftList,2,0) {(void*) boxptr_NFType_liftArrayLeftList,0}};
#define boxvar_NFType_liftArrayLeftList MMC_REFSTRUCTLIT(boxvar_lit_NFType_liftArrayLeftList)


DLLDirection
modelica_metatype omc_NFType_liftArrayLeft(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty, modelica_metatype _dim);
#define boxptr_NFType_liftArrayLeft omc_NFType_liftArrayLeft
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFType_liftArrayLeft,2,0) {(void*) boxptr_NFType_liftArrayLeft,0}};
#define boxvar_NFType_liftArrayLeft MMC_REFSTRUCTLIT(boxvar_lit_NFType_liftArrayLeft)

#ifdef __cplusplus
}
#endif
#endif
