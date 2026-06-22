#include "omc_simulation_settings.h"
#include "NFRestriction.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Variable %s in package %s is not constant."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,42,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(91)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "%s are deprecated in %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,24,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(398)),_OMC_LIT0,_OMC_LIT4,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Components"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,10,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Protected sections are not allowed in %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,41,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(397)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Initial algorithm sections are not allowed in %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,49,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(399)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "Algorithm sections are not allowed in %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,41,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(187)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Algorithm sections"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,18,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "Equations are not allowed in %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,32,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(167)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "Equation sections"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,17,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "block"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,5,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "class"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,5,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "clock"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,5,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "expandable connector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,20,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "connector"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,9,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "enumeration"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,11,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "ExternalObject"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,14,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "function"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,8,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,5,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "operator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,8,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "package"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,7,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "record"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,6,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "type"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,4,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "unknown"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,7,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,1,3) {&NFRestriction_BLOCK__desc,}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,1,4) {&NFRestriction_CLASS__desc,}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,1,5) {&NFRestriction_CLOCK__desc,}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,1,7) {&NFRestriction_ENUMERATION__desc,}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,1,9) {&NFRestriction_FUNCTION__desc,}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,10) {&NFRestriction_MODEL__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,12) {&NFRestriction_OPERATOR__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,1,11) {&NFRestriction_PACKAGE__desc,}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,1,15) {&NFRestriction_TYPE__desc,}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#include "util/modelica.h"

#include "NFRestriction_includes.h"



DLLDirection
void omc_NFRestriction_checkClass(threadData_t *threadData, modelica_metatype _node, modelica_metatype _restriction, modelica_integer _context)
{
  modelica_metatype _cdef = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _cdef has no default value.
  if(omc_NFInstContext_inRelaxed(threadData, _context))
  {
    goto _return;
  }

  _cdef = omc_SCodeUtil_getClassBody(threadData, omc_NFInstNode_InstNode_definition(threadData, _node));

  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _cdef;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,8) == 0) goto tmp2_end;
          
          /* Pattern matching succeeded */
          { /* match expression */
            modelica_metatype tmp7_1;
            tmp7_1 = _restriction;
            {
              int tmp7;
              {
                switch (MMC_SWITCH_CAST(valueConstructor(tmp7_1))) {
                case 4: {
                  
                  /* Pattern matching succeeded */
                  omc_NFRestriction_assertNoComponents(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 2))), _restriction);

                  omc_NFRestriction_assertNoEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), _restriction, 1 /* true */);

                  omc_NFRestriction_assertNoAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 6))), _restriction, 1 /* true */);
                  goto tmp6_done;
                }
                case 13: {
                  
                  /* Pattern matching succeeded */
                  omc_NFRestriction_assertNoProtected(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 2))), _restriction);

                  omc_NFRestriction_assertNoEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), _restriction, 0 /* false */);

                  omc_NFRestriction_assertNoAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 6))), _restriction, 0 /* false */);
                  goto tmp6_done;
                }
                case 15: {
                  
                  /* Pattern matching succeeded */
                  omc_NFRestriction_assertNoProtected(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 2))), _restriction);

                  omc_NFRestriction_assertNoEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), _restriction, 0 /* false */);

                  omc_NFRestriction_assertNoAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 6))), _restriction, 0 /* false */);
                  goto tmp6_done;
                }
                case 3: {
                  
                  /* Pattern matching succeeded */
                  goto tmp6_done;
                }
                case 9: {
                  
                  /* Pattern matching succeeded */
                  omc_NFRestriction_assertNoEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), _restriction, 0 /* false */);

                  omc_NFRestriction_assertNoInitialAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 6))), _restriction);
                  goto tmp6_done;
                }
                case 6: {
                  
                  /* Pattern matching succeeded */
                  omc_NFRestriction_assertNoProtected(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 2))), _restriction);

                  omc_NFRestriction_assertNoEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), _restriction, 0 /* false */);

                  omc_NFRestriction_assertNoAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 6))), _restriction, 0 /* false */);
                  goto tmp6_done;
                }
                case 11: {
                  
                  /* Pattern matching succeeded */
                  omc_NFRestriction_assertOnlyConstantComponents(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 2))), _node);

                  omc_NFRestriction_assertNoEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), _restriction, 0 /* false */);

                  omc_NFRestriction_assertNoAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 6))), _restriction, 0 /* false */);
                  goto tmp6_done;
                }
                case 12: {
                  
                  /* Pattern matching succeeded */
                  omc_NFRestriction_assertNoEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 4))), _restriction, 0 /* false */);

                  omc_NFRestriction_assertNoAlgorithms(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_cdef), 6))), _restriction, 0 /* false */);
                  goto tmp6_done;
                }
                default:
                tmp6_default: OMC_LABEL_UNUSED; {
                  
                  /* Pattern matching succeeded */
                  goto tmp6_done;
                }
                }
                goto tmp6_end;
                tmp6_end: ;
              }
              goto goto_5;
              goto_5:;
              goto goto_1;
              goto tmp6_done;
              tmp6_done:;
            }
          }
          ;
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
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
  return;
}
void boxptr_NFRestriction_checkClass(threadData_t *threadData, modelica_metatype _node, modelica_metatype _restriction, modelica_metatype _context)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_context);
  omc_NFRestriction_checkClass(threadData, _node, _restriction, tmp1);
  return;
}

