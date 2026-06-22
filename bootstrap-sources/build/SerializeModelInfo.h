#ifndef SerializeModelInfo__H
#define SerializeModelInfo__H
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

extern struct record_description SCodeDump_SCodeDumpOptions_OPTIONS__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_SerializeModelInfo_getWhenUses omc_SerializeModelInfo_getWhenUses


#define boxptr_SerializeModelInfo_varKindString omc_SerializeModelInfo_varKindString


DLLDirection
modelica_string omc_SerializeModelInfo_serialize(threadData_t *threadData, modelica_metatype _code, modelica_boolean _withOperations);
DLLDirection
modelica_metatype boxptr_SerializeModelInfo_serialize(threadData_t *threadData, modelica_metatype _code, modelica_metatype _withOperations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serialize,2,0) {(void*) boxptr_SerializeModelInfo_serialize,0}};
#define boxvar_SerializeModelInfo_serialize MMC_REFSTRUCTLIT(boxvar_lit_SerializeModelInfo_serialize)

#ifdef __cplusplus
}
#endif
#endif
