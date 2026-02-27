#ifndef NFLookup__H
#define NFLookup__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Absyn_FunctionPurity_NO__PURITY__desc;

extern struct record_description Absyn_InnerOuter_INNER__desc;

extern struct record_description Absyn_InnerOuter_NOT__INNER__OUTER__desc;

extern struct record_description Absyn_Path_IDENT__desc;

extern struct record_description DAE_FunctionAttributes_FUNCTION__ATTRIBUTES__desc;

extern struct record_description DAE_FunctionBuiltin_FUNCTION__BUILTIN__desc;

extern struct record_description DAE_FunctionParallelism_FP__NON__PARALLEL__desc;

extern struct record_description DAE_InlineType_NO__INLINE__desc;

extern struct record_description ErrorTypes_Message_MESSAGE__desc;

extern struct record_description ErrorTypes_MessageType_SCRIPTING__desc;

extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;

extern struct record_description ErrorTypes_Severity_ERROR__desc;

extern struct record_description ErrorTypes_Severity_NOTIFICATION__desc;

extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;

extern struct record_description Flags_FlagData_BOOL__FLAG__desc;

extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;

extern struct record_description Gettext_TranslatableContent_gettext__desc;

extern struct record_description NFAttributes_ATTRIBUTES__desc;

extern struct record_description NFBinding_UNBOUND__desc;

extern struct record_description NFClass_INSTANCED__CLASS__desc;

extern struct record_description NFClass_NOT__INSTANTIATED__desc;

extern struct record_description NFClass_PARTIAL__BUILTIN__desc;

extern struct record_description NFClass_Prefixes_PREFIXES__desc;

extern struct record_description NFClassTree_ClassTree_EMPTY__TREE__desc;

extern struct record_description NFClassTree_ClassTree_FLAT__TREE__desc;

extern struct record_description NFComponent_COMPONENT__desc;

extern struct record_description NFComponent_TYPE__ATTRIBUTE__desc;

extern struct record_description NFComponentRef_CREF__desc;

extern struct record_description NFComponentRef_EMPTY__desc;

extern struct record_description NFComponentRef_WILD__desc;

extern struct record_description NFDuplicateTree_Tree_EMPTY__desc;

extern struct record_description NFExpression_BOOLEAN__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFFunction_Function_FUNCTION__desc;

extern struct record_description NFFunction_Slot_SLOT__desc;

extern struct record_description NFInstNode_CachedData_FUNCTION__desc;

extern struct record_description NFInstNode_CachedData_NO__CACHE__desc;

extern struct record_description NFInstNode_InstNode_CLASS__NODE__desc;

extern struct record_description NFInstNode_InstNode_COMPONENT__NODE__desc;

extern struct record_description NFInstNode_InstNode_EMPTY__NODE__desc;

extern struct record_description NFInstNode_InstNodeType_BUILTIN__CLASS__desc;

extern struct record_description NFInstNode_InstNodeType_GENERATED__INNER__desc;

extern struct record_description NFInstNode_InstNodeType_NORMAL__CLASS__desc;

extern struct record_description NFInstNode_InstNodeType_NORMAL__COMP__desc;

extern struct record_description NFLookupState_LookupState_COMP__desc;

extern struct record_description NFLookupState_LookupState_COMP__CLASS__desc;

extern struct record_description NFLookupState_LookupState_ERROR__desc;

extern struct record_description NFLookupState_LookupState_FUNC__desc;

extern struct record_description NFLookupState_LookupState_IMPORT__desc;

extern struct record_description NFLookupState_LookupState_NON__ENCAPSULATED__desc;

extern struct record_description NFLookupState_LookupState_PARTIAL__CLASS__desc;

extern struct record_description NFLookupState_LookupState_PREDEF__CLASS__desc;

extern struct record_description NFLookupState_LookupState_PREDEF__COMP__desc;

extern struct record_description NFLookupTree_Entry_COMPONENT__desc;

extern struct record_description NFLookupTree_Tree_EMPTY__desc;

extern struct record_description NFLookupTree_Tree_LEAF__desc;

extern struct record_description NFLookupTree_Tree_NODE__desc;

extern struct record_description NFModifier_Modifier_NOMOD__desc;

extern struct record_description NFPrefixes_Replaceable_NOT__REPLACEABLE__desc;

