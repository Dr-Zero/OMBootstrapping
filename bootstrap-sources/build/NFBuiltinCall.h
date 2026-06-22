#ifndef NFBuiltinCall__H
#define NFBuiltinCall__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_Path_IDENT__desc;

extern struct record_description DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc;

extern struct record_description DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc;

extern struct record_description DAE_FunctionParallelism_FP__NON__PARALLEL__desc;

extern struct record_description DAE_InlineType_NO__INLINE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_SCRIPTING__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description NFCeval_EvalTarget_EVAL__TARGET__desc;

extern struct record_description NFClockKind_EVENT__CLOCK__desc;

extern struct record_description NFClockKind_INFERRED__CLOCK__desc;

extern struct record_description NFClockKind_RATIONAL__CLOCK__desc;

extern struct record_description NFClockKind_REAL__CLOCK__desc;

extern struct record_description NFClockKind_SOLVER__CLOCK__desc;

extern struct record_description NFDimension_UNKNOWN__desc;

extern struct record_description NFExpression_CALL__desc;

extern struct record_description NFExpression_CAST__desc;

extern struct record_description NFExpression_CLKCONST__desc;

extern struct record_description NFExpression_INSTANCE__NAME__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_SIZE__desc;

extern struct record_description NFExpression_STRING__desc;

extern struct record_description NFFunction_Function_FUNCTION__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description NFType_ARRAY__desc;

extern struct record_description NFType_BOOLEAN__desc;

extern struct record_description NFType_CLOCK__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description NFType_NORETCALL__desc;

extern struct record_description NFType_REAL__desc;

extern struct record_description NFType_STRING__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NFBuiltinCall_typeMinMaxCall_invalid__args__error omc_NFBuiltinCall_typeMinMaxCall_invalid__args__error


#define boxptr_NFBuiltinCall_assertNoNamedParams omc_NFBuiltinCall_assertNoNamedParams


DLLDirection
modelica_metatype omc_NFBuiltinCall_makeCatExp(threadData_t *threadData, modelica_integer _n, modelica_metatype _args, modelica_metatype _tys, modelica_integer _variability, modelica_integer _purity, modelica_metatype _info, modelica_metatype *out_ty);
DLLDirection
modelica_metatype boxptr_NFBuiltinCall_makeCatExp(threadData_t *threadData, modelica_metatype _n, modelica_metatype _args, modelica_metatype _tys, modelica_metatype _variability, modelica_metatype _purity, modelica_metatype _info, modelica_metatype *out_ty);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBuiltinCall_makeCatExp,2,0) {(void*) boxptr_NFBuiltinCall_makeCatExp,0}};
#define boxvar_NFBuiltinCall_makeCatExp MMC_REFSTRUCTLIT(boxvar_lit_NFBuiltinCall_makeCatExp)


DLLDirection
modelica_metatype omc_NFBuiltinCall_makeArrayExp(threadData_t *threadData, modelica_metatype _posArgs, modelica_metatype _namedArgs, modelica_metatype _info);
#define boxptr_NFBuiltinCall_makeArrayExp omc_NFBuiltinCall_makeArrayExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBuiltinCall_makeArrayExp,2,0) {(void*) boxptr_NFBuiltinCall_makeArrayExp,0}};
#define boxvar_NFBuiltinCall_makeArrayExp MMC_REFSTRUCTLIT(boxvar_lit_NFBuiltinCall_makeArrayExp)


DLLDirection
modelica_metatype omc_NFBuiltinCall_makeSizeExp(threadData_t *threadData, modelica_metatype _posArgs, modelica_metatype _namedArgs, modelica_metatype _info);
#define boxptr_NFBuiltinCall_makeSizeExp omc_NFBuiltinCall_makeSizeExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBuiltinCall_makeSizeExp,2,0) {(void*) boxptr_NFBuiltinCall_makeSizeExp,0}};
#define boxvar_NFBuiltinCall_makeSizeExp MMC_REFSTRUCTLIT(boxvar_lit_NFBuiltinCall_makeSizeExp)


DLLDirection
modelica_metatype omc_NFBuiltinCall_typeSpecial(threadData_t *threadData, modelica_metatype _call, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_integer *out_variability, modelica_integer *out_purity);
DLLDirection
modelica_metatype boxptr_NFBuiltinCall_typeSpecial(threadData_t *threadData, modelica_metatype _call, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_ty, modelica_metatype *out_variability, modelica_metatype *out_purity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBuiltinCall_typeSpecial,2,0) {(void*) boxptr_NFBuiltinCall_typeSpecial,0}};
#define boxvar_NFBuiltinCall_typeSpecial MMC_REFSTRUCTLIT(boxvar_lit_NFBuiltinCall_typeSpecial)


DLLDirection
modelica_boolean omc_NFBuiltinCall_needSpecialHandling(threadData_t *threadData, modelica_metatype _call);
DLLDirection
modelica_metatype boxptr_NFBuiltinCall_needSpecialHandling(threadData_t *threadData, modelica_metatype _call);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFBuiltinCall_needSpecialHandling,2,0) {(void*) boxptr_NFBuiltinCall_needSpecialHandling,0}};
#define boxvar_NFBuiltinCall_needSpecialHandling MMC_REFSTRUCTLIT(boxvar_lit_NFBuiltinCall_needSpecialHandling)

#ifdef __cplusplus
}
#endif
#endif
