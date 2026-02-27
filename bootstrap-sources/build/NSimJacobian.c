#include "omc_simulation_settings.h"
#include "NSimJacobian.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,17,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "NSimJacobian.SimJacobian.convert failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,40,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,1) {_OMC_LIT5,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "NSimJacobian.SimJacobian.getJacobianHT failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,46,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,1) {_OMC_LIT7,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "NSimJacobian.SimJacobian.getJacobianBlocks failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,50,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,1) {_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,0,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,17,3) {&NSimJacobian_SimJacobian_SIM__JAC__desc,_OMC_LIT11,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_none),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "NSimJacobian.SimJacobian.empty failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,38,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,1) {_OMC_LIT13,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "NSimJacobian.SimJacobian.createSparsity failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,47,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT15,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "A"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "ADJ"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,3,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "simCodeScalarize"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,16,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Scalarizes variables during simcode phase."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,42,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(161)),_OMC_LIT19,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT20,_OMC_LIT21,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT23}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/NSimCode/NSimJacobian.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,77,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT26_6,1.770631566e9);
#define _OMC_LIT26_6 MMC_REFREALLIT(_OMC_LIT_STRUCT26_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT25,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(288)),MMC_IMMEDIATE(MMC_TAGFIXNUM(17)),MMC_IMMEDIATE(MMC_TAGFIXNUM(295)),MMC_IMMEDIATE(MMC_TAGFIXNUM(23)),_OMC_LIT26_6}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT27_6,1.770631566e9);
#define _OMC_LIT27_6 MMC_REFREALLIT(_OMC_LIT_STRUCT27_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT25,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(297)),MMC_IMMEDIATE(MMC_TAGFIXNUM(17)),MMC_IMMEDIATE(MMC_TAGFIXNUM(300)),MMC_IMMEDIATE(MMC_TAGFIXNUM(23)),_OMC_LIT27_6}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "NSimJacobian.SimJacobian.create could not generate sparsity pattern."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,68,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "NSimJacobian.SimJacobian.create failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,39,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,2,1) {_OMC_LIT29,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "SimCode Jacobian "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,17,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "(idx = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,7,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data ", partition = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,14,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,1,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,1,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "ColumnVars (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,19,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,2,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "SeedVars (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,17,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Column Equations (size = "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,25,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "Constant Equations"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,18,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "Sparsity Pattern Cols"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,21,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data ":	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,2,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,1,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,2,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,1,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "Sparsity Pattern Rows"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,21,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "Sparsity Coloring Columns"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,25,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "Sparsity Coloring Rows"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,22,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "Generic Calls"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,13,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,3,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "[EMPTY] SimCode Jacobian "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,25,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "NSimJacobian.SimJacobian.toString failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,41,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,2,1) {_OMC_LIT52,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#include "util/modelica.h"

#include "NSimJacobian_includes.h"



DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_convert(threadData_t *threadData, modelica_metatype _simJac)
{
  modelica_metatype _oldJac = NULL;
  modelica_metatype _oldJacCol = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oldJac has no default value.
  // _oldJacCol has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _simJac;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta26;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,16) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype __omcQ_24tmpVar2;
            modelica_integer tmp9;
            modelica_metatype _blck_loopVar = 0;
            modelica_metatype _blck;
            _blck_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 6)));
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar3;
            while(1) {
              tmp9 = 1;
              if (!listEmpty(_blck_loopVar)) {
                _blck = MMC_CAR(_blck_loopVar);
                _blck_loopVar = MMC_CDR(_blck_loopVar);
                tmp9--;
              }
              if (tmp9 == 0) {
                __omcQ_24tmpVar2 = omc_NSimStrongComponent_Block_convert(threadData, _blck);
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp9 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar3;
          }
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp13;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 8)));
            tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta12; /* defaultValue */
            tmp11 = &__omcQ_24tmpVar5;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                __omcQ_24tmpVar4 = omc_NSimVar_SimVar_convert(threadData, _var);
                *tmp11 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp11 = &MMC_CDR(*tmp11);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp11 = mmc_mk_nil();
            tmpMeta10 = __omcQ_24tmpVar5;
          }
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp17;
            modelica_metatype _blck_loopVar = 0;
            modelica_metatype _blck;
            _blck_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 7)));
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar7;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_blck_loopVar)) {
                _blck = MMC_CAR(_blck_loopVar);
                _blck_loopVar = MMC_CDR(_blck_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar6 = omc_NSimStrongComponent_Block_convert(threadData, _blck);
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar7;
          }
          tmpMeta18 = mmc_mk_box5(3, &SimCode_JacobianColumn_JAC__COLUMN__desc, tmpMeta6, tmpMeta10, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 5))), tmpMeta14);
          _oldJacCol = tmpMeta18;
          tmpMeta19 = mmc_mk_cons(_oldJacCol, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp23;
            modelica_metatype tmpMeta24;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp25;
            modelica_metatype _gc_loopVar = 0;
            modelica_metatype _gc;
            _gc_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 15)));
            tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta24; /* defaultValue */
            tmp23 = &__omcQ_24tmpVar9;
            while(1) {
              tmp25 = 1;
              if (!listEmpty(_gc_loopVar)) {
                _gc = MMC_CAR(_gc_loopVar);
                _gc_loopVar = MMC_CDR(_gc_loopVar);
                tmp25--;
              }
              if (tmp25 == 0) {
                __omcQ_24tmpVar8 = omc_NSimGenericCall_convert(threadData, _gc);
                *tmp23 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp23 = &MMC_CDR(*tmp23);
              } else if (tmp25 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp23 = mmc_mk_nil();
            tmpMeta22 = __omcQ_24tmpVar9;
          }
          tmpMeta26 = mmc_mk_box16(3, &SimCode_JacobianMatrix_JAC__MATRIX__desc, tmpMeta19, omc_NSimVar_SimVar_convertList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 9)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 10))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 11))), tmpMeta20, tmpMeta21, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 12))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 13))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 14))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 4))), tmpMeta22, omc_Util_applyOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 16))), boxvar_NSimCodeUtil_convertSimCodeMap), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 17))));
          tmpMeta1 = tmpMeta26;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT6);
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
  _oldJac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oldJac;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_getJacobianHT(threadData_t *threadData, modelica_metatype _jacobian)
{
  modelica_metatype _jac_map = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jac_map has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _jacobian;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,16) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 16)));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT8);
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
  _jac_map = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _jac_map;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_getJacobiansBlocks(threadData_t *threadData, modelica_metatype _jacobians)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _blcks = tmpMeta1;
  {
    modelica_metatype _jacobian;
    for (tmpMeta2 = _jacobians; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _jacobian = MMC_CAR(tmpMeta2);
      _blcks = listAppend(omc_NSimJacobian_SimJacobian_getJacobianBlocks(threadData, _jacobian), _blcks);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _blcks;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_getJacobianBlocks(threadData_t *threadData, modelica_metatype _jacobian)
{
  modelica_metatype _blcks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _blcks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _jacobian;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,16) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 6))));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT10);
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
  _blcks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _blcks;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_empty(threadData_t *threadData, modelica_string _name, modelica_metatype __omcQ_24in_5Findices, modelica_metatype *out_indices)
{
  modelica_metatype _emptyJac = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _emptyJac = _OMC_LIT12;
  _indices = __omcQ_24in_5Findices;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _emptyJac;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,16) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(18));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_emptyJac), 18*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[2] = _name;
          _emptyJac = tmpMeta6;

          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(18));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_emptyJac), 18*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 21)));
          _emptyJac = tmpMeta7;

          tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[21] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 21)))));
          _indices = tmpMeta8;
          tmpMeta1 = _emptyJac;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT14);
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
  _emptyJac = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  return _emptyJac;
}

static modelica_metatype closure0_UnorderedMap_getOrFail(threadData_t *thData, modelica_metatype closure, modelica_metatype key)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_UnorderedMap_getOrFail(thData, key, map);
}static modelica_metatype closure1_UnorderedMap_getOrFail(threadData_t *thData, modelica_metatype closure, modelica_metatype key)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_UnorderedMap_getOrFail(thData, key, map);
}
DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_createSparsityColoring(threadData_t *threadData, modelica_metatype _coloring, modelica_metatype _idx_map, modelica_metatype *out_simColoringRows)
{
  modelica_metatype _simColoringCols = NULL;
  modelica_metatype _simColoringRows = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simColoringCols has no default value.
  // _simColoringRows has no default value.
  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp5;
    modelica_metatype _group_loopVar = 0;
    modelica_integer tmp6;
    modelica_metatype _group;
    _group_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_coloring), 2)));
    tmp6 = 1;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar11;
    while(1) {
      tmp5 = 1;
      if (tmp6 <= arrayLength(_group_loopVar)) {
        _group = arrayGet(_group_loopVar, tmp6++);
        tmp5--;
      }
      if (tmp5 == 0) {
        tmpMeta4 = mmc_mk_box1(0, _idx_map);
        __omcQ_24tmpVar10 = omc_List_map(threadData, _group, (modelica_fnptr) mmc_mk_box2(0,closure0_UnorderedMap_getOrFail,tmpMeta4));
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar11;
  }
  _simColoringCols = tmpMeta1;

  {
    modelica_metatype __omcQ_24tmpVar13;
    modelica_metatype* tmp8;
    modelica_metatype tmpMeta9;
    modelica_metatype tmpMeta10;
    modelica_metatype __omcQ_24tmpVar12;
    modelica_integer tmp11;
    modelica_metatype _group_loopVar = 0;
    modelica_integer tmp12;
    modelica_metatype _group;
    _group_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_coloring), 3)));
    tmp12 = 1;
    tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar13 = tmpMeta9; /* defaultValue */
    tmp8 = &__omcQ_24tmpVar13;
    while(1) {
      tmp11 = 1;
      if (tmp12 <= arrayLength(_group_loopVar)) {
        _group = arrayGet(_group_loopVar, tmp12++);
        tmp11--;
      }
      if (tmp11 == 0) {
        tmpMeta10 = mmc_mk_box1(0, _idx_map);
        __omcQ_24tmpVar12 = omc_List_map(threadData, _group, (modelica_fnptr) mmc_mk_box2(0,closure1_UnorderedMap_getOrFail,tmpMeta10));
        *tmp8 = mmc_mk_cons(__omcQ_24tmpVar12,0);
        tmp8 = &MMC_CDR(*tmp8);
      } else if (tmp11 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp8 = mmc_mk_nil();
    tmpMeta7 = __omcQ_24tmpVar13;
  }
  _simColoringRows = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  if (out_simColoringRows) { *out_simColoringRows = _simColoringRows; }
  return _simColoringCols;
}

