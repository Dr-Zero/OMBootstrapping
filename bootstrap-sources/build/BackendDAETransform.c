#include "omc_simulation_settings.h"
#include "BackendDAETransform.h"
#define _OMC_LIT0_data "function traverseBackendDAEExpsEqnWithSymbolicOperation failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,62,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "/projects/OpenModelica-session2/OMCompiler/Compiler/BackEnd/BackendDAETransform.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,82,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,1.781983298e9);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(681)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(681)),MMC_IMMEDIATE(MMC_TAGFIXNUM(109)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,9,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,41,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT3,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT4}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "BackendDAETransform.getEquationAndSolvedVarIndxes failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,57,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "BackendDAETransform.getEquationAndSolvedVar failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,51,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,1,5) {&BackendDAE_VarKind_STATE__DER__desc,}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT9,0.0);
#define _OMC_LIT9 MMC_REFREALLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data " ;\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,5,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data " , "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,3,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,1,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "\n[\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,5,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "\n]\n  *\n[\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,11,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "\n]\n  =\n[\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,11,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "\n]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,2,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,1,6) {&ErrorTypes_MessageType_SYMBOLIC__desc,}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "The linear system: %1\n might be structurally or numerically singular for variable %3 since U(%2,%2) = 0.0. It might be hard to solve. Compilation continues anyway."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,163,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(181)),_OMC_LIT17,_OMC_LIT18,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "\n["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,2,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "] * ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,5,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "] = ["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,5,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "Linear solver (%s) returned invalid input for linear system %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,63,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(180)),_OMC_LIT17,_OMC_LIT25,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "LAPACK/dgesv"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,12,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,1,7) {&BackendDAE_JacobianType_JAC__NO__ANALYTIC__desc,}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,1,3) {&BackendDAE_BaseClockPartitionKind_UNKNOWN__PARTITION__desc,}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT31,1,3) {&BackendDAE_IndexType_ABSOLUTE__desc,}};
#define _OMC_LIT31 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "disableJacsforSCC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,17,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Disables calculation of jacobians to detect if a SCC is linear or non-linear. By disabling all SCC will handled like non-linear."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,128,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT34,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(140)),_OMC_LIT32,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT33}};
#define _OMC_LIT34 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "BackendDAETransform.analyseStrongComponentBlock failed (Purely discrete algebraic loops cannot be solved by iterative processes. Try to break them open using the delay() operator.)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,181,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT36_6,1.781983298e9);
#define _OMC_LIT36_6 MMC_REFREALLIT(_OMC_LIT_STRUCT36_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(337)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(337)),MMC_IMMEDIATE(MMC_TAGFIXNUM(48)),_OMC_LIT36_6}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "BackendDAETransform.analyseStrongComponentBlock failed\nvariables:\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,68,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,3,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "\nequations:\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,14,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT40_6,1.781983298e9);
#define _OMC_LIT40_6 MMC_REFREALLIT(_OMC_LIT_STRUCT40_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(347)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(347)),MMC_IMMEDIATE(MMC_TAGFIXNUM(48)),_OMC_LIT40_6}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "function analyseStrongComponentBlock failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,43,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT42_6,1.781983298e9);
#define _OMC_LIT42_6 MMC_REFREALLIT(_OMC_LIT_STRUCT42_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(351)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(351)),MMC_IMMEDIATE(MMC_TAGFIXNUM(90)),_OMC_LIT42_6}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "function analyseStrongComponentScalar failed"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,44,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT44_6,1.781983298e9);
#define _OMC_LIT44_6 MMC_REFREALLIT(_OMC_LIT_STRUCT44_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(202)),MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_IMMEDIATE(MMC_TAGFIXNUM(202)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT44_6}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "function strongComponentsScalar failed (sorting strong components)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,66,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT46_6,1.781983298e9);
#define _OMC_LIT46_6 MMC_REFREALLIT(_OMC_LIT_STRUCT46_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT1,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(113)),MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),MMC_IMMEDIATE(MMC_TAGFIXNUM(113)),MMC_IMMEDIATE(MMC_TAGFIXNUM(113)),_OMC_LIT46_6}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
#include "util/modelica.h"

#include "BackendDAETransform_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_collapseArrayCrefExpWork2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_collapseArrayCrefExpWork2,2,0) {(void*) boxptr_BackendDAETransform_collapseArrayCrefExpWork2,0}};
#define boxvar_BackendDAETransform_collapseArrayCrefExpWork2 MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_collapseArrayCrefExpWork2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_collapseArrayCrefExpWork(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype __omcQ_24in_5Ft, modelica_boolean *out_cont, modelica_metatype *out_t);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_collapseArrayCrefExpWork(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype __omcQ_24in_5Ft, modelica_metatype *out_cont, modelica_metatype *out_t);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_collapseArrayCrefExpWork,2,0) {(void*) boxptr_BackendDAETransform_collapseArrayCrefExpWork,0}};
#define boxvar_BackendDAETransform_collapseArrayCrefExpWork MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_collapseArrayCrefExpWork)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_traverseBackendDAEExpsWhenOperatorWithSymbolicOperation(threadData_t *threadData, modelica_metatype _inStmtLst, modelica_fnptr _func, modelica_metatype _inArg, modelica_metatype *out_outArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_traverseBackendDAEExpsWhenOperatorWithSymbolicOperation,2,0) {(void*) boxptr_BackendDAETransform_traverseBackendDAEExpsWhenOperatorWithSymbolicOperation,0}};
#define boxvar_BackendDAETransform_traverseBackendDAEExpsWhenOperatorWithSymbolicOperation MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_traverseBackendDAEExpsWhenOperatorWithSymbolicOperation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_traverseBackendDAEExpsEqnLstLstWithSymbolicOperation(threadData_t *threadData, modelica_metatype _inEqns, modelica_fnptr _func, modelica_metatype _inTypeA, modelica_metatype _iAcc, modelica_metatype *out_outTypeA);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_traverseBackendDAEExpsEqnLstLstWithSymbolicOperation,2,0) {(void*) boxptr_BackendDAETransform_traverseBackendDAEExpsEqnLstLstWithSymbolicOperation,0}};
#define boxvar_BackendDAETransform_traverseBackendDAEExpsEqnLstLstWithSymbolicOperation MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_traverseBackendDAEExpsEqnLstLstWithSymbolicOperation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_traverseBackendDAEExpsLstEqnWithSymbolicOperation(threadData_t *threadData, modelica_metatype _inExps, modelica_fnptr _func, modelica_metatype _inTypeA, modelica_metatype _iAcc, modelica_metatype *out_outTypeA);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_traverseBackendDAEExpsLstEqnWithSymbolicOperation,2,0) {(void*) boxptr_BackendDAETransform_traverseBackendDAEExpsLstEqnWithSymbolicOperation,0}};
#define boxvar_BackendDAETransform_traverseBackendDAEExpsLstEqnWithSymbolicOperation MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_traverseBackendDAEExpsLstEqnWithSymbolicOperation)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_transformXToXd(threadData_t *threadData, modelica_metatype _inVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_transformXToXd,2,0) {(void*) boxptr_BackendDAETransform_transformXToXd,0}};
#define boxvar_BackendDAETransform_transformXToXd MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_transformXToXd)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendDAETransform_analyzeConstantJacobian(threadData_t *threadData, modelica_metatype _inJac, modelica_integer _inSize, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inShared);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_analyzeConstantJacobian(threadData_t *threadData, modelica_metatype _inJac, modelica_metatype _inSize, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inShared);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_analyzeConstantJacobian,2,0) {(void*) boxptr_BackendDAETransform_analyzeConstantJacobian,0}};
#define boxvar_BackendDAETransform_analyzeConstantJacobian MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_analyzeConstantJacobian)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendDAETransform_crefsAreArray(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _crefLst);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_crefsAreArray(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _crefLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_crefsAreArray,2,0) {(void*) boxptr_BackendDAETransform_crefsAreArray,0}};
#define boxvar_BackendDAETransform_crefsAreArray MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_crefsAreArray)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_analyseStrongComponentBlock(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inEqnLst, modelica_metatype _inVarLst, modelica_metatype _inVarindxLst, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _mapEqnIncRow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_analyseStrongComponentBlock,2,0) {(void*) boxptr_BackendDAETransform_analyseStrongComponentBlock,0}};
#define boxvar_BackendDAETransform_analyseStrongComponentBlock MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_analyseStrongComponentBlock)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_uniqueComp(threadData_t *threadData, modelica_integer _c, modelica_integer _mark, modelica_metatype _markarray, modelica_metatype _iAcc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_uniqueComp(threadData_t *threadData, modelica_metatype _c, modelica_metatype _mark, modelica_metatype _markarray, modelica_metatype _iAcc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_uniqueComp,2,0) {(void*) boxptr_BackendDAETransform_uniqueComp,0}};
#define boxvar_BackendDAETransform_uniqueComp MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_uniqueComp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_analyseStrongComponentScalar(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _syst, modelica_metatype _shared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _imark, modelica_metatype _markarray, modelica_integer *out_omark);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_analyseStrongComponentScalar(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _syst, modelica_metatype _shared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _imark, modelica_metatype _markarray, modelica_metatype *out_omark);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_analyseStrongComponentScalar,2,0) {(void*) boxptr_BackendDAETransform_analyseStrongComponentScalar,0}};
#define boxvar_BackendDAETransform_analyseStrongComponentScalar MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_analyseStrongComponentScalar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_analyseStrongComponentsScalar(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _syst, modelica_metatype _shared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _imark, modelica_metatype _markarray);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_analyseStrongComponentsScalar(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _syst, modelica_metatype _shared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _imark, modelica_metatype _markarray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_BackendDAETransform_analyseStrongComponentsScalar,2,0) {(void*) boxptr_BackendDAETransform_analyseStrongComponentsScalar,0}};
#define boxvar_BackendDAETransform_analyseStrongComponentsScalar MMC_REFSTRUCTLIT(boxvar_lit_BackendDAETransform_analyseStrongComponentsScalar)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_collapseArrayCrefExpWork2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe)
{
  modelica_metatype _e = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype _dims = NULL;
  modelica_metatype _ds = NULL;
  modelica_integer _len;
  modelica_integer _exp_count;
  modelica_metatype _exps = NULL;
  modelica_metatype _exp1 = NULL;
  modelica_metatype _cr1 = NULL;
  modelica_metatype _cr2 = NULL;
  modelica_metatype _subs = NULL;
  modelica_integer _ndim;
  modelica_integer tmp14;
  modelica_boolean tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_integer tmp28;
  modelica_metatype tmpMeta29;
  modelica_boolean tmp30;
  modelica_integer tmp31;
  modelica_boolean tmp33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _e = __omcQ_24in_5Fe;
  // _ty has no default value.
  // _dims has no default value.
  // _ds has no default value.
  // _len has no default value.
  // _exp_count has no default value.
  // _exps has no default value.
  // _exp1 has no default value.
  // _cr1 has no default value.
  // _cr2 has no default value.
  // _subs has no default value.
  // _ndim has no default value.
  
  
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
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,6,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          
          _ty = tmpMeta6;
          _dims = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _dims;
          tmpMeta[0+1] = _ty;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,6,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          
          _ty = tmpMeta8;
          _dims = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _dims;
          tmpMeta[0+1] = _ty;
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
  _dims = tmpMeta[0+0];
  _ty = tmpMeta[0+1];

  { /* match expression */
    modelica_metatype tmp12_1;
    tmp12_1 = omc_Types_arrayElementType(threadData, _ty);
    {
      volatile mmc_switch_type tmp12;
      int tmp13;
      tmp12 = 0;
      for (; tmp12 < 2; tmp12++) {
        switch (MMC_SWITCH_CAST(tmp12)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp12_1,9,4) == 0) goto tmp11_end;
          
          /* Pattern matching succeeded */
          goto goto_10;
          goto tmp11_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          goto tmp11_done;
        }
        }
        goto tmp11_end;
        tmp11_end: ;
      }
      goto goto_10;
      goto_10:;
      MMC_THROW_INTERNAL();
      goto tmp11_done;
      tmp11_done:;
    }
  }
  ;

  _ds = omc_Expression_dimensionsSizes(threadData, _dims);

  _ndim = listLength(_ds);

  {
    modelica_integer __omcQ_24tmpVar1;
    modelica_integer __omcQ_24tmpVar0;
    modelica_integer tmp15;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = _ds;
    __omcQ_24tmpVar1 = ((modelica_integer) 1); /* defaultValue */
    while(1) {
      tmp15 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp15--;
      }
      if (tmp15 == 0) {
        __omcQ_24tmpVar0 = mmc_unbox_integer(_i);
        __omcQ_24tmpVar1 = (__omcQ_24tmpVar1) * (__omcQ_24tmpVar0);
      } else if (tmp15 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmp14 = __omcQ_24tmpVar1;
  }
  _len = tmp14;

  /* Pattern-matching assignment */
  tmp16 = (_len > ((modelica_integer) 0));
  if (1 /* true */ != tmp16) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmpMeta17 = omc_Expression_flattenArrayExpToList(threadData, _e);
  if (listEmpty(tmpMeta17)) MMC_THROW_INTERNAL();
  tmpMeta18 = MMC_CAR(tmpMeta17);
  tmpMeta19 = MMC_CDR(tmpMeta17);
  _exp1 = tmpMeta18;
  _exps = tmpMeta19;

  /* Pattern-matching assignment */
  tmpMeta20 = _exp1;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta20,6,2) == 0) MMC_THROW_INTERNAL();
  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
  _cr1 = tmpMeta21;

  _subs = omc_ComponentReference_crefLastSubs(threadData, _cr1);

  /* Pattern-matching assignment */
  tmp22 = (_ndim == listLength(_subs));
  if (1 /* true */ != tmp22) MMC_THROW_INTERNAL();

  /* Pattern-matching assignment */
  tmp23 = (listLength(_subs) == listLength(omc_ComponentReferenceBasics_crefSubs(threadData, _cr1)));
  if (1 /* true */ != tmp23) MMC_THROW_INTERNAL();

  {
    modelica_metatype _sub;
    for (tmpMeta24 = _subs; !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
    {
      _sub = MMC_CAR(tmpMeta24);
      /* Pattern-matching assignment */
      tmpMeta25 = _sub;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta25,2,1) == 0) MMC_THROW_INTERNAL();
      tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta26,0,1) == 0) MMC_THROW_INTERNAL();
      tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
      tmp28 = mmc_unbox_integer(tmpMeta27);
      if (1 != tmp28) MMC_THROW_INTERNAL();
    }
  }

  _exp_count = ((modelica_integer) 1) + listLength(_exps);

  /* Pattern-matching assignment */
  tmp30 = (_exp_count == _len);
  if (1 /* true */ != tmp30) MMC_THROW_INTERNAL();

  _dims = omc_TypesDump_getDimensions(threadData, omc_ComponentReference_crefLastType(threadData, _cr1));

  /* Pattern-matching assignment */
  {
    modelica_integer __omcQ_24tmpVar3;
    modelica_integer __omcQ_24tmpVar2;
    modelica_integer tmp32;
    modelica_metatype _i_loopVar = 0;
    modelica_metatype _i;
    _i_loopVar = omc_Expression_dimensionsSizes(threadData, _dims);
    __omcQ_24tmpVar3 = ((modelica_integer) 1); /* defaultValue */
    while(1) {
      tmp32 = 1;
      if (!listEmpty(_i_loopVar)) {
        _i = MMC_CAR(_i_loopVar);
        _i_loopVar = MMC_CDR(_i_loopVar);
        tmp32--;
      }
      if (tmp32 == 0) {
        __omcQ_24tmpVar2 = mmc_unbox_integer(_i);
        __omcQ_24tmpVar3 = (__omcQ_24tmpVar3) * (__omcQ_24tmpVar2);
      } else if (tmp32 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmp31 = __omcQ_24tmpVar3;
  }
  tmp33 = (_exp_count == tmp31);
  if (1 /* true */ != tmp33) MMC_THROW_INTERNAL();

  {
    modelica_metatype _exp;
    for (tmpMeta34 = _exps; !listEmpty(tmpMeta34); tmpMeta34=MMC_CDR(tmpMeta34))
    {
      _exp = MMC_CAR(tmpMeta34);
      /* Pattern-matching assignment */
      tmpMeta35 = _exp;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,6,2) == 0) MMC_THROW_INTERNAL();
      tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
      _cr2 = tmpMeta36;

      /* Pattern-matching assignment */
      tmp37 = (_ndim == listLength(omc_ComponentReference_crefLastSubs(threadData, _cr2)));
      if (1 /* true */ != tmp37) MMC_THROW_INTERNAL();

      /* Pattern-matching assignment */
      tmp38 = omc_ComponentReferenceBasics_crefEqualWithoutSubs(threadData, _cr1, _cr2);
      if (1 /* true */ != tmp38) MMC_THROW_INTERNAL();

      /* Pattern-matching assignment */
      tmp39 = (((modelica_integer) 1) == omc_ComponentReferenceBasics_crefCompareIntSubscript(threadData, _cr2, _cr1));
      if (1 /* true */ != tmp39) MMC_THROW_INTERNAL();

      _cr1 = _cr2;
    }
  }

  _e = omc_Expression_makeCrefExp(threadData, omc_ComponentReferenceBasics_crefStripLastSubs(threadData, _cr1), _ty);
  _return: OMC_LABEL_UNUSED
  return _e;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_collapseArrayCrefExpWork(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype __omcQ_24in_5Ft, modelica_boolean *out_cont, modelica_metatype *out_t)
{
  modelica_metatype _e = NULL;
  modelica_boolean _cont;
  modelica_metatype _t = NULL;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _e = __omcQ_24in_5Fe;
  // _cont has no default value.
  _t = __omcQ_24in_5Ft;
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _e;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,17,3) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = omc_BackendDAETransform_collapseArrayCrefExpWork2(threadData, _e);
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,16,3) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = omc_BackendDAETransform_collapseArrayCrefExpWork2(threadData, _e);
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _e;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _e = tmpMeta[0+0];
  _cont = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_cont) { *out_cont = _cont; }
  if (out_t) { *out_t = _t; }
  return _e;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_collapseArrayCrefExpWork(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype __omcQ_24in_5Ft, modelica_metatype *out_cont, modelica_metatype *out_t)
{
  modelica_boolean _cont;
  modelica_metatype _e = NULL;
  _e = omc_BackendDAETransform_collapseArrayCrefExpWork(threadData, __omcQ_24in_5Fe, __omcQ_24in_5Ft, &_cont, out_t);
  /* skip box _e; DAE.Exp */
  if (out_cont) { *out_cont = mmc_mk_icon(_cont); }
  /* skip box _t; polymorphic<T> */
  return _e;
}

