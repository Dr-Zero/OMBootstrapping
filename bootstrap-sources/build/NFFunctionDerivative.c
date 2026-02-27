#include "omc_simulation_settings.h"
#include "NFFunctionDerivative.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "'%s' is not an input of function '%s'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,38,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(339)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,1,13) {&NFType_UNKNOWN__desc,}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,33) {&NFExpression_EMPTY__desc,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Duplicate modification of element %s on %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,43,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(103)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "derivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,10,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "'%s' is not a valid function %s attribute."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,42,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(338)),_OMC_LIT0,_OMC_LIT12,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,0,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data " = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,3,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,10,3) {&SCodeDump_SCodeDumpOptions_OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "order"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,5,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "noDerivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,12,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "zeroDerivative"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,14,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,2,3) {&NFExpression_INTEGER__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "Derivative annotation for function '%s' does not specify a derivative function."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,79,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(337)),_OMC_LIT0,_OMC_LIT12,_OMC_LIT24}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "NFFunctionDerivative.instDerivativeMod got invalid modifier"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,59,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NFFrontEnd/NFFunctionDerivative.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,87,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT28_6,1.771514395e9);
#define _OMC_LIT28_6 MMC_REFREALLIT(_OMC_LIT_STRUCT28_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT27,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(275)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(275)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT28_6}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,4) {&SCode_Final_NOT__FINAL__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,1,4) {&SCode_Each_NOT__EACH__desc,}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,1,3) {&DAE_derivativeCond_ZERO__DERIVATIVE__desc,}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,2,3) {&DAE_Exp_ICONST__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(99))}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,4) {&DAE_derivativeCond_NO__DERIVATIVE__desc,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,1,3) {&NFType_INTEGER__desc,}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Type mismatch in binding %s = %s, expected subtype of %s, got type %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,70,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(135)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "Integer"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,7,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Component %s of variability %s has binding %s of higher variability %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,71,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(130)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#include "util/modelica.h"

