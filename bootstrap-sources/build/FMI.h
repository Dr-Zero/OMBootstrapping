#ifndef FMI__H
#define FMI__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_FlagData_STRING__FLAG__desc;

extern struct record_description Flags_FlagVisibility_INTERNAL__desc;


DLLDirection
modelica_metatype omc_FMI_filterModelVariables(threadData_t *threadData, modelica_metatype _inModelVariables, modelica_string _tipe, modelica_string _variableCausality);
#define boxptr_FMI_filterModelVariables omc_FMI_filterModelVariables
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_filterModelVariables,2,0) {(void*) boxptr_FMI_filterModelVariables,0}};
#define boxvar_FMI_filterModelVariables MMC_REFSTRUCTLIT(boxvar_lit_FMI_filterModelVariables)


DLLDirection
modelica_string omc_FMI_getEnumerationTypeFromTypes(threadData_t *threadData, modelica_metatype _inTypeDefinitionsList, modelica_string _inBaseType);
#define boxptr_FMI_getEnumerationTypeFromTypes omc_FMI_getEnumerationTypeFromTypes
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_getEnumerationTypeFromTypes,2,0) {(void*) boxptr_FMI_getEnumerationTypeFromTypes,0}};
#define boxvar_FMI_getEnumerationTypeFromTypes MMC_REFSTRUCTLIT(boxvar_lit_FMI_getEnumerationTypeFromTypes)


DLLDirection
modelica_boolean omc_FMI_isFMICSType(threadData_t *threadData, modelica_string _inFMIType);
DLLDirection
modelica_metatype boxptr_FMI_isFMICSType(threadData_t *threadData, modelica_metatype _inFMIType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_isFMICSType,2,0) {(void*) boxptr_FMI_isFMICSType,0}};
#define boxvar_FMI_isFMICSType MMC_REFSTRUCTLIT(boxvar_lit_FMI_isFMICSType)


DLLDirection
modelica_boolean omc_FMI_isFMIMEType(threadData_t *threadData, modelica_string _inFMIType);
DLLDirection
modelica_metatype boxptr_FMI_isFMIMEType(threadData_t *threadData, modelica_metatype _inFMIType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_isFMIMEType,2,0) {(void*) boxptr_FMI_isFMIMEType,0}};
#define boxvar_FMI_isFMIMEType MMC_REFSTRUCTLIT(boxvar_lit_FMI_isFMIMEType)


DLLDirection
modelica_boolean omc_FMI_canExportFMU(threadData_t *threadData, modelica_string _inFMUVersion, modelica_string _inFMIType);
DLLDirection
modelica_metatype boxptr_FMI_canExportFMU(threadData_t *threadData, modelica_metatype _inFMUVersion, modelica_metatype _inFMIType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_canExportFMU,2,0) {(void*) boxptr_FMI_canExportFMU,0}};
#define boxvar_FMI_canExportFMU MMC_REFSTRUCTLIT(boxvar_lit_FMI_canExportFMU)


DLLDirection
modelica_boolean omc_FMI_checkFMIType(threadData_t *threadData, modelica_string _inFMIType);
DLLDirection
modelica_metatype boxptr_FMI_checkFMIType(threadData_t *threadData, modelica_metatype _inFMIType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_checkFMIType,2,0) {(void*) boxptr_FMI_checkFMIType,0}};
#define boxvar_FMI_checkFMIType MMC_REFSTRUCTLIT(boxvar_lit_FMI_checkFMIType)


DLLDirection
modelica_string omc_FMI_getFMIVersionString(threadData_t *threadData);
#define boxptr_FMI_getFMIVersionString omc_FMI_getFMIVersionString
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_getFMIVersionString,2,0) {(void*) boxptr_FMI_getFMIVersionString,0}};
#define boxvar_FMI_getFMIVersionString MMC_REFSTRUCTLIT(boxvar_lit_FMI_getFMIVersionString)


DLLDirection
modelica_boolean omc_FMI_isFMIVersion20(threadData_t *threadData, modelica_string _inFMUVersion);
DLLDirection
modelica_metatype boxptr_FMI_isFMIVersion20(threadData_t *threadData, modelica_metatype _inFMUVersion);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_isFMIVersion20,2,0) {(void*) boxptr_FMI_isFMIVersion20,0}};
#define boxvar_FMI_isFMIVersion20 MMC_REFSTRUCTLIT(boxvar_lit_FMI_isFMIVersion20)


DLLDirection
modelica_boolean omc_FMI_isFMIVersion10(threadData_t *threadData, modelica_string _inFMUVersion);
DLLDirection
modelica_metatype boxptr_FMI_isFMIVersion10(threadData_t *threadData, modelica_metatype _inFMUVersion);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_isFMIVersion10,2,0) {(void*) boxptr_FMI_isFMIVersion10,0}};
#define boxvar_FMI_isFMIVersion10 MMC_REFSTRUCTLIT(boxvar_lit_FMI_isFMIVersion10)


DLLDirection
modelica_boolean omc_FMI_checkFMIVersion(threadData_t *threadData, modelica_string _inFMIVersion);
DLLDirection
modelica_metatype boxptr_FMI_checkFMIVersion(threadData_t *threadData, modelica_metatype _inFMIVersion);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_checkFMIVersion,2,0) {(void*) boxptr_FMI_checkFMIVersion,0}};
#define boxvar_FMI_checkFMIVersion MMC_REFSTRUCTLIT(boxvar_lit_FMI_checkFMIVersion)


DLLDirection
modelica_string omc_FMI_getFMIVersion(threadData_t *threadData, modelica_metatype _inFMIInfo);
#define boxptr_FMI_getFMIVersion omc_FMI_getFMIVersion
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_getFMIVersion,2,0) {(void*) boxptr_FMI_getFMIVersion,0}};
#define boxvar_FMI_getFMIVersion MMC_REFSTRUCTLIT(boxvar_lit_FMI_getFMIVersion)


DLLDirection
modelica_string omc_FMI_getFMIType(threadData_t *threadData, modelica_metatype _inFMIInfo);
#define boxptr_FMI_getFMIType omc_FMI_getFMIType
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_getFMIType,2,0) {(void*) boxptr_FMI_getFMIType,0}};
#define boxvar_FMI_getFMIType MMC_REFSTRUCTLIT(boxvar_lit_FMI_getFMIType)


DLLDirection
modelica_string omc_FMI_getFMIModelIdentifier(threadData_t *threadData, modelica_metatype _inFMIInfo);
#define boxptr_FMI_getFMIModelIdentifier omc_FMI_getFMIModelIdentifier
static const MMC_DEFSTRUCTLIT(boxvar_lit_FMI_getFMIModelIdentifier,2,0) {(void*) boxptr_FMI_getFMIModelIdentifier,0}};
#define boxvar_FMI_getFMIModelIdentifier MMC_REFSTRUCTLIT(boxvar_lit_FMI_getFMIModelIdentifier)

#ifdef __cplusplus
}
#endif
#endif
