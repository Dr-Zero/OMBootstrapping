#ifndef NFInst__H
#define NFInst__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_ComponentRef_CREF__IDENT__desc;

extern struct record_description Absyn_Direction_BIDIR__desc;

extern struct record_description Absyn_Direction_INPUT__desc;

extern struct record_description Absyn_Direction_OUTPUT__desc;

extern struct record_description Absyn_Exp_BOOL__desc;

extern struct record_description Absyn_Exp_CALL__desc;

extern struct record_description Absyn_Exp_CREF__desc;

extern struct record_description Absyn_FunctionArgs_FUNCTIONARGS__desc;

extern struct record_description Absyn_FunctionPurity_NO__PURITY__desc;

extern struct record_description Absyn_InnerOuter_NOT__INNER__OUTER__desc;

extern struct record_description Absyn_IsField_NONFIELD__desc;

extern struct record_description Absyn_Path_IDENT__desc;

extern struct record_description Absyn_TypeSpec_TPATH__desc;

extern struct record_description DAE_ComponentPrefix_NOCOMPPRE__desc;

extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;

extern struct record_description DAE_ElementSource_SOURCE__desc;

extern struct record_description DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc;

extern struct record_description DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc;

extern struct record_description DAE_FunctionParallelism_FP__NON__PARALLEL__desc;

extern struct record_description DAE_InlineType_NO__INLINE__desc;

extern struct record_description DAE_Prefix_NOPRE__desc;

extern struct record_description DAE_Type_T__UNKNOWN__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description ErrorTypes_Severity_NOTIFICATION__desc;

extern struct record_description ErrorTypes_Severity_WARNING__desc;

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Flags_FlagData_BOOL__FLAG__desc;

extern struct record_description Flags_FlagData_STRING__FLAG__desc;

extern struct record_description Flags_FlagData_STRING__LIST__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description Flags_FlagVisibility_INTERNAL__desc;

extern struct record_description Flags_ValidOptions_STRING__DESC__OPTION__desc;

extern struct record_description NFAlgorithm_ALGORITHM__desc;

extern struct record_description NFAttributes_ATTRIBUTES__desc;

extern struct record_description NFBinding_INVALID__BINDING__desc;

extern struct record_description NFBinding_UNBOUND__desc;

extern struct record_description NFBinding_UNTYPED__BINDING__desc;

extern struct record_description NFClass_EXPANDED__CLASS__desc;

extern struct record_description NFClass_EXPANDED__DERIVED__desc;

extern struct record_description NFClass_INSTANCED__BUILTIN__desc;

extern struct record_description NFClass_INSTANCED__CLASS__desc;

extern struct record_description NFClass_NOT__INSTANTIATED__desc;

extern struct record_description NFClass_PARTIAL__BUILTIN__desc;

extern struct record_description NFClass_PARTIAL__CLASS__desc;

extern struct record_description NFClass_Prefixes_PREFIXES__desc;

extern struct record_description NFClassTree_ClassTree_FLAT__TREE__desc;

extern struct record_description NFClassTree_ClassTree_PARTIAL__TREE__desc;

extern struct record_description NFComplexType_CLASS__desc;

extern struct record_description NFComplexType_EXTENDS__TYPE__desc;

extern struct record_description NFComplexType_EXTERNAL__OBJECT__desc;

extern struct record_description NFComplexType_RECORD__desc;

extern struct record_description NFComponent_COMPONENT__desc;

extern struct record_description NFComponent_ITERATOR__desc;

extern struct record_description NFComponent_TYPE__ATTRIBUTE__desc;

extern struct record_description NFComponentRef_EMPTY__desc;

extern struct record_description NFComponentRef_WILD__desc;

extern struct record_description NFDimension_BOOLEAN__desc;

extern struct record_description NFDimension_ENUM__desc;

extern struct record_description NFDimension_RAW__DIM__desc;

extern struct record_description NFDimension_UNKNOWN__desc;

extern struct record_description NFDimension_UNTYPED__desc;

extern struct record_description NFDuplicateTree_Tree_EMPTY__desc;

extern struct record_description NFEquation_ASSERT__desc;

extern struct record_description NFEquation_CONNECT__desc;

extern struct record_description NFEquation_FOR__desc;

extern struct record_description NFEquation_IF__desc;

extern struct record_description NFEquation_NORETCALL__desc;

extern struct record_description NFEquation_REINIT__desc;

extern struct record_description NFEquation_TERMINATE__desc;

extern struct record_description NFEquation_WHEN__desc;

extern struct record_description NFExpression_BINARY__desc;

extern struct record_description NFExpression_BOOLEAN__desc;

extern struct record_description NFExpression_CREF__desc;

extern struct record_description NFExpression_END__desc;

extern struct record_description NFExpression_IF__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_LBINARY__desc;

extern struct record_description NFExpression_LUNARY__desc;

extern struct record_description NFExpression_MATRIX__desc;

extern struct record_description NFExpression_PARTIAL__FUNCTION__APPLICATION__desc;

extern struct record_description NFExpression_RANGE__desc;

extern struct record_description NFExpression_REAL__desc;

extern struct record_description NFExpression_RELATION__desc;

extern struct record_description NFExpression_STRING__desc;

extern struct record_description NFExpression_SUBSCRIPTED__EXP__desc;

extern struct record_description NFExpression_TUPLE__desc;

extern struct record_description NFExpression_TYPENAME__desc;

extern struct record_description NFFlatModel_FLAT__MODEL__desc;

extern struct record_description NFFunction_Function_FUNCTION__desc;

extern struct record_description NFFunction_Slot_SLOT__desc;

extern struct record_description NFInst_InstSettings_SETTINGS__desc;

extern struct record_description NFInstNode_CachedData_FUNCTION__desc;

extern struct record_description NFInstNode_CachedData_NO__CACHE__desc;

extern struct record_description NFInstNode_InstNode_CLASS__NODE__desc;

extern struct record_description NFInstNode_InstNode_COMPONENT__NODE__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description NFInstNode_InstNodeType_BASE__CLASS__desc;

extern struct record_description NFInstNode_InstNodeType_BUILTIN__CLASS__desc;

extern struct record_description NFInstNode_InstNodeType_DERIVED__CLASS__desc;

extern struct record_description NFInstNode_InstNodeType_IMPLICIT__SCOPE__desc;

extern struct record_description NFInstNode_InstNodeType_NORMAL__CLASS__desc;

extern struct record_description NFInstNode_InstNodeType_NORMAL__COMP__desc;

extern struct record_description NFInstNode_InstNodeType_REDECLARED__CLASS__desc;

extern struct record_description NFInstNode_InstNodeType_REDECLARED__COMP__desc;

extern struct record_description NFInstNode_InstNodeType_TOP__SCOPE__desc;

extern struct record_description NFLookupTree_Entry_COMPONENT__desc;

extern struct record_description NFLookupTree_Tree_EMPTY__desc;

extern struct record_description NFLookupTree_Tree_LEAF__desc;

extern struct record_description NFLookupTree_Tree_NODE__desc;

extern struct record_description NFModifier_Modifier_NOMOD__desc;

extern struct record_description NFModifier_ModifierScope_CLASS__desc;

extern struct record_description NFModifier_ModifierScope_COMPONENT__desc;

extern struct record_description NFPrefixes_Replaceable_NOT__REPLACEABLE__desc;

extern struct record_description NFRestriction_CLOCK__desc;

extern struct record_description NFRestriction_EXTERNAL__OBJECT__desc;

extern struct record_description NFSections_EMPTY__desc;

extern struct record_description NFSections_EXTERNAL__desc;

extern struct record_description NFStatement_ASSERT__desc;

extern struct record_description NFStatement_ASSIGNMENT__desc;

extern struct record_description NFStatement_BREAK__desc;

extern struct record_description NFStatement_FAILURE__desc;

extern struct record_description NFStatement_FOR__desc;

extern struct record_description NFStatement_ForType_NORMAL__desc;

extern struct record_description NFStatement_ForType_PARALLEL__desc;

extern struct record_description NFStatement_IF__desc;

extern struct record_description NFStatement_NORETCALL__desc;

extern struct record_description NFStatement_REINIT__desc;