extern struct record_description NFRestriction_FUNCTION__desc;

extern struct record_description NFRestriction_TYPE__desc;

extern struct record_description NFSections_EMPTY__desc;

extern struct record_description NFSubscript_RAW__SUBSCRIPT__desc;

extern struct record_description NFType_BOOLEAN__desc;

extern struct record_description NFType_ENUMERATION__desc;

extern struct record_description NFType_INTEGER__desc;

extern struct record_description NFType_REAL__desc;

extern struct record_description NFType_STRING__desc;

extern struct record_description NFType_UNKNOWN__desc;

extern struct record_description SCode_ClassDef_PARTS__desc;

extern struct record_description SCode_Comment_COMMENT__desc;

extern struct record_description SCode_Element_CLASS__desc;

extern struct record_description SCode_Encapsulated_ENCAPSULATED__desc;

extern struct record_description SCode_Encapsulated_NOT__ENCAPSULATED__desc;

extern struct record_description SCode_Final_NOT__FINAL__desc;

extern struct record_description SCode_FunctionRestriction_FR__NORMAL__FUNCTION__desc;

extern struct record_description SCode_Partial_NOT__PARTIAL__desc;

extern struct record_description SCode_Prefixes_PREFIXES__desc;

extern struct record_description SCode_Redeclare_NOT__REDECLARE__desc;

extern struct record_description SCode_Replaceable_NOT__REPLACEABLE__desc;

extern struct record_description SCode_Restriction_R__FUNCTION__desc;

extern struct record_description SCode_Restriction_R__TYPE__desc;

extern struct record_description SCode_Visibility_PUBLIC__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_string omc_NFLookup_loadLibrary__work(threadData_t *threadData, modelica_string _name, modelica_metatype _scope);
#define boxptr_NFLookup_loadLibrary__work omc_NFLookup_loadLibrary__work
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_loadLibrary__work,2,0) {(void*) boxptr_NFLookup_loadLibrary__work,0}};
#define boxvar_NFLookup_loadLibrary__work MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_loadLibrary__work)


DLLDirection
void omc_NFLookup_loadLibrary(threadData_t *threadData, modelica_string _name, modelica_metatype _scope);
#define boxptr_NFLookup_loadLibrary omc_NFLookup_loadLibrary
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_loadLibrary,2,0) {(void*) boxptr_NFLookup_loadLibrary,0}};
#define boxvar_NFLookup_loadLibrary MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_loadLibrary)


DLLDirection
modelica_metatype omc_NFLookup_makeInnerNode(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode);
#define boxptr_NFLookup_makeInnerNode omc_NFLookup_makeInnerNode
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_makeInnerNode,2,0) {(void*) boxptr_NFLookup_makeInnerNode,0}};
#define boxvar_NFLookup_makeInnerNode MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_makeInnerNode)


DLLDirection
modelica_metatype omc_NFLookup_generateInner(threadData_t *threadData, modelica_metatype _outerNode, modelica_metatype _topScope);
#define boxptr_NFLookup_generateInner omc_NFLookup_generateInner
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_generateInner,2,0) {(void*) boxptr_NFLookup_generateInner,0}};
#define boxvar_NFLookup_generateInner MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_generateInner)


DLLDirection
modelica_metatype omc_NFLookup_resolveInnerCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype __omcQ_24in_5FfoundScope, modelica_metatype *out_cref, modelica_metatype *out_foundScope);
#define boxptr_NFLookup_resolveInnerCref omc_NFLookup_resolveInnerCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_resolveInnerCref,2,0) {(void*) boxptr_NFLookup_resolveInnerCref,0}};
#define boxvar_NFLookup_resolveInnerCref MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_resolveInnerCref)


DLLDirection
modelica_metatype omc_NFLookup_lookupCrefInNode(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _node, modelica_metatype __omcQ_24in_5FfoundCref, modelica_metatype __omcQ_24in_5FfoundScope, modelica_metatype __omcQ_24in_5Fstate, modelica_integer _context, modelica_metatype *out_foundScope, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupCrefInNode(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _node, modelica_metatype __omcQ_24in_5FfoundCref, modelica_metatype __omcQ_24in_5FfoundScope, modelica_metatype __omcQ_24in_5Fstate, modelica_metatype _context, modelica_metatype *out_foundScope, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupCrefInNode,2,0) {(void*) boxptr_NFLookup_lookupCrefInNode,0}};
#define boxvar_NFLookup_lookupCrefInNode MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupCrefInNode)


