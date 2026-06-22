#ifndef Matching__H
#define Matching__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description BackendDAE_IndexType_NORMAL__desc;

extern struct record_description BackendDAE_IndexType_SOLVABLE__desc;

extern struct record_description BackendDAE_Matching_MATCHING__desc;

extern struct record_description BackendDAE_VarKind_VARIABLE__desc;

extern struct record_description DAE_ComponentPrefix_NOCOMPPRE__desc;

extern struct record_description DAE_ElementSource_SOURCE__desc;

extern struct record_description DAE_InlineType_DEFAULT__INLINE__desc;

extern struct record_description DAE_InlineType_NORM__INLINE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_SYMBOLIC__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_BOOL__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


#define boxptr_Matching_randSortSystem omc_Matching_randSortSystem


DLLDirection
void omc_Matching_testExternMatchingAlgorithm(threadData_t *threadData, modelica_integer _index, modelica_integer _matchingAlgorithm, modelica_integer _cheapId, modelica_integer _nv, modelica_integer _ne);
DLLDirection
void boxptr_Matching_testExternMatchingAlgorithm(threadData_t *threadData, modelica_metatype _index, modelica_metatype _matchingAlgorithm, modelica_metatype _cheapId, modelica_metatype _nv, modelica_metatype _ne);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_testExternMatchingAlgorithm,2,0) {(void*) boxptr_Matching_testExternMatchingAlgorithm,0}};
#define boxvar_Matching_testExternMatchingAlgorithm MMC_REFSTRUCTLIT(boxvar_lit_Matching_testExternMatchingAlgorithm)


DLLDirection
void omc_Matching_testExternMatchingAlgorithms1(threadData_t *threadData, modelica_metatype _matchingAlgorithms, modelica_integer _cheapId, modelica_integer _nv, modelica_integer _ne);
DLLDirection
void boxptr_Matching_testExternMatchingAlgorithms1(threadData_t *threadData, modelica_metatype _matchingAlgorithms, modelica_metatype _cheapId, modelica_metatype _nv, modelica_metatype _ne);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_testExternMatchingAlgorithms1,2,0) {(void*) boxptr_Matching_testExternMatchingAlgorithms1,0}};
#define boxvar_Matching_testExternMatchingAlgorithms1 MMC_REFSTRUCTLIT(boxvar_lit_Matching_testExternMatchingAlgorithms1)


DLLDirection
void omc_Matching_testMatchingAlgorithms1(threadData_t *threadData, modelica_metatype _matchingAlgorithms, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMatchingOptions);
#define boxptr_Matching_testMatchingAlgorithms1 omc_Matching_testMatchingAlgorithms1
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_testMatchingAlgorithms1,2,0) {(void*) boxptr_Matching_testMatchingAlgorithms1,0}};
#define boxvar_Matching_testMatchingAlgorithms1 MMC_REFSTRUCTLIT(boxvar_lit_Matching_testMatchingAlgorithms1)


DLLDirection
void omc_Matching_testMatchingAlgorithms(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _inMatchingOptions);
#define boxptr_Matching_testMatchingAlgorithms omc_Matching_testMatchingAlgorithms
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_testMatchingAlgorithms,2,0) {(void*) boxptr_Matching_testMatchingAlgorithms,0}};
#define boxvar_Matching_testMatchingAlgorithms MMC_REFSTRUCTLIT(boxvar_lit_Matching_testMatchingAlgorithms)


#define boxptr_Matching_appendNonEmpty omc_Matching_appendNonEmpty


DLLDirection
modelica_metatype omc_Matching_getEqnsforIndexReduction(threadData_t *threadData, modelica_metatype _U, modelica_integer _neqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _inArg);
DLLDirection
modelica_metatype boxptr_Matching_getEqnsforIndexReduction(threadData_t *threadData, modelica_metatype _U, modelica_metatype _neqns, modelica_metatype _m, modelica_metatype _mT, modelica_metatype _ass1, modelica_metatype _ass2, modelica_metatype _inArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_getEqnsforIndexReduction,2,0) {(void*) boxptr_Matching_getEqnsforIndexReduction,0}};
#define boxvar_Matching_getEqnsforIndexReduction MMC_REFSTRUCTLIT(boxvar_lit_Matching_getEqnsforIndexReduction)