DLLDirection
void omc_NFRestriction_assertOnlyFunctions(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _res)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = _elements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      if((!omc_SCodeUtil_isFunction(threadData, _e)))
      {
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFRestriction_assertOnlyConstantComponents(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _clsNode)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = _elements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp4_1;
        tmp4_1 = _e;
        {
          volatile mmc_switch_type tmp4;
          int tmp5;
          tmp4 = 0;
          for (; tmp4 < 2; tmp4++) {
            switch (MMC_SWITCH_CAST(tmp4)) {
            case 0: {
              modelica_metatype tmpMeta6;
              if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,8) == 0) goto tmp3_end;
              
              /* Pattern matching succeeded */
              /* Check guard condition after assignments */
              if (!(!omc_SCodeUtil_isConstant(threadData, omc_SCodeUtil_attrVariability(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 4))))))) goto tmp3_end;
              tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 2))), mmc_mk_cons(omc_NFInstNode_InstNode_name(threadData, _clsNode), MMC_REFSTRUCTLIT(mmc_nil)));
              omc_Error_addSourceMessage(threadData, _OMC_LIT3, tmpMeta6, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_e), 9))));
              goto goto_2;
              goto tmp3_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
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
      ;
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFRestriction_assertNoComponents(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _res)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = _elements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      if(omc_SCodeUtil_isComponent(threadData, _e))
      {
        tmpMeta2 = mmc_mk_cons(_OMC_LIT7, mmc_mk_cons(omc_NFRestriction_toString(threadData, _res), MMC_REFSTRUCTLIT(mmc_nil)));
        omc_Error_addSourceMessage(threadData, _OMC_LIT6, tmpMeta2, omc_SCodeUtil_elementInfo(threadData, _e));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFRestriction_assertNoProtected(threadData_t *threadData, modelica_metatype _elements, modelica_metatype _res)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _e;
    for (tmpMeta1 = _elements; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _e = MMC_CAR(tmpMeta1);
      if(omc_SCodeUtil_isElementProtected(threadData, _e))
      {
        tmpMeta2 = mmc_mk_cons(omc_NFRestriction_toString(threadData, _res), MMC_REFSTRUCTLIT(mmc_nil));
        omc_Error_addSourceMessage(threadData, _OMC_LIT9, tmpMeta2, omc_SCodeUtil_elementInfo(threadData, _e));

        MMC_THROW_INTERNAL();
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFRestriction_assertNoInitialAlgorithms(threadData_t *threadData, modelica_metatype _algs, modelica_metatype _res)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  {
    modelica_metatype _alg;
    for (tmpMeta1 = _algs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _alg = MMC_CAR(tmpMeta1);
      if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))))))
      {
        tmpMeta2 = mmc_mk_cons(omc_NFRestriction_toString(threadData, _res), MMC_REFSTRUCTLIT(mmc_nil));
        omc_Error_addSourceMessage(threadData, _OMC_LIT11, tmpMeta2, omc_SCodeUtil_getStatementInfo(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2))))));

        MMC_THROW_INTERNAL();
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_NFRestriction_assertNoAlgorithms(threadData_t *threadData, modelica_metatype _algorithms, modelica_metatype _initialAlgorithms, modelica_metatype _res, modelica_boolean _onlyDeprecated)
{
  modelica_metatype _alg_opt = NULL;
  modelica_metatype _alg = NULL;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _alg_opt = mmc_mk_none();
  // _alg has no default value.
  // _info has no default value.
  _alg_opt = omc_List_findOption(threadData, _algorithms, boxvar_SCodeUtil_isNonEmptyAlgorithm);

  if(isNone(_alg_opt))
  {
    _alg_opt = omc_List_findOption(threadData, _initialAlgorithms, boxvar_SCodeUtil_isNonEmptyAlgorithm);
  }

  if(isSome(_alg_opt))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _alg_opt;
    if (optionNone(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
    _alg = tmpMeta2;

    _info = omc_SCodeUtil_getStatementInfo(threadData, listHead((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_alg), 2)))));

    if(_onlyDeprecated)
    {
      tmpMeta3 = mmc_mk_cons(_OMC_LIT14, mmc_mk_cons(omc_NFRestriction_toString(threadData, _res), MMC_REFSTRUCTLIT(mmc_nil)));
      omc_Error_addSourceMessage(threadData, _OMC_LIT6, tmpMeta3, _info);

      goto _return;
    }
    else
    {
      tmpMeta4 = mmc_mk_cons(omc_NFRestriction_toString(threadData, _res), MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addSourceMessage(threadData, _OMC_LIT13, tmpMeta4, _info);

      MMC_THROW_INTERNAL();
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NFRestriction_assertNoAlgorithms(threadData_t *threadData, modelica_metatype _algorithms, modelica_metatype _initialAlgorithms, modelica_metatype _res, modelica_metatype _onlyDeprecated)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_onlyDeprecated);
  omc_NFRestriction_assertNoAlgorithms(threadData, _algorithms, _initialAlgorithms, _res, tmp1);
  return;
}