extern struct record_description NFStatement_RETURN__desc;

extern struct record_description NFStatement_TERMINATE__desc;

extern struct record_description NFStatement_WHEN__desc;

extern struct record_description NFStatement_WHILE__desc;

extern struct record_description NFSubscript_RAW__SUBSCRIPT__desc;

extern struct record_description NFSubscript_WHOLE__desc;

extern struct record_description NFType_ARRAY__desc;

extern struct record_description NFType_BOOLEAN__desc;

extern struct record_description NFType_CLOCK__desc;

extern struct record_description NFType_COMPLEX__desc;

extern struct record_description NFType_ENUMERATION__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description NFType_POLYMORPHIC__desc;

extern struct record_description NFType_REAL__desc;

extern struct record_description NFType_STRING__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description NFType_UNTYPED__desc;

extern struct record_description SCode_AlgorithmSection_ALGORITHM__desc;

extern struct record_description SCode_Attributes_ATTR__desc;

extern struct record_description SCode_ClassDef_DERIVED__desc;

extern struct record_description SCode_ClassDef_PARTS__desc;

extern struct record_description SCode_Comment_COMMENT__desc;

extern struct record_description SCode_ConnectorType_POTENTIAL__desc;

extern struct record_description SCode_Element_CLASS__desc;

extern struct record_description SCode_Element_COMPONENT__desc;

extern struct record_description SCode_Encapsulated_ENCAPSULATED__desc;

extern struct record_description SCode_Encapsulated_NOT__ENCAPSULATED__desc;

extern struct record_description SCode_Final_NOT__FINAL__desc;

extern struct record_description SCode_FunctionRestriction_FR__NORMAL__FUNCTION__desc;

extern struct record_description SCode_Mod_NOMOD__desc;

extern struct record_description SCode_Parallelism_NON__PARALLEL__desc;

extern struct record_description SCode_Partial_NOT__PARTIAL__desc;

extern struct record_description SCode_Partial_PARTIAL__desc;

extern struct record_description SCode_Prefixes_PREFIXES__desc;

extern struct record_description SCode_Redeclare_NOT__REDECLARE__desc;

extern struct record_description SCode_Replaceable_NOT__REPLACEABLE__desc;

extern struct record_description SCode_Restriction_R__FUNCTION__desc;

extern struct record_description SCode_Restriction_R__PACKAGE__desc;

extern struct record_description SCode_Restriction_R__PREDEFINED__CLOCK__desc;

extern struct record_description SCode_Statement_ALG__ASSIGN__desc;

extern struct record_description SCode_Variability_VAR__desc;

extern struct record_description SCode_Visibility_PUBLIC__desc;

extern struct record_description SCodeDump_SCodeDumpOptions_OPTIONS__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
void omc_NFInst_checkInstanceRestriction(threadData_t *threadData, modelica_metatype _node, modelica_metatype _path, modelica_integer _context);
DLLDirection
void boxptr_NFInst_checkInstanceRestriction(threadData_t *threadData, modelica_metatype _node, modelica_metatype _path, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkInstanceRestriction,2,0) {(void*) boxptr_NFInst_checkInstanceRestriction,0}};
#define boxvar_NFInst_checkInstanceRestriction MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkInstanceRestriction)


DLLDirection
void omc_NFInst_checkPartialClass(threadData_t *threadData, modelica_metatype _node, modelica_integer _context);
DLLDirection
void boxptr_NFInst_checkPartialClass(threadData_t *threadData, modelica_metatype _node, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkPartialClass,2,0) {(void*) boxptr_NFInst_checkPartialClass,0}};
#define boxvar_NFInst_checkPartialClass MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkPartialClass)


DLLDirection
void omc_NFInst_markImplicitWhenExp__traverser(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFInst_markImplicitWhenExp__traverser omc_NFInst_markImplicitWhenExp__traverser
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_markImplicitWhenExp__traverser,2,0) {(void*) boxptr_NFInst_markImplicitWhenExp__traverser,0}};
#define boxvar_NFInst_markImplicitWhenExp__traverser MMC_REFSTRUCTLIT(boxvar_lit_NFInst_markImplicitWhenExp__traverser)


DLLDirection
void omc_NFInst_markImplicitWhenExp(threadData_t *threadData, modelica_metatype _exp);
#define boxptr_NFInst_markImplicitWhenExp omc_NFInst_markImplicitWhenExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_markImplicitWhenExp,2,0) {(void*) boxptr_NFInst_markImplicitWhenExp,0}};
#define boxvar_NFInst_markImplicitWhenExp MMC_REFSTRUCTLIT(boxvar_lit_NFInst_markImplicitWhenExp)


DLLDirection
void omc_NFInst_updateImplicitVariabilityStmt(threadData_t *threadData, modelica_metatype _stmt, modelica_boolean _inWhen);
DLLDirection
void boxptr_NFInst_updateImplicitVariabilityStmt(threadData_t *threadData, modelica_metatype _stmt, modelica_metatype _inWhen);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityStmt,2,0) {(void*) boxptr_NFInst_updateImplicitVariabilityStmt,0}};
#define boxvar_NFInst_updateImplicitVariabilityStmt MMC_REFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityStmt)


DLLDirection
void omc_NFInst_updateImplicitVariabilityStmts(threadData_t *threadData, modelica_metatype _stmtl, modelica_boolean _inWhen);
DLLDirection
void boxptr_NFInst_updateImplicitVariabilityStmts(threadData_t *threadData, modelica_metatype _stmtl, modelica_metatype _inWhen);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityStmts,2,0) {(void*) boxptr_NFInst_updateImplicitVariabilityStmts,0}};
#define boxvar_NFInst_updateImplicitVariabilityStmts MMC_REFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityStmts)


DLLDirection
void omc_NFInst_updateImplicitVariabilityAlg(threadData_t *threadData, modelica_metatype _alg);
#define boxptr_NFInst_updateImplicitVariabilityAlg omc_NFInst_updateImplicitVariabilityAlg
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityAlg,2,0) {(void*) boxptr_NFInst_updateImplicitVariabilityAlg,0}};
#define boxvar_NFInst_updateImplicitVariabilityAlg MMC_REFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityAlg)


DLLDirection
void omc_NFInst_updateImplicitVariabilityEq(threadData_t *threadData, modelica_metatype _eq, modelica_boolean _inWhen);
DLLDirection
void boxptr_NFInst_updateImplicitVariabilityEq(threadData_t *threadData, modelica_metatype _eq, modelica_metatype _inWhen);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityEq,2,0) {(void*) boxptr_NFInst_updateImplicitVariabilityEq,0}};
#define boxvar_NFInst_updateImplicitVariabilityEq MMC_REFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityEq)


DLLDirection
void omc_NFInst_updateImplicitVariabilityEql(threadData_t *threadData, modelica_metatype _eql, modelica_boolean _inWhen);
DLLDirection
void boxptr_NFInst_updateImplicitVariabilityEql(threadData_t *threadData, modelica_metatype _eql, modelica_metatype _inWhen);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityEql,2,0) {(void*) boxptr_NFInst_updateImplicitVariabilityEql,0}};
#define boxvar_NFInst_updateImplicitVariabilityEql MMC_REFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityEql)


DLLDirection
void omc_NFInst_updateImplicitVariabilityComp(threadData_t *threadData, modelica_metatype _component, modelica_boolean _parentEval, modelica_integer _context);
DLLDirection
void boxptr_NFInst_updateImplicitVariabilityComp(threadData_t *threadData, modelica_metatype _component, modelica_metatype _parentEval, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityComp,2,0) {(void*) boxptr_NFInst_updateImplicitVariabilityComp,0}};
#define boxvar_NFInst_updateImplicitVariabilityComp MMC_REFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariabilityComp)


DLLDirection
void omc_NFInst_updateImplicitVariability(threadData_t *threadData, modelica_metatype _node, modelica_boolean _parentEval, modelica_integer _context);
DLLDirection
void boxptr_NFInst_updateImplicitVariability(threadData_t *threadData, modelica_metatype _node, modelica_metatype _parentEval, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariability,2,0) {(void*) boxptr_NFInst_updateImplicitVariability,0}};
#define boxvar_NFInst_updateImplicitVariability MMC_REFSTRUCTLIT(boxvar_lit_NFInst_updateImplicitVariability)


