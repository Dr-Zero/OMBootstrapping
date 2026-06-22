#ifndef NFBinding__H
#define NFBinding__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_ComponentRef_CREF__IDENT__desc;

extern struct record_description Absyn_Exp_CREF__desc;

extern struct record_description Absyn_Exp_INTEGER__desc;

extern struct record_description DAE_Binding_EQBOUND__desc;

extern struct record_description DAE_Binding_UNBOUND__desc;

extern struct record_description DAE_BindingSource_BINDING__FROM__DEFAULT__VALUE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description NFBinding_FLAT__BINDING__desc;

extern struct record_description NFBinding_RAW__BINDING__desc;

extern struct record_description NFBinding_TYPED__BINDING__desc;

extern struct record_description NFBinding_UNBOUND__desc;

extern struct record_description NFBinding_UNTYPED__BINDING__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_integer omc_NFBinding_actualConfidence(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_actualConfidence(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_actualConfidence,2,0) {(void*) boxptr_NFBinding_actualConfidence,0}};
#define boxvar_NFBinding_actualConfidence MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_actualConfidence)


DLLDirection
modelica_integer omc_NFBinding_confidence(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_confidence(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_confidence,2,0) {(void*) boxptr_NFBinding_confidence,0}};
#define boxvar_NFBinding_confidence MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_confidence)


DLLDirection
modelica_boolean omc_NFBinding_isClockOrSampleFunction(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isClockOrSampleFunction(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isClockOrSampleFunction,2,0) {(void*) boxptr_NFBinding_isClockOrSampleFunction,0}};
#define boxvar_NFBinding_isClockOrSampleFunction MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isClockOrSampleFunction)


DLLDirection
modelica_metatype omc_NFBinding_expandEach(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _node);
#define boxptr_NFBinding_expandEach omc_NFBinding_expandEach
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_expandEach,2,0) {(void*) boxptr_NFBinding_expandEach,0}};
#define boxvar_NFBinding_expandEach MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_expandEach)


DLLDirection
modelica_boolean omc_NFBinding_hasTypeOrigin(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_hasTypeOrigin(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_hasTypeOrigin,2,0) {(void*) boxptr_NFBinding_hasTypeOrigin,0}};
#define boxvar_NFBinding_hasTypeOrigin MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_hasTypeOrigin)


DLLDirection
modelica_boolean omc_NFBinding_isEvaluated(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isEvaluated(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isEvaluated,2,0) {(void*) boxptr_NFBinding_isEvaluated,0}};
#define boxvar_NFBinding_isEvaluated MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isEvaluated)


DLLDirection
modelica_metatype omc_NFBinding_makeFlat(threadData_t *threadData, modelica_metatype _exp, modelica_integer _var, modelica_integer _source, modelica_integer _confidence);
DLLDirection
modelica_metatype boxptr_NFBinding_makeFlat(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _var, modelica_metatype _source, modelica_metatype _confidence);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_makeFlat,2,0) {(void*) boxptr_NFBinding_makeFlat,0}};
#define boxvar_NFBinding_makeFlat MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_makeFlat)


DLLDirection
modelica_metatype omc_NFBinding_makeTyped(threadData_t *threadData, modelica_metatype _exp, modelica_integer _eachType, modelica_integer _source, modelica_metatype _info, modelica_integer _state, modelica_integer _confidence);
DLLDirection
modelica_metatype boxptr_NFBinding_makeTyped(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _eachType, modelica_metatype _source, modelica_metatype _info, modelica_metatype _state, modelica_metatype _confidence);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_makeTyped,2,0) {(void*) boxptr_NFBinding_makeTyped,0}};
#define boxvar_NFBinding_makeTyped MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_makeTyped)


DLLDirection
modelica_metatype omc_NFBinding_makeUntyped(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _scope, modelica_integer _eachType, modelica_integer _source, modelica_metatype _info, modelica_integer _confidence);
DLLDirection
modelica_metatype boxptr_NFBinding_makeUntyped(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _scope, modelica_metatype _eachType, modelica_metatype _source, modelica_metatype _info, modelica_metatype _confidence);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_makeUntyped,2,0) {(void*) boxptr_NFBinding_makeUntyped,0}};
#define boxvar_NFBinding_makeUntyped MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_makeUntyped)


DLLDirection
modelica_metatype omc_NFBinding_setSource(threadData_t *threadData, modelica_integer _source, modelica_metatype __omcQ_24in_5Fbinding);
DLLDirection
modelica_metatype boxptr_NFBinding_setSource(threadData_t *threadData, modelica_metatype _source, modelica_metatype __omcQ_24in_5Fbinding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_setSource,2,0) {(void*) boxptr_NFBinding_setSource,0}};
#define boxvar_NFBinding_setSource MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_setSource)


