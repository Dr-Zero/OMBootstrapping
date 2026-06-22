#ifndef NFImport__H
#define NFImport__H
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

extern struct record_description ErrorTypes_Severity_NOTIFICATION__desc;

extern struct record_description NFImport_RESOLVED__IMPORT__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
void omc_NFImport_printImportError(threadData_t *threadData, modelica_metatype _imp1, modelica_metatype _imp2);
#define boxptr_NFImport_printImportError omc_NFImport_printImportError
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFImport_printImportError,2,0) {(void*) boxptr_NFImport_printImportError,0}};
#define boxvar_NFImport_printImportError MMC_REFSTRUCTLIT(boxvar_lit_NFImport_printImportError)


DLLDirection
modelica_metatype omc_NFImport_instUnqualified(threadData_t *threadData, modelica_metatype _imp, modelica_metatype __omcQ_24in_5Fimps);
#define boxptr_NFImport_instUnqualified omc_NFImport_instUnqualified
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFImport_instUnqualified,2,0) {(void*) boxptr_NFImport_instUnqualified,0}};
#define boxvar_NFImport_instUnqualified MMC_REFSTRUCTLIT(boxvar_lit_NFImport_instUnqualified)


DLLDirection
modelica_metatype omc_NFImport_instQualified(threadData_t *threadData, modelica_metatype _imp, modelica_metatype _scope, modelica_metatype _info, modelica_metatype *out_node);
#define boxptr_NFImport_instQualified omc_NFImport_instQualified
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFImport_instQualified,2,0) {(void*) boxptr_NFImport_instQualified,0}};
#define boxvar_NFImport_instQualified MMC_REFSTRUCTLIT(boxvar_lit_NFImport_instQualified)


DLLDirection
modelica_metatype omc_NFImport_resolveList(threadData_t *threadData, modelica_metatype _imps);
#define boxptr_NFImport_resolveList omc_NFImport_resolveList
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFImport_resolveList,2,0) {(void*) boxptr_NFImport_resolveList,0}};
#define boxvar_NFImport_resolveList MMC_REFSTRUCTLIT(boxvar_lit_NFImport_resolveList)


DLLDirection
modelica_metatype omc_NFImport_resolve(threadData_t *threadData, modelica_metatype _imp, modelica_boolean *out_changed, modelica_metatype *out_outImport);
DLLDirection
modelica_metatype boxptr_NFImport_resolve(threadData_t *threadData, modelica_metatype _imp, modelica_metatype *out_changed, modelica_metatype *out_outImport);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFImport_resolve,2,0) {(void*) boxptr_NFImport_resolve,0}};
#define boxvar_NFImport_resolve MMC_REFSTRUCTLIT(boxvar_lit_NFImport_resolve)


DLLDirection
modelica_metatype omc_NFImport_info(threadData_t *threadData, modelica_metatype _imp);
#define boxptr_NFImport_info omc_NFImport_info
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFImport_info,2,0) {(void*) boxptr_NFImport_info,0}};
#define boxvar_NFImport_info MMC_REFSTRUCTLIT(boxvar_lit_NFImport_info)


DLLDirection
modelica_string omc_NFImport_name(threadData_t *threadData, modelica_metatype _imp);
#define boxptr_NFImport_name omc_NFImport_name
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFImport_name,2,0) {(void*) boxptr_NFImport_name,0}};
#define boxvar_NFImport_name MMC_REFSTRUCTLIT(boxvar_lit_NFImport_name)

#ifdef __cplusplus
}
#endif
#endif
