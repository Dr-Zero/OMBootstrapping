#ifndef NBInline__H
#define NBInline__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_InlineType_AFTER__INDEX__RED__INLINE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description NBEquation_Equation_DUMMY__EQUATION__desc;

extern struct record_description NBEquation_Iterator_EMPTY__desc;

extern struct record_description NBSlice_SLICE__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_MULTARY__desc;

extern struct record_description NFSubscript_INDEX__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NBInline_getElementList omc_NBInline_getElementList


#define boxptr_NBInline_inlineRecordConstructorElements omc_NBInline_inlineRecordConstructorElements


#define boxptr_NBInline_createInlinedEquation omc_NBInline_createInlinedEquation


#define boxptr_NBInline_inlineCatCall omc_NBInline_inlineCatCall


#define boxptr_NBInline_inlinePromoteCall omc_NBInline_inlinePromoteCall


#define boxptr_NBInline_inlineArrayConstructor omc_NBInline_inlineArrayConstructor


#define boxptr_NBInline_inlineArrayEquation omc_NBInline_inlineArrayEquation


#define boxptr_NBInline_inlineTupleEquation omc_NBInline_inlineTupleEquation


DLLDirection
modelica_metatype omc_NBInline_inlineRecordTupleArrayEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple);
DLLDirection
modelica_metatype boxptr_NBInline_inlineRecordTupleArrayEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _new_eqns, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordTupleArrayEquation,2,0) {(void*) boxptr_NBInline_inlineRecordTupleArrayEquation,0}};
#define boxvar_NBInline_inlineRecordTupleArrayEquation MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordTupleArrayEquation)


DLLDirection
modelica_metatype omc_NBInline_inlineArrayIterator(threadData_t *threadData, modelica_metatype _iter, modelica_metatype _set);
#define boxptr_NBInline_inlineArrayIterator omc_NBInline_inlineArrayIterator
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineArrayIterator,2,0) {(void*) boxptr_NBInline_inlineArrayIterator,0}};
#define boxvar_NBInline_inlineArrayIterator MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineArrayIterator)


DLLDirection
modelica_metatype omc_NBInline_inlineArrayConstructorSingle(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_metatype _new_eqns, modelica_boolean *out_changed);
DLLDirection
modelica_metatype boxptr_NBInline_inlineArrayConstructorSingle(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn, modelica_metatype _iter, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_metatype _new_eqns, modelica_metatype *out_changed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineArrayConstructorSingle,2,0) {(void*) boxptr_NBInline_inlineArrayConstructorSingle,0}};
#define boxvar_NBInline_inlineArrayConstructorSingle MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineArrayConstructorSingle)


DLLDirection
modelica_metatype omc_NBInline_inlineRecordSliceEquation(threadData_t *threadData, modelica_metatype _slice, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_boolean _inlineSimple);
DLLDirection
modelica_metatype boxptr_NBInline_inlineRecordSliceEquation(threadData_t *threadData, modelica_metatype _slice, modelica_metatype _variables, modelica_metatype _set, modelica_metatype _index, modelica_metatype _inlineSimple);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordSliceEquation,2,0) {(void*) boxptr_NBInline_inlineRecordSliceEquation,0}};
#define boxvar_NBInline_inlineRecordSliceEquation MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineRecordSliceEquation)


DLLDirection
modelica_boolean omc_NBInline_functionInlineable(threadData_t *threadData, modelica_metatype _fn);
DLLDirection
modelica_metatype boxptr_NBInline_functionInlineable(threadData_t *threadData, modelica_metatype _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_functionInlineable,2,0) {(void*) boxptr_NBInline_functionInlineable,0}};
#define boxvar_NBInline_functionInlineable MMC_REFSTRUCTLIT(boxvar_lit_NBInline_functionInlineable)


DLLDirection
modelica_metatype omc_NBInline_inlineForEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn);
#define boxptr_NBInline_inlineForEquation omc_NBInline_inlineForEquation
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_inlineForEquation,2,0) {(void*) boxptr_NBInline_inlineForEquation,0}};
#define boxvar_NBInline_inlineForEquation MMC_REFSTRUCTLIT(boxvar_lit_NBInline_inlineForEquation)


DLLDirection
modelica_metatype omc_NBInline_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _inline_types, modelica_boolean _init);
DLLDirection
modelica_metatype boxptr_NBInline_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _inline_types, modelica_metatype _init);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBInline_main,2,0) {(void*) boxptr_NBInline_main,0}};
#define boxvar_NBInline_main MMC_REFSTRUCTLIT(boxvar_lit_NBInline_main)

#ifdef __cplusplus
}
#endif
#endif