#include "NFFunctionDerivative_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFFunctionDerivative_addLowerOrderDerivative2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ffn, modelica_metatype _lowerDerNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_addLowerOrderDerivative2,2,0) {(void*) boxptr_NFFunctionDerivative_addLowerOrderDerivative2,0}};
#define boxvar_NFFunctionDerivative_addLowerOrderDerivative2 MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_addLowerOrderDerivative2)
PROTECTED_FUNCTION_STATIC void omc_NFFunctionDerivative_addLowerOrderDerivative(threadData_t *threadData, modelica_metatype _fnNode, modelica_metatype _lowerDerNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_addLowerOrderDerivative,2,0) {(void*) boxptr_NFFunctionDerivative_addLowerOrderDerivative,0}};
#define boxvar_NFFunctionDerivative_addLowerOrderDerivative MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_addLowerOrderDerivative)
PROTECTED_FUNCTION_STATIC modelica_integer omc_NFFunctionDerivative_getInputIndex(threadData_t *threadData, modelica_string _name, modelica_metatype _fn, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFFunctionDerivative_getInputIndex(threadData_t *threadData, modelica_metatype _name, modelica_metatype _fn, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_getInputIndex,2,0) {(void*) boxptr_NFFunctionDerivative_getInputIndex,0}};
#define boxvar_NFFunctionDerivative_getInputIndex MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_getInputIndex)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFFunctionDerivative_getDerivativeAttributes(threadData_t *threadData, modelica_metatype _attrs, modelica_metatype _fn, modelica_metatype _scope, modelica_metatype _info, modelica_metatype *out_conditions);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_getDerivativeAttributes,2,0) {(void*) boxptr_NFFunctionDerivative_getDerivativeAttributes,0}};
#define boxvar_NFFunctionDerivative_getDerivativeAttributes MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_getDerivativeAttributes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFFunctionDerivative_instDerivativeMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _fnNode, modelica_metatype _fn, modelica_metatype _scope, modelica_metatype __omcQ_24in_5FfnDers);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_instDerivativeMod,2,0) {(void*) boxptr_NFFunctionDerivative_instDerivativeMod,0}};
#define boxvar_NFFunctionDerivative_instDerivativeMod MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_instDerivativeMod)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFFunctionDerivative_getDerivativeAnnotations(threadData_t *threadData, modelica_metatype _definition);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_getDerivativeAnnotations,2,0) {(void*) boxptr_NFFunctionDerivative_getDerivativeAnnotations,0}};
#define boxvar_NFFunctionDerivative_getDerivativeAnnotations MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_getDerivativeAnnotations)
PROTECTED_FUNCTION_STATIC modelica_string omc_NFFunctionDerivative_conditionToString(threadData_t *threadData, modelica_integer _condition);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFFunctionDerivative_conditionToString(threadData_t *threadData, modelica_metatype _condition);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_conditionToString,2,0) {(void*) boxptr_NFFunctionDerivative_conditionToString,0}};
#define boxvar_NFFunctionDerivative_conditionToString MMC_REFSTRUCTLIT(boxvar_lit_NFFunctionDerivative_conditionToString)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFFunctionDerivative_addLowerOrderDerivative2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ffn, modelica_metatype _lowerDerNode)
{
  modelica_metatype _fn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _fn = __omcQ_24in_5Ffn;
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp3;
    modelica_metatype tmpMeta4;
    modelica_metatype tmpMeta5;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp12;
    modelica_metatype _fn_der_loopVar = 0;
    modelica_metatype _fn_der;
    _fn_der_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 10)));
    tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta4; /* defaultValue */
    tmp3 = &__omcQ_24tmpVar3;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_fn_der_loopVar)) {
        _fn_der = MMC_CAR(_fn_der_loopVar);
        _fn_der_loopVar = MMC_CDR(_fn_der_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        { /* match expression */
          modelica_metatype tmp8_1;
          tmp8_1 = _fn_der;
          {
            volatile mmc_switch_type tmp8;
            int tmp9;
            tmp8 = 0;
            for (; tmp8 < 1; tmp8++) {
              switch (MMC_SWITCH_CAST(tmp8)) {
              case 0: {
                modelica_metatype tmpMeta10;
                modelica_metatype tmpMeta11;
                if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,5) == 0) goto tmp7_end;
                
                /* Pattern matching succeeded */
                tmpMeta11 = mmc_mk_cons(_lowerDerNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn_der), 6))));
                tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_fn_der), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[6] = tmpMeta11;
                _fn_der = tmpMeta10;
                tmpMeta5 = _fn_der;
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
        }__omcQ_24tmpVar2 = tmpMeta5;
        *tmp3 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp3 = &MMC_CDR(*tmp3);
      } else if (tmp12 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp3 = mmc_mk_nil();
    tmpMeta2 = __omcQ_24tmpVar3;
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(15));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_fn), 15*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[10] = tmpMeta2;
  _fn = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _fn;
}

