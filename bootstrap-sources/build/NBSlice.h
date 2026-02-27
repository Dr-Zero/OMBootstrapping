#ifndef NBSlice__H
#define NBSlice__H
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

extern struct record_description NBSlice_SLICE__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_MULTARY__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_NBSlice_applyNewFrameRange omc_NBSlice_applyNewFrameRange


#define boxptr_NBSlice_resolveDimensionsSubscripts omc_NBSlice_resolveDimensionsSubscripts


#define boxptr_NBSlice_getCrefInFrameIndices omc_NBSlice_getCrefInFrameIndices


#define boxptr_NBSlice_val1String omc_NBSlice_val1String


#define boxptr_NBSlice_keyString omc_NBSlice_keyString


DLLDirection
void omc_NBSlice_upgradeRow(threadData_t *threadData, modelica_metatype _eqn_name, modelica_integer _eqn_arr_idx, modelica_metatype _iter, modelica_metatype _ty, modelica_metatype _dependencies, modelica_metatype _dep, modelica_metatype _rep, modelica_metatype _map, modelica_metatype _fullmap, modelica_metatype _m, modelica_metatype _mapping, modelica_metatype _modes);
DLLDirection
void boxptr_NBSlice_upgradeRow(threadData_t *threadData, modelica_metatype _eqn_name, modelica_metatype _eqn_arr_idx, modelica_metatype _iter, modelica_metatype _ty, modelica_metatype _dependencies, modelica_metatype _dep, modelica_metatype _rep, modelica_metatype _map, modelica_metatype _fullmap, modelica_metatype _m, modelica_metatype _mapping, modelica_metatype _modes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_upgradeRow,2,0) {(void*) boxptr_NBSlice_upgradeRow,0}};
#define boxvar_NBSlice_upgradeRow MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_upgradeRow)


DLLDirection
modelica_metatype omc_NBSlice_upgradeRowFull(threadData_t *threadData, modelica_metatype _dependencies, modelica_metatype _map, modelica_metatype _mapping);
#define boxptr_NBSlice_upgradeRowFull omc_NBSlice_upgradeRowFull
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_upgradeRowFull,2,0) {(void*) boxptr_NBSlice_upgradeRowFull,0}};
#define boxvar_NBSlice_upgradeRowFull MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_upgradeRowFull)


DLLDirection
modelica_metatype omc_NBSlice_naiveSeparation(threadData_t *threadData, modelica_metatype _indices);
#define boxptr_NBSlice_naiveSeparation omc_NBSlice_naiveSeparation
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_naiveSeparation,2,0) {(void*) boxptr_NBSlice_naiveSeparation,0}};
#define boxvar_NBSlice_naiveSeparation MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_naiveSeparation)


DLLDirection
modelica_metatype omc_NBSlice_reconstructDiagonal(threadData_t *threadData, modelica_metatype _frame_locations_transposed, modelica_metatype _starts, modelica_metatype _steps, modelica_metatype _stops, modelica_metatype _shifts, modelica_metatype _failed);
#define boxptr_NBSlice_reconstructDiagonal omc_NBSlice_reconstructDiagonal
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_reconstructDiagonal,2,0) {(void*) boxptr_NBSlice_reconstructDiagonal,0}};
#define boxvar_NBSlice_reconstructDiagonal MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_reconstructDiagonal)


DLLDirection
modelica_metatype omc_NBSlice_recollectRangesHeuristic(threadData_t *threadData, modelica_metatype _frame_locations_transposed, modelica_metatype *out_removed_diagonal, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_NBSlice_recollectRangesHeuristic(threadData_t *threadData, modelica_metatype _frame_locations_transposed, modelica_metatype *out_removed_diagonal, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_recollectRangesHeuristic,2,0) {(void*) boxptr_NBSlice_recollectRangesHeuristic,0}};
#define boxvar_NBSlice_recollectRangesHeuristic MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_recollectRangesHeuristic)


