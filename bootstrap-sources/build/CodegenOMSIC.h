#ifndef CodegenOMSIC__H
#define CodegenOMSIC__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description Tpl_BlockType_BT__INDENT__desc;

extern struct record_description Tpl_IterOptions_ITER__OPTIONS__desc;

extern struct record_description Tpl_StringToken_ST__LINE__desc;

extern struct record_description Tpl_StringToken_ST__NEW__LINE__desc;

extern struct record_description Tpl_StringToken_ST__STRING__desc;

extern struct record_description Tpl_StringToken_ST__STRING__LIST__desc;

extern struct record_description Tpl_Text_MEM__TEXT__desc;


DLLDirection
modelica_metatype omc_CodegenOMSIC_createMakefileIn(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_simCode, modelica_string _a_target, modelica_string _a_FileNamePrefix, modelica_string _a_makeflieName);
#define boxptr_CodegenOMSIC_createMakefileIn omc_CodegenOMSIC_createMakefileIn
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC_createMakefileIn,2,0) {(void*) boxptr_CodegenOMSIC_createMakefileIn,0}};
#define boxvar_CodegenOMSIC_createMakefileIn MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC_createMakefileIn)


#define boxptr_CodegenOMSIC_fun__99 omc_CodegenOMSIC_fun__99


#define boxptr_CodegenOMSIC_fun__98 omc_CodegenOMSIC_fun__98


#define boxptr_CodegenOMSIC_lm__96 omc_CodegenOMSIC_lm__96


#define boxptr_CodegenOMSIC_fun__94 omc_CodegenOMSIC_fun__94


#define boxptr_CodegenOMSIC_fun__93 omc_CodegenOMSIC_fun__93


#define boxptr_CodegenOMSIC_fun__92 omc_CodegenOMSIC_fun__92


#define boxptr_CodegenOMSIC_fun__91 omc_CodegenOMSIC_fun__91


#define boxptr_CodegenOMSIC_lm__90 omc_CodegenOMSIC_lm__90


#define boxptr_CodegenOMSIC_fun__89 omc_CodegenOMSIC_fun__89


#define boxptr_CodegenOMSIC_fun__88 omc_CodegenOMSIC_fun__88


#define boxptr_CodegenOMSIC_fun__85 omc_CodegenOMSIC_fun__85


#define boxptr_CodegenOMSIC_fun__84 omc_CodegenOMSIC_fun__84


#define boxptr_CodegenOMSIC_fun__83 omc_CodegenOMSIC_fun__83


#define boxptr_CodegenOMSIC_fun__82 omc_CodegenOMSIC_fun__82


#define boxptr_CodegenOMSIC_fun__81 omc_CodegenOMSIC_fun__81


#define boxptr_CodegenOMSIC_lm__80 omc_CodegenOMSIC_lm__80


#define boxptr_CodegenOMSIC_fun__79 omc_CodegenOMSIC_fun__79


#define boxptr_CodegenOMSIC_fun__78 omc_CodegenOMSIC_fun__78


#define boxptr_CodegenOMSIC_fun__77 omc_CodegenOMSIC_fun__77


#define boxptr_CodegenOMSIC_lm__76 omc_CodegenOMSIC_lm__76


#define boxptr_CodegenOMSIC_fun__75 omc_CodegenOMSIC_fun__75


#define boxptr_CodegenOMSIC_lm__74 omc_CodegenOMSIC_lm__74


#define boxptr_CodegenOMSIC_fun__73 omc_CodegenOMSIC_fun__73


DLLDirection
modelica_metatype omc_CodegenOMSIC_createMakefile(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_simCode, modelica_string _a_target, modelica_string _a_makeflieName);
#define boxptr_CodegenOMSIC_createMakefile omc_CodegenOMSIC_createMakefile
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC_createMakefile,2,0) {(void*) boxptr_CodegenOMSIC_createMakefile,0}};
#define boxvar_CodegenOMSIC_createMakefile MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC_createMakefile)


#define boxptr_CodegenOMSIC_fun__71 omc_CodegenOMSIC_fun__71


#define boxptr_CodegenOMSIC_fun__69 omc_CodegenOMSIC_fun__69


#define boxptr_CodegenOMSIC_fun__68 omc_CodegenOMSIC_fun__68


#define boxptr_CodegenOMSIC_fun__67 omc_CodegenOMSIC_fun__67


#define boxptr_CodegenOMSIC_fun__66 omc_CodegenOMSIC_fun__66


#define boxptr_CodegenOMSIC_fun__65 omc_CodegenOMSIC_fun__65


#define boxptr_CodegenOMSIC_fun__64 omc_CodegenOMSIC_fun__64


#define boxptr_CodegenOMSIC_fun__63 omc_CodegenOMSIC_fun__63


#define boxptr_CodegenOMSIC_fun__62 omc_CodegenOMSIC_fun__62


#define boxptr_CodegenOMSIC_fun__61 omc_CodegenOMSIC_fun__61


#define boxptr_CodegenOMSIC_fun__60 omc_CodegenOMSIC_fun__60


#define boxptr_CodegenOMSIC_fun__59 omc_CodegenOMSIC_fun__59


#define boxptr_CodegenOMSIC_fun__58 omc_CodegenOMSIC_fun__58


#define boxptr_CodegenOMSIC_lm__57 omc_CodegenOMSIC_lm__57


#define boxptr_CodegenOMSIC_fun__56 omc_CodegenOMSIC_fun__56


#define boxptr_CodegenOMSIC_lm__55 omc_CodegenOMSIC_lm__55


#define boxptr_CodegenOMSIC_fun__54 omc_CodegenOMSIC_fun__54


DLLDirection
modelica_metatype omc_CodegenOMSIC_generateOMSIC(threadData_t *threadData, modelica_metatype _txt, modelica_metatype _a_simCode);
#define boxptr_CodegenOMSIC_generateOMSIC omc_CodegenOMSIC_generateOMSIC
static const MMC_DEFSTRUCTLIT(boxvar_lit_CodegenOMSIC_generateOMSIC,2,0) {(void*) boxptr_CodegenOMSIC_generateOMSIC,0}};
#define boxvar_CodegenOMSIC_generateOMSIC MMC_REFSTRUCTLIT(boxvar_lit_CodegenOMSIC_generateOMSIC)


#define boxptr_CodegenOMSIC_fun__52 omc_CodegenOMSIC_fun__52

#ifdef __cplusplus
}
#endif
#endif
