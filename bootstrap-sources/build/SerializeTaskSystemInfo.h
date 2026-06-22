#ifndef SerializeTaskSystemInfo__H
#define SerializeTaskSystemInfo__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description DAE_Exp_BCONST__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_string omc_SerializeTaskSystemInfo_serializeParMod(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations);
DLLDirection
modelica_metatype boxptr_SerializeTaskSystemInfo_serializeParMod(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeParMod,2,0) {(void*) boxptr_SerializeTaskSystemInfo_serializeParMod,0}};
#define boxvar_SerializeTaskSystemInfo_serializeParMod MMC_REFSTRUCTLIT(boxvar_lit_SerializeTaskSystemInfo_serializeParMod)

#ifdef __cplusplus
}
#endif
#endif
