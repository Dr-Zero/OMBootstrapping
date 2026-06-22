#include "omc_simulation_settings.h"
#include "SimCodeUtilShared.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "GetVarToArrayIndexByType with unknown type called."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,50,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,1) {_OMC_LIT4,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "Negated alias to unknown variable given."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,40,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,1) {_OMC_LIT6,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Alias to unknown variable given."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,32,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,1) {_OMC_LIT8,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Unknown case for addVarToArrayIndexMapping.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,44,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,1) {_OMC_LIT11,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,3) {&DAE_InlineType_NORM__INLINE__desc,}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,1,8) {&DAE_InlineType_AFTER__INDEX__RED__INLINE__desc,}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,2,1) {_OMC_LIT14,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT13,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,0) {MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Creation of Modelica functions failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,38,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "/projects/OpenModelica-session2/OMCompiler/Compiler/SimCode/SimCodeUtilShared.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,80,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT20_6,1.781983298e9);
#define _OMC_LIT20_6 MMC_REFREALLIT(_OMC_LIT_STRUCT20_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT19,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(106)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(106)),MMC_IMMEDIATE(MMC_TAGFIXNUM(83)),_OMC_LIT20_6}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#include "util/modelica.h"

#include "SimCodeUtilShared_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_integer omc_SimCodeUtilShared_getVarToArrayIndexByType(threadData_t *threadData, modelica_metatype _iVar, modelica_integer _iVarType, modelica_metatype __omcQ_24in_5FiCurrentVarIndices, modelica_metatype *out_iCurrentVarIndices);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SimCodeUtilShared_getVarToArrayIndexByType(threadData_t *threadData, modelica_metatype _iVar, modelica_metatype _iVarType, modelica_metatype __omcQ_24in_5FiCurrentVarIndices, modelica_metatype *out_iCurrentVarIndices);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeUtilShared_getVarToArrayIndexByType,2,0) {(void*) boxptr_SimCodeUtilShared_getVarToArrayIndexByType,0}};
#define boxvar_SimCodeUtilShared_getVarToArrayIndexByType MMC_REFSTRUCTLIT(boxvar_lit_SimCodeUtilShared_getVarToArrayIndexByType)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SimCodeUtilShared_getArrayIdxByVar(threadData_t *threadData, modelica_metatype _iVar, modelica_integer _iVarType, modelica_metatype _iVarToIndexMapping, modelica_metatype __omcQ_24in_5FiCurrentVarIndices, modelica_integer *out_oVarIndex);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SimCodeUtilShared_getArrayIdxByVar(threadData_t *threadData, modelica_metatype _iVar, modelica_metatype _iVarType, modelica_metatype _iVarToIndexMapping, modelica_metatype __omcQ_24in_5FiCurrentVarIndices, modelica_metatype *out_oVarIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeUtilShared_getArrayIdxByVar,2,0) {(void*) boxptr_SimCodeUtilShared_getArrayIdxByVar,0}};
#define boxvar_SimCodeUtilShared_getArrayIdxByVar MMC_REFSTRUCTLIT(boxvar_lit_SimCodeUtilShared_getArrayIdxByVar)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices(threadData_t *threadData, modelica_metatype _iSubscripts);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices(threadData_t *threadData, modelica_metatype _iSubscripts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices,2,0) {(void*) boxptr_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices,0}};
#define boxvar_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices MMC_REFSTRUCTLIT(boxvar_lit_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SimCodeUtilShared_simulationFindLiterals(threadData_t *threadData, modelica_metatype _fns, modelica_metatype *out_literals);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeUtilShared_simulationFindLiterals,2,0) {(void*) boxptr_SimCodeUtilShared_simulationFindLiterals,0}};
#define boxvar_SimCodeUtilShared_simulationFindLiterals MMC_REFSTRUCTLIT(boxvar_lit_SimCodeUtilShared_simulationFindLiterals)

DLLDirection
modelica_boolean omc_SimCodeUtilShared_isArrayVar(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _isArray;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isArray has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          
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
  _isArray = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isArray;
}
modelica_metatype boxptr_SimCodeUtilShared_isArrayVar(threadData_t *threadData, modelica_metatype _var)
{
  modelica_boolean _isArray;
  modelica_metatype out_isArray;
  _isArray = omc_SimCodeUtilShared_isArrayVar(threadData, _var);
  out_isArray = mmc_mk_icon(_isArray);
  return out_isArray;
}

