#ifndef CodegenWasmJit__H
#define CodegenWasmJit__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif



DLLDirection
void omc_CodegenWasmJit_finishCompile(threadData_t *threadData, modelica_string _fileNamePrefix);
#define boxptr_CodegenWasmJit_finishCompile omc_CodegenWasmJit_finishCompile
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_finishCompile,2,0) {(void*) boxptr_CodegenWasmJit_finishCompile,0}};
#define boxvar_CodegenWasmJit_finishCompile MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_finishCompile)


DLLDirection
modelica_integer omc_CodegenWasmJit_runSimulation(threadData_t *threadData, modelica_string _fileNamePrefix, modelica_string _resultFile, modelica_string _simflags);
DLLDirection
modelica_metatype boxptr_CodegenWasmJit_runSimulation(threadData_t *threadData, modelica_metatype _fileNamePrefix, modelica_metatype _resultFile, modelica_metatype _simflags);
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_runSimulation,2,0) {(void*) boxptr_CodegenWasmJit_runSimulation,0}};
#define boxvar_CodegenWasmJit_runSimulation MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_runSimulation)


DLLDirection
void omc_CodegenWasmJit_translateModel(threadData_t *threadData, modelica_metatype _simCode);
#define boxptr_CodegenWasmJit_translateModel omc_CodegenWasmJit_translateModel
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenWasmJit_translateModel,2,0) {(void*) boxptr_CodegenWasmJit_translateModel,0}};
#define boxvar_CodegenWasmJit_translateModel MMC_REFSTRUCTLIT(boxvar_lit_CodegenWasmJit_translateModel)

#ifdef __cplusplus
}
#endif
#endif
