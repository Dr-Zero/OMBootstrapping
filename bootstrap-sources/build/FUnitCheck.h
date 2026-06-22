#ifndef FUnitCheck__H
#define FUnitCheck__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;

extern struct record_description DAE_DAElist_DAE__desc;

extern struct record_description DAE_Element_COMP__desc;

extern struct record_description DAE_Element_EQUATION__desc;

extern struct record_description DAE_Exp_BINARY__desc;

extern struct record_description DAE_Exp_CREF__desc;

extern struct record_description DAE_Exp_SCONST__desc;

extern struct record_description DAE_Operator_SUB__desc;

extern struct record_description DAE_Type_T__REAL__desc;

extern struct record_description DAE_Type_T__UNKNOWN__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description FUnit_Unit_MASTER__desc;

extern struct record_description FUnit_Unit_UNIT__desc;

extern struct record_description FUnit_Unit_UNKNOWN__desc;

extern struct record_description FUnitCheck_Functionargs_FUNCTIONUNITS__desc;

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_BOOL__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description Flags_FlagVisibility_INTERNAL__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_FUnitCheck_parse omc_FUnitCheck_parse


DLLDirection
modelica_string omc_FUnitCheck_getStringFromExp(threadData_t *threadData, modelica_metatype _binding);
#define boxptr_FUnitCheck_getStringFromExp omc_FUnitCheck_getStringFromExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnitCheck_getStringFromExp,2,0) {(void*) boxptr_FUnitCheck_getStringFromExp,0}};
#define boxvar_FUnitCheck_getStringFromExp MMC_REFSTRUCTLIT(boxvar_lit_FUnitCheck_getStringFromExp)


#define boxptr_FUnitCheck_parseVarList omc_FUnitCheck_parseVarList


#define boxptr_FUnitCheck_convertUnitString2unit omc_FUnitCheck_convertUnitString2unit


#define boxptr_FUnitCheck_convertUnitString2unit__old omc_FUnitCheck_convertUnitString2unit__old


#define boxptr_FUnitCheck_addUnit2HtU2S omc_FUnitCheck_addUnit2HtU2S


#define boxptr_FUnitCheck_addUnit2HtS2U omc_FUnitCheck_addUnit2HtS2U


#define boxptr_FUnitCheck_foldCallArg1 omc_FUnitCheck_foldCallArg1


#define boxptr_FUnitCheck_foldCallArg omc_FUnitCheck_foldCallArg


DLLDirection
modelica_metatype omc_FUnitCheck_GetElementList(threadData_t *threadData, modelica_metatype _eqlist);
#define boxptr_FUnitCheck_GetElementList omc_FUnitCheck_GetElementList
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnitCheck_GetElementList,2,0) {(void*) boxptr_FUnitCheck_GetElementList,0}};
#define boxvar_FUnitCheck_GetElementList MMC_REFSTRUCTLIT(boxvar_lit_FUnitCheck_GetElementList)


DLLDirection
modelica_metatype omc_FUnitCheck_GetVarList(threadData_t *threadData, modelica_metatype _indaelist);
#define boxptr_FUnitCheck_GetVarList omc_FUnitCheck_GetVarList
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnitCheck_GetVarList,2,0) {(void*) boxptr_FUnitCheck_GetVarList,0}};
#define boxvar_FUnitCheck_GetVarList MMC_REFSTRUCTLIT(boxvar_lit_FUnitCheck_GetVarList)


#define boxptr_FUnitCheck_Errorfunction2 omc_FUnitCheck_Errorfunction2


#define boxptr_FUnitCheck_getSourceInfo omc_FUnitCheck_getSourceInfo


#define boxptr_FUnitCheck_Errorfunction omc_FUnitCheck_Errorfunction


#define boxptr_FUnitCheck_updateHtCr2U omc_FUnitCheck_updateHtCr2U


#define boxptr_FUnitCheck_getNamedUnitlist omc_FUnitCheck_getNamedUnitlist


#define boxptr_FUnitCheck_insertUnitInEquation omc_FUnitCheck_insertUnitInEquation


#define boxptr_FUnitCheck_makenewcref omc_FUnitCheck_makenewcref


#define boxptr_FUnitCheck_foldEquation2 omc_FUnitCheck_foldEquation2


#define boxptr_FUnitCheck_foldEquation omc_FUnitCheck_foldEquation


#define boxptr_FUnitCheck_foldBindingExp omc_FUnitCheck_foldBindingExp


DLLDirection
modelica_metatype omc_FUnitCheck_algo(threadData_t *threadData, modelica_metatype _invarlist, modelica_metatype _ineqList, modelica_metatype _inargs, modelica_metatype _inHtCr2U, modelica_metatype _inHtS2U, modelica_metatype _inHtU2S);
#define boxptr_FUnitCheck_algo omc_FUnitCheck_algo
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnitCheck_algo,2,0) {(void*) boxptr_FUnitCheck_algo,0}};
#define boxvar_FUnitCheck_algo MMC_REFSTRUCTLIT(boxvar_lit_FUnitCheck_algo)


#define boxptr_FUnitCheck_notification2 omc_FUnitCheck_notification2


#define boxptr_FUnitCheck_notification omc_FUnitCheck_notification


#define boxptr_FUnitCheck_returnVar omc_FUnitCheck_returnVar


#define boxptr_FUnitCheck_updateDAElist omc_FUnitCheck_updateDAElist


DLLDirection
modelica_string omc_FUnitCheck_getUnits(threadData_t *threadData, modelica_metatype _inElement);
#define boxptr_FUnitCheck_getUnits omc_FUnitCheck_getUnits
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnitCheck_getUnits,2,0) {(void*) boxptr_FUnitCheck_getUnits,0}};
#define boxvar_FUnitCheck_getUnits MMC_REFSTRUCTLIT(boxvar_lit_FUnitCheck_getUnits)


DLLDirection
modelica_string omc_FUnitCheck_getVars(threadData_t *threadData, modelica_metatype _inElement);
#define boxptr_FUnitCheck_getVars omc_FUnitCheck_getVars
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnitCheck_getVars,2,0) {(void*) boxptr_FUnitCheck_getVars,0}};
#define boxvar_FUnitCheck_getVars MMC_REFSTRUCTLIT(boxvar_lit_FUnitCheck_getVars)


DLLDirection
modelica_string omc_FUnitCheck_getFunctionName(threadData_t *threadData, modelica_metatype _inFunction);
#define boxptr_FUnitCheck_getFunctionName omc_FUnitCheck_getFunctionName
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnitCheck_getFunctionName,2,0) {(void*) boxptr_FUnitCheck_getFunctionName,0}};
#define boxvar_FUnitCheck_getFunctionName MMC_REFSTRUCTLIT(boxvar_lit_FUnitCheck_getFunctionName)


#define boxptr_FUnitCheck_parseFunctionList omc_FUnitCheck_parseFunctionList


DLLDirection
modelica_metatype omc_FUnitCheck_checkUnits(threadData_t *threadData, modelica_metatype _inDAE, modelica_metatype _func);
#define boxptr_FUnitCheck_checkUnits omc_FUnitCheck_checkUnits
static const MMC_DEFSTRUCTLIT(boxvar_lit_FUnitCheck_checkUnits,2,0) {(void*) boxptr_FUnitCheck_checkUnits,0}};
#define boxvar_FUnitCheck_checkUnits MMC_REFSTRUCTLIT(boxvar_lit_FUnitCheck_checkUnits)

#ifdef __cplusplus
}
#endif
#endif