DLLDirection
modelica_integer omc_SimCodeUtilShared_getNumElems(threadData_t *threadData, modelica_metatype _var)
{
  modelica_integer _numElems;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _numElems has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _var;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 13));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _numElems = ((modelica_integer) 1);

          {
            modelica_metatype _d;
            for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 21))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
            {
              _d = MMC_CAR(tmpMeta7);
              _numElems = (_numElems) * (stringInt(_d));
            }
          }
          tmp1 = _numElems;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
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
  _numElems = tmp1;
  _return: OMC_LABEL_UNUSED
  return _numElems;
}
modelica_metatype boxptr_SimCodeUtilShared_getNumElems(threadData_t *threadData, modelica_metatype _var)
{
  modelica_integer _numElems;
  modelica_metatype out_numElems;
  _numElems = omc_SimCodeUtilShared_getNumElems(threadData, _var);
  out_numElems = mmc_mk_icon(_numElems);
  return out_numElems;
}

DLLDirection
modelica_integer omc_SimCodeUtilShared_getScalarElementIndex(threadData_t *threadData, modelica_metatype _arraySubscripts, modelica_metatype _arrayDimensions)
{
  modelica_integer _arrayIndex;
  modelica_integer _idx;
  modelica_integer _fac;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _arrayIndex has no default value.
  // _idx has no default value.
  // _fac has no default value.
  _arrayIndex = ((modelica_integer) 1);

  _fac = ((modelica_integer) 1);

  tmp1 = listLength(_arraySubscripts); tmp2 = ((modelica_integer) -1); tmp3 = ((modelica_integer) 1);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = listLength(_arraySubscripts); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      _idx = omc_DAEUtil_getSubscriptIndex(threadData, listGet(_arraySubscripts, _i));

      _arrayIndex = _arrayIndex + (((modelica_integer) -1) + _idx) * (_fac);

      _fac = (_fac) * (mmc_unbox_integer(listGet(_arrayDimensions, _i)));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _arrayIndex;
}
modelica_metatype boxptr_SimCodeUtilShared_getScalarElementIndex(threadData_t *threadData, modelica_metatype _arraySubscripts, modelica_metatype _arrayDimensions)
{
  modelica_integer _arrayIndex;
  modelica_metatype out_arrayIndex;
  _arrayIndex = omc_SimCodeUtilShared_getScalarElementIndex(threadData, _arraySubscripts, _arrayDimensions);
  out_arrayIndex = mmc_mk_icon(_arrayIndex);
  return out_arrayIndex;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_SimCodeUtilShared_getVarToArrayIndexByType(threadData_t *threadData, modelica_metatype _iVar, modelica_integer _iVarType, modelica_metatype __omcQ_24in_5FiCurrentVarIndices, modelica_metatype *out_iCurrentVarIndices)
{
  modelica_integer _oVarIdx;
  modelica_metatype _iCurrentVarIndices = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVarIdx has no default value.
  _iCurrentVarIndices = __omcQ_24in_5FiCurrentVarIndices;
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          /* Pattern matching succeeded */
          _oVarIdx = mmc_unbox_integer(arrayGet(_iCurrentVarIndices, _iVarType));

          arrayUpdate(_iCurrentVarIndices, _iVarType, mmc_mk_integer(_oVarIdx + omc_SimCodeUtilShared_getNumElems(threadData, _iVar)));
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT5);

          _oVarIdx = ((modelica_integer) -1);
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_iCurrentVarIndices) { *out_iCurrentVarIndices = _iCurrentVarIndices; }
  return _oVarIdx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SimCodeUtilShared_getVarToArrayIndexByType(threadData_t *threadData, modelica_metatype _iVar, modelica_metatype _iVarType, modelica_metatype __omcQ_24in_5FiCurrentVarIndices, modelica_metatype *out_iCurrentVarIndices)
{
  modelica_integer tmp1;
  modelica_integer _oVarIdx;
  modelica_metatype out_oVarIdx;
  tmp1 = mmc_unbox_integer(_iVarType);
  _oVarIdx = omc_SimCodeUtilShared_getVarToArrayIndexByType(threadData, _iVar, tmp1, __omcQ_24in_5FiCurrentVarIndices, out_iCurrentVarIndices);
  out_oVarIdx = mmc_mk_icon(_oVarIdx);
  /* skip box _iCurrentVarIndices; array<#Integer> */
  return out_oVarIdx;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SimCodeUtilShared_getArrayIdxByVar(threadData_t *threadData, modelica_metatype _iVar, modelica_integer _iVarType, modelica_metatype _iVarToIndexMapping, modelica_metatype __omcQ_24in_5FiCurrentVarIndices, modelica_integer *out_oVarIndex)
{
  modelica_metatype _iCurrentVarIndices = NULL;
  modelica_integer _oVarIndex;
  modelica_metatype _varName = NULL;
  modelica_metatype _name = NULL;
  modelica_integer _varIdx;
  modelica_metatype _tmpCurrentVarIndices = NULL;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _iCurrentVarIndices = __omcQ_24in_5FiCurrentVarIndices;
  // _oVarIndex has no default value.
  // _varName has no default value.
  // _name has no default value.
  // _varIdx has no default value.
  // _tmpCurrentVarIndices has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iVar;
    tmp4_2 = _iCurrentVarIndices;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,0) == 0) goto tmp3_end;
          
          _name = tmpMeta6;
          _tmpCurrentVarIndices = tmp4_2;
          /* Pattern matching succeeded */
          _varIdx = omc_SimCodeUtilShared_getVarToArrayIndexByType(threadData, _iVar, _iVarType, _tmpCurrentVarIndices ,&_tmpCurrentVarIndices);
          tmp1 = _varIdx;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,2,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          
          _name = tmpMeta8;
          _varName = tmpMeta10;
          /* Pattern matching succeeded */
          if(omc_BaseHashTable_hasKey(threadData, _varName, _iVarToIndexMapping))
          {
            /* Pattern-matching assignment */
            tmpMeta11 = omc_BaseHashTable_get(threadData, _varName, _iVarToIndexMapping);
            if (listEmpty(tmpMeta11)) goto goto_2;
            tmpMeta12 = MMC_CAR(tmpMeta11);
            tmpMeta13 = MMC_CDR(tmpMeta11);
            tmp14 = mmc_unbox_integer(tmpMeta12);
            _varIdx = tmp14  /* pattern as ty=Integer */;

            _varIdx = (-_varIdx);
          }
          else
          {
            if(omc_ComponentReference_isTime(threadData, _varName))
            {
              _varIdx = ((modelica_integer) 0);
            }
            else
            {
              omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT7);

              goto goto_2;
            }
          }
          tmp1 = _varIdx;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 16));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,1) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          
          _name = tmpMeta15;
          _varName = tmpMeta17;
          /* Pattern matching succeeded */
          if(omc_BaseHashTable_hasKey(threadData, _varName, _iVarToIndexMapping))
          {
            /* Pattern-matching assignment */
            tmpMeta18 = omc_BaseHashTable_get(threadData, _varName, _iVarToIndexMapping);
            if (listEmpty(tmpMeta18)) goto goto_2;
            tmpMeta19 = MMC_CAR(tmpMeta18);
            tmpMeta20 = MMC_CDR(tmpMeta18);
            tmp21 = mmc_unbox_integer(tmpMeta19);
            _varIdx = tmp21  /* pattern as ty=Integer */;
          }
          else
          {
            if(omc_ComponentReference_isTime(threadData, _varName))
            {
              _varIdx = ((modelica_integer) 0);
            }
            else
            {
              omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT9);

              goto goto_2;
            }
          }
          tmp1 = _varIdx;
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
  _oVarIndex = tmp1;
  _return: OMC_LABEL_UNUSED
  if (out_oVarIndex) { *out_oVarIndex = _oVarIndex; }
  return _iCurrentVarIndices;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SimCodeUtilShared_getArrayIdxByVar(threadData_t *threadData, modelica_metatype _iVar, modelica_metatype _iVarType, modelica_metatype _iVarToIndexMapping, modelica_metatype __omcQ_24in_5FiCurrentVarIndices, modelica_metatype *out_oVarIndex)
{
  modelica_integer tmp1;
  modelica_integer _oVarIndex;
  modelica_metatype _iCurrentVarIndices = NULL;
  tmp1 = mmc_unbox_integer(_iVarType);
  _iCurrentVarIndices = omc_SimCodeUtilShared_getArrayIdxByVar(threadData, _iVar, tmp1, _iVarToIndexMapping, __omcQ_24in_5FiCurrentVarIndices, &_oVarIndex);
  /* skip box _iCurrentVarIndices; array<#Integer> */
  if (out_oVarIndex) { *out_oVarIndex = mmc_mk_icon(_oVarIndex); }
  return _iCurrentVarIndices;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices(threadData_t *threadData, modelica_metatype _iSubscripts)
{
  modelica_boolean _oContainsUnhandledSubscripts;
  modelica_metatype _subscript = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oContainsUnhandledSubscripts = 0 /* false */;
  // _subscript has no default value.
  {
    modelica_metatype _subscript;
    for (tmpMeta1 = _iSubscripts; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _subscript = MMC_CAR(tmpMeta1);
      if((omc_DAEUtil_getSubscriptIndex(threadData, _subscript) < ((modelica_integer) 0)))
      {
        _oContainsUnhandledSubscripts = 1 /* true */;

        break;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _oContainsUnhandledSubscripts;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices(threadData_t *threadData, modelica_metatype _iSubscripts)
{
  modelica_boolean _oContainsUnhandledSubscripts;
  modelica_metatype out_oContainsUnhandledSubscripts;
  _oContainsUnhandledSubscripts = omc_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices(threadData, _iSubscripts);
  out_oContainsUnhandledSubscripts = mmc_mk_icon(_oContainsUnhandledSubscripts);
  return out_oContainsUnhandledSubscripts;
}

DLLDirection
modelica_metatype omc_SimCodeUtilShared_addVarToArrayIndexMapping(threadData_t *threadData, modelica_metatype _iVar, modelica_integer _iVarType, modelica_metatype __omcQ_24in_5FcurrentVarIndices, modelica_metatype __omcQ_24in_5FvarToArrayIndexMapping, modelica_metatype __omcQ_24in_5FvarToIndexMapping, modelica_metatype *out_varToArrayIndexMapping, modelica_metatype *out_varToIndexMapping)
{
  modelica_metatype _currentVarIndices = NULL;
  modelica_metatype _varToArrayIndexMapping = NULL;
  modelica_metatype _varToIndexMapping = NULL;
  modelica_metatype _name = NULL;
  modelica_metatype _arrayName = NULL;
  modelica_integer _varIdx;
  modelica_integer _arrayIndex;
  modelica_metatype _varIndices = NULL;
  modelica_metatype _arrayDimensions = NULL;
  modelica_metatype _numArrayElement = NULL;
  modelica_metatype _arraySubscripts = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _currentVarIndices = __omcQ_24in_5FcurrentVarIndices;
  _varToArrayIndexMapping = __omcQ_24in_5FvarToArrayIndexMapping;
  _varToIndexMapping = __omcQ_24in_5FvarToIndexMapping;
  // _name has no default value.
  // _arrayName has no default value.
  // _varIdx has no default value.
  // _arrayIndex has no default value.
  // _varIndices has no default value.
  // _arrayDimensions has no default value.
  // _numArrayElement has no default value.
  // _arraySubscripts has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _iVar;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 21));
          
          _name = tmpMeta5;
          _numArrayElement = tmpMeta6;
          /* Pattern matching succeeded */
          _currentVarIndices = omc_SimCodeUtilShared_getArrayIdxByVar(threadData, _iVar, _iVarType, _varToIndexMapping, _currentVarIndices ,&_varIdx);

          tmpMeta7 = mmc_mk_cons(mmc_mk_integer(_varIdx), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta8 = mmc_mk_box2(0, _name, tmpMeta7);
          _varToIndexMapping = omc_BaseHashTable_add(threadData, tmpMeta8, _varToIndexMapping);

          _arraySubscripts = omc_ComponentReference_crefLastSubs(threadData, _name);

          if((listEmpty(_numArrayElement) || omc_SimCodeUtilShared_checkIfSubscriptsContainsUnhandlableIndices(threadData, _arraySubscripts)))
          {
            _arrayName = _name;
          }
          else
          {
            _arrayName = omc_ComponentReferenceBasics_crefStripLastSubs(threadData, _name);
          }

          if(omc_SimCodeUtilShared_isArrayVar(threadData, _iVar))
          {
            {
              modelica_metatype __omcQ_24tmpVar1;
              modelica_metatype* tmp10;
              modelica_metatype tmpMeta11;
              modelica_metatype __omcQ_24tmpVar0;
              modelica_integer tmp12;
              modelica_metatype _e_loopVar = 0;
              modelica_metatype _e;
              _e_loopVar = omc_List_lastN(threadData, _numArrayElement, listLength(_numArrayElement));
              tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
              __omcQ_24tmpVar1 = tmpMeta11; /* defaultValue */
              tmp10 = &__omcQ_24tmpVar1;
              while(1) {
                tmp12 = 1;
                if (!listEmpty(_e_loopVar)) {
                  _e = MMC_CAR(_e_loopVar);
                  _e_loopVar = MMC_CDR(_e_loopVar);
                  tmp12--;
                }
                if (tmp12 == 0) {
                  __omcQ_24tmpVar0 = mmc_mk_integer(stringInt(_e));
                  *tmp10 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                  tmp10 = &MMC_CDR(*tmp10);
                } else if (tmp12 == 1) {
                  break;
                } else {
                  goto goto_1;
                }
              }
              *tmp10 = mmc_mk_nil();
              tmpMeta9 = __omcQ_24tmpVar1;
            }
            _arrayDimensions = tmpMeta9;

            _varIndices = arrayCreate(((modelica_integer) 1), mmc_mk_integer(_varIdx));

            tmpMeta13 = mmc_mk_box2(0, _arrayDimensions, _varIndices);
            tmpMeta14 = mmc_mk_box2(0, _arrayName, tmpMeta13);
            _varToArrayIndexMapping = omc_BaseHashTable_add(threadData, tmpMeta14, _varToArrayIndexMapping);
          }
          else
          {
            if(omc_ComponentReferenceBasics_crefEqual(threadData, _arrayName, _name))
            {
              _varIndices = arrayCreate(((modelica_integer) 1), mmc_mk_integer(_varIdx));

              tmpMeta15 = mmc_mk_box2(0, _OMC_LIT10, _varIndices);
              tmpMeta16 = mmc_mk_box2(0, _arrayName, tmpMeta15);
              _varToArrayIndexMapping = omc_BaseHashTable_add(threadData, tmpMeta16, _varToArrayIndexMapping);
            }
            else
            {
              if(omc_BaseHashTable_hasKey(threadData, _arrayName, _varToArrayIndexMapping))
              {
                /* Pattern-matching assignment */
                tmpMeta17 = omc_BaseHashTable_get(threadData, _arrayName, _varToArrayIndexMapping);
                tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 1));
                tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
                _arrayDimensions = tmpMeta18;
                _varIndices = tmpMeta19;
              }
              else
              {
                {
                  modelica_metatype __omcQ_24tmpVar3;
                  modelica_metatype* tmp21;
                  modelica_metatype tmpMeta22;
                  modelica_metatype __omcQ_24tmpVar2;
                  modelica_integer tmp23;
                  modelica_metatype _e_loopVar = 0;
                  modelica_metatype _e;
                  _e_loopVar = omc_List_lastN(threadData, _numArrayElement, listLength(_arraySubscripts));
                  tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar3 = tmpMeta22; /* defaultValue */
                  tmp21 = &__omcQ_24tmpVar3;
                  while(1) {
                    tmp23 = 1;
                    if (!listEmpty(_e_loopVar)) {
                      _e = MMC_CAR(_e_loopVar);
                      _e_loopVar = MMC_CDR(_e_loopVar);
                      tmp23--;
                    }
                    if (tmp23 == 0) {
                      __omcQ_24tmpVar2 = mmc_mk_integer(stringInt(_e));
                      *tmp21 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                      tmp21 = &MMC_CDR(*tmp21);
                    } else if (tmp23 == 1) {
                      break;
                    } else {
                      goto goto_1;
                    }
                  }
                  *tmp21 = mmc_mk_nil();
                  tmpMeta20 = __omcQ_24tmpVar3;
                }
                _arrayDimensions = tmpMeta20;

                _varIndices = arrayCreate(mmc_unbox_integer(omc_List_fold(threadData, _arrayDimensions, boxvar_intMul, mmc_mk_integer(((modelica_integer) 1)))), mmc_mk_integer(((modelica_integer) 0)));
              }

              _arrayIndex = omc_SimCodeUtilShared_getScalarElementIndex(threadData, _arraySubscripts, _arrayDimensions);

              _varIndices = arrayUpdate(_varIndices, _arrayIndex, mmc_mk_integer(_varIdx));

              tmpMeta24 = mmc_mk_box2(0, _arrayDimensions, _varIndices);
              tmpMeta25 = mmc_mk_box2(0, _arrayName, tmpMeta24);
              _varToArrayIndexMapping = omc_BaseHashTable_add(threadData, tmpMeta25, _varToArrayIndexMapping);
            }
          }
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT3, _OMC_LIT12);
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_varToArrayIndexMapping) { *out_varToArrayIndexMapping = _varToArrayIndexMapping; }
  if (out_varToIndexMapping) { *out_varToIndexMapping = _varToIndexMapping; }
  return _currentVarIndices;
}
modelica_metatype boxptr_SimCodeUtilShared_addVarToArrayIndexMapping(threadData_t *threadData, modelica_metatype _iVar, modelica_metatype _iVarType, modelica_metatype __omcQ_24in_5FcurrentVarIndices, modelica_metatype __omcQ_24in_5FvarToArrayIndexMapping, modelica_metatype __omcQ_24in_5FvarToIndexMapping, modelica_metatype *out_varToArrayIndexMapping, modelica_metatype *out_varToIndexMapping)
{
  modelica_integer tmp1;
  modelica_metatype _currentVarIndices = NULL;
  tmp1 = mmc_unbox_integer(_iVarType);
  _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMapping(threadData, _iVar, tmp1, __omcQ_24in_5FcurrentVarIndices, __omcQ_24in_5FvarToArrayIndexMapping, __omcQ_24in_5FvarToIndexMapping, out_varToArrayIndexMapping, out_varToIndexMapping);
  /* skip box _currentVarIndices; array<#Integer> */
  /* skip box _varToArrayIndexMapping; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, tuple<list<#Integer>, array<#Integer>>>>>>, #Integer, tuple<.HashTableCrIListArray.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrIListArray.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrIListArray.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrIListArray.FuncExpStr<function>(tuple<list<#Integer>, array<#Integer>> exp) => String>> */
  /* skip box _varToIndexMapping; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, list<#Integer>>>>>, #Integer, tuple<.HashTableCrILst.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrILst.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrILst.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrILst.FuncExpStr<function>(list<#Integer> exp) => String>> */
  return _currentVarIndices;
}

DLLDirection
modelica_metatype omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData_t *threadData, modelica_metatype _vars, modelica_integer _iVarType, modelica_metatype __omcQ_24in_5FcurrentVarIndices, modelica_metatype __omcQ_24in_5FvarToArrayIndexMapping, modelica_metatype __omcQ_24in_5FvarToIndexMapping, modelica_metatype *out_varToArrayIndexMapping, modelica_metatype *out_varToIndexMapping)
{
  modelica_metatype _currentVarIndices = NULL;
  modelica_metatype _varToArrayIndexMapping = NULL;
  modelica_metatype _varToIndexMapping = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _currentVarIndices = __omcQ_24in_5FcurrentVarIndices;
  _varToArrayIndexMapping = __omcQ_24in_5FvarToArrayIndexMapping;
  _varToIndexMapping = __omcQ_24in_5FvarToIndexMapping;
  {
    modelica_metatype _v;
    for (tmpMeta1 = _vars; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _v = MMC_CAR(tmpMeta1);
      _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMapping(threadData, _v, _iVarType, _currentVarIndices, _varToArrayIndexMapping, _varToIndexMapping ,&_varToArrayIndexMapping ,&_varToIndexMapping);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_varToArrayIndexMapping) { *out_varToArrayIndexMapping = _varToArrayIndexMapping; }
  if (out_varToIndexMapping) { *out_varToIndexMapping = _varToIndexMapping; }
  return _currentVarIndices;
}
modelica_metatype boxptr_SimCodeUtilShared_addVarToArrayIndexMappings(threadData_t *threadData, modelica_metatype _vars, modelica_metatype _iVarType, modelica_metatype __omcQ_24in_5FcurrentVarIndices, modelica_metatype __omcQ_24in_5FvarToArrayIndexMapping, modelica_metatype __omcQ_24in_5FvarToIndexMapping, modelica_metatype *out_varToArrayIndexMapping, modelica_metatype *out_varToIndexMapping)
{
  modelica_integer tmp1;
  modelica_metatype _currentVarIndices = NULL;
  tmp1 = mmc_unbox_integer(_iVarType);
  _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, _vars, tmp1, __omcQ_24in_5FcurrentVarIndices, __omcQ_24in_5FvarToArrayIndexMapping, __omcQ_24in_5FvarToIndexMapping, out_varToArrayIndexMapping, out_varToIndexMapping);
  /* skip box _currentVarIndices; array<#Integer> */
  /* skip box _varToArrayIndexMapping; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, tuple<list<#Integer>, array<#Integer>>>>>>, #Integer, tuple<.HashTableCrIListArray.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrIListArray.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrIListArray.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrIListArray.FuncExpStr<function>(tuple<list<#Integer>, array<#Integer>> exp) => String>> */
  /* skip box _varToIndexMapping; tuple<array<list<tuple<DAE.ComponentRef, #Integer>>>, tuple<#Integer, #Integer, array<Option<tuple<DAE.ComponentRef, list<#Integer>>>>>, #Integer, tuple<.HashTableCrILst.FuncHashCref<function>(DAE.ComponentRef cr) => #Integer, .HashTableCrILst.FuncCrefEqual<function>(DAE.ComponentRef cr1, DAE.ComponentRef cr2) => #Boolean, .HashTableCrILst.FuncCrefStr<function>(DAE.ComponentRef cr) => String, .HashTableCrILst.FuncExpStr<function>(list<#Integer> exp) => String>> */
  return _currentVarIndices;
}

DLLDirection
modelica_metatype omc_SimCodeUtilShared_createVarToArrayIndexMapping(threadData_t *threadData, modelica_metatype _iModelInfo, modelica_metatype *out_oVarToIndexMapping)
{
  modelica_metatype _oVarToArrayIndexMapping = NULL;
  modelica_metatype _oVarToIndexMapping = NULL;
  modelica_metatype _sim_vars = NULL;
  modelica_metatype _vars = NULL;
  modelica_integer _table_size;
  modelica_metatype _var_lst = NULL;
  modelica_integer _var_type;
  modelica_metatype _currentVarIndices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
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
  modelica_metatype tmpMeta30;
  modelica_integer tmp31;
  modelica_metatype tmpMeta32;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oVarToArrayIndexMapping has no default value.
  // _oVarToIndexMapping has no default value.
  // _sim_vars has no default value.
  // _vars has no default value.
  _table_size = ((modelica_integer) 0);
  // _var_lst has no default value.
  // _var_type has no default value.
  // _currentVarIndices has no default value.
  _sim_vars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iModelInfo), 11)));

  tmpMeta2 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 2))), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta3 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 3))), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta4 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 4))), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta5 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 5))), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta6 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 6))), mmc_mk_integer(((modelica_integer) 2)));
  tmpMeta7 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 7))), mmc_mk_integer(((modelica_integer) 3)));
  tmpMeta8 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 16))), mmc_mk_integer(((modelica_integer) 4)));
  tmpMeta9 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 13))), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta10 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 14))), mmc_mk_integer(((modelica_integer) 2)));
  tmpMeta11 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 15))), mmc_mk_integer(((modelica_integer) 3)));
  tmpMeta12 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 17))), mmc_mk_integer(((modelica_integer) 4)));
  tmpMeta13 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 20))), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta14 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 21))), mmc_mk_integer(((modelica_integer) 2)));
  tmpMeta15 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 22))), mmc_mk_integer(((modelica_integer) 3)));
  tmpMeta16 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 23))), mmc_mk_integer(((modelica_integer) 4)));
  tmpMeta17 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 26))), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta18 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 27))), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta19 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 10))), mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta20 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 11))), mmc_mk_integer(((modelica_integer) 2)));
  tmpMeta21 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 12))), mmc_mk_integer(((modelica_integer) 3)));
  tmpMeta22 = mmc_mk_box2(0, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sim_vars), 18))), mmc_mk_integer(((modelica_integer) 4)));
  tmpMeta1 = mmc_mk_cons(tmpMeta2, mmc_mk_cons(tmpMeta3, mmc_mk_cons(tmpMeta4, mmc_mk_cons(tmpMeta5, mmc_mk_cons(tmpMeta6, mmc_mk_cons(tmpMeta7, mmc_mk_cons(tmpMeta8, mmc_mk_cons(tmpMeta9, mmc_mk_cons(tmpMeta10, mmc_mk_cons(tmpMeta11, mmc_mk_cons(tmpMeta12, mmc_mk_cons(tmpMeta13, mmc_mk_cons(tmpMeta14, mmc_mk_cons(tmpMeta15, mmc_mk_cons(tmpMeta16, mmc_mk_cons(tmpMeta17, mmc_mk_cons(tmpMeta18, mmc_mk_cons(tmpMeta19, mmc_mk_cons(tmpMeta20, mmc_mk_cons(tmpMeta21, mmc_mk_cons(tmpMeta22, MMC_REFSTRUCTLIT(mmc_nil))))))))))))))))))))));
  _vars = tmpMeta1;

  {
    modelica_metatype _vl;
    for (tmpMeta23 = _vars; !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
    {
      _vl = MMC_CAR(tmpMeta23);
      /* Pattern-matching assignment */
      tmpMeta24 = _vl;
      tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 1));
      _var_lst = tmpMeta25;

      _table_size = _table_size + listLength(_var_lst);
    }
  }

  _table_size = omc_Util_nextPrime(threadData, ((modelica_integer)floor((1.4) * (((modelica_real)_table_size)))));

  _oVarToArrayIndexMapping = omc_HashTableCrIListArray_emptyHashTableSized(threadData, _table_size);

  _oVarToIndexMapping = omc_HashTableCrILst_emptyHashTableSized(threadData, _table_size);

  _currentVarIndices = arrayCreate(((modelica_integer) 4), mmc_mk_integer(((modelica_integer) 1)));

  {
    modelica_metatype _vl;
    for (tmpMeta27 = _vars; !listEmpty(tmpMeta27); tmpMeta27=MMC_CDR(tmpMeta27))
    {
      _vl = MMC_CAR(tmpMeta27);
      /* Pattern-matching assignment */
      tmpMeta28 = _vl;
      tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 1));
      tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
      tmp31 = mmc_unbox_integer(tmpMeta30);
      _var_lst = tmpMeta29;
      _var_type = tmp31  /* pattern as ty=Integer */;

      _currentVarIndices = omc_SimCodeUtilShared_addVarToArrayIndexMappings(threadData, _var_lst, _var_type, _currentVarIndices, _oVarToArrayIndexMapping, _oVarToIndexMapping ,&_oVarToArrayIndexMapping ,&_oVarToIndexMapping);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_oVarToIndexMapping) { *out_oVarToIndexMapping = _oVarToIndexMapping; }
  return _oVarToArrayIndexMapping;
}