DLLDirection
modelica_integer omc_NFBinding_source(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_source(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_source,2,0) {(void*) boxptr_NFBinding_source,0}};
#define boxvar_NFBinding_source MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_source)


DLLDirection
modelica_metatype omc_NFBinding_unpropagate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _node);
#define boxptr_NFBinding_unpropagate omc_NFBinding_unpropagate
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_unpropagate,2,0) {(void*) boxptr_NFBinding_unpropagate,0}};
#define boxvar_NFBinding_unpropagate MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_unpropagate)


DLLDirection
modelica_metatype omc_NFBinding_propagate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _subs);
#define boxptr_NFBinding_propagate omc_NFBinding_propagate
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_propagate,2,0) {(void*) boxptr_NFBinding_propagate,0}};
#define boxvar_NFBinding_propagate MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_propagate)


DLLDirection
modelica_metatype omc_NFBinding_setAttr(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fty_5Fattr, modelica_string _attr_name, modelica_metatype _attr_value);
#define boxptr_NFBinding_setAttr omc_NFBinding_setAttr
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_setAttr,2,0) {(void*) boxptr_NFBinding_setAttr,0}};
#define boxvar_NFBinding_setAttr MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_setAttr)


DLLDirection
modelica_metatype omc_NFBinding_update(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _exp);
#define boxptr_NFBinding_update omc_NFBinding_update
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_update,2,0) {(void*) boxptr_NFBinding_update,0}};
#define boxvar_NFBinding_update MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_update)


DLLDirection
modelica_boolean omc_NFBinding_containsExp(threadData_t *threadData, modelica_metatype _binding, modelica_fnptr _predFn);
DLLDirection
modelica_metatype boxptr_NFBinding_containsExp(threadData_t *threadData, modelica_metatype _binding, modelica_fnptr _predFn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_containsExp,2,0) {(void*) boxptr_NFBinding_containsExp,0}};
#define boxvar_NFBinding_containsExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_containsExp)


DLLDirection
modelica_metatype omc_NFBinding_foldExp(threadData_t *threadData, modelica_metatype _binding, modelica_fnptr _foldFn, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFBinding_foldExp omc_NFBinding_foldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_foldExp,2,0) {(void*) boxptr_NFBinding_foldExp,0}};
#define boxvar_NFBinding_foldExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_foldExp)


DLLDirection
modelica_metatype omc_NFBinding_mapExpShallow(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_fnptr _mapFn);
#define boxptr_NFBinding_mapExpShallow omc_NFBinding_mapExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_mapExpShallow,2,0) {(void*) boxptr_NFBinding_mapExpShallow,0}};
#define boxvar_NFBinding_mapExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_mapExpShallow)


DLLDirection
modelica_metatype omc_NFBinding_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_fnptr _mapFn);
#define boxptr_NFBinding_mapExp omc_NFBinding_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_mapExp,2,0) {(void*) boxptr_NFBinding_mapExp,0}};
#define boxvar_NFBinding_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_mapExp)


DLLDirection
void omc_NFBinding_applyExpShallow(threadData_t *threadData, modelica_metatype _binding, modelica_fnptr _fn);
#define boxptr_NFBinding_applyExpShallow omc_NFBinding_applyExpShallow
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_applyExpShallow,2,0) {(void*) boxptr_NFBinding_applyExpShallow,0}};
#define boxvar_NFBinding_applyExpShallow MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_applyExpShallow)


DLLDirection
void omc_NFBinding_applyExp(threadData_t *threadData, modelica_metatype _binding, modelica_fnptr _fn);
#define boxptr_NFBinding_applyExp omc_NFBinding_applyExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_applyExp,2,0) {(void*) boxptr_NFBinding_applyExp,0}};
#define boxvar_NFBinding_applyExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_applyExp)


DLLDirection
modelica_metatype omc_NFBinding_toDAEExp(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_toDAEExp omc_NFBinding_toDAEExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_toDAEExp,2,0) {(void*) boxptr_NFBinding_toDAEExp,0}};
#define boxvar_NFBinding_toDAEExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_toDAEExp)


DLLDirection
modelica_metatype omc_NFBinding_makeDAEBinding(threadData_t *threadData, modelica_metatype _exp, modelica_integer _var);
DLLDirection
modelica_metatype boxptr_NFBinding_makeDAEBinding(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_makeDAEBinding,2,0) {(void*) boxptr_NFBinding_makeDAEBinding,0}};
#define boxvar_NFBinding_makeDAEBinding MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_makeDAEBinding)