DLLDirection
void omc_NFInst_checkTopLevelOuter(threadData_t *threadData, modelica_string _name, modelica_metatype _outerNode, modelica_metatype _scope, modelica_integer _context);
DLLDirection
void boxptr_NFInst_checkTopLevelOuter(threadData_t *threadData, modelica_metatype _name, modelica_metatype _outerNode, modelica_metatype _scope, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkTopLevelOuter,2,0) {(void*) boxptr_NFInst_checkTopLevelOuter,0}};
#define boxvar_NFInst_checkTopLevelOuter MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkTopLevelOuter)


DLLDirection
void omc_NFInst_insertGeneratedInners(threadData_t *threadData, modelica_metatype _node, modelica_metatype _topScope, modelica_integer _context);
DLLDirection
void boxptr_NFInst_insertGeneratedInners(threadData_t *threadData, modelica_metatype _node, modelica_metatype _topScope, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_insertGeneratedInners,2,0) {(void*) boxptr_NFInst_insertGeneratedInners,0}};
#define boxvar_NFInst_insertGeneratedInners MMC_REFSTRUCTLIT(boxvar_lit_NFInst_insertGeneratedInners)


DLLDirection
void omc_NFInst_checkIteratorShadowing(threadData_t *threadData, modelica_string _name, modelica_metatype _scope, modelica_metatype _info);
#define boxptr_NFInst_checkIteratorShadowing omc_NFInst_checkIteratorShadowing
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkIteratorShadowing,2,0) {(void*) boxptr_NFInst_checkIteratorShadowing,0}};
#define boxvar_NFInst_checkIteratorShadowing MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkIteratorShadowing)


DLLDirection
modelica_metatype omc_NFInst_addIteratorToScope(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Fscope, modelica_metatype _info, modelica_metatype _iter_type, modelica_metatype *out_iterator);
#define boxptr_NFInst_addIteratorToScope omc_NFInst_addIteratorToScope
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_addIteratorToScope,2,0) {(void*) boxptr_NFInst_addIteratorToScope,0}};
#define boxvar_NFInst_addIteratorToScope MMC_REFSTRUCTLIT(boxvar_lit_NFInst_addIteratorToScope)


DLLDirection
void omc_NFInst_checkAssignmentRestriction(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _info);
#define boxptr_NFInst_checkAssignmentRestriction omc_NFInst_checkAssignmentRestriction
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkAssignmentRestriction,2,0) {(void*) boxptr_NFInst_checkAssignmentRestriction,0}};
#define boxvar_NFInst_checkAssignmentRestriction MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkAssignmentRestriction)


DLLDirection
modelica_metatype omc_NFInst_instStatement(threadData_t *threadData, modelica_metatype _scodeStmt, modelica_metatype _scope, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instStatement(threadData_t *threadData, modelica_metatype _scodeStmt, modelica_metatype _scope, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instStatement,2,0) {(void*) boxptr_NFInst_instStatement,0}};
#define boxvar_NFInst_instStatement MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instStatement)


DLLDirection
modelica_metatype omc_NFInst_instStatements(threadData_t *threadData, modelica_metatype _scodeStmtl, modelica_metatype _scope, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instStatements(threadData_t *threadData, modelica_metatype _scodeStmtl, modelica_metatype _scope, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instStatements,2,0) {(void*) boxptr_NFInst_instStatements,0}};
#define boxvar_NFInst_instStatements MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instStatements)


DLLDirection
modelica_metatype omc_NFInst_instAlgorithmSection(threadData_t *threadData, modelica_metatype _algorithmSection, modelica_metatype _scope, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instAlgorithmSection(threadData_t *threadData, modelica_metatype _algorithmSection, modelica_metatype _scope, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instAlgorithmSection,2,0) {(void*) boxptr_NFInst_instAlgorithmSection,0}};
#define boxvar_NFInst_instAlgorithmSection MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instAlgorithmSection)


DLLDirection
modelica_metatype omc_NFInst_instAlgorithmSections(threadData_t *threadData, modelica_metatype _algorithmSections, modelica_metatype _scope, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instAlgorithmSections(threadData_t *threadData, modelica_metatype _algorithmSections, modelica_metatype _scope, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instAlgorithmSections,2,0) {(void*) boxptr_NFInst_instAlgorithmSections,0}};
#define boxvar_NFInst_instAlgorithmSections MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instAlgorithmSections)


DLLDirection
modelica_metatype omc_NFInst_makeSource(threadData_t *threadData, modelica_metatype _comment, modelica_metatype _info);
#define boxptr_NFInst_makeSource omc_NFInst_makeSource
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_makeSource,2,0) {(void*) boxptr_NFInst_makeSource,0}};
#define boxvar_NFInst_makeSource MMC_REFSTRUCTLIT(boxvar_lit_NFInst_makeSource)


DLLDirection
modelica_metatype omc_NFInst_instConnectorCref(threadData_t *threadData, modelica_metatype _absynCref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_instConnectorCref(threadData_t *threadData, modelica_metatype _absynCref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instConnectorCref,2,0) {(void*) boxptr_NFInst_instConnectorCref,0}};
#define boxvar_NFInst_instConnectorCref MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instConnectorCref)


DLLDirection
modelica_metatype omc_NFInst_instEquation(threadData_t *threadData, modelica_metatype _scodeEq, modelica_metatype _scope, modelica_metatype _connectBreaks, modelica_integer _context, modelica_metatype __omcQ_24in_5Fequations);
DLLDirection
modelica_metatype boxptr_NFInst_instEquation(threadData_t *threadData, modelica_metatype _scodeEq, modelica_metatype _scope, modelica_metatype _connectBreaks, modelica_metatype _context, modelica_metatype __omcQ_24in_5Fequations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instEquation,2,0) {(void*) boxptr_NFInst_instEquation,0}};
#define boxvar_NFInst_instEquation MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instEquation)


DLLDirection
modelica_metatype omc_NFInst_filterInstanceAPIEquations(threadData_t *threadData, modelica_metatype _eql);
#define boxptr_NFInst_filterInstanceAPIEquations omc_NFInst_filterInstanceAPIEquations
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_filterInstanceAPIEquations,2,0) {(void*) boxptr_NFInst_filterInstanceAPIEquations,0}};
#define boxvar_NFInst_filterInstanceAPIEquations MMC_REFSTRUCTLIT(boxvar_lit_NFInst_filterInstanceAPIEquations)


DLLDirection
modelica_metatype omc_NFInst_instEquations(threadData_t *threadData, modelica_metatype _scodeEql, modelica_metatype _scope, modelica_metatype _connectBreaks, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instEquations(threadData_t *threadData, modelica_metatype _scodeEql, modelica_metatype _scope, modelica_metatype _connectBreaks, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instEquations,2,0) {(void*) boxptr_NFInst_instEquations,0}};
#define boxvar_NFInst_instEquations MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instEquations)


DLLDirection
void omc_NFInst_checkExternalDeclLanguage(threadData_t *threadData, modelica_string _language, modelica_metatype _info);
#define boxptr_NFInst_checkExternalDeclLanguage omc_NFInst_checkExternalDeclLanguage
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkExternalDeclLanguage,2,0) {(void*) boxptr_NFInst_checkExternalDeclLanguage,0}};
#define boxvar_NFInst_checkExternalDeclLanguage MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkExternalDeclLanguage)


DLLDirection
modelica_metatype omc_NFInst_instExternalDecl(threadData_t *threadData, modelica_metatype _extDecl, modelica_metatype _scope, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instExternalDecl(threadData_t *threadData, modelica_metatype _extDecl, modelica_metatype _scope, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instExternalDecl,2,0) {(void*) boxptr_NFInst_instExternalDecl,0}};
#define boxvar_NFInst_instExternalDecl MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instExternalDecl)


