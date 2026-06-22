#include "omc_simulation_settings.h"
#include "SimCodeDump.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,3,3) {&Tpl_Text_MEM__TEXT__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,1,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "<alias>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,7,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "</alias>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,8,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,4) {&Tpl_BlockType_BT__INDENT__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "<alias negated=\"true\">"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,22,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,0,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT9}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,1) {_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,3) {&Tpl_StringToken_ST__NEW__LINE__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,1,1) {_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,9,3) {&Tpl_IterOptions_ITER__OPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT11,_OMC_LIT13,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT12,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT12}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,2,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,4) {&Tpl_StringToken_ST__STRING__desc,_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#include "util/modelica.h"

#include "SimCodeDump_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_SimCodeDump_lm__46(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeDump_lm__46,2,0) {(void*) boxptr_SimCodeDump_lm__46,0}};
#define boxvar_SimCodeDump_lm__46 MMC_REFSTRUCTLIT(boxvar_lit_SimCodeDump_lm__46)

DLLDirection
modelica_metatype omc_SimCodeDump_printExpStrEscaped(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_exp)
{
  modelica_metatype _out_txt = NULL;
  modelica_string _ret_1 = NULL;
  modelica_metatype _txt_0 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _ret_1 has no default value.
  // _txt_0 has no default value.
  _txt_0 = omc_ExpressionDumpTpl_dumpExp(threadData, _OMC_LIT0, _a_exp, _OMC_LIT1);

  _ret_1 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _txt_0));

  _out_txt = omc_Tpl_writeStr(threadData, _txt, _ret_1);
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

DLLDirection
modelica_metatype omc_SimCodeDump_dumpAlias(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_alias)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _in_txt;
    tmp4_2 = _in_a_alias;
    {
      modelica_metatype _txt = NULL;
      modelica_metatype _i_varName = NULL;
      modelica_string _ret_3 = NULL;
      modelica_metatype _txt_2 = NULL;
      modelica_string _ret_1 = NULL;
      modelica_metatype _txt_0 = NULL;
      int tmp4;
      // _txt has no default value.
      // _i_varName has no default value.
      // _ret_3 has no default value.
      // _txt_2 has no default value.
      // _ret_1 has no default value.
      // _txt_0 has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_2))) {
        case 4: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _i_varName = tmpMeta5;
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT3);

          _txt_0 = omc_CodegenUtil_crefStrNoUnderscore(threadData, _OMC_LIT0, _i_varName);

          _ret_1 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _txt_0));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_1);
          tmpMeta1 = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT5);
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _i_varName = tmpMeta6;
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          _txt = omc_Tpl_pushBlock(threadData, _txt, _OMC_LIT6);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT8);

          _txt_2 = omc_CodegenUtil_crefStrNoUnderscore(threadData, _OMC_LIT0, _i_varName);

          _ret_3 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _txt_2));

          _txt = omc_Tpl_writeStr(threadData, _txt, _ret_3);

          _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT5);
          tmpMeta1 = omc_Tpl_popBlock(threadData, _txt);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          _txt = tmp4_1;
          /* Pattern matching succeeded */
          tmpMeta1 = _txt;
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
  _out_txt = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

DLLDirection
modelica_metatype omc_SimCodeDump_dumpVarsShort(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_vars)
{
  modelica_metatype _out_txt = NULL;
  modelica_metatype _l_varsString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _out_txt has no default value.
  // _l_varsString has no default value.
  _l_varsString = omc_Tpl_pushIter(threadData, _OMC_LIT0, _OMC_LIT14);

  _l_varsString = omc_SimCodeDump_lm__46(threadData, _l_varsString, _a_vars);

  _l_varsString = omc_Tpl_popIter(threadData, _l_varsString);

  _out_txt = omc_Tpl_writeText(threadData, _txt, _l_varsString);

  _out_txt = omc_Tpl_softNewLine(threadData, _out_txt);

  _out_txt = omc_Tpl_writeTok(threadData, _out_txt, _OMC_LIT12);
  _return: OMC_LABEL_UNUSED
  return _out_txt;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_SimCodeDump_lm__46(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftxt, modelica_metatype _items)
{
  modelica_metatype _txt = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _txt = __omcQ_24in_5Ftxt;
  {
    modelica_metatype _lstElt_46;
    for (tmpMeta1 = _items; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _lstElt_46 = MMC_CAR(tmpMeta1);
      { /* match expression */
        modelica_metatype tmp5_1;
        tmp5_1 = _lstElt_46;
        {
          modelica_integer _x_index0;
          modelica_metatype _i_v_name = NULL;
          modelica_string _ret_1 = NULL;
          modelica_metatype _txt_0 = NULL;
          volatile mmc_switch_type tmp5;
          int tmp6;
          // _x_index0 has no default value.
          // _i_v_name has no default value.
          // _ret_1 has no default value.
          // _txt_0 has no default value.
          tmp5 = 0;
          for (; tmp5 < 2; tmp5++) {
            switch (MMC_SWITCH_CAST(tmp5)) {
            case 0: {
              modelica_metatype tmpMeta7;
              tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 2));
              
              _i_v_name = tmpMeta7;
              /* Pattern matching succeeded */
              _x_index0 = omc_Tpl_getIteri__i0(threadData, _txt);

              _txt = omc_Tpl_writeStr(threadData, _txt, intString(_x_index0));

              _txt = omc_Tpl_writeTok(threadData, _txt, _OMC_LIT16);

              _txt_0 = omc_CodegenUtil_crefStrNoUnderscore(threadData, _OMC_LIT0, _i_v_name);

              _ret_1 = omc_Util_escapeModelicaStringToXmlString(threadData, omc_Tpl_textString(threadData, _txt_0));

              _txt = omc_Tpl_writeStr(threadData, _txt, _ret_1);
              tmpMeta2 = omc_Tpl_nextIter(threadData, _txt);
              goto tmp4_done;
            }
            case 1: {
              
              /* Pattern matching succeeded */
              tmpMeta2 = _txt;
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
      _txt = tmpMeta2;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _txt;
}

