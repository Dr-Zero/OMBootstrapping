#ifndef SerializeInitXML__H
#define SerializeInitXML__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_SerializeInitXML_expString omc_SerializeInitXML_expString


#define boxptr_SerializeInitXML_getVariablity omc_SerializeInitXML_getVariablity


#define boxptr_SerializeInitXML_getCausality omc_SerializeInitXML_getCausality


DLLDirection
modelica_boolean omc_SerializeInitXML_simulationInitFileReturnBool(threadData_t *threadData, modelica_metatype _simCode, modelica_string _guid);
DLLDirection
modelica_metatype boxptr_SerializeInitXML_simulationInitFileReturnBool(threadData_t *threadData, modelica_metatype _simCode, modelica_metatype _guid);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_simulationInitFileReturnBool,2,0) {(void*) boxptr_SerializeInitXML_simulationInitFileReturnBool,0}};
#define boxvar_SerializeInitXML_simulationInitFileReturnBool MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_simulationInitFileReturnBool)


DLLDirection
void omc_SerializeInitXML_simulationInitFile(threadData_t *threadData, modelica_metatype _simCode, modelica_string _guid);
#define boxptr_SerializeInitXML_simulationInitFile omc_SerializeInitXML_simulationInitFile
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeInitXML_simulationInitFile,2,0) {(void*) boxptr_SerializeInitXML_simulationInitFile,0}};
#define boxvar_SerializeInitXML_simulationInitFile MMC_REFSTRUCTLIT(boxvar_lit_SerializeInitXML_simulationInitFile)

#ifdef __cplusplus
}
#endif
#endif
