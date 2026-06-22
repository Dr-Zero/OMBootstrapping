#include "omc_simulation_settings.h"
#include "BaseModelica.h"
#define _OMC_LIT0_data "baseModelicaOptions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,19,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,2,9) {&Flags_FlagData_STRING__LIST__FLAG__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "moveBindings"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,12,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Moves movable binding equations to normal equations."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,52,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,0) {_OMC_LIT3,_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "scalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,9,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "Fully scalarize the Base Modelica model."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,40,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,0) {_OMC_LIT6,_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "inlineFunctions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,15,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Inline all functions."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,21,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,2,0) {_OMC_LIT9,_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,1) {_OMC_LIT11,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT13,2,1) {_OMC_LIT8,_OMC_LIT12}};
#define _OMC_LIT13 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,1) {_OMC_LIT5,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,1,1) {_OMC_LIT15}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "Enables optional Base Modelica options."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,39,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(154)),_OMC_LIT0,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT1,_OMC_LIT2,_OMC_LIT16,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,5,3) {&BaseModelica_OutputFormat_OUTPUT__FORMAT__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "nfScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,11,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "Run scalarization in NF, default true."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,38,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(168)),_OMC_LIT20,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "scalarized"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,10,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "partiallyScalarized"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,19,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "nonScalarized"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,13,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "withRecords"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,11,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "withoutRecords"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,14,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "showConfidence"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,14,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "baseModelicaFormat"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,18,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Include subscripts in the quoted identifiers ('a[1].x[3]')."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,59,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,2,0) {_OMC_LIT23,_OMC_LIT30}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Include subscripts in the quoted identifiers, except for the last name ('a[1].x'[3])."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,85,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT33,2,0) {_OMC_LIT24,_OMC_LIT32}};
#define _OMC_LIT33 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Don't include subscripts in the quoted identifiers ('a'[1].'x'[3])."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,67,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,0) {_OMC_LIT25,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Keep records and don't expand them."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,35,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,2,0) {_OMC_LIT26,_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "Expand records into separate components."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,40,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,2,0) {_OMC_LIT27,_OMC_LIT38}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Add comments that show confidence numbers for binding equations."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,64,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,0) {_OMC_LIT28,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,2,1) {_OMC_LIT41,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,1) {_OMC_LIT39,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,1) {_OMC_LIT37,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT45,2,1) {_OMC_LIT35,_OMC_LIT44}};
#define _OMC_LIT45 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,1) {_OMC_LIT33,_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,2,1) {_OMC_LIT31,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT48,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT47}};
#define _OMC_LIT48 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,1,1) {_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "Formatting options for Base Modelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,36,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT51,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(153)),_OMC_LIT29,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT1,_OMC_LIT2,_OMC_LIT49,_OMC_LIT50}};
#define _OMC_LIT51 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT51)
#include "util/modelica.h"

#include "BaseModelica_includes.h"



DLLDirection
modelica_boolean omc_BaseModelica_inlineFunctions(threadData_t *threadData)
{
  modelica_boolean _enabled;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _enabled = omc_Flags_isConfigFlagSet(threadData, _OMC_LIT18, _OMC_LIT9);
  _return: OMC_LABEL_UNUSED
  return _enabled;
}
modelica_metatype boxptr_BaseModelica_inlineFunctions(threadData_t *threadData)
{
  modelica_boolean _enabled;
  modelica_metatype out_enabled;
  _enabled = omc_BaseModelica_inlineFunctions(threadData);
  out_enabled = mmc_mk_icon(_enabled);
  return out_enabled;
}