DLLDirection
modelica_metatype omc_BackendDAETransform_collapseArrayCrefExp(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_outTpl)
{
  modelica_metatype _outExp = NULL;
  modelica_metatype _outTpl = NULL;
  modelica_metatype _ops = NULL;
  modelica_metatype _t = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExp has no default value.
  // _outTpl has no default value.
  // _ops has no default value.
  // _t has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _inTpl;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _ops = tmpMeta2;
  _t = tmpMeta3;

  _outExp = omc_Expression_traverseExpTopDown(threadData, _inExp, boxvar_BackendDAETransform_collapseArrayCrefExpWork, _t ,&_t);

  if((!omc_ExpressionBasics_expEqual(threadData, _inExp, _outExp)))
  {
    tmpMeta5 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _inExp);
    tmpMeta6 = mmc_mk_box2(3, &DAE_EquationExp_PARTIAL__EQUATION__desc, _outExp);
    tmpMeta7 = mmc_mk_box3(4, &DAE_SymbolicOperation_SIMPLIFY__desc, tmpMeta5, tmpMeta6);
    tmpMeta4 = mmc_mk_cons(tmpMeta7, _ops);
    tmpMeta8 = mmc_mk_box2(0, tmpMeta4, _t);
    _outTpl = tmpMeta8;
  }
  else
  {
    _outTpl = _inTpl;
  }
  _return: OMC_LABEL_UNUSED
  if (out_outTpl) { *out_outTpl = _outTpl; }
  return _outExp;
}

