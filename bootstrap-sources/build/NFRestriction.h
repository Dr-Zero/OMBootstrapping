#ifndef NFRestriction__H
#define NFRestriction__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ClassInf_State_BLOCK__desc;

extern struct record_description ClassInf_State_CONNECTOR__desc;

extern struct record_description ClassInf_State_ENUMERATION__desc;

extern struct record_description ClassInf_State_EXTERNAL__OBJ__desc;

extern struct record_description ClassInf_State_FUNCTION__desc;

extern struct record_description ClassInf_State_MODEL__desc;

extern struct record_description ClassInf_State_PACKAGE__desc;

extern struct record_description ClassInf_State_RECORD__desc;

extern struct record_description ClassInf_State_TYPE__desc;

extern struct record_description ClassInf_State_TYPE__CLOCK__desc;

extern struct record_description ClassInf_State_UNKNOWN__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description NFRestriction_BLOCK__desc;

extern struct record_description NFRestriction_CLASS__desc;

extern struct record_description NFRestriction_CLOCK__desc;

extern struct record_description NFRestriction_CONNECTOR__desc;

extern struct record_description NFRestriction_ENUMERATION__desc;

extern struct record_description NFRestriction_FUNCTION__desc;

extern struct record_description NFRestriction_MODEL__desc;

extern struct record_description NFRestriction_OPERATOR__desc;

extern struct record_description NFRestriction_PACKAGE__desc;

extern struct record_description NFRestriction_RECORD__desc;

extern struct record_description NFRestriction_TYPE__desc;


DLLDirection
void omc_NFRestriction_checkClass(threadData_t *threadData, modelica_metatype _node, modelica_metatype _restriction, modelica_integer _context);
DLLDirection
void boxptr_NFRestriction_checkClass(threadData_t *threadData, modelica_metatype _node, modelica_metatype _restriction, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_checkClass,2,0) {(void*) boxptr_NFRestriction_checkClass,0}};
#define boxvar_NFRestriction_checkClass MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_checkClass)


DLLDirection
void omc_NFRestriction_assertOnlyFunctions(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _res);
#define boxptr_NFRestriction_assertOnlyFunctions omc_NFRestriction_assertOnlyFunctions
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_assertOnlyFunctions,2,0) {(void*) boxptr_NFRestriction_assertOnlyFunctions,0}};
#define boxvar_NFRestriction_assertOnlyFunctions MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_assertOnlyFunctions)


DLLDirection
void omc_NFRestriction_assertOnlyConstantComponents(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _clsNode);
#define boxptr_NFRestriction_assertOnlyConstantComponents omc_NFRestriction_assertOnlyConstantComponents
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_assertOnlyConstantComponents,2,0) {(void*) boxptr_NFRestriction_assertOnlyConstantComponents,0}};
#define boxvar_NFRestriction_assertOnlyConstantComponents MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_assertOnlyConstantComponents)


DLLDirection
void omc_NFRestriction_assertNoComponents(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _res);
#define boxptr_NFRestriction_assertNoComponents omc_NFRestriction_assertNoComponents
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoComponents,2,0) {(void*) boxptr_NFRestriction_assertNoComponents,0}};
#define boxvar_NFRestriction_assertNoComponents MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoComponents)


DLLDirection
void omc_NFRestriction_assertNoProtected(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _res);
#define boxptr_NFRestriction_assertNoProtected omc_NFRestriction_assertNoProtected
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoProtected,2,0) {(void*) boxptr_NFRestriction_assertNoProtected,0}};
#define boxvar_NFRestriction_assertNoProtected MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoProtected)


DLLDirection
void omc_NFRestriction_assertNoInitialAlgorithms(threadData_t *threadData, modelica_metatype _algs, modelica_metatype _res);
#define boxptr_NFRestriction_assertNoInitialAlgorithms omc_NFRestriction_assertNoInitialAlgorithms
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoInitialAlgorithms,2,0) {(void*) boxptr_NFRestriction_assertNoInitialAlgorithms,0}};
#define boxvar_NFRestriction_assertNoInitialAlgorithms MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoInitialAlgorithms)


DLLDirection
void omc_NFRestriction_assertNoAlgorithms(threadData_t *threadData, modelica_metatype _algorithms, modelica_metatype _initialAlgorithms, modelica_metatype _res, modelica_boolean _onlyDeprecated);
DLLDirection
void boxptr_NFRestriction_assertNoAlgorithms(threadData_t *threadData, modelica_metatype _algorithms, modelica_metatype _initialAlgorithms, modelica_metatype _res, modelica_metatype _onlyDeprecated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoAlgorithms,2,0) {(void*) boxptr_NFRestriction_assertNoAlgorithms,0}};
#define boxvar_NFRestriction_assertNoAlgorithms MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoAlgorithms)


DLLDirection
void omc_NFRestriction_assertNoEquations(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype _res, modelica_boolean _onlyDeprecated);
DLLDirection
void boxptr_NFRestriction_assertNoEquations(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype _res, modelica_metatype _onlyDeprecated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoEquations,2,0) {(void*) boxptr_NFRestriction_assertNoEquations,0}};
#define boxvar_NFRestriction_assertNoEquations MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_assertNoEquations)