DLLDirection
modelica_metatype omc_BaseModelica_formatFromFlags(threadData_t *threadData)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype _format = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  _format = _OMC_LIT19;
  if((!omc_Flags_isSet(threadData, _OMC_LIT22)))
  {
    tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(6));
    memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_format), 6*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = mmc_mk_integer(3);
    _format = tmpMeta1;
  }
  else
  {
    if(omc_Flags_isConfigFlagSet(threadData, _OMC_LIT18, _OMC_LIT6))
    {
      __omcQ_24mrfa_5F0 = mmc_mk_integer(1);

      __omcQ_24mrfa_5F1 = mmc_mk_integer(2);

      tmpMeta2 = mmc_mk_box5(3, &BaseModelica_OutputFormat_OUTPUT__FORMAT__desc, __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_format), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_format), 5))));
      _format = tmpMeta2;
    }
  }

  {
    modelica_metatype _option;
    for (tmpMeta3 = omc_Flags_getConfigStringList(threadData, _OMC_LIT51); !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _option = MMC_CAR(tmpMeta3);
      { /* match expression */
        modelica_string tmp6_1;
        tmp6_1 = _option;
        {
          volatile mmc_switch_type tmp6;
          int tmp7;
          tmp6 = 0;
          for (; tmp6 < 7; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              if (10 != MMC_STRLEN(tmp6_1) || strcmp(MMC_STRINGDATA(_OMC_LIT23), MMC_STRINGDATA(tmp6_1)) != 0) goto tmp5_end;
              /* Pattern matching succeeded */
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(6));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_format), 6*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[2] = mmc_mk_integer(1);
              _format = tmpMeta8;
              goto tmp5_done;
            }
            case 1: {
              modelica_metatype tmpMeta9;
              if (19 != MMC_STRLEN(tmp6_1) || strcmp(MMC_STRINGDATA(_OMC_LIT24), MMC_STRINGDATA(tmp6_1)) != 0) goto tmp5_end;
              /* Pattern matching succeeded */
              tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(6));
              memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_format), 6*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[2] = mmc_mk_integer(2);
              _format = tmpMeta9;
              goto tmp5_done;
            }
            case 2: {
              modelica_metatype tmpMeta10;
              if (13 != MMC_STRLEN(tmp6_1) || strcmp(MMC_STRINGDATA(_OMC_LIT25), MMC_STRINGDATA(tmp6_1)) != 0) goto tmp5_end;
              /* Pattern matching succeeded */
              tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(6));
              memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_format), 6*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = mmc_mk_integer(3);
              _format = tmpMeta10;
              goto tmp5_done;
            }
            case 3: {
              modelica_metatype tmpMeta11;
              if (11 != MMC_STRLEN(tmp6_1) || strcmp(MMC_STRINGDATA(_OMC_LIT26), MMC_STRINGDATA(tmp6_1)) != 0) goto tmp5_end;
              /* Pattern matching succeeded */
              tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(6));
              memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_format), 6*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = mmc_mk_integer(1);
              _format = tmpMeta11;
              goto tmp5_done;
            }
            case 4: {
              modelica_metatype tmpMeta12;
              if (14 != MMC_STRLEN(tmp6_1) || strcmp(MMC_STRINGDATA(_OMC_LIT27), MMC_STRINGDATA(tmp6_1)) != 0) goto tmp5_end;
              /* Pattern matching succeeded */
              tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(6));
              memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_format), 6*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[3] = mmc_mk_integer(2);
              _format = tmpMeta12;
              goto tmp5_done;
            }
            case 5: {
              modelica_metatype tmpMeta13;
              if (14 != MMC_STRLEN(tmp6_1) || strcmp(MMC_STRINGDATA(_OMC_LIT28), MMC_STRINGDATA(tmp6_1)) != 0) goto tmp5_end;
              /* Pattern matching succeeded */
              tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(6));
              memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_format), 6*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[5] = mmc_mk_boolean(1 /* true */);
              _format = tmpMeta13;
              goto tmp5_done;
            }
            case 6: {
              
              /* Pattern matching succeeded */
              goto tmp5_done;
            }
            }
            goto tmp5_end;
            tmp5_end: ;
          }
          goto goto_4;
          goto_4:;
          MMC_THROW_INTERNAL();
          goto tmp5_done;
          tmp5_done:;
        }
      }
      ;
    }
  }

  tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(6));
  memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_format), 6*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[4] = mmc_mk_boolean(omc_Flags_isConfigFlagSet(threadData, _OMC_LIT18, _OMC_LIT3));
  _format = tmpMeta15;
  _return: OMC_LABEL_UNUSED
  return _format;
}