DLLDirection
modelica_metatype omc_NBSlice_orderTransposedFrameLocations(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fframe_5Flocations_5Ftransposed, modelica_metatype *out_replacements, modelica_integer *out_status);
DLLDirection
modelica_metatype boxptr_NBSlice_orderTransposedFrameLocations(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fframe_5Flocations_5Ftransposed, modelica_metatype *out_replacements, modelica_metatype *out_status);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_orderTransposedFrameLocations,2,0) {(void*) boxptr_NBSlice_orderTransposedFrameLocations,0}};
#define boxvar_NBSlice_orderTransposedFrameLocations MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_orderTransposedFrameLocations)


DLLDirection
modelica_metatype omc_NBSlice_transposeLocations(threadData_t *threadData, modelica_metatype _locations, modelica_integer _out_size);
DLLDirection
modelica_metatype boxptr_NBSlice_transposeLocations(threadData_t *threadData, modelica_metatype _locations, modelica_metatype _out_size);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_transposeLocations,2,0) {(void*) boxptr_NBSlice_transposeLocations,0}};
#define boxvar_NBSlice_transposeLocations MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_transposeLocations)


DLLDirection
modelica_metatype omc_NBSlice_indexToLocation(threadData_t *threadData, modelica_integer _index, modelica_metatype _sizes);
DLLDirection
modelica_metatype boxptr_NBSlice_indexToLocation(threadData_t *threadData, modelica_metatype _index, modelica_metatype _sizes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_indexToLocation,2,0) {(void*) boxptr_NBSlice_indexToLocation,0}};
#define boxvar_NBSlice_indexToLocation MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_indexToLocation)


DLLDirection
modelica_integer omc_NBSlice_locationToIndex(threadData_t *threadData, modelica_metatype _sizes, modelica_metatype _values, modelica_integer __omcQ_24in_5Findex);
DLLDirection
modelica_metatype boxptr_NBSlice_locationToIndex(threadData_t *threadData, modelica_metatype _sizes, modelica_metatype _values, modelica_metatype __omcQ_24in_5Findex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_locationToIndex,2,0) {(void*) boxptr_NBSlice_locationToIndex,0}};
#define boxvar_NBSlice_locationToIndex MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_locationToIndex)


DLLDirection
modelica_metatype omc_NBSlice_getDependentCrefsPseudoArrayCausalized(threadData_t *threadData, modelica_metatype _row_cref, modelica_metatype _dependencies, modelica_metatype _slice);
#define boxptr_NBSlice_getDependentCrefsPseudoArrayCausalized omc_NBSlice_getDependentCrefsPseudoArrayCausalized
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefsPseudoArrayCausalized,2,0) {(void*) boxptr_NBSlice_getDependentCrefsPseudoArrayCausalized,0}};
#define boxvar_NBSlice_getDependentCrefsPseudoArrayCausalized MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefsPseudoArrayCausalized)


DLLDirection
modelica_integer omc_NBSlice_updateDependenciesInteger(threadData_t *threadData, modelica_integer __omcQ_24in_5Feqn_5Fidx, modelica_integer _var_idx, modelica_integer _mode, modelica_metatype _mode_to_var, modelica_metatype _indices);
DLLDirection
modelica_metatype boxptr_NBSlice_updateDependenciesInteger(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn_5Fidx, modelica_metatype _var_idx, modelica_metatype _mode, modelica_metatype _mode_to_var, modelica_metatype _indices);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_updateDependenciesInteger,2,0) {(void*) boxptr_NBSlice_updateDependenciesInteger,0}};
#define boxvar_NBSlice_updateDependenciesInteger MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_updateDependenciesInteger)


DLLDirection
modelica_integer omc_NBSlice_updateDependenciesCref(threadData_t *threadData, modelica_integer __omcQ_24in_5Feqn_5Fidx, modelica_integer _var_idx, modelica_metatype _accum_dep_arr, modelica_metatype _vars, modelica_metatype _mapping);
DLLDirection
modelica_metatype boxptr_NBSlice_updateDependenciesCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feqn_5Fidx, modelica_metatype _var_idx, modelica_metatype _accum_dep_arr, modelica_metatype _vars, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_updateDependenciesCref,2,0) {(void*) boxptr_NBSlice_updateDependenciesCref,0}};
#define boxvar_NBSlice_updateDependenciesCref MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_updateDependenciesCref)


