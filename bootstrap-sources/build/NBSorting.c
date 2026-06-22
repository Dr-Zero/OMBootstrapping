#include "omc_simulation_settings.h"
#include "NBSorting.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "NBSorting.SuperNode.collapse crucially failed for the following Phase II strong component because the body turned out to still have strong components:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,151,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,0,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,2,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "/projects/OpenModelica-session2/OMCompiler/Compiler/NBackEnd/Modules/1_Main/NBSorting.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,88,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT10_6,1.781983298e9);
#define _OMC_LIT10_6 MMC_REFREALLIT(_OMC_LIT_STRUCT10_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(522)),MMC_IMMEDIATE(MMC_TAGFIXNUM(49)),MMC_IMMEDIATE(MMC_TAGFIXNUM(522)),MMC_IMMEDIATE(MMC_TAGFIXNUM(179)),_OMC_LIT10_6}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT11_6,1.781983298e9);
#define _OMC_LIT11_6 MMC_REFREALLIT(_OMC_LIT_STRUCT11_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(543)),MMC_IMMEDIATE(MMC_TAGFIXNUM(49)),MMC_IMMEDIATE(MMC_TAGFIXNUM(543)),MMC_IMMEDIATE(MMC_TAGFIXNUM(178)),_OMC_LIT11_6}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "NBSorting.SuperNode.create failed because of unknown adjacency matrix type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,75,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,1) {_OMC_LIT12,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "NBSorting.SuperNode.getEqnIndices failed because elements should not be accessed, only their parents: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,102,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "NBSorting.SuperNode.getEqnIndices failed because of incorrect super node type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,78,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT15,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "] single "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,9,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "] scalar element of ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,21,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,1,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "] algebraic loop "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,17,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,1,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,2,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "] array bucket "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,15,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "ERROR"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,5,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data " eqns: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,7,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "\n vars:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,7,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Sorting"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,7,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "dumpSorting"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,11,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Dumps information about the process of sorting."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,47,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(48)),_OMC_LIT30,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT31}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "NBSorting.tarjan failed because of unknown adjacency matrix or matching type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,77,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,2,1) {_OMC_LIT33,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "NBSorting.tarjan failed because adjacency matrix has unknown type."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,66,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,2,1) {_OMC_LIT35,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "NBSorting.tarjan failed to sort system:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,40,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "System"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,6,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "NBSorting.Value.addCref failed because trying to add a cref to a single value."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,78,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,1) {_OMC_LIT39,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "\n	val: ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,8,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "\n	val: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,7,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#include "util/modelica.h"