static modelica_metatype closure0_NFFunctionDerivative_addLowerOrderDerivative2(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_fn)
{
  modelica_metatype lowerDerNode = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NFFunctionDerivative_addLowerOrderDerivative2(thData, $in_fn, lowerDerNode);
}
PROTECTED_FUNCTION_STATIC void omc_NFFunctionDerivative_addLowerOrderDerivative(threadData_t *threadData, modelica_metatype _fnNode, modelica_metatype _lowerDerNode)
{
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = mmc_mk_box1(0, _lowerDerNode);
  omc_NFFunction_Function_mapCachedFuncs(threadData, _fnNode, (modelica_fnptr) mmc_mk_box2(0,closure0_NFFunctionDerivative_addLowerOrderDerivative2,tmpMeta1));
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_NFFunctionDerivative_getInputIndex(threadData_t *threadData, modelica_string _name, modelica_metatype _fn, modelica_metatype _info)
{
  modelica_integer _index;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _index = ((modelica_integer) 1);
  {
    modelica_metatype _i;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 4))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _i = MMC_CAR(tmpMeta1);
      if((stringEqual(omc_NFInstNode_InstNode_name(threadData, _i), _name)))
      {
        goto _return;
      }

      _index = ((modelica_integer) 1) + _index;
    }
  }

  tmpMeta3 = mmc_mk_cons(_name, mmc_mk_cons(omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_name(threadData, _fn), _OMC_LIT5, 1 /* true */, 0 /* false */), MMC_REFSTRUCTLIT(mmc_nil)));
  omc_Error_addSourceMessage(threadData, _OMC_LIT4, tmpMeta3, _info);

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _index;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFFunctionDerivative_getInputIndex(threadData_t *threadData, modelica_metatype _name, modelica_metatype _fn, modelica_metatype _info)
{
  modelica_integer _index;
  modelica_metatype out_index;
  _index = omc_NFFunctionDerivative_getInputIndex(threadData, _name, _fn, _info);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFFunctionDerivative_getDerivativeAttributes(threadData_t *threadData, modelica_metatype _attrs, modelica_metatype _fn, modelica_metatype _scope, modelica_metatype _info, modelica_metatype *out_conditions)
{
  modelica_metatype _order = NULL;
  modelica_metatype _conditions = NULL;
  modelica_metatype tmpMeta1;
  modelica_string _id = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _aexp = NULL;
  modelica_metatype _acref = NULL;
  modelica_integer _index;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta30;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _order = _OMC_LIT7;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _conditions = tmpMeta1;
  // _id has no default value.
  // _mod has no default value.
  // _aexp has no default value.
  // _acref has no default value.
  // _index has no default value.
  {
    modelica_metatype _attr;
    for (tmpMeta2 = _attrs; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _attr = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _attr;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 3));
      _id = tmpMeta4;
      _mod = tmpMeta5;

      { /* match expression */
        modelica_string tmp8_1;modelica_metatype tmp8_2;
        tmp8_1 = _id;
        tmp8_2 = _mod;
        {
          volatile mmc_switch_type tmp8;
          int tmp9;
          tmp8 = 0;
          for (; tmp8 < 4; tmp8++) {
            switch (MMC_SWITCH_CAST(tmp8)) {
            case 0: {
              modelica_metatype tmpMeta10;
              modelica_metatype tmpMeta11;
              modelica_metatype tmpMeta12;
              if (5 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT19), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
              if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,6) == 0) goto tmp7_end;
              tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
              if (optionNone(tmpMeta10)) goto tmp7_end;
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
              
              _aexp = tmpMeta11;
              /* Pattern matching succeeded */
              if((!omc_NFExpression_isEmpty(threadData, _order)))
              {
                tmpMeta12 = mmc_mk_cons(_id, mmc_mk_cons(_OMC_LIT11, MMC_REFSTRUCTLIT(mmc_nil)));
                omc_Error_addSourceMessage(threadData, _OMC_LIT10, tmpMeta12, _info);
              }

              _order = omc_NFInst_instExp(threadData, _aexp, _scope, ((modelica_integer) 0), _info);
              goto tmp7_done;
            }
            case 1: {
              modelica_metatype tmpMeta13;
              modelica_metatype tmpMeta14;
              modelica_metatype tmpMeta15;
              modelica_metatype tmpMeta16;
              modelica_metatype tmpMeta17;
              modelica_metatype tmpMeta18;
              if (12 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT20), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
              if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,6) == 0) goto tmp7_end;
              tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
              if (optionNone(tmpMeta13)) goto tmp7_end;
              tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 1));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,2,1) == 0) goto tmp7_end;
              tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta15,2,2) == 0) goto tmp7_end;
              tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
              
              _id = tmpMeta16;
              /* Pattern matching succeeded */
              _index = omc_NFFunctionDerivative_getInputIndex(threadData, _id, _fn, _info);

              tmpMeta18 = mmc_mk_box3(0, mmc_mk_integer(_index), _id, mmc_mk_integer(2));
              tmpMeta17 = mmc_mk_cons(tmpMeta18, _conditions);
              _conditions = tmpMeta17;
              goto tmp7_done;
            }
            case 2: {
              modelica_metatype tmpMeta19;
              modelica_metatype tmpMeta20;
              modelica_metatype tmpMeta21;
              modelica_metatype tmpMeta22;
              modelica_metatype tmpMeta23;
              modelica_metatype tmpMeta24;
              if (14 != MMC_STRLEN(tmp8_1) || strcmp(MMC_STRINGDATA(_OMC_LIT21), MMC_STRINGDATA(tmp8_1)) != 0) goto tmp7_end;
              if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,6) == 0) goto tmp7_end;
              tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
              if (optionNone(tmpMeta19)) goto tmp7_end;
              tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 1));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,2,1) == 0) goto tmp7_end;
              tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,2,2) == 0) goto tmp7_end;
              tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
              
              _id = tmpMeta22;
              /* Pattern matching succeeded */
              _index = omc_NFFunctionDerivative_getInputIndex(threadData, _id, _fn, _info);

              tmpMeta24 = mmc_mk_box3(0, mmc_mk_integer(_index), _id, mmc_mk_integer(1));
              tmpMeta23 = mmc_mk_cons(tmpMeta24, _conditions);
              _conditions = tmpMeta23;
              goto tmp7_done;
            }
            case 3: {
              modelica_metatype tmpMeta25;
              modelica_metatype tmpMeta26;
              modelica_boolean tmp27;
              modelica_string tmp28;
              modelica_metatype tmpMeta29;
              
              /* Pattern matching succeeded */
              tmp27 = (modelica_boolean)omc_SCodeUtil_isEmptyMod(threadData, _mod);
              if(tmp27)
              {
                tmp28 = _OMC_LIT16;
              }
              else
              {
                tmpMeta26 = stringAppend(_OMC_LIT17,omc_SCodeDump_printModStr(threadData, _mod, _OMC_LIT18));
                tmp28 = tmpMeta26;
              }
              tmpMeta29 = stringAppend(_id,tmp28);
              tmpMeta25 = mmc_mk_cons(tmpMeta29, mmc_mk_cons(_OMC_LIT11, MMC_REFSTRUCTLIT(mmc_nil)));
              omc_Error_addStrictMessage(threadData, _OMC_LIT15, tmpMeta25, _info);
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
      ;
    }
  }

  if(omc_NFExpression_isEmpty(threadData, _order))
  {
    _order = _OMC_LIT22;
  }
  _return: OMC_LABEL_UNUSED
  if (out_conditions) { *out_conditions = _conditions; }
  return _order;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFFunctionDerivative_instDerivativeMod(threadData_t *threadData, modelica_metatype _mod, modelica_metatype _fnNode, modelica_metatype _fn, modelica_metatype _scope, modelica_metatype __omcQ_24in_5FfnDers)
{
  modelica_metatype _fnDers = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _fnDers = __omcQ_24in_5FfnDers;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _mod;
    {
      modelica_metatype _attrs = NULL;
      modelica_metatype _acref = NULL;
      modelica_metatype _der_node = NULL;
      modelica_metatype _order = NULL;
      modelica_metatype _conds = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _attrs has no default value.
      // _acref has no default value.
      // _der_node has no default value.
      // _order has no default value.
      // _conds has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,2,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          
          _attrs = tmpMeta6;
          _acref = tmpMeta9;
          /* Pattern matching succeeded */
          omc_NFFunction_Function_instFunction(threadData, _acref, _scope, ((modelica_integer) 0), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 7))) ,&_der_node, NULL);

          omc_NFFunctionDerivative_addLowerOrderDerivative(threadData, _der_node, _fnNode);

          _order = omc_NFFunctionDerivative_getDerivativeAttributes(threadData, _attrs, _fn, _fnNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 7))) ,&_conds);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box6(3, &NFFunctionDerivative_FUNCTION__DER__desc, _der_node, _fnNode, _order, _conds, tmpMeta11);
          tmpMeta10 = mmc_mk_cons(tmpMeta12, _fnDers);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,6) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_cons(omc_AbsynUtil_pathString(threadData, omc_NFFunction_Function_name(threadData, _fn), _OMC_LIT5, 1 /* true */, 0 /* false */), MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addStrictMessage(threadData, _OMC_LIT25, tmpMeta13, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_mod), 7))));
          tmpMeta1 = _fnDers;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_assertion(threadData, 0 /* false */, _OMC_LIT26, _OMC_LIT28);
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
  _fnDers = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _fnDers;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NFFunctionDerivative_getDerivativeAnnotations(threadData_t *threadData, modelica_metatype _definition)
{
  modelica_metatype _derMods = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _derMods has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _definition;
    {
      modelica_metatype _ann = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _ann has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,8) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          
          _ann = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_SCodeUtil_lookupAnnotations(threadData, _ann, _OMC_LIT11);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
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
  _derMods = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _derMods;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_NFFunctionDerivative_conditionToString(threadData_t *threadData, modelica_integer _condition)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_condition;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 2: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT20;
          goto tmp3_done;
        }
        case 1: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT21;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_string tmp5;
          const char* tmp6[2] = {"ZERO_DERIVATIVE", "NO_DERIVATIVE"};
          
          /* Pattern matching succeeded */
          tmp5 = enum_to_modelica_string((modelica_integer)_condition, tmp6, ((modelica_integer) 0), 1 /* true */);
          tmp1 = tmp5;
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NFFunctionDerivative_conditionToString(threadData_t *threadData, modelica_metatype _condition)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_condition);
  _str = omc_NFFunctionDerivative_conditionToString(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_boolean omc_NFFunctionDerivative_perfectFit(threadData_t *threadData, modelica_metatype _fnDer, modelica_metatype _interface_map)
{
  modelica_boolean _b;
  modelica_string _name = NULL;
  modelica_integer _cond;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _b = 1 /* true */;
  // _name has no default value.
  // _cond has no default value.
  {
    modelica_metatype _condition;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 5))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _condition = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _condition;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
      tmp5 = mmc_unbox_integer(tmpMeta4);
      _name = tmpMeta3;
      _cond = tmp5  /* pattern as ty=enumeration(ZERO_DERIVATIVE, NO_DERIVATIVE) */;

      if((((modelica_integer)_cond == 1) && (!omc_UnorderedMap_contains(threadData, _name, _interface_map))))
      {
        _b = 0 /* false */;

        goto _return;
      }
    }
  }

  {
    modelica_metatype _condition;
    for (tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 5))); !listEmpty(tmpMeta7); tmpMeta7=MMC_CDR(tmpMeta7))
    {
      _condition = MMC_CAR(tmpMeta7);
      /* Pattern-matching assignment */
      tmpMeta8 = _condition;
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
      _name = tmpMeta9;

      omc_UnorderedMap_add(threadData, _name, mmc_mk_boolean(1 /* true */), _interface_map);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NFFunctionDerivative_perfectFit(threadData_t *threadData, modelica_metatype _fnDer, modelica_metatype _interface_map)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NFFunctionDerivative_perfectFit(threadData, _fnDer, _interface_map);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_NFFunctionDerivative_toSubMod(threadData_t *threadData, modelica_metatype _fnDer)
{
  modelica_metatype _subMod = NULL;
  modelica_metatype _tpl = NULL;
  modelica_integer _condition;
  modelica_string _id = NULL;
  modelica_metatype _mod = NULL;
  modelica_metatype _orderMod = NULL;
  modelica_metatype _subMods = NULL;
  modelica_integer _order;
  modelica_metatype _info = NULL;
  modelica_metatype _func = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _subMod has no default value.
  // _tpl has no default value.
  // _condition has no default value.
  // _id has no default value.
  // _mod has no default value.
  // _orderMod has no default value.
  // _subMods has no default value.
  // _order has no default value.
  // _info has no default value.
  // _func has no default value.
  _info = omc_NFInstNode_InstNode_info(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 3))));

  /* Pattern-matching assignment */
  tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 4)));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _order = tmp3  /* pattern as ty=Integer */;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box2(3, &Absyn_Exp_INTEGER__desc, mmc_mk_integer(_order));
  tmpMeta6 = mmc_mk_box7(3, &SCode_Mod_MOD__desc, _OMC_LIT29, _OMC_LIT30, tmpMeta4, mmc_mk_some(tmpMeta5), mmc_mk_none(), _info);
  tmpMeta7 = mmc_mk_box3(3, &SCode_SubMod_NAMEMOD__desc, _OMC_LIT19, tmpMeta6);
  _orderMod = tmpMeta7;

  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _subMods = tmpMeta8;

  {
    modelica_metatype _tpl;
    for (tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 5))); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
    {
      _tpl = MMC_CAR(tmpMeta9);
      /* Pattern-matching assignment */
      tmpMeta10 = _tpl;
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
      tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
      tmp13 = mmc_unbox_integer(tmpMeta12);
      _id = tmpMeta11;
      _condition = tmp13  /* pattern as ty=enumeration(ZERO_DERIVATIVE, NO_DERIVATIVE) */;

      tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
      tmpMeta17 = mmc_mk_box3(5, &Absyn_ComponentRef_CREF__IDENT__desc, _id, tmpMeta16);
      tmpMeta18 = mmc_mk_box2(5, &Absyn_Exp_CREF__desc, tmpMeta17);
      tmpMeta19 = mmc_mk_box7(3, &SCode_Mod_MOD__desc, _OMC_LIT29, _OMC_LIT30, tmpMeta15, mmc_mk_some(tmpMeta18), mmc_mk_none(), _info);
      tmpMeta20 = mmc_mk_box3(3, &SCode_SubMod_NAMEMOD__desc, omc_NFFunctionDerivative_conditionToString(threadData, (modelica_integer)_condition), tmpMeta19);
      tmpMeta14 = mmc_mk_cons(tmpMeta20, _subMods);
      _subMods = tmpMeta14;
    }
  }

  _func = listHead(omc_NFFunction_Function_getCachedFuncs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 2)))));

  tmpMeta22 = mmc_mk_cons(_orderMod, _subMods);
  tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta24 = mmc_mk_box3(5, &Absyn_ComponentRef_CREF__IDENT__desc, omc_AbsynUtil_pathString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _OMC_LIT5, 1 /* true */, 0 /* false */), tmpMeta23);
  tmpMeta25 = mmc_mk_box2(5, &Absyn_Exp_CREF__desc, tmpMeta24);
  tmpMeta26 = mmc_mk_box7(3, &SCode_Mod_MOD__desc, _OMC_LIT29, _OMC_LIT30, tmpMeta22, mmc_mk_some(tmpMeta25), mmc_mk_none(), _info);
  _mod = tmpMeta26;

  tmpMeta27 = mmc_mk_box3(3, &SCode_SubMod_NAMEMOD__desc, _OMC_LIT11, _mod);
  _subMod = tmpMeta27;
  _return: OMC_LABEL_UNUSED
  return _subMod;
}