DLLDirection
void omc_NFRestriction_assertNoEquations(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype _res, modelica_boolean _onlyDeprecated)
{
  modelica_metatype _eq = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eq has no default value.
  if((listEmpty(_equations) && listEmpty(_initialEquations)))
  {
    goto _return;
  }

  _eq = listHead((listEmpty(_equations)?_initialEquations:_equations));

  if(_onlyDeprecated)
  {
    tmpMeta1 = mmc_mk_cons(_OMC_LIT17, mmc_mk_cons(omc_NFRestriction_toString(threadData, _res), MMC_REFSTRUCTLIT(mmc_nil)));
    omc_Error_addSourceMessage(threadData, _OMC_LIT6, tmpMeta1, omc_SCodeUtil_getEquationInfo(threadData, _eq));
  }
  else
  {
    tmpMeta2 = mmc_mk_cons(omc_NFRestriction_toString(threadData, _res), MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addSourceMessage(threadData, _OMC_LIT16, tmpMeta2, omc_SCodeUtil_getEquationInfo(threadData, _eq));

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_NFRestriction_assertNoEquations(threadData_t *threadData, modelica_metatype _equations, modelica_metatype _initialEquations, modelica_metatype _res, modelica_metatype _onlyDeprecated)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_onlyDeprecated);
  omc_NFRestriction_assertNoEquations(threadData, _equations, _initialEquations, _res, tmp1);
  return;
}

DLLDirection
modelica_string omc_NFRestriction_toString(threadData_t *threadData, modelica_metatype _res)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT18;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT19;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT20;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_res), 2))))?_OMC_LIT21:_OMC_LIT22);
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT23;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT24;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT25;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT26;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT27;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT28;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT29;
          goto tmp3_done;
        }
        case 14: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT29;
          goto tmp3_done;
        }
        case 15: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT30;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT31;
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
modelica_boolean omc_NFRestriction_isModel(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isModel;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isModel has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,0) == 0) goto tmp3_end;
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
  _isModel = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isModel;
}
modelica_metatype boxptr_NFRestriction_isModel(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isModel;
  modelica_metatype out_isModel;
  _isModel = omc_NFRestriction_isModel(threadData, _res);
  out_isModel = mmc_mk_icon(_isModel);
  return out_isModel;
}

