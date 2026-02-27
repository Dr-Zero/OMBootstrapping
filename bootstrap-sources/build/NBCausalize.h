#ifndef NBCausalize__H
#define NBCausalize__H
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

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_STRING__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description Flags_ValidOptions_STRING__DESC__OPTION__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description Gettext_TranslatableContent_notrans__desc;

extern struct record_description NBEquation_Iterator_EMPTY__desc;

extern struct record_description NBMatching_MATCHING__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NBCausalize_causalizeDAEMode omc_NBCausalize_causalizeDAEMode


#define boxptr_NBCausalize_causalizePseudoArray omc_NBCausalize_causalizePseudoArray


DLLDirection
modelica_fnptr omc_NBCausalize_getModule(threadData_t *threadData);
#define boxptr_NBCausalize_getModule omc_NBCausalize_getModule
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBCausalize_getModule,2,0) {(void*) boxptr_NBCausalize_getModule,0}};
#define boxvar_NBCausalize_getModule MMC_REFSTRUCTLIT(boxvar_lit_NBCausalize_getModule)


DLLDirection
modelica_metatype omc_NBCausalize_simple(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _eqns, modelica_integer _kind, modelica_integer _st, modelica_metatype _iter, modelica_metatype *out_comps);
DLLDirection
modelica_metatype boxptr_NBCausalize_simple(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _eqns, modelica_metatype _kind, modelica_metatype _st, modelica_metatype _iter, modelica_metatype *out_comps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBCausalize_simple,2,0) {(void*) boxptr_NBCausalize_simple,0}};
#define boxvar_NBCausalize_simple MMC_REFSTRUCTLIT(boxvar_lit_NBCausalize_simple)


DLLDirection
modelica_boolean omc_NBCausalize_checkSystemVariabilities(threadData_t *threadData, modelica_metatype _partition);
DLLDirection
modelica_metatype boxptr_NBCausalize_checkSystemVariabilities(threadData_t *threadData, modelica_metatype _partition);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBCausalize_checkSystemVariabilities,2,0) {(void*) boxptr_NBCausalize_checkSystemVariabilities,0}};
#define boxvar_NBCausalize_checkSystemVariabilities MMC_REFSTRUCTLIT(boxvar_lit_NBCausalize_checkSystemVariabilities)


DLLDirection
modelica_metatype omc_NBCausalize_applyModule(threadData_t *threadData, modelica_metatype _partitions, modelica_integer _kind, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _funcMap, modelica_fnptr _func, modelica_metatype *out_varData, modelica_metatype *out_eqData);
DLLDirection
modelica_metatype boxptr_NBCausalize_applyModule(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype _kind, modelica_metatype __omcQ_24in_5FvarData, modelica_metatype __omcQ_24in_5FeqData, modelica_metatype _funcMap, modelica_fnptr _func, modelica_metatype *out_varData, modelica_metatype *out_eqData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBCausalize_applyModule,2,0) {(void*) boxptr_NBCausalize_applyModule,0}};
#define boxvar_NBCausalize_applyModule MMC_REFSTRUCTLIT(boxvar_lit_NBCausalize_applyModule)


DLLDirection
modelica_metatype omc_NBCausalize_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_integer _kind);
DLLDirection
modelica_metatype boxptr_NBCausalize_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _kind);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBCausalize_main,2,0) {(void*) boxptr_NBCausalize_main,0}};
#define boxvar_NBCausalize_main MMC_REFSTRUCTLIT(boxvar_lit_NBCausalize_main)

#ifdef __cplusplus
}
#endif
#endif
