#include "omc_simulation_settings.h"
#include "DiffAlgorithm.h"
#define _OMC_LIT0_data "myersGreedyPathToDiff: This cannot happen\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,42,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "myersDiff: This cannot happen"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,29,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,0,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "<equal>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,7,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "</equal>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,8,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "<add>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,5,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "</add>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,6,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "<del>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,5,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "</del>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,6,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "[4;32m"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,7,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "[0m"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,4,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "[9;31m"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,7,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#include "util/modelica.h"

#include "DiffAlgorithm_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_DiffAlgorithm_printStartToEnd(threadData_t *threadData, modelica_metatype _arr, modelica_integer _startIndex, modelica_integer _endIndex, modelica_fnptr _toString);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_printStartToEnd(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _startIndex, modelica_metatype _endIndex, modelica_fnptr _toString);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_printStartToEnd,2,0) {(void*) boxptr_DiffAlgorithm_printStartToEnd,0}};
#define boxvar_DiffAlgorithm_printStartToEnd MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_printStartToEnd)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_trimCommonSuffix(threadData_t *threadData, modelica_metatype _arr1, modelica_integer _start1, modelica_integer _inEnd1, modelica_metatype _arr2, modelica_integer _start2, modelica_integer _inEnd2, modelica_fnptr _equals, modelica_metatype _acc, modelica_fnptr _isWhitespaceNotComment, modelica_integer *out_end1, modelica_integer *out_end2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_trimCommonSuffix(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _start1, modelica_metatype _inEnd1, modelica_metatype _arr2, modelica_metatype _start2, modelica_metatype _inEnd2, modelica_fnptr _equals, modelica_metatype _acc, modelica_fnptr _isWhitespaceNotComment, modelica_metatype *out_end1, modelica_metatype *out_end2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_trimCommonSuffix,2,0) {(void*) boxptr_DiffAlgorithm_trimCommonSuffix,0}};
#define boxvar_DiffAlgorithm_trimCommonSuffix MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_trimCommonSuffix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_trimCommonPrefix(threadData_t *threadData, modelica_metatype _arr1, modelica_integer _inStart1, modelica_integer _end1, modelica_metatype _arr2, modelica_integer _inStart2, modelica_integer _end2, modelica_fnptr _equals, modelica_metatype _acc, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString, modelica_integer *out_start1, modelica_integer *out_start2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_trimCommonPrefix(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _inStart1, modelica_metatype _end1, modelica_metatype _arr2, modelica_metatype _inStart2, modelica_metatype _end2, modelica_fnptr _equals, modelica_metatype _acc, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString, modelica_metatype *out_start1, modelica_metatype *out_start2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_trimCommonPrefix,2,0) {(void*) boxptr_DiffAlgorithm_trimCommonPrefix,0}};
#define boxvar_DiffAlgorithm_trimCommonPrefix MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_trimCommonPrefix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_myersGreedyPathToDiff(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_integer _start1, modelica_integer _start2, modelica_metatype _paths);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_myersGreedyPathToDiff(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_metatype _start1, modelica_metatype _start2, modelica_metatype _paths);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_myersGreedyPathToDiff,2,0) {(void*) boxptr_DiffAlgorithm_myersGreedyPathToDiff,0}};
#define boxvar_DiffAlgorithm_myersGreedyPathToDiff MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_myersGreedyPathToDiff)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_myersGreedyDiff(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_integer _start1, modelica_integer _end1, modelica_integer _start2, modelica_integer _end2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_myersGreedyDiff(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_metatype _start1, modelica_metatype _end1, modelica_metatype _start2, modelica_metatype _end2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_myersGreedyDiff,2,0) {(void*) boxptr_DiffAlgorithm_myersGreedyDiff,0}};
#define boxvar_DiffAlgorithm_myersGreedyDiff MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_myersGreedyDiff)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_onlyRemovals(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _toString, modelica_integer _start1, modelica_integer _end1, modelica_integer _start2, modelica_integer _end2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_onlyRemovals(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _toString, modelica_metatype _start1, modelica_metatype _end1, modelica_metatype _start2, modelica_metatype _end2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_onlyRemovals,2,0) {(void*) boxptr_DiffAlgorithm_onlyRemovals,0}};
#define boxvar_DiffAlgorithm_onlyRemovals MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_onlyRemovals)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_onlyAdditions(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _toString, modelica_integer _start1, modelica_integer _end1, modelica_integer _start2, modelica_integer _end2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_onlyAdditions(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _toString, modelica_metatype _start1, modelica_metatype _end1, modelica_metatype _start2, modelica_metatype _end2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_onlyAdditions,2,0) {(void*) boxptr_DiffAlgorithm_onlyAdditions,0}};
#define boxvar_DiffAlgorithm_onlyAdditions MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_onlyAdditions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_endList(threadData_t *threadData, modelica_metatype _inlst, modelica_integer _ind, modelica_metatype _inacc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_endList(threadData_t *threadData, modelica_metatype _inlst, modelica_metatype _ind, modelica_metatype _inacc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_endList,2,0) {(void*) boxptr_DiffAlgorithm_endList,0}};
#define boxvar_DiffAlgorithm_endList MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_endList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_addToList(threadData_t *threadData, modelica_metatype _inlst, modelica_integer _ind, modelica_metatype _inacc, modelica_integer _newd, modelica_metatype _t, modelica_integer *out_d, modelica_metatype *out_acc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_addToList(threadData_t *threadData, modelica_metatype _inlst, modelica_metatype _ind, modelica_metatype _inacc, modelica_metatype _newd, modelica_metatype _t, modelica_metatype *out_d, modelica_metatype *out_acc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_addToList,2,0) {(void*) boxptr_DiffAlgorithm_addToList,0}};
#define boxvar_DiffAlgorithm_addToList MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_addToList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_diffSeq(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString, modelica_integer _inStart1, modelica_integer _inEnd1, modelica_integer _inStart2, modelica_integer _inEnd2, modelica_metatype _inPrefixes, modelica_metatype _inSuffixes);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_diffSeq(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString, modelica_metatype _inStart1, modelica_metatype _inEnd1, modelica_metatype _inStart2, modelica_metatype _inEnd2, modelica_metatype _inPrefixes, modelica_metatype _inSuffixes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DiffAlgorithm_diffSeq,2,0) {(void*) boxptr_DiffAlgorithm_diffSeq,0}};
#define boxvar_DiffAlgorithm_diffSeq MMC_REFSTRUCTLIT(boxvar_lit_DiffAlgorithm_diffSeq)