DLLDirection
modelica_metatype omc_Matching_getAssigned(threadData_t *threadData, modelica_integer _ne, modelica_metatype _ass, modelica_metatype _inAssigned);
DLLDirection
modelica_metatype boxptr_Matching_getAssigned(threadData_t *threadData, modelica_metatype _ne, modelica_metatype _ass, modelica_metatype _inAssigned);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_getAssigned,2,0) {(void*) boxptr_Matching_getAssigned,0}};
#define boxvar_Matching_getAssigned MMC_REFSTRUCTLIT(boxvar_lit_Matching_getAssigned)


DLLDirection
modelica_metatype omc_Matching_getAssignedArray(threadData_t *threadData, modelica_metatype _ass);
#define boxptr_Matching_getAssignedArray omc_Matching_getAssignedArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_getAssignedArray,2,0) {(void*) boxptr_Matching_getAssignedArray,0}};
#define boxvar_Matching_getAssignedArray MMC_REFSTRUCTLIT(boxvar_lit_Matching_getAssignedArray)


DLLDirection
modelica_boolean omc_Matching_anyUnassigned(threadData_t *threadData, modelica_integer _ne, modelica_metatype _ass);
DLLDirection
modelica_metatype boxptr_Matching_anyUnassigned(threadData_t *threadData, modelica_metatype _ne, modelica_metatype _ass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_anyUnassigned,2,0) {(void*) boxptr_Matching_anyUnassigned,0}};
#define boxvar_Matching_anyUnassigned MMC_REFSTRUCTLIT(boxvar_lit_Matching_anyUnassigned)


DLLDirection
modelica_metatype omc_Matching_getUnassigned(threadData_t *threadData, modelica_integer _ne, modelica_metatype _ass, modelica_metatype _inUnassigned);
DLLDirection
modelica_metatype boxptr_Matching_getUnassigned(threadData_t *threadData, modelica_metatype _ne, modelica_metatype _ass, modelica_metatype _inUnassigned);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_getUnassigned,2,0) {(void*) boxptr_Matching_getUnassigned,0}};
#define boxvar_Matching_getUnassigned MMC_REFSTRUCTLIT(boxvar_lit_Matching_getUnassigned)


DLLDirection
modelica_metatype omc_Matching_getMarked(threadData_t *threadData, modelica_integer _ne, modelica_integer _mark, modelica_metatype _markArr, modelica_metatype _iMarked);
DLLDirection
modelica_metatype boxptr_Matching_getMarked(threadData_t *threadData, modelica_metatype _ne, modelica_metatype _mark, modelica_metatype _markArr, modelica_metatype _iMarked);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_getMarked,2,0) {(void*) boxptr_Matching_getMarked,0}};
#define boxvar_Matching_getMarked MMC_REFSTRUCTLIT(boxvar_lit_Matching_getMarked)


DLLDirection
modelica_boolean omc_Matching_isUnAssigned(threadData_t *threadData, modelica_metatype _ass, modelica_integer _i);
DLLDirection
modelica_metatype boxptr_Matching_isUnAssigned(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_isUnAssigned,2,0) {(void*) boxptr_Matching_isUnAssigned,0}};
#define boxvar_Matching_isUnAssigned MMC_REFSTRUCTLIT(boxvar_lit_Matching_isUnAssigned)


DLLDirection
modelica_boolean omc_Matching_isAssigned(threadData_t *threadData, modelica_metatype _ass, modelica_integer _i);
DLLDirection
modelica_metatype boxptr_Matching_isAssigned(threadData_t *threadData, modelica_metatype _ass, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_isAssigned,2,0) {(void*) boxptr_Matching_isAssigned,0}};
#define boxvar_Matching_isAssigned MMC_REFSTRUCTLIT(boxvar_lit_Matching_isAssigned)