static modelica_metatype closure2_UnorderedMap_getOrFail(threadData_t *thData, modelica_metatype closure, modelica_metatype key)
{
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_UnorderedMap_getOrFail(thData, key, map);
}
DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_createSparsityPattern(threadData_t *threadData, modelica_metatype _cols, modelica_metatype _idx_map)
{
  modelica_metatype _simPattern = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _cref = NULL;
  modelica_metatype _dependencies = NULL;
  modelica_metatype _dep_indices = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _simPattern = tmpMeta1;
  // _cref has no default value.
  // _dependencies has no default value.
  // _dep_indices has no default value.
  {
    modelica_metatype _col;
    for (tmpMeta2 = _cols; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _col = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _col;
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
      _cref = tmpMeta4;
      _dependencies = tmpMeta5;

      tmpMeta6 = mmc_mk_box1(0, _idx_map);
      _dep_indices = omc_List_map(threadData, _dependencies, (modelica_fnptr) mmc_mk_box2(0,closure2_UnorderedMap_getOrFail,tmpMeta6));

      tmpMeta8 = mmc_mk_box2(0, omc_UnorderedMap_getOrFail(threadData, _cref, _idx_map), omc_List_sort(threadData, _dep_indices, boxvar_intGt));
      tmpMeta7 = mmc_mk_cons(tmpMeta8, _simPattern);
      _simPattern = tmpMeta7;
    }
  }

  _simPattern = omc_List_sort(threadData, _simPattern, boxvar_Util_compareTupleIntGt);
  _return: OMC_LABEL_UNUSED
  return _simPattern;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_createSparsity(threadData_t *threadData, modelica_metatype _jacobian, modelica_metatype _idx_map, modelica_metatype *out_sparsityT, modelica_metatype *out_coloring, modelica_metatype *out_rowColoring)
{
  modelica_metatype _sparsity = NULL;
  modelica_metatype _sparsityT = NULL;
  modelica_metatype _coloring = NULL;
  modelica_metatype _rowColoring = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sparsity has no default value.
  // _sparsityT has no default value.
  // _coloring has no default value.
  // _rowColoring has no default value.
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _jacobian;
    {
      modelica_metatype _Bpattern = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _Bpattern has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          
          _Bpattern = tmpMeta6;
          /* Pattern matching succeeded */
          _sparsity = omc_NSimJacobian_SimJacobian_createSparsityPattern(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_Bpattern), 2))), _idx_map);

          _sparsityT = omc_NSimJacobian_SimJacobian_createSparsityPattern(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_Bpattern), 3))), _idx_map);

          _coloring = omc_NSimJacobian_SimJacobian_createSparsityColoring(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 7))), _idx_map ,&_rowColoring);
          tmpMeta[0+0] = _sparsity;
          tmpMeta[0+1] = _sparsityT;
          tmpMeta[0+2] = _coloring;
          tmpMeta[0+3] = _rowColoring;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT16);
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
  _sparsity = tmpMeta[0+0];
  _sparsityT = tmpMeta[0+1];
  _coloring = tmpMeta[0+2];
  _rowColoring = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_sparsityT) { *out_sparsityT = _sparsityT; }
  if (out_coloring) { *out_coloring = _coloring; }
  if (out_rowColoring) { *out_rowColoring = _rowColoring; }
  return _sparsity;
}

DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_createSimulationJacobian(threadData_t *threadData, modelica_metatype _partitions, modelica_metatype __omcQ_24in_5FsimCodeIndices, modelica_metatype _simcode_map, modelica_metatype *out_simJacAdjoint, modelica_metatype *out_simCodeIndices)
{
  modelica_metatype _simJac = NULL;
  modelica_metatype _simJacAdjoint = NULL;
  modelica_metatype _simCodeIndices = NULL;
  modelica_metatype _jacobians = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _jacobiansAdjoint = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _simJacobian = NULL;
  modelica_metatype _simJacobianAdjoint = NULL;
  modelica_metatype _simJac_opt = NULL;
  modelica_metatype _simJacAdj_opt = NULL;
  modelica_metatype _jacobian = NULL;
  modelica_metatype _jacobianAdjoint = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simJac has no default value.
  // _simJacAdjoint has no default value.
  _simCodeIndices = __omcQ_24in_5FsimCodeIndices;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _jacobians = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _jacobiansAdjoint = tmpMeta2;
  // _simJacobian has no default value.
  // _simJacobianAdjoint has no default value.
  // _simJac_opt has no default value.
  // _simJacAdj_opt has no default value.
  // _jacobian has no default value.
  // _jacobianAdjoint has no default value.
  {
    modelica_metatype _partition;
    for (tmpMeta3 = _partitions; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _partition = MMC_CAR(tmpMeta3);
      _jacobian = omc_NBPartition_Partition_getJacobian(threadData, _partition);

      if(isSome(_jacobian))
      {
        tmpMeta4 = mmc_mk_cons(omc_Util_getOption(threadData, _jacobian), _jacobians);
        _jacobians = tmpMeta4;
      }

      _jacobianAdjoint = omc_NBPartition_Partition_getJacobianAdjoint(threadData, _partition);

      if(isSome(_jacobianAdjoint))
      {
        tmpMeta5 = mmc_mk_cons(omc_Util_getOption(threadData, _jacobianAdjoint), _jacobiansAdjoint);
        _jacobiansAdjoint = tmpMeta5;
      }
    }
  }

  if(listEmpty(_jacobians))
  {
    _simJac = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT17, _simCodeIndices ,&_simCodeIndices);
  }
  else
  {
    _simJacobian = omc_NBJacobian_combine(threadData, _jacobians, _OMC_LIT17);

    _simJac_opt = omc_NSimJacobian_SimJacobian_create(threadData, _simJacobian, _simCodeIndices, _simcode_map ,&_simCodeIndices);

    if(isSome(_simJac_opt))
    {
      _simJac = omc_Util_getOption(threadData, _simJac_opt);
    }
    else
    {
      _simJac = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT17, _simCodeIndices ,&_simCodeIndices);
    }
  }

  if(listEmpty(_jacobiansAdjoint))
  {
    _simJacAdjoint = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT18, _simCodeIndices ,&_simCodeIndices);
  }
  else
  {
    _simJacobianAdjoint = omc_NBJacobian_combine(threadData, _jacobiansAdjoint, _OMC_LIT18);

    _simJacAdj_opt = omc_NSimJacobian_SimJacobian_create(threadData, _simJacobianAdjoint, _simCodeIndices, _simcode_map ,&_simCodeIndices);

    if(isSome(_simJacAdj_opt))
    {
      _simJacAdjoint = omc_Util_getOption(threadData, _simJacAdj_opt);
    }
    else
    {
      _simJacAdjoint = omc_NSimJacobian_SimJacobian_empty(threadData, _OMC_LIT18, _simCodeIndices ,&_simCodeIndices);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_simJacAdjoint) { *out_simJacAdjoint = _simJacAdjoint; }
  if (out_simCodeIndices) { *out_simCodeIndices = _simCodeIndices; }
  return _simJac;
}