PROTECTED_FUNCTION_STATIC modelica_string omc_DiffAlgorithm_printStartToEnd(threadData_t *threadData, modelica_metatype _arr, modelica_integer _startIndex, modelica_integer _endIndex, modelica_fnptr _toString)
{
  modelica_string _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  {
    modelica_metatype __omcQ_24tmpVar1;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_string __omcQ_24tmpVar0;
    modelica_integer tmp4;
    modelica_integer tmp5;
    modelica_integer tmp6;
    modelica_integer _index;
    tmp5 = 1 /* Range step-value */;
    tmp6 = _endIndex /* Range stop-value */;
    _index = _startIndex /* Range start-value */;
    _index = (_startIndex /* Range start-value */)-tmp5;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar1 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar1;
    while(1) {
      tmp4 = 1;
      if (tmp5 > 0 ? _index+tmp5 <= tmp6 : _index+tmp5 >= tmp6) {
        _index += tmp5;
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar0 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 2))), arrayGet(_arr, _index)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 1)))) (threadData, arrayGet(_arr, _index));
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
  _res = stringAppendList(tmpMeta1);
  _return: OMC_LABEL_UNUSED
  return _res;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_printStartToEnd(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _startIndex, modelica_metatype _endIndex, modelica_fnptr _toString)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _res = NULL;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_endIndex);
  _res = omc_DiffAlgorithm_printStartToEnd(threadData, _arr, tmp1, tmp2, _toString);
  /* skip box _res; String */
  return _res;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_trimCommonSuffix(threadData_t *threadData, modelica_metatype _arr1, modelica_integer _start1, modelica_integer _inEnd1, modelica_metatype _arr2, modelica_integer _start2, modelica_integer _inEnd2, modelica_fnptr _equals, modelica_metatype _acc, modelica_fnptr _isWhitespaceNotComment, modelica_integer *out_end1, modelica_integer *out_end2)
{
  modelica_metatype _suffixes = NULL;
  modelica_integer _end1;
  modelica_integer _end2;
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _suffixes = _acc;
  _end1 = _inEnd1;
  _end2 = _inEnd2;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _lst = tmpMeta1;
  while(1)
  {
    if(!((_start1 <= _end1) && (_start2 <= _end2))) break;
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))), arrayGet(_arr1,_end1) /* DAE.ASUB */, arrayGet(_arr2,_end2) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, arrayGet(_arr1,_end1) /* DAE.ASUB */, arrayGet(_arr2,_end2) /* DAE.ASUB */)))
    {
      tmpMeta2 = mmc_mk_cons(arrayGet(_arr1,_end1) /* DAE.ASUB */, _lst);
      _lst = tmpMeta2;

      _end1 = ((modelica_integer) -1) + _end1;

      _end2 = ((modelica_integer) -1) + _end2;
    }
    else
    {
      if(((_start2 <= ((modelica_integer) -1) + _end2) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespaceNotComment), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespaceNotComment), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespaceNotComment), 2))), arrayGet(_arr2,_end2) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespaceNotComment), 1)))) (threadData, arrayGet(_arr2,_end2) /* DAE.ASUB */))))
      {
        if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))), arrayGet(_arr1,_end1) /* DAE.ASUB */, arrayGet(_arr2,((modelica_integer) -1) + _end2) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, arrayGet(_arr1,_end1) /* DAE.ASUB */, arrayGet(_arr2,((modelica_integer) -1) + _end2) /* DAE.ASUB */))))
        {
          break;
        }

        _end2 = ((modelica_integer) -1) + _end2;
      }
      else
      {
        break;
      }
    }
  }

  if((!listEmpty(_lst)))
  {
    tmpMeta4 = mmc_mk_box2(0, mmc_mk_integer(3), _lst);
    tmpMeta3 = mmc_mk_cons(tmpMeta4, _suffixes);
    _suffixes = tmpMeta3;
  }
  _return: OMC_LABEL_UNUSED
  if (out_end1) { *out_end1 = _end1; }
  if (out_end2) { *out_end2 = _end2; }
  return _suffixes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_trimCommonSuffix(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _start1, modelica_metatype _inEnd1, modelica_metatype _arr2, modelica_metatype _start2, modelica_metatype _inEnd2, modelica_fnptr _equals, modelica_metatype _acc, modelica_fnptr _isWhitespaceNotComment, modelica_metatype *out_end1, modelica_metatype *out_end2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer _end1;
  modelica_integer _end2;
  modelica_metatype _suffixes = NULL;
  tmp1 = mmc_unbox_integer(_start1);
  tmp2 = mmc_unbox_integer(_inEnd1);
  tmp3 = mmc_unbox_integer(_start2);
  tmp4 = mmc_unbox_integer(_inEnd2);
  _suffixes = omc_DiffAlgorithm_trimCommonSuffix(threadData, _arr1, tmp1, tmp2, _arr2, tmp3, tmp4, _equals, _acc, _isWhitespaceNotComment, &_end1, &_end2);
  /* skip box _suffixes; list<tuple<#enumeration(Add, Delete, Equal), list<polymorphic<T>>>> */
  if (out_end1) { *out_end1 = mmc_mk_icon(_end1); }
  if (out_end2) { *out_end2 = mmc_mk_icon(_end2); }
  return _suffixes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_trimCommonPrefix(threadData_t *threadData, modelica_metatype _arr1, modelica_integer _inStart1, modelica_integer _end1, modelica_metatype _arr2, modelica_integer _inStart2, modelica_integer _end2, modelica_fnptr _equals, modelica_metatype _acc, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString, modelica_integer *out_start1, modelica_integer *out_start2)
{
  modelica_metatype _prefixes = NULL;
  modelica_integer _start1;
  modelica_integer _start2;
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _prefixes = _acc;
  _start1 = _inStart1;
  _start2 = _inStart2;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _lst = tmpMeta1;
  while(1)
  {
    if(!((_start1 <= _end1) && (_start2 <= _end2))) break;
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))), arrayGet(_arr1,_start1) /* DAE.ASUB */, arrayGet(_arr2,_start2) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, arrayGet(_arr1,_start1) /* DAE.ASUB */, arrayGet(_arr2,_start2) /* DAE.ASUB */)))
    {
      tmpMeta2 = mmc_mk_cons(arrayGet(_arr1,_start1) /* DAE.ASUB */, _lst);
      _lst = tmpMeta2;

      _start1 = ((modelica_integer) 1) + _start1;

      _start2 = ((modelica_integer) 1) + _start2;
    }
    else
    {
      if(((((modelica_integer) 1) + _start2 <= _end2) && mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespaceNotComment), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespaceNotComment), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespaceNotComment), 2))), arrayGet(_arr2,_start2) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespaceNotComment), 1)))) (threadData, arrayGet(_arr2,_start2) /* DAE.ASUB */))))
      {
        if((!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))), arrayGet(_arr1,_start1) /* DAE.ASUB */, arrayGet(_arr2,((modelica_integer) 1) + _start2) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, arrayGet(_arr1,_start1) /* DAE.ASUB */, arrayGet(_arr2,((modelica_integer) 1) + _start2) /* DAE.ASUB */))))
        {
          break;
        }

        _start2 = ((modelica_integer) 1) + _start2;
      }
      else
      {
        break;
      }
    }
  }

  if((!listEmpty(_lst)))
  {
    tmpMeta4 = mmc_mk_box2(0, mmc_mk_integer(3), listReverse(_lst));
    tmpMeta3 = mmc_mk_cons(tmpMeta4, _prefixes);
    _prefixes = tmpMeta3;
  }
  _return: OMC_LABEL_UNUSED
  if (out_start1) { *out_start1 = _start1; }
  if (out_start2) { *out_start2 = _start2; }
  return _prefixes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_trimCommonPrefix(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _inStart1, modelica_metatype _end1, modelica_metatype _arr2, modelica_metatype _inStart2, modelica_metatype _end2, modelica_fnptr _equals, modelica_metatype _acc, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString, modelica_metatype *out_start1, modelica_metatype *out_start2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer _start1;
  modelica_integer _start2;
  modelica_metatype _prefixes = NULL;
  tmp1 = mmc_unbox_integer(_inStart1);
  tmp2 = mmc_unbox_integer(_end1);
  tmp3 = mmc_unbox_integer(_inStart2);
  tmp4 = mmc_unbox_integer(_end2);
  _prefixes = omc_DiffAlgorithm_trimCommonPrefix(threadData, _arr1, tmp1, tmp2, _arr2, tmp3, tmp4, _equals, _acc, _isWhitespaceNotComment, _toString, &_start1, &_start2);
  /* skip box _prefixes; list<tuple<#enumeration(Add, Delete, Equal), list<polymorphic<T>>>> */
  if (out_start1) { *out_start1 = mmc_mk_icon(_start1); }
  if (out_start2) { *out_start2 = mmc_mk_icon(_start2); }
  return _prefixes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_myersGreedyPathToDiff(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_integer _start1, modelica_integer _start2, modelica_metatype _paths)
{
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _x1;
  modelica_integer _x2;
  modelica_integer _y1;
  modelica_integer _y2;
  modelica_integer _d1;
  modelica_integer _d2;
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _out = tmpMeta1;
  // _x1 has no default value.
  // _x2 has no default value.
  // _y1 has no default value.
  // _y2 has no default value.
  _d1 = 3;
  _d2 = 3;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _lst = tmpMeta2;
  // _t has no default value.
  /* Pattern-matching assignment */
  tmpMeta3 = _paths;
  if (listEmpty(tmpMeta3)) MMC_THROW_INTERNAL();
  tmpMeta4 = MMC_CAR(tmpMeta3);
  tmpMeta5 = MMC_CDR(tmpMeta3);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp9 = mmc_unbox_integer(tmpMeta8);
  _x2 = tmp7  /* pattern as ty=Integer */;
  _y2 = tmp9  /* pattern as ty=Integer */;

  {
    modelica_metatype _path;
    for (tmpMeta10 = listRest(_paths); !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _path = MMC_CAR(tmpMeta10);
      /* Pattern-matching assignment */
      tmpMeta11 = _path;
      tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
      tmp13 = mmc_unbox_integer(tmpMeta12);
      tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 2));
      tmp15 = mmc_unbox_integer(tmpMeta14);
      _x1 = tmp13  /* pattern as ty=Integer */;
      _y1 = tmp15  /* pattern as ty=Integer */;

      if(((_x2 - _x1 == ((modelica_integer) 1)) && (_y2 - _y1 == ((modelica_integer) 1))))
      {
        _d1 = 3;

        _t = arrayGet(_arr1,_start1 + _x1) /* DAE.ASUB */;
      }
      else
      {
        if(((_x2 - _x1 == ((modelica_integer) 1)) && (_y2 == _y1)))
        {
          _d1 = 2;

          _t = arrayGet(_arr1,_start1 + _x1) /* DAE.ASUB */;
        }
        else
        {
          if(((_y2 - _y1 == ((modelica_integer) 1)) && (_x2 == _x1)))
          {
            _d1 = 1;

            _t = arrayGet(_arr2,_start2 + _y1) /* DAE.ASUB */;
          }
          else
          {
            fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);

            MMC_THROW_INTERNAL();
          }
        }
      }

      if(listEmpty(_lst))
      {
        tmpMeta16 = mmc_mk_cons(_t, MMC_REFSTRUCTLIT(mmc_nil));
        _lst = tmpMeta16;
      }
      else
      {
        if(((modelica_integer)_d1 == (modelica_integer)_d2))
        {
          tmpMeta17 = mmc_mk_cons(_t, _lst);
          _lst = tmpMeta17;
        }
        else
        {
          tmpMeta19 = mmc_mk_box2(0, mmc_mk_integer((modelica_integer)_d2), _lst);
          tmpMeta18 = mmc_mk_cons(tmpMeta19, _out);
          _out = tmpMeta18;

          tmpMeta20 = mmc_mk_cons(_t, MMC_REFSTRUCTLIT(mmc_nil));
          _lst = tmpMeta20;
        }
      }

      _d2 = (modelica_integer)_d1;

      _x2 = _x1;

      _y2 = _y1;
    }
  }

  if((!listEmpty(_lst)))
  {
    tmpMeta23 = mmc_mk_box2(0, mmc_mk_integer((modelica_integer)_d2), _lst);
    tmpMeta22 = mmc_mk_cons(tmpMeta23, _out);
    _out = tmpMeta22;
  }
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_myersGreedyPathToDiff(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_metatype _start1, modelica_metatype _start2, modelica_metatype _paths)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _out = NULL;
  modelica_metatype tmpMeta3;
  tmp1 = mmc_unbox_integer(_start1);
  tmp2 = mmc_unbox_integer(_start2);
  _out = omc_DiffAlgorithm_myersGreedyPathToDiff(threadData, _arr1, _arr2, tmp1, tmp2, _paths);
  /* skip box _out; list<tuple<#enumeration(Add, Delete, Equal), list<polymorphic<T>>>> */
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_myersGreedyDiff(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_integer _start1, modelica_integer _end1, modelica_integer _start2, modelica_integer _end2)
{
  modelica_metatype _out = NULL;
  modelica_integer _len1;
  modelica_integer _len2;
  modelica_integer _maxIter;
  modelica_integer _sz;
  modelica_integer _middle;
  modelica_integer _x;
  modelica_integer _y;
  modelica_metatype _V = NULL;
  modelica_metatype _paths = NULL;
  modelica_metatype _prevPath = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _len1 has no default value.
  // _len2 has no default value.
  // _maxIter has no default value.
  // _sz has no default value.
  // _middle has no default value.
  // _x has no default value.
  // _y has no default value.
  // _V has no default value.
  // _paths has no default value.
  // _prevPath has no default value.
  _len1 = ((modelica_integer) 1) + _end1 - _start1;

  _len2 = ((modelica_integer) 1) + _end2 - _start2;

  _maxIter = _len1 + _len2;

  _sz = ((modelica_integer) 1) + (((modelica_integer) 2)) * (_maxIter);

  _middle = ((modelica_integer) 1) + _maxIter;

  _V = arrayCreate(_sz, mmc_mk_integer(((modelica_integer) 0)));

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _paths = arrayCreate(_sz, tmpMeta1);

  tmp9 = ((modelica_integer) 0); tmp10 = 1; tmp11 = _maxIter;
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer _D;
    for(_D = ((modelica_integer) 0); in_range_integer(_D, tmp9, tmp11); _D += tmp10)
    {
      tmp6 = (-_D); tmp7 = ((modelica_integer) 2); tmp8 = _D;
      if(!tmp7) {
        omc_assert(threadData, omc_dummyFileInfo, "assertion range step != 0 failed");
      } else if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
      {
        modelica_integer _k;
        for(_k = (-_D); in_range_integer(_k, tmp6, tmp8); _k += tmp7)
        {
          if(((_k == (-_D)) || ((_k != _D) && (mmc_unbox_integer(arrayGet(_V,((modelica_integer) -1) + _k + _middle) /* DAE.ASUB */) < mmc_unbox_integer(arrayGet(_V,((modelica_integer) 1) + _k + _middle) /* DAE.ASUB */)))))
          {
            _x = mmc_unbox_integer(arrayGet(_V,((modelica_integer) 1) + _k + _middle) /* DAE.ASUB */);

            _prevPath = arrayGet(_paths,((modelica_integer) 1) + _k + _middle) /* DAE.ASUB */;
          }
          else
          {
            _x = ((modelica_integer) 1) + mmc_unbox_integer(arrayGet(_V,((modelica_integer) -1) + _k + _middle) /* DAE.ASUB */);

            _prevPath = arrayGet(_paths,((modelica_integer) -1) + _k + _middle) /* DAE.ASUB */;
          }

          _y = _x - _k;

          tmpMeta3 = mmc_mk_box2(0, mmc_mk_integer(_x), mmc_mk_integer(_y));
          tmpMeta2 = mmc_mk_cons(tmpMeta3, _prevPath);
          arrayUpdate(_paths,_k + _middle,tmpMeta2);

          while(1)
          {
            if(!(((_x < _len1) && (_y < _len2))?mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))), arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */)):0 /* false */)) break;
            _x = ((modelica_integer) 1) + _x;

            _y = ((modelica_integer) 1) + _y;

            tmpMeta5 = mmc_mk_box2(0, mmc_mk_integer(_x), mmc_mk_integer(_y));
            tmpMeta4 = mmc_mk_cons(tmpMeta5, arrayGet(_paths,_k + _middle) /* DAE.ASUB */);
            arrayUpdate(_paths,_k + _middle,tmpMeta4);
          }

          arrayUpdate(_V,_k + _middle,mmc_mk_integer(_x));

          if(((_x >= _len1) && (_y >= _len2)))
          {
            _out = omc_DiffAlgorithm_myersGreedyPathToDiff(threadData, _arr1, _arr2, _start1, _start2, arrayGet(_paths,_k + _middle) /* DAE.ASUB */);

            goto _return;
          }
        }
      }
    }
  }

  fputs(MMC_STRINGDATA(_OMC_LIT1),stdout);

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_myersGreedyDiff(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_metatype _start1, modelica_metatype _end1, modelica_metatype _start2, modelica_metatype _end2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _out = NULL;
  tmp1 = mmc_unbox_integer(_start1);
  tmp2 = mmc_unbox_integer(_end1);
  tmp3 = mmc_unbox_integer(_start2);
  tmp4 = mmc_unbox_integer(_end2);
  _out = omc_DiffAlgorithm_myersGreedyDiff(threadData, _arr1, _arr2, _equals, tmp1, tmp2, tmp3, tmp4);
  /* skip box _out; list<tuple<#enumeration(Add, Delete, Equal), list<polymorphic<T>>>> */
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_onlyRemovals(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _toString, modelica_integer _start1, modelica_integer _end1, modelica_integer _start2, modelica_integer _end2)
{
  modelica_metatype _out = NULL;
  modelica_integer _x;
  modelica_integer _y;
  modelica_integer _d;
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  _x = ((modelica_integer) 0);
  _y = ((modelica_integer) 0);
  _d = 3;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _lst = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _out = tmpMeta2;

  while(1)
  {
    if(!((_start1 + _x <= _end1) && (_start2 + _y <= _end2))) break;
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))), arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */)))
    {
      _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 3, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */ ,&_d ,&_lst);

      _x = ((modelica_integer) 1) + _x;

      _y = ((modelica_integer) 1) + _y;
    }
    else
    {
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))), arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */)))
      {
        _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 1, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */ ,&_d ,&_lst);

        _y = ((modelica_integer) 1) + _y;
      }
      else
      {
        _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 2, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */ ,&_d ,&_lst);

        _x = ((modelica_integer) 1) + _x;
      }
    }
  }

  while(1)
  {
    if(!(_start1 + _x <= _end1)) break;
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))), arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */)))
    {
      _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 2, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */ ,&_d ,&_lst);

      _x = ((modelica_integer) 1) + _x;
    }
    else
    {
      MMC_THROW_INTERNAL();
    }
  }

  while(1)
  {
    if(!(_start2 + _y <= _end2)) break;
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))), arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */)))
    {
      _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 1, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */ ,&_d ,&_lst);

      _y = ((modelica_integer) 1) + _y;
    }
    else
    {
      MMC_THROW_INTERNAL();
    }
  }

  _out = omc_DiffAlgorithm_endList(threadData, _out, (modelica_integer)_d, _lst);

  _out = listReverse(_out);
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_onlyRemovals(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _toString, modelica_metatype _start1, modelica_metatype _end1, modelica_metatype _start2, modelica_metatype _end2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _out = NULL;
  tmp1 = mmc_unbox_integer(_start1);
  tmp2 = mmc_unbox_integer(_end1);
  tmp3 = mmc_unbox_integer(_start2);
  tmp4 = mmc_unbox_integer(_end2);
  _out = omc_DiffAlgorithm_onlyRemovals(threadData, _arr1, _arr2, _equals, _isWhitespace, _toString, tmp1, tmp2, tmp3, tmp4);
  /* skip box _out; list<tuple<#enumeration(Add, Delete, Equal), list<polymorphic<T>>>> */
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_onlyAdditions(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _toString, modelica_integer _start1, modelica_integer _end1, modelica_integer _start2, modelica_integer _end2)
{
  modelica_metatype _out = NULL;
  modelica_integer _x;
  modelica_integer _y;
  modelica_integer _d;
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  _x = ((modelica_integer) 0);
  _y = ((modelica_integer) 0);
  _d = 3;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _lst = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _out = tmpMeta2;

  while(1)
  {
    if(!((_start1 + _x <= _end1) && (_start2 + _y <= _end2))) break;
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))), arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */)))
    {
      _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 3, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */ ,&_d ,&_lst);

      _x = ((modelica_integer) 1) + _x;

      _y = ((modelica_integer) 1) + _y;
    }
    else
    {
      if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))), arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */)))
      {
        _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 2, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */ ,&_d ,&_lst);

        _x = ((modelica_integer) 1) + _x;
      }
      else
      {
        _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 1, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */ ,&_d ,&_lst);

        _y = ((modelica_integer) 1) + _y;
      }
    }
  }

  while(1)
  {
    if(!(_start1 + _x <= _end1)) break;
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))), arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */)))
    {
      _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 2, arrayGet(_arr1,_start1 + _x) /* DAE.ASUB */ ,&_d ,&_lst);

      _x = ((modelica_integer) 1) + _x;
    }
    else
    {
      MMC_THROW_INTERNAL();
    }
  }

  while(1)
  {
    if(!(_start2 + _y <= _end2)) break;
    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 2))), arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isWhitespace), 1)))) (threadData, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */)))
    {
      _out = omc_DiffAlgorithm_addToList(threadData, _out, (modelica_integer)_d, _lst, 1, arrayGet(_arr2,_start2 + _y) /* DAE.ASUB */ ,&_d ,&_lst);

      _y = ((modelica_integer) 1) + _y;
    }
    else
    {
      MMC_THROW_INTERNAL();
    }
  }

  _out = omc_DiffAlgorithm_endList(threadData, _out, (modelica_integer)_d, _lst);

  _out = listReverse(_out);
  _return: OMC_LABEL_UNUSED
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_onlyAdditions(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _toString, modelica_metatype _start1, modelica_metatype _end1, modelica_metatype _start2, modelica_metatype _end2)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _out = NULL;
  tmp1 = mmc_unbox_integer(_start1);
  tmp2 = mmc_unbox_integer(_end1);
  tmp3 = mmc_unbox_integer(_start2);
  tmp4 = mmc_unbox_integer(_end2);
  _out = omc_DiffAlgorithm_onlyAdditions(threadData, _arr1, _arr2, _equals, _isWhitespace, _toString, tmp1, tmp2, tmp3, tmp4);
  /* skip box _out; list<tuple<#enumeration(Add, Delete, Equal), list<polymorphic<T>>>> */
  return _out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_endList(threadData_t *threadData, modelica_metatype _inlst, modelica_integer _ind, modelica_metatype _inacc)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = _inlst;
  if((!listEmpty(_inacc)))
  {
    tmpMeta2 = mmc_mk_box2(0, mmc_mk_integer((modelica_integer)_ind), listReverse(_inacc));
    tmpMeta1 = mmc_mk_cons(tmpMeta2, _lst);
    _lst = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _lst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_endList(threadData_t *threadData, modelica_metatype _inlst, modelica_metatype _ind, modelica_metatype _inacc)
{
  modelica_integer tmp1;
  modelica_metatype _lst = NULL;
  tmp1 = mmc_unbox_integer(_ind);
  _lst = omc_DiffAlgorithm_endList(threadData, _inlst, tmp1, _inacc);
  /* skip box _lst; list<tuple<#enumeration(Add, Delete, Equal), list<polymorphic<T>>>> */
  return _lst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_addToList(threadData_t *threadData, modelica_metatype _inlst, modelica_integer _ind, modelica_metatype _inacc, modelica_integer _newd, modelica_metatype _t, modelica_integer *out_d, modelica_metatype *out_acc)
{
  modelica_metatype _lst = NULL;
  modelica_integer _d;
  modelica_metatype _acc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = _inlst;
  _d = (modelica_integer)_newd;
  _acc = _inacc;
  if(((modelica_integer)_ind == (modelica_integer)_newd))
  {
    tmpMeta1 = mmc_mk_cons(_t, _acc);
    _acc = tmpMeta1;
  }
  else
  {
    if((!listEmpty(_inacc)))
    {
      tmpMeta3 = mmc_mk_box2(0, mmc_mk_integer((modelica_integer)_ind), listReverse(_acc));
      tmpMeta2 = mmc_mk_cons(tmpMeta3, _lst);
      _lst = tmpMeta2;
    }

    tmpMeta4 = mmc_mk_cons(_t, MMC_REFSTRUCTLIT(mmc_nil));
    _acc = tmpMeta4;
  }
  _return: OMC_LABEL_UNUSED
  if (out_d) { *out_d = _d; }
  if (out_acc) { *out_acc = _acc; }
  return _lst;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_addToList(threadData_t *threadData, modelica_metatype _inlst, modelica_metatype _ind, modelica_metatype _inacc, modelica_metatype _newd, modelica_metatype _t, modelica_metatype *out_d, modelica_metatype *out_acc)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _d;
  modelica_metatype _lst = NULL;
  tmp1 = mmc_unbox_integer(_ind);
  tmp2 = mmc_unbox_integer(_newd);
  _lst = omc_DiffAlgorithm_addToList(threadData, _inlst, tmp1, _inacc, tmp2, _t, &_d, out_acc);
  /* skip box _lst; list<tuple<#enumeration(Add, Delete, Equal), list<polymorphic<T>>>> */
  if (out_d) { *out_d = mmc_mk_icon(_d); }
  /* skip box _acc; list<polymorphic<T>> */
  return _lst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_DiffAlgorithm_diffSeq(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString, modelica_integer _inStart1, modelica_integer _inEnd1, modelica_integer _inStart2, modelica_integer _inEnd2, modelica_metatype _inPrefixes, modelica_metatype _inSuffixes)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _out = NULL;
  modelica_integer _start1;
  modelica_integer _end1;
  modelica_integer _start2;
  modelica_integer _end2;
  modelica_integer _len1;
  modelica_integer _len2;
  modelica_metatype _prefixes = NULL;
  modelica_metatype _suffixes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta16;
  modelica_boolean tmp17;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  _start1 = _inStart1;
  _end1 = _inEnd1;
  _start2 = _inStart2;
  _end2 = _inEnd2;
  // _len1 has no default value.
  // _len2 has no default value.
  _prefixes = _inPrefixes;
  _suffixes = _inSuffixes;
  _len1 = ((modelica_integer) 1) + _end1 - _start1;

  _len2 = ((modelica_integer) 1) + _end2 - _start2;

  if(((_len1 < ((modelica_integer) 1)) && (_len2 < ((modelica_integer) 1))))
  {
    _out = omc_List_append__reverse(threadData, _prefixes, _suffixes);

    goto _return;
  }
  else
  {
    if((_len1 < ((modelica_integer) 1)))
    {
      {
        modelica_metatype __omcQ_24tmpVar3;
        modelica_metatype* tmp3;
        modelica_metatype tmpMeta4;
        modelica_metatype __omcQ_24tmpVar2;
        modelica_integer tmp5;
        modelica_integer tmp6;
        modelica_integer tmp7;
        modelica_integer _e;
        tmp6 = 1 /* Range step-value */;
        tmp7 = _end2 /* Range stop-value */;
        _e = _start2 /* Range start-value */;
        _e = (_start2 /* Range start-value */)-tmp6;
        tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
        tmp3 = &__omcQ_24tmpVar3;
        while(1) {
          tmp5 = 1;
          if (tmp6 > 0 ? _e+tmp6 <= tmp7 : _e+tmp6 >= tmp7) {
            _e += tmp6;
            tmp5--;
          }
          if (tmp5 == 0) {
            __omcQ_24tmpVar2 = arrayGet(_arr2,_e) /* DAE.ASUB */;
            *tmp3 = mmc_mk_cons(__omcQ_24tmpVar2,0);
            tmp3 = &MMC_CDR(*tmp3);
          } else if (tmp5 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp3 = mmc_mk_nil();
        tmpMeta2 = __omcQ_24tmpVar3;
      }
      tmpMeta8 = mmc_mk_box2(0, mmc_mk_integer(1), tmpMeta2);
      tmpMeta1 = mmc_mk_cons(tmpMeta8, _suffixes);
      _out = omc_List_append__reverse(threadData, _prefixes, tmpMeta1);

      goto _return;
    }
    else
    {
      if((_len2 < ((modelica_integer) 1)))
      {
        {
          modelica_metatype __omcQ_24tmpVar5;
          modelica_metatype* tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype __omcQ_24tmpVar4;
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_integer _e;
          tmp14 = 1 /* Range step-value */;
          tmp15 = _end1 /* Range stop-value */;
          _e = _start1 /* Range start-value */;
          _e = (_start1 /* Range start-value */)-tmp14;
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          __omcQ_24tmpVar5 = tmpMeta12; /* defaultValue */
          tmp11 = &__omcQ_24tmpVar5;
          while(1) {
            tmp13 = 1;
            if (tmp14 > 0 ? _e+tmp14 <= tmp15 : _e+tmp14 >= tmp15) {
              _e += tmp14;
              tmp13--;
            }
            if (tmp13 == 0) {
              __omcQ_24tmpVar4 = arrayGet(_arr1,_e) /* DAE.ASUB */;
              *tmp11 = mmc_mk_cons(__omcQ_24tmpVar4,0);
              tmp11 = &MMC_CDR(*tmp11);
            } else if (tmp13 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          *tmp11 = mmc_mk_nil();
          tmpMeta10 = __omcQ_24tmpVar5;
        }
        tmpMeta16 = mmc_mk_box2(0, mmc_mk_integer(2), tmpMeta10);
        tmpMeta9 = mmc_mk_cons(tmpMeta16, _suffixes);
        _out = omc_List_append__reverse(threadData, _prefixes, tmpMeta9);

        goto _return;
      }
    }
  }

  tmp21 = (modelica_boolean)(_len1 == _len2);
  if(tmp21)
  {
    {
      modelica_boolean __omcQ_24tmpVar7;
      modelica_boolean __omcQ_24tmpVar6;
      modelica_integer tmp18;
      modelica_integer tmp19;
      modelica_integer tmp20;
      modelica_integer _e;
      tmp19 = 1 /* Range step-value */;
      tmp20 = _len1 /* Range stop-value */;
      _e = ((modelica_integer) 1) /* Range start-value */;
      _e = (((modelica_integer) 1) /* Range start-value */)-tmp19;
      __omcQ_24tmpVar7 = 1 /* true */; /* defaultValue */
      while(1) {
        tmp18 = 1;
        if (tmp19 > 0 ? _e+tmp19 <= tmp20 : _e+tmp19 >= tmp20) {
          _e += tmp19;
          tmp18--;
        }
        if (tmp18 == 0) {
          __omcQ_24tmpVar6 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 2))), arrayGet(_arr1,((modelica_integer) -1) + _e + _start1) /* DAE.ASUB */, arrayGet(_arr2,((modelica_integer) -1) + _e + _start2) /* DAE.ASUB */) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_equals), 1)))) (threadData, arrayGet(_arr1,((modelica_integer) -1) + _e + _start1) /* DAE.ASUB */, arrayGet(_arr2,((modelica_integer) -1) + _e + _start2) /* DAE.ASUB */));
          __omcQ_24tmpVar7 = (__omcQ_24tmpVar6 && __omcQ_24tmpVar7);
        } else if (tmp18 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      tmp17 = __omcQ_24tmpVar7;
    }
    tmp22 = tmp17;
  }
  else
  {
    tmp22 = 0 /* false */;
  }
  if(tmp22)
  {
    {
      modelica_metatype __omcQ_24tmpVar11;
      modelica_metatype* tmp25;
      modelica_metatype tmpMeta26;
      modelica_metatype __omcQ_24tmpVar10;
      modelica_integer tmp27;
      modelica_integer tmp28;
      modelica_integer tmp29;
      modelica_integer _e;
      tmp28 = 1 /* Range step-value */;
      tmp29 = _end1 /* Range stop-value */;
      _e = _start1 /* Range start-value */;
      _e = (_start1 /* Range start-value */)-tmp28;
      tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar11 = tmpMeta26; /* defaultValue */
      tmp25 = &__omcQ_24tmpVar11;
      while(1) {
        tmp27 = 1;
        if (tmp28 > 0 ? _e+tmp28 <= tmp29 : _e+tmp28 >= tmp29) {
          _e += tmp28;
          tmp27--;
        }
        if (tmp27 == 0) {
          __omcQ_24tmpVar10 = arrayGet(_arr1,_e) /* DAE.ASUB */;
          *tmp25 = mmc_mk_cons(__omcQ_24tmpVar10,0);
          tmp25 = &MMC_CDR(*tmp25);
        } else if (tmp27 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp25 = mmc_mk_nil();
      tmpMeta24 = __omcQ_24tmpVar11;
    }
    tmpMeta30 = mmc_mk_box2(0, mmc_mk_integer(3), tmpMeta24);
    tmpMeta23 = mmc_mk_cons(tmpMeta30, MMC_REFSTRUCTLIT(mmc_nil));
    _out = tmpMeta23;

    goto _return;
  }

  _prefixes = omc_DiffAlgorithm_trimCommonPrefix(threadData, _arr1, _start1, _end1, _arr2, _start2, _end2, ((modelica_fnptr) _equals), _prefixes, ((modelica_fnptr) _isWhitespaceNotComment), ((modelica_fnptr) _toString) ,&_start1 ,&_start2);

  _suffixes = omc_DiffAlgorithm_trimCommonSuffix(threadData, _arr1, _start1, _end1, _arr2, _start2, _end2, ((modelica_fnptr) _equals), _suffixes, ((modelica_fnptr) _isWhitespaceNotComment) ,&_end1 ,&_end2);

  if(((((_start1 != _inStart1) || (_start2 != _inStart2)) || (_end1 != _inEnd1)) || (_end2 != _inEnd2)))
  {
    _out = omc_DiffAlgorithm_diffSeq(threadData, _arr1, _arr2, ((modelica_fnptr) _equals), ((modelica_fnptr) _isWhitespace), ((modelica_fnptr) _isWhitespaceNotComment), ((modelica_fnptr) _toString), _start1, _end1, _start2, _end2, _prefixes, _suffixes);

    goto _return;
  }
  else
  {
    { /* matchcontinue expression */
      {
        volatile mmc_switch_type tmp34;
        int tmp35;
        tmp34 = 0;
        MMC_TRY_INTERNAL(mmc_jumper)
        tmp33_top:
        threadData->mmc_jumper = &new_mmc_jumper;
        for (; tmp34 < 3; tmp34++) {
          switch (MMC_SWITCH_CAST(tmp34)) {
          case 0: {
            /* Pattern matching succeeded */
            tmpMeta31 = omc_DiffAlgorithm_onlyAdditions(threadData, _arr1, _arr2, ((modelica_fnptr) _equals), ((modelica_fnptr) _isWhitespace), ((modelica_fnptr) _toString), _start1, _end1, _start2, _end2);
            goto tmp33_done;
          }
          case 1: {
            /* Pattern matching succeeded */
            tmpMeta31 = omc_DiffAlgorithm_onlyRemovals(threadData, _arr1, _arr2, ((modelica_fnptr) _equals), ((modelica_fnptr) _isWhitespace), ((modelica_fnptr) _toString), _start1, _end1, _start2, _end2);
            goto tmp33_done;
          }
          case 2: {
            /* Pattern matching succeeded */
            tmpMeta31 = omc_DiffAlgorithm_myersGreedyDiff(threadData, _arr1, _arr2, ((modelica_fnptr) _equals), _start1, _end1, _start2, _end2);
            goto tmp33_done;
          }
          }
          goto tmp33_end;
          tmp33_end: ;
        }
        goto goto_32;
        tmp33_done:
        (void)tmp34;
        MMC_RESTORE_INTERNAL(mmc_jumper);
        goto tmp33_done2;
        goto_32:;
        MMC_CATCH_INTERNAL(mmc_jumper);
        if (++tmp34 < 3) {
          goto tmp33_top;
        }
        MMC_THROW_INTERNAL();
        tmp33_done2:;
      }
    }
    _out = tmpMeta31;

    _out = omc_List_append__reverse(threadData, _prefixes, listAppend(_out, _suffixes));

    goto _return;
  }

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_DiffAlgorithm_diffSeq(threadData_t *threadData, modelica_metatype _arr1, modelica_metatype _arr2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString, modelica_metatype _inStart1, modelica_metatype _inEnd1, modelica_metatype _inStart2, modelica_metatype _inEnd2, modelica_metatype _inPrefixes, modelica_metatype _inSuffixes)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_metatype _out = NULL;
  tmp1 = mmc_unbox_integer(_inStart1);
  tmp2 = mmc_unbox_integer(_inEnd1);
  tmp3 = mmc_unbox_integer(_inStart2);
  tmp4 = mmc_unbox_integer(_inEnd2);
  _out = omc_DiffAlgorithm_diffSeq(threadData, _arr1, _arr2, _equals, _isWhitespace, _isWhitespaceNotComment, _toString, tmp1, tmp2, tmp3, tmp4, _inPrefixes, _inSuffixes);
  /* skip box _out; list<tuple<#enumeration(Add, Delete, Equal), list<polymorphic<T>>>> */
  return _out;
}

DLLDirection
modelica_string omc_DiffAlgorithm_printActual(threadData_t *threadData, modelica_metatype _seq, modelica_fnptr _toString)
{
  modelica_string _res = NULL;
  modelica_string _open = NULL;
  modelica_string _close = NULL;
  modelica_metatype _ts = NULL;
  modelica_boolean _b;
  modelica_integer _i;
  modelica_metatype tmpMeta1;
  modelica_string tmp2_c0 __attribute__((unused)) = 0;
  modelica_string tmp2_c1 __attribute__((unused)) = 0;
  modelica_boolean tmp2_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _open has no default value.
  // _close has no default value.
  // _ts has no default value.
  // _b has no default value.
  // _i has no default value.
  _i = omc_Print_saveAndClearBuf(threadData);

  {
    modelica_metatype _d;
    for (tmpMeta1 = _seq; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _d = MMC_CAR(tmpMeta1);
      
      
      
      
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _d;
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          for (; tmp5 < 3; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              modelica_integer tmp8;
              modelica_metatype tmpMeta9;
              tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
              tmp8 = mmc_unbox_integer(tmpMeta7);
              if (3 != tmp8) goto tmp4_end;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _ts = tmpMeta9;
              /* Pattern matching succeeded */
              tmp2_c0 = _OMC_LIT2;
              tmp2_c1 = _OMC_LIT2;
              tmpMeta[0+2] = _ts;
              tmp2_c3 = 1 /* true */;
              goto tmp4_done;
            }
            case 1: {
              modelica_metatype tmpMeta10;
              modelica_integer tmp11;
              modelica_metatype tmpMeta12;
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
              tmp11 = mmc_unbox_integer(tmpMeta10);
              if (1 != tmp11) goto tmp4_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _ts = tmpMeta12;
              /* Pattern matching succeeded */
              tmp2_c0 = _OMC_LIT2;
              tmp2_c1 = _OMC_LIT2;
              tmpMeta[0+2] = _ts;
              tmp2_c3 = 1 /* true */;
              goto tmp4_done;
            }
            case 2: {
              modelica_metatype tmpMeta13;
              modelica_integer tmp14;
              modelica_metatype tmpMeta15;
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
              tmp14 = mmc_unbox_integer(tmpMeta13);
              if (2 != tmp14) goto tmp4_end;
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _ts = tmpMeta15;
              /* Pattern matching succeeded */
              tmp2_c0 = _OMC_LIT2;
              tmp2_c1 = _OMC_LIT2;
              tmpMeta[0+2] = _ts;
              tmp2_c3 = 0 /* false */;
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      _open = tmp2_c0;
      _close = tmp2_c1;
      _ts = tmpMeta[0+2];
      _b = tmp2_c3;

      if(((!listEmpty(_ts)) && _b))
      {
        omc_Print_printBuf(threadData, _open);

        {
          modelica_metatype _t;
          for (tmpMeta16 = _ts; !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
          {
            _t = MMC_CAR(tmpMeta16);
            omc_Print_printBuf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 2))), _t) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 1)))) (threadData, _t));
          }
        }

        omc_Print_printBuf(threadData, _close);
      }
    }
  }

  _res = omc_Print_getString(threadData);

  omc_Print_restoreBuf(threadData, _i);
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_string omc_DiffAlgorithm_printDiffXml(threadData_t *threadData, modelica_metatype _seq, modelica_fnptr _toString)
{
  modelica_string _res = NULL;
  modelica_string _open = NULL;
  modelica_string _close = NULL;
  modelica_metatype _ts = NULL;
  modelica_boolean _b;
  modelica_integer _i;
  modelica_metatype tmpMeta1;
  modelica_string tmp2_c0 __attribute__((unused)) = 0;
  modelica_string tmp2_c1 __attribute__((unused)) = 0;
  modelica_boolean tmp2_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _open has no default value.
  // _close has no default value.
  // _ts has no default value.
  // _b has no default value.
  // _i has no default value.
  _i = omc_Print_saveAndClearBuf(threadData);

  {
    modelica_metatype _d;
    for (tmpMeta1 = _seq; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _d = MMC_CAR(tmpMeta1);
      
      
      
      
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _d;
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          for (; tmp5 < 3; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              modelica_integer tmp8;
              modelica_metatype tmpMeta9;
              tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
              tmp8 = mmc_unbox_integer(tmpMeta7);
              if (3 != tmp8) goto tmp4_end;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _ts = tmpMeta9;
              /* Pattern matching succeeded */
              tmp2_c0 = _OMC_LIT3;
              tmp2_c1 = _OMC_LIT4;
              tmpMeta[0+2] = _ts;
              tmp2_c3 = 1 /* true */;
              goto tmp4_done;
            }
            case 1: {
              modelica_metatype tmpMeta10;
              modelica_integer tmp11;
              modelica_metatype tmpMeta12;
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
              tmp11 = mmc_unbox_integer(tmpMeta10);
              if (1 != tmp11) goto tmp4_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _ts = tmpMeta12;
              /* Pattern matching succeeded */
              tmp2_c0 = _OMC_LIT5;
              tmp2_c1 = _OMC_LIT6;
              tmpMeta[0+2] = _ts;
              tmp2_c3 = 1 /* true */;
              goto tmp4_done;
            }
            case 2: {
              modelica_metatype tmpMeta13;
              modelica_integer tmp14;
              modelica_metatype tmpMeta15;
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
              tmp14 = mmc_unbox_integer(tmpMeta13);
              if (2 != tmp14) goto tmp4_end;
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _ts = tmpMeta15;
              /* Pattern matching succeeded */
              tmp2_c0 = _OMC_LIT7;
              tmp2_c1 = _OMC_LIT8;
              tmpMeta[0+2] = _ts;
              tmp2_c3 = 1 /* true */;
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      _open = tmp2_c0;
      _close = tmp2_c1;
      _ts = tmpMeta[0+2];
      _b = tmp2_c3;

      if((!listEmpty(_ts)))
      {
        omc_Print_printBuf(threadData, _open);

        {
          modelica_metatype _t;
          for (tmpMeta16 = _ts; !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
          {
            _t = MMC_CAR(tmpMeta16);
            omc_Print_printBuf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 2))), _t) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 1)))) (threadData, _t));
          }
        }

        omc_Print_printBuf(threadData, _close);
      }
    }
  }

  _res = omc_Print_getString(threadData);

  omc_Print_restoreBuf(threadData, _i);
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_string omc_DiffAlgorithm_printDiffTerminalColor(threadData_t *threadData, modelica_metatype _seq, modelica_fnptr _toString)
{
  modelica_string _res = NULL;
  modelica_string _open = NULL;
  modelica_string _close = NULL;
  modelica_metatype _ts = NULL;
  modelica_boolean _b;
  modelica_integer _i;
  modelica_metatype tmpMeta1;
  modelica_string tmp2_c0 __attribute__((unused)) = 0;
  modelica_string tmp2_c1 __attribute__((unused)) = 0;
  modelica_boolean tmp2_c3 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  // _open has no default value.
  // _close has no default value.
  // _ts has no default value.
  // _b has no default value.
  // _i has no default value.
  _i = omc_Print_saveAndClearBuf(threadData);

  {
    modelica_metatype _d;
    for (tmpMeta1 = _seq; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _d = MMC_CAR(tmpMeta1);
      
      
      
      
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _d;
        {
          volatile mmc_switch_type tmp5;
          int tmp6;
          tmp5 = 0;
          for (; tmp5 < 3; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              modelica_integer tmp8;
              modelica_metatype tmpMeta9;
              tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
              tmp8 = mmc_unbox_integer(tmpMeta7);
              if (3 != tmp8) goto tmp4_end;
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _ts = tmpMeta9;
              /* Pattern matching succeeded */
              tmp2_c0 = _OMC_LIT2;
              tmp2_c1 = _OMC_LIT2;
              tmpMeta[0+2] = _ts;
              tmp2_c3 = 1 /* true */;
              goto tmp4_done;
            }
            case 1: {
              modelica_metatype tmpMeta10;
              modelica_integer tmp11;
              modelica_metatype tmpMeta12;
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
              tmp11 = mmc_unbox_integer(tmpMeta10);
              if (1 != tmp11) goto tmp4_end;
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _ts = tmpMeta12;
              /* Pattern matching succeeded */
              tmp2_c0 = _OMC_LIT9;
              tmp2_c1 = _OMC_LIT10;
              tmpMeta[0+2] = _ts;
              tmp2_c3 = 1 /* true */;
              goto tmp4_done;
            }
            case 2: {
              modelica_metatype tmpMeta13;
              modelica_integer tmp14;
              modelica_metatype tmpMeta15;
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
              tmp14 = mmc_unbox_integer(tmpMeta13);
              if (2 != tmp14) goto tmp4_end;
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              _ts = tmpMeta15;
              /* Pattern matching succeeded */
              tmp2_c0 = _OMC_LIT11;
              tmp2_c1 = _OMC_LIT10;
              tmpMeta[0+2] = _ts;
              tmp2_c3 = 1 /* true */;
              goto tmp4_done;
            }
            }
            goto tmp4_end;
            tmp4_end: ;
          }
          goto goto_3;
          goto_3:;
          MMC_THROW_INTERNAL();
          goto tmp4_done;
          tmp4_done:;
        }
      }
      _open = tmp2_c0;
      _close = tmp2_c1;
      _ts = tmpMeta[0+2];
      _b = tmp2_c3;

      if((!listEmpty(_ts)))
      {
        omc_Print_printBuf(threadData, _open);

        {
          modelica_metatype _t;
          for (tmpMeta16 = _ts; !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
          {
            _t = MMC_CAR(tmpMeta16);
            omc_Print_printBuf(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 2))), _t) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_toString), 1)))) (threadData, _t));
          }
        }

        omc_Print_printBuf(threadData, _close);
      }
    }
  }

  _res = omc_Print_getString(threadData);

  omc_Print_restoreBuf(threadData, _i);
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_DiffAlgorithm_diff(threadData_t *threadData, modelica_metatype _seq1, modelica_metatype _seq2, modelica_fnptr _equals, modelica_fnptr _isWhitespace, modelica_fnptr _isWhitespaceNotComment, modelica_fnptr _toString)
{
  modelica_metatype _out = NULL;
  modelica_integer _start1;
  modelica_integer _end1;
  modelica_integer _start2;
  modelica_integer _end2;
  modelica_metatype _arr1 = NULL;
  modelica_metatype _arr2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  // _start1 has no default value.
  // _end1 has no default value.
  // _start2 has no default value.
  // _end2 has no default value.
  // _arr1 has no default value.
  // _arr2 has no default value.
  _arr1 = listArray(_seq1);

  _arr2 = listArray(_seq2);

  _start1 = ((modelica_integer) 1);

  _start2 = ((modelica_integer) 1);

  _end1 = arrayLength(_arr1);

  _end2 = arrayLength(_arr2);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _out = omc_DiffAlgorithm_diffSeq(threadData, _arr1, _arr2, ((modelica_fnptr) _equals), ((modelica_fnptr) _isWhitespace), ((modelica_fnptr) _isWhitespaceNotComment), ((modelica_fnptr) _toString), _start1, _end1, _start2, _end2, tmpMeta1, tmpMeta2);
  _return: OMC_LABEL_UNUSED
  return _out;
}