DLLDirection
modelica_metatype omc_Matching_incomingEquations(threadData_t *threadData, modelica_integer _eqn, modelica_metatype _m, modelica_metatype _ass1);
DLLDirection
modelica_metatype boxptr_Matching_incomingEquations(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _m, modelica_metatype _ass1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_incomingEquations,2,0) {(void*) boxptr_Matching_incomingEquations,0}};
#define boxvar_Matching_incomingEquations MMC_REFSTRUCTLIT(boxvar_lit_Matching_incomingEquations)


DLLDirection
modelica_metatype omc_Matching_reachableEquations(threadData_t *threadData, modelica_integer _eqn, modelica_metatype _mT, modelica_metatype _ass2);
DLLDirection
modelica_metatype boxptr_Matching_reachableEquations(threadData_t *threadData, modelica_metatype _eqn, modelica_metatype _mT, modelica_metatype _ass2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_reachableEquations,2,0) {(void*) boxptr_Matching_reachableEquations,0}};
#define boxvar_Matching_reachableEquations MMC_REFSTRUCTLIT(boxvar_lit_Matching_reachableEquations)


DLLDirection
void omc_Matching_matchingExternalsetAdjacencyMatrix(threadData_t *threadData, modelica_integer _nv, modelica_integer _ne, modelica_metatype _m);
DLLDirection
void boxptr_Matching_matchingExternalsetAdjacencyMatrix(threadData_t *threadData, modelica_metatype _nv, modelica_metatype _ne, modelica_metatype _m);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_matchingExternalsetAdjacencyMatrix,2,0) {(void*) boxptr_Matching_matchingExternalsetAdjacencyMatrix,0}};
#define boxvar_Matching_matchingExternalsetAdjacencyMatrix MMC_REFSTRUCTLIT(boxvar_lit_Matching_matchingExternalsetAdjacencyMatrix)


#define boxptr_Matching_removeEdgesForNoDerivativeFunctionInputs omc_Matching_removeEdgesForNoDerivativeFunctionInputs


#define boxptr_Matching_removeEdgesToDiscreteEquations omc_Matching_removeEdgesToDiscreteEquations


DLLDirection
modelica_metatype omc_Matching_PR__FIFO__FAIRExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_PR__FIFO__FAIRExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_PR__FIFO__FAIRExternal,2,0) {(void*) boxptr_Matching_PR__FIFO__FAIRExternal,0}};
#define boxvar_Matching_PR__FIFO__FAIRExternal MMC_REFSTRUCTLIT(boxvar_lit_Matching_PR__FIFO__FAIRExternal)


DLLDirection
modelica_metatype omc_Matching_ABMPExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_ABMPExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_ABMPExternal,2,0) {(void*) boxptr_Matching_ABMPExternal,0}};
#define boxvar_Matching_ABMPExternal MMC_REFSTRUCTLIT(boxvar_lit_Matching_ABMPExternal)


DLLDirection
modelica_metatype omc_Matching_HKDWExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_HKDWExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_HKDWExternal,2,0) {(void*) boxptr_Matching_HKDWExternal,0}};
#define boxvar_Matching_HKDWExternal MMC_REFSTRUCTLIT(boxvar_lit_Matching_HKDWExternal)


DLLDirection
modelica_metatype omc_Matching_HKExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_HKExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_HKExternal,2,0) {(void*) boxptr_Matching_HKExternal,0}};
#define boxvar_Matching_HKExternal MMC_REFSTRUCTLIT(boxvar_lit_Matching_HKExternal)


DLLDirection
modelica_metatype omc_Matching_PFPlusExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_PFPlusExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_PFPlusExternal,2,0) {(void*) boxptr_Matching_PFPlusExternal,0}};
#define boxvar_Matching_PFPlusExternal MMC_REFSTRUCTLIT(boxvar_lit_Matching_PFPlusExternal)


DLLDirection
modelica_metatype omc_Matching_PFExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_PFExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_PFExternal,2,0) {(void*) boxptr_Matching_PFExternal,0}};
#define boxvar_Matching_PFExternal MMC_REFSTRUCTLIT(boxvar_lit_Matching_PFExternal)