static modelica_metatype closure0_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation(threadData_t *thData, modelica_metatype closure, modelica_metatype inEquation, modelica_metatype inTypeA, modelica_metatype tmp2)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation(thData, inEquation, func, inTypeA, tmp2);
}static modelica_metatype closure1_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation(threadData_t *thData, modelica_metatype closure, modelica_metatype inEquation, modelica_metatype inTypeA, modelica_metatype tmp4)
{
  modelica_fnptr func = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation(thData, inEquation, func, inTypeA, tmp4);
}
DLLDirection
modelica_metatype omc_BackendDAETransform_collapseArrayExpressions(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fdae)
{
  modelica_metatype _dae = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _dae = __omcQ_24in_5Fdae;
  {
    modelica_metatype _syst;
    for (tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_dae), 2))); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _syst = MMC_CAR(tmpMeta1);
      tmpMeta3 = mmc_mk_box1(0, boxvar_BackendDAETransform_collapseArrayCrefExp);
      omc_BackendEquation_traverseEquationArray__WithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), (modelica_fnptr) mmc_mk_box2(0,closure0_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation,tmpMeta3), mmc_mk_integer(((modelica_integer) 0)), NULL);

      tmpMeta5 = mmc_mk_box1(0, boxvar_BackendDAETransform_collapseArrayCrefExp);
      omc_BackendEquation_traverseEquationArray__WithUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 10))), (modelica_fnptr) mmc_mk_box2(0,closure1_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation,tmpMeta5), mmc_mk_integer(((modelica_integer) 0)), NULL);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _dae;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_traverseBackendDAEExpsWhenOperatorWithSymbolicOperation(threadData_t *threadData, modelica_metatype _inStmtLst, modelica_fnptr _func, modelica_metatype _inArg, modelica_metatype *out_outArg)
{
  modelica_metatype _outStmtLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _outArg = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta66;
  modelica_metatype tmpMeta67;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outStmtLst = tmpMeta1;
  _outArg = _inArg;
  {
    modelica_metatype _rs;
    for (tmpMeta2 = _inStmtLst; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _rs = MMC_CAR(tmpMeta2);
      { /* match expression */
        modelica_metatype tmp6_1;
        tmp6_1 = _rs;
        {
          modelica_metatype _cr = NULL;
          modelica_metatype _lhs = NULL;
          modelica_metatype _cond = NULL;
          modelica_metatype _msg = NULL;
          modelica_metatype _level = NULL;
          modelica_metatype _exp = NULL;
          modelica_metatype _src = NULL;
          modelica_metatype _ops = NULL;
          int tmp6;
          // _cr has no default value.
          // _lhs has no default value.
          // _cond has no default value.
          // _msg has no default value.
          // _level has no default value.
          // _exp has no default value.
          // _src has no default value.
          // _ops has no default value.
          {
            switch (MMC_SWITCH_CAST(valueConstructor(tmp6_1))) {
            case 3: {
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
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,0,3) == 0) goto tmp5_end;
              tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              _lhs = tmpMeta7;
              _cond = tmpMeta8;
              _src = tmpMeta9;
              /* Pattern matching succeeded */
              /* Pattern-matching tuple assignment */
              tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta14 = mmc_mk_box2(0, tmpMeta13, _inArg);
              tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta16 = mmc_mk_box2(0, tmpMeta15, _inArg);
              tmpMeta17 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _cond, tmpMeta16, &tmpMeta10) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _cond, tmpMeta14, &tmpMeta10);
              _cond = tmpMeta17;
              tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
              tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
              _ops = tmpMeta11;
              _outArg = tmpMeta12;

              /* Pattern-matching tuple assignment */
              tmpMeta21 = mmc_mk_box2(0, _ops, _outArg);
              tmpMeta22 = mmc_mk_box2(0, _ops, _outArg);
              tmpMeta23 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _lhs, tmpMeta22, &tmpMeta18) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _lhs, tmpMeta21, &tmpMeta18);
              _lhs = tmpMeta23;
              tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
              tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
              _ops = tmpMeta19;
              _outArg = tmpMeta20;

              _src = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _src);
              tmpMeta24 = mmc_mk_box4(3, &BackendDAE_WhenOperator_ASSIGN__desc, _lhs, _cond, _src);
              tmpMeta3 = tmpMeta24;
              goto tmp5_done;
            }
            case 4: {
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
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,1,3) == 0) goto tmp5_end;
              tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              _cr = tmpMeta25;
              _cond = tmpMeta26;
              _src = tmpMeta27;
              /* Pattern matching succeeded */
              /* Pattern-matching tuple assignment */
              tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta32 = mmc_mk_box2(0, tmpMeta31, _inArg);
              tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta34 = mmc_mk_box2(0, tmpMeta33, _inArg);
              tmpMeta35 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _cond, tmpMeta34, &tmpMeta28) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _cond, tmpMeta32, &tmpMeta28);
              _cond = tmpMeta35;
              tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 1));
              tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
              _ops = tmpMeta29;
              _outArg = tmpMeta30;

              /* Pattern-matching tuple assignment */
              tmpMeta39 = mmc_mk_box2(0, _ops, _outArg);
              tmpMeta40 = mmc_mk_box2(0, _ops, _outArg);
              tmpMeta41 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), omc_Expression_crefExp(threadData, _cr), tmpMeta40, &tmpMeta36) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, omc_Expression_crefExp(threadData, _cr), tmpMeta39, &tmpMeta36);
              if (mmc__uniontype__metarecord__typedef__equal(tmpMeta41,6,2) == 0) goto goto_4;
              tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 2));
              _cr = tmpMeta42;
              tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 1));
              tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 2));
              _ops = tmpMeta37;
              _outArg = tmpMeta38;

              _src = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _src);
              tmpMeta43 = mmc_mk_box4(4, &BackendDAE_WhenOperator_REINIT__desc, _cr, _cond, _src);
              tmpMeta3 = tmpMeta43;
              goto tmp5_done;
            }
            case 5: {
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
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,2,4) == 0) goto tmp5_end;
              tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 4));
              tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 5));
              _cond = tmpMeta44;
              _msg = tmpMeta45;
              _level = tmpMeta46;
              _src = tmpMeta47;
              /* Pattern matching succeeded */
              /* Pattern-matching tuple assignment */
              tmpMeta51 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta52 = mmc_mk_box2(0, tmpMeta51, _inArg);
              tmpMeta53 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta54 = mmc_mk_box2(0, tmpMeta53, _inArg);
              tmpMeta55 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _cond, tmpMeta54, &tmpMeta48) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _cond, tmpMeta52, &tmpMeta48);
              _cond = tmpMeta55;
              tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 1));
              tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 2));
              _ops = tmpMeta49;
              _outArg = tmpMeta50;

              _src = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _src);
              tmpMeta56 = mmc_mk_box5(5, &BackendDAE_WhenOperator_ASSERT__desc, _cond, _msg, _level, _src);
              tmpMeta3 = tmpMeta56;
              goto tmp5_done;
            }
            case 7: {
              modelica_metatype tmpMeta57;
              modelica_metatype tmpMeta58;
              modelica_metatype tmpMeta59;
              modelica_metatype tmpMeta60;
              modelica_metatype tmpMeta61;
              modelica_metatype tmpMeta62;
              modelica_metatype tmpMeta63;
              modelica_metatype tmpMeta64;
              modelica_metatype tmpMeta65;
              if (mmc__uniontype__metarecord__typedef__equal(tmp6_1,4,2) == 0) goto tmp5_end;
              tmpMeta57 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 2));
              tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
              _exp = tmpMeta57;
              _src = tmpMeta58;
              /* Pattern matching succeeded */
              /* Pattern-matching tuple assignment */
              tmpMeta62 = MMC_REFSTRUCTLIT(mmc_nil);
              tmpMeta63 = mmc_mk_box2(0, tmpMeta62, _outArg);
              tmpMeta64 = omc_Expression_traverseExpBottomUp(threadData, _exp, ((modelica_fnptr) _func), tmpMeta63, &tmpMeta59);
              _exp = tmpMeta64;
              tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 1));
              tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta59), 2));
              _ops = tmpMeta60;
              _outArg = tmpMeta61;

              _src = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _src);
              tmpMeta65 = mmc_mk_box3(7, &BackendDAE_WhenOperator_NORETCALL__desc, _exp, _src);
              tmpMeta3 = tmpMeta65;
              goto tmp5_done;
            }
            default:
            tmp5_default: OMC_LABEL_UNUSED; {
              
              /* Pattern matching succeeded */
              tmpMeta3 = _rs;
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
      _rs = tmpMeta3;

      tmpMeta66 = mmc_mk_cons(_rs, _outStmtLst);
      _outStmtLst = tmpMeta66;
    }
  }

  _outStmtLst = listReverse(_outStmtLst);
  _return: OMC_LABEL_UNUSED
  if (out_outArg) { *out_outArg = _outArg; }
  return _outStmtLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_traverseBackendDAEExpsEqnLstLstWithSymbolicOperation(threadData_t *threadData, modelica_metatype _inEqns, modelica_fnptr _func, modelica_metatype _inTypeA, modelica_metatype _iAcc, modelica_metatype *out_outTypeA)
{
  modelica_metatype _outEqns = NULL;
  modelica_metatype _outTypeA = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqns has no default value.
  // _outTypeA has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEqns;
    {
      modelica_metatype _eqn = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _arg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqn has no default value.
      // _rest has no default value.
      // _arg has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_iAcc);
          tmpMeta[0+1] = _inTypeA;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _eqn = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqn = omc_BackendDAETransform_traverseBackendDAEExpsEqnLstWithSymbolicOperation(threadData, _eqn, ((modelica_fnptr) _func), _inTypeA, tmpMeta8 ,&_arg);
          tmpMeta9 = mmc_mk_cons(_eqn, _iAcc);
          /* Tail recursive call */
          _inEqns = _rest;
          _inTypeA = _arg;
          _iAcc = tmpMeta9;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _outEqns = tmpMeta[0+0];
  _outTypeA = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  return _outEqns;
}

DLLDirection
modelica_metatype omc_BackendDAETransform_traverseBackendDAEExpsEqnLstWithSymbolicOperation(threadData_t *threadData, modelica_metatype _inEqns, modelica_fnptr _func, modelica_metatype _inTypeA, modelica_metatype _iAcc, modelica_metatype *out_outTypeA)
{
  modelica_metatype _outEqns = NULL;
  modelica_metatype _outTypeA = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEqns has no default value.
  // _outTypeA has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inEqns;
    {
      modelica_metatype _eqn = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _arg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _eqn has no default value.
      // _rest has no default value.
      // _arg has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_iAcc);
          tmpMeta[0+1] = _inTypeA;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _eqn = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _eqn = omc_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation(threadData, _eqn, ((modelica_fnptr) _func), _inTypeA ,&_arg);
          tmpMeta8 = mmc_mk_cons(_eqn, _iAcc);
          /* Tail recursive call */
          _inEqns = _rest;
          _inTypeA = _arg;
          _iAcc = tmpMeta8;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _outEqns = tmpMeta[0+0];
  _outTypeA = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  return _outEqns;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_traverseBackendDAEExpsLstEqnWithSymbolicOperation(threadData_t *threadData, modelica_metatype _inExps, modelica_fnptr _func, modelica_metatype _inTypeA, modelica_metatype _iAcc, modelica_metatype *out_outTypeA)
{
  modelica_metatype _outExps = NULL;
  modelica_metatype _outTypeA = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outExps has no default value.
  // _outTypeA has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inExps;
    {
      modelica_metatype _exp = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _arg = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _exp has no default value.
      // _rest has no default value.
      // _arg has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = listReverse(_iAcc);
          tmpMeta[0+1] = _inTypeA;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _exp = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _exp = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _exp, _inTypeA ,&_arg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _exp, _inTypeA ,&_arg);
          tmpMeta8 = mmc_mk_cons(_exp, _iAcc);
          /* Tail recursive call */
          _inExps = _rest;
          _inTypeA = _arg;
          _iAcc = tmpMeta8;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
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
  _outExps = tmpMeta[0+0];
  _outTypeA = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  return _outExps;
}

DLLDirection
modelica_metatype omc_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation(threadData_t *threadData, modelica_metatype _inEquation, modelica_fnptr _func, modelica_metatype _inTypeA, modelica_metatype *out_outTypeA)
{
  modelica_metatype _outEquation = NULL;
  modelica_metatype _outTypeA = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquation has no default value.
  // _outTypeA has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inEquation;
    {
      modelica_metatype _e1_1 = NULL;
      modelica_metatype _e2_1 = NULL;
      modelica_metatype _e1 = NULL;
      modelica_metatype _e2 = NULL;
      modelica_metatype _cond = NULL;
      modelica_metatype _iter = NULL;
      modelica_metatype _start = NULL;
      modelica_metatype _stop = NULL;
      modelica_metatype _cr = NULL;
      modelica_metatype _cr1 = NULL;
      modelica_integer _size;
      modelica_metatype _recordSize = NULL;
      modelica_metatype _expl = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _elsepartRes = NULL;
      modelica_metatype _elsepart = NULL;
      modelica_metatype _oelsepart = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _dimSize = NULL;
      modelica_metatype _ops = NULL;
      modelica_metatype _statementLst = NULL;
      modelica_metatype _eqns = NULL;
      modelica_metatype _eqnslst = NULL;
      modelica_metatype _ext_arg_1 = NULL;
      modelica_metatype _ext_arg_2 = NULL;
      modelica_metatype _ext_arg_3 = NULL;
      modelica_metatype _crefExpand = NULL;
      modelica_metatype _eqAttr = NULL;
      modelica_metatype _whenStmtLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e1_1 has no default value.
      // _e2_1 has no default value.
      // _e1 has no default value.
      // _e2 has no default value.
      // _cond has no default value.
      // _iter has no default value.
      // _start has no default value.
      // _stop has no default value.
      // _cr has no default value.
      // _cr1 has no default value.
      // _size has no default value.
      // _recordSize has no default value.
      // _expl has no default value.
      // _eqn has no default value.
      // _elsepartRes has no default value.
      // _elsepart has no default value.
      // _oelsepart has no default value.
      // _source has no default value.
      // _dimSize has no default value.
      // _ops has no default value.
      // _statementLst has no default value.
      // _eqns has no default value.
      // _eqnslst has no default value.
      // _ext_arg_1 has no default value.
      // _ext_arg_2 has no default value.
      // _ext_arg_3 has no default value.
      // _crefExpand has no default value.
      // _eqAttr has no default value.
      // _whenStmtLst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 10; tmp4++) {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _e1 = tmpMeta6;
          _e2 = tmpMeta7;
          _source = tmpMeta8;
          _eqAttr = tmpMeta9;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box2(0, tmpMeta13, _inTypeA);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box2(0, tmpMeta15, _inTypeA);
          tmpMeta17 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1, tmpMeta16, &tmpMeta10) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1, tmpMeta14, &tmpMeta10);
          _e1_1 = tmpMeta17;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          _ops = tmpMeta11;
          _ext_arg_1 = tmpMeta12;

          /* Pattern-matching tuple assignment */
          tmpMeta21 = mmc_mk_box2(0, _ops, _ext_arg_1);
          tmpMeta22 = mmc_mk_box2(0, _ops, _ext_arg_1);
          tmpMeta23 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e2, tmpMeta22, &tmpMeta18) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e2, tmpMeta21, &tmpMeta18);
          _e2_1 = tmpMeta23;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          _ops = tmpMeta19;
          _ext_arg_2 = tmpMeta20;

          _source = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _source);
          tmpMeta24 = mmc_mk_box5(3, &BackendDAE_Equation_EQUATION__desc, _e1_1, _e2_1, _source, _eqAttr);
          tmpMeta[0+0] = tmpMeta24;
          tmpMeta[0+1] = _ext_arg_2;
          goto tmp3_done;
        }
        case 1: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _dimSize = tmpMeta25;
          _e1 = tmpMeta26;
          _e2 = tmpMeta27;
          _source = tmpMeta28;
          _eqAttr = tmpMeta29;
          _recordSize = tmpMeta30;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = mmc_mk_box2(0, tmpMeta34, _inTypeA);
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta37 = mmc_mk_box2(0, tmpMeta36, _inTypeA);
          tmpMeta38 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1, tmpMeta37, &tmpMeta31) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1, tmpMeta35, &tmpMeta31);
          _e1_1 = tmpMeta38;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 1));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          _ops = tmpMeta32;
          _ext_arg_1 = tmpMeta33;

          /* Pattern-matching tuple assignment */
          tmpMeta42 = mmc_mk_box2(0, _ops, _ext_arg_1);
          tmpMeta43 = mmc_mk_box2(0, _ops, _ext_arg_1);
          tmpMeta44 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e2, tmpMeta43, &tmpMeta39) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e2, tmpMeta42, &tmpMeta39);
          _e2_1 = tmpMeta44;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 1));
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
          _ops = tmpMeta40;
          _ext_arg_2 = tmpMeta41;

          _source = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _source);
          tmpMeta45 = mmc_mk_box7(4, &BackendDAE_Equation_ARRAY__EQUATION__desc, _dimSize, _e1_1, _e2_1, _source, _eqAttr, _recordSize);
          tmpMeta[0+0] = tmpMeta45;
          tmpMeta[0+1] = _ext_arg_2;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,8,6) == 0) goto tmp3_end;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _iter = tmpMeta46;
          _start = tmpMeta47;
          _stop = tmpMeta48;
          _eqn = tmpMeta49;
          _source = tmpMeta50;
          _eqAttr = tmpMeta51;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          _eqn = omc_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation(threadData, _eqn, ((modelica_fnptr) _func), _inTypeA ,&_outTypeA);
          tmpMeta52 = mmc_mk_box7(11, &BackendDAE_Equation_FOR__EQUATION__desc, _iter, _start, _stop, _eqn, _source, _eqAttr);
          tmpMeta[0+0] = tmpMeta52;
          tmpMeta[0+1] = _outTypeA;
          goto tmp3_done;
        }
        case 3: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,4) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _cr = tmpMeta53;
          _e2 = tmpMeta54;
          _source = tmpMeta55;
          _eqAttr = tmpMeta56;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          _e1 = omc_Expression_crefExp(threadData, _cr);

          /* Pattern-matching tuple assignment */
          tmpMeta60 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta61 = mmc_mk_box2(0, tmpMeta60, _inTypeA);
          tmpMeta62 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta63 = mmc_mk_box2(0, tmpMeta62, _inTypeA);
          tmpMeta64 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1, tmpMeta63, &tmpMeta57) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1, tmpMeta61, &tmpMeta57);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta64,6,2) == 0) goto goto_2;
          tmpMeta65 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta64), 2));
          _cr1 = tmpMeta65;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 1));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta57), 2));
          _ops = tmpMeta58;
          _ext_arg_1 = tmpMeta59;

          /* Pattern-matching tuple assignment */
          tmpMeta68 = mmc_mk_box2(0, _ops, _ext_arg_1);
          tmpMeta69 = mmc_mk_box2(0, _ops, _ext_arg_1);
          tmpMeta70 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e2, tmpMeta69, &tmpMeta66) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e2, tmpMeta68, &tmpMeta66);
          _e2_1 = tmpMeta70;
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta66), 1));
          _ops = tmpMeta67;

          _source = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _source);
          tmpMeta71 = mmc_mk_box5(5, &BackendDAE_Equation_SOLVED__EQUATION__desc, _cr1, _e2_1, _source, _eqAttr);
          tmpMeta[0+0] = tmpMeta71;
          tmpMeta[0+1] = _ext_arg_1;
          goto tmp3_done;
        }
        case 4: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,3) == 0) goto tmp3_end;
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _e1 = tmpMeta72;
          _source = tmpMeta73;
          _eqAttr = tmpMeta74;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta78 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta79 = mmc_mk_box2(0, tmpMeta78, _inTypeA);
          tmpMeta80 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta81 = mmc_mk_box2(0, tmpMeta80, _inTypeA);
          tmpMeta82 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1, tmpMeta81, &tmpMeta75) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1, tmpMeta79, &tmpMeta75);
          _e1_1 = tmpMeta82;
          tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta75), 1));
          tmpMeta77 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta75), 2));
          _ops = tmpMeta76;
          _ext_arg_1 = tmpMeta77;

          _source = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _source);
          tmpMeta83 = mmc_mk_box4(6, &BackendDAE_Equation_RESIDUAL__EQUATION__desc, _e1_1, _source, _eqAttr);
          tmpMeta[0+0] = tmpMeta83;
          tmpMeta[0+1] = _ext_arg_1;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta84;
          modelica_integer tmp85;
          modelica_metatype tmpMeta86;
          modelica_metatype tmpMeta87;
          modelica_metatype tmpMeta88;
          modelica_metatype tmpMeta89;
          modelica_metatype tmpMeta90;
          modelica_metatype tmpMeta91;
          modelica_metatype tmpMeta92;
          modelica_metatype tmpMeta93;
          modelica_metatype tmpMeta94;
          modelica_metatype tmpMeta95;
          modelica_metatype tmpMeta96;
          modelica_metatype tmpMeta97;
          modelica_metatype tmpMeta98;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,5) == 0) goto tmp3_end;
          tmpMeta84 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp85 = mmc_unbox_integer(tmpMeta84);
          tmpMeta86 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta87 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta86), 2));
          tmpMeta88 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta89 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta90 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _size = tmp85  /* pattern as ty=Integer */;
          _statementLst = tmpMeta87;
          _source = tmpMeta88;
          _crefExpand = tmpMeta89;
          _eqAttr = tmpMeta90;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta94 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta95 = mmc_mk_box2(0, tmpMeta94, _inTypeA);
          tmpMeta96 = omc_DAEUtil_traverseDAEEquationsStmts(threadData, _statementLst, ((modelica_fnptr) _func), tmpMeta95, &tmpMeta91);
          _statementLst = tmpMeta96;
          tmpMeta92 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta91), 1));
          tmpMeta93 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta91), 2));
          _ops = tmpMeta92;
          _ext_arg_1 = tmpMeta93;

          _source = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _source);
          tmpMeta97 = mmc_mk_box2(3, &DAE_Algorithm_ALGORITHM__STMTS__desc, _statementLst);
          tmpMeta98 = mmc_mk_box6(7, &BackendDAE_Equation_ALGORITHM__desc, mmc_mk_integer(_size), tmpMeta97, _source, _crefExpand, _eqAttr);
          tmpMeta[0+0] = tmpMeta98;
          tmpMeta[0+1] = _ext_arg_1;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta99;
          modelica_integer tmp100;
          modelica_metatype tmpMeta101;
          modelica_metatype tmpMeta102;
          modelica_metatype tmpMeta103;
          modelica_metatype tmpMeta104;
          modelica_metatype tmpMeta105;
          modelica_metatype tmpMeta106;
          modelica_metatype tmpMeta107;
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          modelica_metatype tmpMeta110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          modelica_metatype tmpMeta114;
          modelica_metatype tmpMeta115;
          modelica_metatype tmpMeta116;
          modelica_metatype tmpMeta117;
          modelica_metatype tmpMeta118;
          modelica_metatype tmpMeta119;
          modelica_metatype tmpMeta120;
          modelica_metatype tmpMeta121;
          modelica_metatype tmpMeta122;
          modelica_metatype tmpMeta123;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,4) == 0) goto tmp3_end;
          tmpMeta99 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp100 = mmc_unbox_integer(tmpMeta99);
          tmpMeta101 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta102 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta101), 2));
          tmpMeta103 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta101), 3));
          tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta101), 4));
          tmpMeta105 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _size = tmp100  /* pattern as ty=Integer */;
          _cond = tmpMeta102;
          _whenStmtLst = tmpMeta103;
          _oelsepart = tmpMeta104;
          _source = tmpMeta105;
          _eqAttr = tmpMeta106;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _whenStmtLst = omc_BackendDAETransform_traverseBackendDAEExpsWhenOperatorWithSymbolicOperation(threadData, _whenStmtLst, ((modelica_fnptr) _func), _inTypeA ,&_ext_arg_1);

          /* Pattern-matching tuple assignment */
          tmpMeta110 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta111 = mmc_mk_box2(0, tmpMeta110, _ext_arg_1);
          tmpMeta112 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta113 = mmc_mk_box2(0, tmpMeta112, _ext_arg_1);
          tmpMeta114 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _cond, tmpMeta113, &tmpMeta107) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _cond, tmpMeta111, &tmpMeta107);
          _cond = tmpMeta114;
          tmpMeta108 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta107), 1));
          tmpMeta109 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta107), 2));
          _ops = tmpMeta108;
          _ext_arg_2 = tmpMeta109;

          _source = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _source);

          if(isSome(_oelsepart))
          {
            /* Pattern-matching assignment */
            tmpMeta115 = _oelsepart;
            if (optionNone(tmpMeta115)) goto goto_2;
            tmpMeta116 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta115), 1));
            _elsepart = tmpMeta116;

            /* Pattern-matching tuple assignment */
            tmpMeta118 = mmc_mk_box5(8, &BackendDAE_Equation_WHEN__EQUATION__desc, mmc_mk_integer(_size), _elsepart, _source, _eqAttr);
            tmpMeta119 = omc_BackendDAETransform_traverseBackendDAEExpsEqnWithSymbolicOperation(threadData, tmpMeta118, ((modelica_fnptr) _func), _ext_arg_2, &tmpMeta117);
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta119,5,4) == 0) goto goto_2;
            tmpMeta120 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta119), 3));
            tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta119), 4));
            _elsepartRes = tmpMeta120;
            _source = tmpMeta121;
            _ext_arg_3 = tmpMeta117;

            _oelsepart = mmc_mk_some(_elsepartRes);
          }
          else
          {
            _oelsepart = mmc_mk_none();

            _ext_arg_3 = _ext_arg_2;
          }

          tmpMeta122 = mmc_mk_box4(3, &BackendDAE_WhenEquation_WHEN__STMTS__desc, _cond, _whenStmtLst, _oelsepart);
          tmpMeta123 = mmc_mk_box5(8, &BackendDAE_Equation_WHEN__EQUATION__desc, mmc_mk_integer(_size), tmpMeta122, _source, _eqAttr);
          _eqn = tmpMeta123;
          tmpMeta[0+0] = _eqn;
          tmpMeta[0+1] = _ext_arg_3;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta124;
          modelica_integer tmp125;
          modelica_metatype tmpMeta126;
          modelica_metatype tmpMeta127;
          modelica_metatype tmpMeta128;
          modelica_metatype tmpMeta129;
          modelica_metatype tmpMeta130;
          modelica_metatype tmpMeta131;
          modelica_metatype tmpMeta132;
          modelica_metatype tmpMeta133;
          modelica_metatype tmpMeta134;
          modelica_metatype tmpMeta135;
          modelica_metatype tmpMeta136;
          modelica_metatype tmpMeta137;
          modelica_metatype tmpMeta138;
          modelica_metatype tmpMeta139;
          modelica_metatype tmpMeta140;
          modelica_metatype tmpMeta141;
          modelica_metatype tmpMeta142;
          modelica_metatype tmpMeta143;
          modelica_metatype tmpMeta144;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,5) == 0) goto tmp3_end;
          tmpMeta124 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp125 = mmc_unbox_integer(tmpMeta124);
          tmpMeta126 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta127 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta128 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta129 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _size = tmp125  /* pattern as ty=Integer */;
          _e1 = tmpMeta126;
          _e2 = tmpMeta127;
          _source = tmpMeta128;
          _eqAttr = tmpMeta129;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta133 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta134 = mmc_mk_box2(0, tmpMeta133, _inTypeA);
          tmpMeta135 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta136 = mmc_mk_box2(0, tmpMeta135, _inTypeA);
          tmpMeta137 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e1, tmpMeta136, &tmpMeta130) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e1, tmpMeta134, &tmpMeta130);
          _e1_1 = tmpMeta137;
          tmpMeta131 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta130), 1));
          tmpMeta132 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta130), 2));
          _ops = tmpMeta131;
          _ext_arg_1 = tmpMeta132;

          /* Pattern-matching tuple assignment */
          tmpMeta141 = mmc_mk_box2(0, _ops, _ext_arg_1);
          tmpMeta142 = mmc_mk_box2(0, _ops, _ext_arg_1);
          tmpMeta143 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _e2, tmpMeta142, &tmpMeta138) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _e2, tmpMeta141, &tmpMeta138);
          _e2_1 = tmpMeta143;
          tmpMeta139 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta138), 1));
          tmpMeta140 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta138), 2));
          _ops = tmpMeta139;
          _ext_arg_2 = tmpMeta140;

          _source = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _source);
          tmpMeta144 = mmc_mk_box6(9, &BackendDAE_Equation_COMPLEX__EQUATION__desc, mmc_mk_integer(_size), _e1_1, _e2_1, _source, _eqAttr);
          tmpMeta[0+0] = tmpMeta144;
          tmpMeta[0+1] = _ext_arg_2;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta145;
          modelica_metatype tmpMeta146;
          modelica_metatype tmpMeta147;
          modelica_metatype tmpMeta148;
          modelica_metatype tmpMeta149;
          modelica_metatype tmpMeta150;
          modelica_metatype tmpMeta151;
          modelica_metatype tmpMeta152;
          modelica_metatype tmpMeta153;
          modelica_metatype tmpMeta154;
          modelica_metatype tmpMeta155;
          modelica_metatype tmpMeta156;
          modelica_metatype tmpMeta157;
          modelica_metatype tmpMeta158;
          modelica_metatype tmpMeta159;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,5) == 0) goto tmp3_end;
          tmpMeta145 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta146 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta147 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta148 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta149 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _expl = tmpMeta145;
          _eqnslst = tmpMeta146;
          _eqns = tmpMeta147;
          _source = tmpMeta148;
          _eqAttr = tmpMeta149;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta153 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta154 = mmc_mk_box2(0, tmpMeta153, _inTypeA);
          tmpMeta155 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta156 = omc_BackendDAETransform_traverseBackendDAEExpsLstEqnWithSymbolicOperation(threadData, _expl, ((modelica_fnptr) _func), tmpMeta154, tmpMeta155, &tmpMeta150);
          _expl = tmpMeta156;
          tmpMeta151 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta150), 1));
          tmpMeta152 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta150), 2));
          _ops = tmpMeta151;
          _ext_arg_1 = tmpMeta152;

          _source = omc_List_foldr(threadData, _ops, boxvar_ElementSource_addSymbolicTransformation, _source);

          tmpMeta157 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqnslst = omc_BackendDAETransform_traverseBackendDAEExpsEqnLstLstWithSymbolicOperation(threadData, _eqnslst, ((modelica_fnptr) _func), _ext_arg_1, tmpMeta157 ,&_ext_arg_1);

          tmpMeta158 = MMC_REFSTRUCTLIT(mmc_nil);
          _eqns = omc_BackendDAETransform_traverseBackendDAEExpsEqnLstWithSymbolicOperation(threadData, _eqns, ((modelica_fnptr) _func), _ext_arg_1, tmpMeta158 ,&_ext_arg_1);
          tmpMeta159 = mmc_mk_box6(10, &BackendDAE_Equation_IF__EQUATION__desc, _expl, _eqnslst, _eqns, _source, _eqAttr);
          tmpMeta[0+0] = tmpMeta159;
          tmpMeta[0+1] = _ext_arg_1;
          goto tmp3_done;
        }
        case 9: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT0, _OMC_LIT2);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 10) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outEquation = tmpMeta[0+0];
  _outTypeA = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outTypeA) { *out_outTypeA = _outTypeA; }
  return _outEquation;
}