static modelica_metatype closure3_NSimVar_SimVar_traverseCreate(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NSimVar_SimVar_traverseCreate(thData, $in_var, acc, indices_ptr, varType);
}static modelica_metatype closure4_NSimVar_SimVar_traverseCreate(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NSimVar_SimVar_traverseCreate(thData, $in_var, acc, indices_ptr, varType);
}static modelica_metatype closure5_NSimVar_SimVar_traverseCreate(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_var)
{
  modelica_metatype acc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype indices_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype varType = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_NSimVar_SimVar_traverseCreate(thData, $in_var, acc, indices_ptr, varType);
}
DLLDirection
modelica_metatype omc_NSimJacobian_SimJacobian_create(threadData_t *threadData, modelica_metatype _jacobian, modelica_metatype __omcQ_24in_5Findices, modelica_metatype _simcode_map, modelica_metatype *out_indices)
{
  modelica_metatype _simJacobian = NULL;
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simJacobian has no default value.
  _indices = __omcQ_24in_5Findices;
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _jacobian;
    {
      modelica_metatype _dummy_sim_map = NULL;
      modelica_metatype _dummy_eqn_map = NULL;
      modelica_metatype _columnEqn = NULL;
      modelica_metatype _columnEqns = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _varData = NULL;
      modelica_metatype _seed_vec = NULL;
      modelica_metatype _res_vec = NULL;
      modelica_metatype _tmp_vec = NULL;
      modelica_metatype _seedVars_ptr = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _resVars_ptr = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _tmpVars_ptr = NULL;
      modelica_metatype tmpMeta6;
      modelica_metatype _seedVars = NULL;
      modelica_metatype _resVars = NULL;
      modelica_metatype _tmpVars = NULL;
      modelica_metatype _loopVars = NULL;
      modelica_metatype _jac_map = NULL;
      modelica_metatype _idx_map = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _sparsity = NULL;
      modelica_metatype _sparsityT = NULL;
      modelica_metatype _coloring = NULL;
      modelica_metatype _rowColoring = NULL;
      modelica_metatype _jac = NULL;
      modelica_metatype _sim_map = NULL;
      modelica_metatype _generic_loop_calls = NULL;
      volatile mmc_switch_type tmp8;
      int tmp9;
      _dummy_sim_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
      _dummy_eqn_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
      // _columnEqn has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _columnEqns = tmpMeta3;
      // _varData has no default value.
      // _seed_vec has no default value.
      // _res_vec has no default value.
      // _tmp_vec has no default value.
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _seedVars_ptr = omc_Pointer_create(threadData, tmpMeta4);
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _resVars_ptr = omc_Pointer_create(threadData, tmpMeta5);
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _tmpVars_ptr = omc_Pointer_create(threadData, tmpMeta6);
      // _seedVars has no default value.
      // _resVars has no default value.
      // _tmpVars has no default value.
      // _loopVars has no default value.
      // _jac_map has no default value.
      // _idx_map has no default value.
      // _cref has no default value.
      // _sparsity has no default value.
      // _sparsityT has no default value.
      // _coloring has no default value.
      // _rowColoring has no default value.
      // _jac has no default value.
      // _sim_map has no default value.
      // _generic_loop_calls has no default value.
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_integer tmp14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,1,7) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,1,9) == 0) goto tmp7_end;
          
          _varData = tmpMeta10;
          /* Pattern matching succeeded */
          _sim_map = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 26)));

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[26] = omc_UnorderedMap_new(threadData, boxvar_NSimCode_Identifier_hash, boxvar_NSimCode_Identifier_isEqual, ((modelica_integer) 1));
          _indices = tmpMeta11;

          tmp13 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 5)))); tmp14 = ((modelica_integer) -1); tmp15 = ((modelica_integer) 1);
          if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
          {
            modelica_integer _i;
            for(_i = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 5)))); in_range_integer(_i, tmp13, tmp15); _i += tmp14)
            {
              _columnEqn = omc_NSimStrongComponent_Block_fromStrongComponent(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 5))),_i) /* DAE.ASUB */, _indices, 7, _dummy_sim_map, _dummy_eqn_map ,&_indices ,NULL);

              tmpMeta12 = mmc_mk_cons(_columnEqn, _columnEqns);
              _columnEqns = tmpMeta12;
            }
          }

          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp17;
            modelica_metatype tmpMeta18;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp19;
            modelica_metatype _tpl_loopVar = 0;
            modelica_metatype _tpl;
            _tpl_loopVar = omc_UnorderedMap_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 26))));
            tmpMeta18 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta18; /* defaultValue */
            tmp17 = &__omcQ_24tmpVar15;
            while(1) {
              tmp19 = 1;
              if (!listEmpty(_tpl_loopVar)) {
                _tpl = MMC_CAR(_tpl_loopVar);
                _tpl_loopVar = MMC_CDR(_tpl_loopVar);
                tmp19--;
              }
              if (tmp19 == 0) {
                __omcQ_24tmpVar14 = omc_NSimGenericCall_fromIdentifier(threadData, _tpl);
                *tmp17 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp17 = &MMC_CDR(*tmp17);
              } else if (tmp19 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp17 = mmc_mk_nil();
            tmpMeta16 = __omcQ_24tmpVar15;
          }
          _generic_loop_calls = tmpMeta16;

          tmpMeta20 = MMC_TAGPTR(mmc_alloc_words(27));
          memcpy(MMC_UNTAGPTR(tmpMeta20), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta20))[26] = _sim_map;
          _indices = tmpMeta20;

          if(omc_Flags_getConfigBool(threadData, _OMC_LIT24))
          {
            _seed_vec = omc_NBVariable_VariablePointers_scalarize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 10))));

            _res_vec = omc_NBVariable_VariablePointers_scalarize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 8))));

            _tmp_vec = omc_NBVariable_VariablePointers_scalarize(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 9))));
          }
          else
          {
            _seed_vec = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 10)));

            _res_vec = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 8)));

            _tmp_vec = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 9)));
          }

          tmpMeta21 = mmc_mk_box3(0, _seedVars_ptr, omc_Pointer_create(threadData, omc_NSimCode_EMPTY__SIM__CODE__INDICES(threadData)), mmc_mk_integer(1));
          omc_NBVariable_VariablePointers_map(threadData, _seed_vec, (modelica_fnptr) mmc_mk_box2(0,closure3_NSimVar_SimVar_traverseCreate,tmpMeta21));

          tmpMeta22 = mmc_mk_box3(0, _resVars_ptr, omc_Pointer_create(threadData, omc_NSimCode_EMPTY__SIM__CODE__INDICES(threadData)), mmc_mk_integer(1));
          omc_NBVariable_VariablePointers_map(threadData, _res_vec, (modelica_fnptr) mmc_mk_box2(0,closure4_NSimVar_SimVar_traverseCreate,tmpMeta22));

          tmpMeta23 = mmc_mk_box3(0, _tmpVars_ptr, omc_Pointer_create(threadData, omc_NSimCode_EMPTY__SIM__CODE__INDICES(threadData)), mmc_mk_integer(1));
          omc_NBVariable_VariablePointers_map(threadData, _tmp_vec, (modelica_fnptr) mmc_mk_box2(0,closure5_NSimVar_SimVar_traverseCreate,tmpMeta23));

          _seedVars = listReverse(omc_Pointer_access(threadData, _seedVars_ptr));

          _resVars = listReverse(omc_Pointer_access(threadData, _resVars_ptr));

          _tmpVars = listReverse(omc_Pointer_access(threadData, _tmpVars_ptr));

          _jac_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, listLength(_seedVars) + listLength(_resVars) + listLength(_tmpVars));

          omc_NSimCodeUtil_addListSimCodeMap(threadData, _seedVars, _jac_map);

          omc_NSimCodeUtil_addListSimCodeMap(threadData, _resVars, _jac_map);

          omc_NSimCodeUtil_addListSimCodeMap(threadData, _tmpVars, _jac_map);

          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp26;
              int tmp27;
              tmp26 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp25_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp26 < 2; tmp26++) {
                switch (MMC_SWITCH_CAST(tmp26)) {
                case 0: {
                  modelica_metatype tmpMeta28;
                  modelica_metatype tmpMeta29;
                  modelica_metatype tmpMeta30;
                  modelica_metatype tmpMeta31;
                  modelica_metatype tmpMeta32;
                  modelica_metatype tmpMeta33;
                  modelica_metatype tmpMeta34;
                  modelica_metatype tmpMeta35;
                  modelica_metatype tmpMeta36;
                  modelica_metatype tmpMeta37;
                  modelica_metatype tmpMeta38;
                  /* Pattern matching succeeded */
                  _idx_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, listLength(_seedVars) + listLength(_resVars));

                  if(omc_NBJacobian_isDynamic(threadData, mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 3))))))
                  {
                    if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 8)))))
                    {
                      _loopVars = _resVars;
                    }
                    else
                    {
                      _loopVars = _seedVars;
                    }

                    {
                      modelica_metatype _var;
                      for (tmpMeta28 = _loopVars; !listEmpty(tmpMeta28); tmpMeta28=MMC_CDR(tmpMeta28))
                      {
                        _var = MMC_CAR(tmpMeta28);
                        _cref = omc_NSimVar_SimVar_getName(threadData, _var);

                        if(omc_NBVariable_checkCref(threadData, _cref, boxvar_NBVariable_isSeed, _OMC_LIT26))
                        {
                          _cref = omc_NBVariable_getPartnerCref(threadData, _cref, boxvar_NBVariable_getVarSeed, 0 /* false */);
                        }
                        else
                        {
                          if(omc_NBVariable_checkCref(threadData, _cref, boxvar_NBVariable_isPDer, _OMC_LIT26))
                          {
                            _cref = omc_NBVariable_getPartnerCref(threadData, _cref, boxvar_NBVariable_getVarPDer, 0 /* false */);
                          }
                        }

                        omc_UnorderedMap_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))), _idx_map);

                        if(omc_NBVariable_checkCref(threadData, _cref, boxvar_NBVariable_isState, _OMC_LIT27))
                        {
                          _cref = omc_NBVariable_getPartnerCref(threadData, _cref, boxvar_NBVariable_getVarDer, 0 /* false */);

                          omc_UnorderedMap_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))), _idx_map);
                        }
                      }
                    }

                    if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 3)))) == 2))
                    {
                      {
                        modelica_metatype _var;
                        for (tmpMeta30 = _resVars; !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
                        {
                          _var = MMC_CAR(tmpMeta30);
                          _cref = omc_NSimVar_SimVar_getName(threadData, _var);

                          omc_UnorderedMap_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))), _idx_map);
                        }
                      }
                    }
                  }
                  else
                  {
                    {
                      modelica_metatype _var;
                      for (tmpMeta32 = _seedVars; !listEmpty(tmpMeta32); tmpMeta32=MMC_CDR(tmpMeta32))
                      {
                        _var = MMC_CAR(tmpMeta32);
                        _cref = omc_NSimVar_SimVar_getName(threadData, _var);

                        omc_UnorderedMap_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))), _idx_map);

                        _cref = omc_NBVariable_getPartnerCref(threadData, _cref, boxvar_NBVariable_getVarSeed, 0 /* false */);

                        omc_UnorderedMap_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))), _idx_map);
                      }
                    }

                    {
                      modelica_metatype _var;
                      for (tmpMeta34 = _resVars; !listEmpty(tmpMeta34); tmpMeta34=MMC_CDR(tmpMeta34))
                      {
                        _var = MMC_CAR(tmpMeta34);
                        _cref = omc_NSimVar_SimVar_getName(threadData, _var);

                        omc_UnorderedMap_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))), _idx_map);

                        _cref = omc_NBVariable_getPartnerCref(threadData, _cref, boxvar_NBVariable_getVarPDer, 0 /* false */);

                        omc_UnorderedMap_add(threadData, _cref, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 7))), _idx_map);
                      }
                    }
                  }

                  _sparsity = omc_NSimJacobian_SimJacobian_createSparsity(threadData, _jacobian, _idx_map ,&_sparsityT ,&_coloring ,&_rowColoring);

                  tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
                  tmpMeta37 = mmc_mk_box17(3, &NSimJacobian_SimJacobian_SIM__JAC__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 21))), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(listLength(_resVars)), _columnEqns, tmpMeta36, _resVars, _seedVars, _sparsity, _sparsityT, _coloring, _rowColoring, mmc_mk_integer(listLength(_coloring)), _generic_loop_calls, mmc_mk_some(_jac_map), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacobian), 8))));
                  _jac = tmpMeta37;

                  tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(27));
                  memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_indices), 27*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[21] = mmc_mk_integer(((modelica_integer) 1) + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_indices), 21)))));
                  _indices = tmpMeta38;

                  _simJacobian = mmc_mk_some(_jac);
                  goto tmp25_done;
                }
                case 1: {
                  /* Pattern matching succeeded */
                  _simJacobian = mmc_mk_none();

                  omc_Error_addCompilerWarning(threadData, _OMC_LIT28);
                  goto tmp25_done;
                }
                }
                goto tmp25_end;
                tmp25_end: ;
              }
              goto goto_24;
              tmp25_done:
              (void)tmp26;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp25_done2;
              goto_24:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp26 < 2) {
                goto tmp25_top;
              }
              goto goto_2;
              tmp25_done2:;
            }
          }
          ;
          tmpMeta1 = _simJacobian;
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT30);
          goto goto_2;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _simJacobian = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_indices) { *out_indices = _indices; }
  return _simJacobian;
}