DLLDirection
modelica_metatype omc_NFFunctionDerivative_conditionToDAE(threadData_t *threadData, modelica_metatype _cond)
{
  modelica_metatype _daeCond = NULL;
  modelica_integer _idx;
  modelica_integer _c;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _daeCond has no default value.
  // _idx has no default value.
  // _c has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _cond;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _idx = tmp3  /* pattern as ty=Integer */;
  _c = tmp5  /* pattern as ty=enumeration(ZERO_DERIVATIVE, NO_DERIVATIVE) */;

  { /* match expression */
    modelica_integer tmp9_1;
    tmp9_1 = (modelica_integer)_c;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 2; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          modelica_metatype tmpMeta11;
          if (1 != tmp9_1) goto tmp8_end;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box2(0, mmc_mk_integer(_idx), _OMC_LIT31);
          tmpMeta6 = tmpMeta11;
          goto tmp8_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          if (2 != tmp9_1) goto tmp8_end;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(0, mmc_mk_integer(_idx), _OMC_LIT33);
          tmpMeta6 = tmpMeta12;
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _daeCond = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _daeCond;
}

DLLDirection
modelica_metatype omc_NFFunctionDerivative_toDAE(threadData_t *threadData, modelica_metatype _fnDer)
{
  modelica_metatype _derDef = NULL;
  modelica_integer _order;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _derDef has no default value.
  // _order has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 4)));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,0,1) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _order = tmp3  /* pattern as ty=Integer */;

  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp7;
    modelica_metatype _c_loopVar = 0;
    modelica_metatype _c;
    _c_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 5)));
    tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta6; /* defaultValue */
    tmp5 = &__omcQ_24tmpVar5;
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_c_loopVar)) {
        _c = MMC_CAR(_c_loopVar);
        _c_loopVar = MMC_CDR(_c_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        __omcQ_24tmpVar4 = omc_NFFunctionDerivative_conditionToDAE(threadData, _c);
        *tmp5 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp5 = &MMC_CDR(*tmp5);
      } else if (tmp7 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp5 = mmc_mk_nil();
    tmpMeta4 = __omcQ_24tmpVar5;
  }
  {
    modelica_metatype __omcQ_24tmpVar7;
    modelica_metatype* tmp9;
    modelica_metatype tmpMeta10;
    modelica_metatype __omcQ_24tmpVar6;
    modelica_integer tmp11;
    modelica_metatype _fn_loopVar = 0;
    modelica_metatype _fn;
    _fn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 6)));
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar7 = tmpMeta10; /* defaultValue */
    tmp9 = &__omcQ_24tmpVar7;
    while(1) {
      tmp11 = 1;
      if (!listEmpty(_fn_loopVar)) {
        _fn = MMC_CAR(_fn_loopVar);
        _fn_loopVar = MMC_CDR(_fn_loopVar);
        tmp11--;
      }
      if (tmp11 == 0) {
        __omcQ_24tmpVar6 = omc_NFFunction_Function_name(threadData, listHead(omc_NFFunction_Function_getCachedFuncs(threadData, _fn)));
        *tmp9 = mmc_mk_cons(__omcQ_24tmpVar6,0);
        tmp9 = &MMC_CDR(*tmp9);
      } else if (tmp11 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp9 = mmc_mk_nil();
    tmpMeta8 = __omcQ_24tmpVar7;
  }
  tmpMeta12 = mmc_mk_box7(5, &DAE_FunctionDefinition_FUNCTION__DER__MAPPER__desc, omc_NFFunction_Function_name(threadData, listHead(omc_NFFunction_Function_getCachedFuncs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 3)))))), omc_NFFunction_Function_name(threadData, listHead(omc_NFFunction_Function_getCachedFuncs(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 2)))))), mmc_mk_integer(_order), tmpMeta4, mmc_mk_none(), tmpMeta8);
  _derDef = tmpMeta12;
  _return: OMC_LABEL_UNUSED
  return _derDef;
}