DLLDirection
void omc_NBSlice_fillDependencyArray(threadData_t *threadData, modelica_metatype _dep, modelica_integer _body_size, modelica_metatype _frames, modelica_metatype _mapping, modelica_metatype _map, modelica_fnptr _func);
DLLDirection
void boxptr_NBSlice_fillDependencyArray(threadData_t *threadData, modelica_metatype _dep, modelica_metatype _body_size, modelica_metatype _frames, modelica_metatype _mapping, modelica_metatype _map, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_fillDependencyArray,2,0) {(void*) boxptr_NBSlice_fillDependencyArray,0}};
#define boxvar_NBSlice_fillDependencyArray MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_fillDependencyArray)


DLLDirection
modelica_metatype omc_NBSlice_getDependentCrefsPseudoForCausalized(threadData_t *threadData, modelica_metatype _row_cref, modelica_metatype _dependencies, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _iter, modelica_integer _eqn_size, modelica_metatype _slice, modelica_boolean _implicit);
DLLDirection
modelica_metatype boxptr_NBSlice_getDependentCrefsPseudoForCausalized(threadData_t *threadData, modelica_metatype _row_cref, modelica_metatype _dependencies, modelica_metatype _var_rep, modelica_metatype _eqn_rep, modelica_metatype _var_rep_mapping, modelica_metatype _eqn_rep_mapping, modelica_metatype _iter, modelica_metatype _eqn_size, modelica_metatype _slice, modelica_metatype _implicit);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefsPseudoForCausalized,2,0) {(void*) boxptr_NBSlice_getDependentCrefsPseudoForCausalized,0}};
#define boxvar_NBSlice_getDependentCrefsPseudoForCausalized MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefsPseudoForCausalized)


DLLDirection
modelica_metatype omc_NBSlice_getDependentCrefIndicesPseudoFor(threadData_t *threadData, modelica_metatype _dependencies, modelica_metatype _map, modelica_metatype _mapping, modelica_integer _eqn_arr_idx, modelica_metatype _iter, modelica_metatype *out_mode_to_var);
DLLDirection
modelica_metatype boxptr_NBSlice_getDependentCrefIndicesPseudoFor(threadData_t *threadData, modelica_metatype _dependencies, modelica_metatype _map, modelica_metatype _mapping, modelica_metatype _eqn_arr_idx, modelica_metatype _iter, modelica_metatype *out_mode_to_var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefIndicesPseudoFor,2,0) {(void*) boxptr_NBSlice_getDependentCrefIndicesPseudoFor,0}};
#define boxvar_NBSlice_getDependentCrefIndicesPseudoFor MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefIndicesPseudoFor)


DLLDirection
modelica_metatype omc_NBSlice_getDependentCrefIndicesPseudoFull(threadData_t *threadData, modelica_metatype _dependencies, modelica_metatype _map, modelica_metatype _mapping, modelica_integer _eqn_arr_idx, modelica_metatype *out_mode_to_var);
DLLDirection
modelica_metatype boxptr_NBSlice_getDependentCrefIndicesPseudoFull(threadData_t *threadData, modelica_metatype _dependencies, modelica_metatype _map, modelica_metatype _mapping, modelica_metatype _eqn_arr_idx, modelica_metatype *out_mode_to_var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefIndicesPseudoFull,2,0) {(void*) boxptr_NBSlice_getDependentCrefIndicesPseudoFull,0}};
#define boxvar_NBSlice_getDependentCrefIndicesPseudoFull MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefIndicesPseudoFull)


DLLDirection
modelica_metatype omc_NBSlice_getDependentCrefIndicesPseudoScalar(threadData_t *threadData, modelica_metatype _dependencies, modelica_metatype _map, modelica_metatype _mapping);
#define boxptr_NBSlice_getDependentCrefIndicesPseudoScalar omc_NBSlice_getDependentCrefIndicesPseudoScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefIndicesPseudoScalar,2,0) {(void*) boxptr_NBSlice_getDependentCrefIndicesPseudoScalar,0}};
#define boxvar_NBSlice_getDependentCrefIndicesPseudoScalar MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefIndicesPseudoScalar)