#include "NBSorting_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_predecessors(threadData_t *threadData, modelica_integer _idx, modelica_metatype _m, modelica_metatype _mapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_predecessors(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _m, modelica_metatype _mapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_predecessors,2,0) {(void*) boxptr_NBSorting_predecessors,0}};
#define boxvar_NBSorting_predecessors MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_predecessors)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_strongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _var_to_eqn, modelica_integer _eqn, modelica_metatype __omcQ_24in_5Fstack, modelica_integer __omcQ_24in_5Findex, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype __omcQ_24in_5Fcomps, modelica_integer *out_index, modelica_metatype *out_comps);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_strongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _var_to_eqn, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5Fstack, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype __omcQ_24in_5Fcomps, modelica_metatype *out_index, modelica_metatype *out_comps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_strongConnect,2,0) {(void*) boxptr_NBSorting_strongConnect,0}};
#define boxvar_NBSorting_strongConnect MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_strongConnect)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeLoopNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_boolean _update_scalar);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeLoopNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _update_scalar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeLoopNodes,2,0) {(void*) boxptr_NBSorting_SuperNode_mergeLoopNodes,0}};
#define boxvar_NBSorting_SuperNode_mergeLoopNodes MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeLoopNodes)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeArrayNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _cref_to_solve, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_integer _arr_idx, modelica_boolean _update_scalar);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeArrayNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _cref_to_solve, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _arr_idx, modelica_metatype _update_scalar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeArrayNodes,2,0) {(void*) boxptr_NBSorting_SuperNode_mergeArrayNodes,0}};
#define boxvar_NBSorting_SuperNode_mergeArrayNodes MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeArrayNodes)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeRows(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeRows(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeRows,2,0) {(void*) boxptr_NBSorting_SuperNode_mergeRows,0}};
#define boxvar_NBSorting_SuperNode_mergeRows MMC_REFSTRUCTLIT(boxvar_lit_NBSorting_SuperNode_mergeRows)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_predecessors(threadData_t *threadData, modelica_integer _idx, modelica_metatype _m, modelica_metatype _mapping)
{
  modelica_metatype _pre_lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _pre_lst has no default value.
  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar0;
    modelica_integer tmp4;
    modelica_metatype _cand_loopVar = 0;
    modelica_metatype _cand;
    _cand_loopVar = arrayGet(_m,_idx) /* DAE.ASUB */;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar1;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_cand_loopVar)) {
        _cand = MMC_CAR(_cand_loopVar);
        _cand_loopVar = MMC_CDR(_cand_loopVar);
        if ((((mmc_unbox_integer(_cand) > ((modelica_integer) 0)) && (mmc_unbox_integer(arrayGet(_mapping,mmc_unbox_integer(_cand)) /* DAE.ASUB */) != _idx)) && (mmc_unbox_integer(arrayGet(_mapping,mmc_unbox_integer(_cand)) /* DAE.ASUB */) > ((modelica_integer) 0)))) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar0 = arrayGet(_mapping,mmc_unbox_integer(_cand)) /* DAE.ASUB */;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar0,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar1;
  }
  _pre_lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _pre_lst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_predecessors(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _m, modelica_metatype _mapping)
{
  modelica_integer tmp1;
  modelica_metatype _pre_lst = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _pre_lst = omc_NBSorting_predecessors(threadData, tmp1, _m, _mapping);
  /* skip box _pre_lst; list<#Integer> */
  return _pre_lst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBSorting_strongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _var_to_eqn, modelica_integer _eqn, modelica_metatype __omcQ_24in_5Fstack, modelica_integer __omcQ_24in_5Findex, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype __omcQ_24in_5Fcomps, modelica_integer *out_index, modelica_metatype *out_comps)
{
  modelica_metatype _stack = NULL;
  modelica_integer _index;
  modelica_metatype _comps = NULL;
  modelica_metatype _SCC = NULL;
  modelica_integer _eqn2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _stack = __omcQ_24in_5Fstack;
  _index = __omcQ_24in_5Findex;
  _comps = __omcQ_24in_5Fcomps;
  // _SCC has no default value.
  // _eqn2 has no default value.
  arrayUpdate(_number, _eqn, mmc_mk_integer(_index));

  arrayUpdate(_lowlink, _eqn, mmc_mk_integer(_index));

  arrayUpdate(_onStack, _eqn, mmc_mk_boolean(1 /* true */));

  _index = ((modelica_integer) 1) + _index;

  tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_eqn), _stack);
  _stack = tmpMeta1;

  {
    modelica_metatype _eqn2;
    for (tmpMeta2 = omc_NBSorting_predecessors(threadData, _eqn, _m, _var_to_eqn); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _eqn2 = MMC_CAR(tmpMeta2);
      if((mmc_unbox_integer(arrayGet(_number,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */) == ((modelica_integer) -1)))
      {
        _stack = omc_NBSorting_strongConnect(threadData, _m, _var_to_eqn, mmc_unbox_integer(_eqn2), _stack, _index, _number, _lowlink, _onStack, _comps ,&_index ,&_comps);

        arrayUpdate(_lowlink, _eqn, mmc_mk_integer(modelica_integer_min((modelica_integer)(mmc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */)),(modelica_integer)(mmc_unbox_integer(arrayGet(_lowlink,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */)))));
      }
      else
      {
        if(mmc_unbox_boolean(arrayGet(_onStack,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */))
        {
          arrayUpdate(_lowlink, _eqn, mmc_mk_integer(modelica_integer_min((modelica_integer)(mmc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */)),(modelica_integer)(mmc_unbox_integer(arrayGet(_number,mmc_unbox_integer(_eqn2)) /* DAE.ASUB */)))));
        }
      }
    }
  }

  if((mmc_unbox_integer(arrayGet(_lowlink,_eqn) /* DAE.ASUB */) == mmc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */)))
  {
    /* Pattern-matching assignment */
    tmpMeta4 = _stack;
    if (listEmpty(tmpMeta4)) MMC_THROW_INTERNAL();
    tmpMeta5 = MMC_CAR(tmpMeta4);
    tmpMeta6 = MMC_CDR(tmpMeta4);
    tmp7 = mmc_unbox_integer(tmpMeta5);
    _eqn2 = tmp7  /* pattern as ty=Integer */;
    _stack = tmpMeta6;

    arrayUpdate(_onStack, _eqn2, mmc_mk_boolean(0 /* false */));

    tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_eqn2), MMC_REFSTRUCTLIT(mmc_nil));
    _SCC = tmpMeta8;

    while(1)
    {
      if(!(_eqn != _eqn2)) break;
      /* Pattern-matching assignment */
      tmpMeta9 = _stack;
      if (listEmpty(tmpMeta9)) MMC_THROW_INTERNAL();
      tmpMeta10 = MMC_CAR(tmpMeta9);
      tmpMeta11 = MMC_CDR(tmpMeta9);
      tmp12 = mmc_unbox_integer(tmpMeta10);
      _eqn2 = tmp12  /* pattern as ty=Integer */;
      _stack = tmpMeta11;

      arrayUpdate(_onStack, _eqn2, mmc_mk_boolean(0 /* false */));

      tmpMeta13 = mmc_mk_cons(mmc_mk_integer(_eqn2), _SCC);
      _SCC = tmpMeta13;
    }

    tmpMeta14 = mmc_mk_cons(listReverseInPlace(_SCC), _comps);
    _comps = tmpMeta14;
  }
  _return: OMC_LABEL_UNUSED
  if (out_index) { *out_index = _index; }
  if (out_comps) { *out_comps = _comps; }
  return _stack;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_strongConnect(threadData_t *threadData, modelica_metatype _m, modelica_metatype _var_to_eqn, modelica_metatype _eqn, modelica_metatype __omcQ_24in_5Fstack, modelica_metatype __omcQ_24in_5Findex, modelica_metatype _number, modelica_metatype _lowlink, modelica_metatype _onStack, modelica_metatype __omcQ_24in_5Fcomps, modelica_metatype *out_index, modelica_metatype *out_comps)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype _stack = NULL;
  tmp1 = mmc_unbox_integer(_eqn);
  tmp2 = mmc_unbox_integer(__omcQ_24in_5Findex);
  _stack = omc_NBSorting_strongConnect(threadData, _m, _var_to_eqn, tmp1, __omcQ_24in_5Fstack, tmp2, _number, _lowlink, _onStack, __omcQ_24in_5Fcomps, &_index, out_comps);
  /* skip box _stack; list<#Integer> */
  if (out_index) { *out_index = mmc_mk_icon(_index); }
  /* skip box _comps; list<list<#Integer>> */
  return _stack;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeLoopNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_boolean _update_scalar)
{
  modelica_integer _new_idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _new_idx = __omcQ_24in_5Fnew_5Fidx;
  tmpMeta1 = mmc_mk_box3(5, &NBSorting_SuperNode_ALGEBRAIC__LOOP__desc, mmc_mk_integer(_new_idx), _rows_to_merge);
  arrayUpdate(_super_nodes, _new_idx, tmpMeta1);

  if(_update_scalar)
  {
    {
      modelica_metatype _i;
      for (tmpMeta2 = _rows_to_merge; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _i = MMC_CAR(tmpMeta2);
        tmpMeta3 = mmc_mk_box3(4, &NBSorting_SuperNode_ELEMENT__desc, _i, mmc_mk_integer(_new_idx));
        arrayUpdate(_super_nodes, mmc_unbox_integer(_i), tmpMeta3);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _new_idx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeLoopNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _update_scalar)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _new_idx;
  modelica_metatype out_new_idx;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fnew_5Fidx);
  tmp2 = mmc_unbox_integer(_update_scalar);
  _new_idx = omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _rows_to_merge, tmp1, tmp2);
  out_new_idx = mmc_mk_icon(_new_idx);
  return out_new_idx;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeArrayNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _cref_to_solve, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx, modelica_integer _arr_idx, modelica_boolean _update_scalar)
{
  modelica_integer _new_idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _new_idx = __omcQ_24in_5Fnew_5Fidx;
  tmpMeta1 = mmc_mk_box5(6, &NBSorting_SuperNode_ARRAY__BUCKET__desc, mmc_mk_integer(_new_idx), _cref_to_solve, _rows_to_merge, mmc_mk_integer(_arr_idx));
  arrayUpdate(_super_nodes, _new_idx, tmpMeta1);

  if(_update_scalar)
  {
    {
      modelica_metatype _i;
      for (tmpMeta2 = _rows_to_merge; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
      {
        _i = MMC_CAR(tmpMeta2);
        tmpMeta3 = mmc_mk_box3(4, &NBSorting_SuperNode_ELEMENT__desc, _i, mmc_mk_integer(_new_idx));
        arrayUpdate(_super_nodes, mmc_unbox_integer(_i), tmpMeta3);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _new_idx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeArrayNodes(threadData_t *threadData, modelica_metatype _super_nodes, modelica_metatype _cref_to_solve, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx, modelica_metatype _arr_idx, modelica_metatype _update_scalar)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _new_idx;
  modelica_metatype out_new_idx;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fnew_5Fidx);
  tmp2 = mmc_unbox_integer(_arr_idx);
  tmp3 = mmc_unbox_integer(_update_scalar);
  _new_idx = omc_NBSorting_SuperNode_mergeArrayNodes(threadData, _super_nodes, _cref_to_solve, _rows_to_merge, tmp1, tmp2, tmp3);
  out_new_idx = mmc_mk_icon(_new_idx);
  return out_new_idx;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NBSorting_SuperNode_mergeRows(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_integer __omcQ_24in_5Fnew_5Fidx)
{
  modelica_integer _new_idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _new_idx = __omcQ_24in_5Fnew_5Fidx;
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _idx_loopVar = 0;
    modelica_metatype _idx;
    _idx_loopVar = _rows_to_merge;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_idx_loopVar)) {
        _idx = MMC_CAR(_idx_loopVar);
        _idx_loopVar = MMC_CDR(_idx_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = arrayGet(_m,mmc_unbox_integer(_idx)) /* DAE.ASUB */;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  arrayUpdate(_m, _new_idx, omc_UnorderedSet_unique__list(threadData, omc_List_flatten(threadData, tmpMeta1), boxvar_Util_id, boxvar_intEq));

  {
    modelica_metatype _idx;
    for (tmpMeta5 = _rows_to_merge; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _idx = MMC_CAR(tmpMeta5);
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      arrayUpdate(_m, mmc_unbox_integer(_idx), tmpMeta6);

      arrayUpdate(_matching, mmc_unbox_integer(_idx), mmc_mk_integer(((modelica_integer) -1)));
    }
  }

  _new_idx = ((modelica_integer) 1) + _new_idx;
  _return: OMC_LABEL_UNUSED
  return _new_idx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBSorting_SuperNode_mergeRows(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching, modelica_metatype _super_nodes, modelica_metatype _rows_to_merge, modelica_metatype __omcQ_24in_5Fnew_5Fidx)
{
  modelica_integer tmp1;
  modelica_integer _new_idx;
  modelica_metatype out_new_idx;
  tmp1 = mmc_unbox_integer(__omcQ_24in_5Fnew_5Fidx);
  _new_idx = omc_NBSorting_SuperNode_mergeRows(threadData, _m, _matching, _super_nodes, _rows_to_merge, tmp1);
  out_new_idx = mmc_mk_icon(_new_idx);
  return out_new_idx;
}

DLLDirection
modelica_metatype omc_NBSorting_SuperNode_collapse(threadData_t *threadData, modelica_metatype _comp_indices, modelica_metatype _super_nodes, modelica_metatype _m, modelica_metatype _mapping, modelica_metatype _matching, modelica_metatype _vars, modelica_metatype _eqns)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _node_comp = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sorted_body_components = NULL;
  modelica_metatype _sorted_body_indices = NULL;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _comp has no default value.
  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp4;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _comp_indices;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar5;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar4 = arrayGet(_super_nodes,mmc_unbox_integer(_i)) /* DAE.ASUB */;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar5;
  }
  _node_comp = tmpMeta1;
  // _sorted_body_components has no default value.
  // _sorted_body_indices has no default value.
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _node_comp;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _m_local = NULL;
      modelica_metatype _matching_local = NULL;
      modelica_boolean _indep;
      modelica_metatype _map_back = NULL;
      modelica_integer _eqn_arr_idx;
      modelica_integer _var_arr_idx;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _node has no default value.
      // _m_local has no default value.
      // _matching_local has no default value.
      _indep = 1 /* true */;
      // _map_back has no default value.
      // _eqn_arr_idx has no default value.
      // _var_arr_idx has no default value.
      tmp8 = 0;
      for (; tmp8 < 5; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta10 = MMC_CAR(tmp8_1);
          tmpMeta11 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,1) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta11)) goto tmp7_end;
          /* Pattern matching succeeded */
          tmpMeta5 = omc_NBStrongComponent_createPseudoScalar(threadData, _comp_indices, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), _mapping, _vars, _eqns);
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta12 = MMC_CAR(tmp8_1);
          tmpMeta13 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,2,2) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta13)) goto tmp7_end;
          _node = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta5 = omc_NBStrongComponent_createPseudoScalar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), _mapping, _vars, _eqns);
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (listEmpty(tmp8_1)) goto tmp7_end;
          tmpMeta14 = MMC_CAR(tmp8_1);
          tmpMeta15 = MMC_CDR(tmp8_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,3,4) == 0) goto tmp7_end;
          if (!listEmpty(tmpMeta15)) goto tmp7_end;
          _node = tmpMeta14;
          /* Pattern matching succeeded */
          _m_local = omc_NBBackendUtil_getLocalSystem(threadData, _m, _matching, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 4))) ,&_matching_local ,&_map_back);

          _sorted_body_components = omc_NBSorting_tarjanScalar(threadData, _m_local, _matching_local);

          _sorted_body_indices = omc_List_flatten(threadData, _sorted_body_components);

          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp19;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = _sorted_body_indices;
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar7;
            while(1) {
              tmp19 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp19--;
              }
              if (tmp19 == 0) {
                __omcQ_24tmpVar6 = arrayGet(_map_back,mmc_unbox_integer(_i)) /* DAE.ASUB */;
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp19 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar7;
          }
          _sorted_body_indices = tmpMeta16;

          if((omc_List_compareLength(threadData, _sorted_body_components, _sorted_body_indices) != ((modelica_integer) 0)))
          {
            tmpMeta21 = stringAppend(_OMC_LIT4,omc_List_toString(threadData, _node_comp, boxvar_NBSorting_SuperNode_toString, _OMC_LIT5, _OMC_LIT6, _OMC_LIT7, _OMC_LIT8, 1 /* true */, ((modelica_integer) 0)));
            tmpMeta20 = mmc_mk_cons(tmpMeta21, MMC_REFSTRUCTLIT(mmc_nil));
            omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta20);
          }

          _indep = omc_Array_all(threadData, _m_local, boxvar_List_hasOneElement);

          _eqn_arr_idx = mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),mmc_unbox_integer(listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 4)))))) /* DAE.ASUB */);

          _var_arr_idx = mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 3))),mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))),mmc_unbox_integer(listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 4)))))) /* DAE.ASUB */)) /* DAE.ASUB */);
          tmpMeta5 = omc_NBStrongComponent_createPseudoSlice(threadData, _var_arr_idx, _eqn_arr_idx, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3))), _sorted_body_indices, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), _eqns, _mapping, _indep);
          goto tmp7_done;
        }
        case 3: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta26;
          
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_List_all(threadData, _node_comp, boxvar_NBSorting_SuperNode_isArrayBucket)) goto tmp7_end;
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp23;
            modelica_metatype tmpMeta24;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp25;
            modelica_metatype _n_loopVar = 0;
            modelica_metatype _n;
            _n_loopVar = _node_comp;
            tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta24; /* defaultValue */
            tmp23 = &__omcQ_24tmpVar9;
            while(1) {
              tmp25 = 1;
              if (!listEmpty(_n_loopVar)) {
                _n = MMC_CAR(_n_loopVar);
                _n_loopVar = MMC_CDR(_n_loopVar);
                tmp25--;
              }
              if (tmp25 == 0) {
                __omcQ_24tmpVar8 = omc_NBSorting_SuperNode_getEqnIndices(threadData, _n);
                *tmp23 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp23 = &MMC_CDR(*tmp23);
              } else if (tmp25 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp23 = mmc_mk_nil();
            tmpMeta22 = __omcQ_24tmpVar9;
          }
          _m_local = omc_NBBackendUtil_getLocalSystem(threadData, _m, _matching, omc_List_flatten(threadData, tmpMeta22) ,&_matching_local ,&_map_back);

          _sorted_body_components = omc_NBSorting_tarjanScalar(threadData, _m_local, _matching_local);

          _sorted_body_indices = omc_List_flatten(threadData, _sorted_body_components);

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp29;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = _sorted_body_indices;
            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta28; /* defaultValue */
            tmp27 = &__omcQ_24tmpVar11;
            while(1) {
              tmp29 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp29--;
              }
              if (tmp29 == 0) {
                __omcQ_24tmpVar10 = arrayGet(_map_back,mmc_unbox_integer(_i)) /* DAE.ASUB */;
                *tmp27 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp27 = &MMC_CDR(*tmp27);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp27 = mmc_mk_nil();
            tmpMeta26 = __omcQ_24tmpVar11;
          }
          _sorted_body_indices = tmpMeta26;

          if((omc_List_compareLength(threadData, _sorted_body_components, _sorted_body_indices) == ((modelica_integer) 0)))
          {
            _comp = omc_NBStrongComponent_createPseudoEntwined(threadData, _sorted_body_indices, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), _mapping, _vars, _eqns, _node_comp);
          }
          else
          {
            _comp = omc_NBStrongComponent_createPseudoScalar(threadData, _sorted_body_indices, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), _mapping, _vars, _eqns);
          }
          tmpMeta5 = _comp;
          goto tmp7_done;
        }
        case 4: {
          modelica_metatype tmpMeta30;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype* tmp31;
            modelica_metatype tmpMeta32;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp33;
            modelica_metatype _n_loopVar = 0;
            modelica_metatype _n;
            _n_loopVar = _node_comp;
            tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta32; /* defaultValue */
            tmp31 = &__omcQ_24tmpVar13;
            while(1) {
              tmp33 = 1;
              if (!listEmpty(_n_loopVar)) {
                _n = MMC_CAR(_n_loopVar);
                _n_loopVar = MMC_CDR(_n_loopVar);
                tmp33--;
              }
              if (tmp33 == 0) {
                __omcQ_24tmpVar12 = omc_NBSorting_SuperNode_getEqnIndices(threadData, _n);
                *tmp31 = mmc_mk_cons(__omcQ_24tmpVar12,0);
                tmp31 = &MMC_CDR(*tmp31);
              } else if (tmp33 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp31 = mmc_mk_nil();
            tmpMeta30 = __omcQ_24tmpVar13;
          }
          _sorted_body_indices = omc_List_flatten(threadData, tmpMeta30);
          tmpMeta5 = omc_NBStrongComponent_createPseudoScalar(threadData, _sorted_body_indices, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), _mapping, _vars, _eqns);
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _comp = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _comp;
}

