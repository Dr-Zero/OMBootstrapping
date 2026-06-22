#ifndef SimCodeDump__H
#define SimCodeDump__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Tpl_BlockType_BT__INDENT__desc;

extern struct record_description Tpl_IterOptions_ITER__OPTIONS__desc;

extern struct record_description Tpl_StringToken_ST__NEW__LINE__desc;

extern struct record_description Tpl_StringToken_ST__STRING__desc;

extern struct record_description Tpl_Text_MEM__TEXT__desc;


DLLDirection
modelica_metatype omc_SimCodeDump_printExpStrEscaped(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_exp);
#define boxptr_SimCodeDump_printExpStrEscaped omc_SimCodeDump_printExpStrEscaped
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeDump_printExpStrEscaped,2,0) {(void*) boxptr_SimCodeDump_printExpStrEscaped,0}};
#define boxvar_SimCodeDump_printExpStrEscaped MMC_REFSTRUCTLIT(boxvar_lit_SimCodeDump_printExpStrEscaped)


DLLDirection
modelica_metatype omc_SimCodeDump_dumpAlias(threadData_t *threadData, modelica_metatype _in_txt, modelica_metatype _in_a_alias);
#define boxptr_SimCodeDump_dumpAlias omc_SimCodeDump_dumpAlias
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeDump_dumpAlias,2,0) {(void*) boxptr_SimCodeDump_dumpAlias,0}};
#define boxvar_SimCodeDump_dumpAlias MMC_REFSTRUCTLIT(boxvar_lit_SimCodeDump_dumpAlias)


DLLDirection
modelica_metatype omc_SimCodeDump_dumpVarsShort(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_vars);
#define boxptr_SimCodeDump_dumpVarsShort omc_SimCodeDump_dumpVarsShort
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeDump_dumpVarsShort,2,0) {(void*) boxptr_SimCodeDump_dumpVarsShort,0}};
#define boxvar_SimCodeDump_dumpVarsShort MMC_REFSTRUCTLIT(boxvar_lit_SimCodeDump_dumpVarsShort)


#define boxptr_SimCodeDump_lm__46 omc_SimCodeDump_lm__46

#ifdef __cplusplus
}
#endif
#endif
