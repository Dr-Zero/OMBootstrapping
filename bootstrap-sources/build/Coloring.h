#ifndef Coloring__H
#define Coloring__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_Coloring_dumpColoring omc_Coloring_dumpColoring


DLLDirection
modelica_metatype omc_Coloring_createColoring(threadData_t *threadData, modelica_metatype _sparseArray, modelica_metatype _sparseArrayT, modelica_integer _sizeVars, modelica_integer _sizeVarswithDep);
DLLDirection
modelica_metatype boxptr_Coloring_createColoring(threadData_t *threadData, modelica_metatype _sparseArray, modelica_metatype _sparseArrayT, modelica_metatype _sizeVars, modelica_metatype _sizeVarswithDep);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Coloring_createColoring,2,0) {(void*) boxptr_Coloring_createColoring,0}};
#define boxvar_Coloring_createColoring MMC_REFSTRUCTLIT(boxvar_lit_Coloring_createColoring)

#ifdef __cplusplus
}
#endif
#endif