DLLDirection
void omc_NFFunctionDerivative_typeDerivative(threadData_t *threadData, modelica_metatype _fnDer)
{
  modelica_integer _mk;
  modelica_metatype _order = NULL;
  modelica_metatype _order_ty = NULL;
  modelica_integer _var;
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mk has no default value.
  // _order has no default value.
  // _order_ty has no default value.
  // _var has no default value.
  // _info has no default value.
  omc_NFFunction_Function_typeNodeCache(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 2))), ((modelica_integer) 16));

  _info = omc_NFInstNode_InstNode_info(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 3))));

  _order = omc_NFTyping_typeExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fnDer), 4))), ((modelica_integer) 16), _info, 0 /* false */ ,&_order_ty ,&_var, NULL);

  _order = omc_NFTypeCheck_matchTypes(threadData, _order_ty, _OMC_LIT34, _order, ((modelica_integer) 0) ,NULL ,&_mk);

  if(omc_NFTypeCheck_isIncompatibleMatch(threadData, (modelica_integer)_mk))
  {
    tmpMeta1 = mmc_mk_cons(_OMC_LIT19, mmc_mk_cons(omc_NFExpression_toString(threadData, _order), mmc_mk_cons(_OMC_LIT38, mmc_mk_cons(omc_NFType_toString(threadData, _order_ty), MMC_REFSTRUCTLIT(mmc_nil)))));
    omc_Error_addSourceMessage(threadData, _OMC_LIT37, tmpMeta1, _info);

    MMC_THROW_INTERNAL();
  }

  if(((modelica_integer)_var > 1))
  {
    tmpMeta2 = mmc_mk_cons(_OMC_LIT19, mmc_mk_cons(omc_NFPrefixes_variabilityString(threadData, 1), mmc_mk_cons(omc_NFExpression_toString(threadData, _order), mmc_mk_cons(omc_NFPrefixes_variabilityString(threadData, (modelica_integer)_var), MMC_REFSTRUCTLIT(mmc_nil)))));
    omc_Error_addSourceMessage(threadData, _OMC_LIT41, tmpMeta2, _info);

    MMC_THROW_INTERNAL();
  }

  _order = omc_NFCeval_evalExp(threadData, _order, omc_NFCeval_EvalTarget_new(threadData, _info, ((modelica_integer) 0), mmc_mk_none()));
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_NFFunctionDerivative_instDerivatives(threadData_t *threadData, modelica_metatype _fnNode, modelica_metatype _fn)
{
  modelica_metatype _ders = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _der_mods = NULL;
  modelica_metatype _scope = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _ders = tmpMeta1;
  // _der_mods has no default value.
  // _scope has no default value.
  _der_mods = omc_NFFunctionDerivative_getDerivativeAnnotations(threadData, omc_NFInstNode_InstNode_definition(threadData, _fnNode));

  _scope = omc_NFInstNode_InstNode_parent(threadData, _fnNode);

  {
    modelica_metatype _m;
    for (tmpMeta2 = _der_mods; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _m = MMC_CAR(tmpMeta2);
      _ders = omc_NFFunctionDerivative_instDerivativeMod(threadData, _m, _fnNode, _fn, _scope, _ders);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _ders;
}

