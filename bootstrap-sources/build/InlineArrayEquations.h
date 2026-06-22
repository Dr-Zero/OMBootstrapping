#ifndef InlineArrayEquations__H
#define InlineArrayEquations__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BackendDAE_Equation_ARRAY__EQUATION__desc;

extern struct record_description BackendDAE_Equation_COMPLEX__EQUATION__desc;

extern struct record_description BackendDAE_Equation_EQUATION__desc;

extern struct record_description DAE_EquationExp_EQUALITY__EXPS__desc;

extern struct record_description DAE_SymbolicOperation_OP__SCALARIZE__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;


#define boxptr_InlineArrayEquations_generateScalarArrayEqns2 omc_InlineArrayEquations_generateScalarArrayEqns2


DLLDirection
modelica_metatype omc_InlineArrayEquations_getScalarArrayEqns(threadData_t *threadData, modelica_metatype _inEqnLst, modelica_boolean *out_outFound);
DLLDirection
modelica_metatype boxptr_InlineArrayEquations_getScalarArrayEqns(threadData_t *threadData, modelica_metatype _inEqnLst, modelica_metatype *out_outFound);
static const MMC_DEFSTRUCTLIT(boxvar_lit_InlineArrayEquations_getScalarArrayEqns,2,0) {(void*) boxptr_InlineArrayEquations_getScalarArrayEqns,0}};
#define boxvar_InlineArrayEquations_getScalarArrayEqns MMC_REFSTRUCTLIT(boxvar_lit_InlineArrayEquations_getScalarArrayEqns)


DLLDirection
modelica_metatype omc_InlineArrayEquations_inlineArrayEqn(threadData_t *threadData, modelica_metatype _inDAE);
#define boxptr_InlineArrayEquations_inlineArrayEqn omc_InlineArrayEquations_inlineArrayEqn
static const MMC_DEFSTRUCTLIT(boxvar_lit_InlineArrayEquations_inlineArrayEqn,2,0) {(void*) boxptr_InlineArrayEquations_inlineArrayEqn,0}};
#define boxvar_InlineArrayEquations_inlineArrayEqn MMC_REFSTRUCTLIT(boxvar_lit_InlineArrayEquations_inlineArrayEqn)

#ifdef __cplusplus
}
#endif
#endif