DLLDirection
modelica_boolean omc_NFRestriction_isClock(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isClock;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isClock has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
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
  _isClock = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isClock;
}
modelica_metatype boxptr_NFRestriction_isClock(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isClock;
  modelica_metatype out_isClock;
  _isClock = omc_NFRestriction_isClock(threadData, _res);
  out_isClock = mmc_mk_icon(_isClock);
  return out_isClock;
}

DLLDirection
modelica_boolean omc_NFRestriction_isType(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isType;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isType has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,0) == 0) goto tmp3_end;
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
  _isType = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isType;
}
modelica_metatype boxptr_NFRestriction_isType(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isType;
  modelica_metatype out_isType;
  _isType = omc_NFRestriction_isType(threadData, _res);
  out_isType = mmc_mk_icon(_isType);
  return out_isType;
}

DLLDirection
modelica_boolean omc_NFRestriction_isOperator(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isOperator;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOperator has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,0) == 0) goto tmp3_end;
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
  _isOperator = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isOperator;
}
modelica_metatype boxptr_NFRestriction_isOperator(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isOperator;
  modelica_metatype out_isOperator;
  _isOperator = omc_NFRestriction_isOperator(threadData, _res);
  out_isOperator = mmc_mk_icon(_isOperator);
  return out_isOperator;
}

DLLDirection
modelica_boolean omc_NFRestriction_isOperatorRecord(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isOpRecord;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOpRecord has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_res), 2))));
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
  _isOpRecord = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isOpRecord;
}
modelica_metatype boxptr_NFRestriction_isOperatorRecord(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isOpRecord;
  modelica_metatype out_isOpRecord;
  _isOpRecord = omc_NFRestriction_isOperatorRecord(threadData, _res);
  out_isOpRecord = mmc_mk_icon(_isOpRecord);
  return out_isOpRecord;
}

DLLDirection
modelica_metatype omc_NFRestriction_setExternalRecord(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fres)
{
  modelica_metatype _res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _res = __omcQ_24in_5Fres;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _res;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,10,2) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          tmp6 = mmc_unbox_integer(tmpMeta5);
          if (0 /* false */ != tmp6) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(4));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_res), 4*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = mmc_mk_boolean(1 /* true */);
          _res = tmpMeta7;
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
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
  return _res;
}

DLLDirection
modelica_boolean omc_NFRestriction_isExternalRecord(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isExtRecord;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isExtRecord has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_res), 3))));
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
  _isExtRecord = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isExtRecord;
}
modelica_metatype boxptr_NFRestriction_isExternalRecord(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isExtRecord;
  modelica_metatype out_isExtRecord;
  _isExtRecord = omc_NFRestriction_isExternalRecord(threadData, _res);
  out_isExtRecord = mmc_mk_icon(_isExtRecord);
  return out_isExtRecord;
}

DLLDirection
modelica_boolean omc_NFRestriction_isRecord(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isRecord;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isRecord has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,2) == 0) goto tmp3_end;
          
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
  _isRecord = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isRecord;
}
modelica_metatype boxptr_NFRestriction_isRecord(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isRecord;
  modelica_metatype out_isRecord;
  _isRecord = omc_NFRestriction_isRecord(threadData, _res);
  out_isRecord = mmc_mk_icon(_isRecord);
  return out_isRecord;
}

DLLDirection
modelica_boolean omc_NFRestriction_isRecordConstructor(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isConstructor;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isConstructor has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,11,0) == 0) goto tmp3_end;
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
  _isConstructor = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isConstructor;
}
modelica_metatype boxptr_NFRestriction_isRecordConstructor(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isConstructor;
  modelica_metatype out_isConstructor;
  _isConstructor = omc_NFRestriction_isRecordConstructor(threadData, _res);
  out_isConstructor = mmc_mk_icon(_isConstructor);
  return out_isConstructor;
}

DLLDirection
modelica_boolean omc_NFRestriction_isFunction(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isFunction;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isFunction has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,0) == 0) goto tmp3_end;
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
  _isFunction = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isFunction;
}
modelica_metatype boxptr_NFRestriction_isFunction(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isFunction;
  modelica_metatype out_isFunction;
  _isFunction = omc_NFRestriction_isFunction(threadData, _res);
  out_isFunction = mmc_mk_icon(_isFunction);
  return out_isFunction;
}