DLLDirection
modelica_metatype omc_NBSorting_SuperNode_create(threadData_t *threadData, modelica_metatype _adj, modelica_metatype _mapping, modelica_metatype _matching, modelica_metatype _eqn_map, modelica_metatype _scc_phase1, modelica_metatype _buck, modelica_metatype *out_phase2_matching, modelica_metatype *out_super_nodes)
{
  modelica_metatype _phase2_adj = NULL;
  modelica_metatype _phase2_matching = NULL;
  modelica_metatype _super_nodes = NULL;
  modelica_metatype _li = NULL;
  modelica_metatype _loop_map = NULL;
  modelica_metatype _algebraic_loops = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _buckets = NULL;
  modelica_metatype _mode = NULL;
  modelica_metatype _val = NULL;
  modelica_integer _index;
  modelica_integer _shift;
  modelica_metatype _var_lst = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _alg_loop_set = NULL;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _phase2_adj = _adj;
  _phase2_matching = _matching;
  // _super_nodes has no default value.
  // _li has no default value.
  _loop_map = omc_UnorderedMap_new(threadData, boxvar_NBSorting_LoopIdentifier_hash, boxvar_NBSorting_LoopIdentifier_isEqual, ((modelica_integer) 1));
  {
    modelica_metatype __omcQ_24tmpVar15;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar14;
    modelica_integer tmp4;
    modelica_metatype _scc_loopVar = 0;
    modelica_metatype _scc;
    _scc_loopVar = _scc_phase1;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar15 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar15;
    while(1) {
      tmp4 = 1;
      while (!listEmpty(_scc_loopVar)) {
        _scc = MMC_CAR(_scc_loopVar);
        _scc_loopVar = MMC_CDR(_scc_loopVar);
        if (omc_List_hasSeveralElements(threadData, _scc)) {
          tmp4--;
          break;
        }
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar14 = _scc;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar14,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar15;
  }
  _algebraic_loops = tmpMeta1;
  _buckets = omc_UnorderedMap_toList(threadData, _buck);
  // _mode has no default value.
  // _val has no default value.
  // _index has no default value.
  // _shift has no default value.
  // _var_lst has no default value.
  // _eqn_lst has no default value.
  _alg_loop_set = omc_UnorderedSet_new(threadData, boxvar_Util_id, boxvar_intEq, ((modelica_integer) 13));
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _phase2_adj;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta32;
          modelica_integer tmp33;
          modelica_integer tmp34;
          modelica_integer tmp35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_integer tmp38;
          modelica_integer tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,2,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype _scc;
            for (tmpMeta10 = _algebraic_loops; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _scc = MMC_CAR(tmpMeta10);
              _li = omc_NBSorting_LoopIdentifier_fromSCC(threadData, _scc, _mapping, _matching);

              tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
              omc_UnorderedMap_add(threadData, _li, listAppend(_scc, omc_UnorderedMap_getOrDefault(threadData, _li, _loop_map, tmpMeta11)), _loop_map);
            }
          }

          _algebraic_loops = omc_UnorderedMap_valueList(threadData, _loop_map);

          {
            modelica_metatype _scc;
            for (tmpMeta13 = _algebraic_loops; !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
            {
              _scc = MMC_CAR(tmpMeta13);
              {
                modelica_metatype _idx;
                for (tmpMeta14 = _scc; !listEmpty(tmpMeta14); tmpMeta14=MMC_CDR(tmpMeta14))
                {
                  _idx = MMC_CAR(tmpMeta14);
                  omc_UnorderedSet_add(threadData, _idx, _alg_loop_set);
                }
              }
            }
          }

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp18;
            modelica_metatype tmpMeta19;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp20;
            modelica_metatype _bucket_tpl_loopVar = 0;
            modelica_metatype _bucket_tpl;
            _bucket_tpl_loopVar = _buckets;
            tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta19; /* defaultValue */
            tmp18 = &__omcQ_24tmpVar17;
            while(1) {
              tmp20 = 1;
              if (!listEmpty(_bucket_tpl_loopVar)) {
                _bucket_tpl = MMC_CAR(_bucket_tpl_loopVar);
                _bucket_tpl_loopVar = MMC_CDR(_bucket_tpl_loopVar);
                tmp20--;
              }
              if (tmp20 == 0) {
                __omcQ_24tmpVar16 = omc_NBSorting_PseudoBucket_filter(threadData, _bucket_tpl, _alg_loop_set);
                *tmp18 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp18 = &MMC_CDR(*tmp18);
              } else if (tmp20 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp18 = mmc_mk_nil();
            tmpMeta17 = __omcQ_24tmpVar17;
          }
          _buckets = tmpMeta17;

          {
            modelica_metatype __omcQ_24tmpVar19;
            modelica_metatype* tmp22;
            modelica_metatype tmpMeta23;
            modelica_metatype __omcQ_24tmpVar18;
            modelica_integer tmp24;
            modelica_metatype _bucket_tpl_loopVar = 0;
            modelica_metatype _bucket_tpl;
            _bucket_tpl_loopVar = _buckets;
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar19 = tmpMeta23; /* defaultValue */
            tmp22 = &__omcQ_24tmpVar19;
            while(1) {
              tmp24 = 1;
              while (!listEmpty(_bucket_tpl_loopVar)) {
                _bucket_tpl = MMC_CAR(_bucket_tpl_loopVar);
                _bucket_tpl_loopVar = MMC_CDR(_bucket_tpl_loopVar);
                if (omc_NBSorting_PseudoBucket_relevant(threadData, _bucket_tpl)) {
                  tmp24--;
                  break;
                }
              }
              if (tmp24 == 0) {
                __omcQ_24tmpVar18 = _bucket_tpl;
                *tmp22 = mmc_mk_cons(__omcQ_24tmpVar18,0);
                tmp22 = &MMC_CDR(*tmp22);
              } else if (tmp24 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp22 = mmc_mk_nil();
            tmpMeta21 = __omcQ_24tmpVar19;
          }
          _buckets = tmpMeta21;

          _shift = listLength(_algebraic_loops) + listLength(_buckets);

          {
            modelica_metatype __omcQ_24tmpVar21;
            modelica_metatype* tmp26;
            modelica_metatype tmpMeta27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar20;
            modelica_integer tmp29;
            modelica_integer tmp30;
            modelica_integer tmp31;
            modelica_integer _i;
            tmp30 = 1 /* Range step-value */;
            tmp31 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 2)))) + _shift /* Range stop-value */;
            _i = ((modelica_integer) 1) /* Range start-value */;
            _i = (((modelica_integer) 1) /* Range start-value */)-tmp30;
            tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar21 = tmpMeta27; /* defaultValue */
            tmp26 = &__omcQ_24tmpVar21;
            while(1) {
              tmp29 = 1;
              if (tmp30 > 0 ? _i+tmp30 <= tmp31 : _i+tmp30 >= tmp31) {
                _i += tmp30;
                tmp29--;
              }
              if (tmp29 == 0) {
                tmpMeta28 = mmc_mk_box2(3, &NBSorting_SuperNode_SINGLE__desc, mmc_mk_integer(_i));
                __omcQ_24tmpVar20 = tmpMeta28;
                *tmp26 = mmc_mk_cons(__omcQ_24tmpVar20,0);
                tmp26 = &MMC_CDR(*tmp26);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_6;
              }
            }
            *tmp26 = mmc_mk_nil();
            tmpMeta25 = __omcQ_24tmpVar21;
          }
          _super_nodes = listArray(tmpMeta25);

          _index = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 3))));

          tmpMeta32 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta32), MMC_UNTAGPTR(_phase2_matching), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta32))[3] = omc_Array_expandToSize(threadData, arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 3)))) + _shift, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 3))), mmc_mk_integer(((modelica_integer) -1)));
          _phase2_matching = tmpMeta32;

          tmp33 = ((modelica_integer) 1) + _index; tmp34 = 1; tmp35 = _index + _shift;
          if(!(((tmp34 > 0) && (tmp33 > tmp35)) || ((tmp34 < 0) && (tmp33 < tmp35))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1) + _index; in_range_integer(_i, tmp33, tmp35); _i += tmp34)
            {
              arrayUpdate((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 3))),_i,mmc_mk_integer(_i));
            }
          }

          _index = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 2))));

          tmpMeta36 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta36), MMC_UNTAGPTR(_phase2_matching), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta36))[2] = omc_Array_expandToSize(threadData, arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 2)))) + _shift, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 2))), mmc_mk_integer(((modelica_integer) -1)));
          _phase2_matching = tmpMeta36;

          tmp37 = ((modelica_integer) 1) + _index; tmp38 = 1; tmp39 = _index + _shift;
          if(!(((tmp38 > 0) && (tmp37 > tmp39)) || ((tmp38 < 0) && (tmp37 < tmp39))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1) + _index; in_range_integer(_i, tmp37, tmp39); _i += tmp38)
            {
              arrayUpdate((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 2))),_i,mmc_mk_integer(_i));
            }
          }

          _index = ((modelica_integer) 1) + arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 3))));

          tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_phase2_adj), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[3] = omc_NBAdjacency_Matrix_expandMatrix(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 3))), _shift);
          _phase2_adj = tmpMeta40;

          {
            modelica_metatype _scc;
            for (tmpMeta41 = _algebraic_loops; !listEmpty(tmpMeta41); tmpMeta41=MMC_CDR(tmpMeta41))
            {
              _scc = MMC_CAR(tmpMeta41);
              {
                modelica_metatype __omcQ_24tmpVar23;
                modelica_metatype* tmp43;
                modelica_metatype tmpMeta44;
                modelica_metatype __omcQ_24tmpVar22;
                modelica_integer tmp45;
                modelica_metatype _idx_loopVar = 0;
                modelica_metatype _idx;
                _idx_loopVar = _scc;
                tmpMeta44 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar23 = tmpMeta44; /* defaultValue */
                tmp43 = &__omcQ_24tmpVar23;
                while(1) {
                  tmp45 = 1;
                  if (!listEmpty(_idx_loopVar)) {
                    _idx = MMC_CAR(_idx_loopVar);
                    _idx_loopVar = MMC_CDR(_idx_loopVar);
                    tmp45--;
                  }
                  if (tmp45 == 0) {
                    __omcQ_24tmpVar22 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 3))),mmc_unbox_integer(_idx)) /* DAE.ASUB */;
                    *tmp43 = mmc_mk_cons(__omcQ_24tmpVar22,0);
                    tmp43 = &MMC_CDR(*tmp43);
                  } else if (tmp45 == 1) {
                    break;
                  } else {
                    goto goto_6;
                  }
                }
                *tmp43 = mmc_mk_nil();
                tmpMeta42 = __omcQ_24tmpVar23;
              }
              _var_lst = tmpMeta42;

              omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _var_lst, _index, 0 /* false */);

              _index = omc_NBSorting_SuperNode_mergeRows(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 2))), _super_nodes, _var_lst, _index);
            }
          }

          {
            modelica_metatype _bucket;
            for (tmpMeta47 = _buckets; !listEmpty(tmpMeta47); tmpMeta47=MMC_CDR(tmpMeta47))
            {
              _bucket = MMC_CAR(tmpMeta47);
              /* Pattern-matching assignment */
              tmpMeta48 = _bucket;
              tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 1));
              tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 2));
              _mode = tmpMeta49;
              _val = tmpMeta50;

              {
                modelica_metatype __omcQ_24tmpVar25;
                modelica_metatype* tmp52;
                modelica_metatype tmpMeta53;
                modelica_metatype __omcQ_24tmpVar24;
                modelica_integer tmp54;
                modelica_metatype _idx_loopVar = 0;
                modelica_metatype _idx;
                _idx_loopVar = omc_NBSorting_Value_getEquations(threadData, _val);
                tmpMeta53 = MMC_REFSTRUCTLIT(mmc_nil);
                __omcQ_24tmpVar25 = tmpMeta53; /* defaultValue */
                tmp52 = &__omcQ_24tmpVar25;
                while(1) {
                  tmp54 = 1;
                  if (!listEmpty(_idx_loopVar)) {
                    _idx = MMC_CAR(_idx_loopVar);
                    _idx_loopVar = MMC_CDR(_idx_loopVar);
                    tmp54--;
                  }
                  if (tmp54 == 0) {
                    __omcQ_24tmpVar24 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 3))),mmc_unbox_integer(_idx)) /* DAE.ASUB */;
                    *tmp52 = mmc_mk_cons(__omcQ_24tmpVar24,0);
                    tmp52 = &MMC_CDR(*tmp52);
                  } else if (tmp54 == 1) {
                    break;
                  } else {
                    goto goto_6;
                  }
                }
                *tmp52 = mmc_mk_nil();
                tmpMeta51 = __omcQ_24tmpVar25;
              }
              _var_lst = tmpMeta51;

              { /* match expression */
                modelica_metatype tmp57_1;
                tmp57_1 = _val;
                {
                  volatile mmc_switch_type tmp57;
                  int tmp58;
                  tmp57 = 0;
                  for (; tmp57 < 2; tmp57++) {
                    switch (MMC_SWITCH_CAST(tmp57)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp57_1,0,2) == 0) goto tmp56_end;
                      
                      /* Pattern matching succeeded */
                      omc_NBSorting_SuperNode_mergeArrayNodes(threadData, _super_nodes, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 2))), _var_lst, _index, mmc_unbox_integer(omc_UnorderedMap_getSafe(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mode), 2))), _eqn_map, _OMC_LIT10)), 0 /* false */);
                      goto tmp56_done;
                    }
                    case 1: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp57_1,1,2) == 0) goto tmp56_end;
                      
                      /* Pattern matching succeeded */
                      omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _var_lst, _index, 0 /* false */);
                      goto tmp56_done;
                    }
                    }
                    goto tmp56_end;
                    tmp56_end: ;
                  }
                  goto goto_55;
                  goto_55:;
                  goto goto_6;
                  goto tmp56_done;
                  tmp56_done:;
                }
              }
              ;

              _index = omc_NBSorting_SuperNode_mergeRows(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 2))), _super_nodes, _var_lst, _index);
            }
          }

          _index = ((modelica_integer) 1) + arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 2))));

          tmpMeta60 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta60), MMC_UNTAGPTR(_phase2_adj), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta60))[2] = omc_NBAdjacency_Matrix_transposeScalar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 3))), arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 2)))) + _shift);
          _phase2_adj = tmpMeta60;

          {
            modelica_metatype _scc;
            for (tmpMeta61 = _algebraic_loops; !listEmpty(tmpMeta61); tmpMeta61=MMC_CDR(tmpMeta61))
            {
              _scc = MMC_CAR(tmpMeta61);
              omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _scc, _index, 1 /* true */);

              _index = omc_NBSorting_SuperNode_mergeRows(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 3))), _super_nodes, _scc, _index);
            }
          }

          {
            modelica_metatype _bucket;
            for (tmpMeta63 = _buckets; !listEmpty(tmpMeta63); tmpMeta63=MMC_CDR(tmpMeta63))
            {
              _bucket = MMC_CAR(tmpMeta63);
              /* Pattern-matching assignment */
              tmpMeta64 = _bucket;
              tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 1));
              tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 2));
              _mode = tmpMeta65;
              _val = tmpMeta66;

              _eqn_lst = omc_NBSorting_Value_getEquations(threadData, _val);

              { /* match expression */
                modelica_metatype tmp69_1;
                tmp69_1 = _val;
                {
                  volatile mmc_switch_type tmp69;
                  int tmp70;
                  tmp69 = 0;
                  for (; tmp69 < 2; tmp69++) {
                    switch (MMC_SWITCH_CAST(tmp69)) {
                    case 0: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp69_1,0,2) == 0) goto tmp68_end;
                      
                      /* Pattern matching succeeded */
                      omc_NBSorting_SuperNode_mergeArrayNodes(threadData, _super_nodes, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 2))), _eqn_lst, _index, mmc_unbox_integer(omc_UnorderedMap_getSafe(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mode), 2))), _eqn_map, _OMC_LIT11)), 1 /* true */);
                      goto tmp68_done;
                    }
                    case 1: {
                      if (mmc__uniontype__metarecord__typedef__equal(tmp69_1,1,2) == 0) goto tmp68_end;
                      
                      /* Pattern matching succeeded */
                      omc_NBSorting_SuperNode_mergeLoopNodes(threadData, _super_nodes, _eqn_lst, _index, 1 /* true */);
                      goto tmp68_done;
                    }
                    }
                    goto tmp68_end;
                    tmp68_end: ;
                  }
                  goto goto_67;
                  goto_67:;
                  goto goto_6;
                  goto tmp68_done;
                  tmp68_done:;
                }
              }
              ;

              _index = omc_NBSorting_SuperNode_mergeRows(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_matching), 3))), _super_nodes, _eqn_lst, _index);
            }
          }

          tmpMeta72 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta72), MMC_UNTAGPTR(_phase2_adj), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta72))[3] = omc_NBAdjacency_Matrix_transposeScalar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 2))), arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 3)))));
          _phase2_adj = tmpMeta72;
          tmpMeta5 = _phase2_adj;
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT13);
          goto goto_6;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _phase2_adj = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  if (out_phase2_matching) { *out_phase2_matching = _phase2_matching; }
  if (out_super_nodes) { *out_super_nodes = _super_nodes; }
  return _phase2_adj;
}