DLLDirection
modelica_metatype omc_NFBinding_toDAE(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_toDAE omc_NFBinding_toDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_toDAE,2,0) {(void*) boxptr_NFBinding_toDAE,0}};
#define boxvar_NFBinding_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_toDAE)


DLLDirection
modelica_boolean omc_NFBinding_isEqual(threadData_t *threadData, modelica_metatype _binding1, modelica_metatype _binding2);
DLLDirection
modelica_metatype boxptr_NFBinding_isEqual(threadData_t *threadData, modelica_metatype _binding1, modelica_metatype _binding2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isEqual,2,0) {(void*) boxptr_NFBinding_isEqual,0}};
#define boxvar_NFBinding_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isEqual)


DLLDirection
modelica_string omc_NFBinding_toDebugString(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_toDebugString omc_NFBinding_toDebugString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_toDebugString,2,0) {(void*) boxptr_NFBinding_toDebugString,0}};
#define boxvar_NFBinding_toDebugString MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_toDebugString)


DLLDirection
modelica_string omc_NFBinding_toFlatString(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _format, modelica_string _prefix);
#define boxptr_NFBinding_toFlatString omc_NFBinding_toFlatString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_toFlatString,2,0) {(void*) boxptr_NFBinding_toFlatString,0}};
#define boxvar_NFBinding_toFlatString MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_toFlatString)


DLLDirection
modelica_string omc_NFBinding_toString(threadData_t *threadData, modelica_metatype _binding, modelica_string _prefix);
#define boxptr_NFBinding_toString omc_NFBinding_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_toString,2,0) {(void*) boxptr_NFBinding_toString,0}};
#define boxvar_NFBinding_toString MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_toString)


DLLDirection
modelica_boolean omc_NFBinding_isTyped(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isTyped(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isTyped,2,0) {(void*) boxptr_NFBinding_isTyped,0}};
#define boxvar_NFBinding_isTyped MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isTyped)


DLLDirection
modelica_boolean omc_NFBinding_isEach(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isEach(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isEach,2,0) {(void*) boxptr_NFBinding_isEach,0}};
#define boxvar_NFBinding_isEach MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isEach)


DLLDirection
modelica_metatype omc_NFBinding_getType(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_getType omc_NFBinding_getType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_getType,2,0) {(void*) boxptr_NFBinding_getType,0}};
#define boxvar_NFBinding_getType MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_getType)


DLLDirection
modelica_metatype omc_NFBinding_getInfo(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_getInfo omc_NFBinding_getInfo
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_getInfo,2,0) {(void*) boxptr_NFBinding_getInfo,0}};
#define boxvar_NFBinding_getInfo MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_getInfo)


DLLDirection
modelica_integer omc_NFBinding_purity(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_purity(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_purity,2,0) {(void*) boxptr_NFBinding_purity,0}};
#define boxvar_NFBinding_purity MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_purity)


DLLDirection
modelica_metatype omc_NFBinding_setVariability(threadData_t *threadData, modelica_integer _var, modelica_metatype __omcQ_24in_5Fbinding);
DLLDirection
modelica_metatype boxptr_NFBinding_setVariability(threadData_t *threadData, modelica_metatype _var, modelica_metatype __omcQ_24in_5Fbinding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_setVariability,2,0) {(void*) boxptr_NFBinding_setVariability,0}};
#define boxvar_NFBinding_setVariability MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_setVariability)


DLLDirection
modelica_integer omc_NFBinding_variability(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_variability(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_variability,2,0) {(void*) boxptr_NFBinding_variability,0}};
#define boxvar_NFBinding_variability MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_variability)


DLLDirection
modelica_metatype omc_NFBinding_recordFieldBinding(threadData_t *threadData, modelica_metatype _fieldNode, modelica_metatype _recordBinding);
#define boxptr_NFBinding_recordFieldBinding omc_NFBinding_recordFieldBinding
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_recordFieldBinding,2,0) {(void*) boxptr_NFBinding_recordFieldBinding,0}};
#define boxvar_NFBinding_recordFieldBinding MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_recordFieldBinding)


DLLDirection
modelica_boolean omc_NFBinding_isCrefExp(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isCrefExp(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isCrefExp,2,0) {(void*) boxptr_NFBinding_isCrefExp,0}};
#define boxvar_NFBinding_isCrefExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isCrefExp)


DLLDirection
modelica_boolean omc_NFBinding_isRecordExp(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isRecordExp(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isRecordExp,2,0) {(void*) boxptr_NFBinding_isRecordExp,0}};
#define boxvar_NFBinding_isRecordExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isRecordExp)


