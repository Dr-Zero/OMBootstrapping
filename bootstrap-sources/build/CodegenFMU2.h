#ifndef CodegenFMU2__H
#define CodegenFMU2__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Tpl_BlockType_BT__INDENT__desc;

extern struct record_description Tpl_StringToken_ST__LINE__desc;

extern struct record_description Tpl_StringToken_ST__STRING__desc;

extern struct record_description Tpl_StringToken_ST__STRING__LIST__desc;

extern struct record_description Tpl_Text_MEM__TEXT__desc;


DLLDirection
modelica_metatype omc_CodegenFMU2_CoSimulation(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_metatype _in_a_sourceFiles);
#define boxptr_CodegenFMU2_CoSimulation omc_CodegenFMU2_CoSimulation
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_CoSimulation,2,0) {(void*) boxptr_CodegenFMU2_CoSimulation,0}};
#define boxvar_CodegenFMU2_CoSimulation MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_CoSimulation)


DLLDirection
modelica_metatype omc_CodegenFMU2_fmiModelDescriptionAttributes(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_string _in_a_guid);
#define boxptr_CodegenFMU2_fmiModelDescriptionAttributes omc_CodegenFMU2_fmiModelDescriptionAttributes
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fmiModelDescriptionAttributes,2,0) {(void*) boxptr_CodegenFMU2_fmiModelDescriptionAttributes,0}};
#define boxvar_CodegenFMU2_fmiModelDescriptionAttributes MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fmiModelDescriptionAttributes)


DLLDirection
modelica_metatype omc_CodegenFMU2_fmiModelDescription(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_simCode, modelica_string _in_a_guid, modelica_string _in_a_FMUType, modelica_metatype _in_a_sourceFiles);
#define boxptr_CodegenFMU2_fmiModelDescription omc_CodegenFMU2_fmiModelDescription
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenFMU2_fmiModelDescription,2,0) {(void*) boxptr_CodegenFMU2_fmiModelDescription,0}};
#define boxvar_CodegenFMU2_fmiModelDescription MMC_REFSTRUCTLIT(boxvar_lit_CodegenFMU2_fmiModelDescription)

#ifdef __cplusplus
}
#endif
#endif