DLLDirection
modelica_metatype omc_NBSorting_SuperNode_getEqnIndices(threadData_t *threadData, modelica_metatype _node)
{
  modelica_metatype _eqn_indices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqn_indices has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _node;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3)));
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 4)));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT14,omc_NBSorting_SuperNode_toString(threadData, _node));
          tmpMeta6 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta6);
          goto goto_2;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT16);
          goto goto_2;
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
  _eqn_indices = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqn_indices;
}

DLLDirection
modelica_boolean omc_NBSorting_SuperNode_isArrayBucket(threadData_t *threadData, modelica_metatype _node)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _node;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
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
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBSorting_SuperNode_isArrayBucket(threadData_t *threadData, modelica_metatype _node)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBSorting_SuperNode_isArrayBucket(threadData, _node);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_NBSorting_SuperNode_toString(threadData_t *threadData, modelica_metatype _node)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _node;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_OMC_LIT17,intString(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))))));
          tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT18);
          tmp1 = tmpMeta6;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT17,intString(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))))));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT19);
          tmpMeta9 = stringAppend(tmpMeta8,intString(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3))))));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT20);
          tmp1 = tmpMeta10;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_OMC_LIT17,intString(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))))));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT21);
          {
            modelica_metatype __omcQ_24tmpVar27;
            modelica_metatype* tmp14;
            modelica_metatype tmpMeta15;
            modelica_metatype __omcQ_24tmpVar26;
            modelica_integer tmp16;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 3)));
            tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar27 = tmpMeta15; /* defaultValue */
            tmp14 = &__omcQ_24tmpVar27;
            while(1) {
              tmp16 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp16--;
              }
              if (tmp16 == 0) {
                __omcQ_24tmpVar26 = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(_i));
                *tmp14 = mmc_mk_cons(__omcQ_24tmpVar26,0);
                tmp14 = &MMC_CDR(*tmp14);
              } else if (tmp16 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp14 = mmc_mk_nil();
            tmpMeta13 = __omcQ_24tmpVar27;
          }
          tmpMeta17 = stringAppend(tmpMeta12,omc_List_toString(threadData, tmpMeta13, boxvar_intString, _OMC_LIT5, _OMC_LIT22, _OMC_LIT23, _OMC_LIT24, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta17;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta24;
          
          /* Pattern matching succeeded */
          tmpMeta18 = stringAppend(_OMC_LIT17,intString(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 2))))));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT25);
          {
            modelica_metatype __omcQ_24tmpVar29;
            modelica_metatype* tmp21;
            modelica_metatype tmpMeta22;
            modelica_metatype __omcQ_24tmpVar28;
            modelica_integer tmp23;
            modelica_metatype _i_loopVar = 0;
            modelica_metatype _i;
            _i_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_node), 4)));
            tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar29 = tmpMeta22; /* defaultValue */
            tmp21 = &__omcQ_24tmpVar29;
            while(1) {
              tmp23 = 1;
              if (!listEmpty(_i_loopVar)) {
                _i = MMC_CAR(_i_loopVar);
                _i_loopVar = MMC_CDR(_i_loopVar);
                tmp23--;
              }
              if (tmp23 == 0) {
                __omcQ_24tmpVar28 = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer(_i));
                *tmp21 = mmc_mk_cons(__omcQ_24tmpVar28,0);
                tmp21 = &MMC_CDR(*tmp21);
              } else if (tmp23 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp21 = mmc_mk_nil();
            tmpMeta20 = __omcQ_24tmpVar29;
          }
          tmpMeta24 = stringAppend(tmpMeta19,omc_List_toString(threadData, tmpMeta20, boxvar_intString, _OMC_LIT5, _OMC_LIT22, _OMC_LIT23, _OMC_LIT24, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta24;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT26;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NBSorting_LoopIdentifier_fromSCC(threadData_t *threadData, modelica_metatype _scc, modelica_metatype _mapping, modelica_metatype _matching)
{
  modelica_metatype _li = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _li has no default value.
  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp4;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _scc;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar31;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar30 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),mmc_unbox_integer(_i)) /* DAE.ASUB */;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar31;
  }
  {
    modelica_metatype __omcQ_24tmpVar33;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar32;
    modelica_integer tmp8;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _scc;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar33 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar33;
    while(1) {
      tmp8 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp8--;
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar32 = arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 3))),mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))),mmc_unbox_integer(_i)) /* DAE.ASUB */)) /* DAE.ASUB */;
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar32,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar33;
  }
  tmpMeta9 = mmc_mk_box3(3, &NBSorting_LoopIdentifier_LOOP__IDENTIFIER__desc, omc_UnorderedSet_fromList(threadData, tmpMeta1, boxvar_Util_id, boxvar_intEq), omc_UnorderedSet_fromList(threadData, tmpMeta5, boxvar_Util_id, boxvar_intEq));
  _li = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _li;
}