DLLDirection
modelica_metatype omc_NFBinding_setExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fbinding);
#define boxptr_NFBinding_setExp omc_NFBinding_setExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_setExp,2,0) {(void*) boxptr_NFBinding_setExp,0}};
#define boxvar_NFBinding_setExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_setExp)


DLLDirection
modelica_metatype omc_NFBinding_getExpOpt(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_getExpOpt omc_NFBinding_getExpOpt
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_getExpOpt,2,0) {(void*) boxptr_NFBinding_getExpOpt,0}};
#define boxvar_NFBinding_getExpOpt MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_getExpOpt)


DLLDirection
modelica_metatype omc_NFBinding_getExp(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_getExp omc_NFBinding_getExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_getExp,2,0) {(void*) boxptr_NFBinding_getExp,0}};
#define boxvar_NFBinding_getExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_getExp)


DLLDirection
modelica_boolean omc_NFBinding_hasExp(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_hasExp(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_hasExp,2,0) {(void*) boxptr_NFBinding_hasExp,0}};
#define boxvar_NFBinding_hasExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_hasExp)


DLLDirection
modelica_metatype omc_NFBinding_setTypedExp(threadData_t *threadData, modelica_metatype _exp, modelica_metatype __omcQ_24in_5Fbinding);
#define boxptr_NFBinding_setTypedExp omc_NFBinding_setTypedExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_setTypedExp,2,0) {(void*) boxptr_NFBinding_setTypedExp,0}};
#define boxvar_NFBinding_setTypedExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_setTypedExp)


DLLDirection
modelica_metatype omc_NFBinding_getTypedExp(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_getTypedExp omc_NFBinding_getTypedExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_getTypedExp,2,0) {(void*) boxptr_NFBinding_getTypedExp,0}};
#define boxvar_NFBinding_getTypedExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_getTypedExp)


DLLDirection
modelica_metatype omc_NFBinding_getUntypedExp(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_getUntypedExp omc_NFBinding_getUntypedExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_getUntypedExp,2,0) {(void*) boxptr_NFBinding_getUntypedExp,0}};
#define boxvar_NFBinding_getUntypedExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_getUntypedExp)


DLLDirection
modelica_metatype omc_NFBinding_typedExp(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_NFBinding_typedExp omc_NFBinding_typedExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_typedExp,2,0) {(void*) boxptr_NFBinding_typedExp,0}};
#define boxvar_NFBinding_typedExp MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_typedExp)


DLLDirection
modelica_boolean omc_NFBinding_isInvalid(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isInvalid(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isInvalid,2,0) {(void*) boxptr_NFBinding_isInvalid,0}};
#define boxvar_NFBinding_isInvalid MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isInvalid)


DLLDirection
modelica_boolean omc_NFBinding_isUnbound(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isUnbound(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isUnbound,2,0) {(void*) boxptr_NFBinding_isUnbound,0}};
#define boxvar_NFBinding_isUnbound MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isUnbound)


DLLDirection
modelica_boolean omc_NFBinding_isExplicitlyBound(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isExplicitlyBound(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isExplicitlyBound,2,0) {(void*) boxptr_NFBinding_isExplicitlyBound,0}};
#define boxvar_NFBinding_isExplicitlyBound MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isExplicitlyBound)


DLLDirection
modelica_boolean omc_NFBinding_isBound(threadData_t *threadData, modelica_metatype _binding);
DLLDirection
modelica_metatype boxptr_NFBinding_isBound(threadData_t *threadData, modelica_metatype _binding);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_isBound,2,0) {(void*) boxptr_NFBinding_isBound,0}};
#define boxvar_NFBinding_isBound MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_isBound)


DLLDirection
modelica_metatype omc_NFBinding_fromAbsyn(threadData_t *threadData, modelica_metatype _bindingExp, modelica_boolean _eachPrefix, modelica_boolean _fromType, modelica_metatype _scope, modelica_integer _instanceLevel, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFBinding_fromAbsyn(threadData_t *threadData, modelica_metatype _bindingExp, modelica_metatype _eachPrefix, modelica_metatype _fromType, modelica_metatype _scope, modelica_metatype _instanceLevel, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBinding_fromAbsyn,2,0) {(void*) boxptr_NFBinding_fromAbsyn,0}};
#define boxvar_NFBinding_fromAbsyn MMC_REFSTRUCTLIT(boxvar_lit_NFBinding_fromAbsyn)

#ifdef __cplusplus
}
#endif
#endif
