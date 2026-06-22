#ifndef NFInline__H
#define NFInline__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_ComponentPrefix_NOCOMPPRE__desc;

extern struct record_description DAE_ElementSource_SOURCE__desc;

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_BOOL__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description NFExpression_CALL__desc;

extern struct record_description NFExpression_IF__desc;

extern struct record_description NFStatement_ASSIGNMENT__desc;

extern struct record_description NFStatement_FAILURE__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NFInline_getOutputExp omc_NFInline_getOutputExp


#define boxptr_NFInline_makeOutputStatement omc_NFInline_makeOutputStatement


#define boxptr_NFInline_convertIfToAssignment omc_NFInline_convertIfToAssignment


#define boxptr_NFInline_convertToAssignment omc_NFInline_convertToAssignment


#define boxptr_NFInline_removeDeadCode omc_NFInline_removeDeadCode


#define boxptr_NFInline_replaceDimExp omc_NFInline_replaceDimExp


#define boxptr_NFInline_replaceCrefNode2 omc_NFInline_replaceCrefNode2


#define boxptr_NFInline_replaceCrefNode omc_NFInline_replaceCrefNode


DLLDirection
modelica_metatype omc_NFInline_inlineCall(threadData_t *threadData, modelica_metatype _callExp, modelica_boolean _forceInline);
DLLDirection
modelica_metatype boxptr_NFInline_inlineCall(threadData_t *threadData, modelica_metatype _callExp, modelica_metatype _forceInline);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_inlineCall,2,0) {(void*) boxptr_NFInline_inlineCall,0}};
#define boxvar_NFInline_inlineCall MMC_REFSTRUCTLIT(boxvar_lit_NFInline_inlineCall)


DLLDirection
modelica_metatype omc_NFInline_inlineCallExp(threadData_t *threadData, modelica_metatype _callExp, modelica_boolean _forceInline);
DLLDirection
modelica_metatype boxptr_NFInline_inlineCallExp(threadData_t *threadData, modelica_metatype _callExp, modelica_metatype _forceInline);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInline_inlineCallExp,2,0) {(void*) boxptr_NFInline_inlineCallExp,0}};
#define boxvar_NFInline_inlineCallExp MMC_REFSTRUCTLIT(boxvar_lit_NFInline_inlineCallExp)

#ifdef __cplusplus
}
#endif
#endif