DLLDirection
modelica_boolean omc_NSimJacobian_SimJacobian_isEmpty(threadData_t *threadData, modelica_metatype _simJac)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _simJac;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,16) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 5)))) == ((modelica_integer) 0));
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
modelica_metatype boxptr_NSimJacobian_SimJacobian_isEmpty(threadData_t *threadData, modelica_metatype _simJac)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_NSimJacobian_SimJacobian_isEmpty(threadData, _simJac);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_NSimJacobian_SimJacobian_toString(threadData_t *threadData, modelica_metatype _simJac)
{
  modelica_string _str = NULL;
  modelica_integer _idx;
  modelica_metatype _dependencies = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = _OMC_LIT11;
  // _idx has no default value.
  // _dependencies has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _simJac;
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
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_integer tmp51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_integer tmp64;
          modelica_metatype tmpMeta65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          modelica_metatype tmpMeta78;
          modelica_metatype tmpMeta79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          modelica_metatype tmpMeta82;
          modelica_metatype tmpMeta83;
          modelica_metatype tmpMeta84;
          modelica_metatype tmpMeta85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,16) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          if(omc_NSimJacobian_SimJacobian_isEmpty(threadData, _simJac))
          {
            tmpMeta6 = stringAppend(_OMC_LIT51,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 2))));
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT32);
            tmpMeta8 = stringAppend(tmpMeta7,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 3))))));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT33);
            tmpMeta10 = stringAppend(tmpMeta9,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 4))))));
            tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT34);
            tmpMeta12 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta11),_OMC_LIT35);
            _str = tmpMeta12;
          }
          else
          {
            tmpMeta13 = stringAppend(_OMC_LIT31,(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 2))));
            tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT32);
            tmpMeta15 = stringAppend(tmpMeta14,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 3))))));
            tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT33);
            tmpMeta17 = stringAppend(tmpMeta16,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 3))))));
            tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT34);
            tmpMeta19 = stringAppend(omc_StringUtil_headline__2(threadData, tmpMeta18),_OMC_LIT35);
            _str = tmpMeta19;

            tmpMeta20 = stringAppend(_OMC_LIT36,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 5))))));
            tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT34);
            tmpMeta22 = stringAppend(_str,omc_StringUtil_headline__4(threadData, tmpMeta21));
            _str = tmpMeta22;

            {
              modelica_metatype _var;
              for (tmpMeta23 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 8))); !listEmpty(tmpMeta23); tmpMeta23=MMC_CDR(tmpMeta23))
              {
                _var = MMC_CAR(tmpMeta23);
                tmpMeta24 = stringAppend(_str,omc_NSimVar_SimVar_toString(threadData, _var, _OMC_LIT37));
                tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT35);
                _str = tmpMeta25;
              }
            }

            tmpMeta27 = stringAppend(_str,_OMC_LIT35);
            tmpMeta28 = stringAppend(_OMC_LIT38,intString(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 9))))));
            tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT34);
            tmpMeta30 = stringAppend(tmpMeta27,omc_StringUtil_headline__4(threadData, tmpMeta29));
            _str = tmpMeta30;

            {
              modelica_metatype _var;
              for (tmpMeta31 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 9))); !listEmpty(tmpMeta31); tmpMeta31=MMC_CDR(tmpMeta31))
              {
                _var = MMC_CAR(tmpMeta31);
                tmpMeta32 = stringAppend(_str,omc_NSimVar_SimVar_toString(threadData, _var, _OMC_LIT37));
                tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT35);
                _str = tmpMeta33;
              }
            }

            tmpMeta35 = stringAppend(_str,_OMC_LIT35);
            tmpMeta36 = stringAppend(_OMC_LIT39,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 5))))));
            tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT34);
            tmpMeta38 = stringAppend(tmpMeta35,omc_StringUtil_headline__3(threadData, tmpMeta37));
            _str = tmpMeta38;

            {
              modelica_metatype _eq;
              for (tmpMeta39 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 6))); !listEmpty(tmpMeta39); tmpMeta39=MMC_CDR(tmpMeta39))
              {
                _eq = MMC_CAR(tmpMeta39);
                tmpMeta40 = stringAppend(_str,omc_NSimStrongComponent_Block_toString(threadData, _eq, _OMC_LIT37));
                _str = tmpMeta40;
              }
            }

            if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 7))))))
            {
              tmpMeta42 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT40));
              _str = tmpMeta42;

              {
                modelica_metatype _eq;
                for (tmpMeta43 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 7))); !listEmpty(tmpMeta43); tmpMeta43=MMC_CDR(tmpMeta43))
                {
                  _eq = MMC_CAR(tmpMeta43);
                  tmpMeta44 = stringAppend(_str,omc_NSimStrongComponent_Block_toString(threadData, _eq, _OMC_LIT37));
                  _str = tmpMeta44;
                }
              }
            }

            tmpMeta46 = stringAppend(_str,_OMC_LIT35);
            tmpMeta47 = stringAppend(tmpMeta46,omc_StringUtil_headline__4(threadData, _OMC_LIT41));
            _str = tmpMeta47;

            if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 11))))))
            {
              {
                modelica_metatype _tpl;
                for (tmpMeta48 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 11))); !listEmpty(tmpMeta48); tmpMeta48=MMC_CDR(tmpMeta48))
                {
                  _tpl = MMC_CAR(tmpMeta48);
                  /* Pattern-matching assignment */
                  tmpMeta49 = _tpl;
                  tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta49), 1));
                  tmp51 = mmc_unbox_integer(tmpMeta50);
                  tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta49), 2));
                  _idx = tmp51  /* pattern as ty=Integer */;
                  _dependencies = tmpMeta52;

                  tmpMeta53 = stringAppend(_str,_OMC_LIT37);
                  tmpMeta54 = stringAppend(tmpMeta53,intString(_idx));
                  tmpMeta55 = stringAppend(tmpMeta54,_OMC_LIT42);
                  tmpMeta56 = stringAppend(tmpMeta55,omc_List_toString(threadData, _dependencies, boxvar_intString, _OMC_LIT11, _OMC_LIT43, _OMC_LIT44, _OMC_LIT45, 1 /* true */, ((modelica_integer) 0)));
                  tmpMeta57 = stringAppend(tmpMeta56,_OMC_LIT35);
                  _str = tmpMeta57;
                }
              }
            }

            tmpMeta59 = stringAppend(_str,_OMC_LIT35);
            tmpMeta60 = stringAppend(tmpMeta59,omc_StringUtil_headline__4(threadData, _OMC_LIT46));
            _str = tmpMeta60;

            if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 10))))))
            {
              {
                modelica_metatype _tpl;
                for (tmpMeta61 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 10))); !listEmpty(tmpMeta61); tmpMeta61=MMC_CDR(tmpMeta61))
                {
                  _tpl = MMC_CAR(tmpMeta61);
                  /* Pattern-matching assignment */
                  tmpMeta62 = _tpl;
                  tmpMeta63 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta62), 1));
                  tmp64 = mmc_unbox_integer(tmpMeta63);
                  tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta62), 2));
                  _idx = tmp64  /* pattern as ty=Integer */;
                  _dependencies = tmpMeta65;

                  tmpMeta66 = stringAppend(_str,_OMC_LIT37);
                  tmpMeta67 = stringAppend(tmpMeta66,intString(_idx));
                  tmpMeta68 = stringAppend(tmpMeta67,_OMC_LIT42);
                  tmpMeta69 = stringAppend(tmpMeta68,omc_List_toString(threadData, _dependencies, boxvar_intString, _OMC_LIT11, _OMC_LIT43, _OMC_LIT44, _OMC_LIT45, 1 /* true */, ((modelica_integer) 0)));
                  tmpMeta70 = stringAppend(tmpMeta69,_OMC_LIT35);
                  _str = tmpMeta70;
                }
              }
            }

            tmpMeta72 = stringAppend(_str,_OMC_LIT35);
            tmpMeta73 = stringAppend(tmpMeta72,omc_StringUtil_headline__4(threadData, _OMC_LIT47));
            _str = tmpMeta73;

            if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 12))))))
            {
              {
                modelica_metatype _lst;
                for (tmpMeta74 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 12))); !listEmpty(tmpMeta74); tmpMeta74=MMC_CDR(tmpMeta74))
                {
                  _lst = MMC_CAR(tmpMeta74);
                  tmpMeta75 = stringAppend(_str,_OMC_LIT37);
                  tmpMeta76 = stringAppend(tmpMeta75,omc_List_toString(threadData, _lst, boxvar_intString, _OMC_LIT11, _OMC_LIT43, _OMC_LIT44, _OMC_LIT45, 1 /* true */, ((modelica_integer) 0)));
                  tmpMeta77 = stringAppend(tmpMeta76,_OMC_LIT35);
                  _str = tmpMeta77;
                }
              }
            }

            tmpMeta79 = stringAppend(_str,_OMC_LIT35);
            tmpMeta80 = stringAppend(tmpMeta79,omc_StringUtil_headline__4(threadData, _OMC_LIT48));
            _str = tmpMeta80;

            if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 13))))))
            {
              {
                modelica_metatype _lst;
                for (tmpMeta81 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 13))); !listEmpty(tmpMeta81); tmpMeta81=MMC_CDR(tmpMeta81))
                {
                  _lst = MMC_CAR(tmpMeta81);
                  tmpMeta82 = stringAppend(_str,_OMC_LIT37);
                  tmpMeta83 = stringAppend(tmpMeta82,omc_List_toString(threadData, _lst, boxvar_intString, _OMC_LIT11, _OMC_LIT43, _OMC_LIT44, _OMC_LIT45, 1 /* true */, ((modelica_integer) 0)));
                  tmpMeta84 = stringAppend(tmpMeta83,_OMC_LIT35);
                  _str = tmpMeta84;
                }
              }
            }

            if((!listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 15))))))
            {
              tmpMeta86 = stringAppend(_str,omc_StringUtil_headline__3(threadData, _OMC_LIT49));
              _str = tmpMeta86;

              tmpMeta87 = stringAppend(_str,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simJac), 15))), boxvar_NSimGenericCall_toString, _OMC_LIT11, _OMC_LIT37, _OMC_LIT50, _OMC_LIT35, 1 /* true */, ((modelica_integer) 0)));
              _str = tmpMeta87;
            }

            tmpMeta88 = stringAppend(_str,_OMC_LIT35);
            _str = tmpMeta88;
          }
          tmp1 = _str;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT4, _OMC_LIT53);
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
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}

