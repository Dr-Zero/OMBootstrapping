#ifndef BaseModelica__H
#define BaseModelica__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BaseModelica_OutputFormat_OUTPUT__FORMAT__desc;

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_STRING__LIST__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description Flags_ValidOptions_STRING__DESC__OPTION__desc;


DLLDirection
modelica_boolean omc_BaseModelica_inlineFunctions(threadData_t *threadData);
DLLDirection
modelica_metatype boxptr_BaseModelica_inlineFunctions(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BaseModelica_inlineFunctions,2,0) {(void*) boxptr_BaseModelica_inlineFunctions,0}};
#define boxvar_BaseModelica_inlineFunctions MMC_REFSTRUCTLIT(boxvar_lit_BaseModelica_inlineFunctions)


DLLDirection
modelica_metatype omc_BaseModelica_formatFromFlags(threadData_t *threadData);
#define boxptr_BaseModelica_formatFromFlags omc_BaseModelica_formatFromFlags
static const MMC_DEFSTRUCTLIT(boxvar_lit_BaseModelica_formatFromFlags,2,0) {(void*) boxptr_BaseModelica_formatFromFlags,0}};
#define boxvar_BaseModelica_formatFromFlags MMC_REFSTRUCTLIT(boxvar_lit_BaseModelica_formatFromFlags)

#ifdef __cplusplus
}
#endif
#endif
