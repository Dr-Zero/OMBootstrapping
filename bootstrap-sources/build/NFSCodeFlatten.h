#ifndef NFSCodeFlatten__H
#define NFSCodeFlatten__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_Path_IDENT__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;


DLLDirection
modelica_metatype omc_NFSCodeFlatten_flattenCompleteProgram(threadData_t *threadData, modelica_metatype _inProgram);
#define boxptr_NFSCodeFlatten_flattenCompleteProgram omc_NFSCodeFlatten_flattenCompleteProgram
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_flattenCompleteProgram,2,0) {(void*) boxptr_NFSCodeFlatten_flattenCompleteProgram,0}};
#define boxvar_NFSCodeFlatten_flattenCompleteProgram MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_flattenCompleteProgram)


DLLDirection
modelica_metatype omc_NFSCodeFlatten_flattenClassInProgram(threadData_t *threadData, modelica_metatype _inClassName, modelica_metatype _inProgram, modelica_metatype *out_outEnv);
#define boxptr_NFSCodeFlatten_flattenClassInProgram omc_NFSCodeFlatten_flattenClassInProgram
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_flattenClassInProgram,2,0) {(void*) boxptr_NFSCodeFlatten_flattenClassInProgram,0}};
#define boxvar_NFSCodeFlatten_flattenClassInProgram MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_flattenClassInProgram)


DLLDirection
modelica_metatype omc_NFSCodeFlatten_flattenClass(threadData_t *threadData, modelica_metatype _inClass);
#define boxptr_NFSCodeFlatten_flattenClass omc_NFSCodeFlatten_flattenClass
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_flattenClass,2,0) {(void*) boxptr_NFSCodeFlatten_flattenClass,0}};
#define boxvar_NFSCodeFlatten_flattenClass MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_flattenClass)


#define boxptr_NFSCodeFlatten_getLastClassNameInProgram omc_NFSCodeFlatten_getLastClassNameInProgram


DLLDirection
modelica_metatype omc_NFSCodeFlatten_flattenProgram(threadData_t *threadData, modelica_metatype _inProgram);
#define boxptr_NFSCodeFlatten_flattenProgram omc_NFSCodeFlatten_flattenProgram
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_flattenProgram,2,0) {(void*) boxptr_NFSCodeFlatten_flattenProgram,0}};
#define boxvar_NFSCodeFlatten_flattenProgram MMC_REFSTRUCTLIT(boxvar_lit_NFSCodeFlatten_flattenProgram)

#ifdef __cplusplus
}
#endif
#endif
