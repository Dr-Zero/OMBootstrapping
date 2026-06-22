#ifndef NFVariable__H
#define NFVariable__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;

extern struct record_description DAE_Prefix_NOPRE__desc;

extern struct record_description DAE_Type_T__UNKNOWN__desc;

extern struct record_description IOStream_IOStreamType_LIST__desc;

extern struct record_description NFBackendExtension_Annotations_ANNOTATIONS__desc;

extern struct record_description NFBackendExtension_BackendInfo_BACKEND__INFO__desc;

extern struct record_description NFBackendExtension_VariableAttributes_VAR__ATTR__REAL__desc;

extern struct record_description NFBackendExtension_VariableKind_FRONTEND__DUMMY__desc;

extern struct record_description NFBackendExtension_VariableKind_ITERATOR__desc;

extern struct record_description NFBinding_UNBOUND__desc;

extern struct record_description NFCeval_EvalTarget_EVAL__TARGET__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description NFVariable_VARIABLE__desc;

extern struct record_description SCode_Annotation_ANNOTATION__desc;

extern struct record_description SCode_Each_NOT__EACH__desc;

extern struct record_description SCode_Final_NOT__FINAL__desc;

extern struct record_description SCode_Mod_MOD__desc;

extern struct record_description SCode_SubMod_NAMEMOD__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFVariable_asBinding(threadData_t *threadData, modelica_metatype _var, modelica_integer _source);
DLLDirection
modelica_metatype boxptr_NFVariable_asBinding(threadData_t *threadData, modelica_metatype _var, modelica_metatype _source);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_asBinding,2,0) {(void*) boxptr_NFVariable_asBinding,0}};
#define boxvar_NFVariable_asBinding MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_asBinding)


DLLDirection
modelica_metatype omc_NFVariable_getNominal(threadData_t *threadData, modelica_metatype _var);
#define boxptr_NFVariable_getNominal omc_NFVariable_getNominal
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_getNominal,2,0) {(void*) boxptr_NFVariable_getNominal,0}};
#define boxvar_NFVariable_getNominal MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_getNominal)


DLLDirection
modelica_metatype omc_NFVariable_getVariableAttributes(threadData_t *threadData, modelica_metatype _var);
#define boxptr_NFVariable_getVariableAttributes omc_NFVariable_getVariableAttributes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_getVariableAttributes,2,0) {(void*) boxptr_NFVariable_getVariableAttributes,0}};
#define boxvar_NFVariable_getVariableAttributes MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_getVariableAttributes)


DLLDirection
modelica_metatype omc_NFVariable_moveBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_metatype __omcQ_24in_5Fequations, modelica_metatype *out_equations);
#define boxptr_NFVariable_moveBinding omc_NFVariable_moveBinding
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_moveBinding,2,0) {(void*) boxptr_NFVariable_moveBinding,0}};
#define boxvar_NFVariable_moveBinding MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_moveBinding)


DLLDirection
modelica_metatype omc_NFVariable_toFlatStreamModifier(threadData_t *threadData, modelica_metatype _children, modelica_boolean _overwrittenBinding, modelica_boolean _printBindingType, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs);
DLLDirection
modelica_metatype boxptr_NFVariable_toFlatStreamModifier(threadData_t *threadData, modelica_metatype _children, modelica_metatype _overwrittenBinding, modelica_metatype _printBindingType, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_toFlatStreamModifier,2,0) {(void*) boxptr_NFVariable_toFlatStreamModifier,0}};
#define boxvar_NFVariable_toFlatStreamModifier MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_toFlatStreamModifier)


DLLDirection
modelica_metatype omc_NFVariable_toFlatStreamBinding(threadData_t *threadData, modelica_metatype _binding, modelica_boolean _printBindingType, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs);
DLLDirection
modelica_metatype boxptr_NFVariable_toFlatStreamBinding(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _printBindingType, modelica_metatype _format, modelica_metatype __omcQ_24in_5Fs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_toFlatStreamBinding,2,0) {(void*) boxptr_NFVariable_toFlatStreamBinding,0}};
#define boxvar_NFVariable_toFlatStreamBinding MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_toFlatStreamBinding)