DLLDirection
modelica_string omc_NBSorting_LoopIdentifier_toString(threadData_t *threadData, modelica_metatype _li)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT27,omc_UnorderedSet_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_li), 2))), boxvar_intString, _OMC_LIT8));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT28);
  tmpMeta3 = stringAppend(tmpMeta2,omc_UnorderedSet_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_li), 3))), boxvar_intString, _OMC_LIT8));
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT8);
  _str = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_boolean omc_NBSorting_LoopIdentifier_isEqual(threadData_t *threadData, modelica_metatype _li1, modelica_metatype _li2)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = (omc_UnorderedSet_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_li1), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_li2), 2)))) && omc_UnorderedSet_isEqual(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_li1), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_li2), 3)))));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBSorting_LoopIdentifier_isEqual(threadData_t *threadData, modelica_metatype _li1, modelica_metatype _li2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBSorting_LoopIdentifier_isEqual(threadData, _li1, _li2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_integer omc_NBSorting_LoopIdentifier_hash(threadData_t *threadData, modelica_metatype _li)
{
  modelica_integer _i;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = stringHashDjb2(omc_NBSorting_LoopIdentifier_toString(threadData, _li));
  _return: OMC_LABEL_UNUSED
  return _i;
}
modelica_metatype boxptr_NBSorting_LoopIdentifier_hash(threadData_t *threadData, modelica_metatype _li)
{
  modelica_integer _i;
  modelica_metatype out_i;
  _i = omc_NBSorting_LoopIdentifier_hash(threadData, _li);
  out_i = mmc_mk_icon(_i);
  return out_i;
}

DLLDirection
modelica_metatype omc_NBSorting_tarjanScalar(threadData_t *threadData, modelica_metatype _m, modelica_metatype _matching)
{
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _index;
  modelica_metatype _stack = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _number = NULL;
  modelica_metatype _lowlink = NULL;
  modelica_metatype _onStack = NULL;
  modelica_integer _N;
  modelica_integer _M;
  modelica_integer _eqn;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _comps = tmpMeta1;
  _index = ((modelica_integer) 0);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _stack = tmpMeta2;
  // _number has no default value.
  // _lowlink has no default value.
  // _onStack has no default value.
  _N = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))));
  _M = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))));
  // _eqn has no default value.
  _number = arrayCreate(_M, mmc_mk_integer(((modelica_integer) -1)));

  _lowlink = arrayCreate(_M, mmc_mk_integer(((modelica_integer) -1)));

  _onStack = arrayCreate(_M, mmc_mk_boolean(0 /* false */));

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _N;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _var;
    for(_var = ((modelica_integer) 1); in_range_integer(_var, tmp3, tmp5); _var += tmp4)
    {
      _eqn = mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))),_var) /* DAE.ASUB */);

      if(((_eqn > ((modelica_integer) 0)) && (mmc_unbox_integer(arrayGet(_number,_eqn) /* DAE.ASUB */) == ((modelica_integer) -1))))
      {
        _stack = omc_NBSorting_strongConnect(threadData, _m, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 2))), _eqn, _stack, _index, _number, _lowlink, _onStack, _comps ,&_index ,&_comps);
      }
    }
  }

  omc_GCExt_free(threadData, _number);

  omc_GCExt_free(threadData, _lowlink);

  omc_GCExt_free(threadData, _onStack);

  _comps = listReverse(_comps);
  _return: OMC_LABEL_UNUSED
  return _comps;
}