DLLDirection
modelica_metatype omc_NFInst_instSections2(threadData_t *threadData, modelica_metatype _parts, modelica_metatype _scope, modelica_metatype _connectBreaks, modelica_integer _context, modelica_metatype __omcQ_24in_5Fsections);
DLLDirection
modelica_metatype boxptr_NFInst_instSections2(threadData_t *threadData, modelica_metatype _parts, modelica_metatype _scope, modelica_metatype _connectBreaks, modelica_metatype _context, modelica_metatype __omcQ_24in_5Fsections);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instSections2,2,0) {(void*) boxptr_NFInst_instSections2,0}};
#define boxvar_NFInst_instSections2 MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instSections2)


DLLDirection
modelica_metatype omc_NFInst_instSections(threadData_t *threadData, modelica_metatype _node, modelica_metatype _scope, modelica_metatype _connectBreaks, modelica_integer _context, modelica_metatype __omcQ_24in_5Fsections);
DLLDirection
modelica_metatype boxptr_NFInst_instSections(threadData_t *threadData, modelica_metatype _node, modelica_metatype _scope, modelica_metatype _connectBreaks, modelica_metatype _context, modelica_metatype __omcQ_24in_5Fsections);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instSections,2,0) {(void*) boxptr_NFInst_instSections,0}};
#define boxvar_NFInst_instSections MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instSections)


DLLDirection
modelica_metatype omc_NFInst_instPartEvalFunction(threadData_t *threadData, modelica_metatype _func, modelica_metatype _funcArgs, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_instPartEvalFunction(threadData_t *threadData, modelica_metatype _func, modelica_metatype _funcArgs, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instPartEvalFunction,2,0) {(void*) boxptr_NFInst_instPartEvalFunction,0}};
#define boxvar_NFInst_instPartEvalFunction MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instPartEvalFunction)


DLLDirection
modelica_metatype omc_NFInst_instSubscript(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_instSubscript(threadData_t *threadData, modelica_metatype _subscript, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instSubscript,2,0) {(void*) boxptr_NFInst_instSubscript,0}};
#define boxvar_NFInst_instSubscript MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instSubscript)


DLLDirection
modelica_metatype omc_NFInst_instCrefSubscripts(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_instCrefSubscripts(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instCrefSubscripts,2,0) {(void*) boxptr_NFInst_instCrefSubscripts,0}};
#define boxvar_NFInst_instCrefSubscripts MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instCrefSubscripts)


DLLDirection
void omc_NFInst_checkUnsubscriptableCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _info);
#define boxptr_NFInst_checkUnsubscriptableCref omc_NFInst_checkUnsubscriptableCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkUnsubscriptableCref,2,0) {(void*) boxptr_NFInst_checkUnsubscriptableCref,0}};
#define boxvar_NFInst_checkUnsubscriptableCref MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkUnsubscriptableCref)


DLLDirection
modelica_metatype omc_NFInst_instCrefTypename(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _node, modelica_metatype _info);
#define boxptr_NFInst_instCrefTypename omc_NFInst_instCrefTypename
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instCrefTypename,2,0) {(void*) boxptr_NFInst_instCrefTypename,0}};
#define boxvar_NFInst_instCrefTypename MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instCrefTypename)


DLLDirection
modelica_metatype omc_NFInst_instCrefFunction(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_instCrefFunction(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instCrefFunction,2,0) {(void*) boxptr_NFInst_instCrefFunction,0}};
#define boxvar_NFInst_instCrefFunction MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instCrefFunction)


DLLDirection
modelica_metatype omc_NFInst_instCrefComponent(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _node, modelica_metatype _scope, modelica_metatype _info);
#define boxptr_NFInst_instCrefComponent omc_NFInst_instCrefComponent
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instCrefComponent,2,0) {(void*) boxptr_NFInst_instCrefComponent,0}};
#define boxvar_NFInst_instCrefComponent MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instCrefComponent)


DLLDirection
modelica_metatype omc_NFInst_instCref(threadData_t *threadData, modelica_metatype _absynCref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_instCref(threadData_t *threadData, modelica_metatype _absynCref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instCref,2,0) {(void*) boxptr_NFInst_instCref,0}};
#define boxvar_NFInst_instCref MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instCref)


DLLDirection
modelica_metatype omc_NFInst_instExp(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_instExp(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instExp,2,0) {(void*) boxptr_NFInst_instExp,0}};
#define boxvar_NFInst_instExp MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instExp)


DLLDirection
modelica_metatype omc_NFInst_instExpOpt(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_instExpOpt(threadData_t *threadData, modelica_metatype _absynExp, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instExpOpt,2,0) {(void*) boxptr_NFInst_instExpOpt,0}};
#define boxvar_NFInst_instExpOpt MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instExpOpt)


DLLDirection
modelica_metatype omc_NFInst_instBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instBinding(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbinding, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instBinding,2,0) {(void*) boxptr_NFInst_instBinding,0}};
#define boxvar_NFInst_instBinding MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instBinding)


DLLDirection
void omc_NFInst_instComponentExpressions(threadData_t *threadData, modelica_metatype _component, modelica_integer _context, modelica_metatype _settings);
DLLDirection
void boxptr_NFInst_instComponentExpressions(threadData_t *threadData, modelica_metatype _component, modelica_metatype _context, modelica_metatype _settings);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instComponentExpressions,2,0) {(void*) boxptr_NFInst_instComponentExpressions,0}};
#define boxvar_NFInst_instComponentExpressions MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instComponentExpressions)


DLLDirection
modelica_metatype omc_NFInst_instBuiltinAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattribute, modelica_metatype _node, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instBuiltinAttribute(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fattribute, modelica_metatype _node, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instBuiltinAttribute,2,0) {(void*) boxptr_NFInst_instBuiltinAttribute,0}};
#define boxvar_NFInst_instBuiltinAttribute MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instBuiltinAttribute)


DLLDirection
void omc_NFInst_instRecordConstructor(threadData_t *threadData, modelica_metatype _node, modelica_integer _context);
DLLDirection
void boxptr_NFInst_instRecordConstructor(threadData_t *threadData, modelica_metatype _node, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instRecordConstructor,2,0) {(void*) boxptr_NFInst_instRecordConstructor,0}};
#define boxvar_NFInst_instRecordConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instRecordConstructor)


DLLDirection
void omc_NFInst_instComplexType(threadData_t *threadData, modelica_metatype _ty, modelica_integer _context);
DLLDirection
void boxptr_NFInst_instComplexType(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instComplexType,2,0) {(void*) boxptr_NFInst_instComplexType,0}};
#define boxvar_NFInst_instComplexType MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instComplexType)


DLLDirection
modelica_metatype omc_NFInst_makeRecordComplexType(threadData_t *threadData, modelica_metatype _node, modelica_metatype _cls);
#define boxptr_NFInst_makeRecordComplexType omc_NFInst_makeRecordComplexType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_makeRecordComplexType,2,0) {(void*) boxptr_NFInst_makeRecordComplexType,0}};
#define boxvar_NFInst_makeRecordComplexType MMC_REFSTRUCTLIT(boxvar_lit_NFInst_makeRecordComplexType)


DLLDirection
modelica_metatype omc_NFInst_makeComplexType(threadData_t *threadData, modelica_metatype _restriction, modelica_metatype _node, modelica_metatype _cls);
#define boxptr_NFInst_makeComplexType omc_NFInst_makeComplexType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_makeComplexType,2,0) {(void*) boxptr_NFInst_makeComplexType,0}};
#define boxvar_NFInst_makeComplexType MMC_REFSTRUCTLIT(boxvar_lit_NFInst_makeComplexType)


DLLDirection
modelica_metatype omc_NFInst_instExpressions(threadData_t *threadData, modelica_metatype _node, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fsections, modelica_metatype _connectBreaks, modelica_integer _context, modelica_metatype _settings);
DLLDirection
modelica_metatype boxptr_NFInst_instExpressions(threadData_t *threadData, modelica_metatype _node, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fsections, modelica_metatype _connectBreaks, modelica_metatype _context, modelica_metatype _settings);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instExpressions,2,0) {(void*) boxptr_NFInst_instExpressions,0}};
#define boxvar_NFInst_instExpressions MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instExpressions)


