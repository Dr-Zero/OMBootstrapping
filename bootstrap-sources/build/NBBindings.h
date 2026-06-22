#ifndef NBBindings__H
#define NBBindings__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_SYMBOLIC__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description ErrorTypes_Severity_NOTIFICATION__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NBBindings_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae);
#define boxptr_NBBindings_main omc_NBBindings_main
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBBindings_main,2,0) {(void*) boxptr_NBBindings_main,0}};
#define boxvar_NBBindings_main MMC_REFSTRUCTLIT(boxvar_lit_NBBindings_main)

#ifdef __cplusplus
}
#endif
#endif
