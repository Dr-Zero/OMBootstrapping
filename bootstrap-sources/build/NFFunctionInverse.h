#ifndef NFFunctionInverse__H
#define NFFunctionInverse__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_ComponentRef_CREF__IDENT__desc;

extern struct record_description DAE_FunctionDefinition_FUNCTION__INVERSE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description NFFunctionInverse_FUNCTION__INV__desc;

extern struct record_description SCode_Each_NOT__EACH__desc;

extern struct record_description SCode_Final_NOT__FINAL__desc;

extern struct record_description SCode_Mod_MOD__desc;

extern struct record_description SCode_SubMod_NAMEMOD__desc;

extern struct record_description SCodeDump_SCodeDumpOptions_OPTIONS__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NFFunctionInverse_instInverseSubMod omc_NFFunctionInverse_instInverseSubMod


#define boxptr_NFFunctionInverse_instInverseMod omc_NFFunctionInverse_instInverseMod


#define boxptr_NFFunctionInverse_getInverseAnnotations omc_NFFunctionInverse_getInverseAnnotations


DLLDirection
modelica_metatype omc_NFFunctionInverse_getFunction(threadData_t *threadData, modelica_metatype _fnInv);
#define boxptr_NFFunctionInverse_getFunction omc_NFFunctionInverse_getFunction
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionInverse_getFunction,2,0) {(void*) boxptr_NFFunctionInverse_getFunction,0}};
#define boxvar_NFFunctionInverse_getFunction MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionInverse_getFunction)


DLLDirection
modelica_metatype omc_NFFunctionInverse_toSubMod(threadData_t *threadData, modelica_metatype _fnInv);
#define boxptr_NFFunctionInverse_toSubMod omc_NFFunctionInverse_toSubMod
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionInverse_toSubMod,2,0) {(void*) boxptr_NFFunctionInverse_toSubMod,0}};
#define boxvar_NFFunctionInverse_toSubMod MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionInverse_toSubMod)


DLLDirection
modelica_metatype omc_NFFunctionInverse_toDAE(threadData_t *threadData, modelica_metatype _fnInv);
#define boxptr_NFFunctionInverse_toDAE omc_NFFunctionInverse_toDAE
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionInverse_toDAE,2,0) {(void*) boxptr_NFFunctionInverse_toDAE,0}};
#define boxvar_NFFunctionInverse_toDAE MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionInverse_toDAE)


DLLDirection
modelica_metatype omc_NFFunctionInverse_typeInverse(threadData_t *threadData, modelica_metatype __omcQ_24in_5FfnInv);
#define boxptr_NFFunctionInverse_typeInverse omc_NFFunctionInverse_typeInverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionInverse_typeInverse,2,0) {(void*) boxptr_NFFunctionInverse_typeInverse,0}};
#define boxvar_NFFunctionInverse_typeInverse MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionInverse_typeInverse)


DLLDirection
modelica_metatype omc_NFFunctionInverse_instInverses(threadData_t *threadData, modelica_metatype _fnNode, modelica_metatype _fn);
#define boxptr_NFFunctionInverse_instInverses omc_NFFunctionInverse_instInverses
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionInverse_instInverses,2,0) {(void*) boxptr_NFFunctionInverse_instInverses,0}};
#define boxvar_NFFunctionInverse_instInverses MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionInverse_instInverses)

#ifdef __cplusplus
}
#endif
#endif
