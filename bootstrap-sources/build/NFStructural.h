#ifndef NFStructural__H
#define NFStructural__H
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

extern struct record_description ErrorTypes_Severity_WARNING__desc;


DLLDirection
void omc_NFStructural_markSubscript(threadData_t *threadData, modelica_metatype _sub);
#define boxptr_NFStructural_markSubscript omc_NFStructural_markSubscript
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_markSubscript,2,0) {(void*) boxptr_NFStructural_markSubscript,0}};
#define boxvar_NFStructural_markSubscript MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_markSubscript)


DLLDirection
void omc_NFStructural_markSubscripts(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFStructural_markSubscripts omc_NFStructural_markSubscripts
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_markSubscripts,2,0) {(void*) boxptr_NFStructural_markSubscripts,0}};
#define boxvar_NFStructural_markSubscripts MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_markSubscripts)


DLLDirection
void omc_NFStructural_markExpSize__traverser(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFStructural_markExpSize__traverser omc_NFStructural_markExpSize__traverser
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_markExpSize__traverser,2,0) {(void*) boxptr_NFStructural_markExpSize__traverser,0}};
#define boxvar_NFStructural_markExpSize__traverser MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_markExpSize__traverser)


DLLDirection
void omc_NFStructural_markExpSize(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFStructural_markExpSize omc_NFStructural_markExpSize
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_markExpSize,2,0) {(void*) boxptr_NFStructural_markExpSize,0}};
#define boxvar_NFStructural_markExpSize MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_markExpSize)


DLLDirection
void omc_NFStructural_markComponent(threadData_t *threadData, modelica_metatype _component, modelica_metatype _node);
#define boxptr_NFStructural_markComponent omc_NFStructural_markComponent
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_markComponent,2,0) {(void*) boxptr_NFStructural_markComponent,0}};
#define boxvar_NFStructural_markComponent MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_markComponent)


DLLDirection
void omc_NFStructural_markSubscriptsInExp(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFStructural_markSubscriptsInExp omc_NFStructural_markSubscriptsInExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_markSubscriptsInExp,2,0) {(void*) boxptr_NFStructural_markSubscriptsInExp,0}};
#define boxvar_NFStructural_markSubscriptsInExp MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_markSubscriptsInExp)


DLLDirection
void omc_NFStructural_markExp(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFStructural_markExp omc_NFStructural_markExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_markExp,2,0) {(void*) boxptr_NFStructural_markExp,0}};
#define boxvar_NFStructural_markExp MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_markExp)


DLLDirection
void omc_NFStructural_markDimension(threadData_t *threadData, modelica_metatype _dimension);
#define boxptr_NFStructural_markDimension omc_NFStructural_markDimension
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_markDimension,2,0) {(void*) boxptr_NFStructural_markDimension,0}};
#define boxvar_NFStructural_markDimension MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_markDimension)


DLLDirection
modelica_boolean omc_NFStructural_isExpressionNotFixed(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _requireFinal, modelica_integer _maxDepth);
DLLDirection
modelica_metatype boxptr_NFStructural_isExpressionNotFixed(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _requireFinal, modelica_metatype _maxDepth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_isExpressionNotFixed,2,0) {(void*) boxptr_NFStructural_isExpressionNotFixed,0}};
#define boxvar_NFStructural_isExpressionNotFixed MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_isExpressionNotFixed)


DLLDirection
modelica_boolean omc_NFStructural_isComponentBindingNotFixed(threadData_t *threadData, modelica_metatype _component, modelica_metatype _node, modelica_boolean _requireFinal, modelica_integer _maxDepth, modelica_boolean _isRecord);
DLLDirection
modelica_metatype boxptr_NFStructural_isComponentBindingNotFixed(threadData_t *threadData, modelica_metatype _component, modelica_metatype _node, modelica_metatype _requireFinal, modelica_metatype _maxDepth, modelica_metatype _isRecord);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_isComponentBindingNotFixed,2,0) {(void*) boxptr_NFStructural_isComponentBindingNotFixed,0}};
#define boxvar_NFStructural_isComponentBindingNotFixed MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_isComponentBindingNotFixed)


DLLDirection
modelica_boolean omc_NFStructural_isBindingNotFixed(threadData_t *threadData, modelica_metatype _binding, modelica_boolean _requireFinal, modelica_integer _maxDepth);
DLLDirection
modelica_metatype boxptr_NFStructural_isBindingNotFixed(threadData_t *threadData, modelica_metatype _binding, modelica_metatype _requireFinal, modelica_metatype _maxDepth);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_isBindingNotFixed,2,0) {(void*) boxptr_NFStructural_isBindingNotFixed,0}};
#define boxvar_NFStructural_isBindingNotFixed MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_isBindingNotFixed)


DLLDirection
modelica_boolean omc_NFStructural_isStructuralComponent(threadData_t *threadData, modelica_metatype _component, modelica_metatype _compAttrs, modelica_metatype _compBinding, modelica_metatype _compNode, modelica_boolean _compEval, modelica_boolean _parentEval, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFStructural_isStructuralComponent(threadData_t *threadData, modelica_metatype _component, modelica_metatype _compAttrs, modelica_metatype _compBinding, modelica_metatype _compNode, modelica_metatype _compEval, modelica_metatype _parentEval, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFStructural_isStructuralComponent,2,0) {(void*) boxptr_NFStructural_isStructuralComponent,0}};
#define boxvar_NFStructural_isStructuralComponent MMC_REFSTRUCTLIT(boxvar_lit_NFStructural_isStructuralComponent)

#ifdef __cplusplus
}
#endif
#endif
