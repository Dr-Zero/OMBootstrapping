#ifndef Causalize__H
#define Causalize__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BackendDAE_EquationConstraints_ALLOW__UNDERCONSTRAINED__desc;

extern struct record_description BackendDAE_EquationConstraints_EXACT__desc;

extern struct record_description BackendDAE_IndexReduction_INDEX__REDUCTION__desc;

extern struct record_description BackendDAE_IndexType_ABSOLUTE__desc;

extern struct record_description BackendDAE_Matching_MATCHING__desc;

extern struct record_description BackendDAE_Matching_NO__MATCHING__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_SYMBOLIC__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;


#define boxptr_Causalize_freeStateAssignments omc_Causalize_freeStateAssignments


DLLDirection
modelica_metatype omc_Causalize_singularSystemCheck(threadData_t *threadData, modelica_integer _nvars, modelica_integer _neqns, modelica_metatype _isyst, modelica_metatype _inMatchingOptions, modelica_metatype _matchingAlgorithm, modelica_metatype _arg, modelica_metatype _ishared);
DLLDirection
modelica_metatype boxptr_Causalize_singularSystemCheck(threadData_t *threadData, modelica_metatype _nvars, modelica_metatype _neqns, modelica_metatype _isyst, modelica_metatype _inMatchingOptions, modelica_metatype _matchingAlgorithm, modelica_metatype _arg, modelica_metatype _ishared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Causalize_singularSystemCheck,2,0) {(void*) boxptr_Causalize_singularSystemCheck,0}};
#define boxvar_Causalize_singularSystemCheck MMC_REFSTRUCTLIT(boxvar_lit_Causalize_singularSystemCheck)

#ifdef __cplusplus
}
#endif
#endif
