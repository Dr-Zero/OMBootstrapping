#ifndef NFSections__H
#define NFSections__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_Exp_STRING__desc;

extern struct record_description NFSections_EMPTY__desc;

extern struct record_description NFSections_SECTIONS__desc;

extern struct record_description SCode_Comment_COMMENT__desc;

extern struct record_description SCode_Each_NOT__EACH__desc;

extern struct record_description SCode_Final_NOT__FINAL__desc;

extern struct record_description SCode_Mod_MOD__desc;

extern struct record_description SCode_Mod_NOMOD__desc;

extern struct record_description SCode_SubMod_NAMEMOD__desc;

extern struct record_description SCodeDump_SCodeDumpOptions_OPTIONS__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFSections_toFlatStream(threadData_t *threadData, modelica_metatype _sections, modelica_metatype _scopeName, modelica_metatype _format, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFSections_toFlatStream omc_NFSections_toFlatStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_toFlatStream,2,0) {(void*) boxptr_NFSections_toFlatStream,0}};
#define boxvar_NFSections_toFlatStream MMC_REFSTRUCTLIT(boxvar_lit_NFSections_toFlatStream)


DLLDirection
modelica_metatype omc_NFSections_toStream(threadData_t *threadData, modelica_metatype _sections, modelica_string _indent, modelica_metatype __omcQ_24in_5Fs);
#define boxptr_NFSections_toStream omc_NFSections_toStream
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_toStream,2,0) {(void*) boxptr_NFSections_toStream,0}};
#define boxvar_NFSections_toStream MMC_REFSTRUCTLIT(boxvar_lit_NFSections_toStream)


DLLDirection
modelica_boolean omc_NFSections_isEmpty(threadData_t *threadData, modelica_metatype _sections);
DLLDirection
modelica_metatype boxptr_NFSections_isEmpty(threadData_t *threadData, modelica_metatype _sections);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_isEmpty,2,0) {(void*) boxptr_NFSections_isEmpty,0}};
#define boxvar_NFSections_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_NFSections_isEmpty)


DLLDirection
void omc_NFSections_apply(threadData_t *threadData, modelica_metatype _sections, modelica_fnptr _eqFn, modelica_fnptr _algFn, modelica_fnptr _ieqFn, modelica_fnptr _ialgFn);
#define boxptr_NFSections_apply omc_NFSections_apply
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_apply,2,0) {(void*) boxptr_NFSections_apply,0}};
#define boxvar_NFSections_apply MMC_REFSTRUCTLIT(boxvar_lit_NFSections_apply)


DLLDirection
modelica_metatype omc_NFSections_foldExp(threadData_t *threadData, modelica_metatype _sections, modelica_fnptr _foldFn, modelica_metatype __omcQ_24in_5Farg);
#define boxptr_NFSections_foldExp omc_NFSections_foldExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_foldExp,2,0) {(void*) boxptr_NFSections_foldExp,0}};
#define boxvar_NFSections_foldExp MMC_REFSTRUCTLIT(boxvar_lit_NFSections_foldExp)


DLLDirection
modelica_metatype omc_NFSections_mapExp(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsections, modelica_fnptr _mapFn);
#define boxptr_NFSections_mapExp omc_NFSections_mapExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_mapExp,2,0) {(void*) boxptr_NFSections_mapExp,0}};
#define boxvar_NFSections_mapExp MMC_REFSTRUCTLIT(boxvar_lit_NFSections_mapExp)


DLLDirection
modelica_metatype omc_NFSections_map1(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsections, modelica_metatype _arg, modelica_fnptr _eqFn, modelica_fnptr _algFn, modelica_fnptr _ieqFn, modelica_fnptr _ialgFn);
#define boxptr_NFSections_map1 omc_NFSections_map1
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_map1,2,0) {(void*) boxptr_NFSections_map1,0}};
#define boxvar_NFSections_map1 MMC_REFSTRUCTLIT(boxvar_lit_NFSections_map1)


DLLDirection
modelica_metatype omc_NFSections_map_algId(threadData_t *threadData, modelica_metatype __omcQ_24in_5Falg);
#define boxptr_NFSections_map_algId omc_NFSections_map_algId
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_map_algId,2,0) {(void*) boxptr_NFSections_map_algId,0}};
#define boxvar_NFSections_map_algId MMC_REFSTRUCTLIT(boxvar_lit_NFSections_map_algId)


