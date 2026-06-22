#include "omc_simulation_settings.h"
#include "NBBindings.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,6) {&ErrorTypes_MessageType_SYMBOLIC__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,6) {&ErrorTypes_Severity_NOTIFICATION__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Model statistics after passing the front-end and creating the data structures used by the back-end:\n * Number of equations: %s\n * Number of variables: %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,153,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(258)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data " ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,2,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,1,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,0,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT7,0.0);
#define _OMC_LIT7 MMC_REFREALLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT6,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "backenddaeinfo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,14,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "Enables dumping of back-end information about system (Number of equations before back-end,...)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,95,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(68)),_OMC_LIT9,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT10}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Created Continuous Binding Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,38,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "):"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,2,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,1,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,2,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "Created Clocked Binding Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,35,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "Created Discrete Binding Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,36,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "Created Record Binding Equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,34,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "dumpBindings"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,12,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "Dumps information about the equations created from bindings."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,60,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(47)),_OMC_LIT20,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,17,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT23,_OMC_LIT24,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "NBBindings.main failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,23,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,2,1) {_OMC_LIT27,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
#include "util/modelica.h"

#include "NBBindings_includes.h"



static modelica_metatype closure0_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure1_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure2_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}static modelica_metatype closure3_NBEquation_Equation_pointerToString(threadData_t *thData, modelica_metatype closure, modelica_metatype eqn_ptr)
{
  modelica_string $in_str = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBEquation_Equation_pointerToString(thData, eqn_ptr, $in_str);
}
DLLDirection
modelica_metatype omc_NBBindings_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae)
{
  modelica_metatype _bdae = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _bdae;
    {
      modelica_metatype _bind_eqn = NULL;
      modelica_metatype _varData = NULL;
      modelica_metatype _eqData = NULL;
      modelica_metatype _bound_vars = NULL;
      modelica_metatype _bound_clocks = NULL;
      modelica_metatype _binding_cont = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _binding_clck = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _binding_disc = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _binding_rec = NULL;
      modelica_metatype tmpMeta6;
      modelica_metatype _parent = NULL;
      modelica_boolean _skip_record_element;
      modelica_metatype _new_iters = NULL;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _bind_eqn has no default value.
      // _varData has no default value.
      // _eqData has no default value.
      // _bound_vars has no default value.
      // _bound_clocks has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _binding_cont = tmpMeta3;
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _binding_clck = tmpMeta4;
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _binding_disc = tmpMeta5;
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _binding_rec = tmpMeta6;
      // _parent has no default value.
      // _skip_record_element has no default value.
      _new_iters = omc_UnorderedSet_new(threadData, boxvar_NBVariable_hash, boxvar_NBVariable_equalName, ((modelica_integer) 13));
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta16;
          modelica_boolean tmp17 = 0;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
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
          modelica_metatype tmpMeta51;
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
          modelica_metatype tmpMeta64;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,13) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 10));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,24) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 11));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,0,9) == 0) goto tmp7_end;
          
          _varData = tmpMeta10;
          _eqData = tmpMeta11;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp13;
            modelica_metatype tmpMeta14;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp15;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 4))));
            tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta14; /* defaultValue */
            tmp13 = &__omcQ_24tmpVar7;
            while(1) {
              tmp15 = 1;
              while (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                if (omc_NBVariable_isBound(threadData, _var)) {
                  tmp15--;
                  break;
                }
              }
              if (tmp15 == 0) {
                __omcQ_24tmpVar6 = _var;
                *tmp13 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp13 = &MMC_CDR(*tmp13);
              } else if (tmp15 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp13 = mmc_mk_nil();
            tmpMeta12 = __omcQ_24tmpVar7;
          }
          _bound_vars = tmpMeta12;

          {
            modelica_metatype _var;
            for (tmpMeta16 = _bound_vars; !listEmpty(tmpMeta16); tmpMeta16=MMC_CDR(tmpMeta16))
            {
              _var = MMC_CAR(tmpMeta16);
              { /* match expression */
                modelica_metatype tmp20_1;
                tmp20_1 = omc_NBVariable_getParent(threadData, _var);
                {
                  volatile mmc_switch_type tmp20;
                  int tmp21;
                  tmp20 = 0;
                  for (; tmp20 < 2; tmp20++) {
                    switch (MMC_SWITCH_CAST(tmp20)) {
                    case 0: {
                      modelica_metatype tmpMeta22;
                      if (optionNone(tmp20_1)) goto tmp19_end;
                      tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp20_1), 1));
                      _parent = tmpMeta22;
                      /* Pattern matching succeeded */
                      tmp17 = (omc_NBVariable_isBound(threadData, _parent) && omc_NBVariable_isUnknownRecord(threadData, _parent));
                      goto tmp19_done;
                    }
                    case 1: {
                      
                      /* Pattern matching succeeded */
                      tmp17 = 0 /* false */;
                      goto tmp19_done;
                    }
                    }
                    goto tmp19_end;
                    tmp19_end: ;
                  }
                  goto goto_18;
                  goto_18:;
                  goto goto_2;
                  goto tmp19_done;
                  tmp19_done:;
                }
              }
              _skip_record_element = tmp17;

              if((!_skip_record_element))
              {
                _bind_eqn = omc_NBEquation_Equation_generateBindingEquation(threadData, _var, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), 0 /* false */, _new_iters);

                if(omc_NBVariable_isContinuous(threadData, _var, 0 /* false */))
                {
                  tmpMeta23 = mmc_mk_cons(_bind_eqn, _binding_cont);
                  _binding_cont = tmpMeta23;
                }
                else
                {
                  tmpMeta24 = mmc_mk_cons(_bind_eqn, _binding_disc);
                  _binding_disc = tmpMeta24;
                }
              }
            }
          }

          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp27;
            modelica_metatype tmpMeta28;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp29;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 22))));
            tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta28; /* defaultValue */
            tmp27 = &__omcQ_24tmpVar9;
            while(1) {
              tmp29 = 1;
              while (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                if ((omc_NBVariable_isBound(threadData, _var) && omc_NBVariable_isUnknownRecord(threadData, _var))) {
                  tmp29--;
                  break;
                }
              }
              if (tmp29 == 0) {
                __omcQ_24tmpVar8 = _var;
                *tmp27 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp27 = &MMC_CDR(*tmp27);
              } else if (tmp29 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp27 = mmc_mk_nil();
            tmpMeta26 = __omcQ_24tmpVar9;
          }
          _bound_vars = tmpMeta26;

          {
            modelica_metatype _var;
            for (tmpMeta30 = _bound_vars; !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
            {
              _var = MMC_CAR(tmpMeta30);
              tmpMeta31 = mmc_mk_cons(omc_NBEquation_Equation_generateBindingEquation(threadData, _var, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), 0 /* false */, _new_iters), _binding_rec);
              _binding_rec = tmpMeta31;
            }
          }

          {
            modelica_metatype __omcQ_24tmpVar11;
            modelica_metatype* tmp34;
            modelica_metatype tmpMeta35;
            modelica_metatype __omcQ_24tmpVar10;
            modelica_integer tmp36;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varData), 16))));
            tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar11 = tmpMeta35; /* defaultValue */
            tmp34 = &__omcQ_24tmpVar11;
            while(1) {
              tmp36 = 1;
              while (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                if (omc_NBVariable_isBound(threadData, _var)) {
                  tmp36--;
                  break;
                }
              }
              if (tmp36 == 0) {
                __omcQ_24tmpVar10 = _var;
                *tmp34 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                tmp34 = &MMC_CDR(*tmp34);
              } else if (tmp36 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp34 = mmc_mk_nil();
            tmpMeta33 = __omcQ_24tmpVar11;
          }
          _bound_clocks = tmpMeta33;

          {
            modelica_metatype _var;
            for (tmpMeta37 = _bound_clocks; !listEmpty(tmpMeta37); tmpMeta37=MMC_CDR(tmpMeta37))
            {
              _var = MMC_CAR(tmpMeta37);
              tmpMeta38 = mmc_mk_cons(omc_NBEquation_Equation_generateBindingEquation(threadData, _var, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 2))), 0 /* false */, _new_iters), _binding_clck);
              _binding_clck = tmpMeta38;
            }
          }

          tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[3] = omc_NBEquation_EquationPointers_addList(threadData, _binding_cont, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 3))));
          _eqData = tmpMeta40;

          tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[4] = omc_NBEquation_EquationPointers_addList(threadData, _binding_cont, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 4))));
          _eqData = tmpMeta41;

          tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[5] = omc_NBEquation_EquationPointers_addList(threadData, _binding_cont, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 5))));
          _eqData = tmpMeta42;

          tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[3] = omc_NBEquation_EquationPointers_addList(threadData, _binding_disc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 3))));
          _eqData = tmpMeta43;

          tmpMeta44 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta44), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta44))[4] = omc_NBEquation_EquationPointers_addList(threadData, _binding_disc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 4))));
          _eqData = tmpMeta44;

          tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[7] = omc_NBEquation_EquationPointers_addList(threadData, _binding_disc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 7))));
          _eqData = tmpMeta45;

          tmpMeta46 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta46), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta46))[3] = omc_NBEquation_EquationPointers_addList(threadData, _binding_rec, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 3))));
          _eqData = tmpMeta46;

          tmpMeta47 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta47), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta47))[4] = omc_NBEquation_EquationPointers_addList(threadData, _binding_rec, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 4))));
          _eqData = tmpMeta47;

          tmpMeta48 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta48), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta48))[5] = omc_NBEquation_EquationPointers_addList(threadData, _binding_rec, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 5))));
          _eqData = tmpMeta48;

          tmpMeta49 = MMC_TAGPTR(mmc_alloc_words(11));
          memcpy(MMC_UNTAGPTR(tmpMeta49), MMC_UNTAGPTR(_eqData), 11*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta49))[6] = omc_NBEquation_EquationPointers_addList(threadData, _binding_clck, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_eqData), 6))));
          _eqData = tmpMeta49;

          tmpMeta50 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta50), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta50))[11] = _eqData;
          _bdae = tmpMeta50;

          tmpMeta51 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta51), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta51))[10] = omc_NBVariable_VarData_addTypedList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 10))), omc_UnorderedSet_toList(threadData, _new_iters), 9);
          _bdae = tmpMeta51;

          if(omc_Flags_isSet(threadData, _OMC_LIT11))
          {
            tmpMeta53 = stringAppend(intString(omc_NBEquation_EqData_scalarSize(threadData, _eqData, 0 /* false */)),_OMC_LIT4);
            tmpMeta54 = stringAppend(tmpMeta53,intString(omc_NBEquation_EqData_size(threadData, _eqData)));
            tmpMeta55 = stringAppend(tmpMeta54,_OMC_LIT5);
            tmpMeta56 = stringAppend(intString(omc_NBVariable_VarData_scalarSize(threadData, _varData, 0 /* false */)),_OMC_LIT4);
            tmpMeta57 = stringAppend(tmpMeta56,intString(omc_NBVariable_VarData_size(threadData, _varData)));
            tmpMeta58 = stringAppend(tmpMeta57,_OMC_LIT5);
            tmpMeta52 = mmc_mk_cons(tmpMeta55, mmc_mk_cons(tmpMeta58, MMC_REFSTRUCTLIT(mmc_nil)));
            omc_Error_addSourceMessage(threadData, _OMC_LIT3, tmpMeta52, _OMC_LIT8);
          }

          if(omc_Flags_isSet(threadData, _OMC_LIT22))
          {
            tmpMeta59 = mmc_mk_box1(0, _OMC_LIT12);
            tmpMeta60 = stringAppend(_OMC_LIT13,intString(listLength(_binding_cont)));
            tmpMeta61 = stringAppend(tmpMeta60,_OMC_LIT14);
            tmpMeta62 = stringAppend(omc_List_toString(threadData, _binding_cont, (modelica_fnptr) mmc_mk_box2(0,closure0_NBEquation_Equation_pointerToString,tmpMeta59), omc_StringUtil_headline__4(threadData, tmpMeta61), _OMC_LIT6, _OMC_LIT15, _OMC_LIT6, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT16);
            fputs(MMC_STRINGDATA(tmpMeta62),stdout);

            tmpMeta63 = mmc_mk_box1(0, _OMC_LIT12);
            tmpMeta64 = stringAppend(_OMC_LIT17,intString(listLength(_binding_clck)));
            tmpMeta65 = stringAppend(tmpMeta64,_OMC_LIT14);
            tmpMeta66 = stringAppend(omc_List_toString(threadData, _binding_clck, (modelica_fnptr) mmc_mk_box2(0,closure1_NBEquation_Equation_pointerToString,tmpMeta63), omc_StringUtil_headline__4(threadData, tmpMeta65), _OMC_LIT6, _OMC_LIT15, _OMC_LIT6, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT16);
            fputs(MMC_STRINGDATA(tmpMeta66),stdout);

            tmpMeta67 = mmc_mk_box1(0, _OMC_LIT12);
            tmpMeta68 = stringAppend(_OMC_LIT18,intString(listLength(_binding_disc)));
            tmpMeta69 = stringAppend(tmpMeta68,_OMC_LIT14);
            tmpMeta70 = stringAppend(omc_List_toString(threadData, _binding_disc, (modelica_fnptr) mmc_mk_box2(0,closure2_NBEquation_Equation_pointerToString,tmpMeta67), omc_StringUtil_headline__4(threadData, tmpMeta69), _OMC_LIT6, _OMC_LIT15, _OMC_LIT6, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT16);
            fputs(MMC_STRINGDATA(tmpMeta70),stdout);

            tmpMeta71 = mmc_mk_box1(0, _OMC_LIT12);
            tmpMeta72 = stringAppend(_OMC_LIT19,intString(listLength(_binding_rec)));
            tmpMeta73 = stringAppend(tmpMeta72,_OMC_LIT14);
            tmpMeta74 = stringAppend(omc_List_toString(threadData, _binding_rec, (modelica_fnptr) mmc_mk_box2(0,closure3_NBEquation_Equation_pointerToString,tmpMeta71), omc_StringUtil_headline__4(threadData, tmpMeta73), _OMC_LIT6, _OMC_LIT15, _OMC_LIT6, 0 /* false */, ((modelica_integer) 0)),_OMC_LIT16);
            fputs(MMC_STRINGDATA(tmpMeta74),stdout);
          }
          tmpMeta1 = _bdae;
          goto tmp7_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT26, _OMC_LIT28);
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
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}