DLLDirection
modelica_metatype omc_NBSorting_tarjan(threadData_t *threadData, modelica_metatype _adj, modelica_metatype _matching, modelica_metatype _vars, modelica_metatype _eqns)
{
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _mapping_opt = NULL;
  modelica_metatype _eqn_AtS = NULL;
  modelica_metatype _var_AtS = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _comps = tmpMeta1;
  // _mapping_opt has no default value.
  // _eqn_AtS has no default value.
  // _var_AtS has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp9_1;
            tmp9_1 = _adj;
            {
              modelica_metatype _comps_indices = NULL;
              modelica_metatype _phase2_indices = NULL;
              modelica_metatype _phase2_adj = NULL;
              modelica_metatype _phase2_matching = NULL;
              modelica_metatype _super_nodes = NULL;
              modelica_metatype _buckets = NULL;
              int tmp9;
              // _comps_indices has no default value.
              // _phase2_indices has no default value.
              // _phase2_adj has no default value.
              // _phase2_matching has no default value.
              // _super_nodes has no default value.
              // _buckets has no default value.
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp9_1))) {
                case 5: {
                  
                  /* Pattern matching succeeded */
                  if(omc_Flags_isSet(threadData, _OMC_LIT32))
                  {
                    fputs(MMC_STRINGDATA(omc_StringUtil_headline__1(threadData, _OMC_LIT29)),stdout);
                  }

                  _buckets = omc_NBSorting_PseudoBucket_create(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_matching), 3))), _eqns, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 5))));

                  _comps_indices = omc_NBSorting_tarjanScalar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 2))), _matching);

                  _phase2_adj = omc_NBSorting_SuperNode_create(threadData, _adj, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 4))), _matching, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqns), 2))), _comps_indices, _buckets ,&_phase2_matching ,&_super_nodes);

                  { /* match expression */
                    modelica_metatype tmp12_1;
                    tmp12_1 = _phase2_adj;
                    {
                      volatile mmc_switch_type tmp12;
                      int tmp13;
                      tmp12 = 0;
                      for (; tmp12 < 2; tmp12++) {
                        switch (MMC_SWITCH_CAST(tmp12)) {
                        case 0: {
                          modelica_metatype tmpMeta14;
                          if (mmc__uniontype__metarecord__typedef__equal(tmp12_1,2,5) == 0) goto tmp11_end;
                          
                          /* Pattern matching succeeded */
                          _phase2_indices = omc_NBSorting_tarjanScalar(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_phase2_adj), 2))), _phase2_matching);

                          {
                            modelica_metatype __omcQ_24tmpVar35;
                            modelica_metatype* tmp15;
                            modelica_metatype tmpMeta16;
                            modelica_metatype __omcQ_24tmpVar34;
                            modelica_integer tmp17;
                            modelica_metatype _comp_loopVar = 0;
                            modelica_metatype _comp;
                            _comp_loopVar = _phase2_indices;
                            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
                            __omcQ_24tmpVar35 = tmpMeta16; /* defaultValue */
                            tmp15 = &__omcQ_24tmpVar35;
                            while(1) {
                              tmp17 = 1;
                              if (!listEmpty(_comp_loopVar)) {
                                _comp = MMC_CAR(_comp_loopVar);
                                _comp_loopVar = MMC_CDR(_comp_loopVar);
                                tmp17--;
                              }
                              if (tmp17 == 0) {
                                __omcQ_24tmpVar34 = omc_NBSorting_SuperNode_collapse(threadData, _comp, _super_nodes, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_adj), 4))), _matching, _vars, _eqns);
                                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar34,0);
                                tmp15 = &MMC_CDR(*tmp15);
                              } else if (tmp17 == 1) {
                                break;
                              } else {
                                goto goto_10;
                              }
                            }
                            *tmp15 = mmc_mk_nil();
                            tmpMeta14 = __omcQ_24tmpVar35;
                          }
                          _comps = tmpMeta14;
                          goto tmp11_done;
                        }
                        case 1: {
                          
                          /* Pattern matching succeeded */
                          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT34);
                          goto goto_10;
                          goto tmp11_done;
                        }
                        }
                        goto tmp11_end;
                        tmp11_end: ;
                      }
                      goto goto_10;
                      goto_10:;
                      goto goto_7;
                      goto tmp11_done;
                      tmp11_done:;
                    }
                  }
                  ;
                  tmpMeta6 = _comps;
                  goto tmp8_done;
                }
                case 3: {
                  modelica_metatype tmpMeta18;
                  
                  /* Pattern matching succeeded */
                  tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta6 = tmpMeta18;
                  goto tmp8_done;
                }
                default:
                tmp8_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT36);
                  goto goto_7;
                  goto tmp8_done;
                }
                }
                goto tmp8_end;
                tmp8_end: ;
              }
              goto goto_7;
              goto_7:;
              goto goto_2;
              goto tmp8_done;
              tmp8_done:;
            }
          }
          _comps = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          /* Pattern matching succeeded */
          _mapping_opt = omc_NBAdjacency_Matrix_getMappingOpt(threadData, _adj);

          
          
          { /* match expression */
            modelica_metatype tmp22_1;
            tmp22_1 = _mapping_opt;
            {
              modelica_metatype _mapping = NULL;
              volatile mmc_switch_type tmp22;
              int tmp23;
              // _mapping has no default value.
              tmp22 = 0;
              for (; tmp22 < 2; tmp22++) {
                switch (MMC_SWITCH_CAST(tmp22)) {
                case 0: {
                  modelica_metatype tmpMeta24;
                  if (optionNone(tmp22_1)) goto tmp21_end;
                  tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp22_1), 1));
                  _mapping = tmpMeta24;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 4))));
                  tmpMeta[0+1] = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 5))));
                  goto tmp21_done;
                }
                case 1: {
                  
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = mmc_mk_none();
                  tmpMeta[0+1] = mmc_mk_none();
                  goto tmp21_done;
                }
                }
                goto tmp21_end;
                tmp21_end: ;
              }
              goto goto_20;
              goto_20:;
              goto goto_2;
              goto tmp21_done;
              tmp21_done:;
            }
          }
          _eqn_AtS = tmpMeta[0+0];
          _var_AtS = tmpMeta[0+1];

          tmpMeta26 = stringAppend(_OMC_LIT37,omc_NBVariable_VariablePointers_toString(threadData, _vars, _OMC_LIT38, _var_AtS, 1 /* true */));
          tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT8);
          tmpMeta28 = stringAppend(tmpMeta27,omc_NBEquation_EquationPointers_toString(threadData, _eqns, _OMC_LIT38, _eqn_AtS, 1 /* true */, mmc_mk_none()));
          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT8);
          tmpMeta30 = stringAppend(tmpMeta29,omc_NBMatching_toString(threadData, _matching, _OMC_LIT5));
          tmpMeta25 = mmc_mk_cons(tmpMeta30, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT3, tmpMeta25);

          goto goto_2;
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
  ;
  _return: OMC_LABEL_UNUSED
  return _comps;
}