DLLDirection
modelica_metatype omc_NFVariable_toFlatStream(threadData_t *threadData, modelica_metatype _var, modelica_metatype _format, modelica_string _indent, modelica_boolean _printBindingType, modelica_metatype __omcQ_24in_5Fs);
DLLDirection
modelica_metatype boxptr_NFVariable_toFlatStream(threadData_t *threadData, modelica_metatype _var, modelica_metatype _format, modelica_metatype _indent, modelica_metatype _printBindingType, modelica_metatype __omcQ_24in_5Fs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_toFlatStream,2,0) {(void*) boxptr_NFVariable_toFlatStream,0}};
#define boxvar_NFVariable_toFlatStream MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_toFlatStream)


DLLDirection
modelica_metatype omc_NFVariable_toStream(threadData_t *threadData, modelica_metatype _var, modelica_string _indent, modelica_boolean _printBindingType, modelica_metatype __omcQ_24in_5Fs);
DLLDirection
modelica_metatype boxptr_NFVariable_toStream(threadData_t *threadData, modelica_metatype _var, modelica_metatype _indent, modelica_metatype _printBindingType, modelica_metatype __omcQ_24in_5Fs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_toStream,2,0) {(void*) boxptr_NFVariable_toStream,0}};
#define boxvar_NFVariable_toStream MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_toStream)


DLLDirection
modelica_string omc_NFVariable_toString(threadData_t *threadData, modelica_metatype _var, modelica_string _indent, modelica_boolean _printBindingType);
DLLDirection
modelica_metatype boxptr_NFVariable_toString(threadData_t *threadData, modelica_metatype _var, modelica_metatype _indent, modelica_metatype _printBindingType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_toString,2,0) {(void*) boxptr_NFVariable_toString,0}};
#define boxvar_NFVariable_toString MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_toString)


DLLDirection
modelica_metatype omc_NFVariable_mapExpShallow(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_fnptr _fn);
#define boxptr_NFVariable_mapExpShallow omc_NFVariable_mapExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_mapExpShallow,2,0) {(void*) boxptr_NFVariable_mapExpShallow,0}};
#define boxvar_NFVariable_mapExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_mapExpShallow)


DLLDirection
modelica_metatype omc_NFVariable_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_fnptr _fn);
#define boxptr_NFVariable_mapExp omc_NFVariable_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_mapExp,2,0) {(void*) boxptr_NFVariable_mapExp,0}};
#define boxvar_NFVariable_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_mapExp)


DLLDirection
void omc_NFVariable_applyExpShallow(threadData_t *threadData, modelica_metatype _var, modelica_fnptr _fn);
#define boxptr_NFVariable_applyExpShallow omc_NFVariable_applyExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_applyExpShallow,2,0) {(void*) boxptr_NFVariable_applyExpShallow,0}};
#define boxvar_NFVariable_applyExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_applyExpShallow)


DLLDirection
void omc_NFVariable_applyExp(threadData_t *threadData, modelica_metatype _var, modelica_fnptr _fn);
#define boxptr_NFVariable_applyExp omc_NFVariable_applyExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_applyExp,2,0) {(void*) boxptr_NFVariable_applyExp,0}};
#define boxvar_NFVariable_applyExp MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_applyExp)


DLLDirection
modelica_metatype omc_NFVariable_removeNonTopLevelDirection(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar);
#define boxptr_NFVariable_removeNonTopLevelDirection omc_NFVariable_removeNonTopLevelDirection
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_removeNonTopLevelDirection,2,0) {(void*) boxptr_NFVariable_removeNonTopLevelDirection,0}};
#define boxvar_NFVariable_removeNonTopLevelDirection MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_removeNonTopLevelDirection)


DLLDirection
modelica_metatype omc_NFVariable_propagateAnnotation(threadData_t *threadData, modelica_string _name, modelica_boolean _overwrite, modelica_boolean _evaluate, modelica_metatype __omcQ_24in_5Fvar);
DLLDirection
modelica_metatype boxptr_NFVariable_propagateAnnotation(threadData_t *threadData, modelica_metatype _name, modelica_metatype _overwrite, modelica_metatype _evaluate, modelica_metatype __omcQ_24in_5Fvar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_propagateAnnotation,2,0) {(void*) boxptr_NFVariable_propagateAnnotation,0}};
#define boxvar_NFVariable_propagateAnnotation MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_propagateAnnotation)


DLLDirection
modelica_metatype omc_NFVariable_applyToType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvar, modelica_fnptr _func);
#define boxptr_NFVariable_applyToType omc_NFVariable_applyToType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_applyToType,2,0) {(void*) boxptr_NFVariable_applyToType,0}};
#define boxvar_NFVariable_applyToType MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_applyToType)