DLLDirection
modelica_metatype omc_NFSections_map_eqId(threadData_t *threadData, modelica_metatype __omcQ_24in_5Feq);
#define boxptr_NFSections_map_eqId omc_NFSections_map_eqId
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_map_eqId,2,0) {(void*) boxptr_NFSections_map_eqId,0}};
#define boxvar_NFSections_map_eqId MMC_REFSTRUCTLIT(boxvar_lit_NFSections_map_eqId)


DLLDirection
modelica_metatype omc_NFSections_map(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fsections, modelica_fnptr _eqFn, modelica_fnptr _algFn, modelica_fnptr _ieqFn, modelica_fnptr _ialgFn);
#define boxptr_NFSections_map omc_NFSections_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_map,2,0) {(void*) boxptr_NFSections_map,0}};
#define boxvar_NFSections_map MMC_REFSTRUCTLIT(boxvar_lit_NFSections_map)


DLLDirection
modelica_metatype omc_NFSections_join(threadData_t *threadData, modelica_metatype _sections1, modelica_metatype _sections2);
#define boxptr_NFSections_join omc_NFSections_join
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_join,2,0) {(void*) boxptr_NFSections_join,0}};
#define boxvar_NFSections_join MMC_REFSTRUCTLIT(boxvar_lit_NFSections_join)


DLLDirection
modelica_metatype omc_NFSections_append(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype _algorithms, modelica_metatype _initialAlgorithms, modelica_metatype __omcQ_24in_5Fsections);
#define boxptr_NFSections_append omc_NFSections_append
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_append,2,0) {(void*) boxptr_NFSections_append,0}};
#define boxvar_NFSections_append MMC_REFSTRUCTLIT(boxvar_lit_NFSections_append)


DLLDirection
modelica_metatype omc_NFSections_prependAlgorithm(threadData_t *threadData, modelica_metatype _alg, modelica_metatype __omcQ_24in_5Fsections, modelica_boolean _isInitial);
DLLDirection
modelica_metatype boxptr_NFSections_prependAlgorithm(threadData_t *threadData, modelica_metatype _alg, modelica_metatype __omcQ_24in_5Fsections, modelica_metatype _isInitial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_prependAlgorithm,2,0) {(void*) boxptr_NFSections_prependAlgorithm,0}};
#define boxvar_NFSections_prependAlgorithm MMC_REFSTRUCTLIT(boxvar_lit_NFSections_prependAlgorithm)


DLLDirection
modelica_metatype omc_NFSections_prependEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Fsections, modelica_boolean _isInitial);
DLLDirection
modelica_metatype boxptr_NFSections_prependEquation(threadData_t *threadData, modelica_metatype _eq, modelica_metatype __omcQ_24in_5Fsections, modelica_metatype _isInitial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_prependEquation,2,0) {(void*) boxptr_NFSections_prependEquation,0}};
#define boxvar_NFSections_prependEquation MMC_REFSTRUCTLIT(boxvar_lit_NFSections_prependEquation)


DLLDirection
modelica_metatype omc_NFSections_prepend(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype _algorithms, modelica_metatype _initialAlgorithms, modelica_metatype __omcQ_24in_5Fsections);
#define boxptr_NFSections_prepend omc_NFSections_prepend
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_prepend,2,0) {(void*) boxptr_NFSections_prepend,0}};
#define boxvar_NFSections_prepend MMC_REFSTRUCTLIT(boxvar_lit_NFSections_prepend)


DLLDirection
modelica_metatype omc_NFSections_equations(threadData_t *threadData, modelica_metatype _sections);
#define boxptr_NFSections_equations omc_NFSections_equations
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_equations,2,0) {(void*) boxptr_NFSections_equations,0}};
#define boxvar_NFSections_equations MMC_REFSTRUCTLIT(boxvar_lit_NFSections_equations)


DLLDirection
modelica_metatype omc_NFSections_new(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype _algorithms, modelica_metatype _initialAlgorithms);
#define boxptr_NFSections_new omc_NFSections_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFSections_new,2,0) {(void*) boxptr_NFSections_new,0}};
#define boxvar_NFSections_new MMC_REFSTRUCTLIT(boxvar_lit_NFSections_new)

#ifdef __cplusplus
}
#endif
#endif