DLLDirection
modelica_metatype omc_NFInst_instResizable(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
#define boxptr_NFInst_instResizable omc_NFInst_instResizable
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instResizable,2,0) {(void*) boxptr_NFInst_instResizable,0}};
#define boxvar_NFInst_instResizable MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instResizable)


DLLDirection
modelica_metatype omc_NFInst_instDimension(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdimension, modelica_integer _context, modelica_metatype _settings, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_instDimension(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdimension, modelica_metatype _context, modelica_metatype _settings, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instDimension,2,0) {(void*) boxptr_NFInst_instDimension,0}};
#define boxvar_NFInst_instDimension MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instDimension)


DLLDirection
void omc_NFInst_updateParameterBinding(threadData_t *threadData, modelica_metatype _node, modelica_integer _context);
DLLDirection
void boxptr_NFInst_updateParameterBinding(threadData_t *threadData, modelica_metatype _node, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_updateParameterBinding,2,0) {(void*) boxptr_NFInst_updateParameterBinding,0}};
#define boxvar_NFInst_updateParameterBinding MMC_REFSTRUCTLIT(boxvar_lit_NFInst_updateParameterBinding)


DLLDirection
void omc_NFInst_checkRecursiveDefinition(threadData_t *threadData, modelica_metatype _componentType, modelica_metatype _component, modelica_boolean _limitReached);
DLLDirection
void boxptr_NFInst_checkRecursiveDefinition(threadData_t *threadData, modelica_metatype _componentType, modelica_metatype _component, modelica_metatype _limitReached);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkRecursiveDefinition,2,0) {(void*) boxptr_NFInst_checkRecursiveDefinition,0}};
#define boxvar_NFInst_checkRecursiveDefinition MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkRecursiveDefinition)


DLLDirection
modelica_metatype omc_NFInst_instTypeSpec(threadData_t *threadData, modelica_metatype _typeSpec, modelica_metatype _modifier, modelica_metatype _attributes, modelica_boolean _useBinding, modelica_metatype _scope, modelica_metatype _parent, modelica_metatype _info, modelica_integer _instLevel, modelica_integer _context, modelica_metatype *out_outAttributes);
DLLDirection
modelica_metatype boxptr_NFInst_instTypeSpec(threadData_t *threadData, modelica_metatype _typeSpec, modelica_metatype _modifier, modelica_metatype _attributes, modelica_metatype _useBinding, modelica_metatype _scope, modelica_metatype _parent, modelica_metatype _info, modelica_metatype _instLevel, modelica_metatype _context, modelica_metatype *out_outAttributes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instTypeSpec,2,0) {(void*) boxptr_NFInst_instTypeSpec,0}};
#define boxvar_NFInst_instTypeSpec MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instTypeSpec)


DLLDirection
void omc_NFInst_checkOuterComponentMod(threadData_t *threadData, modelica_metatype _node, modelica_integer _context);
DLLDirection
void boxptr_NFInst_checkOuterComponentMod(threadData_t *threadData, modelica_metatype _node, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkOuterComponentMod,2,0) {(void*) boxptr_NFInst_checkOuterComponentMod,0}};
#define boxvar_NFInst_checkOuterComponentMod MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkOuterComponentMod)


DLLDirection
void omc_NFInst_redeclareComponent(threadData_t *threadData, modelica_metatype _redeclareNode, modelica_metatype _originalNode, modelica_metatype _outerMod, modelica_metatype _constrainingMod, modelica_metatype _propagatedSubs, modelica_metatype _outerAttr, modelica_metatype _redeclaredNode, modelica_integer _instLevel, modelica_integer _context);
DLLDirection
void boxptr_NFInst_redeclareComponent(threadData_t *threadData, modelica_metatype _redeclareNode, modelica_metatype _originalNode, modelica_metatype _outerMod, modelica_metatype _constrainingMod, modelica_metatype _propagatedSubs, modelica_metatype _outerAttr, modelica_metatype _redeclaredNode, modelica_metatype _instLevel, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_redeclareComponent,2,0) {(void*) boxptr_NFInst_redeclareComponent,0}};
#define boxvar_NFInst_redeclareComponent MMC_REFSTRUCTLIT(boxvar_lit_NFInst_redeclareComponent)


DLLDirection
void omc_NFInst_checkBindingRestriction(threadData_t *threadData, modelica_metatype _restriction, modelica_metatype _binding, modelica_metatype _component, modelica_metatype _info);
#define boxptr_NFInst_checkBindingRestriction omc_NFInst_checkBindingRestriction
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkBindingRestriction,2,0) {(void*) boxptr_NFInst_checkBindingRestriction,0}};
#define boxvar_NFInst_checkBindingRestriction MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkBindingRestriction)


DLLDirection
void omc_NFInst_checkPartialComponent(threadData_t *threadData, modelica_metatype _compNode, modelica_metatype _compAttr, modelica_metatype _clsNode, modelica_boolean _isPartial, modelica_metatype _res, modelica_integer _context, modelica_metatype _info);
DLLDirection
void boxptr_NFInst_checkPartialComponent(threadData_t *threadData, modelica_metatype _compNode, modelica_metatype _compAttr, modelica_metatype _clsNode, modelica_metatype _isPartial, modelica_metatype _res, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkPartialComponent,2,0) {(void*) boxptr_NFInst_checkPartialComponent,0}};
#define boxvar_NFInst_checkPartialComponent MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkPartialComponent)


DLLDirection
modelica_metatype omc_NFInst_propagateRedeclaredMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _component);
#define boxptr_NFInst_propagateRedeclaredMod omc_NFInst_propagateRedeclaredMod
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_propagateRedeclaredMod,2,0) {(void*) boxptr_NFInst_propagateRedeclaredMod,0}};
#define boxvar_NFInst_propagateRedeclaredMod MMC_REFSTRUCTLIT(boxvar_lit_NFInst_propagateRedeclaredMod)


DLLDirection
modelica_metatype omc_NFInst_getConstrainingMod(threadData_t *threadData, modelica_metatype _element, modelica_metatype _parent, modelica_metatype _outerMod, modelica_integer _instLevel);
DLLDirection
modelica_metatype boxptr_NFInst_getConstrainingMod(threadData_t *threadData, modelica_metatype _element, modelica_metatype _parent, modelica_metatype _outerMod, modelica_metatype _instLevel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_getConstrainingMod,2,0) {(void*) boxptr_NFInst_getConstrainingMod,0}};
#define boxvar_NFInst_getConstrainingMod MMC_REFSTRUCTLIT(boxvar_lit_NFInst_getConstrainingMod)


DLLDirection
modelica_metatype omc_NFInst_instConstrainingMod(threadData_t *threadData, modelica_metatype _element, modelica_metatype _parent, modelica_integer _instLevel);
DLLDirection
modelica_metatype boxptr_NFInst_instConstrainingMod(threadData_t *threadData, modelica_metatype _element, modelica_metatype _parent, modelica_metatype _instLevel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instConstrainingMod,2,0) {(void*) boxptr_NFInst_instConstrainingMod,0}};
#define boxvar_NFInst_instConstrainingMod MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instConstrainingMod)


DLLDirection
modelica_metatype omc_NFInst_instElementModifier(threadData_t *threadData, modelica_metatype _element, modelica_metatype _component, modelica_metatype _parent, modelica_integer _instLevel);
DLLDirection
modelica_metatype boxptr_NFInst_instElementModifier(threadData_t *threadData, modelica_metatype _element, modelica_metatype _component, modelica_metatype _parent, modelica_metatype _instLevel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instElementModifier,2,0) {(void*) boxptr_NFInst_instElementModifier,0}};
#define boxvar_NFInst_instElementModifier MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instElementModifier)


DLLDirection
void omc_NFInst_instComponentDef(threadData_t *threadData, modelica_metatype _component, modelica_metatype _outerMod, modelica_metatype _innerMod, modelica_metatype _attributes, modelica_boolean _useBinding, modelica_metatype _node, modelica_metatype _parent, modelica_integer _instLevel, modelica_metatype _originalAttr, modelica_metatype _propagatedSubs, modelica_integer _context);
DLLDirection
void boxptr_NFInst_instComponentDef(threadData_t *threadData, modelica_metatype _component, modelica_metatype _outerMod, modelica_metatype _innerMod, modelica_metatype _attributes, modelica_metatype _useBinding, modelica_metatype _node, modelica_metatype _parent, modelica_metatype _instLevel, modelica_metatype _originalAttr, modelica_metatype _propagatedSubs, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instComponentDef,2,0) {(void*) boxptr_NFInst_instComponentDef,0}};
#define boxvar_NFInst_instComponentDef MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instComponentDef)