DLLDirection
modelica_boolean omc_NFRestriction_isExternalObject(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isExternalObject;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isExternalObject has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,0) == 0) goto tmp3_end;
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
  _isExternalObject = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isExternalObject;
}
modelica_metatype boxptr_NFRestriction_isExternalObject(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isExternalObject;
  modelica_metatype out_isExternalObject;
  _isExternalObject = omc_NFRestriction_isExternalObject(threadData, _res);
  out_isExternalObject = mmc_mk_icon(_isExternalObject);
  return out_isExternalObject;
}

DLLDirection
modelica_boolean omc_NFRestriction_isNonexpandableConnector(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isNonexpandable;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isNonexpandable has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_res), 2)))));
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
  _isNonexpandable = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isNonexpandable;
}
modelica_metatype boxptr_NFRestriction_isNonexpandableConnector(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isNonexpandable;
  modelica_metatype out_isNonexpandable;
  _isNonexpandable = omc_NFRestriction_isNonexpandableConnector(threadData, _res);
  out_isNonexpandable = mmc_mk_icon(_isNonexpandable);
  return out_isNonexpandable;
}

DLLDirection
modelica_boolean omc_NFRestriction_isExpandableConnector(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isConnector;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isConnector has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_res), 2))));
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
  _isConnector = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isConnector;
}
modelica_metatype boxptr_NFRestriction_isExpandableConnector(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isConnector;
  modelica_metatype out_isConnector;
  _isConnector = omc_NFRestriction_isExpandableConnector(threadData, _res);
  out_isConnector = mmc_mk_icon(_isConnector);
  return out_isConnector;
}

DLLDirection
modelica_boolean omc_NFRestriction_isConnector(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isConnector;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isConnector has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
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
  _isConnector = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isConnector;
}
modelica_metatype boxptr_NFRestriction_isConnector(threadData_t *threadData, modelica_metatype _res)
{
  modelica_boolean _isConnector;
  modelica_metatype out_isConnector;
  _isConnector = omc_NFRestriction_isConnector(threadData, _res);
  out_isConnector = mmc_mk_icon(_isConnector);
  return out_isConnector;
}

DLLDirection
modelica_metatype omc_NFRestriction_toDAE(threadData_t *threadData, modelica_metatype _res, modelica_metatype _path)
{
  modelica_metatype _state = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _state has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _res;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(7, &ClassInf_State_BLOCK__desc, _path);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box2(18, &ClassInf_State_TYPE__CLOCK__desc, _path);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box3(8, &ClassInf_State_CONNECTOR__desc, _path, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_res), 2))));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box2(12, &ClassInf_State_ENUMERATION__desc, _path);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box2(20, &ClassInf_State_EXTERNAL__OBJ__desc, _path);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box3(11, &ClassInf_State_FUNCTION__desc, _path, mmc_mk_boolean(0 /* false */));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(5, &ClassInf_State_MODEL__desc, _path);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box3(11, &ClassInf_State_FUNCTION__desc, _path, mmc_mk_boolean(0 /* false */));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box2(10, &ClassInf_State_PACKAGE__desc, _path);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box2(6, &ClassInf_State_RECORD__desc, _path);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta15;
          
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box2(6, &ClassInf_State_RECORD__desc, _path);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_box2(9, &ClassInf_State_TYPE__desc, _path);
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta17;
          
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_box2(3, &ClassInf_State_UNKNOWN__desc, _path);
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
  _state = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _state;
}

DLLDirection
modelica_metatype omc_NFRestriction_fromSCode(threadData_t *threadData, modelica_metatype _sres)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _sres;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 7: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT33;
          goto tmp3_done;
        }
        case 19: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT34;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box2(6, &NFRestriction_CONNECTOR__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sres), 2))));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 13: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT35;
          goto tmp3_done;
        }
        case 12: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT36;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT37;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT38;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT39;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(13, &NFRestriction_RECORD__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sres), 2))), mmc_mk_boolean(0 /* false */));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT40;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _OMC_LIT37;
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
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _res;
}