DLLDirection
modelica_metatype omc_NFVariable_lookupTypeAttribute(threadData_t *threadData, modelica_string _name, modelica_metatype _var);
#define boxptr_NFVariable_lookupTypeAttribute omc_NFVariable_lookupTypeAttribute
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_lookupTypeAttribute,2,0) {(void*) boxptr_NFVariable_lookupTypeAttribute,0}};
#define boxvar_NFVariable_lookupTypeAttribute MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_lookupTypeAttribute)


DLLDirection
modelica_boolean omc_NFVariable_isAccessible(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isAccessible(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isAccessible,2,0) {(void*) boxptr_NFVariable_isAccessible,0}};
#define boxvar_NFVariable_isAccessible MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isAccessible)


DLLDirection
modelica_boolean omc_NFVariable_isEncrypted(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isEncrypted(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isEncrypted,2,0) {(void*) boxptr_NFVariable_isEncrypted,0}};
#define boxvar_NFVariable_isEncrypted MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isEncrypted)


DLLDirection
modelica_boolean omc_NFVariable_isProtected(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isProtected(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isProtected,2,0) {(void*) boxptr_NFVariable_isProtected,0}};
#define boxvar_NFVariable_isProtected MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isProtected)


DLLDirection
modelica_boolean omc_NFVariable_isPublic(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isPublic(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isPublic,2,0) {(void*) boxptr_NFVariable_isPublic,0}};
#define boxvar_NFVariable_isPublic MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isPublic)


DLLDirection
modelica_boolean omc_NFVariable_isTopLevelInput(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isTopLevelInput(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isTopLevelInput,2,0) {(void*) boxptr_NFVariable_isTopLevelInput,0}};
#define boxvar_NFVariable_isTopLevelInput MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isTopLevelInput)


DLLDirection
modelica_boolean omc_NFVariable_isInput(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isInput(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isInput,2,0) {(void*) boxptr_NFVariable_isInput,0}};
#define boxvar_NFVariable_isInput MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isInput)


DLLDirection
modelica_boolean omc_NFVariable_isStream(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isStream(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isStream,2,0) {(void*) boxptr_NFVariable_isStream,0}};
#define boxvar_NFVariable_isStream MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isStream)


DLLDirection
modelica_boolean omc_NFVariable_isFlow(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isFlow(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isFlow,2,0) {(void*) boxptr_NFVariable_isFlow,0}};
#define boxvar_NFVariable_isFlow MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isFlow)


DLLDirection
modelica_boolean omc_NFVariable_isPotential(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isPotential(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isPotential,2,0) {(void*) boxptr_NFVariable_isPotential,0}};
#define boxvar_NFVariable_isPotential MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isPotential)


DLLDirection
modelica_boolean omc_NFVariable_isPresent(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isPresent(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isPresent,2,0) {(void*) boxptr_NFVariable_isPresent,0}};
#define boxvar_NFVariable_isPresent MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isPresent)


DLLDirection
modelica_boolean omc_NFVariable_isDeleted(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isDeleted(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isDeleted,2,0) {(void*) boxptr_NFVariable_isDeleted,0}};
#define boxvar_NFVariable_isDeleted MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isDeleted)


DLLDirection
modelica_boolean omc_NFVariable_isEmptyArray(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isEmptyArray(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isEmptyArray,2,0) {(void*) boxptr_NFVariable_isEmptyArray,0}};
#define boxvar_NFVariable_isEmptyArray MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isEmptyArray)


DLLDirection
modelica_boolean omc_NFVariable_isStructural(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_isStructural(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isStructural,2,0) {(void*) boxptr_NFVariable_isStructural,0}};
#define boxvar_NFVariable_isStructural MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isStructural)


DLLDirection
modelica_boolean omc_NFVariable_isComplexArray(threadData_t *threadData, modelica_metatype _var);
DLLDirection
modelica_metatype boxptr_NFVariable_isComplexArray(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isComplexArray,2,0) {(void*) boxptr_NFVariable_isComplexArray,0}};
#define boxvar_NFVariable_isComplexArray MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isComplexArray)


DLLDirection
modelica_boolean omc_NFVariable_isComplex(threadData_t *threadData, modelica_metatype _var);
DLLDirection
modelica_metatype boxptr_NFVariable_isComplex(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_isComplex,2,0) {(void*) boxptr_NFVariable_isComplex,0}};
#define boxvar_NFVariable_isComplex MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_isComplex)


DLLDirection
modelica_integer omc_NFVariable_visibility(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_visibility(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_visibility,2,0) {(void*) boxptr_NFVariable_visibility,0}};
#define boxvar_NFVariable_visibility MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_visibility)