DLLDirection
void omc_NFInst_instComponent(threadData_t *threadData, modelica_metatype _node, modelica_metatype _attributes, modelica_metatype _innerMod, modelica_boolean _useBinding, modelica_integer _instLevel, modelica_integer _context, modelica_metatype _originalAttr, modelica_metatype _propagatedSubs);
DLLDirection
void boxptr_NFInst_instComponent(threadData_t *threadData, modelica_metatype _node, modelica_metatype _attributes, modelica_metatype _innerMod, modelica_metatype _useBinding, modelica_metatype _instLevel, modelica_metatype _context, modelica_metatype _originalAttr, modelica_metatype _propagatedSubs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instComponent,2,0) {(void*) boxptr_NFInst_instComponent,0}};
#define boxvar_NFInst_instComponent MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instComponent)


DLLDirection
modelica_metatype omc_NFInst_redeclareEnum(threadData_t *threadData, modelica_metatype _redeclareClass, modelica_metatype _originalClass, modelica_metatype _prefixes, modelica_metatype _outerMod, modelica_metatype _redeclareNode, modelica_metatype _originalNode, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_redeclareEnum(threadData_t *threadData, modelica_metatype _redeclareClass, modelica_metatype _originalClass, modelica_metatype _prefixes, modelica_metatype _outerMod, modelica_metatype _redeclareNode, modelica_metatype _originalNode, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_redeclareEnum,2,0) {(void*) boxptr_NFInst_redeclareEnum,0}};
#define boxvar_NFInst_redeclareEnum MMC_REFSTRUCTLIT(boxvar_lit_NFInst_redeclareEnum)


DLLDirection
modelica_metatype omc_NFInst_redeclareClass(threadData_t *threadData, modelica_metatype _redeclareNode, modelica_metatype _originalNode, modelica_metatype _outerMod, modelica_metatype _constrainingMod, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_redeclareClass(threadData_t *threadData, modelica_metatype _redeclareNode, modelica_metatype _originalNode, modelica_metatype _outerMod, modelica_metatype _constrainingMod, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_redeclareClass,2,0) {(void*) boxptr_NFInst_redeclareClass,0}};
#define boxvar_NFInst_redeclareClass MMC_REFSTRUCTLIT(boxvar_lit_NFInst_redeclareClass)


DLLDirection
modelica_metatype omc_NFInst_redeclareComponentElement(threadData_t *threadData, modelica_metatype _redeclareComp, modelica_metatype _replaceableComp, modelica_integer _instLevel, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_redeclareComponentElement(threadData_t *threadData, modelica_metatype _redeclareComp, modelica_metatype _replaceableComp, modelica_metatype _instLevel, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_redeclareComponentElement,2,0) {(void*) boxptr_NFInst_redeclareComponentElement,0}};
#define boxvar_NFInst_redeclareComponentElement MMC_REFSTRUCTLIT(boxvar_lit_NFInst_redeclareComponentElement)


DLLDirection
modelica_metatype omc_NFInst_redeclareClassElement(threadData_t *threadData, modelica_metatype _redeclareCls, modelica_metatype _replaceableCls, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_redeclareClassElement(threadData_t *threadData, modelica_metatype _redeclareCls, modelica_metatype _replaceableCls, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_redeclareClassElement,2,0) {(void*) boxptr_NFInst_redeclareClassElement,0}};
#define boxvar_NFInst_redeclareClassElement MMC_REFSTRUCTLIT(boxvar_lit_NFInst_redeclareClassElement)


DLLDirection
void omc_NFInst_redeclareElements(threadData_t *threadData, modelica_metatype _chain, modelica_integer _instLevel, modelica_integer _context);
DLLDirection
void boxptr_NFInst_redeclareElements(threadData_t *threadData, modelica_metatype _chain, modelica_metatype _instLevel, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_redeclareElements,2,0) {(void*) boxptr_NFInst_redeclareElements,0}};
#define boxvar_NFInst_redeclareElements MMC_REFSTRUCTLIT(boxvar_lit_NFInst_redeclareElements)


DLLDirection
modelica_metatype omc_NFInst_redeclareClasses(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _parent, modelica_integer _context, modelica_integer _instLevel);
DLLDirection
modelica_metatype boxptr_NFInst_redeclareClasses(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _parent, modelica_metatype _context, modelica_metatype _instLevel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_redeclareClasses,2,0) {(void*) boxptr_NFInst_redeclareClasses,0}};
#define boxvar_NFInst_redeclareClasses MMC_REFSTRUCTLIT(boxvar_lit_NFInst_redeclareClasses)


DLLDirection
modelica_metatype omc_NFInst_applyModifier(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fcls, modelica_metatype _parent, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_applyModifier(threadData_t *threadData, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fcls, modelica_metatype _parent, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_applyModifier,2,0) {(void*) boxptr_NFInst_applyModifier,0}};
#define boxvar_NFInst_applyModifier MMC_REFSTRUCTLIT(boxvar_lit_NFInst_applyModifier)


DLLDirection
modelica_metatype omc_NFInst_instExtends(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _attributes, modelica_boolean _useBinding, modelica_integer _instLevel, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instExtends(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _attributes, modelica_metatype _useBinding, modelica_metatype _instLevel, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instExtends,2,0) {(void*) boxptr_NFInst_instExtends,0}};
#define boxvar_NFInst_instExtends MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instExtends)


DLLDirection
modelica_metatype omc_NFInst_applyExtendsVisibility(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_integer _visibility);
DLLDirection
modelica_metatype boxptr_NFInst_applyExtendsVisibility(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _visibility);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_applyExtendsVisibility,2,0) {(void*) boxptr_NFInst_applyExtendsVisibility,0}};
#define boxvar_NFInst_applyExtendsVisibility MMC_REFSTRUCTLIT(boxvar_lit_NFInst_applyExtendsVisibility)


DLLDirection
modelica_metatype omc_NFInst_modifyExtends(threadData_t *threadData, modelica_metatype __omcQ_24in_5FextendsNode, modelica_metatype _scope, modelica_integer _context, modelica_integer _instLevel);
DLLDirection
modelica_metatype boxptr_NFInst_modifyExtends(threadData_t *threadData, modelica_metatype __omcQ_24in_5FextendsNode, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _instLevel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_modifyExtends,2,0) {(void*) boxptr_NFInst_modifyExtends,0}};
#define boxvar_NFInst_modifyExtends MMC_REFSTRUCTLIT(boxvar_lit_NFInst_modifyExtends)


DLLDirection
modelica_metatype omc_NFInst_instPackage(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_instPackage(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instPackage,2,0) {(void*) boxptr_NFInst_instPackage,0}};
#define boxvar_NFInst_instPackage MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instPackage)


DLLDirection
void omc_NFInst_instExternalObjectStructors(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _parent, modelica_integer _context);
DLLDirection
void boxptr_NFInst_instExternalObjectStructors(threadData_t *threadData, modelica_metatype _ty, modelica_metatype _parent, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instExternalObjectStructors,2,0) {(void*) boxptr_NFInst_instExternalObjectStructors,0}};
#define boxvar_NFInst_instExternalObjectStructors MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instExternalObjectStructors)


DLLDirection
modelica_metatype omc_NFInst_updateComponentType(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomponent, modelica_metatype _cls);
#define boxptr_NFInst_updateComponentType omc_NFInst_updateComponentType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_updateComponentType,2,0) {(void*) boxptr_NFInst_updateComponentType,0}};
#define boxvar_NFInst_updateComponentType MMC_REFSTRUCTLIT(boxvar_lit_NFInst_updateComponentType)


