#ifndef NFRecord__H
#define NFRecord__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc;

extern struct record_description DAE_FunctionBuiltin_FUNCTION__NOT__BUILTIN__desc;

extern struct record_description DAE_FunctionParallelism_FP__NON__PARALLEL__desc;

extern struct record_description DAE_InlineType_DEFAULT__INLINE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description NFAttributes_ATTRIBUTES__desc;

extern struct record_description NFBinding_UNBOUND__desc;

extern struct record_description NFClass_NOT__INSTANTIATED__desc;

extern struct record_description NFComplexType_CLASS__desc;

extern struct record_description NFComponent_COMPONENT__desc;

extern struct record_description NFFunction_Function_FUNCTION__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description NFModifier_Modifier_NOMOD__desc;

extern struct record_description NFPrefixes_Replaceable_NOT__REPLACEABLE__desc;

extern struct record_description NFRecord_Field_INPUT__desc;

extern struct record_description NFRecord_Field_LOCAL__desc;

extern struct record_description NFSections_EMPTY__desc;

extern struct record_description NFType_COMPLEX__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description NFType_UNTYPED__desc;

extern struct record_description SCode_Comment_COMMENT__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFRecord_toFlatDeclarationStream(threadData_t *threadData, modelica_metatype _recordNode, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFRecord_toFlatDeclarationStream omc_NFRecord_toFlatDeclarationStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_toFlatDeclarationStream,2,0) {(void*) boxptr_NFRecord_toFlatDeclarationStream,0}};
#define boxvar_NFRecord_toFlatDeclarationStream MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_toFlatDeclarationStream)


DLLDirection
modelica_metatype omc_NFRecord_foldInputFields(threadData_t *threadData, modelica_metatype _fields, modelica_metatype _args, modelica_fnptr _func, modelica_metatype __omcQ_24in_5FfoldArg);
#define boxptr_NFRecord_foldInputFields omc_NFRecord_foldInputFields
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_foldInputFields,2,0) {(void*) boxptr_NFRecord_foldInputFields,0}};
#define boxvar_NFRecord_foldInputFields MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_foldInputFields)


DLLDirection
modelica_metatype omc_NFRecord_fieldsToDAE(threadData_t *threadData, modelica_metatype _fields);
#define boxptr_NFRecord_fieldsToDAE omc_NFRecord_fieldsToDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_fieldsToDAE,2,0) {(void*) boxptr_NFRecord_fieldsToDAE,0}};
#define boxvar_NFRecord_fieldsToDAE MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_fieldsToDAE)


DLLDirection
modelica_metatype omc_NFRecord_collectRecordField(threadData_t *threadData, modelica_metatype _component, modelica_metatype __omcQ_24in_5Ffields);
#define boxptr_NFRecord_collectRecordField omc_NFRecord_collectRecordField
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_collectRecordField,2,0) {(void*) boxptr_NFRecord_collectRecordField,0}};
#define boxvar_NFRecord_collectRecordField MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_collectRecordField)


DLLDirection
modelica_metatype omc_NFRecord_collectRecordFields(threadData_t *threadData, modelica_metatype _recNode, modelica_metatype *out_indexMap);
#define boxptr_NFRecord_collectRecordFields omc_NFRecord_collectRecordFields
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_collectRecordFields,2,0) {(void*) boxptr_NFRecord_collectRecordFields,0}};
#define boxvar_NFRecord_collectRecordFields MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_collectRecordFields)


DLLDirection
void omc_NFRecord_setFieldDirection(threadData_t *threadData, modelica_metatype _field, modelica_integer _direction);
DLLDirection
void boxptr_NFRecord_setFieldDirection(threadData_t *threadData, modelica_metatype _field, modelica_metatype _direction);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_setFieldDirection,2,0) {(void*) boxptr_NFRecord_setFieldDirection,0}};
#define boxvar_NFRecord_setFieldDirection MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_setFieldDirection)


DLLDirection
modelica_metatype omc_NFRecord_collectRecordParam(threadData_t *threadData, modelica_metatype _component, modelica_metatype __omcQ_24in_5Finputs, modelica_metatype __omcQ_24in_5Flocals, modelica_metatype *out_locals);
#define boxptr_NFRecord_collectRecordParam omc_NFRecord_collectRecordParam
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_collectRecordParam,2,0) {(void*) boxptr_NFRecord_collectRecordParam,0}};
#define boxvar_NFRecord_collectRecordParam MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_collectRecordParam)


DLLDirection
modelica_metatype omc_NFRecord_collectRecordParams(threadData_t *threadData, modelica_metatype _recNode, modelica_metatype *out_locals, modelica_metatype *out_allParams);
#define boxptr_NFRecord_collectRecordParams omc_NFRecord_collectRecordParams
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_collectRecordParams,2,0) {(void*) boxptr_NFRecord_collectRecordParams,0}};
#define boxvar_NFRecord_collectRecordParams MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_collectRecordParams)


DLLDirection
void omc_NFRecord_checkLocalFieldOrder(threadData_t *threadData, modelica_metatype _locals, modelica_metatype _recNode, modelica_metatype _info);
#define boxptr_NFRecord_checkLocalFieldOrder omc_NFRecord_checkLocalFieldOrder
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_checkLocalFieldOrder,2,0) {(void*) boxptr_NFRecord_checkLocalFieldOrder,0}};
#define boxvar_NFRecord_checkLocalFieldOrder MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_checkLocalFieldOrder)


DLLDirection
modelica_metatype omc_NFRecord_instDefaultConstructor(threadData_t *threadData, modelica_metatype _path, modelica_metatype __omcQ_24in_5Fnode, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFRecord_instDefaultConstructor(threadData_t *threadData, modelica_metatype _path, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_instDefaultConstructor,2,0) {(void*) boxptr_NFRecord_instDefaultConstructor,0}};
#define boxvar_NFRecord_instDefaultConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_instDefaultConstructor)


DLLDirection
modelica_metatype omc_NFRecord_instRecord(threadData_t *threadData, modelica_metatype _node, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFRecord_instRecord(threadData_t *threadData, modelica_metatype _node, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_instRecord,2,0) {(void*) boxptr_NFRecord_instRecord,0}};
#define boxvar_NFRecord_instRecord MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_instRecord)


DLLDirection
modelica_string omc_NFRecord_Field_name(threadData_t *threadData, modelica_metatype _field);
#define boxptr_NFRecord_Field_name omc_NFRecord_Field_name
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_Field_name,2,0) {(void*) boxptr_NFRecord_Field_name,0}};
#define boxvar_NFRecord_Field_name MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_Field_name)


DLLDirection
modelica_boolean omc_NFRecord_Field_isInput(threadData_t *threadData, modelica_metatype _field);
DLLDirection
modelica_metatype boxptr_NFRecord_Field_isInput(threadData_t *threadData, modelica_metatype _field);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRecord_Field_isInput,2,0) {(void*) boxptr_NFRecord_Field_isInput,0}};
#define boxvar_NFRecord_Field_isInput MMC_REFSTRUCTLIT(boxvar_lit_NFRecord_Field_isInput)

#ifdef __cplusplus
}
#endif
#endif
