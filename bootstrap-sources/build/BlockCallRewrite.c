#include "omc_simulation_settings.h"
#include "BlockCallRewrite.h"
#define _OMC_LIT0_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,0,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1,0.0);
#define _OMC_LIT1 MMC_REFREALLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT1}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,4) {&Absyn_Each_NON__EACH__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "_autogen_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,9,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,1,6) {&Absyn_InnerOuter_NOT__INNER__OUTER__desc,}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,5) {&Absyn_Parallelism_NON__PARALLEL__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,1,3) {&Absyn_Variability_VAR__desc,}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,5) {&Absyn_Direction_BIDIR__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,1,3) {&Absyn_IsField_NONFIELD__desc,}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,8,3) {&Absyn_ElementAttributes_ATTR__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT6,_OMC_LIT7,_OMC_LIT8,_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,3) {&Absyn_EqMod_NOMOD__desc,}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "out"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,3,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,3,5) {&Absyn_ComponentRef_CREF__IDENT__desc,_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,3) {&Dump_DumpOptions_DUMPOPTIONS__desc,_OMC_LIT0}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#include "util/modelica.h"

#include "BlockCallRewrite_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchVarNamedArg(threadData_t *threadData, modelica_string _elemId, modelica_string _argName, modelica_metatype _argValue, modelica_metatype _comps, modelica_metatype _oldEqs, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_matchVarNamedArg(threadData_t *threadData, modelica_metatype _elemId, modelica_metatype _argName, modelica_metatype _argValue, modelica_metatype _comps, modelica_metatype _oldEqs, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchVarNamedArg,2,0) {(void*) boxptr_BlockCallRewrite_matchVarNamedArg,0}};
#define boxvar_BlockCallRewrite_matchVarNamedArg MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchVarNamedArg)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchParamNamedArg(threadData_t *threadData, modelica_string _argName, modelica_metatype _argValue, modelica_metatype _comps, modelica_metatype _oldModif, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_matchParamNamedArg(threadData_t *threadData, modelica_metatype _argName, modelica_metatype _argValue, modelica_metatype _comps, modelica_metatype _oldModif, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchParamNamedArg,2,0) {(void*) boxptr_BlockCallRewrite_matchParamNamedArg,0}};
#define boxvar_BlockCallRewrite_matchParamNamedArg MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchParamNamedArg)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchNamedArgElems(threadData_t *threadData, modelica_string _elemId, modelica_string _argName, modelica_metatype _argValue, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_matchNamedArgElems(threadData_t *threadData, modelica_metatype _elemId, modelica_metatype _argName, modelica_metatype _argValue, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchNamedArgElems,2,0) {(void*) boxptr_BlockCallRewrite_matchNamedArgElems,0}};
#define boxvar_BlockCallRewrite_matchNamedArgElems MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchNamedArgElems)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchNamedArgClass(threadData_t *threadData, modelica_string _elemId, modelica_string _argName, modelica_metatype _argValue, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchNamedArgClass,2,0) {(void*) boxptr_BlockCallRewrite_matchNamedArgClass,0}};
#define boxvar_BlockCallRewrite_matchNamedArgClass MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchNamedArgClass)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchNamedArgsClass(threadData_t *threadData, modelica_string _elemId, modelica_metatype _nargs, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchNamedArgsClass,2,0) {(void*) boxptr_BlockCallRewrite_matchNamedArgsClass,0}};
#define boxvar_BlockCallRewrite_matchNamedArgsClass MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchNamedArgsClass)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchVarArgs(threadData_t *threadData, modelica_string _elemId, modelica_metatype _args, modelica_metatype _comps, modelica_metatype _oldEqs, modelica_metatype *out_newArgs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchVarArgs,2,0) {(void*) boxptr_BlockCallRewrite_matchVarArgs,0}};
#define boxvar_BlockCallRewrite_matchVarArgs MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchVarArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchParamArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _comps, modelica_metatype _oldModif, modelica_metatype *out_newArgs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchParamArgs,2,0) {(void*) boxptr_BlockCallRewrite_matchParamArgs,0}};
#define boxvar_BlockCallRewrite_matchParamArgs MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchParamArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchArgsElems(threadData_t *threadData, modelica_string _elemId, modelica_metatype _args, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_newArgs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchArgsElems,2,0) {(void*) boxptr_BlockCallRewrite_matchArgsElems,0}};
#define boxvar_BlockCallRewrite_matchArgsElems MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchArgsElems)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchArgsClass(threadData_t *threadData, modelica_string _elemId, modelica_metatype _args, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchArgsClass,2,0) {(void*) boxptr_BlockCallRewrite_matchArgsClass,0}};
#define boxvar_BlockCallRewrite_matchArgsClass MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_matchArgsClass)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseArgs(threadData_t *threadData, modelica_string _elemId, modelica_metatype _classes, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_mods);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseArgs,2,0) {(void*) boxptr_BlockCallRewrite_parseArgs,0}};
#define boxvar_BlockCallRewrite_parseArgs MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseArgs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_lookThroughElems(threadData_t *threadData, modelica_string _id, modelica_integer _instNo, modelica_metatype _fargs, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_lookThroughElems(threadData_t *threadData, modelica_metatype _id, modelica_metatype _instNo, modelica_metatype _fargs, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_lookThroughElems,2,0) {(void*) boxptr_BlockCallRewrite_lookThroughElems,0}};
#define boxvar_BlockCallRewrite_lookThroughElems MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_lookThroughElems)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_lookThroughClasses(threadData_t *threadData, modelica_string _id, modelica_integer _instNo, modelica_metatype _fargs, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_lookThroughClasses(threadData_t *threadData, modelica_metatype _id, modelica_metatype _instNo, modelica_metatype _fargs, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_lookThroughClasses,2,0) {(void*) boxptr_BlockCallRewrite_lookThroughClasses,0}};
#define boxvar_BlockCallRewrite_lookThroughClasses MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_lookThroughClasses)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseClassesDefs(threadData_t *threadData, modelica_string _id, modelica_integer _instNo, modelica_metatype _classes, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found, modelica_integer *out_newInstNo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseClassesDefs(threadData_t *threadData, modelica_metatype _id, modelica_metatype _instNo, modelica_metatype _classes, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found, modelica_metatype *out_newInstNo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseClassesDefs,2,0) {(void*) boxptr_BlockCallRewrite_parseClassesDefs,0}};
#define boxvar_BlockCallRewrite_parseClassesDefs MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseClassesDefs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_getDefinition(threadData_t *threadData, modelica_string _id, modelica_integer _instNo, modelica_metatype _defs, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found, modelica_integer *out_newInstNo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_getDefinition(threadData_t *threadData, modelica_metatype _id, modelica_metatype _instNo, modelica_metatype _defs, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found, modelica_metatype *out_newInstNo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_getDefinition,2,0) {(void*) boxptr_BlockCallRewrite_getDefinition,0}};
#define boxvar_BlockCallRewrite_getDefinition MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_getDefinition)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseCall(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_integer _instNo, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype *out_newEqs, modelica_metatype *out_newElems, modelica_integer *out_newInstNo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseCall(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _instNo, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype *out_newEqs, modelica_metatype *out_newElems, modelica_metatype *out_newInstNo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseCall,2,0) {(void*) boxptr_BlockCallRewrite_parseCall,0}};
#define boxvar_BlockCallRewrite_parseCall MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseCall)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseExpressionTuple(threadData_t *threadData, modelica_metatype _tuple_list, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseExpressionTuple(threadData_t *threadData, modelica_metatype _tuple_list, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseExpressionTuple,2,0) {(void*) boxptr_BlockCallRewrite_parseExpressionTuple,0}};
#define boxvar_BlockCallRewrite_parseExpressionTuple MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseExpressionTuple)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseExpression(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseExpression(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseExpression,2,0) {(void*) boxptr_BlockCallRewrite_parseExpression,0}};
#define boxvar_BlockCallRewrite_parseExpression MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseExpression)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseEquation(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseEquation(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseEquation,2,0) {(void*) boxptr_BlockCallRewrite_parseEquation,0}};
#define boxvar_BlockCallRewrite_parseEquation MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseEquation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseEquations(threadData_t *threadData, modelica_metatype _classes, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseEquations(threadData_t *threadData, modelica_metatype _classes, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseEquations,2,0) {(void*) boxptr_BlockCallRewrite_parseEquations,0}};
#define boxvar_BlockCallRewrite_parseEquations MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseClassPart(threadData_t *threadData, modelica_metatype _in_def, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_reqs, modelica_metatype *out_relems, modelica_integer *out_newInstNo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseClassPart(threadData_t *threadData, modelica_metatype _in_def, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_reqs, modelica_metatype *out_relems, modelica_metatype *out_newInstNo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseClassPart,2,0) {(void*) boxptr_BlockCallRewrite_parseClassPart,0}};
#define boxvar_BlockCallRewrite_parseClassPart MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseClassPart)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseClassParts(threadData_t *threadData, modelica_metatype _classes, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseClassParts(threadData_t *threadData, modelica_metatype _classes, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseClassParts,2,0) {(void*) boxptr_BlockCallRewrite_parseClassParts,0}};
#define boxvar_BlockCallRewrite_parseClassParts MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseClassParts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseClassDef(threadData_t *threadData, modelica_metatype _in_def, modelica_metatype _defs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseClassDef,2,0) {(void*) boxptr_BlockCallRewrite_parseClassDef,0}};
#define boxvar_BlockCallRewrite_parseClassDef MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseClassDef)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseProgram(threadData_t *threadData, modelica_metatype _inPg, modelica_metatype _defs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseProgram,2,0) {(void*) boxptr_BlockCallRewrite_parseProgram,0}};
#define boxvar_BlockCallRewrite_parseProgram MMC_REFSTRUCTLIT(boxvar_lit_BlockCallRewrite_parseProgram)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchVarNamedArg(threadData_t *threadData, modelica_string _elemId, modelica_string _argName, modelica_metatype _argValue, modelica_metatype _comps, modelica_metatype _oldEqs, modelica_boolean *out_found)
{
  modelica_metatype _newEqs = NULL;
  modelica_boolean _found;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _found has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comps;
    {
      modelica_metatype _r_comps = NULL;
      modelica_string _cName = NULL;
      modelica_metatype _eq = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_comps has no default value.
      // _cName has no default value.
      // _eq has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldEqs;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          
          _cName = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_cName, _argName))) goto tmp3_end;
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box3(5, &Absyn_ComponentRef_CREF__IDENT__desc, _cName, tmpMeta11);
          tmpMeta13 = mmc_mk_box4(4, &Absyn_ComponentRef_CREF__QUAL__desc, _elemId, tmpMeta10, tmpMeta12);
          tmpMeta14 = mmc_mk_box2(5, &Absyn_Exp_CREF__desc, tmpMeta13);
          tmpMeta15 = mmc_mk_box3(4, &Absyn_Equation_EQ__EQUALS__desc, tmpMeta14, _argValue);
          tmpMeta16 = mmc_mk_box4(3, &Absyn_EquationItem_EQUATIONITEM__desc, tmpMeta15, mmc_mk_none(), _OMC_LIT2);
          _eq = tmpMeta16;
          tmpMeta17 = mmc_mk_cons(_eq, _oldEqs);
          tmpMeta[0+0] = tmpMeta17;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          _r_comps = tmpMeta19;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comps = _r_comps;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _found = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_found) { *out_found = _found; }
  return _newEqs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_matchVarNamedArg(threadData_t *threadData, modelica_metatype _elemId, modelica_metatype _argName, modelica_metatype _argValue, modelica_metatype _comps, modelica_metatype _oldEqs, modelica_metatype *out_found)
{
  modelica_boolean _found;
  modelica_metatype _newEqs = NULL;
  _newEqs = omc_BlockCallRewrite_matchVarNamedArg(threadData, _elemId, _argName, _argValue, _comps, _oldEqs, &_found);
  /* skip box _newEqs; list<Absyn.EquationItem> */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchParamNamedArg(threadData_t *threadData, modelica_string _argName, modelica_metatype _argValue, modelica_metatype _comps, modelica_metatype _oldModif, modelica_boolean *out_found)
{
  modelica_metatype _newModif = NULL;
  modelica_boolean _found;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newModif has no default value.
  // _found has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comps;
    {
      modelica_metatype _r_comps = NULL;
      modelica_string _cName = NULL;
      modelica_metatype _modif = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_comps has no default value.
      // _cName has no default value.
      // _modif has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldModif;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          
          _cName = tmpMeta9;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(stringEqual(_cName, _argName))) goto tmp3_end;
          tmpMeta10 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _cName);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box3(4, &Absyn_EqMod_EQMOD__desc, _argValue, _OMC_LIT2);
          tmpMeta13 = mmc_mk_box3(3, &Absyn_Modification_CLASSMOD__desc, tmpMeta11, tmpMeta12);
          tmpMeta14 = mmc_mk_box7(3, &Absyn_ElementArg_MODIFICATION__desc, mmc_mk_boolean(0 /* false */), _OMC_LIT3, tmpMeta10, mmc_mk_some(tmpMeta13), mmc_mk_none(), _OMC_LIT2);
          _modif = tmpMeta14;
          tmpMeta15 = mmc_mk_cons(_modif, _oldModif);
          tmpMeta[0+0] = tmpMeta15;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          _r_comps = tmpMeta17;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _comps = _r_comps;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newModif = tmpMeta[0+0];
  _found = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_found) { *out_found = _found; }
  return _newModif;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_matchParamNamedArg(threadData_t *threadData, modelica_metatype _argName, modelica_metatype _argValue, modelica_metatype _comps, modelica_metatype _oldModif, modelica_metatype *out_found)
{
  modelica_boolean _found;
  modelica_metatype _newModif = NULL;
  _newModif = omc_BlockCallRewrite_matchParamNamedArg(threadData, _argName, _argValue, _comps, _oldModif, &_found);
  /* skip box _newModif; list<Absyn.ElementArg> */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return _newModif;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchNamedArgElems(threadData_t *threadData, modelica_string _elemId, modelica_string _argName, modelica_metatype _argValue, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newModif = NULL;
  modelica_boolean _found;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newModif has no default value.
  // _found has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _elems;
    {
      modelica_metatype _r_elems = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _modif = NULL;
      modelica_metatype _comps = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_elems has no default value.
      // _eqs has no default value.
      // _modif has no default value.
      // _comps has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          tmp1_c2 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,6) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,3,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,2,0) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          
          _comps = tmpMeta12;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta14 = omc_BlockCallRewrite_matchParamNamedArg(threadData, _argName, _argValue, _comps, _oldModif, &tmp13);
          _modif = tmpMeta14;
          if (1 /* true */ != tmp13) goto goto_2;
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _modif;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,0,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,6) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,3,3) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,0) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 4));
          
          _comps = tmpMeta21;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta23 = omc_BlockCallRewrite_matchVarNamedArg(threadData, _elemId, _argName, _argValue, _comps, _oldEqs, &tmp22);
          _eqs = tmpMeta23;
          if (1 /* true */ != tmp22) goto goto_2;
          tmpMeta[0+0] = _eqs;
          tmpMeta[0+1] = _oldModif;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmp4_1);
          tmpMeta25 = MMC_CDR(tmp4_1);
          _r_elems = tmpMeta25;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BlockCallRewrite_matchNamedArgElems(threadData, _elemId, _argName, _argValue, _r_elems, _oldEqs, _oldModif, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newModif = tmpMeta[0+1];
  _found = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_newModif) { *out_newModif = _newModif; }
  if (out_found) { *out_found = _found; }
  return _newEqs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_matchNamedArgElems(threadData_t *threadData, modelica_metatype _elemId, modelica_metatype _argName, modelica_metatype _argValue, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found)
{
  modelica_boolean _found;
  modelica_metatype _newEqs = NULL;
  _newEqs = omc_BlockCallRewrite_matchNamedArgElems(threadData, _elemId, _argName, _argValue, _elems, _oldEqs, _oldModif, out_newModif, &_found);
  /* skip box _newEqs; list<Absyn.EquationItem> */
  /* skip box _newModif; list<Absyn.ElementArg> */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchNamedArgClass(threadData_t *threadData, modelica_string _elemId, modelica_string _argName, modelica_metatype _argValue, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newModif = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newModif has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _classes;
    {
      modelica_metatype _r_classes = NULL;
      modelica_metatype _elems1 = NULL;
      modelica_metatype _eq1 = NULL;
      modelica_metatype _modif = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_classes has no default value.
      // _elems1 has no default value.
      // _eq1 has no default value.
      // _modif has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _elems1 = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta11 = omc_BlockCallRewrite_matchNamedArgElems(threadData, _elemId, _argName, _argValue, _elems1, _oldEqs, _oldModif, &tmpMeta9, &tmp10);
          _eq1 = tmpMeta11;
          if (1 /* true */ != tmp10) goto goto_2;
          _modif = tmpMeta9;
          tmpMeta[0+0] = _eq1;
          tmpMeta[0+1] = _modif;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          _r_classes = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BlockCallRewrite_matchNamedArgClass(threadData, _elemId, _argName, _argValue, _r_classes, _oldEqs, _oldModif, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newModif = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_newModif) { *out_newModif = _newModif; }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchNamedArgsClass(threadData_t *threadData, modelica_string _elemId, modelica_metatype _nargs, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newModif = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newModif has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _classes;
    tmp4_2 = _nargs;
    {
      modelica_metatype _eq1 = NULL;
      modelica_metatype _r_nargs = NULL;
      modelica_metatype _modif = NULL;
      modelica_string _argName = NULL;
      modelica_metatype _argValue = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eq1 has no default value.
      // _r_nargs has no default value.
      // _modif has no default value.
      // _argName has no default value.
      // _argValue has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _argName = tmpMeta8;
          _argValue = tmpMeta9;
          _r_nargs = tmpMeta7;
          /* Pattern matching succeeded */
          _eq1 = omc_BlockCallRewrite_matchNamedArgClass(threadData, _elemId, _argName, _argValue, _classes, _oldEqs, _oldModif ,&_modif);
          /* Tail recursive call */
          _nargs = _r_nargs;
          _oldEqs = _eq1;
          _oldModif = _modif;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newModif = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_newModif) { *out_newModif = _newModif; }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchVarArgs(threadData_t *threadData, modelica_string _elemId, modelica_metatype _args, modelica_metatype _comps, modelica_metatype _oldEqs, modelica_metatype *out_newArgs)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newArgs = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newArgs has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _comps;
    tmp4_2 = _args;
    {
      modelica_metatype _r_comps = NULL;
      modelica_metatype _r_args = NULL;
      modelica_metatype _arg = NULL;
      modelica_string _cName = NULL;
      modelica_metatype _eq = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_comps has no default value.
      // _r_args has no default value.
      // _arg has no default value.
      // _cName has no default value.
      // _eq has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _args;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          _cName = tmpMeta9;
          _r_comps = tmpMeta7;
          _arg = tmpMeta10;
          _r_args = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box3(5, &Absyn_ComponentRef_CREF__IDENT__desc, _cName, tmpMeta13);
          tmpMeta15 = mmc_mk_box4(4, &Absyn_ComponentRef_CREF__QUAL__desc, _elemId, tmpMeta12, tmpMeta14);
          tmpMeta16 = mmc_mk_box2(5, &Absyn_Exp_CREF__desc, tmpMeta15);
          tmpMeta17 = mmc_mk_box3(4, &Absyn_Equation_EQ__EQUALS__desc, tmpMeta16, _arg);
          tmpMeta18 = mmc_mk_box4(3, &Absyn_EquationItem_EQUATIONITEM__desc, tmpMeta17, mmc_mk_none(), _OMC_LIT2);
          _eq = tmpMeta18;
          tmpMeta19 = mmc_mk_cons(_eq, _oldEqs);
          /* Tail recursive call */
          _args = _r_args;
          _comps = _r_comps;
          _oldEqs = tmpMeta19;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newArgs = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_newArgs) { *out_newArgs = _newArgs; }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchParamArgs(threadData_t *threadData, modelica_metatype _args, modelica_metatype _comps, modelica_metatype _oldModif, modelica_metatype *out_newArgs)
{
  modelica_metatype _newModif = NULL;
  modelica_metatype _newArgs = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newModif has no default value.
  // _newArgs has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _comps;
    tmp4_2 = _args;
    {
      modelica_metatype _r_comps = NULL;
      modelica_metatype _r_args = NULL;
      modelica_metatype _arg = NULL;
      modelica_string _cName = NULL;
      modelica_metatype _modif = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_comps has no default value.
      // _r_args has no default value.
      // _arg has no default value.
      // _cName has no default value.
      // _modif has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldModif;
          tmpMeta[0+1] = _args;
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldModif;
          tmpMeta[0+1] = _args;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_2);
          tmpMeta11 = MMC_CDR(tmp4_2);
          _cName = tmpMeta9;
          _r_comps = tmpMeta7;
          _arg = tmpMeta10;
          _r_args = tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _cName);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box3(4, &Absyn_EqMod_EQMOD__desc, _arg, _OMC_LIT2);
          tmpMeta15 = mmc_mk_box3(3, &Absyn_Modification_CLASSMOD__desc, tmpMeta13, tmpMeta14);
          tmpMeta16 = mmc_mk_box7(3, &Absyn_ElementArg_MODIFICATION__desc, mmc_mk_boolean(0 /* false */), _OMC_LIT3, tmpMeta12, mmc_mk_some(tmpMeta15), mmc_mk_none(), _OMC_LIT2);
          _modif = tmpMeta16;
          tmpMeta17 = mmc_mk_cons(_modif, _oldModif);
          /* Tail recursive call */
          _args = _r_args;
          _comps = _r_comps;
          _oldModif = tmpMeta17;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newModif = tmpMeta[0+0];
  _newArgs = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_newArgs) { *out_newArgs = _newArgs; }
  return _newModif;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchArgsElems(threadData_t *threadData, modelica_string _elemId, modelica_metatype _args, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_newArgs)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newModif = NULL;
  modelica_metatype _newArgs = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newModif has no default value.
  // _newArgs has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _args;
    tmp4_2 = _elems;
    {
      modelica_metatype _r_elems = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _modif = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _r_args = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_elems has no default value.
      // _eqs has no default value.
      // _modif has no default value.
      // _comps has no default value.
      // _r_args has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          tmpMeta[0+2] = _args;
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          tmpMeta[0+2] = _args;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_2);
          tmpMeta9 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,6) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,3,3) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,2,0) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 4));
          
          _r_args = tmpMeta7;
          _comps = tmpMeta14;
          _r_elems = tmpMeta9;
          /* Pattern matching succeeded */
          _modif = omc_BlockCallRewrite_matchParamArgs(threadData, _args, _comps, _oldModif ,&_r_args);
          /* Tail recursive call */
          _args = _r_args;
          _elems = _r_elems;
          _oldModif = _modif;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_1);
          tmpMeta16 = MMC_CDR(tmp4_1);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta17 = MMC_CAR(tmp4_2);
          tmpMeta18 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta17,0,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,0,6) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,3,3) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta22,0,0) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 4));
          
          _r_args = tmpMeta16;
          _comps = tmpMeta23;
          _r_elems = tmpMeta18;
          /* Pattern matching succeeded */
          _eqs = omc_BlockCallRewrite_matchVarArgs(threadData, _elemId, _args, _comps, _oldEqs ,&_r_args);
          /* Tail recursive call */
          _args = _r_args;
          _elems = _r_elems;
          _oldEqs = _eqs;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmp4_2);
          tmpMeta25 = MMC_CDR(tmp4_2);
          
          _r_elems = tmpMeta25;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _elems = _r_elems;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newModif = tmpMeta[0+1];
  _newArgs = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_newModif) { *out_newModif = _newModif; }
  if (out_newArgs) { *out_newArgs = _newArgs; }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_matchArgsClass(threadData_t *threadData, modelica_string _elemId, modelica_metatype _args, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newModif = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newModif has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _classes;
    tmp4_2 = _args;
    {
      modelica_metatype _r_classes = NULL;
      modelica_metatype _elems1 = NULL;
      modelica_metatype _eq1 = NULL;
      modelica_metatype _r_args = NULL;
      modelica_metatype _modif = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_classes has no default value.
      // _elems1 has no default value.
      // _eq1 has no default value.
      // _r_args has no default value.
      // _modif has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _elems1 = tmpMeta8;
          _r_classes = tmpMeta7;
          /* Pattern matching succeeded */
          _eq1 = omc_BlockCallRewrite_matchArgsElems(threadData, _elemId, _args, _elems1, _oldEqs, _oldModif ,&_modif ,&_r_args);
          /* Tail recursive call */
          _args = _r_args;
          _classes = _r_classes;
          _oldEqs = _eq1;
          _oldModif = _modif;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          
          _r_classes = tmpMeta10;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _classes = _r_classes;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newModif = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_newModif) { *out_newModif = _newModif; }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseArgs(threadData_t *threadData, modelica_string _elemId, modelica_metatype _classes, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_mods)
{
  modelica_metatype _eqs = NULL;
  modelica_metatype _mods = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqs has no default value.
  // _mods has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _fargs;
    {
      modelica_metatype _args = NULL;
      modelica_metatype _argNames = NULL;
      modelica_metatype _eqs1 = NULL;
      modelica_metatype _mods1 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _args has no default value.
      // _argNames has no default value.
      // _eqs1 has no default value.
      // _mods1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _args = tmpMeta6;
          _argNames = tmpMeta7;
          /* Pattern matching succeeded */
          _eqs1 = omc_BlockCallRewrite_matchArgsClass(threadData, _elemId, _args, _classes, _oldEqs, _oldModif ,&_mods1);
          tmpMeta[0+0] = omc_BlockCallRewrite_matchNamedArgsClass(threadData, _elemId, _argNames, _classes, _eqs1, _mods1, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _eqs = tmpMeta[0+0];
  _mods = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_mods) { *out_mods = _mods; }
  return _eqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_lookThroughElems(threadData_t *threadData, modelica_string _id, modelica_integer _instNo, modelica_metatype _fargs, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newModif = NULL;
  modelica_boolean _found;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newModif has no default value.
  // _found has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _elems;
    {
      modelica_metatype _r_elems = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _mods = NULL;
      modelica_metatype _classParts = NULL;
      modelica_string _id2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_elems has no default value.
      // _eqs has no default value.
      // _mods has no default value.
      // _classParts has no default value.
      // _id2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          tmp1_c2 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,0,6) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,0,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,4,0) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta13,0,5) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 4));
          
          _id2 = tmpMeta11;
          _classParts = tmpMeta14;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching assignment */
          tmp15 = (stringEqual(_id2, _id));
          if (1 /* true */ != tmp15) goto goto_2;

          tmpMeta16 = stringAppend(_OMC_LIT4,_id);
          tmpMeta17 = stringAppend(tmpMeta16,intString(_instNo));
          _eqs = omc_BlockCallRewrite_parseArgs(threadData, tmpMeta17, _classParts, _fargs, _oldEqs, _oldModif ,&_mods);
          tmpMeta[0+0] = _eqs;
          tmpMeta[0+1] = _mods;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_boolean tmp27;
          modelica_metatype tmpMeta28;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,0,1) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,6) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,0,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta23,8,0) == 0) goto tmp3_end;
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,0,5) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 4));
          
          _classParts = tmpMeta25;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta28 = omc_BlockCallRewrite_lookThroughClasses(threadData, _id, _instNo, _fargs, _classParts, _oldEqs, _oldModif, &tmpMeta26, &tmp27);
          _eqs = tmpMeta28;
          if (1 /* true */ != tmp27) goto goto_2;
          _mods = tmpMeta26;
          tmpMeta[0+0] = _eqs;
          tmpMeta[0+1] = _mods;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta29 = MMC_CAR(tmp4_1);
          tmpMeta30 = MMC_CDR(tmp4_1);
          _r_elems = tmpMeta30;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BlockCallRewrite_lookThroughElems(threadData, _id, _instNo, _fargs, _r_elems, _oldEqs, _oldModif, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newModif = tmpMeta[0+1];
  _found = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_newModif) { *out_newModif = _newModif; }
  if (out_found) { *out_found = _found; }
  return _newEqs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_lookThroughElems(threadData_t *threadData, modelica_metatype _id, modelica_metatype _instNo, modelica_metatype _fargs, modelica_metatype _elems, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found)
{
  modelica_integer tmp1;
  modelica_boolean _found;
  modelica_metatype _newEqs = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _newEqs = omc_BlockCallRewrite_lookThroughElems(threadData, _id, tmp1, _fargs, _elems, _oldEqs, _oldModif, out_newModif, &_found);
  /* skip box _newEqs; list<Absyn.EquationItem> */
  /* skip box _newModif; list<Absyn.ElementArg> */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_lookThroughClasses(threadData_t *threadData, modelica_string _id, modelica_integer _instNo, modelica_metatype _fargs, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newModif = NULL;
  modelica_boolean _found;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newModif has no default value.
  // _found has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _classes;
    {
      modelica_metatype _r_classes = NULL;
      modelica_metatype _elems1 = NULL;
      modelica_metatype _eq1 = NULL;
      modelica_metatype _modif = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_classes has no default value.
      // _elems1 has no default value.
      // _eq1 has no default value.
      // _modif has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _oldEqs;
          tmpMeta[0+1] = _oldModif;
          tmp1_c2 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _elems1 = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta11 = omc_BlockCallRewrite_lookThroughElems(threadData, _id, _instNo, _fargs, _elems1, _oldEqs, _oldModif, &tmpMeta9, &tmp10);
          _eq1 = tmpMeta11;
          if (1 /* true */ != tmp10) goto goto_2;
          _modif = tmpMeta9;
          tmpMeta[0+0] = _eq1;
          tmpMeta[0+1] = _modif;
          tmp1_c2 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          _r_classes = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BlockCallRewrite_lookThroughClasses(threadData, _id, _instNo, _fargs, _r_classes, _oldEqs, _oldModif, &tmpMeta[0+1], &tmp1_c2);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newModif = tmpMeta[0+1];
  _found = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_newModif) { *out_newModif = _newModif; }
  if (out_found) { *out_found = _found; }
  return _newEqs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_lookThroughClasses(threadData_t *threadData, modelica_metatype _id, modelica_metatype _instNo, modelica_metatype _fargs, modelica_metatype _classes, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found)
{
  modelica_integer tmp1;
  modelica_boolean _found;
  modelica_metatype _newEqs = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _newEqs = omc_BlockCallRewrite_lookThroughClasses(threadData, _id, tmp1, _fargs, _classes, _oldEqs, _oldModif, out_newModif, &_found);
  /* skip box _newEqs; list<Absyn.EquationItem> */
  /* skip box _newModif; list<Absyn.ElementArg> */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseClassesDefs(threadData_t *threadData, modelica_string _id, modelica_integer _instNo, modelica_metatype _classes, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found, modelica_integer *out_newInstNo)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newModif = NULL;
  modelica_boolean _found;
  modelica_integer _newInstNo;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newModif has no default value.
  // _found has no default value.
  // _newInstNo has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _classes;
    {
      modelica_metatype _r_classes = NULL;
      modelica_string _id2 = NULL;
      modelica_metatype _mods = NULL;
      modelica_metatype _classParts = NULL;
      modelica_metatype _eqs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_classes has no default value.
      // _id2 has no default value.
      // _mods has no default value.
      // _classParts has no default value.
      // _eqs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
          tmp1_c2 = 0 /* false */;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,8,0) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,5) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 4));
          
          _classParts = tmpMeta12;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta15 = omc_BlockCallRewrite_lookThroughClasses(threadData, _id, _instNo, _fargs, _classParts, _oldEqs, _oldModif, &tmpMeta13, &tmp14);
          _eqs = tmpMeta15;
          if (1 /* true */ != tmp14) goto goto_2;
          _mods = tmpMeta13;
          tmpMeta[0+0] = _eqs;
          tmpMeta[0+1] = _mods;
          tmp1_c2 = 1 /* true */;
          tmp1_c3 = ((modelica_integer) 1) + _instNo;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_boolean tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta19,4,0) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,0,5) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 4));
          
          _id2 = tmpMeta18;
          _classParts = tmpMeta21;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp22 = (stringEqual(_id2, _id));
          if (1 /* true */ != tmp22) goto goto_2;

          tmpMeta23 = stringAppend(_OMC_LIT4,_id);
          tmpMeta24 = stringAppend(tmpMeta23,intString(_instNo));
          _eqs = omc_BlockCallRewrite_parseArgs(threadData, tmpMeta24, _classParts, _fargs, _oldEqs, _oldModif ,&_mods);
          tmpMeta[0+0] = _eqs;
          tmpMeta[0+1] = _mods;
          tmp1_c2 = 1 /* true */;
          tmp1_c3 = ((modelica_integer) 1) + _instNo;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta25 = MMC_CAR(tmp4_1);
          tmpMeta26 = MMC_CDR(tmp4_1);
          _r_classes = tmpMeta26;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BlockCallRewrite_parseClassesDefs(threadData, _id, _instNo, _r_classes, _fargs, _oldEqs, _oldModif, &tmpMeta[0+1], &tmp1_c2, &tmp1_c3);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newModif = tmpMeta[0+1];
  _found = tmp1_c2;
  _newInstNo = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_newModif) { *out_newModif = _newModif; }
  if (out_found) { *out_found = _found; }
  if (out_newInstNo) { *out_newInstNo = _newInstNo; }
  return _newEqs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseClassesDefs(threadData_t *threadData, modelica_metatype _id, modelica_metatype _instNo, modelica_metatype _classes, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found, modelica_metatype *out_newInstNo)
{
  modelica_integer tmp1;
  modelica_boolean _found;
  modelica_integer _newInstNo;
  modelica_metatype _newEqs = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _newEqs = omc_BlockCallRewrite_parseClassesDefs(threadData, _id, tmp1, _classes, _fargs, _oldEqs, _oldModif, out_newModif, &_found, &_newInstNo);
  /* skip box _newEqs; list<Absyn.EquationItem> */
  /* skip box _newModif; list<Absyn.ElementArg> */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  if (out_newInstNo) { *out_newInstNo = mmc_mk_icon(_newInstNo); }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_getDefinition(threadData_t *threadData, modelica_string _id, modelica_integer _instNo, modelica_metatype _defs, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_boolean *out_found, modelica_integer *out_newInstNo)
{
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newModif = NULL;
  modelica_boolean _found;
  modelica_integer _newInstNo;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newEqs has no default value.
  // _newModif has no default value.
  // _found has no default value.
  // _newInstNo has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _defs;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BlockCallRewrite_parseClassesDefs(threadData, _id, _instNo, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_defs), 2))), _fargs, _oldEqs, _oldModif, &tmpMeta[0+1], &tmp1_c2, &tmp1_c3);
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newEqs = tmpMeta[0+0];
  _newModif = tmpMeta[0+1];
  _found = tmp1_c2;
  _newInstNo = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_newModif) { *out_newModif = _newModif; }
  if (out_found) { *out_found = _found; }
  if (out_newInstNo) { *out_newInstNo = _newInstNo; }
  return _newEqs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_getDefinition(threadData_t *threadData, modelica_metatype _id, modelica_metatype _instNo, modelica_metatype _defs, modelica_metatype _fargs, modelica_metatype _oldEqs, modelica_metatype _oldModif, modelica_metatype *out_newModif, modelica_metatype *out_found, modelica_metatype *out_newInstNo)
{
  modelica_integer tmp1;
  modelica_boolean _found;
  modelica_integer _newInstNo;
  modelica_metatype _newEqs = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _newEqs = omc_BlockCallRewrite_getDefinition(threadData, _id, tmp1, _defs, _fargs, _oldEqs, _oldModif, out_newModif, &_found, &_newInstNo);
  /* skip box _newEqs; list<Absyn.EquationItem> */
  /* skip box _newModif; list<Absyn.ElementArg> */
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  if (out_newInstNo) { *out_newInstNo = mmc_mk_icon(_newInstNo); }
  return _newEqs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseCall(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_integer _instNo, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype *out_newEqs, modelica_metatype *out_newElems, modelica_integer *out_newInstNo)
{
  modelica_metatype _res_expr = NULL;
  modelica_metatype _newEqs = NULL;
  modelica_metatype _newElems = NULL;
  modelica_integer _newInstNo;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res_expr has no default value.
  // _newEqs has no default value.
  // _newElems has no default value.
  // _newInstNo has no default value.
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _in_eq;
    {
      modelica_metatype _fargs = NULL;
      modelica_string _elName = NULL;
      modelica_metatype _elem = NULL;
      modelica_string _id = NULL;
      modelica_metatype _mods = NULL;
      modelica_metatype _eqs = NULL;
      modelica_integer _count;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fargs has no default value.
      // _elName has no default value.
      // _elem has no default value.
      // _id has no default value.
      // _mods has no default value.
      // _eqs has no default value.
      // _count has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _id = tmpMeta7;
          _fargs = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = omc_BlockCallRewrite_getDefinition(threadData, _id, _instNo, _defs, _fargs, _oldEqs, tmpMeta12, &tmpMeta9, &tmp10, &tmp11);
          _eqs = tmpMeta13;
          if (1 /* true */ != tmp10) goto goto_2;
          _mods = tmpMeta9;
          _count = tmp11;

          tmpMeta14 = stringAppend(_OMC_LIT4,_id);
          tmpMeta15 = stringAppend(tmpMeta14,intString(_instNo));
          _elName = tmpMeta15;

          tmpMeta16 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, _id);
          tmpMeta17 = mmc_mk_box3(3, &Absyn_TypeSpec_TPATH__desc, tmpMeta16, mmc_mk_none());
          tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta20 = mmc_mk_box3(3, &Absyn_Modification_CLASSMOD__desc, _mods, _OMC_LIT11);
          tmpMeta21 = mmc_mk_box4(3, &Absyn_Component_COMPONENT__desc, _elName, tmpMeta19, mmc_mk_some(tmpMeta20));
          tmpMeta22 = mmc_mk_box4(3, &Absyn_ComponentItem_COMPONENTITEM__desc, tmpMeta21, mmc_mk_none(), mmc_mk_none());
          tmpMeta18 = mmc_mk_cons(tmpMeta22, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta23 = mmc_mk_box4(6, &Absyn_ElementSpec_COMPONENTS__desc, _OMC_LIT10, tmpMeta17, tmpMeta18);
          tmpMeta24 = mmc_mk_box7(3, &Absyn_Element_ELEMENT__desc, mmc_mk_boolean(0 /* false */), mmc_mk_none(), _OMC_LIT5, tmpMeta23, _OMC_LIT2, mmc_mk_none());
          tmpMeta25 = mmc_mk_box2(3, &Absyn_ElementItem_ELEMENTITEM__desc, tmpMeta24);
          _elem = tmpMeta25;
          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta27 = mmc_mk_box4(4, &Absyn_ComponentRef_CREF__QUAL__desc, _elName, tmpMeta26, _OMC_LIT13);
          tmpMeta28 = mmc_mk_box2(5, &Absyn_Exp_CREF__desc, tmpMeta27);
          tmpMeta29 = mmc_mk_cons(_elem, _oldElems);
          tmpMeta[0+0] = tmpMeta28;
          tmpMeta[0+1] = _eqs;
          tmpMeta[0+2] = tmpMeta29;
          tmp1_c3 = _count;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = _in_eq;
          tmpMeta[0+1] = _oldEqs;
          tmpMeta[0+2] = tmpMeta30;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _res_expr = tmpMeta[0+0];
  _newEqs = tmpMeta[0+1];
  _newElems = tmpMeta[0+2];
  _newInstNo = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_newEqs) { *out_newEqs = _newEqs; }
  if (out_newElems) { *out_newElems = _newElems; }
  if (out_newInstNo) { *out_newInstNo = _newInstNo; }
  return _res_expr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseCall(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _instNo, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype *out_newEqs, modelica_metatype *out_newElems, modelica_metatype *out_newInstNo)
{
  modelica_integer tmp1;
  modelica_integer _newInstNo;
  modelica_metatype _res_expr = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _res_expr = omc_BlockCallRewrite_parseCall(threadData, _in_eq, _defs, tmp1, _oldEqs, _oldElems, out_newEqs, out_newElems, &_newInstNo);
  /* skip box _res_expr; Absyn.Exp */
  /* skip box _newEqs; list<Absyn.EquationItem> */
  /* skip box _newElems; list<Absyn.ElementItem> */
  if (out_newInstNo) { *out_newInstNo = mmc_mk_icon(_newInstNo); }
  return _res_expr;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseExpressionTuple(threadData_t *threadData, modelica_metatype _tuple_list, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo)
{
  modelica_metatype _out_tuple_list = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _elems = NULL;
  modelica_integer _newInstNo;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_tuple_list has no default value.
  // _eqs has no default value.
  // _elems has no default value.
  // _newInstNo has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tuple_list;
    {
      modelica_metatype _r_tuple_list = NULL;
      modelica_metatype _ntuples = NULL;
      modelica_metatype _eqs1 = NULL;
      modelica_metatype _eqs3 = NULL;
      modelica_metatype _elems1 = NULL;
      modelica_metatype _elems3 = NULL;
      modelica_integer _count1;
      modelica_integer _count3;
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _nexp1 = NULL;
      modelica_metatype _nexp2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_tuple_list has no default value.
      // _ntuples has no default value.
      // _eqs1 has no default value.
      // _eqs3 has no default value.
      // _elems1 has no default value.
      // _elems3 has no default value.
      // _count1 has no default value.
      // _count3 has no default value.
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _nexp1 has no default value.
      // _nexp2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = _oldEqs;
          tmpMeta[0+2] = _oldElems;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _exp1 = tmpMeta9;
          _exp2 = tmpMeta10;
          _r_tuple_list = tmpMeta8;
          /* Pattern matching succeeded */
          _nexp1 = omc_BlockCallRewrite_parseExpression(threadData, _exp1, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count1);

          _nexp2 = omc_BlockCallRewrite_parseExpression(threadData, _exp2, _defs, _eqs1, _elems1, _count1, NULL, NULL, NULL);

          _ntuples = omc_BlockCallRewrite_parseExpressionTuple(threadData, _r_tuple_list, _defs, _eqs1, _elems1, _count1 ,&_eqs3 ,&_elems3 ,&_count3);
          tmpMeta12 = mmc_mk_box2(0, _nexp1, _nexp2);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _ntuples);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _eqs3;
          tmpMeta[0+2] = _elems3;
          tmp1_c3 = _count3;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out_tuple_list = tmpMeta[0+0];
  _eqs = tmpMeta[0+1];
  _elems = tmpMeta[0+2];
  _newInstNo = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_eqs) { *out_eqs = _eqs; }
  if (out_elems) { *out_elems = _elems; }
  if (out_newInstNo) { *out_newInstNo = _newInstNo; }
  return _out_tuple_list;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseExpressionTuple(threadData_t *threadData, modelica_metatype _tuple_list, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo)
{
  modelica_integer tmp1;
  modelica_integer _newInstNo;
  modelica_metatype _out_tuple_list = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _out_tuple_list = omc_BlockCallRewrite_parseExpressionTuple(threadData, _tuple_list, _defs, _oldEqs, _oldElems, tmp1, out_eqs, out_elems, &_newInstNo);
  /* skip box _out_tuple_list; list<tuple<Absyn.Exp, Absyn.Exp>> */
  /* skip box _eqs; list<Absyn.EquationItem> */
  /* skip box _elems; list<Absyn.ElementItem> */
  if (out_newInstNo) { *out_newInstNo = mmc_mk_icon(_newInstNo); }
  return _out_tuple_list;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseExpression(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo)
{
  modelica_metatype _out_eq = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _elems = NULL;
  modelica_integer _newInstNo;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_eq has no default value.
  // _eqs has no default value.
  // _elems has no default value.
  // _newInstNo has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _in_eq;
    {
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _nexp1 = NULL;
      modelica_metatype _nexp2 = NULL;
      modelica_metatype _ife = NULL;
      modelica_metatype _nife = NULL;
      modelica_metatype _op = NULL;
      modelica_metatype _eqs1 = NULL;
      modelica_metatype _eqs2 = NULL;
      modelica_metatype _eqs3 = NULL;
      modelica_metatype _eqs4 = NULL;
      modelica_metatype _elems1 = NULL;
      modelica_metatype _elems2 = NULL;
      modelica_metatype _elems3 = NULL;
      modelica_metatype _elems4 = NULL;
      modelica_integer _count;
      modelica_integer _count2;
      modelica_integer _count3;
      modelica_integer _count4;
      modelica_metatype _elif = NULL;
      modelica_metatype _nelif = NULL;
      int tmp4;
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _nexp1 has no default value.
      // _nexp2 has no default value.
      // _ife has no default value.
      // _nife has no default value.
      // _op has no default value.
      // _eqs1 has no default value.
      // _eqs2 has no default value.
      // _eqs3 has no default value.
      // _eqs4 has no default value.
      // _elems1 has no default value.
      // _elems2 has no default value.
      // _elems3 has no default value.
      // _elems4 has no default value.
      // _count has no default value.
      // _count2 has no default value.
      // _count3 has no default value.
      // _count4 has no default value.
      // _elif has no default value.
      // _nelif has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 8: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,3) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta5;
          _op = tmpMeta6;
          _exp2 = tmpMeta7;
          /* Pattern matching succeeded */
          _nexp1 = omc_BlockCallRewrite_parseExpression(threadData, _exp1, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count);

          _nexp2 = omc_BlockCallRewrite_parseExpression(threadData, _exp2, _defs, _eqs1, _elems1, _count ,&_eqs2 ,&_elems2 ,&_count2);
          tmpMeta8 = mmc_mk_box4(8, &Absyn_Exp_BINARY__desc, _nexp1, _op, _nexp2);
          tmpMeta[0+0] = tmpMeta8;
          tmpMeta[0+1] = _eqs2;
          tmpMeta[0+2] = _elems2;
          tmp1_c3 = _count2;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta9;
          _op = tmpMeta10;
          _exp2 = tmpMeta11;
          /* Pattern matching succeeded */
          _nexp1 = omc_BlockCallRewrite_parseExpression(threadData, _exp1, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count);

          _nexp2 = omc_BlockCallRewrite_parseExpression(threadData, _exp2, _defs, _eqs1, _elems1, _count ,&_eqs2 ,&_elems2 ,&_count2);
          tmpMeta12 = mmc_mk_box4(10, &Absyn_Exp_LBINARY__desc, _nexp1, _op, _nexp2);
          tmpMeta[0+0] = tmpMeta12;
          tmpMeta[0+1] = _eqs2;
          tmpMeta[0+2] = _elems2;
          tmp1_c3 = _count2;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _op = tmpMeta13;
          _exp2 = tmpMeta14;
          /* Pattern matching succeeded */
          _nexp2 = omc_BlockCallRewrite_parseExpression(threadData, _exp2, _defs, _oldEqs, _oldElems, _instNo ,&_eqs2 ,&_elems2 ,&_count);
          tmpMeta15 = mmc_mk_box3(9, &Absyn_Exp_UNARY__desc, _op, _nexp2);
          tmpMeta[0+0] = tmpMeta15;
          tmpMeta[0+1] = _eqs2;
          tmpMeta[0+2] = _elems2;
          tmp1_c3 = _count;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _op = tmpMeta16;
          _exp2 = tmpMeta17;
          /* Pattern matching succeeded */
          _nexp2 = omc_BlockCallRewrite_parseExpression(threadData, _exp2, _defs, _oldEqs, _oldElems, _instNo ,&_eqs2 ,&_elems2 ,&_count);
          tmpMeta18 = mmc_mk_box3(11, &Absyn_Exp_LUNARY__desc, _op, _nexp2);
          tmpMeta[0+0] = tmpMeta18;
          tmpMeta[0+1] = _eqs2;
          tmpMeta[0+2] = _elems2;
          tmp1_c3 = _count;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,4) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _ife = tmpMeta19;
          _exp1 = tmpMeta20;
          _exp2 = tmpMeta21;
          _elif = tmpMeta22;
          /* Pattern matching succeeded */
          _nife = omc_BlockCallRewrite_parseExpression(threadData, _ife, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count);

          _nexp1 = omc_BlockCallRewrite_parseExpression(threadData, _exp1, _defs, _eqs1, _elems1, _count ,&_eqs2 ,&_elems2 ,&_count2);

          _nexp2 = omc_BlockCallRewrite_parseExpression(threadData, _exp2, _defs, _eqs2, _elems2, _count2 ,&_eqs3 ,&_elems3 ,&_count3);

          _nelif = omc_BlockCallRewrite_parseExpressionTuple(threadData, _elif, _defs, _eqs3, _elems3, _count3 ,&_eqs4 ,&_elems4 ,&_count4);
          tmpMeta23 = mmc_mk_box5(13, &Absyn_Exp_IFEXP__desc, _nife, _nexp1, _nexp2, _nelif);
          tmpMeta[0+0] = tmpMeta23;
          tmpMeta[0+1] = _eqs4;
          tmpMeta[0+2] = _elems4;
          tmp1_c3 = _count4;
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BlockCallRewrite_parseCall(threadData, _in_eq, _defs, _instNo, _oldEqs, _oldElems, &tmpMeta[0+1], &tmpMeta[0+2], &tmp1_c3);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _in_eq;
          tmpMeta[0+1] = _oldEqs;
          tmpMeta[0+2] = _oldElems;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out_eq = tmpMeta[0+0];
  _eqs = tmpMeta[0+1];
  _elems = tmpMeta[0+2];
  _newInstNo = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_eqs) { *out_eqs = _eqs; }
  if (out_elems) { *out_elems = _elems; }
  if (out_newInstNo) { *out_newInstNo = _newInstNo; }
  return _out_eq;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseExpression(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo)
{
  modelica_integer tmp1;
  modelica_integer _newInstNo;
  modelica_metatype _out_eq = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _out_eq = omc_BlockCallRewrite_parseExpression(threadData, _in_eq, _defs, _oldEqs, _oldElems, tmp1, out_eqs, out_elems, &_newInstNo);
  /* skip box _out_eq; Absyn.Exp */
  /* skip box _eqs; list<Absyn.EquationItem> */
  /* skip box _elems; list<Absyn.ElementItem> */
  if (out_newInstNo) { *out_newInstNo = mmc_mk_icon(_newInstNo); }
  return _out_eq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseEquation(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo)
{
  modelica_metatype _out_eq = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _elems = NULL;
  modelica_integer _newInstNo;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_eq has no default value.
  // _eqs has no default value.
  // _elems has no default value.
  // _newInstNo has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _in_eq;
    {
      modelica_metatype _exp1 = NULL;
      modelica_metatype _exp2 = NULL;
      modelica_metatype _nexp1 = NULL;
      modelica_metatype _nexp2 = NULL;
      modelica_metatype _eqi = NULL;
      modelica_metatype _leq1 = NULL;
      modelica_metatype _leq2 = NULL;
      modelica_metatype _nleq1 = NULL;
      modelica_metatype _nleq2 = NULL;
      modelica_metatype _tup1 = NULL;
      modelica_metatype _cr1 = NULL;
      modelica_metatype _cr2 = NULL;
      modelica_metatype _domain = NULL;
      modelica_metatype _fi = NULL;
      modelica_metatype _farg = NULL;
      modelica_metatype _eqs1 = NULL;
      modelica_metatype _eqs2 = NULL;
      modelica_metatype _eqs3 = NULL;
      modelica_metatype _elems1 = NULL;
      modelica_metatype _elems2 = NULL;
      modelica_metatype _elems3 = NULL;
      modelica_integer _count;
      modelica_integer _count1;
      modelica_integer _count2;
      int tmp4;
      // _exp1 has no default value.
      // _exp2 has no default value.
      // _nexp1 has no default value.
      // _nexp2 has no default value.
      // _eqi has no default value.
      // _leq1 has no default value.
      // _leq2 has no default value.
      // _nleq1 has no default value.
      // _nleq2 has no default value.
      // _tup1 has no default value.
      // _cr1 has no default value.
      // _cr2 has no default value.
      // _domain has no default value.
      // _fi has no default value.
      // _farg has no default value.
      // _eqs1 has no default value.
      // _eqs2 has no default value.
      // _eqs3 has no default value.
      // _elems1 has no default value.
      // _elems2 has no default value.
      // _elems3 has no default value.
      // _count has no default value.
      // _count1 has no default value.
      // _count2 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _exp1 = tmpMeta5;
          _leq1 = tmpMeta6;
          _tup1 = tmpMeta7;
          _leq2 = tmpMeta8;
          /* Pattern matching succeeded */
          _nexp1 = omc_BlockCallRewrite_parseExpression(threadData, _exp1, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count);

          _nleq1 = omc_BlockCallRewrite_parseEquations(threadData, _leq1, _defs, _eqs1, _elems1, _count ,&_eqs2 ,&_elems2 ,&_count1);

          _nleq2 = omc_BlockCallRewrite_parseEquations(threadData, _leq2, _defs, _eqs2, _elems2, _count1 ,&_eqs3 ,&_elems3 ,&_count2);
          tmpMeta9 = mmc_mk_box5(3, &Absyn_Equation_EQ__IF__desc, _nexp1, _nleq1, _tup1, _nleq2);
          tmpMeta[0+0] = tmpMeta9;
          tmpMeta[0+1] = _eqs3;
          tmpMeta[0+2] = _elems3;
          tmp1_c3 = _count2;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _exp1 = tmpMeta10;
          _exp2 = tmpMeta11;
          /* Pattern matching succeeded */
          _nexp1 = omc_BlockCallRewrite_parseExpression(threadData, _exp1, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count);

          _nexp2 = omc_BlockCallRewrite_parseExpression(threadData, _exp2, _defs, _eqs1, _elems1, _count ,&_eqs2 ,&_elems2 ,&_count1);
          tmpMeta12 = mmc_mk_box3(4, &Absyn_Equation_EQ__EQUALS__desc, _nexp1, _nexp2);
          tmpMeta[0+0] = tmpMeta12;
          tmpMeta[0+1] = _eqs2;
          tmpMeta[0+2] = _elems2;
          tmp1_c3 = _count1;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta13;
          _exp2 = tmpMeta14;
          _domain = tmpMeta15;
          /* Pattern matching succeeded */
          _nexp1 = omc_BlockCallRewrite_parseExpression(threadData, _exp1, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count);

          _nexp2 = omc_BlockCallRewrite_parseExpression(threadData, _exp2, _defs, _eqs1, _elems1, _count ,&_eqs2 ,&_elems2 ,&_count1);
          tmpMeta16 = mmc_mk_box4(5, &Absyn_Equation_EQ__PDE__desc, _nexp1, _nexp2, _domain);
          tmpMeta[0+0] = tmpMeta16;
          tmpMeta[0+1] = _eqs2;
          tmpMeta[0+2] = _elems2;
          tmp1_c3 = _count1;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _cr1 = tmpMeta17;
          _cr2 = tmpMeta18;
          /* Pattern matching succeeded */
          tmpMeta19 = mmc_mk_box3(6, &Absyn_Equation_EQ__CONNECT__desc, _cr1, _cr2);
          tmpMeta[0+0] = tmpMeta19;
          tmpMeta[0+1] = _oldEqs;
          tmpMeta[0+2] = _oldElems;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _fi = tmpMeta20;
          _leq1 = tmpMeta21;
          /* Pattern matching succeeded */
          _nleq1 = omc_BlockCallRewrite_parseEquations(threadData, _leq1, _defs, _oldEqs, _oldElems, _instNo ,&_eqs2 ,&_elems2 ,&_count);
          tmpMeta22 = mmc_mk_box3(7, &Absyn_Equation_EQ__FOR__desc, _fi, _nleq1);
          tmpMeta[0+0] = tmpMeta22;
          tmpMeta[0+1] = _eqs2;
          tmpMeta[0+2] = _elems2;
          tmp1_c3 = _count;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,3) == 0) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _exp1 = tmpMeta23;
          _leq1 = tmpMeta24;
          _tup1 = tmpMeta25;
          /* Pattern matching succeeded */
          _nexp1 = omc_BlockCallRewrite_parseExpression(threadData, _exp1, _defs, _oldEqs, _oldElems, _instNo, NULL, NULL, NULL);

          _nleq1 = omc_BlockCallRewrite_parseEquations(threadData, _leq1, _defs, _oldEqs, _oldElems, _instNo, NULL, NULL, NULL);
          tmpMeta26 = mmc_mk_box4(8, &Absyn_Equation_EQ__WHEN__E__desc, _nexp1, _nleq1, _tup1);
          tmpMeta[0+0] = tmpMeta26;
          tmpMeta[0+1] = _oldEqs;
          tmpMeta[0+2] = _oldElems;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _cr1 = tmpMeta27;
          _farg = tmpMeta28;
          /* Pattern matching succeeded */
          tmpMeta29 = mmc_mk_box3(9, &Absyn_Equation_EQ__NORETCALL__desc, _cr1, _farg);
          tmpMeta[0+0] = tmpMeta29;
          tmpMeta[0+1] = _oldEqs;
          tmpMeta[0+2] = _oldElems;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,1) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _eqi = tmpMeta30;
          /* Pattern matching succeeded */
          tmpMeta31 = mmc_mk_box2(10, &Absyn_Equation_EQ__FAILURE__desc, _eqi);
          tmpMeta[0+0] = tmpMeta31;
          tmpMeta[0+1] = _oldEqs;
          tmpMeta[0+2] = _oldElems;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out_eq = tmpMeta[0+0];
  _eqs = tmpMeta[0+1];
  _elems = tmpMeta[0+2];
  _newInstNo = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_eqs) { *out_eqs = _eqs; }
  if (out_elems) { *out_elems = _elems; }
  if (out_newInstNo) { *out_newInstNo = _newInstNo; }
  return _out_eq;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseEquation(threadData_t *threadData, modelica_metatype _in_eq, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo)
{
  modelica_integer tmp1;
  modelica_integer _newInstNo;
  modelica_metatype _out_eq = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _out_eq = omc_BlockCallRewrite_parseEquation(threadData, _in_eq, _defs, _oldEqs, _oldElems, tmp1, out_eqs, out_elems, &_newInstNo);
  /* skip box _out_eq; Absyn.Equation */
  /* skip box _eqs; list<Absyn.EquationItem> */
  /* skip box _elems; list<Absyn.ElementItem> */
  if (out_newInstNo) { *out_newInstNo = mmc_mk_icon(_newInstNo); }
  return _out_eq;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseEquations(threadData_t *threadData, modelica_metatype _classes, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo)
{
  modelica_metatype _out_classes = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _elems = NULL;
  modelica_integer _newInstNo;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_classes has no default value.
  // _eqs has no default value.
  // _elems has no default value.
  // _newInstNo has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _classes;
    {
      modelica_metatype _eq = NULL;
      modelica_metatype _neq = NULL;
      modelica_metatype _cmt = NULL;
      modelica_string _comment = NULL;
      modelica_metatype _info = NULL;
      modelica_metatype _r_classes = NULL;
      modelica_metatype _nr_classes = NULL;
      modelica_metatype _eqs1 = NULL;
      modelica_metatype _eqs2 = NULL;
      modelica_metatype _elems1 = NULL;
      modelica_metatype _elems2 = NULL;
      modelica_integer _count;
      modelica_integer _count1;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eq has no default value.
      // _neq has no default value.
      // _cmt has no default value.
      // _comment has no default value.
      // _info has no default value.
      // _r_classes has no default value.
      // _nr_classes has no default value.
      // _eqs1 has no default value.
      // _eqs2 has no default value.
      // _elems1 has no default value.
      // _elems2 has no default value.
      // _count has no default value.
      // _count1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = _oldEqs;
          tmpMeta[0+2] = _oldElems;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
          _eq = tmpMeta9;
          _cmt = tmpMeta10;
          _info = tmpMeta11;
          _r_classes = tmpMeta8;
          /* Pattern matching succeeded */
          _neq = omc_BlockCallRewrite_parseEquation(threadData, _eq, _defs, _oldEqs, _oldElems, _instNo ,&_eqs2 ,&_elems2 ,&_count1);

          _nr_classes = omc_BlockCallRewrite_parseEquations(threadData, _r_classes, _defs, _eqs2, _elems2, _count1 ,&_eqs1 ,&_elems1 ,&_count);
          tmpMeta13 = mmc_mk_box4(3, &Absyn_EquationItem_EQUATIONITEM__desc, _neq, _cmt, _info);
          tmpMeta12 = mmc_mk_cons(tmpMeta13, _nr_classes);
          tmpMeta[0+0] = tmpMeta12;
          tmpMeta[0+1] = _eqs1;
          tmpMeta[0+2] = _elems1;
          tmp1_c3 = _count;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta14 = MMC_CAR(tmp4_1);
          tmpMeta15 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          _comment = tmpMeta16;
          _r_classes = tmpMeta15;
          /* Pattern matching succeeded */
          _nr_classes = omc_BlockCallRewrite_parseEquations(threadData, _r_classes, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count);
          tmpMeta18 = mmc_mk_box2(4, &Absyn_EquationItem_EQUATIONITEMCOMMENT__desc, _comment);
          tmpMeta17 = mmc_mk_cons(tmpMeta18, _nr_classes);
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = _eqs1;
          tmpMeta[0+2] = _elems1;
          tmp1_c3 = _count;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out_classes = tmpMeta[0+0];
  _eqs = tmpMeta[0+1];
  _elems = tmpMeta[0+2];
  _newInstNo = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_eqs) { *out_eqs = _eqs; }
  if (out_elems) { *out_elems = _elems; }
  if (out_newInstNo) { *out_newInstNo = _newInstNo; }
  return _out_classes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseEquations(threadData_t *threadData, modelica_metatype _classes, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo)
{
  modelica_integer tmp1;
  modelica_integer _newInstNo;
  modelica_metatype _out_classes = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _out_classes = omc_BlockCallRewrite_parseEquations(threadData, _classes, _defs, _oldEqs, _oldElems, tmp1, out_eqs, out_elems, &_newInstNo);
  /* skip box _out_classes; list<Absyn.EquationItem> */
  /* skip box _eqs; list<Absyn.EquationItem> */
  /* skip box _elems; list<Absyn.ElementItem> */
  if (out_newInstNo) { *out_newInstNo = mmc_mk_icon(_newInstNo); }
  return _out_classes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseClassPart(threadData_t *threadData, modelica_metatype _in_def, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_reqs, modelica_metatype *out_relems, modelica_integer *out_newInstNo)
{
  modelica_metatype _out_def = NULL;
  modelica_metatype _reqs = NULL;
  modelica_metatype _relems = NULL;
  modelica_integer _newInstNo;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_def has no default value.
  // _reqs has no default value.
  // _relems has no default value.
  // _newInstNo has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _in_def;
    {
      modelica_metatype _elems = NULL;
      modelica_metatype _exps = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _neqs = NULL;
      modelica_metatype _algs = NULL;
      modelica_metatype _externalDecl = NULL;
      modelica_metatype _annotation_ = NULL;
      modelica_metatype _eqs1 = NULL;
      modelica_metatype _elems1 = NULL;
      modelica_integer _count;
      int tmp4;
      // _elems has no default value.
      // _exps has no default value.
      // _eqs has no default value.
      // _neqs has no default value.
      // _algs has no default value.
      // _externalDecl has no default value.
      // _annotation_ has no default value.
      // _eqs1 has no default value.
      // _elems1 has no default value.
      // _count has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _elems = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(3, &Absyn_ClassPart_PUBLIC__desc, _elems);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
          tmpMeta[0+2] = tmpMeta8;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _elems = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box2(4, &Absyn_ClassPart_PROTECTED__desc, _elems);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta10;
          tmpMeta[0+1] = tmpMeta11;
          tmpMeta[0+2] = tmpMeta12;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _exps = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box2(5, &Absyn_ClassPart_CONSTRAINTS__desc, _exps);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta14;
          tmpMeta[0+1] = tmpMeta15;
          tmpMeta[0+2] = tmpMeta16;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _eqs = tmpMeta17;
          /* Pattern matching succeeded */
          _neqs = omc_BlockCallRewrite_parseEquations(threadData, _eqs, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count);
          tmpMeta18 = mmc_mk_box2(6, &Absyn_ClassPart_EQUATIONS__desc, _neqs);
          tmpMeta[0+0] = tmpMeta18;
          tmpMeta[0+1] = _eqs1;
          tmpMeta[0+2] = _elems1;
          tmp1_c3 = _count;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _eqs = tmpMeta19;
          /* Pattern matching succeeded */
          _neqs = omc_BlockCallRewrite_parseEquations(threadData, _eqs, _defs, _oldEqs, _oldElems, _instNo ,&_eqs1 ,&_elems1 ,&_count);
          tmpMeta20 = mmc_mk_box2(7, &Absyn_ClassPart_INITIALEQUATIONS__desc, _neqs);
          tmpMeta[0+0] = tmpMeta20;
          tmpMeta[0+1] = _eqs1;
          tmpMeta[0+2] = _elems1;
          tmp1_c3 = _count;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,1) == 0) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _algs = tmpMeta21;
          /* Pattern matching succeeded */
          tmpMeta22 = mmc_mk_box2(8, &Absyn_ClassPart_ALGORITHMS__desc, _algs);
          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta22;
          tmpMeta[0+1] = tmpMeta23;
          tmpMeta[0+2] = tmpMeta24;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,1) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _algs = tmpMeta25;
          /* Pattern matching succeeded */
          tmpMeta26 = mmc_mk_box2(9, &Absyn_ClassPart_INITIALALGORITHMS__desc, _algs);
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta26;
          tmpMeta[0+1] = tmpMeta27;
          tmpMeta[0+2] = tmpMeta28;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,2) == 0) goto tmp3_end;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _externalDecl = tmpMeta29;
          _annotation_ = tmpMeta30;
          /* Pattern matching succeeded */
          tmpMeta31 = mmc_mk_box3(10, &Absyn_ClassPart_EXTERNAL__desc, _externalDecl, _annotation_);
          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta31;
          tmpMeta[0+1] = tmpMeta32;
          tmpMeta[0+2] = tmpMeta33;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out_def = tmpMeta[0+0];
  _reqs = tmpMeta[0+1];
  _relems = tmpMeta[0+2];
  _newInstNo = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_reqs) { *out_reqs = _reqs; }
  if (out_relems) { *out_relems = _relems; }
  if (out_newInstNo) { *out_newInstNo = _newInstNo; }
  return _out_def;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseClassPart(threadData_t *threadData, modelica_metatype _in_def, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_reqs, modelica_metatype *out_relems, modelica_metatype *out_newInstNo)
{
  modelica_integer tmp1;
  modelica_integer _newInstNo;
  modelica_metatype _out_def = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _out_def = omc_BlockCallRewrite_parseClassPart(threadData, _in_def, _defs, _oldEqs, _oldElems, tmp1, out_reqs, out_relems, &_newInstNo);
  /* skip box _out_def; Absyn.ClassPart */
  /* skip box _reqs; list<Absyn.EquationItem> */
  /* skip box _relems; list<Absyn.ElementItem> */
  if (out_newInstNo) { *out_newInstNo = mmc_mk_icon(_newInstNo); }
  return _out_def;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseClassParts(threadData_t *threadData, modelica_metatype _classes, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_integer _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_integer *out_newInstNo)
{
  modelica_metatype _out_classes = NULL;
  modelica_metatype _eqs = NULL;
  modelica_metatype _elems = NULL;
  modelica_integer _newInstNo;
  modelica_integer tmp1_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_classes has no default value.
  // _eqs has no default value.
  // _elems has no default value.
  // _newInstNo has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _classes;
    {
      modelica_metatype _r_classes = NULL;
      modelica_metatype _nr_classes = NULL;
      modelica_metatype _cls = NULL;
      modelica_metatype _n_cls = NULL;
      modelica_metatype _eqs1 = NULL;
      modelica_metatype _eqs2 = NULL;
      modelica_metatype _elems1 = NULL;
      modelica_metatype _elems2 = NULL;
      modelica_integer _count;
      modelica_integer _count1;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_classes has no default value.
      // _nr_classes has no default value.
      // _cls has no default value.
      // _n_cls has no default value.
      // _eqs1 has no default value.
      // _eqs2 has no default value.
      // _elems1 has no default value.
      // _elems2 has no default value.
      // _count has no default value.
      // _count1 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = _oldEqs;
          tmpMeta[0+2] = _oldElems;
          tmp1_c3 = _instNo;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _cls = tmpMeta7;
          _r_classes = tmpMeta8;
          /* Pattern matching succeeded */
          _n_cls = omc_BlockCallRewrite_parseClassPart(threadData, _cls, _defs, _oldEqs, _oldElems, _instNo ,&_eqs2 ,&_elems2 ,&_count1);

          _nr_classes = omc_BlockCallRewrite_parseClassParts(threadData, _r_classes, _defs, _eqs2, _elems2, _count1 ,&_eqs1 ,&_elems1 ,&_count);
          tmpMeta9 = mmc_mk_cons(_n_cls, _nr_classes);
          tmpMeta[0+0] = tmpMeta9;
          tmpMeta[0+1] = _eqs1;
          tmpMeta[0+2] = _elems1;
          tmp1_c3 = _count;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out_classes = tmpMeta[0+0];
  _eqs = tmpMeta[0+1];
  _elems = tmpMeta[0+2];
  _newInstNo = tmp1_c3;
  _return: OMC_LABEL_UNUSED
  if (out_eqs) { *out_eqs = _eqs; }
  if (out_elems) { *out_elems = _elems; }
  if (out_newInstNo) { *out_newInstNo = _newInstNo; }
  return _out_classes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BlockCallRewrite_parseClassParts(threadData_t *threadData, modelica_metatype _classes, modelica_metatype _defs, modelica_metatype _oldEqs, modelica_metatype _oldElems, modelica_metatype _instNo, modelica_metatype *out_eqs, modelica_metatype *out_elems, modelica_metatype *out_newInstNo)
{
  modelica_integer tmp1;
  modelica_integer _newInstNo;
  modelica_metatype _out_classes = NULL;
  tmp1 = mmc_unbox_integer(_instNo);
  _out_classes = omc_BlockCallRewrite_parseClassParts(threadData, _classes, _defs, _oldEqs, _oldElems, tmp1, out_eqs, out_elems, &_newInstNo);
  /* skip box _out_classes; list<Absyn.ClassPart> */
  /* skip box _eqs; list<Absyn.EquationItem> */
  /* skip box _elems; list<Absyn.ElementItem> */
  if (out_newInstNo) { *out_newInstNo = mmc_mk_icon(_newInstNo); }
  return _out_classes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseClassDef(threadData_t *threadData, modelica_metatype _in_def, modelica_metatype _defs)
{
  modelica_metatype _out_def = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_def has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _in_def;
    {
      modelica_metatype _typeVars = NULL;
      modelica_metatype _classAttrs = NULL;
      modelica_metatype _classParts = NULL;
      modelica_metatype _nclsp = NULL;
      modelica_metatype _ann = NULL;
      modelica_metatype _comment = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _elems = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _typeVars has no default value.
      // _classAttrs has no default value.
      // _classParts has no default value.
      // _nclsp has no default value.
      // _ann has no default value.
      // _comment has no default value.
      // _eqs has no default value.
      // _elems has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _typeVars = tmpMeta6;
          _classAttrs = tmpMeta7;
          _classParts = tmpMeta8;
          _ann = tmpMeta9;
          _comment = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _nclsp = omc_BlockCallRewrite_parseClassParts(threadData, _classParts, _defs, tmpMeta11, tmpMeta12, ((modelica_integer) 0) ,&_eqs ,&_elems, NULL);
          tmpMeta14 = mmc_mk_box2(3, &Absyn_ClassPart_PUBLIC__desc, _elems);
          tmpMeta16 = mmc_mk_box2(6, &Absyn_ClassPart_EQUATIONS__desc, _eqs);
          tmpMeta15 = mmc_mk_cons(tmpMeta16, _nclsp);
          tmpMeta13 = mmc_mk_cons(tmpMeta14, tmpMeta15);
          tmpMeta17 = mmc_mk_box6(3, &Absyn_ClassDef_PARTS__desc, _typeVars, _classAttrs, tmpMeta13, _ann, _comment);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out_def = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_def;
}

DLLDirection
modelica_metatype omc_BlockCallRewrite_parseClass(threadData_t *threadData, modelica_metatype _in_class, modelica_metatype _defs)
{
  modelica_metatype _out_class = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_class has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _in_class;
    {
      modelica_metatype _body = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _body has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          
          _out_class = tmp4_1;
          _body = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_out_class), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[7] = omc_BlockCallRewrite_parseClassDef(threadData, _body, _defs);
          _out_class = tmpMeta7;
          tmpMeta1 = _out_class;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out_class = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_class;
}

DLLDirection
modelica_metatype omc_BlockCallRewrite_parseClasses(threadData_t *threadData, modelica_metatype _classes, modelica_metatype _defs)
{
  modelica_metatype _out_classes = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_classes has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _classes;
    {
      modelica_metatype _r_classes = NULL;
      modelica_metatype _nr_classes = NULL;
      modelica_metatype _cls = NULL;
      modelica_metatype _n_cls = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _r_classes has no default value.
      // _nr_classes has no default value.
      // _cls has no default value.
      // _n_cls has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          _cls = tmpMeta7;
          _r_classes = tmpMeta8;
          /* Pattern matching succeeded */
          _nr_classes = omc_BlockCallRewrite_parseClasses(threadData, _r_classes, _defs);

          _n_cls = omc_BlockCallRewrite_parseClass(threadData, _cls, _defs);
          tmpMeta9 = mmc_mk_cons(_n_cls, _nr_classes);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _out_classes = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_classes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BlockCallRewrite_parseProgram(threadData_t *threadData, modelica_metatype _inPg, modelica_metatype _defs)
{
  modelica_metatype _outPg = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outPg = _inPg;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outPg;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outPg), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = omc_BlockCallRewrite_parseClasses(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outPg), 2))), _defs);
          _outPg = tmpMeta6;
          tmpMeta1 = _outPg;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _outPg = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outPg;
}

DLLDirection
modelica_metatype omc_BlockCallRewrite_rewriteBlockCall(threadData_t *threadData, modelica_metatype _inPg, modelica_metatype _inDefs)
{
  modelica_metatype _newOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _newOut has no default value.
  { /* match expression */
    {
      modelica_metatype _pg2 = NULL;
      modelica_string _res = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _pg2 has no default value.
      // _res has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _pg2 = omc_BlockCallRewrite_parseProgram(threadData, _inPg, _inDefs);

          _res = omc_Dump_unparseStr(threadData, _pg2, 0 /* false */, _OMC_LIT14);

          fputs(MMC_STRINGDATA(_res),stdout);
          tmpMeta1 = _pg2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _newOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _newOut;
}