DLLDirection
modelica_metatype omc_NFLookup_lookupIterator(threadData_t *threadData, modelica_string _name, modelica_metatype _iterators);
#define boxptr_NFLookup_lookupIterator omc_NFLookup_lookupIterator
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupIterator,2,0) {(void*) boxptr_NFLookup_lookupIterator,0}};
#define boxvar_NFLookup_lookupIterator MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupIterator)


DLLDirection
modelica_metatype omc_NFLookup_lookupLocalSimpleCref(threadData_t *threadData, modelica_string _name, modelica_metatype _scope, modelica_metatype *out_foundScope);
#define boxptr_NFLookup_lookupLocalSimpleCref omc_NFLookup_lookupLocalSimpleCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalSimpleCref,2,0) {(void*) boxptr_NFLookup_lookupLocalSimpleCref,0}};
#define boxvar_NFLookup_lookupLocalSimpleCref MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalSimpleCref)


DLLDirection
modelica_metatype omc_NFLookup_lookupSimpleCref(threadData_t *threadData, modelica_string _name, modelica_metatype _subs, modelica_metatype _scope, modelica_integer _context, modelica_metatype *out_cref, modelica_metatype *out_foundScope, modelica_boolean *out_inEnclosingScope, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupSimpleCref(threadData_t *threadData, modelica_metatype _name, modelica_metatype _subs, modelica_metatype _scope, modelica_metatype _context, modelica_metatype *out_cref, modelica_metatype *out_foundScope, modelica_metatype *out_inEnclosingScope, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleCref,2,0) {(void*) boxptr_NFLookup_lookupSimpleCref,0}};
#define boxvar_NFLookup_lookupSimpleCref MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleCref)


DLLDirection
modelica_metatype omc_NFLookup_lookupSimpleBuiltinCref(threadData_t *threadData, modelica_string _name, modelica_metatype _subs, modelica_metatype *out_cref, modelica_metatype *out_state);
#define boxptr_NFLookup_lookupSimpleBuiltinCref omc_NFLookup_lookupSimpleBuiltinCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleBuiltinCref,2,0) {(void*) boxptr_NFLookup_lookupSimpleBuiltinCref,0}};
#define boxvar_NFLookup_lookupSimpleBuiltinCref MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleBuiltinCref)


DLLDirection
modelica_metatype omc_NFLookup_lookupSimpleBuiltinName(threadData_t *threadData, modelica_string _name);
#define boxptr_NFLookup_lookupSimpleBuiltinName omc_NFLookup_lookupSimpleBuiltinName
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleBuiltinName,2,0) {(void*) boxptr_NFLookup_lookupSimpleBuiltinName,0}};
#define boxvar_NFLookup_lookupSimpleBuiltinName MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleBuiltinName)


DLLDirection
modelica_metatype omc_NFLookup_lookupLocalNames(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fnodes, modelica_metatype __omcQ_24in_5Fstate, modelica_integer _context, modelica_boolean _selfReference, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupLocalNames(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype __omcQ_24in_5Fnodes, modelica_metatype __omcQ_24in_5Fstate, modelica_metatype _context, modelica_metatype _selfReference, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalNames,2,0) {(void*) boxptr_NFLookup_lookupLocalNames,0}};
#define boxvar_NFLookup_lookupLocalNames MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalNames)


DLLDirection
modelica_metatype omc_NFLookup_lookupLocalName(threadData_t *threadData, modelica_metatype _name, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype __omcQ_24in_5Fstate, modelica_integer _context, modelica_boolean _checkAccessViolations, modelica_boolean _selfReference, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupLocalName(threadData_t *threadData, modelica_metatype _name, modelica_metatype __omcQ_24in_5Fnode, modelica_metatype __omcQ_24in_5Fstate, modelica_metatype _context, modelica_metatype _checkAccessViolations, modelica_metatype _selfReference, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalName,2,0) {(void*) boxptr_NFLookup_lookupLocalName,0}};
#define boxvar_NFLookup_lookupLocalName MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalName)