DLLDirection
modelica_metatype omc_NBSlice_getUnsolvableExpCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _acc, modelica_metatype _map, modelica_boolean _pseudo);
DLLDirection
modelica_metatype boxptr_NBSlice_getUnsolvableExpCrefs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _acc, modelica_metatype _map, modelica_metatype _pseudo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getUnsolvableExpCrefs,2,0) {(void*) boxptr_NBSlice_getUnsolvableExpCrefs,0}};
#define boxvar_NBSlice_getUnsolvableExpCrefs MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getUnsolvableExpCrefs)


DLLDirection
modelica_metatype omc_NBSlice_getDependentCrefCausalized(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _acc, modelica_metatype _set);
#define boxptr_NBSlice_getDependentCrefCausalized omc_NBSlice_getDependentCrefCausalized
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefCausalized,2,0) {(void*) boxptr_NBSlice_getDependentCrefCausalized,0}};
#define boxvar_NBSlice_getDependentCrefCausalized MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCrefCausalized)


DLLDirection
modelica_metatype omc_NBSlice_getDependentCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _acc, modelica_metatype _map, modelica_boolean _pseudo);
DLLDirection
modelica_metatype boxptr_NBSlice_getDependentCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _acc, modelica_metatype _map, modelica_metatype _pseudo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCref,2,0) {(void*) boxptr_NBSlice_getDependentCref,0}};
#define boxvar_NBSlice_getDependentCref MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getDependentCref)


DLLDirection
modelica_metatype omc_NBSlice_getSliceCandidates(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _acc, modelica_metatype _name);
#define boxptr_NBSlice_getSliceCandidates omc_NBSlice_getSliceCandidates
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getSliceCandidates,2,0) {(void*) boxptr_NBSlice_getSliceCandidates,0}};
#define boxvar_NBSlice_getSliceCandidates MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getSliceCandidates)


DLLDirection
modelica_metatype omc_NBSlice_filterExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_fnptr _filter, modelica_metatype _acc);
#define boxptr_NBSlice_filterExp omc_NBSlice_filterExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_filterExp,2,0) {(void*) boxptr_NBSlice_filterExp,0}};
#define boxvar_NBSlice_filterExp MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_filterExp)


DLLDirection
modelica_metatype omc_NBSlice_check(threadData_t *threadData, modelica_metatype _slice, modelica_fnptr _func);
#define boxptr_NBSlice_check omc_NBSlice_check
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_check,2,0) {(void*) boxptr_NBSlice_check,0}};
#define boxvar_NBSlice_check MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_check)


DLLDirection
void omc_NBSlice_applyMutable(threadData_t *threadData, modelica_metatype _slice, modelica_fnptr _func);
#define boxptr_NBSlice_applyMutable omc_NBSlice_applyMutable
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_applyMutable,2,0) {(void*) boxptr_NBSlice_applyMutable,0}};
#define boxvar_NBSlice_applyMutable MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_applyMutable)


DLLDirection
modelica_metatype omc_NBSlice_apply(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fslice, modelica_fnptr _func);
#define boxptr_NBSlice_apply omc_NBSlice_apply
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_apply,2,0) {(void*) boxptr_NBSlice_apply,0}};
#define boxvar_NBSlice_apply MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_apply)


DLLDirection
modelica_metatype omc_NBSlice_fromMap(threadData_t *threadData, modelica_metatype _map);
#define boxptr_NBSlice_fromMap omc_NBSlice_fromMap
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_fromMap,2,0) {(void*) boxptr_NBSlice_fromMap,0}};
#define boxvar_NBSlice_fromMap MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_fromMap)


DLLDirection
modelica_metatype omc_NBSlice_fromTpl(threadData_t *threadData, modelica_metatype _tpl);
#define boxptr_NBSlice_fromTpl omc_NBSlice_fromTpl
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_fromTpl,2,0) {(void*) boxptr_NBSlice_fromTpl,0}};
#define boxvar_NBSlice_fromTpl MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_fromTpl)