DLLDirection
modelica_boolean omc_NBSorting_PseudoBucket_relevant(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_boolean _b;
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _val has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _val = tmpMeta2;

  _b = omc_List_hasSeveralElements(threadData, omc_NBSorting_Value_getEquations(threadData, _val));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBSorting_PseudoBucket_relevant(threadData_t *threadData, modelica_metatype _tpl)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NBSorting_PseudoBucket_relevant(threadData, _tpl);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NBSorting_PseudoBucket_filter(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftpl, modelica_metatype _set)
{
  modelica_metatype _tpl = NULL;
  modelica_metatype _mode = NULL;
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tpl = __omcQ_24in_5Ftpl;
  // _mode has no default value.
  // _val has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _mode = tmpMeta2;
  _val = tmpMeta3;

  _val = omc_NBSorting_Value_filter(threadData, _val, _set);

  tmpMeta4 = mmc_mk_box2(0, _mode, _val);
  _tpl = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _tpl;
}

DLLDirection
void omc_NBSorting_PseudoBucket_addMulti(threadData_t *threadData, modelica_metatype _cref, modelica_integer _eqn_scal_idx, modelica_metatype _mode, modelica_metatype _buckets)
{
  modelica_metatype _val_opt = NULL;
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _val_opt = omc_UnorderedMap_get(threadData, _mode, _buckets);
  // _val has no default value.
  if(isSome(_val_opt))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _val_opt;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _val = tmpMeta2;

    _val = omc_NBSorting_Value_addCref(threadData, _val, _cref);

    _val = omc_NBSorting_Value_addEquation(threadData, _val, _eqn_scal_idx);

    omc_UnorderedMap_add(threadData, _mode, _val, _buckets);
  }
  else
  {
    tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_eqn_scal_idx), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta4 = mmc_mk_box3(4, &NBSorting_Value_MULTI__VAL__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mode), 3))), tmpMeta3);
    _val = tmpMeta4;

    omc_UnorderedMap_addNew(threadData, _mode, _val, _buckets);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NBSorting_PseudoBucket_addMulti(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _eqn_scal_idx, modelica_metatype _mode, modelica_metatype _buckets)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_eqn_scal_idx);
  omc_NBSorting_PseudoBucket_addMulti(threadData, _cref, tmp1, _mode, _buckets);
  return;
}

