#ifndef CodegenFMUCppHpcomOMSI__H
#define CodegenFMUCppHpcomOMSI__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_STRING__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description SimCodeFunction_Context_OTHER__CONTEXT__desc;

extern struct record_description Tpl_StringToken_ST__STRING__desc;

extern struct record_description Tpl_Text_MEM__TEXT__desc;


DLLDirection
modelica_metatype omc_CodegenFMUCppHpcomOMSI_fmuMakefile(threadData_t *threadData, modelica_metatype _txt, modelica_string _a_target, modelica_metatype _a_simCode, modelica_metatype _a_extraFuncs, modelica_metatype _a_extraFuncsDecl, modelica_metatype _a_extraFuncsNamespace, modelica_string _a_FMUVersion, modelica_metatype *out_out_a_extraFuncs, modelica_metatype *out_out_a_extraFuncsDecl, modelica_metatype *out_out_a_extraFuncsNamespace);
#define boxptr_CodegenFMUCppHpcomOMSI_fmuMakefile omc_CodegenFMUCppHpcomOMSI_fmuMakefile
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMUCppHpcomOMSI_fmuMakefile,2,0) {(void*) boxptr_CodegenFMUCppHpcomOMSI_fmuMakefile,0}};
#define boxvar_CodegenFMUCppHpcomOMSI_fmuMakefile MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMUCppHpcomOMSI_fmuMakefile)


DLLDirection
modelica_metatype omc_CodegenFMUCppHpcomOMSI_translateModel(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_string _in_a_FMUVersion, modelica_string _in_a_FMUType);
#define boxptr_CodegenFMUCppHpcomOMSI_translateModel omc_CodegenFMUCppHpcomOMSI_translateModel
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMUCppHpcomOMSI_translateModel,2,0) {(void*) boxptr_CodegenFMUCppHpcomOMSI_translateModel,0}};
#define boxvar_CodegenFMUCppHpcomOMSI_translateModel MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMUCppHpcomOMSI_translateModel)

#ifdef __cplusplus
}
#endif
#endif