DLLDirection
modelica_metatype omc_NFInst_instClassDef(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _outerMod, modelica_metatype __omcQ_24in_5Fattributes, modelica_boolean _useBinding, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _parent, modelica_integer _instLevel, modelica_integer _context, modelica_metatype *out_node);
DLLDirection
modelica_metatype boxptr_NFInst_instClassDef(threadData_t *threadData, modelica_metatype _cls, modelica_metatype _outerMod, modelica_metatype __omcQ_24in_5Fattributes, modelica_metatype _useBinding, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _parent, modelica_metatype _instLevel, modelica_metatype _context, modelica_metatype *out_node);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instClassDef,2,0) {(void*) boxptr_NFInst_instClassDef,0}};
#define boxvar_NFInst_instClassDef MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instClassDef)


DLLDirection
modelica_metatype omc_NFInst_instClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fattributes, modelica_boolean _useBinding, modelica_integer _instLevel, modelica_metatype _parent, modelica_integer _context, modelica_metatype *out_attributes);
DLLDirection
modelica_metatype boxptr_NFInst_instClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _modifier, modelica_metatype __omcQ_24in_5Fattributes, modelica_metatype _useBinding, modelica_metatype _instLevel, modelica_metatype _parent, modelica_metatype _context, modelica_metatype *out_attributes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instClass,2,0) {(void*) boxptr_NFInst_instClass,0}};
#define boxvar_NFInst_instClass MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instClass)


DLLDirection
modelica_metatype omc_NFInst_expandClassDerivedComplex(threadData_t *threadData, modelica_metatype _element, modelica_metatype _definition, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _info);
#define boxptr_NFInst_expandClassDerivedComplex omc_NFInst_expandClassDerivedComplex
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_expandClassDerivedComplex,2,0) {(void*) boxptr_NFInst_expandClassDerivedComplex,0}};
#define boxvar_NFInst_expandClassDerivedComplex MMC_REFSTRUCTLIT(boxvar_lit_NFInst_expandClassDerivedComplex)


DLLDirection
modelica_metatype omc_NFInst_expandClassDerived(threadData_t *threadData, modelica_metatype _element, modelica_metatype _definition, modelica_metatype __omcQ_24in_5Fnode, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFInst_expandClassDerived(threadData_t *threadData, modelica_metatype _element, modelica_metatype _definition, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_expandClassDerived,2,0) {(void*) boxptr_NFInst_expandClassDerived,0}};
#define boxvar_NFInst_expandClassDerived MMC_REFSTRUCTLIT(boxvar_lit_NFInst_expandClassDerived)


DLLDirection
void omc_NFInst_checkElementNotReplaceable(threadData_t *threadData, modelica_metatype _node);
#define boxptr_NFInst_checkElementNotReplaceable omc_NFInst_checkElementNotReplaceable
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkElementNotReplaceable,2,0) {(void*) boxptr_NFInst_checkElementNotReplaceable,0}};
#define boxvar_NFInst_checkElementNotReplaceable MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkElementNotReplaceable)


DLLDirection
modelica_metatype omc_NFInst_makeExternalObjectType(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _node);
#define boxptr_NFInst_makeExternalObjectType omc_NFInst_makeExternalObjectType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_makeExternalObjectType,2,0) {(void*) boxptr_NFInst_makeExternalObjectType,0}};
#define boxvar_NFInst_makeExternalObjectType MMC_REFSTRUCTLIT(boxvar_lit_NFInst_makeExternalObjectType)


DLLDirection
void omc_NFInst_checkBuiltinTypeExtends(threadData_t *threadData, modelica_metatype _builtinExtends, modelica_metatype _tree, modelica_metatype _node);
#define boxptr_NFInst_checkBuiltinTypeExtends omc_NFInst_checkBuiltinTypeExtends
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkBuiltinTypeExtends,2,0) {(void*) boxptr_NFInst_checkBuiltinTypeExtends,0}};
#define boxvar_NFInst_checkBuiltinTypeExtends MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkBuiltinTypeExtends)


DLLDirection
modelica_metatype omc_NFInst_expandExternalObject(threadData_t *threadData, modelica_metatype _clsTree, modelica_metatype __omcQ_24in_5Fnode);
#define boxptr_NFInst_expandExternalObject omc_NFInst_expandExternalObject
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_expandExternalObject,2,0) {(void*) boxptr_NFInst_expandExternalObject,0}};
#define boxvar_NFInst_expandExternalObject MMC_REFSTRUCTLIT(boxvar_lit_NFInst_expandExternalObject)


DLLDirection
void omc_NFInst_checkReplaceableBaseClass(threadData_t *threadData, modelica_metatype _baseClasses, modelica_metatype _basePath, modelica_metatype _info);
#define boxptr_NFInst_checkReplaceableBaseClass omc_NFInst_checkReplaceableBaseClass
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkReplaceableBaseClass,2,0) {(void*) boxptr_NFInst_checkReplaceableBaseClass,0}};
#define boxvar_NFInst_checkReplaceableBaseClass MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkReplaceableBaseClass)


DLLDirection
void omc_NFInst_checkExtendsLoop(threadData_t *threadData, modelica_metatype _node, modelica_metatype _scope, modelica_metatype _path, modelica_metatype _info);
#define boxptr_NFInst_checkExtendsLoop omc_NFInst_checkExtendsLoop
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_checkExtendsLoop,2,0) {(void*) boxptr_NFInst_checkExtendsLoop,0}};
#define boxvar_NFInst_checkExtendsLoop MMC_REFSTRUCTLIT(boxvar_lit_NFInst_checkExtendsLoop)


DLLDirection
modelica_metatype omc_NFInst_expandExtends(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fext, modelica_metatype __omcQ_24in_5FbuiltinExt, modelica_integer _context, modelica_metatype _nameMap, modelica_metatype *out_builtinExt);
DLLDirection
modelica_metatype boxptr_NFInst_expandExtends(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fext, modelica_metatype __omcQ_24in_5FbuiltinExt, modelica_metatype _context, modelica_metatype _nameMap, modelica_metatype *out_builtinExt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_expandExtends,2,0) {(void*) boxptr_NFInst_expandExtends,0}};
#define boxvar_NFInst_expandExtends MMC_REFSTRUCTLIT(boxvar_lit_NFInst_expandExtends)


DLLDirection
modelica_metatype omc_NFInst_expandClassParts(threadData_t *threadData, modelica_metatype _def, modelica_metatype __omcQ_24in_5Fnode, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_nameMap);
DLLDirection
modelica_metatype boxptr_NFInst_expandClassParts(threadData_t *threadData, modelica_metatype _def, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_nameMap);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_expandClassParts,2,0) {(void*) boxptr_NFInst_expandClassParts,0}};
#define boxvar_NFInst_expandClassParts MMC_REFSTRUCTLIT(boxvar_lit_NFInst_expandClassParts)


DLLDirection
modelica_metatype omc_NFInst_expandClass2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_expandClass2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_expandClass2,2,0) {(void*) boxptr_NFInst_expandClass2,0}};
#define boxvar_NFInst_expandClass2 MMC_REFSTRUCTLIT(boxvar_lit_NFInst_expandClass2)


DLLDirection
modelica_metatype omc_NFInst_expandClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_expandClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_expandClass,2,0) {(void*) boxptr_NFInst_expandClass,0}};
#define boxvar_NFInst_expandClass MMC_REFSTRUCTLIT(boxvar_lit_NFInst_expandClass)


DLLDirection
modelica_metatype omc_NFInst_makeEnumerationType(threadData_t *threadData, modelica_metatype _literals, modelica_metatype _scope);
#define boxptr_NFInst_makeEnumerationType omc_NFInst_makeEnumerationType
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_makeEnumerationType,2,0) {(void*) boxptr_NFInst_makeEnumerationType,0}};
#define boxvar_NFInst_makeEnumerationType MMC_REFSTRUCTLIT(boxvar_lit_NFInst_makeEnumerationType)


DLLDirection
modelica_metatype omc_NFInst_instClassPrefixes(threadData_t *threadData, modelica_metatype _cls);
#define boxptr_NFInst_instClassPrefixes omc_NFInst_instClassPrefixes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instClassPrefixes,2,0) {(void*) boxptr_NFInst_instClassPrefixes,0}};
#define boxvar_NFInst_instClassPrefixes MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instClassPrefixes)