DLLDirection
modelica_string omc_NFRestriction_toString(threadData_t *threadData, modelica_metatype _res);
#define boxptr_NFRestriction_toString omc_NFRestriction_toString
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_toString,2,0) {(void*) boxptr_NFRestriction_toString,0}};
#define boxvar_NFRestriction_toString MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_toString)


DLLDirection
modelica_boolean omc_NFRestriction_isModel(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isModel(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isModel,2,0) {(void*) boxptr_NFRestriction_isModel,0}};
#define boxvar_NFRestriction_isModel MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isModel)


DLLDirection
modelica_boolean omc_NFRestriction_isClock(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isClock(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isClock,2,0) {(void*) boxptr_NFRestriction_isClock,0}};
#define boxvar_NFRestriction_isClock MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isClock)


DLLDirection
modelica_boolean omc_NFRestriction_isType(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isType(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isType,2,0) {(void*) boxptr_NFRestriction_isType,0}};
#define boxvar_NFRestriction_isType MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isType)


DLLDirection
modelica_boolean omc_NFRestriction_isOperator(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isOperator(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isOperator,2,0) {(void*) boxptr_NFRestriction_isOperator,0}};
#define boxvar_NFRestriction_isOperator MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isOperator)


DLLDirection
modelica_boolean omc_NFRestriction_isOperatorRecord(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isOperatorRecord(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isOperatorRecord,2,0) {(void*) boxptr_NFRestriction_isOperatorRecord,0}};
#define boxvar_NFRestriction_isOperatorRecord MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isOperatorRecord)


DLLDirection
modelica_metatype omc_NFRestriction_setExternalRecord(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fres);
#define boxptr_NFRestriction_setExternalRecord omc_NFRestriction_setExternalRecord
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_setExternalRecord,2,0) {(void*) boxptr_NFRestriction_setExternalRecord,0}};
#define boxvar_NFRestriction_setExternalRecord MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_setExternalRecord)


DLLDirection
modelica_boolean omc_NFRestriction_isExternalRecord(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isExternalRecord(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isExternalRecord,2,0) {(void*) boxptr_NFRestriction_isExternalRecord,0}};
#define boxvar_NFRestriction_isExternalRecord MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isExternalRecord)


DLLDirection
modelica_boolean omc_NFRestriction_isRecord(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isRecord(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isRecord,2,0) {(void*) boxptr_NFRestriction_isRecord,0}};
#define boxvar_NFRestriction_isRecord MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isRecord)


DLLDirection
modelica_boolean omc_NFRestriction_isRecordConstructor(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isRecordConstructor(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isRecordConstructor,2,0) {(void*) boxptr_NFRestriction_isRecordConstructor,0}};
#define boxvar_NFRestriction_isRecordConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isRecordConstructor)


DLLDirection
modelica_boolean omc_NFRestriction_isFunction(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isFunction(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isFunction,2,0) {(void*) boxptr_NFRestriction_isFunction,0}};
#define boxvar_NFRestriction_isFunction MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isFunction)


DLLDirection
modelica_boolean omc_NFRestriction_isExternalObject(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isExternalObject(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isExternalObject,2,0) {(void*) boxptr_NFRestriction_isExternalObject,0}};
#define boxvar_NFRestriction_isExternalObject MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isExternalObject)


DLLDirection
modelica_boolean omc_NFRestriction_isNonexpandableConnector(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isNonexpandableConnector(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isNonexpandableConnector,2,0) {(void*) boxptr_NFRestriction_isNonexpandableConnector,0}};
#define boxvar_NFRestriction_isNonexpandableConnector MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isNonexpandableConnector)


DLLDirection
modelica_boolean omc_NFRestriction_isExpandableConnector(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isExpandableConnector(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isExpandableConnector,2,0) {(void*) boxptr_NFRestriction_isExpandableConnector,0}};
#define boxvar_NFRestriction_isExpandableConnector MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isExpandableConnector)


DLLDirection
modelica_boolean omc_NFRestriction_isConnector(threadData_t *threadData, modelica_metatype _res);
DLLDirection
modelica_metatype boxptr_NFRestriction_isConnector(threadData_t *threadData, modelica_metatype _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_isConnector,2,0) {(void*) boxptr_NFRestriction_isConnector,0}};
#define boxvar_NFRestriction_isConnector MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_isConnector)


DLLDirection
modelica_metatype omc_NFRestriction_toDAE(threadData_t *threadData, modelica_metatype _res, modelica_metatype _path);
#define boxptr_NFRestriction_toDAE omc_NFRestriction_toDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_toDAE,2,0) {(void*) boxptr_NFRestriction_toDAE,0}};
#define boxvar_NFRestriction_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_toDAE)


DLLDirection
modelica_metatype omc_NFRestriction_fromSCode(threadData_t *threadData, modelica_metatype _sres);
#define boxptr_NFRestriction_fromSCode omc_NFRestriction_fromSCode
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFRestriction_fromSCode,2,0) {(void*) boxptr_NFRestriction_fromSCode,0}};
#define boxvar_NFRestriction_fromSCode MMC_REFSTRUCTLIT(boxvar_lit_NFRestriction_fromSCode)

#ifdef __cplusplus
}
#endif
#endif
