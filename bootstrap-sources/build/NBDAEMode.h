#ifndef NBDAEMode__H
#define NBDAEMode__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;


#define boxptr_NBDAEMode_daeModeDefault omc_NBDAEMode_daeModeDefault


DLLDirection
modelica_fnptr omc_NBDAEMode_getModule(threadData_t *threadData);
#define boxptr_NBDAEMode_getModule omc_NBDAEMode_getModule
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBDAEMode_getModule,2,0) {(void*) boxptr_NBDAEMode_getModule,0}};
#define boxvar_NBDAEMode_getModule MMC_REFSTRUCTLIT(boxvar_lit_NBDAEMode_getModule)


DLLDirection
modelica_metatype omc_NBDAEMode_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae);
#define boxptr_NBDAEMode_main omc_NBDAEMode_main
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBDAEMode_main,2,0) {(void*) boxptr_NBDAEMode_main,0}};
#define boxvar_NBDAEMode_main MMC_REFSTRUCTLIT(boxvar_lit_NBDAEMode_main)

#ifdef __cplusplus
}
#endif
#endif