DLLDirection
modelica_metatype omc_Matching_MC21AExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_MC21AExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_MC21AExternal,2,0) {(void*) boxptr_Matching_MC21AExternal,0}};
#define boxvar_Matching_MC21AExternal MMC_REFSTRUCTLIT(boxvar_lit_Matching_MC21AExternal)


DLLDirection
modelica_metatype omc_Matching_BFSBExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_BFSBExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_BFSBExternal,2,0) {(void*) boxptr_Matching_BFSBExternal,0}};
#define boxvar_Matching_BFSBExternal MMC_REFSTRUCTLIT(boxvar_lit_Matching_BFSBExternal)


DLLDirection
modelica_metatype omc_Matching_DFSBExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_DFSBExternal(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_DFSBExternal,2,0) {(void*) boxptr_Matching_DFSBExternal,0}};
#define boxvar_Matching_DFSBExternal MMC_REFSTRUCTLIT(boxvar_lit_Matching_DFSBExternal)


#define boxptr_Matching_ks__rand__match__degree omc_Matching_ks__rand__match__degree


#define boxptr_Matching_ks__rand__match omc_Matching_ks__rand__match


DLLDirection
modelica_metatype omc_Matching_PR__FIFO__FAIR(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_PR__FIFO__FAIR(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_PR__FIFO__FAIR,2,0) {(void*) boxptr_Matching_PR__FIFO__FAIR,0}};
#define boxvar_Matching_PR__FIFO__FAIR MMC_REFSTRUCTLIT(boxvar_lit_Matching_PR__FIFO__FAIR)


DLLDirection
modelica_metatype omc_Matching_ABMP(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_ABMP(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_ABMP,2,0) {(void*) boxptr_Matching_ABMP,0}};
#define boxvar_Matching_ABMP MMC_REFSTRUCTLIT(boxvar_lit_Matching_ABMP)


DLLDirection
modelica_metatype omc_Matching_HKDW(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_HKDW(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_HKDW,2,0) {(void*) boxptr_Matching_HKDW,0}};
#define boxvar_Matching_HKDW MMC_REFSTRUCTLIT(boxvar_lit_Matching_HKDW)


#define boxptr_Matching_HKgetUnmatched omc_Matching_HKgetUnmatched


DLLDirection
modelica_metatype omc_Matching_HK(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_HK(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_HK,2,0) {(void*) boxptr_Matching_HK,0}};
#define boxvar_Matching_HK MMC_REFSTRUCTLIT(boxvar_lit_Matching_HK)


DLLDirection
modelica_metatype omc_Matching_PFPlus(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_PFPlus(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_PFPlus,2,0) {(void*) boxptr_Matching_PFPlus,0}};
#define boxvar_Matching_PFPlus MMC_REFSTRUCTLIT(boxvar_lit_Matching_PFPlus)


DLLDirection
modelica_metatype omc_Matching_PF(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_PF(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_PF,2,0) {(void*) boxptr_Matching_PF,0}};
#define boxvar_Matching_PF MMC_REFSTRUCTLIT(boxvar_lit_Matching_PF)


#define boxptr_Matching_MC21A1fixArray omc_Matching_MC21A1fixArray


DLLDirection
modelica_metatype omc_Matching_MC21A(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_MC21A(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_MC21A,2,0) {(void*) boxptr_Matching_MC21A,0}};
#define boxvar_Matching_MC21A MMC_REFSTRUCTLIT(boxvar_lit_Matching_MC21A)


DLLDirection
modelica_metatype omc_Matching_DFSB(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_DFSB(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_DFSB,2,0) {(void*) boxptr_Matching_DFSB,0}};
#define boxvar_Matching_DFSB MMC_REFSTRUCTLIT(boxvar_lit_Matching_DFSB)


DLLDirection
modelica_metatype omc_Matching_BFSB(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_BFSB(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_BFSB,2,0) {(void*) boxptr_Matching_BFSB,0}};
#define boxvar_Matching_BFSB MMC_REFSTRUCTLIT(boxvar_lit_Matching_BFSB)