DLLDirection
modelica_metatype omc_NFLookup_lookupFirstIdent(threadData_t *threadData, modelica_string _name, modelica_metatype _scope, modelica_integer _context, modelica_metatype *out_state, modelica_boolean *out_selfReference);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupFirstIdent(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype _context, modelica_metatype *out_state, modelica_metatype *out_selfReference);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupFirstIdent,2,0) {(void*) boxptr_NFLookup_lookupFirstIdent,0}};
#define boxvar_NFLookup_lookupFirstIdent MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupFirstIdent)


DLLDirection
modelica_metatype omc_NFLookup_lookupNames(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_integer _context, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupNames(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype _context, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupNames,2,0) {(void*) boxptr_NFLookup_lookupNames,0}};
#define boxvar_NFLookup_lookupNames MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupNames)


DLLDirection
modelica_metatype omc_NFLookup_lookupName(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_integer _context, modelica_boolean _checkAccessViolations, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupName(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _checkAccessViolations, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupName,2,0) {(void*) boxptr_NFLookup_lookupName,0}};
#define boxvar_NFLookup_lookupName MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupName)


DLLDirection
modelica_metatype omc_NFLookup_lookupNameWithError(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype _errorType, modelica_boolean _checkAccessViolations, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupNameWithError(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype _errorType, modelica_metatype _checkAccessViolations, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupNameWithError,2,0) {(void*) boxptr_NFLookup_lookupNameWithError,0}};
#define boxvar_NFLookup_lookupNameWithError MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupNameWithError)


DLLDirection
modelica_metatype omc_NFLookup_lookupSimpleNameRootPath(threadData_t *threadData, modelica_string _name, modelica_metatype _scope, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupSimpleNameRootPath(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleNameRootPath,2,0) {(void*) boxptr_NFLookup_lookupSimpleNameRootPath,0}};
#define boxvar_NFLookup_lookupSimpleNameRootPath MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleNameRootPath)


DLLDirection
modelica_metatype omc_NFLookup_lookupSimpleName(threadData_t *threadData, modelica_string _name, modelica_metatype _scope, modelica_integer _context, modelica_boolean *out_selfReference);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupSimpleName(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype _context, modelica_metatype *out_selfReference);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleName,2,0) {(void*) boxptr_NFLookup_lookupSimpleName,0}};
#define boxvar_NFLookup_lookupSimpleName MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupSimpleName)


DLLDirection
modelica_metatype omc_NFLookup_lookupLocalSimpleName(threadData_t *threadData, modelica_string _name, modelica_metatype _scope, modelica_boolean *out_isImport);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupLocalSimpleName(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype *out_isImport);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalSimpleName,2,0) {(void*) boxptr_NFLookup_lookupLocalSimpleName,0}};
#define boxvar_NFLookup_lookupLocalSimpleName MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalSimpleName)


DLLDirection
modelica_metatype omc_NFLookup_lookupInner(threadData_t *threadData, modelica_metatype _outerNode, modelica_metatype _scope);
#define boxptr_NFLookup_lookupInner omc_NFLookup_lookupInner
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupInner,2,0) {(void*) boxptr_NFLookup_lookupInner,0}};
#define boxvar_NFLookup_lookupInner MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupInner)


DLLDirection
modelica_metatype omc_NFLookup_lookupLocalCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_foundScope, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupLocalCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_foundScope, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalCref,2,0) {(void*) boxptr_NFLookup_lookupLocalCref,0}};
#define boxvar_NFLookup_lookupLocalCref MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalCref)


DLLDirection
modelica_metatype omc_NFLookup_lookupCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_integer _context, modelica_metatype *out_foundScope, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupCref(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype *out_foundScope, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupCref,2,0) {(void*) boxptr_NFLookup_lookupCref,0}};
#define boxvar_NFLookup_lookupCref MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupCref)


DLLDirection
modelica_metatype omc_NFLookup_lookupCrefWithError(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype _errMsg, modelica_metatype *out_foundScope, modelica_metatype *out_state);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupCrefWithError(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype _errMsg, modelica_metatype *out_foundScope, modelica_metatype *out_state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupCrefWithError,2,0) {(void*) boxptr_NFLookup_lookupCrefWithError,0}};
#define boxvar_NFLookup_lookupCrefWithError MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupCrefWithError)