DLLDirection
void omc_NBSlice_addToSliceMap(threadData_t *threadData, modelica_metatype _t, modelica_integer _i, modelica_metatype _map);
DLLDirection
void boxptr_NBSlice_addToSliceMap(threadData_t *threadData, modelica_metatype _t, modelica_metatype _i, modelica_metatype _map);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_addToSliceMap,2,0) {(void*) boxptr_NBSlice_addToSliceMap,0}};
#define boxvar_NBSlice_addToSliceMap MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_addToSliceMap)


DLLDirection
modelica_metatype omc_NBSlice_simplify(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fslice, modelica_fnptr _func);
#define boxptr_NBSlice_simplify omc_NBSlice_simplify
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_simplify,2,0) {(void*) boxptr_NBSlice_simplify,0}};
#define boxvar_NBSlice_simplify MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_simplify)


DLLDirection
modelica_integer omc_NBSlice_size(threadData_t *threadData, modelica_metatype _slice, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NBSlice_size(threadData_t *threadData, modelica_metatype _slice, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_size,2,0) {(void*) boxptr_NBSlice_size,0}};
#define boxvar_NBSlice_size MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_size)


DLLDirection
modelica_boolean omc_NBSlice_isFull(threadData_t *threadData, modelica_metatype _slice);
DLLDirection
modelica_metatype boxptr_NBSlice_isFull(threadData_t *threadData, modelica_metatype _slice);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_isFull,2,0) {(void*) boxptr_NBSlice_isFull,0}};
#define boxvar_NBSlice_isFull MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_isFull)


DLLDirection
modelica_string omc_NBSlice_lstToString(threadData_t *threadData, modelica_metatype _lst, modelica_fnptr _func, modelica_integer _maxLength);
DLLDirection
modelica_metatype boxptr_NBSlice_lstToString(threadData_t *threadData, modelica_metatype _lst, modelica_fnptr _func, modelica_metatype _maxLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_lstToString,2,0) {(void*) boxptr_NBSlice_lstToString,0}};
#define boxvar_NBSlice_lstToString MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_lstToString)


DLLDirection
modelica_string omc_NBSlice_toString(threadData_t *threadData, modelica_metatype _slice, modelica_fnptr _func, modelica_integer _maxLength);
DLLDirection
modelica_metatype boxptr_NBSlice_toString(threadData_t *threadData, modelica_metatype _slice, modelica_fnptr _func, modelica_metatype _maxLength);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_toString,2,0) {(void*) boxptr_NBSlice_toString,0}};
#define boxvar_NBSlice_toString MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_toString)


DLLDirection
modelica_boolean omc_NBSlice_isEqual(threadData_t *threadData, modelica_metatype _slice1, modelica_metatype _slice2, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NBSlice_isEqual(threadData_t *threadData, modelica_metatype _slice1, modelica_metatype _slice2, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_isEqual,2,0) {(void*) boxptr_NBSlice_isEqual,0}};
#define boxvar_NBSlice_isEqual MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_isEqual)


DLLDirection
modelica_integer omc_NBSlice_hash(threadData_t *threadData, modelica_metatype _slice, modelica_fnptr _func);
DLLDirection
modelica_metatype boxptr_NBSlice_hash(threadData_t *threadData, modelica_metatype _slice, modelica_fnptr _func);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_hash,2,0) {(void*) boxptr_NBSlice_hash,0}};
#define boxvar_NBSlice_hash MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_hash)


DLLDirection
modelica_metatype omc_NBSlice_getT(threadData_t *threadData, modelica_metatype _slice);
#define boxptr_NBSlice_getT omc_NBSlice_getT
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSlice_getT,2,0) {(void*) boxptr_NBSlice_getT,0}};
#define boxvar_NBSlice_getT MMC_REFSTRUCTLIT(boxvar_lit_NBSlice_getT)

#ifdef __cplusplus
}
#endif
#endif