DLLDirection
modelica_metatype omc_BackendDAETransform_getEquationAndSolvedVarIndxes(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype *out_outVar)
{
  modelica_metatype _outEquation = NULL;
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquation has no default value.
  // _outVar has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inComp;
    {
      modelica_integer _v;
      modelica_integer _e;
      modelica_metatype _elst = NULL;
      modelica_metatype _vlst = NULL;
      modelica_metatype _elst1 = NULL;
      modelica_metatype _vlst1 = NULL;
      modelica_metatype _vLstLst = NULL;
      modelica_metatype _innerEquations = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _e has no default value.
      // _elst has no default value.
      // _vlst has no default value.
      // _elst1 has no default value.
      // _vlst1 has no default value.
      // _vLstLst has no default value.
      // _innerEquations has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _e = tmp7  /* pattern as ty=Integer */;
          _v = tmp9  /* pattern as ty=Integer */;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_e), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_v), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta10;
          tmpMeta[0+1] = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _elst = tmpMeta12;
          _vlst = tmpMeta13;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _elst;
          tmpMeta[0+1] = _vlst;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp15  /* pattern as ty=Integer */;
          _vlst = tmpMeta16;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_e), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = _vlst;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp19  /* pattern as ty=Integer */;
          _vlst = tmpMeta20;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta21 = mmc_mk_cons(mmc_mk_integer(_e), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta21;
          tmpMeta[0+1] = _vlst;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp23  /* pattern as ty=Integer */;
          _vlst = tmpMeta24;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta25 = mmc_mk_cons(mmc_mk_integer(_e), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta25;
          tmpMeta[0+1] = _vlst;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp27  /* pattern as ty=Integer */;
          _vlst = tmpMeta28;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta29 = mmc_mk_cons(mmc_mk_integer(_e), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta29;
          tmpMeta[0+1] = _vlst;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta30;
          modelica_integer tmp31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp31 = mmc_unbox_integer(tmpMeta30);
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp31  /* pattern as ty=Integer */;
          _vlst = tmpMeta32;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta33 = mmc_mk_cons(mmc_mk_integer(_e), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta33;
          tmpMeta[0+1] = _vlst;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,4) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 3));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 4));
          
          _vlst = tmpMeta35;
          _elst = tmpMeta36;
          _innerEquations = tmpMeta37;
          /* Pattern matching succeeded */
          _elst1 = omc_List_map__3(threadData, _innerEquations, boxvar_BackendDAEUtil_getEqnAndVarsFromInnerEquation ,&_vLstLst ,NULL);

          _vlst1 = omc_List_flatten(threadData, _vLstLst);

          _elst = listAppend(_elst1, _elst);

          _vlst = listAppend(_vlst1, _vlst);
          tmpMeta[0+0] = _elst;
          tmpMeta[0+1] = _vlst;
          goto tmp3_done;
        }
        case 8: {
          modelica_boolean tmp38;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp38 = omc_Flags_isSet(threadData, _OMC_LIT5);
          if (1 /* true */ != tmp38) goto goto_2;

          omc_Debug_traceln(threadData, _OMC_LIT6);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 9) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outEquation = tmpMeta[0+0];
  _outVar = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outVar) { *out_outVar = _outVar; }
  return _outEquation;
}