DLLDirection
modelica_metatype omc_SimCodeUtilShared_createFunctions(threadData_t *threadData, modelica_metatype _inProgram, modelica_metatype _functionTree, modelica_metatype *out_outLibPaths, modelica_metatype *out_outIncludes, modelica_metatype *out_outIncludeDirs, modelica_metatype *out_outRecordDecls, modelica_metatype *out_outFunctions, modelica_metatype *out_outLiterals)
{
  modelica_metatype _outLibs = NULL;
  modelica_metatype _outLibPaths = NULL;
  modelica_metatype _outIncludes = NULL;
  modelica_metatype _outIncludeDirs = NULL;
  modelica_metatype _outRecordDecls = NULL;
  modelica_metatype _outFunctions = NULL;
  modelica_metatype _outLiterals = NULL;
  modelica_metatype _funcelems = NULL;
  modelica_metatype _lits = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outLibs has no default value.
  // _outLibPaths has no default value.
  // _outIncludes has no default value.
  // _outIncludeDirs has no default value.
  // _outRecordDecls has no default value.
  // _outFunctions has no default value.
  // _outLiterals has no default value.
  // _funcelems has no default value.
  // _lits has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          _funcelems = omc_DAEUtil_getFunctionList(threadData, _functionTree, 0 /* false */);

          _funcelems = omc_Inline_inlineCallsInFunctions(threadData, _funcelems, _OMC_LIT17);

          /* Pattern-matching tuple assignment */
          tmpMeta7 = omc_SimCodeUtilShared_simulationFindLiterals(threadData, _funcelems, &tmpMeta5);
          _funcelems = tmpMeta7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          _outLiterals = tmpMeta5;
          _lits = tmpMeta6;

          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _outFunctions = omc_SimCodeFunctionUtil_elaborateFunctions(threadData, _inProgram, _funcelems, tmpMeta8, _lits, tmpMeta9 ,&_outRecordDecls ,&_outIncludes ,&_outIncludeDirs ,&_outLibs ,&_outLibPaths);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT18, _OMC_LIT20);

          goto goto_1;
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      tmp2_done:
      (void)tmp3;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp2_done2;
      goto_1:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp3 < 2) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  if (out_outLibPaths) { *out_outLibPaths = _outLibPaths; }
  if (out_outIncludes) { *out_outIncludes = _outIncludes; }
  if (out_outIncludeDirs) { *out_outIncludeDirs = _outIncludeDirs; }
  if (out_outRecordDecls) { *out_outRecordDecls = _outRecordDecls; }
  if (out_outFunctions) { *out_outFunctions = _outFunctions; }
  if (out_outLiterals) { *out_outLiterals = _outLiterals; }
  return _outLibs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SimCodeUtilShared_simulationFindLiterals(threadData_t *threadData, modelica_metatype _fns, modelica_metatype *out_literals)
{
  modelica_metatype _ofns = NULL;
  modelica_metatype _literals = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _ofns has no default value.
  // _literals has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 0)), omc_HashTableExpToIndex_emptyHashTableSized(threadData, ((modelica_integer) 4013)), tmpMeta1);
  _ofns = omc_DAEUtil_traverseDAEFunctions(threadData, _fns, boxvar_SimCodeFunctionUtil_findLiteralsHelper, tmpMeta2 ,&_literals);
  _return: OMC_LABEL_UNUSED
  if (out_literals) { *out_literals = _literals; }
  return _ofns;
}