DLLDirection
modelica_metatype omc_NFInst_partialInstClass2(threadData_t *threadData, modelica_metatype _definition, modelica_metatype _scope);
#define boxptr_NFInst_partialInstClass2 omc_NFInst_partialInstClass2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_partialInstClass2,2,0) {(void*) boxptr_NFInst_partialInstClass2,0}};
#define boxvar_NFInst_partialInstClass2 MMC_REFSTRUCTLIT(boxvar_lit_NFInst_partialInstClass2)


DLLDirection
modelica_metatype omc_NFInst_partialInstClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode);
#define boxptr_NFInst_partialInstClass omc_NFInst_partialInstClass
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_partialInstClass,2,0) {(void*) boxptr_NFInst_partialInstClass,0}};
#define boxvar_NFInst_partialInstClass MMC_REFSTRUCTLIT(boxvar_lit_NFInst_partialInstClass)


DLLDirection
modelica_metatype omc_NFInst_markBuiltinTypeNodesByAnnotation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode);
#define boxptr_NFInst_markBuiltinTypeNodesByAnnotation omc_NFInst_markBuiltinTypeNodesByAnnotation
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_markBuiltinTypeNodesByAnnotation,2,0) {(void*) boxptr_NFInst_markBuiltinTypeNodesByAnnotation,0}};
#define boxvar_NFInst_markBuiltinTypeNodesByAnnotation MMC_REFSTRUCTLIT(boxvar_lit_NFInst_markBuiltinTypeNodesByAnnotation)


DLLDirection
modelica_metatype omc_NFInst_markBuiltinTypeNodes(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode);
#define boxptr_NFInst_markBuiltinTypeNodes omc_NFInst_markBuiltinTypeNodes
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_markBuiltinTypeNodes,2,0) {(void*) boxptr_NFInst_markBuiltinTypeNodes,0}};
#define boxvar_NFInst_markBuiltinTypeNodes MMC_REFSTRUCTLIT(boxvar_lit_NFInst_markBuiltinTypeNodes)


DLLDirection
modelica_metatype omc_NFInst_makeTopNode(threadData_t *threadData, modelica_metatype _topClasses, modelica_metatype _annotationClasses);
#define boxptr_NFInst_makeTopNode omc_NFInst_makeTopNode
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_makeTopNode,2,0) {(void*) boxptr_NFInst_makeTopNode,0}};
#define boxvar_NFInst_makeTopNode MMC_REFSTRUCTLIT(boxvar_lit_NFInst_makeTopNode)


DLLDirection
modelica_metatype omc_NFInst_expand(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_expand(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_expand,2,0) {(void*) boxptr_NFInst_expand,0}};
#define boxvar_NFInst_expand MMC_REFSTRUCTLIT(boxvar_lit_NFInst_expand)


DLLDirection
modelica_metatype omc_NFInst_instantiate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _mod, modelica_metatype _parent, modelica_integer _context, modelica_boolean _instPartial);
DLLDirection
modelica_metatype boxptr_NFInst_instantiate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype _mod, modelica_metatype _parent, modelica_metatype _context, modelica_metatype _instPartial);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instantiate,2,0) {(void*) boxptr_NFInst_instantiate,0}};
#define boxvar_NFInst_instantiate MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instantiate)


DLLDirection
modelica_metatype omc_NFInst_instantiateRootFunction(threadData_t *threadData, modelica_metatype _funcNode, modelica_integer _context, modelica_metatype *out_functions, modelica_string *out_flatString);
DLLDirection
modelica_metatype boxptr_NFInst_instantiateRootFunction(threadData_t *threadData, modelica_metatype _funcNode, modelica_metatype _context, modelica_metatype *out_functions, modelica_metatype *out_flatString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instantiateRootFunction,2,0) {(void*) boxptr_NFInst_instantiateRootFunction,0}};
#define boxvar_NFInst_instantiateRootFunction MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instantiateRootFunction)


DLLDirection
modelica_metatype omc_NFInst_instantiateRootClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5FclsNode, modelica_integer _context, modelica_metatype _mod);
DLLDirection
modelica_metatype boxptr_NFInst_instantiateRootClass(threadData_t *threadData, modelica_metatype __omcQ_24in_5FclsNode, modelica_metatype _context, modelica_metatype _mod);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instantiateRootClass,2,0) {(void*) boxptr_NFInst_instantiateRootClass,0}};
#define boxvar_NFInst_instantiateRootClass MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instantiateRootClass)


DLLDirection
modelica_metatype omc_NFInst_lookupRootClass(threadData_t *threadData, modelica_metatype _path, modelica_metatype _topScope, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFInst_lookupRootClass(threadData_t *threadData, modelica_metatype _path, modelica_metatype _topScope, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_lookupRootClass,2,0) {(void*) boxptr_NFInst_lookupRootClass,0}};
#define boxvar_NFInst_lookupRootClass MMC_REFSTRUCTLIT(boxvar_lit_NFInst_lookupRootClass)


DLLDirection
void omc_NFInst_clearCaches(threadData_t *threadData);
#define boxptr_NFInst_clearCaches omc_NFInst_clearCaches
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_clearCaches,2,0) {(void*) boxptr_NFInst_clearCaches,0}};
#define boxvar_NFInst_clearCaches MMC_REFSTRUCTLIT(boxvar_lit_NFInst_clearCaches)


DLLDirection
void omc_NFInst_resetGlobalFlags(threadData_t *threadData);
#define boxptr_NFInst_resetGlobalFlags omc_NFInst_resetGlobalFlags
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_resetGlobalFlags,2,0) {(void*) boxptr_NFInst_resetGlobalFlags,0}};
#define boxvar_NFInst_resetGlobalFlags MMC_REFSTRUCTLIT(boxvar_lit_NFInst_resetGlobalFlags)


DLLDirection
modelica_metatype omc_NFInst_instClassForConnection(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _program, modelica_metatype _annotationProgram);
#define boxptr_NFInst_instClassForConnection omc_NFInst_instClassForConnection
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instClassForConnection,2,0) {(void*) boxptr_NFInst_instClassForConnection,0}};
#define boxvar_NFInst_instClassForConnection MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instClassForConnection)


DLLDirection
modelica_metatype omc_NFInst_instClassInProgram(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _program, modelica_metatype _annotationProgram, modelica_boolean _relaxedFrontend, modelica_boolean _dumpFlat, modelica_metatype *out_functions, modelica_string *out_flatString);
DLLDirection
modelica_metatype boxptr_NFInst_instClassInProgram(threadData_t *threadData, modelica_metatype _classPath, modelica_metatype _program, modelica_metatype _annotationProgram, modelica_metatype _relaxedFrontend, modelica_metatype _dumpFlat, modelica_metatype *out_functions, modelica_metatype *out_flatString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_instClassInProgram,2,0) {(void*) boxptr_NFInst_instClassInProgram,0}};
#define boxvar_NFInst_instClassInProgram MMC_REFSTRUCTLIT(boxvar_lit_NFInst_instClassInProgram)


DLLDirection
modelica_metatype omc_NFInst_Inst__makeTopNode(threadData_t *threadData, modelica_metatype _program, modelica_metatype _annotationProgram);
#define boxptr_NFInst_Inst__makeTopNode omc_NFInst_Inst__makeTopNode
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_Inst__makeTopNode,2,0) {(void*) boxptr_NFInst_Inst__makeTopNode,0}};
#define boxvar_NFInst_Inst__makeTopNode MMC_REFSTRUCTLIT(boxvar_lit_NFInst_Inst__makeTopNode)

extern modelica_metatype Inst_makeTopNode(modelica_metatype /*_program*/, modelica_metatype /*_annotationProgram*/);

DLLDirection
modelica_metatype omc_NFInst_InstSettings_create(threadData_t *threadData);
#define boxptr_NFInst_InstSettings_create omc_NFInst_InstSettings_create
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFInst_InstSettings_create,2,0) {(void*) boxptr_NFInst_InstSettings_create,0}};
#define boxvar_NFInst_InstSettings_create MMC_REFSTRUCTLIT(boxvar_lit_NFInst_InstSettings_create)

#ifdef __cplusplus
}
#endif
#endif