DLLDirection
modelica_metatype omc_Matching_DFSLH(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_DFSLH(threadData_t *threadData, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_oshared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_DFSLH,2,0) {(void*) boxptr_Matching_DFSLH,0}};
#define boxvar_Matching_DFSLH MMC_REFSTRUCTLIT(boxvar_lit_Matching_DFSLH)


DLLDirection
modelica_metatype omc_Matching_invertMatching(threadData_t *threadData, modelica_metatype _inAss);
#define boxptr_Matching_invertMatching omc_Matching_invertMatching
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_invertMatching,2,0) {(void*) boxptr_Matching_invertMatching,0}};
#define boxvar_Matching_invertMatching MMC_REFSTRUCTLIT(boxvar_lit_Matching_invertMatching)


DLLDirection
modelica_metatype omc_Matching_BBMatching(threadData_t *threadData, modelica_metatype _inSys, modelica_metatype _inShared, modelica_boolean _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_outShared, modelica_metatype *out_outArg);
DLLDirection
modelica_metatype boxptr_Matching_BBMatching(threadData_t *threadData, modelica_metatype _inSys, modelica_metatype _inShared, modelica_metatype _clearMatching, modelica_metatype _inMatchingOptions, modelica_fnptr _sssHandler, modelica_metatype _inArg, modelica_metatype *out_outShared, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_BBMatching,2,0) {(void*) boxptr_Matching_BBMatching,0}};
#define boxvar_Matching_BBMatching MMC_REFSTRUCTLIT(boxvar_lit_Matching_BBMatching)


DLLDirection
modelica_metatype omc_Matching_ContinueMatching(threadData_t *threadData, modelica_metatype _m, modelica_integer _nVars, modelica_integer _nEqns, modelica_metatype __omcQ_24in_5Fass1, modelica_metatype __omcQ_24in_5Fass2, modelica_boolean _stopAtSingularity, modelica_metatype *out_ass2, modelica_boolean *out_perfectMatching, modelica_metatype *out_eMark, modelica_metatype *out_vMark);
DLLDirection
modelica_metatype boxptr_Matching_ContinueMatching(threadData_t *threadData, modelica_metatype _m, modelica_metatype _nVars, modelica_metatype _nEqns, modelica_metatype __omcQ_24in_5Fass1, modelica_metatype __omcQ_24in_5Fass2, modelica_metatype _stopAtSingularity, modelica_metatype *out_ass2, modelica_metatype *out_perfectMatching, modelica_metatype *out_eMark, modelica_metatype *out_vMark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_ContinueMatching,2,0) {(void*) boxptr_Matching_ContinueMatching,0}};
#define boxvar_Matching_ContinueMatching MMC_REFSTRUCTLIT(boxvar_lit_Matching_ContinueMatching)


DLLDirection
modelica_metatype omc_Matching_RegularMatching(threadData_t *threadData, modelica_metatype _m, modelica_integer _nVars, modelica_integer _nEqns, modelica_metatype *out_ass2, modelica_boolean *out_perfectMatching, modelica_metatype *out_eMark, modelica_metatype *out_vMark);
DLLDirection
modelica_metatype boxptr_Matching_RegularMatching(threadData_t *threadData, modelica_metatype _m, modelica_metatype _nVars, modelica_metatype _nEqns, modelica_metatype *out_ass2, modelica_metatype *out_perfectMatching, modelica_metatype *out_eMark, modelica_metatype *out_vMark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_RegularMatching,2,0) {(void*) boxptr_Matching_RegularMatching,0}};
#define boxvar_Matching_RegularMatching MMC_REFSTRUCTLIT(boxvar_lit_Matching_RegularMatching)


DLLDirection
modelica_metatype omc_Matching_PerfectMatching(threadData_t *threadData, modelica_metatype _m, modelica_metatype *out_ass2);
#define boxptr_Matching_PerfectMatching omc_Matching_PerfectMatching
static const MMC_DEFSTRUCTLIT(boxvar_lit_Matching_PerfectMatching,2,0) {(void*) boxptr_Matching_PerfectMatching,0}};
#define boxvar_Matching_PerfectMatching MMC_REFSTRUCTLIT(boxvar_lit_Matching_PerfectMatching)

#ifdef __cplusplus
}
#endif
#endif
