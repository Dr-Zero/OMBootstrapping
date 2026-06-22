#ifndef NFVerifyModel__H
#define NFVerifyModel__H
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


#define boxptr_NFVerifyModel_checkDiscreteRealRecord omc_NFVerifyModel_checkDiscreteRealRecord


#define boxptr_NFVerifyModel_checkDiscreteRealExp omc_NFVerifyModel_checkDiscreteRealExp


#define boxptr_NFVerifyModel_checkDiscreteReal omc_NFVerifyModel_checkDiscreteReal


#define boxptr_NFVerifyModel_expandCrefSet omc_NFVerifyModel_expandCrefSet


#define boxptr_NFVerifyModel_checkCrefSetEquality omc_NFVerifyModel_checkCrefSetEquality


#define boxptr_NFVerifyModel_whenEquationIfCrefs omc_NFVerifyModel_whenEquationIfCrefs


#define boxptr_NFVerifyModel_whenEquationEqualityCrefs omc_NFVerifyModel_whenEquationEqualityCrefs


#define boxptr_NFVerifyModel_whenEquationBranchCrefs omc_NFVerifyModel_whenEquationBranchCrefs


#define boxptr_NFVerifyModel_verifyWhenEquation omc_NFVerifyModel_verifyWhenEquation


DLLDirection
void omc_NFVerifyModel_verify(threadData_t *threadData, modelica_metatype _flatModel, modelica_boolean _isPartial);
DLLDirection
void boxptr_NFVerifyModel_verify(threadData_t *threadData, modelica_metatype _flatModel, modelica_metatype _isPartial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFVerifyModel_verify,2,0) {(void*) boxptr_NFVerifyModel_verify,0}};
#define boxvar_NFVerifyModel_verify MMC_REFSTRUCTLIT(boxvar_lit_NFVerifyModel_verify)

#ifdef __cplusplus
}
#endif
#endif