DLLDirection
void omc_NBSorting_PseudoBucket_add(threadData_t *threadData, modelica_integer _eqn_scal_idx, modelica_metatype _mode, modelica_metatype _buckets)
{
  modelica_metatype _val_opt = NULL;
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _val_opt = omc_UnorderedMap_get(threadData, _mode, _buckets);
  // _val has no default value.
  if(isSome(_val_opt))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _val_opt;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _val = tmpMeta2;

    _val = omc_NBSorting_Value_addEquation(threadData, _val, _eqn_scal_idx);

    omc_UnorderedMap_add(threadData, _mode, _val, _buckets);
  }
  else
  {
    tmpMeta3 = mmc_mk_cons(mmc_mk_integer(_eqn_scal_idx), MMC_REFSTRUCTLIT(mmc_nil));
    tmpMeta4 = mmc_mk_box3(3, &NBSorting_Value_SINGLE__VAL__desc, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mode), 3)))), tmpMeta3);
    _val = tmpMeta4;

    omc_UnorderedMap_addNew(threadData, _mode, _val, _buckets);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NBSorting_PseudoBucket_add(threadData_t *threadData, modelica_metatype _eqn_scal_idx, modelica_metatype _mode, modelica_metatype _buckets)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_eqn_scal_idx);
  omc_NBSorting_PseudoBucket_add(threadData, tmp1, _mode, _buckets);
  return;
}

DLLDirection
modelica_metatype omc_NBSorting_PseudoBucket_create(threadData_t *threadData, modelica_metatype _eqn_to_var, modelica_metatype _eqns, modelica_metatype _mapping, modelica_metatype _modes)
{
  modelica_metatype _buckets = NULL;
  modelica_metatype _mode_opt = NULL;
  modelica_metatype _mode = NULL;
  modelica_metatype _cref = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _buckets = omc_UnorderedMap_new(threadData, boxvar_NBAdjacency_Mode_hash, boxvar_NBAdjacency_Mode_isEqual, ((modelica_integer) 1));
  // _mode_opt has no default value.
  // _mode has no default value.
  // _cref has no default value.
  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = arrayLength(_eqn_to_var);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer _eqn_scal_idx;
    for(_eqn_scal_idx = ((modelica_integer) 1); in_range_integer(_eqn_scal_idx, tmp4, tmp6); _eqn_scal_idx += tmp5)
    {
      tmpMeta1 = mmc_mk_box2(0, mmc_mk_integer(_eqn_scal_idx), arrayGet(_eqn_to_var,_eqn_scal_idx) /* DAE.ASUB */);
      _mode_opt = omc_UnorderedMap_get(threadData, tmpMeta1, _modes);

      if(isSome(_mode_opt))
      {
        _mode = omc_Util_getOption(threadData, _mode_opt);

        if(omc_NBEquation_Equation_isRecordOrTupleEquation(threadData, omc_NBEquation_EquationPointers_getEqnAt(threadData, _eqns, mmc_unbox_integer(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mapping), 2))),_eqn_scal_idx) /* DAE.ASUB */))))
        {
          _cref = listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mode), 3))));

          tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta2 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta2), MMC_UNTAGPTR(_mode), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta2))[3] = tmpMeta3;
          _mode = tmpMeta2;

          omc_NBSorting_PseudoBucket_addMulti(threadData, _cref, _eqn_scal_idx, _mode, _buckets);
        }
        else
        {
          omc_NBSorting_PseudoBucket_add(threadData, _eqn_scal_idx, _mode, _buckets);
        }
      }
    }
  }

  if(omc_Flags_isSet(threadData, _OMC_LIT32))
  {
    tmpMeta7 = stringAppend(omc_UnorderedMap_toString(threadData, _buckets, boxvar_NBAdjacency_Mode_toString, boxvar_NBSorting_Value_toString, _OMC_LIT8, _OMC_LIT23),_OMC_LIT8);
    fputs(MMC_STRINGDATA(tmpMeta7),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return _buckets;
}

DLLDirection
modelica_metatype omc_NBSorting_Value_addCref(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fval, modelica_metatype _cref)
{
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _val = __omcQ_24in_5Fval;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _val;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(_cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 2))));
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_val), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = tmpMeta7;
          _val = tmpMeta6;
          tmpMeta1 = _val;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT40);
          goto goto_2;
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
  _val = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _val;
}

DLLDirection
modelica_metatype omc_NBSorting_Value_addEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fval, modelica_integer _eqn_idx)
{
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _val = __omcQ_24in_5Fval;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _val;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_cons(mmc_mk_integer(_eqn_idx), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 3))));
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_val), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
          _val = tmpMeta6;
          tmpMeta1 = _val;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_eqn_idx), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 3))));
          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_val), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = tmpMeta9;
          _val = tmpMeta8;
          tmpMeta1 = _val;
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
  _val = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _val;
}
modelica_metatype boxptr_NBSorting_Value_addEquation(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fval, modelica_metatype _eqn_idx)
{
  modelica_integer tmp1;
  modelica_metatype _val = NULL;
  tmp1 = mmc_unbox_integer(_eqn_idx);
  _val = omc_NBSorting_Value_addEquation(threadData, __omcQ_24in_5Fval, tmp1);
  /* skip box _val; NBSorting.Value */
  return _val;
}

DLLDirection
modelica_metatype omc_NBSorting_Value_getEquations(threadData_t *threadData, modelica_metatype _val)
{
  modelica_metatype _eqn_scal_indices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqn_scal_indices has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _val;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 3)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 3)));
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
  _eqn_scal_indices = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqn_scal_indices;
}

DLLDirection
modelica_metatype omc_NBSorting_Value_filter(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fval, modelica_metatype _set)
{
  modelica_metatype _val = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _val = __omcQ_24in_5Fval;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _val;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar37;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar36;
            modelica_integer tmp10;
            modelica_metatype _idx_loopVar = 0;
            modelica_metatype _idx;
            _idx_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 3)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar37 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar37;
            while(1) {
              tmp10 = 1;
              while (!listEmpty(_idx_loopVar)) {
                _idx = MMC_CAR(_idx_loopVar);
                _idx_loopVar = MMC_CDR(_idx_loopVar);
                if ((!omc_UnorderedSet_contains(threadData, _idx, _set))) {
                  tmp10--;
                  break;
                }
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar36 = _idx;
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar36,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar37;
          }
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_val), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[3] = tmpMeta7;
          _val = tmpMeta6;
          tmpMeta1 = _val;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar39;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_metatype __omcQ_24tmpVar38;
            modelica_integer tmp15;
            modelica_metatype _idx_loopVar = 0;
            modelica_metatype _idx;
            _idx_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 3)));
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar39 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar39;
            while(1) {
              tmp15 = 1;
              while (!listEmpty(_idx_loopVar)) {
                _idx = MMC_CAR(_idx_loopVar);
                _idx_loopVar = MMC_CDR(_idx_loopVar);
                if ((!omc_UnorderedSet_contains(threadData, _idx, _set))) {
                  tmp15--;
                  break;
                }
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar38 = _idx;
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar38,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar39;
          }
          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_val), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = tmpMeta12;
          _val = tmpMeta11;
          tmpMeta1 = _val;
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
  _val = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _val;
}

DLLDirection
modelica_string omc_NBSorting_Value_toString(threadData_t *threadData, modelica_metatype _val)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _val;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT41,omc_NFComponentRef_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 2)))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT20);
          tmp1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta8 = stringAppend(_OMC_LIT42,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_val), 2))), boxvar_NFComponentRef_toString, _OMC_LIT5, _OMC_LIT22, _OMC_LIT23, _OMC_LIT24, 1 /* true */, ((modelica_integer) 0)));
          tmp1 = tmpMeta8;
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