DLLDirection
modelica_metatype omc_NFLookup_lookupImport(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype _info);
#define boxptr_NFLookup_lookupImport omc_NFLookup_lookupImport
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupImport,2,0) {(void*) boxptr_NFLookup_lookupImport,0}};
#define boxvar_NFLookup_lookupImport MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupImport)


DLLDirection
modelica_metatype omc_NFLookup_fixExternalObjectCall(threadData_t *threadData, modelica_metatype _node, modelica_metatype __omcQ_24in_5Fcref, modelica_metatype __omcQ_24in_5Fstate, modelica_metatype *out_state);
#define boxptr_NFLookup_fixExternalObjectCall omc_NFLookup_fixExternalObjectCall
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_fixExternalObjectCall,2,0) {(void*) boxptr_NFLookup_fixExternalObjectCall,0}};
#define boxvar_NFLookup_fixExternalObjectCall MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_fixExternalObjectCall)


DLLDirection
modelica_metatype omc_NFLookup_lookupFunctionNameSilent(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_integer _context, modelica_metatype *out_foundScope);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupFunctionNameSilent(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype *out_foundScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupFunctionNameSilent,2,0) {(void*) boxptr_NFLookup_lookupFunctionNameSilent,0}};
#define boxvar_NFLookup_lookupFunctionNameSilent MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupFunctionNameSilent)


DLLDirection
modelica_metatype omc_NFLookup_lookupFunctionName(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_foundScope);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupFunctionName(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_foundScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupFunctionName,2,0) {(void*) boxptr_NFLookup_lookupFunctionName,0}};
#define boxvar_NFLookup_lookupFunctionName MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupFunctionName)


DLLDirection
modelica_metatype omc_NFLookup_lookupLocalComponent(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_foundScope);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupLocalComponent(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_foundScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalComponent,2,0) {(void*) boxptr_NFLookup_lookupLocalComponent,0}};
#define boxvar_NFLookup_lookupLocalComponent MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupLocalComponent)


DLLDirection
modelica_metatype omc_NFLookup_fixTypenameState(threadData_t *threadData, modelica_metatype _component, modelica_metatype __omcQ_24in_5Fstate, modelica_integer _context);
DLLDirection
modelica_metatype boxptr_NFLookup_fixTypenameState(threadData_t *threadData, modelica_metatype _component, modelica_metatype __omcQ_24in_5Fstate, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_fixTypenameState,2,0) {(void*) boxptr_NFLookup_fixTypenameState,0}};
#define boxvar_NFLookup_fixTypenameState MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_fixTypenameState)


DLLDirection
modelica_metatype omc_NFLookup_lookupConnector(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_foundScope);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupConnector(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_foundScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupConnector,2,0) {(void*) boxptr_NFLookup_lookupConnector,0}};
#define boxvar_NFLookup_lookupConnector MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupConnector)


DLLDirection
modelica_metatype omc_NFLookup_lookupComponent(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_metatype *out_foundScope);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupComponent(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype *out_foundScope);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupComponent,2,0) {(void*) boxptr_NFLookup_lookupComponent,0}};
#define boxvar_NFLookup_lookupComponent MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupComponent)


DLLDirection
modelica_metatype omc_NFLookup_lookupBaseClassName(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupBaseClassName(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupBaseClassName,2,0) {(void*) boxptr_NFLookup_lookupBaseClassName,0}};
#define boxvar_NFLookup_lookupBaseClassName MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupBaseClassName)


DLLDirection
modelica_metatype omc_NFLookup_lookupClassName(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_integer _context, modelica_metatype _info, modelica_boolean _checkAccessViolations);
DLLDirection
modelica_metatype boxptr_NFLookup_lookupClassName(threadData_t *threadData, modelica_metatype _name, modelica_metatype _scope, modelica_metatype _context, modelica_metatype _info, modelica_metatype _checkAccessViolations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFLookup_lookupClassName,2,0) {(void*) boxptr_NFLookup_lookupClassName,0}};
#define boxvar_NFLookup_lookupClassName MMC_REFSTRUCTLIT(boxvar_lit_NFLookup_lookupClassName)

#ifdef __cplusplus
}
#endif
#endif
