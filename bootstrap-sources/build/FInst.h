#ifndef FInst__H
#define FInst__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_DAElist_DAE__desc;

extern struct record_description FCore_Kind_USERDEFINED__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;


#define boxptr_FInst_doSCodeDep omc_FInst_doSCodeDep


DLLDirection
modelica_metatype omc_FInst_instPath(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inProgram);
#define boxptr_FInst_instPath omc_FInst_instPath
static const MMC_DEFSTRUCTLIT(boxvar_lit_FInst_instPath,2,0) {(void*) boxptr_FInst_instPath,0}};
#define boxvar_FInst_instPath MMC_REFSTRUCTLIT(boxvar_lit_FInst_instPath)


DLLDirection
modelica_metatype omc_FInst_inst(threadData_t *threadData, modelica_metatype _inPath, modelica_metatype _inProgram);
#define boxptr_FInst_inst omc_FInst_inst
static const MMC_DEFSTRUCTLIT(boxvar_lit_FInst_inst,2,0) {(void*) boxptr_FInst_inst,0}};
#define boxvar_FInst_inst MMC_REFSTRUCTLIT(boxvar_lit_FInst_inst)

#ifdef __cplusplus
}
#endif
#endif