DLLDirection
modelica_metatype omc_BackendDAETransform_getEquationAndSolvedVar(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inEquationArray, modelica_metatype _inVariables, modelica_metatype *out_outVar, modelica_integer *out_outIndex)
{
  modelica_metatype _outEquation = NULL;
  modelica_metatype _outVar = NULL;
  modelica_integer _outIndex;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outEquation has no default value.
  // _outVar has no default value.
  // _outIndex has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inComp;
    {
      modelica_integer _v;
      modelica_integer _e;
      modelica_metatype _elst = NULL;
      modelica_metatype _vlst = NULL;
      modelica_metatype _otherEqns = NULL;
      modelica_metatype _otherVars = NULL;
      modelica_metatype _otherVarsLst = NULL;
      modelica_metatype _eqn = NULL;
      modelica_metatype _var = NULL;
      modelica_metatype _eqnlst = NULL;
      modelica_metatype _eqnlst1 = NULL;
      modelica_metatype _varlst = NULL;
      modelica_metatype _varlst1 = NULL;
      modelica_metatype _innerEquations = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _v has no default value.
      // _e has no default value.
      // _elst has no default value.
      // _vlst has no default value.
      // _otherEqns has no default value.
      // _otherVars has no default value.
      // _otherVarsLst has no default value.
      // _eqn has no default value.
      // _var has no default value.
      // _eqnlst has no default value.
      // _eqnlst1 has no default value.
      // _varlst has no default value.
      // _varlst1 has no default value.
      // _innerEquations has no default value.
      tmp4 = 0;
      for (; tmp4 < 9; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _e = tmp7  /* pattern as ty=Integer */;
          _v = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _eqn = omc_BackendEquation_get(threadData, _inEquationArray, _e);

          _var = omc_BackendVariable_getVarAt(threadData, _inVariables, _v);
          tmpMeta10 = mmc_mk_cons(_eqn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta11 = mmc_mk_cons(_var, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta10;
          tmpMeta[0+1] = tmpMeta11;
          tmp1_c2 = _e;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,5) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _elst = tmpMeta12;
          _vlst = tmpMeta13;
          /* Pattern matching succeeded */
          _eqnlst = omc_BackendEquation_getList(threadData, _elst, _inEquationArray);

          _varlst = omc_List_map1r(threadData, _vlst, boxvar_BackendVariable_getVarAt, _inVariables);

          _e = mmc_unbox_integer(listHead(_elst));
          tmpMeta[0+0] = _eqnlst;
          tmpMeta[0+1] = _varlst;
          tmp1_c2 = _e;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,2) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp15  /* pattern as ty=Integer */;
          _vlst = tmpMeta16;
          /* Pattern matching succeeded */
          _eqn = omc_BackendEquation_get(threadData, _inEquationArray, _e);

          _varlst = omc_List_map1r(threadData, _vlst, boxvar_BackendVariable_getVarAt, _inVariables);
          tmpMeta17 = mmc_mk_cons(_eqn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta17;
          tmpMeta[0+1] = _varlst;
          tmp1_c2 = _e;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,2) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp19  /* pattern as ty=Integer */;
          _vlst = tmpMeta20;
          /* Pattern matching succeeded */
          _eqn = omc_BackendEquation_get(threadData, _inEquationArray, _e);

          _varlst = omc_List_map1r(threadData, _vlst, boxvar_BackendVariable_getVarAt, _inVariables);
          tmpMeta21 = mmc_mk_cons(_eqn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta21;
          tmpMeta[0+1] = _varlst;
          tmp1_c2 = _e;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,2) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp23  /* pattern as ty=Integer */;
          _vlst = tmpMeta24;
          /* Pattern matching succeeded */
          _eqn = omc_BackendEquation_get(threadData, _inEquationArray, _e);

          _varlst = omc_List_map1r(threadData, _vlst, boxvar_BackendVariable_getVarAt, _inVariables);
          tmpMeta25 = mmc_mk_cons(_eqn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta25;
          tmpMeta[0+1] = _varlst;
          tmp1_c2 = _e;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,2) == 0) goto tmp3_end;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp27  /* pattern as ty=Integer */;
          _vlst = tmpMeta28;
          /* Pattern matching succeeded */
          _eqn = omc_BackendEquation_get(threadData, _inEquationArray, _e);

          _varlst = omc_List_map1r(threadData, _vlst, boxvar_BackendVariable_getVarAt, _inVariables);
          tmpMeta29 = mmc_mk_cons(_eqn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta29;
          tmpMeta[0+1] = _varlst;
          tmp1_c2 = _e;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta30;
          modelica_integer tmp31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,2) == 0) goto tmp3_end;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp31 = mmc_unbox_integer(tmpMeta30);
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _e = tmp31  /* pattern as ty=Integer */;
          _vlst = tmpMeta32;
          /* Pattern matching succeeded */
          _eqn = omc_BackendEquation_get(threadData, _inEquationArray, _e);

          _varlst = omc_List_map1r(threadData, _vlst, boxvar_BackendVariable_getVarAt, _inVariables);
          tmpMeta33 = mmc_mk_cons(_eqn, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta33;
          tmpMeta[0+1] = _varlst;
          tmp1_c2 = _e;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,7,4) == 0) goto tmp3_end;
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 3));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 4));
          
          _vlst = tmpMeta35;
          _elst = tmpMeta36;
          _innerEquations = tmpMeta37;
          /* Pattern matching succeeded */
          _eqnlst = omc_BackendEquation_getList(threadData, _elst, _inEquationArray);

          _varlst = omc_List_map1r(threadData, _vlst, boxvar_BackendVariable_getVarAt, _inVariables);

          _otherEqns = omc_List_map__3(threadData, _innerEquations, boxvar_BackendDAEUtil_getEqnAndVarsFromInnerEquation ,&_otherVarsLst ,NULL);

          _otherVars = omc_List_flatten(threadData, _otherVarsLst);

          _eqnlst1 = omc_BackendEquation_getList(threadData, _otherEqns, _inEquationArray);

          _varlst1 = omc_List_map1r(threadData, _otherVars, boxvar_BackendVariable_getVarAt, _inVariables);

          _e = mmc_unbox_integer(listHead(_elst));
          tmpMeta[0+0] = listAppend(_eqnlst, _eqnlst1);
          tmpMeta[0+1] = listAppend(_varlst, _varlst1);
          tmp1_c2 = _e;
          goto tmp3_done;
        }
        case 8: {
          modelica_boolean tmp38;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp38 = omc_Flags_isSet(threadData, _OMC_LIT5);
          if (1 /* true */ != tmp38) goto goto_2;

          omc_Debug_traceln(threadData, _OMC_LIT7);
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
  _outEquation = tmpMeta[0+0];
  _outVar = tmpMeta[0+1];
  _outIndex = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_outVar) { *out_outVar = _outVar; }
  if (out_outIndex) { *out_outIndex = _outIndex; }
  return _outEquation;
}
modelica_metatype boxptr_BackendDAETransform_getEquationAndSolvedVar(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inEquationArray, modelica_metatype _inVariables, modelica_metatype *out_outVar, modelica_metatype *out_outIndex)
{
  modelica_integer _outIndex;
  modelica_metatype _outEquation = NULL;
  _outEquation = omc_BackendDAETransform_getEquationAndSolvedVar(threadData, _inComp, _inEquationArray, _inVariables, out_outVar, &_outIndex);
  /* skip box _outEquation; list<BackendDAE.Equation> */
  /* skip box _outVar; list<BackendDAE.Var> */
  if (out_outIndex) { *out_outIndex = mmc_mk_icon(_outIndex); }
  return _outEquation;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_transformXToXd(threadData_t *threadData, modelica_metatype _inVar)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype _outVar = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // __omcQ_24mrfa_5F2 has no default value.
  _outVar = _inVar;
  if(omc_BackendVariable_isStateVar(threadData, _inVar))
  {
    __omcQ_24mrfa_5F0 = omc_ComponentReference_crefPrefixDer(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inVar), 2))));

    __omcQ_24mrfa_5F1 = _OMC_LIT8;

    __omcQ_24mrfa_5F2 = mmc_mk_boolean(0 /* false */);

    tmpMeta1 = mmc_mk_box19(3, &BackendDAE_Var_VAR__desc, __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 10))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 11))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 12))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 13))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 14))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 15))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 16))), __omcQ_24mrfa_5F2, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outVar), 19))));
    _outVar = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _outVar;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendDAETransform_analyzeConstantJacobian(threadData_t *threadData, modelica_metatype _inJac, modelica_integer _inSize, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inShared)
{
  modelica_boolean _outValid;
  modelica_metatype _eqns = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _funcs = NULL;
  modelica_integer _info;
  modelica_string _infoStr = NULL;
  modelica_string _syst = NULL;
  modelica_string _varnames = NULL;
  modelica_string _varname = NULL;
  modelica_string _rhsStr = NULL;
  modelica_string _jacStr = NULL;
  modelica_string _eqnstr = NULL;
  modelica_metatype _beqs = NULL;
  modelica_metatype _rhsVals = NULL;
  modelica_metatype _jacVals = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outValid = 1 /* true */;
  // _eqns has no default value.
  // _vars has no default value.
  // _funcs has no default value.
  // _info has no default value.
  // _infoStr has no default value.
  // _syst has no default value.
  // _varnames has no default value.
  // _varname has no default value.
  // _rhsStr has no default value.
  // _jacStr has no default value.
  // _eqnstr has no default value.
  // _beqs has no default value.
  // _rhsVals has no default value.
  // _jacVals has no default value.
  _jacVals = omc_SymbolicJacobian_evaluateConstantJacobian(threadData, _inSize, _inJac);

  _rhsVals = omc_List_fill(threadData, _OMC_LIT9, _inSize);

  omc_System_dgesv(threadData, _jacVals, _rhsVals ,&_info);

  if((_info < ((modelica_integer) 0)))
  {
    _varnames = stringDelimitList(omc_List_mapMap(threadData, _inVars, boxvar_BackendVariable_varCref, boxvar_ComponentReferenceBasics_printComponentRefStr), _OMC_LIT10);

    _eqns = omc_BackendEquation_listEquation(threadData, _inEqns);

    _vars = omc_BackendVariable_listVar1(threadData, _inVars);

    _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

    _beqs = omc_BackendDAEUtil_getEqnSysRhs(threadData, _eqns, _vars, mmc_mk_some(_funcs), NULL);

    _beqs = listReverse(_beqs);

    _rhsStr = stringDelimitList(omc_List_map(threadData, _beqs, boxvar_ExpressionBasics_printExpStr), _OMC_LIT10);

    _jacStr = stringDelimitList(omc_List_map1(threadData, omc_List_mapList(threadData, _jacVals, boxvar_realString), boxvar_stringDelimitList, _OMC_LIT11), _OMC_LIT10);

    _eqnstr = omc_BackendDump_dumpEqnsStr(threadData, _inEqns);

    tmpMeta1 = stringAppend(_eqnstr,_OMC_LIT21);
    tmpMeta2 = stringAppend(tmpMeta1,_jacStr);
    tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT22);
    tmpMeta4 = stringAppend(tmpMeta3,_varnames);
    tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT23);
    tmpMeta6 = stringAppend(tmpMeta5,_rhsStr);
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT24);
    _syst = tmpMeta7;

    tmpMeta8 = mmc_mk_cons(_OMC_LIT28, mmc_mk_cons(_syst, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_Error_addMessage(threadData, _OMC_LIT27, tmpMeta8);

    _outValid = 0 /* false */;
  }
  else
  {
    if((_info > ((modelica_integer) 0)))
    {
      _varname = omc_ComponentReferenceBasics_printComponentRefStr(threadData, omc_BackendVariable_varCref(threadData, listGet(_inVars, _info)));

      _infoStr = intString(_info);

      _varnames = stringDelimitList(omc_List_mapMap(threadData, _inVars, boxvar_BackendVariable_varCref, boxvar_ComponentReferenceBasics_printComponentRefStr), _OMC_LIT10);

      _eqns = omc_BackendEquation_listEquation(threadData, _inEqns);

      _vars = omc_BackendVariable_listVar1(threadData, _inVars);

      _funcs = omc_BackendDAEUtil_getFunctions(threadData, _inShared);

      _beqs = omc_BackendDAEUtil_getEqnSysRhs(threadData, _eqns, _vars, mmc_mk_some(_funcs), NULL);

      _beqs = listReverse(_beqs);

      _rhsStr = stringDelimitList(omc_List_map(threadData, _beqs, boxvar_ExpressionBasics_printExpStr), _OMC_LIT10);

      _jacStr = stringDelimitList(omc_List_map1(threadData, omc_List_mapList(threadData, _jacVals, boxvar_realString), boxvar_stringDelimitList, _OMC_LIT11), _OMC_LIT10);

      _eqnstr = omc_BackendDump_dumpEqnsStr(threadData, _inEqns);

      tmpMeta9 = stringAppend(_OMC_LIT12,_eqnstr);
      tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT13);
      tmpMeta11 = stringAppend(tmpMeta10,_jacStr);
      tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT14);
      tmpMeta13 = stringAppend(tmpMeta12,_varnames);
      tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT15);
      tmpMeta15 = stringAppend(tmpMeta14,_rhsStr);
      tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT16);
      _syst = tmpMeta16;

      tmpMeta17 = mmc_mk_cons(_syst, mmc_mk_cons(_infoStr, mmc_mk_cons(_varname, MMC_REFSTRUCTLIT(mmc_nil))));
      omc_Error_addMessage(threadData, _OMC_LIT20, tmpMeta17);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outValid;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_analyzeConstantJacobian(threadData_t *threadData, modelica_metatype _inJac, modelica_metatype _inSize, modelica_metatype _inVars, modelica_metatype _inEqns, modelica_metatype _inShared)
{
  modelica_integer tmp1;
  modelica_boolean _outValid;
  modelica_metatype out_outValid;
  tmp1 = mmc_unbox_integer(_inSize);
  _outValid = omc_BackendDAETransform_analyzeConstantJacobian(threadData, _inJac, tmp1, _inVars, _inEqns, _inShared);
  out_outValid = mmc_mk_icon(_outValid);
  return out_outValid;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_BackendDAETransform_crefsAreArray(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _crefLst)
{
  modelica_boolean _isUnsolvable;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isUnsolvable has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _eqIn;
    {
      modelica_metatype _expLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _expLst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,16,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          
          _expLst = tmpMeta7;
          /* Pattern matching succeeded */
          omc_List_intersection1OnTrue(threadData, _expLst, _crefLst, boxvar_ExpressionBasics_expEqual ,NULL ,&_expLst);
          tmp1 = listEmpty(_expLst);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,16,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
          
          _expLst = tmpMeta9;
          /* Pattern matching succeeded */
          omc_List_intersection1OnTrue(threadData, _expLst, _crefLst, boxvar_ExpressionBasics_expEqual ,NULL ,&_expLst);
          tmp1 = listEmpty(_expLst);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _isUnsolvable = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isUnsolvable;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_crefsAreArray(threadData_t *threadData, modelica_metatype _eqIn, modelica_metatype _crefLst)
{
  modelica_boolean _isUnsolvable;
  modelica_metatype out_isUnsolvable;
  _isUnsolvable = omc_BackendDAETransform_crefsAreArray(threadData, _eqIn, _crefLst);
  out_isUnsolvable = mmc_mk_icon(_isUnsolvable);
  return out_isUnsolvable;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_analyseStrongComponentBlock(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _inEqnLst, modelica_metatype _inVarLst, modelica_metatype _inVarindxLst, modelica_metatype _isyst, modelica_metatype _ishared, modelica_metatype _mapEqnIncRow)
{
  modelica_metatype _outComp = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outComp has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;volatile modelica_metatype tmp4_4;
    tmp4_1 = _inComp;
    tmp4_2 = _inEqnLst;
    tmp4_3 = _inVarLst;
    tmp4_4 = _inVarindxLst;
    {
      modelica_integer _compelem;
      modelica_integer _v;
      modelica_metatype _comp = NULL;
      modelica_metatype _varindxs = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _m = NULL;
      modelica_metatype _mt = NULL;
      modelica_metatype _vars_1 = NULL;
      modelica_metatype _eqn_lst = NULL;
      modelica_metatype _eqn_lst1 = NULL;
      modelica_metatype _var_lst = NULL;
      modelica_metatype _var_lst_1 = NULL;
      modelica_metatype _indxdisc_var = NULL;
      modelica_metatype _eqns_1 = NULL;
      modelica_metatype _jac = NULL;
      modelica_metatype _jac_tp = NULL;
      modelica_metatype _syst = NULL;
      modelica_metatype _shared = NULL;
      modelica_string _msg = NULL;
      modelica_metatype _crlst = NULL;
      modelica_metatype _expLst = NULL;
      modelica_metatype _slst = NULL;
      modelica_boolean _jacConstant;
      modelica_boolean _mixedSystem;
      modelica_boolean _b1;
      modelica_metatype _algorithmComp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _compelem has no default value.
      // _v has no default value.
      // _comp has no default value.
      // _varindxs has no default value.
      // _ass2 has no default value.
      // _m has no default value.
      // _mt has no default value.
      // _vars_1 has no default value.
      // _eqn_lst has no default value.
      // _eqn_lst1 has no default value.
      // _var_lst has no default value.
      // _var_lst_1 has no default value.
      // _indxdisc_var has no default value.
      // _eqns_1 has no default value.
      // _jac has no default value.
      // _jac_tp has no default value.
      // _syst has no default value.
      // _shared has no default value.
      // _msg has no default value.
      // _crlst has no default value.
      // _expLst has no default value.
      // _slst has no default value.
      // _jacConstant has no default value.
      // _mixedSystem has no default value.
      // _b1 has no default value.
      // _algorithmComp has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 11; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_2);
          tmpMeta10 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,4,5) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta10)) goto tmp3_end;
          
          _compelem = tmp8  /* pattern as ty=Integer */;
          _varindxs = tmp4_4;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta12 = mmc_mk_box3(6, &BackendDAE_StrongComponent_SINGLEALGORITHM__desc, mmc_mk_integer(_compelem), _varindxs);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_boolean tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta13 = MMC_CAR(tmp4_1);
          tmpMeta14 = MMC_CDR(tmp4_1);
          tmp15 = mmc_unbox_integer(tmpMeta13);
          if (!listEmpty(tmpMeta14)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_2);
          tmpMeta17 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,6) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta17)) goto tmp3_end;
          
          _compelem = tmp15  /* pattern as ty=Integer */;
          _var_lst = tmp4_3;
          _varindxs = tmp4_4;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _crlst = omc_List_map(threadData, _var_lst, boxvar_BackendVariable_varCref);

          _b1 = mmc_unbox_boolean(omc_List_applyAndFold(threadData, _crlst, boxvar_boolAnd, boxvar_ComponentReference_isArrayElement, mmc_mk_boolean(1 /* true */)));

          if((!_b1))
          {
            _expLst = omc_List_map(threadData, _crlst, boxvar_Expression_crefExp);

            /* Pattern-matching assignment */
            tmp18 = omc_List_exist1(threadData, _inEqnLst, boxvar_BackendDAETransform_crefsAreArray, _expLst);
            if (1 /* true */ != tmp18) goto goto_2;
          }
          tmpMeta20 = mmc_mk_box3(5, &BackendDAE_StrongComponent_SINGLEARRAY__desc, mmc_mk_integer(_compelem), _varindxs);
          tmpMeta19 = mmc_mk_cons(tmpMeta20, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta19;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmp4_1);
          tmpMeta22 = MMC_CDR(tmp4_1);
          tmp23 = mmc_unbox_integer(tmpMeta21);
          if (!listEmpty(tmpMeta22)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmp4_2);
          tmpMeta25 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta24,7,5) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta25)) goto tmp3_end;
          
          _compelem = tmp23  /* pattern as ty=Integer */;
          _varindxs = tmp4_4;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta27 = mmc_mk_box3(9, &BackendDAE_StrongComponent_SINGLEIFEQUATION__desc, mmc_mk_integer(_compelem), _varindxs);
          tmpMeta26 = mmc_mk_cons(tmpMeta27, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta26;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta28 = MMC_CAR(tmp4_1);
          tmpMeta29 = MMC_CDR(tmp4_1);
          tmp30 = mmc_unbox_integer(tmpMeta28);
          if (!listEmpty(tmpMeta29)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta31 = MMC_CAR(tmp4_2);
          tmpMeta32 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta31,6,5) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta32)) goto tmp3_end;
          
          _compelem = tmp30  /* pattern as ty=Integer */;
          _varindxs = tmp4_4;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta34 = mmc_mk_box3(7, &BackendDAE_StrongComponent_SINGLECOMPLEXEQUATION__desc, mmc_mk_integer(_compelem), _varindxs);
          tmpMeta33 = mmc_mk_cons(tmpMeta34, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta35 = MMC_CAR(tmp4_1);
          tmpMeta36 = MMC_CDR(tmp4_1);
          tmp37 = mmc_unbox_integer(tmpMeta35);
          if (!listEmpty(tmpMeta36)) goto tmp3_end;
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta38 = MMC_CAR(tmp4_2);
          tmpMeta39 = MMC_CDR(tmp4_2);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta38,5,4) == 0) goto tmp3_end;
          if (!listEmpty(tmpMeta39)) goto tmp3_end;
          
          _compelem = tmp37  /* pattern as ty=Integer */;
          _varindxs = tmp4_4;
          /* Pattern matching succeeded */
          tmpMeta41 = mmc_mk_box3(8, &BackendDAE_StrongComponent_SINGLEWHENEQUATION__desc, mmc_mk_integer(_compelem), _varindxs);
          tmpMeta40 = mmc_mk_cons(tmpMeta41, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta40;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_integer tmp44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_integer tmp47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta42 = MMC_CAR(tmp4_1);
          tmpMeta43 = MMC_CDR(tmp4_1);
          tmp44 = mmc_unbox_integer(tmpMeta42);
          if (!listEmpty(tmpMeta43)) goto tmp3_end;
          if (listEmpty(tmp4_4)) goto tmp3_end;
          tmpMeta45 = MMC_CAR(tmp4_4);
          tmpMeta46 = MMC_CDR(tmp4_4);
          tmp47 = mmc_unbox_integer(tmpMeta45);
          if (!listEmpty(tmpMeta46)) goto tmp3_end;
          
          _compelem = tmp44  /* pattern as ty=Integer */;
          _v = tmp47  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta49 = mmc_mk_box3(3, &BackendDAE_StrongComponent_SINGLEEQUATION__desc, mmc_mk_integer(_compelem), mmc_mk_integer(_v));
          tmpMeta48 = mmc_mk_cons(tmpMeta49, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta48;
          goto tmp3_done;
        }
        case 6: {
          modelica_boolean tmp50;
          modelica_metatype tmpMeta51;
          modelica_boolean tmp52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          
          _comp = tmp4_1;
          _eqn_lst = tmp4_2;
          _var_lst = tmp4_3;
          _varindxs = tmp4_4;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp50 = omc_BackendVariable_hasContinuousVar(threadData, _var_lst);
          if (1 /* true */ != tmp50) goto goto_2;

          _eqn_lst1 = omc_BackendEquation_replaceDerOpInEquationList(threadData, _eqn_lst);

          _var_lst_1 = omc_List_map(threadData, _var_lst, boxvar_BackendDAETransform_transformXToXd);

          _vars_1 = omc_BackendVariable_listVar1(threadData, _var_lst_1);

          _eqns_1 = omc_BackendEquation_listEquation(threadData, _eqn_lst1);

          _mixedSystem = omc_BackendEquation_iterationVarsinRelations(threadData, _eqn_lst1, _vars_1, NULL);

          if((!omc_Flags_isSet(threadData, _OMC_LIT34)))
          {
            tmpMeta51 = MMC_REFSTRUCTLIT(mmc_nil);
            _syst = omc_BackendDAEUtil_createEqSystem(threadData, _vars_1, _eqns_1, tmpMeta51, _OMC_LIT30, omc_BackendEquation_emptyEqns(threadData));

            _m = omc_BackendDAEUtil_adjacencyMatrix(threadData, _syst, _OMC_LIT31, mmc_mk_none(), omc_BackendDAEUtil_isInitializationDAE(threadData, _ishared) ,&_mt);

            _jac = omc_SymbolicJacobian_calculateJacobian(threadData, _vars_1, _eqns_1, _m, 1 /* true */, _ishared ,&_shared);

            _jac_tp = omc_SymbolicJacobian_analyzeJacobian(threadData, _vars_1, _eqns_1, _jac ,&_jacConstant);

            if((_jacConstant && isSome(_jac)))
            {
              /* Pattern-matching assignment */
              tmp52 = omc_BackendDAETransform_analyzeConstantJacobian(threadData, omc_Util_getOption(threadData, _jac), arrayLength(_mt), _var_lst, _eqn_lst, _shared);
              if (1 /* true */ != tmp52) goto goto_2;
            }
          }
          else
          {
            _jac = mmc_mk_none();

            _jac_tp = _OMC_LIT29;
          }
          tmpMeta54 = mmc_mk_box2(3, &BackendDAE_Jacobian_FULL__JACOBIAN__desc, _jac);
          tmpMeta55 = mmc_mk_box6(4, &BackendDAE_StrongComponent_EQUATIONSYSTEM__desc, _comp, _varindxs, tmpMeta54, _jac_tp, mmc_mk_boolean(_mixedSystem));
          tmpMeta53 = mmc_mk_cons(tmpMeta55, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta1 = tmpMeta53;
          goto tmp3_done;
        }
        case 7: {
          modelica_boolean tmp56;
          modelica_boolean tmp57;
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
          
          _comp = tmp4_1;
          _eqn_lst = tmp4_2;
          _var_lst = tmp4_3;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!omc_BackendEquation_allAlgorithmsLst(threadData, _eqn_lst)) goto tmp3_end;
          /* Pattern-matching assignment */
          tmp56 = omc_BackendVariable_hasDiscreteVar(threadData, _var_lst);
          if (1 /* true */ != tmp56) goto goto_2;

          /* Pattern-matching assignment */
          tmp57 = omc_BackendVariable_hasContinuousVar(threadData, _var_lst);
          if (0 /* false */ != tmp57) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta58 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_isyst), 7)));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta58,1,3) == 0) goto goto_2;
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta58), 3));
          _ass2 = tmpMeta59;

          tmpMeta60 = MMC_REFSTRUCTLIT(mmc_nil);
          _algorithmComp = tmpMeta60;

          {
            modelica_metatype _c;
            for (tmpMeta61 = _comp; !listEmpty(tmpMeta61); tmpMeta61=MMC_CDR(tmpMeta61))
            {
              _c = MMC_CAR(tmpMeta61);
              tmpMeta62 = MMC_REFSTRUCTLIT(mmc_nil);
              _indxdisc_var = tmpMeta62;

              {
                modelica_metatype _j;
                for (tmpMeta63 = arrayGet(_mapEqnIncRow,mmc_unbox_integer(_c)) /* DAE.ASUB */; !listEmpty(tmpMeta63); tmpMeta63=MMC_CDR(tmpMeta63))
                {
                  _j = MMC_CAR(tmpMeta63);
                  tmpMeta64 = mmc_mk_cons(arrayGet(_ass2,mmc_unbox_integer(_j)) /* DAE.ASUB */, _indxdisc_var);
                  _indxdisc_var = tmpMeta64;
                }
              }

              tmpMeta67 = mmc_mk_box3(6, &BackendDAE_StrongComponent_SINGLEALGORITHM__desc, _c, _indxdisc_var);
              tmpMeta66 = mmc_mk_cons(tmpMeta67, _algorithmComp);
              _algorithmComp = tmpMeta66;
            }
          }
          tmpMeta1 = _algorithmComp;
          goto tmp3_done;
        }
        case 8: {
          modelica_boolean tmp69;
          modelica_boolean tmp70;
          modelica_metatype tmpMeta71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          
          _eqn_lst = tmp4_2;
          _var_lst = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp69 = omc_BackendVariable_hasDiscreteVar(threadData, _var_lst);
          if (1 /* true */ != tmp69) goto goto_2;

          /* Pattern-matching assignment */
          tmp70 = omc_BackendVariable_hasContinuousVar(threadData, _var_lst);
          if (0 /* false */ != tmp70) goto goto_2;

          _msg = _OMC_LIT35;

          _crlst = omc_List_map(threadData, _var_lst, boxvar_BackendVariable_varCref);

          _slst = omc_List_map(threadData, _crlst, boxvar_ComponentReferenceBasics_printComponentRefStr);

          tmpMeta71 = stringAppend(_msg,stringDelimitList(_slst, _OMC_LIT12));
          _msg = tmpMeta71;

          _slst = omc_List_map(threadData, _eqn_lst, boxvar_BackendDump_equationString);

          tmpMeta72 = stringAppend(_msg,_OMC_LIT12);
          tmpMeta73 = stringAppend(tmpMeta72,stringDelimitList(_slst, _OMC_LIT12));
          _msg = tmpMeta73;

          omc_Error_addInternalError(threadData, _msg, _OMC_LIT36);
          goto goto_2;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          
          _eqn_lst = tmp4_2;
          _var_lst = tmp4_3;
          /* Pattern matching succeeded */
          _msg = _OMC_LIT37;

          _crlst = omc_List_map(threadData, _var_lst, boxvar_BackendVariable_varCref);

          _slst = omc_List_map(threadData, _crlst, boxvar_ComponentReferenceBasics_printComponentRefStr);

          tmpMeta74 = stringAppend(_msg,stringDelimitList(_slst, _OMC_LIT38));
          _msg = tmpMeta74;

          _slst = omc_List_map(threadData, _eqn_lst, boxvar_BackendDump_equationString);

          tmpMeta75 = stringAppend(_msg,_OMC_LIT39);
          tmpMeta76 = stringAppend(tmpMeta75,stringDelimitList(_slst, _OMC_LIT38));
          _msg = tmpMeta76;

          omc_Error_addInternalError(threadData, _msg, _OMC_LIT40);
          goto goto_2;
          goto tmp3_done;
        }
        case 10: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT41, _OMC_LIT42);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 11) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outComp = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outComp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_uniqueComp(threadData_t *threadData, modelica_integer _c, modelica_integer _mark, modelica_metatype _markarray, modelica_metatype _iAcc)
{
  modelica_metatype _oAcc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _oAcc = _iAcc;
  if((_mark != mmc_unbox_integer(arrayGet(_markarray,_c) /* DAE.ASUB */)))
  {
    arrayUpdate(_markarray, _c, mmc_mk_integer(_mark));

    tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_c), _iAcc);
    _oAcc = tmpMeta1;
  }
  _return: OMC_LABEL_UNUSED
  return _oAcc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_uniqueComp(threadData_t *threadData, modelica_metatype _c, modelica_metatype _mark, modelica_metatype _markarray, modelica_metatype _iAcc)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oAcc = NULL;
  tmp1 = mmc_unbox_integer(_c);
  tmp2 = mmc_unbox_integer(_mark);
  _oAcc = omc_BackendDAETransform_uniqueComp(threadData, tmp1, tmp2, _markarray, _iAcc);
  /* skip box _oAcc; list<#Integer> */
  return _oAcc;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_analyseStrongComponentScalar(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _syst, modelica_metatype _shared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _imark, modelica_metatype _markarray, modelica_integer *out_omark)
{
  modelica_metatype _outComp = NULL;
  modelica_integer _omark;
  modelica_metatype _comp = NULL;
  modelica_metatype _vlst = NULL;
  modelica_metatype _varlst = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _eqn_lst = NULL;
  modelica_metatype _eqns = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outComp has no default value.
  _omark = ((modelica_integer) 1) + _imark;
  // _comp has no default value.
  // _vlst has no default value.
  // _varlst has no default value.
  // _vars has no default value.
  // _eqn_lst has no default value.
  // _eqns has no default value.
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
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta5 = _syst;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
          _vars = tmpMeta6;
          _eqns = tmpMeta7;

          _vlst = omc_List_map1r(threadData, _inComp, boxvar_arrayGet, _inAss2);

          _vlst = omc_List_select1(threadData, _vlst, boxvar_intGt, mmc_mk_integer(((modelica_integer) 0)));

          _varlst = omc_List_map1r(threadData, _vlst, boxvar_BackendVariable_getVarAt, _vars);

          _comp = omc_List_map1r(threadData, _inComp, boxvar_arrayGet, _mapIncRowEqn);

          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _comp = omc_List_fold2(threadData, _comp, boxvar_BackendDAETransform_uniqueComp, mmc_mk_integer(_imark), _markarray, tmpMeta8);

          _eqn_lst = omc_List_map1r(threadData, _comp, boxvar_BackendEquation_get, _eqns);

          _outComp = omc_BackendDAETransform_analyseStrongComponentBlock(threadData, _comp, _eqn_lst, _varlst, _vlst, _syst, _shared, _mapEqnIncRow);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT43, _OMC_LIT44);

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
  if (out_omark) { *out_omark = _omark; }
  return _outComp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_analyseStrongComponentScalar(threadData_t *threadData, modelica_metatype _inComp, modelica_metatype _syst, modelica_metatype _shared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _imark, modelica_metatype _markarray, modelica_metatype *out_omark)
{
  modelica_integer tmp1;
  modelica_integer _omark;
  modelica_metatype _outComp = NULL;
  tmp1 = mmc_unbox_integer(_imark);
  _outComp = omc_BackendDAETransform_analyseStrongComponentScalar(threadData, _inComp, _syst, _shared, _inAss1, _inAss2, _mapEqnIncRow, _mapIncRowEqn, tmp1, _markarray, &_omark);
  /* skip box _outComp; list<BackendDAE.StrongComponent> */
  if (out_omark) { *out_omark = mmc_mk_icon(_omark); }
  return _outComp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_BackendDAETransform_analyseStrongComponentsScalar(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _syst, modelica_metatype _shared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_integer _imark, modelica_metatype _markarray)
{
  modelica_metatype _outComps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _acomp = NULL;
  modelica_integer _mark;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outComps = tmpMeta1;
  // _acomp has no default value.
  _mark = _imark;
  {
    modelica_metatype _comp;
    for (tmpMeta2 = _inComps; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _comp = MMC_CAR(tmpMeta2);
      _acomp = omc_BackendDAETransform_analyseStrongComponentScalar(threadData, _comp, _syst, _shared, _inAss1, _inAss2, _mapEqnIncRow, _mapIncRowEqn, _mark, _markarray ,&_mark);

      _outComps = listAppend(_acomp, _outComps);
    }
  }

  _outComps = listReverseInPlace(_outComps);
  _return: OMC_LABEL_UNUSED
  return _outComps;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_BackendDAETransform_analyseStrongComponentsScalar(threadData_t *threadData, modelica_metatype _inComps, modelica_metatype _syst, modelica_metatype _shared, modelica_metatype _inAss1, modelica_metatype _inAss2, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype _imark, modelica_metatype _markarray)
{
  modelica_integer tmp1;
  modelica_metatype _outComps = NULL;
  modelica_metatype tmpMeta2;
  tmp1 = mmc_unbox_integer(_imark);
  _outComps = omc_BackendDAETransform_analyseStrongComponentsScalar(threadData, _inComps, _syst, _shared, _inAss1, _inAss2, _mapEqnIncRow, _mapIncRowEqn, tmp1, _markarray);
  /* skip box _outComps; list<BackendDAE.StrongComponent> */
  return _outComps;
}

DLLDirection
modelica_metatype omc_BackendDAETransform_varAssignmentNonScalar(threadData_t *threadData, modelica_metatype _ass1, modelica_metatype _mapIncRowEqn)
{
  modelica_metatype _outAcc = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAcc has no default value.
  _outAcc = arrayCreateNoInit(arrayLength(_ass1), mmc_mk_integer(((modelica_integer) -1)));

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = arrayLength(_ass1);
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      arrayUpdateNoBoundsChecking(_outAcc, _i, mmc_mk_integer(((mmc_unbox_integer(arrayGetNoBoundsChecking(_ass1, _i)) > ((modelica_integer) 0))?mmc_unbox_integer(arrayGet(_mapIncRowEqn,mmc_unbox_integer(arrayGetNoBoundsChecking(_ass1, _i))) /* DAE.ASUB */):((modelica_integer) -1))));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outAcc;
}

DLLDirection
modelica_metatype omc_BackendDAETransform_eqnAssignmentNonScalar(threadData_t *threadData, modelica_metatype _mapEqnIncRow, modelica_metatype _ass2)
{
  modelica_metatype _outAcc = NULL;
  modelica_metatype _elst = NULL;
  modelica_metatype _vlst = NULL;
  modelica_metatype _acc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outAcc has no default value.
  // _elst has no default value.
  // _vlst has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _acc = tmpMeta1;
  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = arrayLength(_mapEqnIncRow);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
    {
      _elst = arrayGet(_mapEqnIncRow,_i) /* DAE.ASUB */;

      {
        modelica_metatype __omcQ_24tmpVar5;
        modelica_metatype* tmp3;
        modelica_metatype tmpMeta4;
        modelica_metatype __omcQ_24tmpVar4;
        modelica_integer tmp5;
        modelica_metatype _e_loopVar = 0;
        modelica_metatype _e;
        _e_loopVar = _elst;
        tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar5 = tmpMeta4; /* defaultValue */
        tmp3 = &__omcQ_24tmpVar5;
        while(1) {
          tmp5 = 1;
          while (!listEmpty(_e_loopVar)) {
            _e = MMC_CAR(_e_loopVar);
            _e_loopVar = MMC_CDR(_e_loopVar);
            if ((mmc_unbox_integer(arrayGet(_ass2, mmc_unbox_integer(_e))) > ((modelica_integer) 0))) {
              tmp5--;
              break;
            }
          }
          if (tmp5 == 0) {
            __omcQ_24tmpVar4 = arrayGet(_ass2, mmc_unbox_integer(_e));
            *tmp3 = mmc_mk_cons(__omcQ_24tmpVar4,0);
            tmp3 = &MMC_CDR(*tmp3);
          } else if (tmp5 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp3 = mmc_mk_nil();
        tmpMeta2 = __omcQ_24tmpVar5;
      }
      _vlst = tmpMeta2;

      tmpMeta6 = mmc_mk_cons(_vlst, _acc);
      _acc = tmpMeta6;
    }
  }

  _outAcc = omc_List_listArrayReverse(threadData, _acc);
  _return: OMC_LABEL_UNUSED
  return _outAcc;
}

DLLDirection
modelica_metatype omc_BackendDAETransform_strongComponentsScalar(threadData_t *threadData, modelica_metatype _inSystem, modelica_metatype _inShared, modelica_metatype _mapEqnIncRow, modelica_metatype _mapIncRowEqn, modelica_metatype *out_outComps)
{
  modelica_metatype _outSystem = NULL;
  modelica_metatype _outComps = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outSystem has no default value.
  // _outComps has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inSystem;
    {
      modelica_metatype _syst = NULL;
      modelica_metatype _mt = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _ass1 = NULL;
      modelica_metatype _ass2 = NULL;
      modelica_metatype _markarray = NULL;
      modelica_metatype _comps_m = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _syst has no default value.
      // _mt has no default value.
      // _comps has no default value.
      // _ass1 has no default value.
      // _ass2 has no default value.
      // _markarray has no default value.
      // _comps_m has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,3) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
          
          _syst = tmp4_1;
          _mt = tmpMeta7;
          _ass1 = tmpMeta9;
          _ass2 = tmpMeta10;
          /* Pattern matching succeeded */
          _comps_m = omc_Sorting_TarjanTransposed(threadData, _mt, _ass2);

          _markarray = arrayCreate(omc_BackendEquation_getNumberOfEquations(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inSystem), 3)))), mmc_mk_integer(((modelica_integer) -1)));

          _comps = omc_BackendDAETransform_analyseStrongComponentsScalar(threadData, _comps_m, _inSystem, _inShared, _ass1, _ass2, _mapEqnIncRow, _mapIncRowEqn, ((modelica_integer) 1), _markarray);

          omc_GCExt_free(threadData, _markarray);

          _ass1 = omc_BackendDAETransform_varAssignmentNonScalar(threadData, _ass1, _mapIncRowEqn);

          tmpMeta11 = mmc_mk_box4(4, &BackendDAE_Matching_MATCHING__desc, _ass1, _ass2, _comps);
          tmpMeta12 = mmc_mk_box10(3, &BackendDAE_EqSystem_EQSYSTEM__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 3))), mmc_mk_none(), mmc_mk_none(), mmc_mk_none(), tmpMeta11, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_syst), 10))));
          _syst = tmpMeta12;
          tmpMeta[0+0] = _syst;
          tmpMeta[0+1] = _comps;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          omc_Error_addInternalError(threadData, _OMC_LIT45, _OMC_LIT46);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      tmp3_done:
      (void)tmp4;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp3_done2;
      goto_2:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp4 < 2) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _outSystem = tmpMeta[0+0];
  _outComps = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outComps) { *out_outComps = _outComps; }
  return _outSystem;
}