DLLDirection
modelica_metatype omc_NFVariable_setVariability(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvariable, modelica_integer _variability);
DLLDirection
modelica_metatype boxptr_NFVariable_setVariability(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fvariable, modelica_metatype _variability);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_setVariability,2,0) {(void*) boxptr_NFVariable_setVariability,0}};
#define boxvar_NFVariable_setVariability MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_setVariability)


DLLDirection
modelica_integer omc_NFVariable_variability(threadData_t *threadData, modelica_metatype _variable);
DLLDirection
modelica_metatype boxptr_NFVariable_variability(threadData_t *threadData, modelica_metatype _variable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_variability,2,0) {(void*) boxptr_NFVariable_variability,0}};
#define boxvar_NFVariable_variability MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_variability)


DLLDirection
modelica_metatype omc_NFVariable_attributes(threadData_t *threadData, modelica_metatype _variable);
#define boxptr_NFVariable_attributes omc_NFVariable_attributes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_attributes,2,0) {(void*) boxptr_NFVariable_attributes,0}};
#define boxvar_NFVariable_attributes MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_attributes)


DLLDirection
modelica_metatype omc_NFVariable_typeOf(threadData_t *threadData, modelica_metatype _var);
#define boxptr_NFVariable_typeOf omc_NFVariable_typeOf
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_typeOf,2,0) {(void*) boxptr_NFVariable_typeOf,0}};
#define boxvar_NFVariable_typeOf MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_typeOf)


DLLDirection
modelica_metatype omc_NFVariable_expandChildren(threadData_t *threadData, modelica_metatype _var, modelica_metatype _arrayDims, modelica_boolean _addDimensions);
DLLDirection
modelica_metatype boxptr_NFVariable_expandChildren(threadData_t *threadData, modelica_metatype _var, modelica_metatype _arrayDims, modelica_metatype _addDimensions);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_expandChildren,2,0) {(void*) boxptr_NFVariable_expandChildren,0}};
#define boxvar_NFVariable_expandChildren MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_expandChildren)


DLLDirection
modelica_metatype omc_NFVariable_expand(threadData_t *threadData, modelica_metatype _var, modelica_boolean _backend);
DLLDirection
modelica_metatype boxptr_NFVariable_expand(threadData_t *threadData, modelica_metatype _var, modelica_metatype _backend);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_expand,2,0) {(void*) boxptr_NFVariable_expand,0}};
#define boxvar_NFVariable_expand MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_expand)


DLLDirection
modelica_boolean omc_NFVariable_equalName(threadData_t *threadData, modelica_metatype _var1, modelica_metatype _var2);
DLLDirection
modelica_metatype boxptr_NFVariable_equalName(threadData_t *threadData, modelica_metatype _var1, modelica_metatype _var2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_equalName,2,0) {(void*) boxptr_NFVariable_equalName,0}};
#define boxvar_NFVariable_equalName MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_equalName)


DLLDirection
modelica_integer omc_NFVariable_hash(threadData_t *threadData, modelica_metatype _var);
DLLDirection
modelica_metatype boxptr_NFVariable_hash(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_hash,2,0) {(void*) boxptr_NFVariable_hash,0}};
#define boxvar_NFVariable_hash MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_hash)


DLLDirection
modelica_integer omc_NFVariable_size(threadData_t *threadData, modelica_metatype _var, modelica_boolean _resize);
DLLDirection
modelica_metatype boxptr_NFVariable_size(threadData_t *threadData, modelica_metatype _var, modelica_metatype _resize);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_size,2,0) {(void*) boxptr_NFVariable_size,0}};
#define boxvar_NFVariable_size MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_size)


DLLDirection
modelica_metatype omc_NFVariable_name(threadData_t *threadData, modelica_metatype _var);
#define boxptr_NFVariable_name omc_NFVariable_name
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_name,2,0) {(void*) boxptr_NFVariable_name,0}};
#define boxvar_NFVariable_name MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_name)


DLLDirection
modelica_metatype omc_NFVariable_fromCref(threadData_t *threadData, modelica_metatype _cref);
#define boxptr_NFVariable_fromCref omc_NFVariable_fromCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVariable_fromCref,2,0) {(void*) boxptr_NFVariable_fromCref,0}};
#define boxvar_NFVariable_fromCref MMC_REFSTRUCTLIT(boxvar_lit_NFVariable_fromCref)

#ifdef __cplusplus
}
#endif
#endif
