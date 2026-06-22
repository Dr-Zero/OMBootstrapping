#include "omc_simulation_settings.h"
#include "HpcOmScheduler.h"
#define _OMC_LIT0_data " | "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,3,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data " , "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,3,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "{}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,2,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "node: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,6,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data " has the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,9,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data ": "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,2,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "The "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,4,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "-----------------------------------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,42,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "ConvertFixedLevelScheduleToTaskListsForTask can just handle CALCTASK_LEVEL with defined thread idx!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,100,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,3,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Scheduled task"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,14,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "Calctask"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,8,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Calctask level"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,14,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Deptask"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,7,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "Prefetch task"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,13,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "Empty task"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,10,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "Unknown"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,7,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,1,8) {&HpcOmSimCode_Task_TASKEMPTY__desc,}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,0) {MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "computeTimeFinished failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,28,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT21,0.0);
#define _OMC_LIT21 MMC_REFREALLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "getFinishingTimesForSchedule failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,36,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "The predicted SpeedUp with "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,27,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data " processors is "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,15,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "%.2f"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,4,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data ".\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,2,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "hpcomDump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,9,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Dumps additional information on the parallel execution with hpcom."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,66,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(94)),_OMC_LIT27,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT28}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data " processors is: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,16,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data " With a theoretical maximmum speedUp of: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,41,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Something is weird. The predicted SpeedUp is "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,45,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data " and the theoretical maximum speedUp is "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,40,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "getLevelTaskCosts failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,26,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "getTasksOfTaskList failed! Unsupported task list.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,50,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "the serialCosts: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,17,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "the parallelCosts: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,19,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "the cpCosts: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,13,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "	costs for level "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,17,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data " ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,2,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "%.0f"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,4,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "%)\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,3,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "the number of locks: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,21,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "There is no parallel potential in the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,38,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data " model!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,8,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data " model is not big enough to perform an effective parallel simulation!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,70,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "HpcOmScheduler.analyseScheduledTaskGraph failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,48,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "\nDependency tasks: {\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,21,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,0,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "}\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,2,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "THREADSCHEDULE\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,15,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "LEVELSCHEDULE\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,14,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "TASKDEPSCHEDULE\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,16,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "EMPTYSCHEDULE\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,14,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT55,-1.0);
#define _OMC_LIT55 MMC_REFREALLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "computeGraphValuesBottomUp2 failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,36,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "createSchedulerFromAssignments failed.implement this!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,54,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "this is not a thread schedule!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,31,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "MCP_getTaskAssignment1 failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,31,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "number of removed superfluous locks: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,37,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(16)),_OMC_LIT62}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(15)),_OMC_LIT63}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(7)),_OMC_LIT64}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(20)),_OMC_LIT65}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,3) {&HpcOmSimCode_TaskList_PARALLELTASKLIST__desc,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,6) {&HpcOmSimCode_Schedule_EMPTYSCHEDULE__desc,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "HpcOmScheduler.createPartSchedule failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,41,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "failtrace"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,9,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "Sets whether to print a failtrace or not."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,41,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT70,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT71}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "TDS_InitialCluster1 failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,27,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT74,2,1) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT74 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,1,11) {&DAE_Type_T__UNKNOWN__desc,}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data "implement Jacobian replacement for SES_NONLINEAR in HpcOmScheduler.replaceExpsInSimEqSystems!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,94,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "replaceExpsInSimEqSystem failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,32,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT49,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT21}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,1,4) {&DAE_ComponentPrefix_NOCOMPPRE__desc,}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT80,8,3) {&DAE_ElementSource_SOURCE__desc,_OMC_LIT78,MMC_REFSTRUCTLIT(mmc_nil),_OMC_LIT79,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT80 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,1,9) {&BackendDAE_EquationKind_UNKNOWN__EQUATION__KIND__desc,}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,5,3) {&BackendDAE_EvaluationStages_EVALUATION__STAGES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,4,3) {&BackendDAE_EquationAttributes_EQUATION__ATTRIBUTES__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT81,_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "_thr"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,4,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "There are less initial clusters than processors. we need duplication, but since this is a rare case, it is not done. Less processors are used.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,143,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "numProcs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,8,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,1,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,1,1) {_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,5) {&Flags_FlagData_INT__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "Sets the number of processors to use (0=default=auto)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,54,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(24)),_OMC_LIT86,_OMC_LIT88,_OMC_LIT89,_OMC_LIT90,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT91}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT93,2,0) {_OMC_LIT18,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT93 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT93)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT94,3,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT94 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "duplicated"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,10,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT96,1.0);
#define _OMC_LIT96 MMC_REFREALLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT96}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "TDS_schedule1 failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,22,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,2,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "HpcOmScheduler.createExtSchedule1 failed. Tasks in List:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,57,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "HpcOmScheduler.createExtSchedule not every node has a scheduler-info.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,70,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT102,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT102 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,5,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),_OMC_LIT102,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "Diagnostic length: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,19,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,1,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "l_eint length:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,14,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,2,0) {MMC_REFSTRUCTLIT(mmc_nil),MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "Funktionsaufruf!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,16,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "Hier geht MetaModelica los!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,28,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "External scheduling info: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,26,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,1,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "HpcOmScheduler.createHMetisSchedule not every node has a scheduler-info.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,73,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "HpcOmScheduler.createMetisSchedule not every node has a scheduler-info.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,72,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT114,2,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT114 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "HpcOmScheduler.createTaskDepSchedule failed.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,45,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "getFirstReadyThread0 failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,28,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT117,3,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),_OMC_LIT55,MMC_IMMEDIATE(MMC_TAGFIXNUM(1))}};
#define _OMC_LIT117 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "Parallel Level "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,15,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data ":\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,2,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "Serial Level "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,13,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "printLevelSchedule failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,27,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "BLS_mergeToTargetSize failed!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,29,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "BLS_getDependentGroups failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,31,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "convertScheduleStrucToInfoLevel failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,39,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "HpcOmScheduler.convertScheduleStrucToInfo1 failed. Unknown Task-Type.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,70,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT126,3,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),_OMC_LIT55}};
#define _OMC_LIT126 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data "HpcOmScheduler.convertScheduleStrucToInfo unknown Schedule-Type.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,65,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "Scheduled Task (comp: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,22,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data ", numThreads: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,14,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "):\n------------------------------------------------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,58,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,1,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "\n	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,2,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "------------------------------------------------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,55,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "Calculation task with index "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,28,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data " including the equations: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,26,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,2,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data " is finished at  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,17,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data "Calculation task ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,18,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data ") including the equations: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,27,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data " by thread "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,11,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "Dependency task "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,16,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "(outgoing)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,10,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "(incoming)"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,10,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data " between "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,9,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data " and "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,5,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "empty task\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,11,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "HpcOmScheduler.dumpTask failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,31,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
#define _OMC_LIT148_data "Task: \n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT148,7,_OMC_LIT148_data);
#define _OMC_LIT148 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "-> Parents: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,12,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "---------------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,22,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "--------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,15,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "Thread "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,7,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "HpcOmScheduler.compareTaskWithThreadIdx can only compare CALCTASKs!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,68,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT154,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT154 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT154)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT155,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT155 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT155)
#define _OMC_LIT156_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT156,17,_OMC_LIT156_data);
#define _OMC_LIT156 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT156)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT157,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT154,_OMC_LIT155,_OMC_LIT156}};
#define _OMC_LIT157 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT157)
#define _OMC_LIT158_data "HpcOmScheduler.compareTasksByEqIdc can only compare CALCTASKs with at least one equation index! Task 1 has type "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT158,112,_OMC_LIT158_data);
#define _OMC_LIT158 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT158)
#define _OMC_LIT159_data " and task 2 has type "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT159,21,_OMC_LIT159_data);
#define _OMC_LIT159 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT159)
#define _OMC_LIT160_data "HpcOmScheduler.compareTasksByWeighting can only compare CALCTASKs! Task 1 has type "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT160,83,_OMC_LIT160_data);
#define _OMC_LIT160 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT160)
#define _OMC_LIT161_data "HpcOmScheduler.getSuccessorsByTask can only handle CALCTASKs."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT161,61,_OMC_LIT161_data);
#define _OMC_LIT161 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT161)
#define _OMC_LIT162_data "HpcOmScheduler.getMaxCommCostsByTaskList2 failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT162,49,_OMC_LIT162_data);
#define _OMC_LIT162 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT162)
#define _OMC_LIT163_data "HpcOmScheduler.calculateFinishTimeByThreadId can only handle CALCTASKs\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT163,71,_OMC_LIT163_data);
#define _OMC_LIT163 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT163)
#define _OMC_LIT164_data "HpcOmScheduler.convertNodeToTask failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT164,41,_OMC_LIT164_data);
#define _OMC_LIT164 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT164)
#define _OMC_LIT165_data "HpcOmScheduler.getTaskWithHighestFinishTime failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT165,52,_OMC_LIT165_data);
#define _OMC_LIT165 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT165)
#define _OMC_LIT166_data "CreateDepTaskAndCommunicationInfo failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT166,42,_OMC_LIT166_data);
#define _OMC_LIT166 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT166)
#define _OMC_LIT167_data "HpcOmScheduler.addReleaseLocksToSchedule0 failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT167,49,_OMC_LIT167_data);
#define _OMC_LIT167 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT167)
#define _OMC_LIT168_data "HpcOmScheduler.addReleaseLocksToSchedule failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT168,48,_OMC_LIT168_data);
#define _OMC_LIT168 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT168)
#define _OMC_LIT169_data "HpcOmScheduler.createRandomSchedule1 failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT169,44,_OMC_LIT169_data);
#define _OMC_LIT169 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT169)
#define _OMC_LIT170_data "HpcOmScheduler.createListSchedule1 failed\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT170,42,_OMC_LIT170_data);
#define _OMC_LIT170 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT170)
#include "util/modelica.h"

#include "HpcOmScheduler_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_intListListString(threadData_t *threadData, modelica_metatype _lstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_intListListString,2,0) {(void*) boxptr_HpcOmScheduler_intListListString,0}};
#define boxvar_HpcOmScheduler_intListListString MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_intListListString)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_intListString(threadData_t *threadData, modelica_metatype _lstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_intListString,2,0) {(void*) boxptr_HpcOmScheduler_intListString,0}};
#define boxvar_HpcOmScheduler_intListString MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_intListString)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_printRealArray1(threadData_t *threadData, modelica_real _inValue, modelica_string _header, modelica_integer _idxIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_printRealArray1(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _header, modelica_metatype _idxIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_printRealArray1,2,0) {(void*) boxptr_HpcOmScheduler_printRealArray1,0}};
#define boxvar_HpcOmScheduler_printRealArray1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_printRealArray1)
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_printRealArray(threadData_t *threadData, modelica_metatype _inArray, modelica_string _header);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_printRealArray,2,0) {(void*) boxptr_HpcOmScheduler_printRealArray,0}};
#define boxvar_HpcOmScheduler_printRealArray MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_printRealArray)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iThreadTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForTask,2,0) {(void*) boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForTask,0}};
#define boxvar_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_integer _iThreadCount);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iThreadCount);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel,2,0) {(void*) boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel,0}};
#define boxvar_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_findInIntTuple1(threadData_t *threadData, modelica_metatype _liste, modelica_integer _toFind);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_findInIntTuple1(threadData_t *threadData, modelica_metatype _liste, modelica_metatype _toFind);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_findInIntTuple1,2,0) {(void*) boxptr_HpcOmScheduler_findInIntTuple1,0}};
#define boxvar_HpcOmScheduler_findInIntTuple1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_findInIntTuple1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_findTaskWithLockId(threadData_t *threadData, modelica_metatype _lockIds, modelica_metatype _iTask);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_findTaskWithLockId,2,0) {(void*) boxptr_HpcOmScheduler_findTaskWithLockId,0}};
#define boxvar_HpcOmScheduler_findTaskWithLockId MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_findTaskWithLockId)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceDepTasksInListByLockIds(threadData_t *threadData, modelica_metatype _inTask, modelica_metatype _lockIds, modelica_metatype _tmpTaskList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceDepTasksInListByLockIds,2,0) {(void*) boxptr_HpcOmScheduler_replaceDepTasksInListByLockIds,0}};
#define boxvar_HpcOmScheduler_replaceDepTasksInListByLockIds MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceDepTasksInListByLockIds)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceDepTaskIdsByLockIds(threadData_t *threadData, modelica_metatype _inTasks, modelica_metatype _lockIds, modelica_metatype _iAllThreadTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceDepTaskIdsByLockIds,2,0) {(void*) boxptr_HpcOmScheduler_replaceDepTaskIdsByLockIds,0}};
#define boxvar_HpcOmScheduler_replaceDepTaskIdsByLockIds MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceDepTaskIdsByLockIds)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_setScheduleLockIds(threadData_t *threadData, modelica_metatype _iSchedule);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_setScheduleLockIds,2,0) {(void*) boxptr_HpcOmScheduler_setScheduleLockIds,0}};
#define boxvar_HpcOmScheduler_setScheduleLockIds MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_setScheduleLockIds)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_revertTaskList(threadData_t *threadData, modelica_integer _iCurrentArrayIdx, modelica_metatype _iResultList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_revertTaskList(threadData_t *threadData, modelica_metatype _iCurrentArrayIdx, modelica_metatype _iResultList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_revertTaskList,2,0) {(void*) boxptr_HpcOmScheduler_revertTaskList,0}};
#define boxvar_HpcOmScheduler_revertTaskList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_revertTaskList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_revertTaskLists(threadData_t *threadData, modelica_integer _iCurrentArrayIdx, modelica_metatype _iResultList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_revertTaskLists(threadData_t *threadData, modelica_metatype _iCurrentArrayIdx, modelica_metatype _iResultList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_revertTaskLists,2,0) {(void*) boxptr_HpcOmScheduler_revertTaskLists,0}};
#define boxvar_HpcOmScheduler_revertTaskLists MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_revertTaskLists)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_integer _iCurrentThreadIdx, modelica_integer _iModifiedSystemIdx, modelica_metatype _iResultList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iCurrentThreadIdx, modelica_metatype _iModifiedSystemIdx, modelica_metatype _iResultList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1,2,0) {(void*) boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1,0}};
#define boxvar_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_integer _iNumOfThreads);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iNumOfThreads);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0,2,0) {(void*) boxptr_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0,0}};
#define boxvar_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_isEmptyTask(threadData_t *threadData, modelica_metatype _taskIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_isEmptyTask(threadData_t *threadData, modelica_metatype _taskIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_isEmptyTask,2,0) {(void*) boxptr_HpcOmScheduler_isEmptyTask,0}};
#define boxvar_HpcOmScheduler_isEmptyTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_isEmptyTask)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_isCalcTask(threadData_t *threadData, modelica_metatype _taskIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_isCalcTask(threadData_t *threadData, modelica_metatype _taskIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_isCalcTask,2,0) {(void*) boxptr_HpcOmScheduler_isCalcTask,0}};
#define boxvar_HpcOmScheduler_isCalcTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_isCalcTask)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_getTaskTypeString(threadData_t *threadData, modelica_metatype _iTask);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTaskTypeString,2,0) {(void*) boxptr_HpcOmScheduler_getTaskTypeString,0}};
#define boxvar_HpcOmScheduler_getTaskTypeString MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTaskTypeString)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getTaskIdx(threadData_t *threadData, modelica_metatype _taskIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getTaskIdx(threadData_t *threadData, modelica_metatype _taskIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTaskIdx,2,0) {(void*) boxptr_HpcOmScheduler_getTaskIdx,0}};
#define boxvar_HpcOmScheduler_getTaskIdx MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTaskIdx)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getThreadId(threadData_t *threadData, modelica_metatype _taskIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getThreadId(threadData_t *threadData, modelica_metatype _taskIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getThreadId,2,0) {(void*) boxptr_HpcOmScheduler_getThreadId,0}};
#define boxvar_HpcOmScheduler_getThreadId MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getThreadId)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getTimeFinished(threadData_t *threadData, modelica_metatype _taskIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getTimeFinished(threadData_t *threadData, modelica_metatype _taskIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTimeFinished,2,0) {(void*) boxptr_HpcOmScheduler_getTimeFinished,0}};
#define boxvar_HpcOmScheduler_getTimeFinished MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTimeFinished)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateTimeFinished(threadData_t *threadData, modelica_metatype _taskIn, modelica_real _timeFinishedIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_updateTimeFinished(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _timeFinishedIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateTimeFinished,2,0) {(void*) boxptr_HpcOmScheduler_updateTimeFinished,0}};
#define boxvar_HpcOmScheduler_updateTimeFinished MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateTimeFinished)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getPredecessorCalcTask(threadData_t *threadData, modelica_metatype _threadIn, modelica_integer _indexIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getPredecessorCalcTask(threadData_t *threadData, modelica_metatype _threadIn, modelica_metatype _indexIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getPredecessorCalcTask,2,0) {(void*) boxptr_HpcOmScheduler_getPredecessorCalcTask,0}};
#define boxvar_HpcOmScheduler_getPredecessorCalcTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getPredecessorCalcTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeFinishingTimeForOneTask(threadData_t *threadData, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeFinishingTimeForOneTask,2,0) {(void*) boxptr_HpcOmScheduler_computeFinishingTimeForOneTask,0}};
#define boxvar_HpcOmScheduler_computeFinishingTimeForOneTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeFinishingTimeForOneTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateFinishingTime1(threadData_t *threadData, modelica_integer _parentIdx, modelica_metatype _checkedTaskIn, modelica_metatype _tplIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_updateFinishingTime1(threadData_t *threadData, modelica_metatype _parentIdx, modelica_metatype _checkedTaskIn, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateFinishingTime1,2,0) {(void*) boxptr_HpcOmScheduler_updateFinishingTime1,0}};
#define boxvar_HpcOmScheduler_updateFinishingTime1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateFinishingTime1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateFinishingTime(threadData_t *threadData, modelica_metatype _taskIn, modelica_integer _taskIdxIn, modelica_integer _threadIdxIn, modelica_metatype _threadTasksIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_checkedTasksOut, modelica_integer *out_taskIdxOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_updateFinishingTime(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _taskIdxIn, modelica_metatype _threadIdxIn, modelica_metatype _threadTasksIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_checkedTasksOut, modelica_metatype *out_taskIdxOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateFinishingTime,2,0) {(void*) boxptr_HpcOmScheduler_updateFinishingTime,0}};
#define boxvar_HpcOmScheduler_updateFinishingTime MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateFinishingTime)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getNextThreadIdx(threadData_t *threadData, modelica_integer _threadId, modelica_metatype _closedThreads, modelica_integer _numThreads);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getNextThreadIdx(threadData_t *threadData, modelica_metatype _threadId, modelica_metatype _closedThreads, modelica_metatype _numThreads);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getNextThreadIdx,2,0) {(void*) boxptr_HpcOmScheduler_getNextThreadIdx,0}};
#define boxvar_HpcOmScheduler_getNextThreadIdx MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getNextThreadIdx)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_computeTimeFinished1(threadData_t *threadData, modelica_metatype _threadTasksIn, modelica_metatype _taskIdcsIn, modelica_integer _threadIdxIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_integer _numProc, modelica_metatype _closedThreadsIn, modelica_metatype *out_closedThreadsOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_computeTimeFinished1(threadData_t *threadData, modelica_metatype _threadTasksIn, modelica_metatype _taskIdcsIn, modelica_metatype _threadIdxIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype _numProc, modelica_metatype _closedThreadsIn, modelica_metatype *out_closedThreadsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeTimeFinished1,2,0) {(void*) boxptr_HpcOmScheduler_computeTimeFinished1,0}};
#define boxvar_HpcOmScheduler_computeTimeFinished1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeTimeFinished1)
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_computeTimeFinished(threadData_t *threadData, modelica_metatype _threadTasksIn, modelica_metatype _taskIdcsIn, modelica_integer _threadIdxIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_integer _numProc, modelica_metatype _closedThreadsIn);
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_computeTimeFinished(threadData_t *threadData, modelica_metatype _threadTasksIn, modelica_metatype _taskIdcsIn, modelica_metatype _threadIdxIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype _numProc, modelica_metatype _closedThreadsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeTimeFinished,2,0) {(void*) boxptr_HpcOmScheduler_computeTimeFinished,0}};
#define boxvar_HpcOmScheduler_computeTimeFinished MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeTimeFinished)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getTimeFinishedOfLastTask(threadData_t *threadData, modelica_metatype _threadTasksIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getTimeFinishedOfLastTask(threadData_t *threadData, modelica_metatype _threadTasksIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTimeFinishedOfLastTask,2,0) {(void*) boxptr_HpcOmScheduler_getTimeFinishedOfLastTask,0}};
#define boxvar_HpcOmScheduler_getTimeFinishedOfLastTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTimeFinishedOfLastTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getFinishingTimesForSchedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_integer _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_real *out_finishingTime);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getFinishingTimesForSchedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_metatype _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_finishingTime);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getFinishingTimesForSchedule,2,0) {(void*) boxptr_HpcOmScheduler_getFinishingTimesForSchedule,0}};
#define boxvar_HpcOmScheduler_getFinishingTimesForSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getFinishingTimesForSchedule)
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_printPredictedExeTimeInfo(threadData_t *threadData, modelica_real _serTime, modelica_real _parTime, modelica_real _speedUp, modelica_real _speedUpMax, modelica_integer _numProc);
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_printPredictedExeTimeInfo(threadData_t *threadData, modelica_metatype _serTime, modelica_metatype _parTime, modelica_metatype _speedUp, modelica_metatype _speedUpMax, modelica_metatype _numProc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_printPredictedExeTimeInfo,2,0) {(void*) boxptr_HpcOmScheduler_printPredictedExeTimeInfo,0}};
#define boxvar_HpcOmScheduler_printPredictedExeTimeInfo MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_printPredictedExeTimeInfo)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getLevelTaskCosts(threadData_t *threadData, modelica_metatype _levelTask, modelica_metatype _iMeta);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLevelTaskCosts(threadData_t *threadData, modelica_metatype _levelTask, modelica_metatype _iMeta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelTaskCosts,2,0) {(void*) boxptr_HpcOmScheduler_getLevelTaskCosts,0}};
#define boxvar_HpcOmScheduler_getLevelTaskCosts MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelTaskCosts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLevelListTaskCosts(threadData_t *threadData, modelica_metatype _iTaskList, modelica_metatype _iMeta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelListTaskCosts,2,0) {(void*) boxptr_HpcOmScheduler_getLevelListTaskCosts,0}};
#define boxvar_HpcOmScheduler_getLevelListTaskCosts MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelListTaskCosts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getTasksOfTaskList(threadData_t *threadData, modelica_metatype _iTaskList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTasksOfTaskList,2,0) {(void*) boxptr_HpcOmScheduler_getTasksOfTaskList,0}};
#define boxvar_HpcOmScheduler_getTasksOfTaskList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTasksOfTaskList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLevelParallelTime1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraphMeta, modelica_metatype _iThreadWorkLoad);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelParallelTime1,2,0) {(void*) boxptr_HpcOmScheduler_getLevelParallelTime1,0}};
#define boxvar_HpcOmScheduler_getLevelParallelTime1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelParallelTime1)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getLevelParallelTime(threadData_t *threadData, modelica_metatype _iLevelTaskList, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumProc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLevelParallelTime(threadData_t *threadData, modelica_metatype _iLevelTaskList, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumProc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelParallelTime,2,0) {(void*) boxptr_HpcOmScheduler_getLevelParallelTime,0}};
#define boxvar_HpcOmScheduler_getLevelParallelTime MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelParallelTime)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_analyseScheduledTaskGraphLevel(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_integer _iNumProc, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_fnptr _iParallelSectionCalculator);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_analyseScheduledTaskGraphLevel(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iNumProc, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_fnptr _iParallelSectionCalculator);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_analyseScheduledTaskGraphLevel,2,0) {(void*) boxptr_HpcOmScheduler_analyseScheduledTaskGraphLevel,0}};
#define boxvar_HpcOmScheduler_analyseScheduledTaskGraphLevel MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_analyseScheduledTaskGraphLevel)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpSchedule(threadData_t *threadData, modelica_metatype _iSchedule);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpSchedule,2,0) {(void*) boxptr_HpcOmScheduler_dumpSchedule,0}};
#define boxvar_HpcOmScheduler_dumpSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpSchedule)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_realSubr(threadData_t *threadData, modelica_real _r1, modelica_real _r2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_realSubr(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_realSubr,2,0) {(void*) boxptr_HpcOmScheduler_realSubr,0}};
#define boxvar_HpcOmScheduler_realSubr MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_realSubr)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesTopDown2(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _alapIn, modelica_metatype _lastIn, modelica_metatype _lactIn, modelica_metatype _tdsLevelIn, modelica_metatype _visitedNodes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesTopDown2,2,0) {(void*) boxptr_HpcOmScheduler_computeGraphValuesTopDown2,0}};
#define boxvar_HpcOmScheduler_computeGraphValuesTopDown2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesTopDown2)
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_computeGraphValuesTopDown1(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _alapIn, modelica_metatype _lastIn, modelica_metatype _lactIn, modelica_metatype _tdsLevelIn, modelica_metatype _visitedNodes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesTopDown1,2,0) {(void*) boxptr_HpcOmScheduler_computeGraphValuesTopDown1,0}};
#define boxvar_HpcOmScheduler_computeGraphValuesTopDown1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesTopDown1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesTopDown(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype *out_lastOut, modelica_metatype *out_lactOut, modelica_metatype *out_tdsLevelOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesTopDown,2,0) {(void*) boxptr_HpcOmScheduler_computeGraphValuesTopDown,0}};
#define boxvar_HpcOmScheduler_computeGraphValuesTopDown MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesTopDown)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesBottomUp2(threadData_t *threadData, modelica_integer _node, modelica_metatype _graph, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _asapIn, modelica_metatype _estIn, modelica_metatype _ectIn, modelica_metatype *out_estOut, modelica_metatype *out_ectOut, modelica_metatype *out_children);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_computeGraphValuesBottomUp2(threadData_t *threadData, modelica_metatype _node, modelica_metatype _graph, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _asapIn, modelica_metatype _estIn, modelica_metatype _ectIn, modelica_metatype *out_estOut, modelica_metatype *out_ectOut, modelica_metatype *out_children);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesBottomUp2,2,0) {(void*) boxptr_HpcOmScheduler_computeGraphValuesBottomUp2,0}};
#define boxvar_HpcOmScheduler_computeGraphValuesBottomUp2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesBottomUp2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesBottomUp1(threadData_t *threadData, modelica_metatype _parentsIn, modelica_metatype _graph, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _asapIn, modelica_metatype _estIn, modelica_metatype _ectIn, modelica_metatype *out_estOut, modelica_metatype *out_ectOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesBottomUp1,2,0) {(void*) boxptr_HpcOmScheduler_computeGraphValuesBottomUp1,0}};
#define boxvar_HpcOmScheduler_computeGraphValuesBottomUp1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesBottomUp1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesBottomUp(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype *out_estOut, modelica_metatype *out_ectOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesBottomUp,2,0) {(void*) boxptr_HpcOmScheduler_computeGraphValuesBottomUp,0}};
#define boxvar_HpcOmScheduler_computeGraphValuesBottomUp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeGraphValuesBottomUp)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMedian3(threadData_t *threadData, modelica_real _r1, modelica_real _r2, modelica_real _r3, modelica_integer *out_which);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMedian3(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2, modelica_metatype _r3, modelica_metatype *out_which);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMedian3,2,0) {(void*) boxptr_HpcOmScheduler_getMedian3,0}};
#define boxvar_HpcOmScheduler_getMedian3 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMedian3)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_swapEntriesInList(threadData_t *threadData, modelica_integer _idx1, modelica_integer _idx2, modelica_metatype _lstIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_swapEntriesInList(threadData_t *threadData, modelica_metatype _idx1, modelica_metatype _idx2, modelica_metatype _lstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_swapEntriesInList,2,0) {(void*) boxptr_HpcOmScheduler_swapEntriesInList,0}};
#define boxvar_HpcOmScheduler_swapEntriesInList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_swapEntriesInList)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMemberOnTrueWithIdx1(threadData_t *threadData, modelica_integer _inIdx, modelica_real _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_integer *out_outIdx, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMemberOnTrueWithIdx1(threadData_t *threadData, modelica_metatype _inIdx, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_metatype *out_outIdx, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMemberOnTrueWithIdx1,2,0) {(void*) boxptr_HpcOmScheduler_getMemberOnTrueWithIdx1,0}};
#define boxvar_HpcOmScheduler_getMemberOnTrueWithIdx1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMemberOnTrueWithIdx1)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMemberOnTrueWithIdx(threadData_t *threadData, modelica_real _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_integer *out_outIdx, modelica_boolean *out_found);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMemberOnTrueWithIdx(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_metatype *out_outIdx, modelica_metatype *out_found);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMemberOnTrueWithIdx,2,0) {(void*) boxptr_HpcOmScheduler_getMemberOnTrueWithIdx,0}};
#define boxvar_HpcOmScheduler_getMemberOnTrueWithIdx MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMemberOnTrueWithIdx)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getNextPivot(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _markedLstIn, modelica_integer _pivotIdx, modelica_integer *out_newIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getNextPivot(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _markedLstIn, modelica_metatype _pivotIdx, modelica_metatype *out_newIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getNextPivot,2,0) {(void*) boxptr_HpcOmScheduler_getNextPivot,0}};
#define boxvar_HpcOmScheduler_getNextPivot MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getNextPivot)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_quicksortWithOrder1(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _orderIn, modelica_integer _pivotIdx, modelica_metatype _markedIn, modelica_integer _size, modelica_metatype *out_orderOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_quicksortWithOrder1(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _orderIn, modelica_metatype _pivotIdx, modelica_metatype _markedIn, modelica_metatype _size, modelica_metatype *out_orderOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_quicksortWithOrder1,2,0) {(void*) boxptr_HpcOmScheduler_quicksortWithOrder1,0}};
#define boxvar_HpcOmScheduler_quicksortWithOrder1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_quicksortWithOrder1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_listIndecesForValues(threadData_t *threadData, modelica_integer _idx, modelica_metatype _lstIn, modelica_metatype _arrayIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_listIndecesForValues(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _lstIn, modelica_metatype _arrayIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_listIndecesForValues,2,0) {(void*) boxptr_HpcOmScheduler_listIndecesForValues,0}};
#define boxvar_HpcOmScheduler_listIndecesForValues MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_listIndecesForValues)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_mapListGet(threadData_t *threadData, modelica_metatype _mapLstIn, modelica_metatype _argLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_mapListGet,2,0) {(void*) boxptr_HpcOmScheduler_mapListGet,0}};
#define boxvar_HpcOmScheduler_mapListGet MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_mapListGet)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_lengthNotOne(threadData_t *threadData, modelica_metatype _lstIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_lengthNotOne(threadData_t *threadData, modelica_metatype _lstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_lengthNotOne,2,0) {(void*) boxptr_HpcOmScheduler_lengthNotOne,0}};
#define boxvar_HpcOmScheduler_lengthNotOne MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_lengthNotOne)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_removeLatestTaskFromList(threadData_t *threadData, modelica_metatype _taskLstIn, modelica_metatype _taskOrderIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_removeLatestTaskFromList,2,0) {(void*) boxptr_HpcOmScheduler_removeLatestTaskFromList,0}};
#define boxvar_HpcOmScheduler_removeLatestTaskFromList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_removeLatestTaskFromList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getSuperfluousLocks(threadData_t *threadData, modelica_metatype _otherParentsIn, modelica_integer _nodeIn, modelica_metatype _taskAssIn, modelica_metatype _orderIn, modelica_integer _numProc, modelica_metatype _iAllCalcTasks, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _removeLocksIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getSuperfluousLocks(threadData_t *threadData, modelica_metatype _otherParentsIn, modelica_metatype _nodeIn, modelica_metatype _taskAssIn, modelica_metatype _orderIn, modelica_metatype _numProc, modelica_metatype _iAllCalcTasks, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _removeLocksIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getSuperfluousLocks,2,0) {(void*) boxptr_HpcOmScheduler_getSuperfluousLocks,0}};
#define boxvar_HpcOmScheduler_getSuperfluousLocks MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getSuperfluousLocks)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_removeLocksFromThread(threadData_t *threadData, modelica_metatype _threadIn, modelica_metatype _lockLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_removeLocksFromThread,2,0) {(void*) boxptr_HpcOmScheduler_removeLocksFromThread,0}};
#define boxvar_HpcOmScheduler_removeLocksFromThread MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_removeLocksFromThread)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_removeLocksFromLockList(threadData_t *threadData, modelica_metatype _lockIdsIn, modelica_metatype _lockTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_removeLocksFromLockList,2,0) {(void*) boxptr_HpcOmScheduler_removeLocksFromLockList,0}};
#define boxvar_HpcOmScheduler_removeLocksFromLockList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_removeLocksFromLockList)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_tasksEqual(threadData_t *threadData, modelica_metatype _task1, modelica_metatype _task2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_tasksEqual(threadData_t *threadData, modelica_metatype _task1, modelica_metatype _task2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_tasksEqual,2,0) {(void*) boxptr_HpcOmScheduler_tasksEqual,0}};
#define boxvar_HpcOmScheduler_tasksEqual MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_tasksEqual)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_setThreadIdxInTask(threadData_t *threadData, modelica_metatype _taskIn, modelica_integer _threadIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_setThreadIdxInTask(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _threadIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_setThreadIdxInTask,2,0) {(void*) boxptr_HpcOmScheduler_setThreadIdxInTask,0}};
#define boxvar_HpcOmScheduler_setThreadIdxInTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_setThreadIdxInTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_setSimEqIdcsInTask(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _SccSimEqMappingIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_setSimEqIdcsInTask,2,0) {(void*) boxptr_HpcOmScheduler_setSimEqIdcsInTask,0}};
#define boxvar_HpcOmScheduler_setSimEqIdcsInTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_setSimEqIdcsInTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createScheduleFromAssignments(threadData_t *threadData, modelica_metatype _taskAss, modelica_metatype _procAss, modelica_metatype _orderOpt, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype _SccSimEqMappingIn, modelica_metatype _removeLocksIn, modelica_metatype _orderIn, modelica_metatype _iSimVarMapping, modelica_metatype _scheduleIn, modelica_metatype *out_removeLocksOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createScheduleFromAssignments,2,0) {(void*) boxptr_HpcOmScheduler_createScheduleFromAssignments,0}};
#define boxvar_HpcOmScheduler_createScheduleFromAssignments MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createScheduleFromAssignments)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_traverseAndUpdateThreadsInSchedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_fnptr _funcIn, modelica_metatype _extraArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_traverseAndUpdateThreadsInSchedule,2,0) {(void*) boxptr_HpcOmScheduler_traverseAndUpdateThreadsInSchedule,0}};
#define boxvar_HpcOmScheduler_traverseAndUpdateThreadsInSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_traverseAndUpdateThreadsInSchedule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateLockIdcsInThreadschedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_fnptr _inFunc, modelica_metatype _extraArg);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateLockIdcsInThreadschedule,2,0) {(void*) boxptr_HpcOmScheduler_updateLockIdcsInThreadschedule,0}};
#define boxvar_HpcOmScheduler_updateLockIdcsInThreadschedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateLockIdcsInThreadschedule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_MCP__getTaskAssignment1(threadData_t *threadData, modelica_metatype _orderIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _processorTimeIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_procAssOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_MCP__getTaskAssignment1,2,0) {(void*) boxptr_HpcOmScheduler_MCP__getTaskAssignment1,0}};
#define boxvar_HpcOmScheduler_MCP__getTaskAssignment1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_MCP__getTaskAssignment1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_MCP__getTaskAssignment(threadData_t *threadData, modelica_metatype _orderIn, modelica_metatype _alapIn, modelica_integer _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_procAssOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_MCP__getTaskAssignment(threadData_t *threadData, modelica_metatype _orderIn, modelica_metatype _alapIn, modelica_metatype _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_procAssOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_MCP__getTaskAssignment,2,0) {(void*) boxptr_HpcOmScheduler_MCP__getTaskAssignment,0}};
#define boxvar_HpcOmScheduler_MCP__getTaskAssignment MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_MCP__getTaskAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_reassignPartitions(threadData_t *threadData, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_reassignPartitions,2,0) {(void*) boxptr_HpcOmScheduler_reassignPartitions,0}};
#define boxvar_HpcOmScheduler_reassignPartitions MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_reassignPartitions)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_isUnAssigned(threadData_t *threadData, modelica_integer _task, modelica_metatype _ass);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_isUnAssigned(threadData_t *threadData, modelica_metatype _task, modelica_metatype _ass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_isUnAssigned,2,0) {(void*) boxptr_HpcOmScheduler_isUnAssigned,0}};
#define boxvar_HpcOmScheduler_isUnAssigned MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_isUnAssigned)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_assignPartitions(threadData_t *threadData, modelica_integer _rootNode, modelica_metatype _graph, modelica_metatype _tplIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_assignPartitions(threadData_t *threadData, modelica_metatype _rootNode, modelica_metatype _graph, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_assignPartitions,2,0) {(void*) boxptr_HpcOmScheduler_assignPartitions,0}};
#define boxvar_HpcOmScheduler_assignPartitions MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_assignPartitions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_distributePartitions(threadData_t *threadData, modelica_metatype _taskMapIn, modelica_metatype _partMap, modelica_metatype _metaIn, modelica_integer _n, modelica_metatype *out_partitions);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_distributePartitions(threadData_t *threadData, modelica_metatype _taskMapIn, modelica_metatype _partMap, modelica_metatype _metaIn, modelica_metatype _n, modelica_metatype *out_partitions);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_distributePartitions,2,0) {(void*) boxptr_HpcOmScheduler_distributePartitions,0}};
#define boxvar_HpcOmScheduler_distributePartitions MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_distributePartitions)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeFavouritePred1(threadData_t *threadData, modelica_integer _nodeIdx, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _ect, modelica_metatype _fpredIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_computeFavouritePred1(threadData_t *threadData, modelica_metatype _nodeIdx, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _ect, modelica_metatype _fpredIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeFavouritePred1,2,0) {(void*) boxptr_HpcOmScheduler_computeFavouritePred1,0}};
#define boxvar_HpcOmScheduler_computeFavouritePred1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeFavouritePred1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeFavouritePred(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _ect);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeFavouritePred,2,0) {(void*) boxptr_HpcOmScheduler_computeFavouritePred,0}};
#define boxvar_HpcOmScheduler_computeFavouritePred MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_computeFavouritePred)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_TDSpredIsCritical(threadData_t *threadData, modelica_integer _node, modelica_integer _pred, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDSpredIsCritical(threadData_t *threadData, modelica_metatype _node, modelica_metatype _pred, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDSpredIsCritical,2,0) {(void*) boxptr_HpcOmScheduler_TDSpredIsCritical,0}};
#define boxvar_HpcOmScheduler_TDSpredIsCritical MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDSpredIsCritical)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__InitialCluster1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn, modelica_metatype _fpredArrayIn, modelica_metatype _rootNodes, modelica_metatype _taskAssIn, modelica_integer _currThread, modelica_metatype _queue, modelica_metatype _clustersIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__InitialCluster1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn, modelica_metatype _fpredArrayIn, modelica_metatype _rootNodes, modelica_metatype _taskAssIn, modelica_metatype _currThread, modelica_metatype _queue, modelica_metatype _clustersIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__InitialCluster1,2,0) {(void*) boxptr_HpcOmScheduler_TDS__InitialCluster1,0}};
#define boxvar_HpcOmScheduler_TDS__InitialCluster1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__InitialCluster1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__InitialCluster(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn, modelica_metatype _fpredArrayIn, modelica_metatype _queue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__InitialCluster,2,0) {(void*) boxptr_HpcOmScheduler_TDS__InitialCluster,0}};
#define boxvar_HpcOmScheduler_TDS__InitialCluster MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__InitialCluster)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_TDS__computeClusterCosts(threadData_t *threadData, modelica_metatype _clusters, modelica_metatype _iTaskGraphMeta);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__computeClusterCosts(threadData_t *threadData, modelica_metatype _clusters, modelica_metatype _iTaskGraphMeta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__computeClusterCosts,2,0) {(void*) boxptr_HpcOmScheduler_TDS__computeClusterCosts,0}};
#define boxvar_HpcOmScheduler_TDS__computeClusterCosts MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__computeClusterCosts)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__SortCompactClusters(threadData_t *threadData, modelica_metatype _clusterIn, modelica_metatype _tdsLevelIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__SortCompactClusters,2,0) {(void*) boxptr_HpcOmScheduler_TDS__SortCompactClusters,0}};
#define boxvar_HpcOmScheduler_TDS__SortCompactClusters MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__SortCompactClusters)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__CompactClusters(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _TDSLevel, modelica_integer _numProc);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__CompactClusters(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _TDSLevel, modelica_metatype _numProc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__CompactClusters,2,0) {(void*) boxptr_HpcOmScheduler_TDS__CompactClusters,0}};
#define boxvar_HpcOmScheduler_TDS__CompactClusters MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__CompactClusters)
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_TDS__getTaskAssignment(threadData_t *threadData, modelica_integer _procIdx, modelica_metatype _clusterArrayIn, modelica_metatype _taskAssIn);
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_TDS__getTaskAssignment(threadData_t *threadData, modelica_metatype _procIdx, modelica_metatype _clusterArrayIn, modelica_metatype _taskAssIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__getTaskAssignment,2,0) {(void*) boxptr_HpcOmScheduler_TDS__getTaskAssignment,0}};
#define boxvar_HpcOmScheduler_TDS__getTaskAssignment MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__getTaskAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceInSimJac(threadData_t *threadData, modelica_metatype _simJacRowIn, modelica_metatype _replIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceInSimJac,2,0) {(void*) boxptr_HpcOmScheduler_replaceInSimJac,0}};
#define boxvar_HpcOmScheduler_replaceInSimJac MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceInSimJac)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceCrefInSimVar(threadData_t *threadData, modelica_metatype _simVarIn, modelica_metatype _replIn, modelica_boolean *out_changedOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_replaceCrefInSimVar(threadData_t *threadData, modelica_metatype _simVarIn, modelica_metatype _replIn, modelica_metatype *out_changedOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceCrefInSimVar,2,0) {(void*) boxptr_HpcOmScheduler_replaceCrefInSimVar,0}};
#define boxvar_HpcOmScheduler_replaceCrefInSimVar MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceCrefInSimVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceExpsInSimEqSystem(threadData_t *threadData, modelica_metatype _simEqSysIn, modelica_metatype _replIn, modelica_boolean *out_changedOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_replaceExpsInSimEqSystem(threadData_t *threadData, modelica_metatype _simEqSysIn, modelica_metatype _replIn, modelica_metatype *out_changedOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceExpsInSimEqSystem,2,0) {(void*) boxptr_HpcOmScheduler_replaceExpsInSimEqSystem,0}};
#define boxvar_HpcOmScheduler_replaceExpsInSimEqSystem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceExpsInSimEqSystem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceInSimEqSystemLst(threadData_t *threadData, modelica_metatype _simEqSysLstIn, modelica_metatype _replIn, modelica_metatype *out_changedOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceInSimEqSystemLst,2,0) {(void*) boxptr_HpcOmScheduler_replaceInSimEqSystemLst,0}};
#define boxvar_HpcOmScheduler_replaceInSimEqSystemLst MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceInSimEqSystemLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceSystemIndex(threadData_t *threadData, modelica_metatype _simEqSysIn, modelica_metatype _idcsIn, modelica_metatype *out_idcsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceSystemIndex,2,0) {(void*) boxptr_HpcOmScheduler_replaceSystemIndex,0}};
#define boxvar_HpcOmScheduler_replaceSystemIndex MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceSystemIndex)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceSimEqSystemWithSameIndex(threadData_t *threadData, modelica_metatype _eqSysIn, modelica_metatype _eqSysLstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceSimEqSystemWithSameIndex,2,0) {(void*) boxptr_HpcOmScheduler_replaceSimEqSystemWithSameIndex,0}};
#define boxvar_HpcOmScheduler_replaceSimEqSystemWithSameIndex MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceSimEqSystemWithSameIndex)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceSimEqSystemLstWithSameIndex(threadData_t *threadData, modelica_metatype _eqSystsIn, modelica_metatype _eqSysLstIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceSimEqSystemLstWithSameIndex,2,0) {(void*) boxptr_HpcOmScheduler_replaceSimEqSystemLstWithSameIndex,0}};
#define boxvar_HpcOmScheduler_replaceSimEqSystemLstWithSameIndex MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_replaceSimEqSystemLstWithSameIndex)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_makeSEScrefAssignment(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_integer _idx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_makeSEScrefAssignment(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _idx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_makeSEScrefAssignment,2,0) {(void*) boxptr_HpcOmScheduler_makeSEScrefAssignment,0}};
#define boxvar_HpcOmScheduler_makeSEScrefAssignment MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_makeSEScrefAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__duplicateSystemOfEquations(threadData_t *threadData, modelica_metatype _simEqsIn, modelica_integer _simEqSysIdxIn, modelica_metatype _repl, modelica_metatype _simEqsFold, modelica_integer *out_simEqSysIdxOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__duplicateSystemOfEquations(threadData_t *threadData, modelica_metatype _simEqsIn, modelica_metatype _simEqSysIdxIn, modelica_metatype _repl, modelica_metatype _simEqsFold, modelica_metatype *out_simEqSysIdxOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__duplicateSystemOfEquations,2,0) {(void*) boxptr_HpcOmScheduler_TDS__duplicateSystemOfEquations,0}};
#define boxvar_HpcOmScheduler_TDS__duplicateSystemOfEquations MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__duplicateSystemOfEquations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__duplicateTasks2(threadData_t *threadData, modelica_integer _node, modelica_metatype _allCluster, modelica_metatype _replIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _threadIn, modelica_metatype _idcsIn, modelica_metatype _taskGraphOrig, modelica_metatype _taskGraphTOrig, modelica_metatype _taskGraphIn, modelica_metatype _taskDuplAssIn, modelica_metatype _iTaskGraphMeta, modelica_metatype _simCodeIn, modelica_metatype _sccSimEqMappingIn, modelica_metatype _duplSccSimEqMapIn, modelica_metatype _duplCompsIn, modelica_metatype *out_taskAssOut, modelica_metatype *out_procAssOut, modelica_metatype *out_taskGraphOut, modelica_metatype *out_taskDuplAssOut, modelica_metatype *out_threadOut, modelica_metatype *out_idcsOut, modelica_metatype *out_simCodeOut, modelica_metatype *out_duplSccSimEqMapOut, modelica_metatype *out_duplCompsOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__duplicateTasks2(threadData_t *threadData, modelica_metatype _node, modelica_metatype _allCluster, modelica_metatype _replIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _threadIn, modelica_metatype _idcsIn, modelica_metatype _taskGraphOrig, modelica_metatype _taskGraphTOrig, modelica_metatype _taskGraphIn, modelica_metatype _taskDuplAssIn, modelica_metatype _iTaskGraphMeta, modelica_metatype _simCodeIn, modelica_metatype _sccSimEqMappingIn, modelica_metatype _duplSccSimEqMapIn, modelica_metatype _duplCompsIn, modelica_metatype *out_taskAssOut, modelica_metatype *out_procAssOut, modelica_metatype *out_taskGraphOut, modelica_metatype *out_taskDuplAssOut, modelica_metatype *out_threadOut, modelica_metatype *out_idcsOut, modelica_metatype *out_simCodeOut, modelica_metatype *out_duplSccSimEqMapOut, modelica_metatype *out_duplCompsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__duplicateTasks2,2,0) {(void*) boxptr_HpcOmScheduler_TDS__duplicateTasks2,0}};
#define boxvar_HpcOmScheduler_TDS__duplicateTasks2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__duplicateTasks2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__duplicateTasks1(threadData_t *threadData, modelica_metatype _clusterIn, modelica_metatype _allCluster, modelica_metatype _replIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _threadIn, modelica_metatype _idcsIn, modelica_metatype _taskGraphOrig, modelica_metatype _taskGraphTOrig, modelica_metatype _taskGraphIn, modelica_metatype _taskDuplAssIn, modelica_metatype _iTaskGraphMeta, modelica_metatype _simCodeIn, modelica_metatype _sccSimEqMappingIn, modelica_metatype _duplSccSimEqMapIn, modelica_metatype _duplCompsIn, modelica_metatype *out_procAssOut, modelica_metatype *out_taskGraphOut, modelica_metatype *out_taskDuplAssOut, modelica_metatype *out_threadOut, modelica_metatype *out_idcsOut, modelica_metatype *out_simCodeOut, modelica_metatype *out_duplSccSimEqMapOut, modelica_metatype *out_duplCompsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__duplicateTasks1,2,0) {(void*) boxptr_HpcOmScheduler_TDS__duplicateTasks1,0}};
#define boxvar_HpcOmScheduler_TDS__duplicateTasks1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__duplicateTasks1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__duplicateTasks(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _idcsIn, modelica_metatype _taskGraphOrig, modelica_metatype _taskGraphTOrig, modelica_metatype _taskGraphIn, modelica_metatype _taskDuplAssIn, modelica_metatype _iTaskGraphMeta, modelica_metatype _simCodeIn, modelica_metatype _scheduleIn, modelica_metatype _sccSimEqMappingIn, modelica_metatype _duplSccSimEqMapIn, modelica_metatype _duplCompsIn, modelica_metatype *out_procAssOut, modelica_metatype *out_taskGraphOut, modelica_metatype *out_taskDuplAssOut, modelica_metatype *out_idcsOut, modelica_metatype *out_simCodeOut, modelica_metatype *out_scheduleOut, modelica_metatype *out_duplSccSimEqMapOut, modelica_metatype *out_duplCompsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__duplicateTasks,2,0) {(void*) boxptr_HpcOmScheduler_TDS__duplicateTasks,0}};
#define boxvar_HpcOmScheduler_TDS__duplicateTasks MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__duplicateTasks)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__updateModelInfo(threadData_t *threadData, modelica_metatype _simCodeIn, modelica_metatype _idcs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__updateModelInfo,2,0) {(void*) boxptr_HpcOmScheduler_TDS__updateModelInfo,0}};
#define boxvar_HpcOmScheduler_TDS__updateModelInfo MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__updateModelInfo)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumn(threadData_t *threadData, modelica_metatype _jacIn, modelica_metatype _assIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumn,2,0) {(void*) boxptr_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumn,0}};
#define boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumn MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumn)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrix(threadData_t *threadData, modelica_metatype _jacIn, modelica_metatype _assIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrix,2,0) {(void*) boxptr_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrix,0}};
#define boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrix MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrix)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumnWithUpdate(threadData_t *threadData, modelica_metatype _jacIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumnWithUpdate,2,0) {(void*) boxptr_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumnWithUpdate,0}};
#define boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumnWithUpdate MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumnWithUpdate)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrixWithUpdate(threadData_t *threadData, modelica_metatype _jacIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrixWithUpdate,2,0) {(void*) boxptr_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrixWithUpdate,0}};
#define boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrixWithUpdate MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrixWithUpdate)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate(threadData_t *threadData, modelica_metatype _simEqIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate,2,0) {(void*) boxptr_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate,0}};
#define boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIndex(threadData_t *threadData, modelica_metatype _simEqIn, modelica_metatype _assIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIndex,2,0) {(void*) boxptr_HpcOmScheduler_TDS__replaceSimEqSysIndex,0}};
#define boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndex MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIndex)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__assignNewSimEqSysIdxs(threadData_t *threadData, modelica_metatype _simCodeIn, modelica_metatype _idxAssIn, modelica_metatype *out_idxAssOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__assignNewSimEqSysIdxs,2,0) {(void*) boxptr_HpcOmScheduler_TDS__assignNewSimEqSysIdxs,0}};
#define boxvar_HpcOmScheduler_TDS__assignNewSimEqSysIdxs MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__assignNewSimEqSysIdxs)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTaskLst(threadData_t *threadData, modelica_metatype _taskLstIn, modelica_metatype _assIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTaskLst,2,0) {(void*) boxptr_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTaskLst,0}};
#define boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTaskLst MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTaskLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTask(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _assIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTask,2,0) {(void*) boxptr_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTask,0}};
#define boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxsInSchedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_metatype _assIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxsInSchedule,2,0) {(void*) boxptr_HpcOmScheduler_TDS__replaceSimEqSysIdxsInSchedule,0}};
#define boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxsInSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__replaceSimEqSysIdxsInSchedule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__schedule1(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _TDSLevel, modelica_integer _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimCode, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__schedule1(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _TDSLevel, modelica_metatype _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimCode, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__schedule1,2,0) {(void*) boxptr_HpcOmScheduler_TDS__schedule1,0}};
#define boxvar_HpcOmScheduler_TDS__schedule1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_TDS__schedule1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_insertLocksInSchedule1(threadData_t *threadData, modelica_metatype _threadsIn, modelica_metatype _iTaskGraphTransposed, modelica_metatype _taskProcAss, modelica_metatype _iAllCalcTasks, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _foldIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_insertLocksInSchedule1,2,0) {(void*) boxptr_HpcOmScheduler_insertLocksInSchedule1,0}};
#define boxvar_HpcOmScheduler_insertLocksInSchedule1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_insertLocksInSchedule1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_insertLocksInSchedule(threadData_t *threadData, modelica_metatype _iSchedule, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _taskAss, modelica_metatype _procAss, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_insertLocksInSchedule,2,0) {(void*) boxptr_HpcOmScheduler_insertLocksInSchedule,0}};
#define boxvar_HpcOmScheduler_insertLocksInSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_insertLocksInSchedule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createExtSchedule1(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iThreadAssignments, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_fnptr _iLockWithPredecessorHandler, modelica_metatype _iSchedule);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createExtSchedule1,2,0) {(void*) boxptr_HpcOmScheduler_createExtSchedule1,0}};
#define boxvar_HpcOmScheduler_createExtSchedule1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createExtSchedule1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_preparehMetis(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype *out_eptr, modelica_metatype *out_eint, modelica_metatype *out_hewgts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_preparehMetis,2,0) {(void*) boxptr_HpcOmScheduler_preparehMetis,0}};
#define boxvar_HpcOmScheduler_preparehMetis MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_preparehMetis)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getHedge(threadData_t *threadData, modelica_metatype _childnodes, modelica_metatype _actnode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getHedge,2,0) {(void*) boxptr_HpcOmScheduler_getHedge,0}};
#define boxvar_HpcOmScheduler_getHedge MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getHedge)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_listNodes(threadData_t *threadData, modelica_integer _node, modelica_metatype _l_eint);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_listNodes(threadData_t *threadData, modelica_metatype _node, modelica_metatype _l_eint);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_listNodes,2,0) {(void*) boxptr_HpcOmScheduler_listNodes,0}};
#define boxvar_HpcOmScheduler_listNodes MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_listNodes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_prepareMetis(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype *out_adjncy, modelica_metatype *out_vwgt, modelica_metatype *out_adjwgt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_prepareMetis,2,0) {(void*) boxptr_HpcOmScheduler_prepareMetis,0}};
#define boxvar_HpcOmScheduler_prepareMetis MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_prepareMetis)
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_setVwgt(threadData_t *threadData, modelica_integer _node, modelica_metatype _vwgt, modelica_metatype _iTaskGraphMeta);
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_setVwgt(threadData_t *threadData, modelica_metatype _node, modelica_metatype _vwgt, modelica_metatype _iTaskGraphMeta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_setVwgt,2,0) {(void*) boxptr_HpcOmScheduler_setVwgt,0}};
#define boxvar_HpcOmScheduler_setVwgt MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_setVwgt)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_sortEdge(threadData_t *threadData, modelica_integer _actnode, modelica_metatype _xadj, modelica_metatype _adjncy, modelica_metatype _adjwgt, modelica_metatype _help, modelica_integer _imarker);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_sortEdge(threadData_t *threadData, modelica_metatype _actnode, modelica_metatype _xadj, modelica_metatype _adjncy, modelica_metatype _adjwgt, modelica_metatype _help, modelica_metatype _imarker);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_sortEdge,2,0) {(void*) boxptr_HpcOmScheduler_sortEdge,0}};
#define boxvar_HpcOmScheduler_sortEdge MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_sortEdge)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_sortEdgeHelp(threadData_t *threadData, modelica_metatype _edge, modelica_integer _actnode, modelica_metatype _adjncy, modelica_metatype _adjwgt, modelica_integer _imarker);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_sortEdgeHelp(threadData_t *threadData, modelica_metatype _edge, modelica_metatype _actnode, modelica_metatype _adjncy, modelica_metatype _adjwgt, modelica_metatype _imarker);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_sortEdgeHelp,2,0) {(void*) boxptr_HpcOmScheduler_sortEdgeHelp,0}};
#define boxvar_HpcOmScheduler_sortEdgeHelp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_sortEdgeHelp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getRelations(threadData_t *threadData, modelica_metatype _edges, modelica_metatype _iTaskGraphMeta, modelica_metatype _irelations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getRelations,2,0) {(void*) boxptr_HpcOmScheduler_getRelations,0}};
#define boxvar_HpcOmScheduler_getRelations MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getRelations)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getSingleRelations(threadData_t *threadData, modelica_integer _edge, modelica_integer _n, modelica_metatype _iTaskGraphMeta, modelica_metatype _irelations);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getSingleRelations(threadData_t *threadData, modelica_metatype _edge, modelica_metatype _n, modelica_metatype _iTaskGraphMeta, modelica_metatype _irelations);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getSingleRelations,2,0) {(void*) boxptr_HpcOmScheduler_getSingleRelations,0}};
#define boxvar_HpcOmScheduler_getSingleRelations MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getSingleRelations)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_sumEdge(threadData_t *threadData, modelica_metatype _edges, modelica_integer _innumedge);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_sumEdge(threadData_t *threadData, modelica_metatype _edges, modelica_metatype _innumedge);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_sumEdge,2,0) {(void*) boxptr_HpcOmScheduler_sumEdge,0}};
#define boxvar_HpcOmScheduler_sumEdge MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_sumEdge)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_arrayIntIsNotOne(threadData_t *threadData, modelica_integer _idx, modelica_metatype _arr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_arrayIntIsNotOne(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _arr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_arrayIntIsNotOne,2,0) {(void*) boxptr_HpcOmScheduler_arrayIntIsNotOne,0}};
#define boxvar_HpcOmScheduler_arrayIntIsNotOne MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_arrayIntIsNotOne)
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_createMetisSchedule1(threadData_t *threadData, modelica_metatype _taskIdcs, modelica_metatype _threadIds, modelica_metatype _taskGraph, modelica_metatype _taskGraphT, modelica_metatype _priorityArr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createMetisSchedule1,2,0) {(void*) boxptr_HpcOmScheduler_createMetisSchedule1,0}};
#define boxvar_HpcOmScheduler_createMetisSchedule1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createMetisSchedule1)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_isPrioNode(threadData_t *threadData, modelica_integer _idx, modelica_metatype _prioArr);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_isPrioNode(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _prioArr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_isPrioNode,2,0) {(void*) boxptr_HpcOmScheduler_isPrioNode,0}};
#define boxvar_HpcOmScheduler_isPrioNode MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_isPrioNode)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createMetisSchedule2(threadData_t *threadData, modelica_metatype _levelNodes, modelica_metatype _priorityArr, modelica_metatype _prioLstIn, modelica_metatype _otherLstIn, modelica_metatype *out_otherLstOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createMetisSchedule2,2,0) {(void*) boxptr_HpcOmScheduler_createMetisSchedule2,0}};
#define boxvar_HpcOmScheduler_createMetisSchedule2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createMetisSchedule2)
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_getProcAss(threadData_t *threadData, modelica_integer _idx, modelica_metatype _taskAss, modelica_metatype _procAss);
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_getProcAss(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _taskAss, modelica_metatype _procAss);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getProcAss,2,0) {(void*) boxptr_HpcOmScheduler_getProcAss,0}};
#define boxvar_HpcOmScheduler_getProcAss MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getProcAss)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_filterNodeLevelMapping(threadData_t *threadData, modelica_metatype _iElem);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_filterNodeLevelMapping,2,0) {(void*) boxptr_HpcOmScheduler_filterNodeLevelMapping,0}};
#define boxvar_HpcOmScheduler_filterNodeLevelMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_filterNodeLevelMapping)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_sortNodeLevelMapping(threadData_t *threadData, modelica_metatype _iElem1, modelica_metatype _iElem2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_sortNodeLevelMapping(threadData_t *threadData, modelica_metatype _iElem1, modelica_metatype _iElem2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_sortNodeLevelMapping,2,0) {(void*) boxptr_HpcOmScheduler_sortNodeLevelMapping,0}};
#define boxvar_HpcOmScheduler_sortNodeLevelMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_sortNodeLevelMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createNodeLevelMapping(threadData_t *threadData, modelica_metatype _iNodeDependenciesT, modelica_metatype _nodeMarks, modelica_metatype _inComps, modelica_metatype _iSccSimEqMapping, modelica_metatype _iNodeInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createNodeLevelMapping,2,0) {(void*) boxptr_HpcOmScheduler_createNodeLevelMapping,0}};
#define boxvar_HpcOmScheduler_createNodeLevelMapping MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createNodeLevelMapping)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getFirstReadyThread0(threadData_t *threadData, modelica_real _iThreadReadyTime, modelica_metatype _iFirstReadyThread);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getFirstReadyThread0(threadData_t *threadData, modelica_metatype _iThreadReadyTime, modelica_metatype _iFirstReadyThread);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getFirstReadyThread0,2,0) {(void*) boxptr_HpcOmScheduler_getFirstReadyThread0,0}};
#define boxvar_HpcOmScheduler_getFirstReadyThread0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getFirstReadyThread0)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getFirstReadyThread(threadData_t *threadData, modelica_metatype _iThreadReadyList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getFirstReadyThread(threadData_t *threadData, modelica_metatype _iThreadReadyList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getFirstReadyThread,2,0) {(void*) boxptr_HpcOmScheduler_getFirstReadyThread,0}};
#define boxvar_HpcOmScheduler_getFirstReadyThread MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getFirstReadyThread)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getBestFittingThread(threadData_t *threadData, modelica_metatype _iAdviceList, modelica_real _iLevelExecCosts, modelica_metatype _iThreadReadyList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getBestFittingThread(threadData_t *threadData, modelica_metatype _iAdviceList, modelica_metatype _iLevelExecCosts, modelica_metatype _iThreadReadyList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getBestFittingThread,2,0) {(void*) boxptr_HpcOmScheduler_getBestFittingThread,0}};
#define boxvar_HpcOmScheduler_getBestFittingThread MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getBestFittingThread)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_intTpl22Gt(threadData_t *threadData, modelica_metatype _iTpl1, modelica_metatype _iTpl2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_intTpl22Gt(threadData_t *threadData, modelica_metatype _iTpl1, modelica_metatype _iTpl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_intTpl22Gt,2,0) {(void*) boxptr_HpcOmScheduler_intTpl22Gt,0}};
#define boxvar_HpcOmScheduler_intTpl22Gt MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_intTpl22Gt)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_arrayToTupleListZeroRemoved(threadData_t *threadData, modelica_metatype _iArray, modelica_integer _iCurrentIdx, modelica_metatype _iTupleList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_arrayToTupleListZeroRemoved(threadData_t *threadData, modelica_metatype _iArray, modelica_metatype _iCurrentIdx, modelica_metatype _iTupleList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_arrayToTupleListZeroRemoved,2,0) {(void*) boxptr_HpcOmScheduler_arrayToTupleListZeroRemoved,0}};
#define boxvar_HpcOmScheduler_arrayToTupleListZeroRemoved MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_arrayToTupleListZeroRemoved)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_flattenAdviceListElem(threadData_t *threadData, modelica_integer _iAdviceElem, modelica_metatype _iCounterArray);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_flattenAdviceListElem(threadData_t *threadData, modelica_metatype _iAdviceElem, modelica_metatype _iCounterArray);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_flattenAdviceListElem,2,0) {(void*) boxptr_HpcOmScheduler_flattenAdviceListElem,0}};
#define boxvar_HpcOmScheduler_flattenAdviceListElem MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_flattenAdviceListElem)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_flattenAdviceList(threadData_t *threadData, modelica_metatype _iAdviceList, modelica_integer _iNumOfThreads);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_flattenAdviceList(threadData_t *threadData, modelica_metatype _iAdviceList, modelica_metatype _iNumOfThreads);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_flattenAdviceList,2,0) {(void*) boxptr_HpcOmScheduler_flattenAdviceList,0}};
#define boxvar_HpcOmScheduler_flattenAdviceList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_flattenAdviceList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createFixedLevelScheduleForTask0(threadData_t *threadData, modelica_integer _iSuccessor, modelica_integer _iThreadAdvice, modelica_metatype _iAdviceList);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createFixedLevelScheduleForTask0(threadData_t *threadData, modelica_metatype _iSuccessor, modelica_metatype _iThreadAdvice, modelica_metatype _iAdviceList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createFixedLevelScheduleForTask0,2,0) {(void*) boxptr_HpcOmScheduler_createFixedLevelScheduleForTask0,0}};
#define boxvar_HpcOmScheduler_createFixedLevelScheduleForTask0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createFixedLevelScheduleForTask0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createFixedLevelScheduleForTask(threadData_t *threadData, modelica_integer _iTaskIdx, modelica_real _iLevelExecCosts, modelica_metatype _iAdviceList, modelica_metatype _iThreadReadyList, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iThreadTasks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createFixedLevelScheduleForTask(threadData_t *threadData, modelica_metatype _iTaskIdx, modelica_metatype _iLevelExecCosts, modelica_metatype _iAdviceList, modelica_metatype _iThreadReadyList, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iThreadTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createFixedLevelScheduleForTask,2,0) {(void*) boxptr_HpcOmScheduler_createFixedLevelScheduleForTask,0}};
#define boxvar_HpcOmScheduler_createFixedLevelScheduleForTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createFixedLevelScheduleForTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createFixedLevelScheduleForLevel0(threadData_t *threadData, modelica_metatype _iTaskList, modelica_metatype _iComps, modelica_metatype _iSccSimEqMapping, modelica_metatype _iIdxTaskList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createFixedLevelScheduleForLevel0,2,0) {(void*) boxptr_HpcOmScheduler_createFixedLevelScheduleForLevel0,0}};
#define boxvar_HpcOmScheduler_createFixedLevelScheduleForLevel0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createFixedLevelScheduleForLevel0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createFixedLevelScheduleForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iAdviceList, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iLevelTaskLists);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createFixedLevelScheduleForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iAdviceList, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iLevelTaskLists);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createFixedLevelScheduleForLevel,2,0) {(void*) boxptr_HpcOmScheduler_createFixedLevelScheduleForLevel,0}};
#define boxvar_HpcOmScheduler_createFixedLevelScheduleForLevel MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createFixedLevelScheduleForLevel)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpLevelSchedule(threadData_t *threadData, modelica_metatype _iLevelInfo, modelica_integer _iLevel, modelica_integer *out_oLevel);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_dumpLevelSchedule(threadData_t *threadData, modelica_metatype _iLevelInfo, modelica_metatype _iLevel, modelica_metatype *out_oLevel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpLevelSchedule,2,0) {(void*) boxptr_HpcOmScheduler_dumpLevelSchedule,0}};
#define boxvar_HpcOmScheduler_dumpLevelSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpLevelSchedule)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_arrayIntIsNegative(threadData_t *threadData, modelica_integer _node, modelica_metatype _ass);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_arrayIntIsNegative(threadData_t *threadData, modelica_metatype _node, modelica_metatype _ass);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_arrayIntIsNegative,2,0) {(void*) boxptr_HpcOmScheduler_arrayIntIsNegative,0}};
#define boxvar_HpcOmScheduler_arrayIntIsNegative MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_arrayIntIsNegative)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_makeCalcTaskLevel(threadData_t *threadData, modelica_metatype _iNodeIdc, modelica_metatype _iNodeSccMapping, modelica_metatype _iSccSimEqMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_makeCalcTaskLevel,2,0) {(void*) boxptr_HpcOmScheduler_makeCalcTaskLevel,0}};
#define boxvar_HpcOmScheduler_makeCalcTaskLevel MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_makeCalcTaskLevel)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_makeCalcLevelParTaskLstForMergedNodes(threadData_t *threadData, modelica_metatype _iNodeIdc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iNodeSccMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_makeCalcLevelParTaskLstForMergedNodes,2,0) {(void*) boxptr_HpcOmScheduler_makeCalcLevelParTaskLstForMergedNodes,0}};
#define boxvar_HpcOmScheduler_makeCalcLevelParTaskLstForMergedNodes MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_makeCalcLevelParTaskLstForMergedNodes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_makeCalcLevelParTaskLst(threadData_t *threadData, modelica_metatype _iNodeIdc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iNodeSccMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_makeCalcLevelParTaskLst,2,0) {(void*) boxptr_HpcOmScheduler_makeCalcLevelParTaskLst,0}};
#define boxvar_HpcOmScheduler_makeCalcLevelParTaskLst MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_makeCalcLevelParTaskLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLevelAssignment(threadData_t *threadData, modelica_metatype _level, modelica_metatype _tplIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelAssignment,2,0) {(void*) boxptr_HpcOmScheduler_getLevelAssignment,0}};
#define boxvar_HpcOmScheduler_getLevelAssignment MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLevelAssignment)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createLevelScheduleForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iLevelTaskLists);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createLevelScheduleForLevel,2,0) {(void*) boxptr_HpcOmScheduler_createLevelScheduleForLevel,0}};
#define boxvar_HpcOmScheduler_createLevelScheduleForLevel MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createLevelScheduleForLevel)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_deleteIntListMembers(threadData_t *threadData, modelica_metatype _lst1, modelica_metatype _lst2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_deleteIntListMembers,2,0) {(void*) boxptr_HpcOmScheduler_deleteIntListMembers,0}};
#define boxvar_HpcOmScheduler_deleteIntListMembers MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_deleteIntListMembers)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_realSum(threadData_t *threadData, modelica_metatype _reals);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_realSum(threadData_t *threadData, modelica_metatype _reals);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_realSum,2,0) {(void*) boxptr_HpcOmScheduler_realSum,0}};
#define boxvar_HpcOmScheduler_realSum MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_realSum)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__mergeToTargetSize(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _costsIn, modelica_real _targetSize, modelica_metatype _mergedNodesIn, modelica_metatype *out_clusterCostsOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_BLS__mergeToTargetSize(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _costsIn, modelica_metatype _targetSize, modelica_metatype _mergedNodesIn, modelica_metatype *out_clusterCostsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__mergeToTargetSize,2,0) {(void*) boxptr_HpcOmScheduler_BLS__mergeToTargetSize,0}};
#define boxvar_HpcOmScheduler_BLS__mergeToTargetSize MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__mergeToTargetSize)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__getDependentGroups(threadData_t *threadData, modelica_metatype _nodes, modelica_metatype _iGraph, modelica_metatype _iGraphT, modelica_metatype _referenceNodesIn, modelica_metatype _dependentsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__getDependentGroups,2,0) {(void*) boxptr_HpcOmScheduler_BLS__getDependentGroups,0}};
#define boxvar_HpcOmScheduler_BLS__getDependentGroups MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__getDependentGroups)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__mergeDependentLevelTask(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _iGraph, modelica_metatype _iGraphT, modelica_metatype _sectionsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__mergeDependentLevelTask,2,0) {(void*) boxptr_HpcOmScheduler_BLS__mergeDependentLevelTask,0}};
#define boxvar_HpcOmScheduler_BLS__mergeDependentLevelTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__mergeDependentLevelTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__fillParallelSections(threadData_t *threadData, modelica_metatype _levelIn, modelica_metatype _levelAssIn, modelica_metatype _critPathNodes, modelica_integer _levelIdx, modelica_real _targetCosts, modelica_metatype _iGraph, modelica_metatype _iGraphT, modelica_metatype _iMeta, modelica_metatype _unassNodesIn, modelica_metatype _sectionsIn);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_BLS__fillParallelSections(threadData_t *threadData, modelica_metatype _levelIn, modelica_metatype _levelAssIn, modelica_metatype _critPathNodes, modelica_metatype _levelIdx, modelica_metatype _targetCosts, modelica_metatype _iGraph, modelica_metatype _iGraphT, modelica_metatype _iMeta, modelica_metatype _unassNodesIn, modelica_metatype _sectionsIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__fillParallelSections,2,0) {(void*) boxptr_HpcOmScheduler_BLS__fillParallelSections,0}};
#define boxvar_HpcOmScheduler_BLS__fillParallelSections MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__fillParallelSections)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__generateSchedule(threadData_t *threadData, modelica_metatype _level, modelica_metatype _iMeta, modelica_metatype _iSccSimEqMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__generateSchedule,2,0) {(void*) boxptr_HpcOmScheduler_BLS__generateSchedule,0}};
#define boxvar_HpcOmScheduler_BLS__generateSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__generateSchedule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__mergeSmallSections(threadData_t *threadData, modelica_metatype _sectionsIn, modelica_metatype _iMeta, modelica_real _targetCosts);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_BLS__mergeSmallSections(threadData_t *threadData, modelica_metatype _sectionsIn, modelica_metatype _iMeta, modelica_metatype _targetCosts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__mergeSmallSections,2,0) {(void*) boxptr_HpcOmScheduler_BLS__mergeSmallSections,0}};
#define boxvar_HpcOmScheduler_BLS__mergeSmallSections MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_BLS__mergeSmallSections)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertScheduleStrucToInfoLevel1(threadData_t *threadData, modelica_metatype _tasks, modelica_integer _sectionsNumber, modelica_integer _sectionIdx, modelica_metatype _iScheduleInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertScheduleStrucToInfoLevel1(threadData_t *threadData, modelica_metatype _tasks, modelica_metatype _sectionsNumber, modelica_metatype _sectionIdx, modelica_metatype _iScheduleInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertScheduleStrucToInfoLevel1,2,0) {(void*) boxptr_HpcOmScheduler_convertScheduleStrucToInfoLevel1,0}};
#define boxvar_HpcOmScheduler_convertScheduleStrucToInfoLevel1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertScheduleStrucToInfoLevel1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertScheduleStrucToInfoLevel(threadData_t *threadData, modelica_metatype _taskLst, modelica_integer _sectionsNumber, modelica_metatype _iScheduleInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertScheduleStrucToInfoLevel(threadData_t *threadData, modelica_metatype _taskLst, modelica_metatype _sectionsNumber, modelica_metatype _iScheduleInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertScheduleStrucToInfoLevel,2,0) {(void*) boxptr_HpcOmScheduler_convertScheduleStrucToInfoLevel,0}};
#define boxvar_HpcOmScheduler_convertScheduleStrucToInfoLevel MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertScheduleStrucToInfoLevel)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertScheduleStrucToInfo1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iScheduleInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertScheduleStrucToInfo1,2,0) {(void*) boxptr_HpcOmScheduler_convertScheduleStrucToInfo1,0}};
#define boxvar_HpcOmScheduler_convertScheduleStrucToInfo1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertScheduleStrucToInfo1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertScheduleStrucToInfo0(threadData_t *threadData, modelica_metatype _iTaskList, modelica_metatype _iScheduleInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertScheduleStrucToInfo0,2,0) {(void*) boxptr_HpcOmScheduler_convertScheduleStrucToInfo0,0}};
#define boxvar_HpcOmScheduler_convertScheduleStrucToInfo0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertScheduleStrucToInfo0)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpTask(threadData_t *threadData, modelica_metatype _iTask);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpTask,2,0) {(void*) boxptr_HpcOmScheduler_dumpTask,0}};
#define boxvar_HpcOmScheduler_dumpTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpTask)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpTaskList(threadData_t *threadData, modelica_metatype _iTaskList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpTaskList,2,0) {(void*) boxptr_HpcOmScheduler_dumpTaskList,0}};
#define boxvar_HpcOmScheduler_dumpTaskList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpTaskList)
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_printTaskList(threadData_t *threadData, modelica_metatype _iTaskList);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_printTaskList,2,0) {(void*) boxptr_HpcOmScheduler_printTaskList,0}};
#define boxvar_HpcOmScheduler_printTaskList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_printTaskList)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpTaskDepSchedule(threadData_t *threadData, modelica_metatype _iTaskInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpTaskDepSchedule,2,0) {(void*) boxptr_HpcOmScheduler_dumpTaskDepSchedule,0}};
#define boxvar_HpcOmScheduler_dumpTaskDepSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpTaskDepSchedule)
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpThreadSchedule(threadData_t *threadData, modelica_metatype _iTaskList, modelica_integer _iThreadIdx, modelica_integer *out_oThreadIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_dumpThreadSchedule(threadData_t *threadData, modelica_metatype _iTaskList, modelica_metatype _iThreadIdx, modelica_metatype *out_oThreadIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpThreadSchedule,2,0) {(void*) boxptr_HpcOmScheduler_dumpThreadSchedule,0}};
#define boxvar_HpcOmScheduler_dumpThreadSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_dumpThreadSchedule)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_compareTaskWithThreadIdx(threadData_t *threadData, modelica_integer _iThreadIdx, modelica_metatype _iTask1);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_compareTaskWithThreadIdx(threadData_t *threadData, modelica_metatype _iThreadIdx, modelica_metatype _iTask1);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_compareTaskWithThreadIdx,2,0) {(void*) boxptr_HpcOmScheduler_compareTaskWithThreadIdx,0}};
#define boxvar_HpcOmScheduler_compareTaskWithThreadIdx MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_compareTaskWithThreadIdx)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_compareTasksByEqIdc(threadData_t *threadData, modelica_metatype _iTask1, modelica_metatype _iTask2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_compareTasksByEqIdc(threadData_t *threadData, modelica_metatype _iTask1, modelica_metatype _iTask2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_compareTasksByEqIdc,2,0) {(void*) boxptr_HpcOmScheduler_compareTasksByEqIdc,0}};
#define boxvar_HpcOmScheduler_compareTasksByEqIdc MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_compareTasksByEqIdc)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_compareTasksByWeighting(threadData_t *threadData, modelica_metatype _iTask1, modelica_metatype _iTask2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_compareTasksByWeighting(threadData_t *threadData, modelica_metatype _iTask1, modelica_metatype _iTask2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_compareTasksByWeighting,2,0) {(void*) boxptr_HpcOmScheduler_compareTasksByWeighting,0}};
#define boxvar_HpcOmScheduler_compareTasksByWeighting MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_compareTasksByWeighting)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getTaskByIndex(threadData_t *threadData, modelica_integer _iTaskIdx, modelica_metatype _iAllCalcTasks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getTaskByIndex(threadData_t *threadData, modelica_metatype _iTaskIdx, modelica_metatype _iAllCalcTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTaskByIndex,2,0) {(void*) boxptr_HpcOmScheduler_getTaskByIndex,0}};
#define boxvar_HpcOmScheduler_getTaskByIndex MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTaskByIndex)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getMaxCommCostsByTaskList2(threadData_t *threadData, modelica_metatype _iCommCosts, modelica_integer _iIdx);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMaxCommCostsByTaskList2(threadData_t *threadData, modelica_metatype _iCommCosts, modelica_metatype _iIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMaxCommCostsByTaskList2,2,0) {(void*) boxptr_HpcOmScheduler_getMaxCommCostsByTaskList2,0}};
#define boxvar_HpcOmScheduler_getMaxCommCostsByTaskList2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMaxCommCostsByTaskList2)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMaxCommCostsByTaskList1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iParentTask, modelica_metatype _iCommCosts, modelica_real _iCurrentMax);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMaxCommCostsByTaskList1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iParentTask, modelica_metatype _iCommCosts, modelica_metatype _iCurrentMax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMaxCommCostsByTaskList1,2,0) {(void*) boxptr_HpcOmScheduler_getMaxCommCostsByTaskList1,0}};
#define boxvar_HpcOmScheduler_getMaxCommCostsByTaskList1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMaxCommCostsByTaskList1)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMaxCommCostsByTaskList(threadData_t *threadData, modelica_metatype _iParentTask, modelica_metatype _iTaskList, modelica_metatype _iCommCosts);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMaxCommCostsByTaskList(threadData_t *threadData, modelica_metatype _iParentTask, modelica_metatype _iTaskList, modelica_metatype _iCommCosts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMaxCommCostsByTaskList,2,0) {(void*) boxptr_HpcOmScheduler_getMaxCommCostsByTaskList,0}};
#define boxvar_HpcOmScheduler_getMaxCommCostsByTaskList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getMaxCommCostsByTaskList)
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_calculateFinishTimeByThreadId(threadData_t *threadData, modelica_real _iThreadReadyTime, modelica_real _iPredecessorTaskLastFinished, modelica_integer _iThreadId, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_calculateFinishTimeByThreadId(threadData_t *threadData, modelica_metatype _iThreadReadyTime, modelica_metatype _iPredecessorTaskLastFinished, modelica_metatype _iThreadId, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_calculateFinishTimeByThreadId,2,0) {(void*) boxptr_HpcOmScheduler_calculateFinishTimeByThreadId,0}};
#define boxvar_HpcOmScheduler_calculateFinishTimeByThreadId MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_calculateFinishTimeByThreadId)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_calculateFinishTimes1(threadData_t *threadData, modelica_real _iPredecessorTaskLastFinished, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts, modelica_metatype _iThreadReadyTimes, modelica_integer _iThreadIdx, modelica_metatype _iFinishTimes);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_calculateFinishTimes1(threadData_t *threadData, modelica_metatype _iPredecessorTaskLastFinished, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts, modelica_metatype _iThreadReadyTimes, modelica_metatype _iThreadIdx, modelica_metatype _iFinishTimes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_calculateFinishTimes1,2,0) {(void*) boxptr_HpcOmScheduler_calculateFinishTimes1,0}};
#define boxvar_HpcOmScheduler_calculateFinishTimes1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_calculateFinishTimes1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_calculateFinishTimes(threadData_t *threadData, modelica_real _iPredecessorTaskLastFinished, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts, modelica_metatype _iThreadReadyTimes);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_calculateFinishTimes(threadData_t *threadData, modelica_metatype _iPredecessorTaskLastFinished, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts, modelica_metatype _iThreadReadyTimes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_calculateFinishTimes,2,0) {(void*) boxptr_HpcOmScheduler_calculateFinishTimes,0}};
#define boxvar_HpcOmScheduler_calculateFinishTimes MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_calculateFinishTimes)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertNodeToTaskReverse(threadData_t *threadData, modelica_integer _iNodeIdx, modelica_metatype _iTaskGraphMeta);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertNodeToTaskReverse(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iTaskGraphMeta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertNodeToTaskReverse,2,0) {(void*) boxptr_HpcOmScheduler_convertNodeToTaskReverse,0}};
#define boxvar_HpcOmScheduler_convertNodeToTaskReverse MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertNodeToTaskReverse)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertNodeToTask(threadData_t *threadData, modelica_integer _iNodeIdx, modelica_metatype _iTaskGraphMeta);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertNodeToTask(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iTaskGraphMeta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertNodeToTask,2,0) {(void*) boxptr_HpcOmScheduler_convertNodeToTask,0}};
#define boxvar_HpcOmScheduler_convertNodeToTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertNodeToTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertTaskGraphToTasks1(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iTaskGraphT, modelica_integer _iIndex, modelica_fnptr _iConverterFunc, modelica_metatype _iTasks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertTaskGraphToTasks1(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iTaskGraphT, modelica_metatype _iIndex, modelica_fnptr _iConverterFunc, modelica_metatype _iTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertTaskGraphToTasks1,2,0) {(void*) boxptr_HpcOmScheduler_convertTaskGraphToTasks1,0}};
#define boxvar_HpcOmScheduler_convertTaskGraphToTasks1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertTaskGraphToTasks1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertTaskGraphToTasks(threadData_t *threadData, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_fnptr _iConverterFunc);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertTaskGraphToTasks,2,0) {(void*) boxptr_HpcOmScheduler_convertTaskGraphToTasks,0}};
#define boxvar_HpcOmScheduler_convertTaskGraphToTasks MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertTaskGraphToTasks)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getTaskWithHighestFinishTime(threadData_t *threadData, modelica_metatype _iTasks, modelica_metatype _iCurrentTask);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTaskWithHighestFinishTime,2,0) {(void*) boxptr_HpcOmScheduler_getTaskWithHighestFinishTime,0}};
#define boxvar_HpcOmScheduler_getTaskWithHighestFinishTime MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getTaskWithHighestFinishTime)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getThreadFinishTimesMin(threadData_t *threadData, modelica_integer _iThreadIdx, modelica_metatype _iThreadFinishTimes, modelica_integer _iCurrentMinThreadIdx, modelica_real _iCurrentMinFinishTime);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getThreadFinishTimesMin(threadData_t *threadData, modelica_metatype _iThreadIdx, modelica_metatype _iThreadFinishTimes, modelica_metatype _iCurrentMinThreadIdx, modelica_metatype _iCurrentMinFinishTime);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getThreadFinishTimesMin,2,0) {(void*) boxptr_HpcOmScheduler_getThreadFinishTimesMin,0}};
#define boxvar_HpcOmScheduler_getThreadFinishTimesMin MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getThreadFinishTimesMin)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateRefCounterBySuccessorIdc(threadData_t *threadData, modelica_metatype _iAllCalcTasks, modelica_metatype _iSuccessorIdc, modelica_metatype _iRefZeroTasks, modelica_metatype *out_oRefZeroTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateRefCounterBySuccessorIdc,2,0) {(void*) boxptr_HpcOmScheduler_updateRefCounterBySuccessorIdc,0}};
#define boxvar_HpcOmScheduler_updateRefCounterBySuccessorIdc MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_updateRefCounterBySuccessorIdc)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createDepTaskByTaskIdcR(threadData_t *threadData, modelica_integer _iSourceTaskIdx, modelica_integer _iTargetTaskIdx, modelica_metatype _iAllCalcTasks, modelica_boolean _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createDepTaskByTaskIdcR(threadData_t *threadData, modelica_metatype _iSourceTaskIdx, modelica_metatype _iTargetTaskIdx, modelica_metatype _iAllCalcTasks, modelica_metatype _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createDepTaskByTaskIdcR,2,0) {(void*) boxptr_HpcOmScheduler_createDepTaskByTaskIdcR,0}};
#define boxvar_HpcOmScheduler_createDepTaskByTaskIdcR MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createDepTaskByTaskIdcR)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createDepTaskByTaskIdc(threadData_t *threadData, modelica_integer _iSourceTaskIdx, modelica_integer _iTargetTaskIdx, modelica_metatype _iAllCalcTasks, modelica_boolean _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createDepTaskByTaskIdc(threadData_t *threadData, modelica_metatype _iSourceTaskIdx, modelica_metatype _iTargetTaskIdx, modelica_metatype _iAllCalcTasks, modelica_metatype _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createDepTaskByTaskIdc,2,0) {(void*) boxptr_HpcOmScheduler_createDepTaskByTaskIdc,0}};
#define boxvar_HpcOmScheduler_createDepTaskByTaskIdc MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createDepTaskByTaskIdc)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData_t *threadData, modelica_metatype _iSourceTask, modelica_metatype _iTargetTask, modelica_boolean _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData_t *threadData, modelica_metatype _iSourceTask, modelica_metatype _iTargetTask, modelica_metatype _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createDepTaskAndCommunicationInfo,2,0) {(void*) boxptr_HpcOmScheduler_createDepTaskAndCommunicationInfo,0}};
#define boxvar_HpcOmScheduler_createDepTaskAndCommunicationInfo MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createDepTaskAndCommunicationInfo)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createDepTask(threadData_t *threadData, modelica_metatype _iSourceTask, modelica_metatype _iTargetTask, modelica_boolean _iOutgoing, modelica_metatype _commInfo);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createDepTask(threadData_t *threadData, modelica_metatype _iSourceTask, modelica_metatype _iTargetTask, modelica_metatype _iOutgoing, modelica_metatype _commInfo);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createDepTask,2,0) {(void*) boxptr_HpcOmScheduler_createDepTask,0}};
#define boxvar_HpcOmScheduler_createDepTask MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createDepTask)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertVarIdxToSimVar(threadData_t *threadData, modelica_integer _iVarIdx, modelica_metatype _iSimVarMapping, modelica_metatype _iSimVar);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertVarIdxToSimVar(threadData_t *threadData, modelica_metatype _iVarIdx, modelica_metatype _iSimVarMapping, modelica_metatype _iSimVar);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertVarIdxToSimVar,2,0) {(void*) boxptr_HpcOmScheduler_convertVarIdxToSimVar,0}};
#define boxvar_HpcOmScheduler_convertVarIdxToSimVar MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertVarIdxToSimVar)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertCommunicationToCommInfo(threadData_t *threadData, modelica_metatype _iCommunication, modelica_metatype _iSimVarMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertCommunicationToCommInfo,2,0) {(void*) boxptr_HpcOmScheduler_convertCommunicationToCommInfo,0}};
#define boxvar_HpcOmScheduler_convertCommunicationToCommInfo MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_convertCommunicationToCommInfo)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getCommunicationObjBetweenMergedTasks1(threadData_t *threadData, modelica_metatype _parentCommCost, modelica_metatype _tasks, modelica_metatype _iCommunication);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getCommunicationObjBetweenMergedTasks1,2,0) {(void*) boxptr_HpcOmScheduler_getCommunicationObjBetweenMergedTasks1,0}};
#define boxvar_HpcOmScheduler_getCommunicationObjBetweenMergedTasks1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getCommunicationObjBetweenMergedTasks1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getCommunicationObjBetweenMergedTasks(threadData_t *threadData, modelica_integer _parentNode, modelica_integer _node, modelica_metatype _inComps, modelica_metatype _inCommCosts);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getCommunicationObjBetweenMergedTasks(threadData_t *threadData, modelica_metatype _parentNode, modelica_metatype _node, modelica_metatype _inComps, modelica_metatype _inCommCosts);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getCommunicationObjBetweenMergedTasks,2,0) {(void*) boxptr_HpcOmScheduler_getCommunicationObjBetweenMergedTasks,0}};
#define boxvar_HpcOmScheduler_getCommunicationObjBetweenMergedTasks MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getCommunicationObjBetweenMergedTasks)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLockTasksByPredecessorListReverse0(threadData_t *threadData, modelica_metatype _iPredecessorTask, modelica_metatype _iTask, modelica_integer _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iLockTasks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLockTasksByPredecessorListReverse0(threadData_t *threadData, modelica_metatype _iPredecessorTask, modelica_metatype _iTask, modelica_metatype _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iLockTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLockTasksByPredecessorListReverse0,2,0) {(void*) boxptr_HpcOmScheduler_getLockTasksByPredecessorListReverse0,0}};
#define boxvar_HpcOmScheduler_getLockTasksByPredecessorListReverse0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLockTasksByPredecessorListReverse0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLockTasksByPredecessorListReverse(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iPredecessorList, modelica_integer _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oOutgoingDepTasks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLockTasksByPredecessorListReverse(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iPredecessorList, modelica_metatype _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oOutgoingDepTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLockTasksByPredecessorListReverse,2,0) {(void*) boxptr_HpcOmScheduler_getLockTasksByPredecessorListReverse,0}};
#define boxvar_HpcOmScheduler_getLockTasksByPredecessorListReverse MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLockTasksByPredecessorListReverse)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLockTasksByPredecessorList(threadData_t *threadData, modelica_metatype _iPredecessorTask, modelica_metatype _iTask, modelica_integer _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iLockTasks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLockTasksByPredecessorList(threadData_t *threadData, modelica_metatype _iPredecessorTask, modelica_metatype _iTask, modelica_metatype _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iLockTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLockTasksByPredecessorList,2,0) {(void*) boxptr_HpcOmScheduler_getLockTasksByPredecessorList,0}};
#define boxvar_HpcOmScheduler_getLockTasksByPredecessorList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLockTasksByPredecessorList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLocksByPredecessorList(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iPredecessorList, modelica_integer _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oOutgoingDepTasks);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLocksByPredecessorList(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iPredecessorList, modelica_metatype _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oOutgoingDepTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLocksByPredecessorList,2,0) {(void*) boxptr_HpcOmScheduler_getLocksByPredecessorList,0}};
#define boxvar_HpcOmScheduler_getLocksByPredecessorList MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getLocksByPredecessorList)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getSimEqSysIdcsForCompLst(threadData_t *threadData, modelica_metatype _compIdcs, modelica_metatype _iSccSimEqMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getSimEqSysIdcsForCompLst,2,0) {(void*) boxptr_HpcOmScheduler_getSimEqSysIdcsForCompLst,0}};
#define boxvar_HpcOmScheduler_getSimEqSysIdcsForCompLst MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getSimEqSysIdcsForCompLst)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getSimEqSysIdxForComp(threadData_t *threadData, modelica_integer _compIdx, modelica_metatype _iSccSimEqMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getSimEqSysIdxForComp(threadData_t *threadData, modelica_metatype _compIdx, modelica_metatype _iSccSimEqMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getSimEqSysIdxForComp,2,0) {(void*) boxptr_HpcOmScheduler_getSimEqSysIdxForComp,0}};
#define boxvar_HpcOmScheduler_getSimEqSysIdxForComp MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_getSimEqSysIdxForComp)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addAssignLocksToSchedule(threadData_t *threadData, modelica_metatype _iSuccessorTask, modelica_metatype _iTask, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iReleaseTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addAssignLocksToSchedule,2,0) {(void*) boxptr_HpcOmScheduler_addAssignLocksToSchedule,0}};
#define boxvar_HpcOmScheduler_addAssignLocksToSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addAssignLocksToSchedule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addReleaseLocksToSchedule(threadData_t *threadData, modelica_metatype _iSuccessorTask, modelica_metatype _iTask, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iReleaseTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addReleaseLocksToSchedule,2,0) {(void*) boxptr_HpcOmScheduler_addReleaseLocksToSchedule,0}};
#define boxvar_HpcOmScheduler_addReleaseLocksToSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addReleaseLocksToSchedule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addSuccessorLocksToSchedule1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iAllCalcTasks, modelica_metatype _iSimVarMapping, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iThreadIdLockFunction, modelica_metatype _iThreadTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addSuccessorLocksToSchedule1,2,0) {(void*) boxptr_HpcOmScheduler_addSuccessorLocksToSchedule1,0}};
#define boxvar_HpcOmScheduler_addSuccessorLocksToSchedule1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addSuccessorLocksToSchedule1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addSuccessorLocksToSchedule0(threadData_t *threadData, modelica_metatype _iThreadTaskList, modelica_metatype _iTaskGraph, modelica_metatype _iAllCalcTasks, modelica_metatype _iSimVarMapping, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_fnptr _iCreateLockFunction, modelica_metatype _iThreadTasks);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addSuccessorLocksToSchedule0,2,0) {(void*) boxptr_HpcOmScheduler_addSuccessorLocksToSchedule0,0}};
#define boxvar_HpcOmScheduler_addSuccessorLocksToSchedule0 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addSuccessorLocksToSchedule0)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addSuccessorLocksToSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_fnptr _iCreateLockFunction, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iSchedule);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addSuccessorLocksToSchedule,2,0) {(void*) boxptr_HpcOmScheduler_addSuccessorLocksToSchedule,0}};
#define boxvar_HpcOmScheduler_addSuccessorLocksToSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_addSuccessorLocksToSchedule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createRandomSchedule1(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iThreadReadyTimes, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_fnptr _iLockWithPredecessorHandler, modelica_integer _iNumberOfThreads, modelica_metatype _iSchedule, modelica_metatype *out_oThreadReadyTimes);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createRandomSchedule1(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iThreadReadyTimes, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_fnptr _iLockWithPredecessorHandler, modelica_metatype _iNumberOfThreads, modelica_metatype _iSchedule, modelica_metatype *out_oThreadReadyTimes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createRandomSchedule1,2,0) {(void*) boxptr_HpcOmScheduler_createRandomSchedule1,0}};
#define boxvar_HpcOmScheduler_createRandomSchedule1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createRandomSchedule1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createListSchedule1(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iThreadReadyTimes, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_fnptr _iLockWithPredecessorHandler, modelica_metatype _iSchedule, modelica_metatype *out_oThreadReadyTimes);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createListSchedule1,2,0) {(void*) boxptr_HpcOmScheduler_createListSchedule1,0}};
#define boxvar_HpcOmScheduler_createListSchedule1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmScheduler_createListSchedule1)

DLLDirection
modelica_metatype omc_HpcOmScheduler_expandSchedule(threadData_t *threadData, modelica_integer _iNumProc, modelica_integer _iNumUsedProc, modelica_metatype _iSchedule)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _outgoingDepTasks = NULL;
  modelica_metatype _scheduledTasks = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _threadTasks has no default value.
  // _outgoingDepTasks has no default value.
  // _scheduledTasks has no default value.
  // _allCalcTasks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iSchedule;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iSchedule;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _threadTasks = tmpMeta5;
          _outgoingDepTasks = tmpMeta6;
          _scheduledTasks = tmpMeta7;
          _allCalcTasks = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _threadTasks = omc_Array_expandToSize(threadData, _iNumProc, _threadTasks, tmpMeta9);
          tmpMeta10 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, _scheduledTasks, _allCalcTasks);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iSchedule;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iSchedule;
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
  _oSchedule = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_expandSchedule(threadData_t *threadData, modelica_metatype _iNumProc, modelica_metatype _iNumUsedProc, modelica_metatype _iSchedule)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumProc);
  tmp2 = mmc_unbox_integer(_iNumUsedProc);
  _oSchedule = omc_HpcOmScheduler_expandSchedule(threadData, tmp1, tmp2, _iSchedule);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_intListListString(threadData_t *threadData, modelica_metatype _lstIn)
{
  modelica_string _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  _s = stringDelimitList(omc_List_map(threadData, _lstIn, boxvar_HpcOmScheduler_intListString), _OMC_LIT0);
  _return: OMC_LABEL_UNUSED
  return _s;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_intListString(threadData_t *threadData, modelica_metatype _lstIn)
{
  modelica_string _s = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _s has no default value.
  _s = stringDelimitList(omc_List_map(threadData, _lstIn, boxvar_intString), _OMC_LIT1);

  _s = (listEmpty(_lstIn)?_OMC_LIT2:_s);
  _return: OMC_LABEL_UNUSED
  return _s;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_printRealArray1(threadData_t *threadData, modelica_real _inValue, modelica_string _header, modelica_integer _idxIn)
{
  modelica_integer _idxOut;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _idxOut has no default value.
  tmpMeta1 = stringAppend(_OMC_LIT3,intString(_idxIn));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT4);
  tmpMeta3 = stringAppend(tmpMeta2,_header);
  tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT5);
  tmpMeta5 = stringAppend(tmpMeta4,realString(_inValue));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT6);
  fputs(MMC_STRINGDATA(tmpMeta6),stdout);

  _idxOut = ((modelica_integer) 1) + _idxIn;
  _return: OMC_LABEL_UNUSED
  return _idxOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_printRealArray1(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _header, modelica_metatype _idxIn)
{
  modelica_real tmp1;
  modelica_integer tmp2;
  modelica_integer _idxOut;
  modelica_metatype out_idxOut;
  tmp1 = mmc_unbox_real(_inValue);
  tmp2 = mmc_unbox_integer(_idxIn);
  _idxOut = omc_HpcOmScheduler_printRealArray1(threadData, tmp1, _header, tmp2);
  out_idxOut = mmc_mk_icon(_idxOut);
  return out_idxOut;
}

static modelica_metatype closure0_HpcOmScheduler_printRealArray1(threadData_t *thData, modelica_metatype closure, modelica_metatype inValue, modelica_metatype idxIn)
{
  modelica_string header = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_HpcOmScheduler_printRealArray1(thData, inValue, header, idxIn);
}
PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_printRealArray(threadData_t *threadData, modelica_metatype _inArray, modelica_string _header)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_OMC_LIT7,_header);
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT6);
  fputs(MMC_STRINGDATA(tmpMeta2),stdout);

  fputs(MMC_STRINGDATA(_OMC_LIT8),stdout);

  tmpMeta3 = mmc_mk_box1(0, _header);
  omc_Array_fold(threadData, _inArray, (modelica_fnptr) mmc_mk_box2(0,closure0_HpcOmScheduler_printRealArray1,tmpMeta3), mmc_mk_integer(((modelica_integer) 1)));

  fputs(MMC_STRINGDATA(_OMC_LIT6),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iThreadTasks)
{
  modelica_metatype _oThreadTasks = NULL;
  modelica_metatype _tmpTaskLists = NULL;
  modelica_integer _threadIdx;
  modelica_metatype _oldTaskList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oThreadTasks has no default value.
  // _tmpTaskLists has no default value.
  // _threadIdx has no default value.
  // _oldTaskList has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta6)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          _threadIdx = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _oldTaskList = arrayGet(_iThreadTasks, _threadIdx);
          tmpMeta9 = mmc_mk_cons(_iTask, _oldTaskList);
          tmpMeta1 = arrayUpdate(_iThreadTasks, _threadIdx, tmpMeta9);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT9),stdout);
          tmpMeta1 = _iThreadTasks;
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
  _oThreadTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oThreadTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_integer _iThreadCount)
{
  modelica_metatype _oThreadTasks = NULL;
  modelica_metatype _tmpTaskLists = NULL;
  modelica_metatype _tasks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oThreadTasks has no default value.
  // _tmpTaskLists has no default value.
  // _tasks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTasksOfLevel;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _tasks = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          _tmpTaskLists = arrayCreate(_iThreadCount, tmpMeta7);

          _tmpTaskLists = omc_List_fold(threadData, _tasks, boxvar_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForTask, _tmpTaskLists);
          tmpMeta1 = omc_HpcOmScheduler_revertTaskList(threadData, ((modelica_integer) 1), _tmpTaskLists);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _tasks = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _tmpTaskLists = arrayCreate(_iThreadCount, tmpMeta9);
          tmpMeta1 = arrayUpdate(_tmpTaskLists, ((modelica_integer) 1), _tasks);
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
  _oThreadTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oThreadTasks;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iThreadCount)
{
  modelica_integer tmp1;
  modelica_metatype _oThreadTasks = NULL;
  tmp1 = mmc_unbox_integer(_iThreadCount);
  _oThreadTasks = omc_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel(threadData, _iTasksOfLevel, tmp1);
  /* skip box _oThreadTasks; array<list<HpcOmSimCode.Task>> */
  return _oThreadTasks;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_findInIntTuple1(threadData_t *threadData, modelica_metatype _liste, modelica_integer _toFind)
{
  modelica_integer _secondElement;
  modelica_integer _first;
  modelica_integer _second;
  modelica_metatype _iter = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _secondElement has no default value.
  // _first has no default value.
  // _second has no default value.
  // _iter has no default value.
  {
    modelica_metatype _iter;
    for (tmpMeta1 = _liste; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _iter = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _iter;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmp4 = mmc_unbox_integer(tmpMeta3);
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      _first = tmp4  /* pattern as ty=Integer */;
      _second = tmp6  /* pattern as ty=Integer */;

      if((_first == _toFind))
      {
        _secondElement = _second;

        goto _return;
      }
    }
  }

  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _secondElement;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_findInIntTuple1(threadData_t *threadData, modelica_metatype _liste, modelica_metatype _toFind)
{
  modelica_integer tmp1;
  modelica_integer _secondElement;
  modelica_metatype out_secondElement;
  tmp1 = mmc_unbox_integer(_toFind);
  _secondElement = omc_HpcOmScheduler_findInIntTuple1(threadData, _liste, tmp1);
  out_secondElement = mmc_mk_icon(_secondElement);
  return out_secondElement;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_findTaskWithLockId(threadData_t *threadData, modelica_metatype _lockIds, modelica_metatype _iTask)
{
  modelica_metatype _oTask = NULL;
  modelica_metatype _tmpTask = NULL;
  modelica_metatype _sourceTask = NULL;
  modelica_metatype _targetTask = NULL;
  modelica_boolean _outgoing;
  modelica_integer _lockId;
  modelica_integer _sourceTaskId;
  modelica_integer _targetTaskId;
  modelica_metatype _communicationInfo = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTask has no default value.
  // _tmpTask has no default value.
  // _sourceTask has no default value.
  // _targetTask has no default value.
  // _outgoing has no default value.
  // _lockId has no default value.
  // _sourceTaskId has no default value.
  // _targetTaskId has no default value.
  // _communicationInfo has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTask;
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _sourceTask = tmpMeta6;
          _targetTask = tmpMeta7;
          _outgoing = tmp9  /* pattern as ty=Boolean */;
          _communicationInfo = tmpMeta10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta11 = _sourceTask;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,6) == 0) goto goto_2;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          _sourceTaskId = tmp13  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmpMeta14 = _targetTask;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,6) == 0) goto goto_2;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 3));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          _targetTaskId = tmp16  /* pattern as ty=Integer */;

          _lockId = omc_HpcOmScheduler_findInIntTuple1(threadData, arrayGet(_lockIds, _sourceTaskId), _targetTaskId);
          tmpMeta17 = mmc_mk_box6(6, &HpcOmSimCode_Task_DEPTASK__desc, _sourceTask, _targetTask, mmc_mk_boolean(_outgoing), mmc_mk_integer(_lockId), _communicationInfo);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iTask;
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
  _oTask = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTask;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceDepTasksInListByLockIds(threadData_t *threadData, modelica_metatype _inTask, modelica_metatype _lockIds, modelica_metatype _tmpTaskList)
{
  modelica_metatype _oList = NULL;
  modelica_metatype _tmpTask = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oList has no default value.
  // _tmpTask has no default value.
  _tmpTask = omc_HpcOmScheduler_findTaskWithLockId(threadData, _lockIds, _inTask);

  tmpMeta1 = mmc_mk_cons(_tmpTask, _tmpTaskList);
  _oList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oList;
}

static modelica_metatype closure1_HpcOmScheduler_replaceDepTasksInListByLockIds(threadData_t *thData, modelica_metatype closure, modelica_metatype inTask, modelica_metatype tmpTaskList)
{
  modelica_metatype lockIds = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_HpcOmScheduler_replaceDepTasksInListByLockIds(thData, inTask, lockIds, tmpTaskList);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceDepTaskIdsByLockIds(threadData_t *threadData, modelica_metatype _inTasks, modelica_metatype _lockIds, modelica_metatype _iAllThreadTasks)
{
  modelica_metatype _oTasks = NULL;
  modelica_metatype _allThreadTasks = NULL;
  modelica_metatype _tmpList = NULL;
  modelica_integer _threadId;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTasks has no default value.
  // _allThreadTasks has no default value.
  // _tmpList has no default value.
  // _threadId has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iAllThreadTasks;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _allThreadTasks = tmpMeta2;
  _threadId = tmp4  /* pattern as ty=Integer */;

  tmpMeta5 = mmc_mk_box1(0, _lockIds);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpList = listReverse(omc_List_fold(threadData, _inTasks, (modelica_fnptr) mmc_mk_box2(0,closure1_HpcOmScheduler_replaceDepTasksInListByLockIds,tmpMeta5), tmpMeta6));

  arrayUpdate(_allThreadTasks, _threadId, _tmpList);

  tmpMeta7 = mmc_mk_box2(0, _allThreadTasks, mmc_mk_integer(((modelica_integer) 1) + _threadId));
  _oTasks = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _oTasks;
}

static modelica_metatype closure2_HpcOmScheduler_replaceDepTaskIdsByLockIds(threadData_t *thData, modelica_metatype closure, modelica_metatype inTasks, modelica_metatype iAllThreadTasks)
{
  modelica_metatype lockIds = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_HpcOmScheduler_replaceDepTaskIdsByLockIds(thData, inTasks, lockIds, iAllThreadTasks);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_setScheduleLockIds(threadData_t *threadData, modelica_metatype _iSchedule)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _allThreadTasks = NULL;
  modelica_metatype _tmpFoldArray = NULL;
  modelica_metatype _newAllThreadTasks = NULL;
  modelica_metatype _scheduledTasks = NULL;
  modelica_metatype _lockIds = NULL;
  modelica_metatype _outgoingDepTasks = NULL;
  modelica_metatype _newOutgoingDepTasks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype _newTuple = NULL;
  modelica_metatype _sourceTask = NULL;
  modelica_metatype _targetTask = NULL;
  modelica_metatype _iterTask = NULL;
  modelica_integer _counter;
  modelica_integer _id;
  modelica_integer _sourceTaskId;
  modelica_integer _targetTaskId;
  modelica_boolean _outgoing;
  modelica_metatype _communicationInfo = NULL;
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
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_integer tmp23;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _allThreadTasks has no default value.
  // _tmpFoldArray has no default value.
  // _newAllThreadTasks has no default value.
  // _scheduledTasks has no default value.
  // _lockIds has no default value.
  // _outgoingDepTasks has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _newOutgoingDepTasks = tmpMeta1;
  // _allCalcTasks has no default value.
  // _newTuple has no default value.
  // _sourceTask has no default value.
  // _targetTask has no default value.
  // _iterTask has no default value.
  // _counter has no default value.
  // _id has no default value.
  // _sourceTaskId has no default value.
  // _targetTaskId has no default value.
  // _outgoing has no default value.
  // _communicationInfo has no default value.
  /* Pattern-matching assignment */
  tmpMeta2 = _iSchedule;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,1,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 5));
  _allThreadTasks = tmpMeta3;
  _outgoingDepTasks = tmpMeta4;
  _scheduledTasks = tmpMeta5;
  _allCalcTasks = tmpMeta6;

  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _lockIds = arrayCreate(arrayLength(_allCalcTasks), tmpMeta7);

  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _newAllThreadTasks = arrayCreate(arrayLength(_allThreadTasks), tmpMeta8);

  _counter = ((modelica_integer) 0);

  {
    modelica_metatype _iterTask;
    for (tmpMeta9 = _outgoingDepTasks; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
    {
      _iterTask = MMC_CAR(tmpMeta9);
      /* Pattern-matching assignment */
      tmpMeta10 = _iterTask;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,3,5) == 0) MMC_THROW_INTERNAL();
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
      tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 3));
      tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
      tmp14 = mmc_unbox_integer(tmpMeta13);
      tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 5));
      tmp16 = mmc_unbox_integer(tmpMeta15);
      tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 6));
      _sourceTask = tmpMeta11;
      _targetTask = tmpMeta12;
      _outgoing = tmp14  /* pattern as ty=Boolean */;
      _id = tmp16  /* pattern as ty=Integer */;
      _communicationInfo = tmpMeta17;

      /* Pattern-matching assignment */
      tmpMeta18 = _sourceTask;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta18,1,6) == 0) MMC_THROW_INTERNAL();
      tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 3));
      tmp20 = mmc_unbox_integer(tmpMeta19);
      _sourceTaskId = tmp20  /* pattern as ty=Integer */;

      /* Pattern-matching assignment */
      tmpMeta21 = _targetTask;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,1,6) == 0) MMC_THROW_INTERNAL();
      tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 3));
      tmp23 = mmc_unbox_integer(tmpMeta22);
      _targetTaskId = tmp23  /* pattern as ty=Integer */;

      tmpMeta24 = mmc_mk_box2(0, mmc_mk_integer(_targetTaskId), mmc_mk_integer(_counter));
      _newTuple = tmpMeta24;

      tmpMeta25 = mmc_mk_cons(_newTuple, MMC_REFSTRUCTLIT(mmc_nil));
      arrayUpdate(_lockIds, _sourceTaskId, listAppend(arrayGet(_lockIds, _sourceTaskId), tmpMeta25));

      tmpMeta27 = mmc_mk_box6(6, &HpcOmSimCode_Task_DEPTASK__desc, _sourceTask, _targetTask, mmc_mk_boolean(_outgoing), mmc_mk_integer(_counter), _communicationInfo);
      tmpMeta26 = mmc_mk_cons(tmpMeta27, _newOutgoingDepTasks);
      _newOutgoingDepTasks = tmpMeta26;

      _counter = ((modelica_integer) 1) + _counter;
    }
  }

  tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpFoldArray = arrayCreate(arrayLength(_allThreadTasks), tmpMeta29);

  /* Pattern-matching assignment */
  tmpMeta30 = mmc_mk_box1(0, _lockIds);
  tmpMeta31 = mmc_mk_box2(0, _tmpFoldArray, mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta32 = omc_Array_fold(threadData, _allThreadTasks, (modelica_fnptr) mmc_mk_box2(0,closure2_HpcOmScheduler_replaceDepTaskIdsByLockIds,tmpMeta30), tmpMeta31);
  tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 1));
  _newAllThreadTasks = tmpMeta33;

  tmpMeta34 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _newAllThreadTasks, _newOutgoingDepTasks, _scheduledTasks, _allCalcTasks);
  _oSchedule = tmpMeta34;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_revertTaskList(threadData_t *threadData, modelica_integer _iCurrentArrayIdx, modelica_metatype _iResultList)
{
  modelica_metatype _oResultList = NULL;
  modelica_metatype _entry = NULL;
  modelica_metatype _tmpResultList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oResultList has no default value.
  // _entry has no default value.
  // _tmpResultList has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_iCurrentArrayIdx <= arrayLength(_iResultList));
          if (1 /* true */ != tmp6) goto goto_2;

          _entry = arrayGet(_iResultList, _iCurrentArrayIdx);

          _entry = listReverse(_entry);
          tmpMeta1 = arrayUpdate(_iResultList, _iCurrentArrayIdx, _entry);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iResultList;
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
  _oResultList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oResultList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_revertTaskList(threadData_t *threadData, modelica_metatype _iCurrentArrayIdx, modelica_metatype _iResultList)
{
  modelica_integer tmp1;
  modelica_metatype _oResultList = NULL;
  tmp1 = mmc_unbox_integer(_iCurrentArrayIdx);
  _oResultList = omc_HpcOmScheduler_revertTaskList(threadData, tmp1, _iResultList);
  /* skip box _oResultList; array<list<HpcOmSimCode.Task>> */
  return _oResultList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_revertTaskLists(threadData_t *threadData, modelica_integer _iCurrentArrayIdx, modelica_metatype _iResultList)
{
  modelica_metatype _oResultList = NULL;
  modelica_metatype _entryOde = NULL;
  modelica_metatype _entryDae = NULL;
  modelica_metatype _entryZeroFunc = NULL;
  modelica_metatype _tmpResultList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oResultList has no default value.
  // _entryOde has no default value.
  // _entryDae has no default value.
  // _entryZeroFunc has no default value.
  // _tmpResultList has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_iCurrentArrayIdx <= arrayLength(_iResultList));
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta7 = arrayGet(_iResultList, _iCurrentArrayIdx);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          _entryOde = tmpMeta8;
          _entryDae = tmpMeta9;
          _entryZeroFunc = tmpMeta10;

          _entryOde = listReverse(_entryOde);

          _entryDae = listReverse(_entryDae);

          _entryZeroFunc = listReverse(_entryZeroFunc);

          tmpMeta11 = mmc_mk_box3(0, _entryOde, _entryDae, _entryZeroFunc);
          _tmpResultList = arrayUpdate(_iResultList, _iCurrentArrayIdx, tmpMeta11);
          tmpMeta1 = omc_HpcOmScheduler_revertTaskLists(threadData, ((modelica_integer) 1) + _iCurrentArrayIdx, _tmpResultList);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iResultList;
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
  _oResultList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oResultList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_revertTaskLists(threadData_t *threadData, modelica_metatype _iCurrentArrayIdx, modelica_metatype _iResultList)
{
  modelica_integer tmp1;
  modelica_metatype _oResultList = NULL;
  tmp1 = mmc_unbox_integer(_iCurrentArrayIdx);
  _oResultList = omc_HpcOmScheduler_revertTaskLists(threadData, tmp1, _iResultList);
  /* skip box _oResultList; array<tuple<list<list<HpcOmSimCode.Task>>, list<list<HpcOmSimCode.Task>>, list<list<HpcOmSimCode.Task>>>> */
  return _oResultList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_integer _iCurrentThreadIdx, modelica_integer _iModifiedSystemIdx, modelica_metatype _iResultList)
{
  modelica_metatype _oResultList = NULL;
  modelica_metatype _tmpResultList = NULL;
  modelica_metatype _entryOde = NULL;
  modelica_metatype _entryDae = NULL;
  modelica_metatype _entryZeroFunc = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oResultList has no default value.
  // _tmpResultList has no default value.
  // _entryOde has no default value.
  // _entryDae has no default value.
  // _entryZeroFunc has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_iCurrentThreadIdx <= arrayLength(_iLevelTasks));
          if (1 /* true */ != tmp6) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta7 = arrayGet(_iResultList, _iCurrentThreadIdx);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          _entryOde = tmpMeta8;
          _entryDae = tmpMeta9;
          _entryZeroFunc = tmpMeta10;

          if((_iModifiedSystemIdx == ((modelica_integer) 0)))
          {
            tmpMeta11 = mmc_mk_cons(arrayGet(_iLevelTasks, _iCurrentThreadIdx), _entryOde);
            _entryOde = tmpMeta11;
          }
          else
          {
            if((_iModifiedSystemIdx == ((modelica_integer) 1)))
            {
              tmpMeta12 = mmc_mk_cons(arrayGet(_iLevelTasks, _iCurrentThreadIdx), _entryDae);
              _entryDae = tmpMeta12;
            }
            else
            {
              tmpMeta13 = mmc_mk_cons(arrayGet(_iLevelTasks, _iCurrentThreadIdx), _entryZeroFunc);
              _entryZeroFunc = tmpMeta13;
            }
          }

          tmpMeta14 = mmc_mk_box3(0, _entryOde, _entryDae, _entryZeroFunc);
          _tmpResultList = arrayUpdate(_iResultList, _iCurrentThreadIdx, tmpMeta14);
          tmpMeta1 = omc_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(threadData, _iLevelTasks, ((modelica_integer) 1) + _iCurrentThreadIdx, _iModifiedSystemIdx, _tmpResultList);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iResultList;
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
  _oResultList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oResultList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iCurrentThreadIdx, modelica_metatype _iModifiedSystemIdx, modelica_metatype _iResultList)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oResultList = NULL;
  tmp1 = mmc_unbox_integer(_iCurrentThreadIdx);
  tmp2 = mmc_unbox_integer(_iModifiedSystemIdx);
  _oResultList = omc_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(threadData, _iLevelTasks, tmp1, tmp2, _iResultList);
  /* skip box _oResultList; array<tuple<list<list<HpcOmSimCode.Task>>, list<list<HpcOmSimCode.Task>>, list<list<HpcOmSimCode.Task>>>> */
  return _oResultList;
}

static modelica_metatype closure3_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(threadData_t *thData, modelica_metatype closure, modelica_metatype iLevelTasks, modelica_metatype iResultList)
{
  modelica_metatype iCurrentThreadIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iModifiedSystemIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(thData, iLevelTasks, iCurrentThreadIdx, iModifiedSystemIdx, iResultList);
}static modelica_metatype closure4_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(threadData_t *thData, modelica_metatype closure, modelica_metatype iLevelTasks, modelica_metatype iResultList)
{
  modelica_metatype iCurrentThreadIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iModifiedSystemIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(thData, iLevelTasks, iCurrentThreadIdx, iModifiedSystemIdx, iResultList);
}static modelica_metatype closure5_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(threadData_t *thData, modelica_metatype closure, modelica_metatype iLevelTasks, modelica_metatype iResultList)
{
  modelica_metatype iCurrentThreadIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iModifiedSystemIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1(thData, iLevelTasks, iCurrentThreadIdx, iModifiedSystemIdx, iResultList);
}
DLLDirection
modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToTaskLists(threadData_t *threadData, modelica_metatype _iOdeSchedule, modelica_metatype _iDaeSchedule, modelica_metatype _iZeroFuncSchedule, modelica_integer _iNumOfThreads)
{
  modelica_metatype _oThreadLevelTasks = NULL;
  modelica_metatype _tasksOfLevelsOde = NULL;
  modelica_metatype _tasksOfLevelsDae = NULL;
  modelica_metatype _tasksOfLevelsZeroFunc = NULL;
  modelica_metatype _tmpThreadLevelTasksDae = NULL;
  modelica_metatype _tmpThreadLevelTasksOde = NULL;
  modelica_metatype _tmpThreadLevelTasksZeroFunc = NULL;
  modelica_metatype _tmpResultLists = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oThreadLevelTasks has no default value.
  // _tasksOfLevelsOde has no default value.
  // _tasksOfLevelsDae has no default value.
  // _tasksOfLevelsZeroFunc has no default value.
  // _tmpThreadLevelTasksDae has no default value.
  // _tmpThreadLevelTasksOde has no default value.
  // _tmpThreadLevelTasksZeroFunc has no default value.
  // _tmpResultLists has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _iOdeSchedule;
    tmp4_2 = _iDaeSchedule;
    tmp4_3 = _iZeroFuncSchedule;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (1 /* true */ != tmp8) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,0,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (1 /* true */ != tmp11) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,0,2) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          if (1 /* true */ != tmp14) goto tmp3_end;
          _tasksOfLevelsOde = tmpMeta6;
          _tasksOfLevelsDae = tmpMeta9;
          _tasksOfLevelsZeroFunc = tmpMeta12;
          /* Pattern matching succeeded */
          _tmpResultLists = arrayCreate(_iNumOfThreads, _OMC_LIT10);

          _tmpThreadLevelTasksOde = omc_List_map1(threadData, _tasksOfLevelsOde, boxvar_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel, mmc_mk_integer(_iNumOfThreads));

          _tmpThreadLevelTasksDae = omc_List_map1(threadData, _tasksOfLevelsDae, boxvar_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel, mmc_mk_integer(_iNumOfThreads));

          _tmpThreadLevelTasksZeroFunc = omc_List_map1(threadData, _tasksOfLevelsZeroFunc, boxvar_HpcOmScheduler_convertFixedLevelScheduleToTaskListsForLevel, mmc_mk_integer(_iNumOfThreads));

          tmpMeta15 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(((modelica_integer) 0)));
          _tmpResultLists = omc_List_fold(threadData, _tmpThreadLevelTasksOde, (modelica_fnptr) mmc_mk_box2(0,closure3_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1,tmpMeta15), _tmpResultLists);

          tmpMeta16 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(((modelica_integer) 1)));
          _tmpResultLists = omc_List_fold(threadData, _tmpThreadLevelTasksDae, (modelica_fnptr) mmc_mk_box2(0,closure4_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1,tmpMeta16), _tmpResultLists);

          tmpMeta17 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(((modelica_integer) 2)));
          _tmpResultLists = omc_List_fold(threadData, _tmpThreadLevelTasksZeroFunc, (modelica_fnptr) mmc_mk_box2(0,closure5_HpcOmScheduler_convertFixedLevelScheduleToTaskLists1,tmpMeta17), _tmpResultLists);
          tmpMeta1 = omc_HpcOmScheduler_revertTaskLists(threadData, ((modelica_integer) 1), _tmpResultLists);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = arrayCreate(_iNumOfThreads, _OMC_LIT10);
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
  _oThreadLevelTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oThreadLevelTasks;
}
modelica_metatype boxptr_HpcOmScheduler_convertFixedLevelScheduleToTaskLists(threadData_t *threadData, modelica_metatype _iOdeSchedule, modelica_metatype _iDaeSchedule, modelica_metatype _iZeroFuncSchedule, modelica_metatype _iNumOfThreads)
{
  modelica_integer tmp1;
  modelica_metatype _oThreadLevelTasks = NULL;
  tmp1 = mmc_unbox_integer(_iNumOfThreads);
  _oThreadLevelTasks = omc_HpcOmScheduler_convertFixedLevelScheduleToTaskLists(threadData, _iOdeSchedule, _iDaeSchedule, _iZeroFuncSchedule, tmp1);
  /* skip box _oThreadLevelTasks; array<tuple<list<list<HpcOmSimCode.Task>>, list<list<HpcOmSimCode.Task>>, list<list<HpcOmSimCode.Task>>>> */
  return _oThreadLevelTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_integer _iNumOfThreads)
{
  modelica_metatype _oLevelThreadLists = NULL;
  modelica_metatype _tasks = NULL;
  modelica_metatype _task = NULL;
  modelica_integer _threadIdx;
  modelica_metatype _tmpLevelThreadLists = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLevelThreadLists has no default value.
  // _tasks has no default value.
  // _task has no default value.
  // _threadIdx has no default value.
  // _tmpLevelThreadLists has no default value.
  _tasks = omc_HpcOmScheduler_getTasksOfTaskList(threadData, _iTasksOfLevel);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpLevelThreadLists = arrayCreate(_iNumOfThreads, tmpMeta1);

  {
    modelica_metatype _task;
    for (tmpMeta2 = listReverse(_tasks); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _task = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = _task;
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta3,2,3) == 0) MMC_THROW_INTERNAL();
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 4));
      if (optionNone(tmpMeta4)) MMC_THROW_INTERNAL();
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      _threadIdx = tmp6  /* pattern as ty=Integer */;

      tmpMeta7 = mmc_mk_cons(_task, arrayGet(_tmpLevelThreadLists, _threadIdx));
      _tmpLevelThreadLists = arrayUpdate(_tmpLevelThreadLists, _threadIdx, tmpMeta7);
    }
  }

  _oLevelThreadLists = _tmpLevelThreadLists;
  _return: OMC_LABEL_UNUSED
  return _oLevelThreadLists;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iNumOfThreads)
{
  modelica_integer tmp1;
  modelica_metatype _oLevelThreadLists = NULL;
  tmp1 = mmc_unbox_integer(_iNumOfThreads);
  _oLevelThreadLists = omc_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0(threadData, _iTasksOfLevel, tmp1);
  /* skip box _oLevelThreadLists; array<list<HpcOmSimCode.Task>> */
  return _oLevelThreadLists;
}

static modelica_metatype closure6_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0(threadData_t *thData, modelica_metatype closure, modelica_metatype iTasksOfLevel)
{
  modelica_metatype iNumOfThreads = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0(thData, iTasksOfLevel, iNumOfThreads);
}
DLLDirection
modelica_metatype omc_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists(threadData_t *threadData, modelica_metatype _iSchedule, modelica_integer _iNumOfThreads)
{
  modelica_metatype _oLevelThreadLists = NULL;
  modelica_metatype _tasksOfLevels = NULL;
  modelica_metatype _tmpLevelThreadLists = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLevelThreadLists has no default value.
  // _tasksOfLevels has no default value.
  // _tmpLevelThreadLists has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iSchedule;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (1 /* true */ != tmp8) goto tmp3_end;
          _tasksOfLevels = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box1(0, mmc_mk_integer(_iNumOfThreads));
          tmpMeta1 = omc_List_map(threadData, _tasksOfLevels, (modelica_fnptr) mmc_mk_box2(0,closure6_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists0,tmpMeta9));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          
          /* Pattern matching succeeded */
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta10;
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
  _oLevelThreadLists = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oLevelThreadLists;
}
modelica_metatype boxptr_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists(threadData_t *threadData, modelica_metatype _iSchedule, modelica_metatype _iNumOfThreads)
{
  modelica_integer tmp1;
  modelica_metatype _oLevelThreadLists = NULL;
  tmp1 = mmc_unbox_integer(_iNumOfThreads);
  _oLevelThreadLists = omc_HpcOmScheduler_convertFixedLevelScheduleToLevelThreadLists(threadData, _iSchedule, tmp1);
  /* skip box _oLevelThreadLists; list<array<list<HpcOmSimCode.Task>>> */
  return _oLevelThreadLists;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_isEmptyTask(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_boolean _isEmpty;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
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
  _isEmpty = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEmpty;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_isEmptyTask(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_HpcOmScheduler_isEmptyTask(threadData, _taskIn);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_isCalcTask(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_boolean _isCalc;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isCalc has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          
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
  _isCalc = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isCalc;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_isCalcTask(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_boolean _isCalc;
  modelica_metatype out_isCalc;
  _isCalc = omc_HpcOmScheduler_isCalcTask(threadData, _taskIn);
  out_isCalc = mmc_mk_icon(_isCalc);
  return out_isCalc;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_getTaskTypeString(threadData_t *threadData, modelica_metatype _iTask)
{
  modelica_string _oTypeString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTypeString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTask;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT11;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT12;
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT13;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT14;
          goto tmp3_done;
        }
        case 7: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT15;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT17;
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
  _oTypeString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oTypeString;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getTaskIdx(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_integer _idx;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _idx has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
    {
      modelica_integer _taskIdx;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _taskIdx has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _taskIdx = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = _taskIdx;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) -1);
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
  _idx = tmp1;
  _return: OMC_LABEL_UNUSED
  return _idx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getTaskIdx(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_integer _idx;
  modelica_metatype out_idx;
  _idx = omc_HpcOmScheduler_getTaskIdx(threadData, _taskIn);
  out_idx = mmc_mk_icon(_idx);
  return out_idx;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getThreadId(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_integer _threadId;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _threadId has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
    {
      modelica_integer _threadIdx;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _threadIdx has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _threadIdx = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = _threadIdx;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) -1);
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
  _threadId = tmp1;
  _return: OMC_LABEL_UNUSED
  return _threadId;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getThreadId(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_integer _threadId;
  modelica_metatype out_threadId;
  _threadId = omc_HpcOmScheduler_getThreadId(threadData, _taskIn);
  out_threadId = mmc_mk_icon(_threadId);
  return out_threadId;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getTimeFinished(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_real _finishingTime;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _finishingTime has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
    {
      modelica_real _fTime;
      int tmp4;
      // _fTime has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_real tmp6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp6 = mmc_unbox_real(tmpMeta5);
          
          _fTime = tmp6  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmp1 = _fTime;
          goto tmp3_done;
        }
        case 8: {
          
          /* Pattern matching succeeded */
          tmp1 = 0.0;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = -1.0;
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
  _finishingTime = tmp1;
  _return: OMC_LABEL_UNUSED
  return _finishingTime;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getTimeFinished(threadData_t *threadData, modelica_metatype _taskIn)
{
  modelica_real _finishingTime;
  modelica_metatype out_finishingTime;
  _finishingTime = omc_HpcOmScheduler_getTimeFinished(threadData, _taskIn);
  out_finishingTime = mmc_mk_rcon(_finishingTime);
  return out_finishingTime;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateTimeFinished(threadData_t *threadData, modelica_metatype _taskIn, modelica_real _timeFinishedIn)
{
  modelica_metatype _taskOut = NULL;
  modelica_integer _weighting;
  modelica_integer _index;
  modelica_real _calcTime;
  modelica_real _timeFinished;
  modelica_integer _threadIdx;
  modelica_metatype _eqIdc = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskOut has no default value.
  // _weighting has no default value.
  // _index has no default value.
  // _calcTime has no default value.
  // _timeFinished has no default value.
  // _threadIdx has no default value.
  // _eqIdc has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _taskIn;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,6) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmp11 = mmc_unbox_integer(tmpMeta10);
  tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  _weighting = tmp3  /* pattern as ty=Integer */;
  _index = tmp5  /* pattern as ty=Integer */;
  _calcTime = tmp7  /* pattern as ty=Real */;
  _timeFinished = tmp9  /* pattern as ty=Real */;
  _threadIdx = tmp11  /* pattern as ty=Integer */;
  _eqIdc = tmpMeta12;

  tmpMeta13 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_timeFinishedIn), mmc_mk_integer(_threadIdx), _eqIdc);
  _taskOut = tmpMeta13;
  _return: OMC_LABEL_UNUSED
  return _taskOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_updateTimeFinished(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _timeFinishedIn)
{
  modelica_real tmp1;
  modelica_metatype _taskOut = NULL;
  tmp1 = mmc_unbox_real(_timeFinishedIn);
  _taskOut = omc_HpcOmScheduler_updateTimeFinished(threadData, _taskIn, tmp1);
  /* skip box _taskOut; HpcOmSimCode.Task */
  return _taskOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getPredecessorCalcTask(threadData_t *threadData, modelica_metatype _threadIn, modelica_integer _indexIn)
{
  modelica_metatype _taskOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_boolean _isCalc;
      modelica_integer _index;
      modelica_metatype _preTask = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _isCalc has no default value.
      // _index has no default value.
      // _preTask has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_indexIn == ((modelica_integer) 1));
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta1 = _OMC_LIT18;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = (_indexIn >= ((modelica_integer) 2));
          if (1 /* true */ != tmp7) goto goto_2;

          _index = ((modelica_integer) -1) + _indexIn;

          _preTask = listGet(_threadIn, _index);

          _isCalc = omc_HpcOmScheduler_isCalcTask(threadData, _preTask);
          tmpMeta1 = ((!_isCalc)?omc_HpcOmScheduler_getPredecessorCalcTask(threadData, _threadIn, _index):_preTask);
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
  _taskOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _taskOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getPredecessorCalcTask(threadData_t *threadData, modelica_metatype _threadIn, modelica_metatype _indexIn)
{
  modelica_integer tmp1;
  modelica_metatype _taskOut = NULL;
  tmp1 = mmc_unbox_integer(_indexIn);
  _taskOut = omc_HpcOmScheduler_getPredecessorCalcTask(threadData, _threadIn, tmp1);
  /* skip box _taskOut; HpcOmSimCode.Task */
  return _taskOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeFinishingTimeForOneTask(threadData_t *threadData, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _tplIn;
    {
      modelica_metatype _threadTasks = NULL;
      modelica_metatype _threadTasksIn = NULL;
      modelica_metatype _checkedTasksIn = NULL;
      modelica_metatype _checkedTasks = NULL;
      modelica_integer _taskIdx;
      modelica_integer _taskIdxLatest;
      modelica_integer _taskNum;
      modelica_integer _threadIdx;
      modelica_integer _threadIdxLatest;
      modelica_real _commCost;
      modelica_real _finishingTime;
      modelica_real _finishingTime1;
      modelica_real _finishingTimeComm;
      modelica_real _exeCost;
      modelica_metatype _taskGraphMeta = NULL;
      modelica_metatype _task = NULL;
      modelica_metatype _latestTask = NULL;
      modelica_metatype _preTask = NULL;
      modelica_metatype _thread = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _threadTasks has no default value.
      // _threadTasksIn has no default value.
      // _checkedTasksIn has no default value.
      // _checkedTasks has no default value.
      // _taskIdx has no default value.
      // _taskIdxLatest has no default value.
      // _taskNum has no default value.
      // _threadIdx has no default value.
      // _threadIdxLatest has no default value.
      // _commCost has no default value.
      // _finishingTime has no default value.
      // _finishingTime1 has no default value.
      // _finishingTimeComm has no default value.
      // _exeCost has no default value.
      // _taskGraphMeta has no default value.
      // _task has no default value.
      // _latestTask has no default value.
      // _preTask has no default value.
      // _thread has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_boolean tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_real tmp17;
          modelica_metatype tmpMeta18;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _threadTasksIn = tmpMeta6;
          _checkedTasksIn = tmpMeta7;
          _taskNum = tmp9  /* pattern as ty=Integer */;
          _threadIdx = tmp11  /* pattern as ty=Integer */;
          _latestTask = tmpMeta12;
          _taskGraphMeta = tmpMeta13;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp14 = omc_HpcOmScheduler_isEmptyTask(threadData, _latestTask);
          if (1 /* true */ != tmp14) goto goto_2;

          _thread = arrayGet(_threadTasksIn, _threadIdx);

          _task = listGet(_thread, _taskNum);

          _threadIdx = omc_HpcOmScheduler_getThreadId(threadData, _task);

          _preTask = omc_HpcOmScheduler_getPredecessorCalcTask(threadData, _thread, _taskNum);

          _finishingTime = omc_HpcOmScheduler_getTimeFinished(threadData, _preTask);

          _taskIdx = omc_HpcOmScheduler_getTaskIdx(threadData, _task);

          /* Pattern-matching assignment */
          tmpMeta15 = omc_HpcOmTaskGraph_getExeCost(threadData, _taskIdx, _taskGraphMeta);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          tmp17 = mmc_unbox_real(tmpMeta16);
          _exeCost = tmp17  /* pattern as ty=Real */;

          _finishingTime = _finishingTime + _exeCost;

          _task = omc_HpcOmScheduler_updateTimeFinished(threadData, _task, _finishingTime);

          _thread = omc_List_replaceAt(threadData, _task, _taskNum, _thread);

          _threadTasks = arrayUpdate(_threadTasksIn, _threadIdx, _thread);

          _checkedTasks = arrayUpdate(_checkedTasksIn, _taskIdx, _task);
          tmpMeta18 = mmc_mk_box2(0, _threadTasks, _checkedTasks);
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_boolean tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_real tmp30;
          modelica_metatype tmpMeta31;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _threadTasksIn = tmpMeta19;
          _checkedTasksIn = tmpMeta20;
          _taskNum = tmp22  /* pattern as ty=Integer */;
          _threadIdx = tmp24  /* pattern as ty=Integer */;
          _latestTask = tmpMeta25;
          _taskGraphMeta = tmpMeta26;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp27 = omc_HpcOmScheduler_isEmptyTask(threadData, _latestTask);
          if (0 /* false */ != tmp27) goto goto_2;

          _finishingTime = omc_HpcOmScheduler_getTimeFinished(threadData, _latestTask);

          _threadIdxLatest = omc_HpcOmScheduler_getThreadId(threadData, _latestTask);

          _taskIdxLatest = omc_HpcOmScheduler_getTaskIdx(threadData, _latestTask);

          _thread = arrayGet(_threadTasksIn, _threadIdx);

          _task = listGet(_thread, _taskNum);

          _taskIdx = omc_HpcOmScheduler_getTaskIdx(threadData, _task);

          _commCost = omc_HpcOmTaskGraph_getCommCostTimeBetweenNodes(threadData, _taskIdxLatest, _taskIdx, _taskGraphMeta);

          /* Pattern-matching assignment */
          tmpMeta28 = omc_HpcOmTaskGraph_getExeCost(threadData, _taskIdx, _taskGraphMeta);
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
          tmp30 = mmc_unbox_real(tmpMeta29);
          _exeCost = tmp30  /* pattern as ty=Real */;

          _finishingTime = _finishingTime + _exeCost;

          _finishingTimeComm = _finishingTime + _commCost;

          _finishingTime = ((_threadIdxLatest == _threadIdx)?_finishingTime:_finishingTimeComm);

          _preTask = omc_HpcOmScheduler_getPredecessorCalcTask(threadData, _thread, _taskNum);

          _finishingTime1 = omc_HpcOmScheduler_getTimeFinished(threadData, _preTask);

          _finishingTime1 = _finishingTime1 + _exeCost;

          _finishingTime = fmax(_finishingTime,_finishingTime1);

          _task = omc_HpcOmScheduler_updateTimeFinished(threadData, _task, _finishingTime);

          _thread = omc_List_replaceAt(threadData, _task, _taskNum, _thread);

          _threadTasks = arrayUpdate(_threadTasksIn, _threadIdx, _thread);

          _checkedTasks = arrayUpdate(_checkedTasksIn, _taskIdx, _task);
          tmpMeta31 = mmc_mk_box2(0, _threadTasks, _checkedTasks);
          tmpMeta1 = tmpMeta31;
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
  _tplOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateFinishingTime1(threadData_t *threadData, modelica_integer _parentIdx, modelica_metatype _checkedTaskIn, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_boolean _isCalc;
  modelica_real _finishingTime;
  modelica_real _finishingTimeIn;
  modelica_metatype _parentLst = NULL;
  modelica_metatype _parentLstIn = NULL;
  modelica_metatype _task = NULL;
  modelica_metatype _taskIn = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_boolean tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  // _isCalc has no default value.
  // _finishingTime has no default value.
  // _finishingTimeIn has no default value.
  // _parentLst has no default value.
  // _parentLstIn has no default value.
  // _task has no default value.
  // _taskIn has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tplIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _parentLstIn = tmpMeta2;
  _taskIn = tmpMeta3;

  _finishingTimeIn = omc_HpcOmScheduler_getTimeFinished(threadData, _taskIn);

  _task = arrayGet(_checkedTaskIn, _parentIdx);

  _isCalc = omc_HpcOmScheduler_isCalcTask(threadData, _task);

  _finishingTime = (_isCalc?omc_HpcOmScheduler_getTimeFinished(threadData, _task):-1.0);

  _task = ((_finishingTime > _finishingTimeIn)?_task:_taskIn);

  tmp5 = (modelica_boolean)_isCalc;
  if(tmp5)
  {
    tmpMeta6 = _parentLstIn;
  }
  else
  {
    tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_parentIdx), _parentLstIn);
    tmpMeta6 = tmpMeta4;
  }
  _parentLst = tmpMeta6;

  tmpMeta7 = mmc_mk_box2(0, _parentLst, _task);
  _tplOut = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_updateFinishingTime1(threadData_t *threadData, modelica_metatype _parentIdx, modelica_metatype _checkedTaskIn, modelica_metatype _tplIn)
{
  modelica_integer tmp1;
  modelica_metatype _tplOut = NULL;
  tmp1 = mmc_unbox_integer(_parentIdx);
  _tplOut = omc_HpcOmScheduler_updateFinishingTime1(threadData, tmp1, _checkedTaskIn, _tplIn);
  /* skip box _tplOut; tuple<list<#Integer>, HpcOmSimCode.Task> */
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateFinishingTime(threadData_t *threadData, modelica_metatype _taskIn, modelica_integer _taskIdxIn, modelica_integer _threadIdxIn, modelica_metatype _threadTasksIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_checkedTasksOut, modelica_integer *out_taskIdxOut)
{
  modelica_metatype _threadTasksOut = NULL;
  modelica_metatype _checkedTasksOut = NULL;
  modelica_integer _taskIdxOut;
  modelica_integer tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _threadTasksOut has no default value.
  // _checkedTasksOut has no default value.
  // _taskIdxOut has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
    {
      modelica_boolean _isComputable;
      modelica_integer _taskID;
      modelica_integer _taskIdxNew;
      modelica_metatype _parentLst = NULL;
      modelica_metatype _latestTask = NULL;
      modelica_metatype _checkedTasks = NULL;
      modelica_metatype _threadTasks = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _isComputable has no default value.
      // _taskID has no default value.
      // _taskIdxNew has no default value.
      // _parentLst has no default value.
      // _latestTask has no default value.
      // _checkedTasks has no default value.
      // _threadTasks has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _taskID = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _parentLst = arrayGet(_taskGraphTIn, _taskID);

          /* Pattern-matching assignment */
          tmpMeta8 = omc_List_fold1(threadData, _parentLst, boxvar_HpcOmScheduler_updateFinishingTime1, _checkedTasksIn, _OMC_LIT19);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
          _parentLst = tmpMeta9;
          _latestTask = tmpMeta10;

          _isComputable = listEmpty(_parentLst);

          _taskIdxNew = (_isComputable?((modelica_integer) 1) + _taskIdxIn:_taskIdxIn);

          /* Pattern-matching assignment */
          tmp13 = (modelica_boolean)_isComputable;
          if(tmp13)
          {
            tmpMeta11 = mmc_mk_box6(0, _threadTasksIn, _checkedTasksIn, mmc_mk_integer(_taskIdxIn), mmc_mk_integer(_threadIdxIn), _latestTask, _taskGraphMetaIn);
            tmpMeta14 = omc_HpcOmScheduler_computeFinishingTimeForOneTask(threadData, tmpMeta11);
          }
          else
          {
            tmpMeta12 = mmc_mk_box2(0, _threadTasksIn, _checkedTasksIn);
            tmpMeta14 = tmpMeta12;
          }
          tmpMeta15 = tmpMeta14;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          _threadTasks = tmpMeta16;
          _checkedTasks = tmpMeta17;
          tmpMeta[0+0] = _threadTasks;
          tmpMeta[0+1] = _checkedTasks;
          tmp1_c2 = _taskIdxNew;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _taskIdxNew = ((modelica_integer) 1) + _taskIdxIn;
          tmpMeta[0+0] = _threadTasksIn;
          tmpMeta[0+1] = _checkedTasksIn;
          tmp1_c2 = _taskIdxNew;
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
  _threadTasksOut = tmpMeta[0+0];
  _checkedTasksOut = tmpMeta[0+1];
  _taskIdxOut = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_checkedTasksOut) { *out_checkedTasksOut = _checkedTasksOut; }
  if (out_taskIdxOut) { *out_taskIdxOut = _taskIdxOut; }
  return _threadTasksOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_updateFinishingTime(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _taskIdxIn, modelica_metatype _threadIdxIn, modelica_metatype _threadTasksIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_checkedTasksOut, modelica_metatype *out_taskIdxOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _taskIdxOut;
  modelica_metatype _threadTasksOut = NULL;
  tmp1 = mmc_unbox_integer(_taskIdxIn);
  tmp2 = mmc_unbox_integer(_threadIdxIn);
  _threadTasksOut = omc_HpcOmScheduler_updateFinishingTime(threadData, _taskIn, tmp1, tmp2, _threadTasksIn, _checkedTasksIn, _taskGraphTIn, _taskGraphMetaIn, out_checkedTasksOut, &_taskIdxOut);
  /* skip box _threadTasksOut; array<list<HpcOmSimCode.Task>> */
  /* skip box _checkedTasksOut; array<HpcOmSimCode.Task> */
  if (out_taskIdxOut) { *out_taskIdxOut = mmc_mk_icon(_taskIdxOut); }
  return _threadTasksOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getNextThreadIdx(threadData_t *threadData, modelica_integer _threadId, modelica_metatype _closedThreads, modelica_integer _numThreads)
{
  modelica_integer _nextThreadOut;
  modelica_boolean _isLastThread;
  modelica_boolean _isClosed;
  modelica_integer _nextThread;
  modelica_boolean tmp1;
  modelica_integer tmp2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _nextThreadOut has no default value.
  // _isLastThread has no default value.
  // _isClosed has no default value.
  // _nextThread has no default value.
  _isLastThread = (_threadId == _numThreads);

  _nextThread = (_isLastThread?((modelica_integer) 1):((modelica_integer) 1) + _threadId);

  _isClosed = omc_List_isMemberOnTrue(threadData, mmc_mk_integer(_nextThread), _closedThreads, boxvar_intEq);

  tmp1 = (modelica_boolean)_isClosed;
  if(tmp1)
  {
    /* Tail recursive call */
    _threadId = _nextThread;
    goto _tailrecursive;
    /* TODO: Make sure any eventual dead code below is never generated */
  }
  else
  {
    tmp2 = _nextThread;
  }
  _nextThreadOut = tmp2;
  _return: OMC_LABEL_UNUSED
  return _nextThreadOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getNextThreadIdx(threadData_t *threadData, modelica_metatype _threadId, modelica_metatype _closedThreads, modelica_metatype _numThreads)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _nextThreadOut;
  modelica_metatype out_nextThreadOut;
  tmp1 = mmc_unbox_integer(_threadId);
  tmp2 = mmc_unbox_integer(_numThreads);
  _nextThreadOut = omc_HpcOmScheduler_getNextThreadIdx(threadData, tmp1, _closedThreads, tmp2);
  out_nextThreadOut = mmc_mk_icon(_nextThreadOut);
  return out_nextThreadOut;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_computeTimeFinished1(threadData_t *threadData, modelica_metatype _threadTasksIn, modelica_metatype _taskIdcsIn, modelica_integer _threadIdxIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_integer _numProc, modelica_metatype _closedThreadsIn, modelica_metatype *out_closedThreadsOut)
{
  modelica_integer _threadIdxOut;
  modelica_metatype _closedThreadsOut = NULL;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _threadIdxOut has no default value.
  // _closedThreadsOut has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_integer _taskIdx;
      modelica_integer _nextThreadIdx;
      modelica_integer _nextTaskIdx;
      modelica_metatype _closedThreads1 = NULL;
      modelica_metatype _task = NULL;
      modelica_metatype _thread = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _taskIdx has no default value.
      // _nextThreadIdx has no default value.
      // _nextTaskIdx has no default value.
      // _closedThreads1 has no default value.
      // _task has no default value.
      // _thread has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_threadIdxIn <= arrayLength(_taskIdcsIn));
          if (1 /* true */ != tmp6) goto goto_2;

          _taskIdx = mmc_unbox_integer(arrayGet(_taskIdcsIn, _threadIdxIn));

          _thread = arrayGet(_threadTasksIn, _threadIdxIn);

          /* Pattern-matching assignment */
          tmp7 = (_taskIdx <= listLength(_thread));
          if (1 /* true */ != tmp7) goto goto_2;

          _task = listGet(_thread, _taskIdx);

          omc_HpcOmScheduler_updateFinishingTime(threadData, _task, _taskIdx, _threadIdxIn, _threadTasksIn, _checkedTasksIn, _taskGraphTIn, _taskGraphMetaIn ,NULL ,&_nextTaskIdx);

          arrayUpdate(_taskIdcsIn, _threadIdxIn, mmc_mk_integer(_nextTaskIdx));

          _nextThreadIdx = omc_HpcOmScheduler_getNextThreadIdx(threadData, _threadIdxIn, _closedThreadsIn, _numProc);
          tmp1_c0 = _nextThreadIdx;
          tmpMeta[0+1] = _closedThreadsIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (_threadIdxIn > arrayLength(_taskIdcsIn));
          if (1 /* true */ != tmp8) goto goto_2;

          _nextThreadIdx = ((_threadIdxIn >= _numProc)?((modelica_integer) 1):((modelica_integer) 1) + _threadIdxIn);
          tmp1_c0 = _nextThreadIdx;
          tmpMeta[0+1] = _closedThreadsIn;
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (_threadIdxIn <= arrayLength(_taskIdcsIn));
          if (1 /* true */ != tmp9) goto goto_2;

          _taskIdx = mmc_unbox_integer(arrayGet(_taskIdcsIn, _threadIdxIn));

          _thread = arrayGet(_threadTasksIn, _threadIdxIn);

          /* Pattern-matching assignment */
          tmp10 = (_taskIdx > listLength(_thread));
          if (1 /* true */ != tmp10) goto goto_2;

          _nextThreadIdx = ((_threadIdxIn >= _numProc)?((modelica_integer) 1):((modelica_integer) 1) + _threadIdxIn);

          tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_threadIdxIn), _closedThreadsIn);
          _closedThreads1 = tmpMeta11;

          _closedThreads1 = omc_List_unique(threadData, _closedThreads1);
          tmp1_c0 = _nextThreadIdx;
          tmpMeta[0+1] = _closedThreads1;
          goto tmp3_done;
        }
        case 3: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT20),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _threadIdxOut = tmp1_c0;
  _closedThreadsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_closedThreadsOut) { *out_closedThreadsOut = _closedThreadsOut; }
  return _threadIdxOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_computeTimeFinished1(threadData_t *threadData, modelica_metatype _threadTasksIn, modelica_metatype _taskIdcsIn, modelica_metatype _threadIdxIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype _numProc, modelica_metatype _closedThreadsIn, modelica_metatype *out_closedThreadsOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _threadIdxOut;
  modelica_metatype out_threadIdxOut;
  tmp1 = mmc_unbox_integer(_threadIdxIn);
  tmp2 = mmc_unbox_integer(_numProc);
  _threadIdxOut = omc_HpcOmScheduler_computeTimeFinished1(threadData, _threadTasksIn, _taskIdcsIn, tmp1, _checkedTasksIn, _taskGraphIn, _taskGraphTIn, _taskGraphMetaIn, tmp2, _closedThreadsIn, out_closedThreadsOut);
  out_threadIdxOut = mmc_mk_icon(_threadIdxOut);
  /* skip box _closedThreadsOut; list<#Integer> */
  return out_threadIdxOut;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_computeTimeFinished(threadData_t *threadData, modelica_metatype _threadTasksIn, modelica_metatype _taskIdcsIn, modelica_integer _threadIdxIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_integer _numProc, modelica_metatype _closedThreadsIn)
{
  modelica_integer _threadIdx;
  modelica_metatype _closedThreads = NULL;
  modelica_metatype _threadTasks = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _threadIdx = _threadIdxIn;
  _closedThreads = _closedThreadsIn;
  _threadTasks = _threadTasksIn;
  while(1)
  {
    if(!(!(listLength(_closedThreads) == _numProc))) break;
    _threadIdx = omc_HpcOmScheduler_computeTimeFinished1(threadData, _threadTasks, _taskIdcsIn, _threadIdx, _checkedTasksIn, _taskGraphIn, _taskGraphTIn, _taskGraphMetaIn, _numProc, _closedThreads ,&_closedThreads);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_computeTimeFinished(threadData_t *threadData, modelica_metatype _threadTasksIn, modelica_metatype _taskIdcsIn, modelica_metatype _threadIdxIn, modelica_metatype _checkedTasksIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype _numProc, modelica_metatype _closedThreadsIn)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_threadIdxIn);
  tmp2 = mmc_unbox_integer(_numProc);
  omc_HpcOmScheduler_computeTimeFinished(threadData, _threadTasksIn, _taskIdcsIn, tmp1, _checkedTasksIn, _taskGraphIn, _taskGraphTIn, _taskGraphMetaIn, tmp2, _closedThreadsIn);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getTimeFinishedOfLastTask(threadData_t *threadData, modelica_metatype _threadTasksIn)
{
  modelica_real _finTimeOut;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _finTimeOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _threadTasksIn;
    {
      modelica_metatype _lastTask = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lastTask has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          
          /* Pattern matching succeeded */
          _lastTask = omc_List_last(threadData, _threadTasksIn);
          tmp1 = omc_HpcOmScheduler_getTimeFinished(threadData, _lastTask);
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = -1.0;
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
  _finTimeOut = tmp1;
  _return: OMC_LABEL_UNUSED
  return _finTimeOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getTimeFinishedOfLastTask(threadData_t *threadData, modelica_metatype _threadTasksIn)
{
  modelica_real _finTimeOut;
  modelica_metatype out_finTimeOut;
  _finTimeOut = omc_HpcOmScheduler_getTimeFinishedOfLastTask(threadData, _threadTasksIn);
  out_finTimeOut = mmc_mk_rcon(_finTimeOut);
  return out_finTimeOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getFinishingTimesForSchedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_integer _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_real *out_finishingTime)
{
  modelica_metatype _scheduleOut = NULL;
  modelica_real _finishingTime;
  modelica_real tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scheduleOut has no default value.
  // _finishingTime has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _scheduleIn;
    {
      modelica_real _finTime;
      modelica_metatype _taskIdcs = NULL;
      modelica_metatype _finTimes = NULL;
      modelica_metatype _taskGraphT = NULL;
      modelica_metatype _checkedTasks = NULL;
      modelica_metatype _threadTasks = NULL;
      modelica_metatype _outgoingDepTasks = NULL;
      modelica_metatype _schedule = NULL;
      modelica_metatype _allCalcTasks = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _finTime has no default value.
      // _taskIdcs has no default value.
      // _finTimes has no default value.
      // _taskGraphT has no default value.
      // _checkedTasks has no default value.
      // _threadTasks has no default value.
      // _outgoingDepTasks has no default value.
      // _schedule has no default value.
      // _allCalcTasks has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _threadTasks = tmpMeta6;
          _outgoingDepTasks = tmpMeta7;
          _allCalcTasks = tmpMeta8;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _taskIdcs = arrayCreate(arrayLength(_threadTasks), mmc_mk_integer(((modelica_integer) 1)));

          _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _taskGraphIn, arrayLength(_taskGraphIn));

          _checkedTasks = arrayCreate(arrayLength(_taskGraphIn), _OMC_LIT18);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_HpcOmScheduler_computeTimeFinished(threadData, _threadTasks, _taskIdcs, ((modelica_integer) 1), _checkedTasks, _taskGraphIn, _taskGraphT, _taskGraphMetaIn, _numProc, tmpMeta9);

          _finTimes = omc_Array_map(threadData, _threadTasks, boxvar_HpcOmScheduler_getTimeFinishedOfLastTask);

          _finTime = mmc_unbox_real(omc_Array_fold(threadData, _finTimes, boxvar_realMax, _OMC_LIT21));

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, tmpMeta10, _allCalcTasks);
          _schedule = tmpMeta11;
          tmpMeta[0+0] = _schedule;
          tmp1_c1 = _finTime;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _schedule = _scheduleIn;

          _finTime = 0.0;
          tmpMeta[0+0] = _schedule;
          tmp1_c1 = _finTime;
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _schedule = _scheduleIn;

          _finTime = -1.0;
          tmpMeta[0+0] = _schedule;
          tmp1_c1 = _finTime;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT22),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _scheduleOut = tmpMeta[0+0];
  _finishingTime = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_finishingTime) { *out_finishingTime = _finishingTime; }
  return _scheduleOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getFinishingTimesForSchedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_metatype _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_finishingTime)
{
  modelica_integer tmp1;
  modelica_real _finishingTime;
  modelica_metatype _scheduleOut = NULL;
  tmp1 = mmc_unbox_integer(_numProc);
  _scheduleOut = omc_HpcOmScheduler_getFinishingTimesForSchedule(threadData, _scheduleIn, tmp1, _taskGraphIn, _taskGraphMetaIn, &_finishingTime);
  /* skip box _scheduleOut; HpcOmSimCode.Schedule */
  if (out_finishingTime) { *out_finishingTime = mmc_mk_rcon(_finishingTime); }
  return _scheduleOut;
}

DLLDirection
modelica_real omc_HpcOmScheduler_getSerialExecutionTime(threadData_t *threadData, modelica_metatype _taskGraphMetaIn)
{
  modelica_real _serialTimeOut;
  modelica_metatype _odeComps = NULL;
  modelica_metatype _exeCostsReal = NULL;
  modelica_metatype _exeCosts1 = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _exeCosts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _serialTimeOut has no default value.
  // _odeComps has no default value.
  // _exeCostsReal has no default value.
  // _exeCosts1 has no default value.
  // _inComps has no default value.
  // _exeCosts has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _taskGraphMetaIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 8));
  _inComps = tmpMeta2;
  _exeCosts = tmpMeta3;

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _odeComps = omc_Array_fold(threadData, _inComps, boxvar_listAppend, tmpMeta4);

  _exeCosts1 = omc_Array_map(threadData, _exeCosts, boxvar_Util_tuple22);

  _exeCostsReal = omc_List_map1(threadData, _odeComps, boxvar_Array_getIndexFirst, _exeCosts1);

  _serialTimeOut = mmc_unbox_real(omc_List_fold(threadData, _exeCostsReal, boxvar_realAdd, _OMC_LIT21));
  _return: OMC_LABEL_UNUSED
  return _serialTimeOut;
}
modelica_metatype boxptr_HpcOmScheduler_getSerialExecutionTime(threadData_t *threadData, modelica_metatype _taskGraphMetaIn)
{
  modelica_real _serialTimeOut;
  modelica_metatype out_serialTimeOut;
  _serialTimeOut = omc_HpcOmScheduler_getSerialExecutionTime(threadData, _taskGraphMetaIn);
  out_serialTimeOut = mmc_mk_rcon(_serialTimeOut);
  return out_serialTimeOut;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_printPredictedExeTimeInfo(threadData_t *threadData, modelica_real _serTime, modelica_real _parTime, modelica_real _speedUp, modelica_real _speedUpMax, modelica_integer _numProc)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_real tmp3_1;
    tmp3_1 = _speedUpMax;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (0.0 != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp5 = (_speedUpMax == -1.0);
          if (1 /* true */ != tmp5) goto goto_1;

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta6 = stringAppend(_OMC_LIT23,intString(_numProc));
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT24);
            tmpMeta8 = stringAppend(tmpMeta7,omc_System_snprintff(threadData, _OMC_LIT25, ((modelica_integer) 25), _speedUp));
            tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT26);
            fputs(MMC_STRINGDATA(tmpMeta9),stdout);
          }
          goto tmp2_done;
        }
        case 2: {
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
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            if((_speedUp > _speedUpMax))
            {
              tmpMeta10 = stringAppend(_OMC_LIT32,omc_System_snprintff(threadData, _OMC_LIT25, ((modelica_integer) 25), _speedUp));
              tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT33);
              tmpMeta12 = stringAppend(tmpMeta11,omc_System_snprintff(threadData, _OMC_LIT25, ((modelica_integer) 25), _speedUpMax));
              tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT6);
              fputs(MMC_STRINGDATA(tmpMeta13),stdout);
            }
            else
            {
              if((_speedUp <= _speedUpMax))
              {
                tmpMeta14 = stringAppend(_OMC_LIT23,intString(_numProc));
                tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT30);
                tmpMeta16 = stringAppend(tmpMeta15,omc_System_snprintff(threadData, _OMC_LIT25, ((modelica_integer) 25), _speedUp));
                tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT31);
                tmpMeta18 = stringAppend(tmpMeta17,omc_System_snprintff(threadData, _OMC_LIT25, ((modelica_integer) 25), _speedUpMax));
                tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT6);
                fputs(MMC_STRINGDATA(tmpMeta19),stdout);
              }
            }
          }
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
      if (++tmp3 < 3) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_printPredictedExeTimeInfo(threadData_t *threadData, modelica_metatype _serTime, modelica_metatype _parTime, modelica_metatype _speedUp, modelica_metatype _speedUpMax, modelica_metatype _numProc)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  tmp1 = mmc_unbox_real(_serTime);
  tmp2 = mmc_unbox_real(_parTime);
  tmp3 = mmc_unbox_real(_speedUp);
  tmp4 = mmc_unbox_real(_speedUpMax);
  tmp5 = mmc_unbox_integer(_numProc);
  omc_HpcOmScheduler_printPredictedExeTimeInfo(threadData, tmp1, tmp2, tmp3, tmp4, tmp5);
  return;
}

DLLDirection
modelica_real omc_HpcOmScheduler_predictExecutionTime(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_metatype _cpCostsOption, modelica_integer _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_real *out_parallelTimeOut, modelica_real *out_speedUpOut, modelica_real *out_speedUpMaxOut)
{
  modelica_real _serialTimeOut;
  modelica_real _parallelTimeOut;
  modelica_real _speedUpOut;
  modelica_real _speedUpMaxOut;
  modelica_real _parTime;
  modelica_real _serTime;
  modelica_real _speedUp;
  modelica_real _speedUpMax;
  modelica_real _helper;
  modelica_real tmp1;
  modelica_real tmp2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _serialTimeOut has no default value.
  // _parallelTimeOut has no default value.
  // _speedUpOut has no default value.
  // _speedUpMaxOut has no default value.
  _parTime = 0.0;
  _serTime = 0.0;
  _speedUp = 0.0;
  _speedUpMax = 0.0;
  _helper = 0.0;
  if((arrayLength(_taskGraphIn) != ((modelica_integer) 0)))
  {
    _serTime = omc_HpcOmScheduler_getSerialExecutionTime(threadData, _taskGraphMetaIn);

    omc_HpcOmScheduler_getFinishingTimesForSchedule(threadData, _scheduleIn, _numProc, _taskGraphIn, _taskGraphMetaIn ,&_parTime);

    tmp1 = _parTime;
    if (tmp1 == 0) {MMC_THROW_INTERNAL();}
    _speedUp = (_serTime) / tmp1;

    _helper = mmc_unbox_real(omc_Util_getOptionOrDefault(threadData, _cpCostsOption, mmc_mk_real((-_serTime))));

    tmp2 = _helper;
    if (tmp2 == 0) {MMC_THROW_INTERNAL();}
    _speedUpMax = (_serTime) / tmp2;
  }

  _serialTimeOut = _serTime;

  _parallelTimeOut = _parTime;

  _speedUpOut = _speedUp;

  _speedUpMaxOut = _speedUpMax;
  _return: OMC_LABEL_UNUSED
  if (out_parallelTimeOut) { *out_parallelTimeOut = _parallelTimeOut; }
  if (out_speedUpOut) { *out_speedUpOut = _speedUpOut; }
  if (out_speedUpMaxOut) { *out_speedUpMaxOut = _speedUpMaxOut; }
  return _serialTimeOut;
}
modelica_metatype boxptr_HpcOmScheduler_predictExecutionTime(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_metatype _cpCostsOption, modelica_metatype _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_parallelTimeOut, modelica_metatype *out_speedUpOut, modelica_metatype *out_speedUpMaxOut)
{
  modelica_integer tmp1;
  modelica_real _parallelTimeOut;
  modelica_real _speedUpOut;
  modelica_real _speedUpMaxOut;
  modelica_real _serialTimeOut;
  modelica_metatype out_serialTimeOut;
  tmp1 = mmc_unbox_integer(_numProc);
  _serialTimeOut = omc_HpcOmScheduler_predictExecutionTime(threadData, _scheduleIn, _cpCostsOption, tmp1, _taskGraphIn, _taskGraphMetaIn, &_parallelTimeOut, &_speedUpOut, &_speedUpMaxOut);
  out_serialTimeOut = mmc_mk_rcon(_serialTimeOut);
  if (out_parallelTimeOut) { *out_parallelTimeOut = mmc_mk_rcon(_parallelTimeOut); }
  if (out_speedUpOut) { *out_speedUpOut = mmc_mk_rcon(_speedUpOut); }
  if (out_speedUpMaxOut) { *out_speedUpMaxOut = mmc_mk_rcon(_speedUpMaxOut); }
  return out_serialTimeOut;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getLevelTaskCosts(threadData_t *threadData, modelica_metatype _levelTask, modelica_metatype _iMeta)
{
  modelica_real _costsOut;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _costsOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _levelTask;
    {
      modelica_metatype _nodeIdc = NULL;
      modelica_metatype _nodeCosts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _nodeIdc has no default value.
      // _nodeCosts has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _nodeIdc = tmpMeta6;
          /* Pattern matching succeeded */
          _nodeCosts = omc_List_map1(threadData, _nodeIdc, boxvar_HpcOmTaskGraph_getExeCostReqCycles, _iMeta);
          tmp1 = mmc_unbox_real(omc_List_fold(threadData, _nodeCosts, boxvar_realAdd, _OMC_LIT21));
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT34),stdout);
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
  _costsOut = tmp1;
  _return: OMC_LABEL_UNUSED
  return _costsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLevelTaskCosts(threadData_t *threadData, modelica_metatype _levelTask, modelica_metatype _iMeta)
{
  modelica_real _costsOut;
  modelica_metatype out_costsOut;
  _costsOut = omc_HpcOmScheduler_getLevelTaskCosts(threadData, _levelTask, _iMeta);
  out_costsOut = mmc_mk_rcon(_costsOut);
  return out_costsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLevelListTaskCosts(threadData_t *threadData, modelica_metatype _iTaskList, modelica_metatype _iMeta)
{
  modelica_metatype _costsOut = NULL;
  modelica_metatype _tasks = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _costsOut has no default value.
  // _tasks has no default value.
  _tasks = omc_HpcOmScheduler_getTasksOfTaskList(threadData, _iTaskList);

  _costsOut = omc_List_map1(threadData, _tasks, boxvar_HpcOmScheduler_getLevelTaskCosts, _iMeta);
  _return: OMC_LABEL_UNUSED
  return _costsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getTasksOfTaskList(threadData_t *threadData, modelica_metatype _iTaskList)
{
  modelica_metatype _oTasks = NULL;
  modelica_metatype _tasks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTasks has no default value.
  // _tasks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTaskList;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _tasks = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta1 = _tasks;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _tasks = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta1 = _tasks;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT35),stdout);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = tmpMeta7;
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
  _oTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLevelParallelTime1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraphMeta, modelica_metatype _iThreadWorkLoad)
{
  modelica_metatype _oThreadWorkLoad = NULL;
  modelica_real _minWorkLoad;
  modelica_real _taskCosts;
  modelica_integer _threadIdx;
  modelica_metatype _tmpThreadWorkLoad = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oThreadWorkLoad has no default value.
  // _minWorkLoad has no default value.
  // _taskCosts has no default value.
  // _threadIdx has no default value.
  // _tmpThreadWorkLoad has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta6)) goto tmp3_end;
          /* Pattern matching succeeded */
          _taskCosts = omc_HpcOmScheduler_getLevelTaskCosts(threadData, _iTask, _iTaskGraphMeta);

          _minWorkLoad = mmc_unbox_real(omc_Array_fold(threadData, _iThreadWorkLoad, boxvar_realMin, arrayGet(_iThreadWorkLoad, ((modelica_integer) 1))));

          _threadIdx = omc_List_position(threadData, mmc_mk_real(_minWorkLoad), arrayList(_iThreadWorkLoad));
          tmpMeta1 = arrayUpdate(_iThreadWorkLoad, _threadIdx, mmc_mk_real(_minWorkLoad + _taskCosts));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _threadIdx = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _taskCosts = omc_HpcOmScheduler_getLevelTaskCosts(threadData, _iTask, _iTaskGraphMeta);
          tmpMeta1 = arrayUpdate(_iThreadWorkLoad, _threadIdx, mmc_mk_real(mmc_unbox_real(arrayGet(_iThreadWorkLoad, _threadIdx)) + _taskCosts));
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
  _oThreadWorkLoad = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oThreadWorkLoad;
}

static modelica_metatype closure7_HpcOmScheduler_getLevelParallelTime1(threadData_t *thData, modelica_metatype closure, modelica_metatype iTask, modelica_metatype iThreadWorkLoad)
{
  modelica_metatype iTaskGraphMeta = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_HpcOmScheduler_getLevelParallelTime1(thData, iTask, iTaskGraphMeta, iThreadWorkLoad);
}
PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getLevelParallelTime(threadData_t *threadData, modelica_metatype _iLevelTaskList, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumProc)
{
  modelica_real _oLevelCost;
  modelica_metatype _workload = NULL;
  modelica_metatype _levelTasks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLevelCost has no default value.
  // _workload has no default value.
  // _levelTasks has no default value.
  _levelTasks = omc_HpcOmScheduler_getTasksOfTaskList(threadData, _iLevelTaskList);

  _workload = arrayCreate(_iNumProc, _OMC_LIT21);

  tmpMeta1 = mmc_mk_box1(0, _iTaskGraphMeta);
  _workload = omc_List_fold(threadData, _levelTasks, (modelica_fnptr) mmc_mk_box2(0,closure7_HpcOmScheduler_getLevelParallelTime1,tmpMeta1), _workload);

  _oLevelCost = mmc_unbox_real(omc_Array_fold(threadData, _workload, boxvar_realMax, _OMC_LIT21));
  _return: OMC_LABEL_UNUSED
  return _oLevelCost;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLevelParallelTime(threadData_t *threadData, modelica_metatype _iLevelTaskList, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumProc)
{
  modelica_integer tmp1;
  modelica_real _oLevelCost;
  modelica_metatype out_oLevelCost;
  tmp1 = mmc_unbox_integer(_iNumProc);
  _oLevelCost = omc_HpcOmScheduler_getLevelParallelTime(threadData, _iLevelTaskList, _iTaskGraph, _iTaskGraphMeta, tmp1);
  out_oLevelCost = mmc_mk_rcon(_oLevelCost);
  return out_oLevelCost;
}

static modelica_metatype closure8_iParallelSectionCalculator(threadData_t *thData, modelica_metatype closure, modelica_metatype iSectionTasks)
{
  modelica_metatype iTaskGraph = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iTaskGraphMeta = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iNumProc = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_fnptr _iParallelSectionCalculator = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  if (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iParallelSectionCalculator),2))) {
    return  ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iParallelSectionCalculator), 1)))) (thData, MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iParallelSectionCalculator),2)), iSectionTasks, iTaskGraph, iTaskGraphMeta, iNumProc);
  } else { /* No closure in the called variable */
    return  ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iParallelSectionCalculator), 1)))) (thData, iSectionTasks, iTaskGraph, iTaskGraphMeta, iNumProc);
  }
}
PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_analyseScheduledTaskGraphLevel(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_integer _iNumProc, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_fnptr _iParallelSectionCalculator)
{
  modelica_string _oCriticalPathInfo = NULL;
  modelica_integer _i;
  modelica_integer _costShare;
  modelica_metatype _levelCosts = NULL;
  modelica_metatype _criticalPaths = NULL;
  modelica_metatype _criticalPathsWoC = NULL;
  modelica_metatype _levelSectionCosts = NULL;
  modelica_real _cpCosts;
  modelica_real _cpCostsWoC;
  modelica_real _serTime;
  modelica_real _parTime;
  modelica_real _speedUp;
  modelica_real _speedUpMax;
  modelica_real _levelCost;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_real tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_real tmp8;
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
  modelica_integer tmp19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_real tmp28;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCriticalPathInfo has no default value.
  // _i has no default value.
  // _costShare has no default value.
  // _levelCosts has no default value.
  // _criticalPaths has no default value.
  // _criticalPathsWoC has no default value.
  // _levelSectionCosts has no default value.
  // _cpCosts has no default value.
  // _cpCostsWoC has no default value.
  // _serTime has no default value.
  // _parTime has no default value.
  // _speedUp has no default value.
  // _speedUpMax has no default value.
  // _levelCost has no default value.
  /* Pattern-matching tuple assignment */
  tmpMeta5 = omc_HpcOmTaskGraph_getCriticalPaths(threadData, _iTaskGraph, _iTaskGraphMeta, &tmpMeta1);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
  tmp8 = mmc_unbox_real(tmpMeta7);
  _criticalPaths = tmpMeta6;
  _cpCosts = tmp8  /* pattern as ty=Real */;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_real(tmpMeta3);
  _criticalPathsWoC = tmpMeta2;
  _cpCostsWoC = tmp4  /* pattern as ty=Real */;

  _levelSectionCosts = omc_List_map1(threadData, _iLevelTasks, boxvar_HpcOmScheduler_getLevelListTaskCosts, _iTaskGraphMeta);

  _serTime = omc_HpcOmScheduler_realSum(threadData, omc_List_map(threadData, _levelSectionCosts, boxvar_HpcOmScheduler_realSum));

  _serTime = omc_HpcOmTaskGraph_roundReal(threadData, _serTime, ((modelica_integer) 2));

  tmpMeta9 = mmc_mk_box4(0, _iTaskGraph, _iTaskGraphMeta, mmc_mk_integer(_iNumProc), _iParallelSectionCalculator);
  _levelCosts = omc_List_map(threadData, _iLevelTasks, (modelica_fnptr) mmc_mk_box2(0,closure8_iParallelSectionCalculator,tmpMeta9));

  _parTime = omc_HpcOmScheduler_realSum(threadData, _levelCosts);

  _parTime = omc_HpcOmTaskGraph_roundReal(threadData, _parTime, ((modelica_integer) 2));

  tmpMeta10 = mmc_mk_box2(0, _criticalPaths, mmc_mk_real(_cpCosts));
  tmpMeta11 = mmc_mk_box2(0, _criticalPathsWoC, mmc_mk_real(_cpCostsWoC));
  _oCriticalPathInfo = omc_HpcOmTaskGraph_dumpCriticalPathInfo(threadData, tmpMeta10, tmpMeta11);

  _cpCostsWoC = omc_HpcOmTaskGraph_roundReal(threadData, _cpCostsWoC, ((modelica_integer) 2));

  if(omc_Flags_isSet(threadData, _OMC_LIT29))
  {
    tmpMeta12 = stringAppend(_OMC_LIT36,realString(_serTime));
    tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT6);
    fputs(MMC_STRINGDATA(tmpMeta13),stdout);

    tmpMeta14 = stringAppend(_OMC_LIT37,realString(_parTime));
    tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT6);
    fputs(MMC_STRINGDATA(tmpMeta15),stdout);

    tmpMeta16 = stringAppend(_OMC_LIT38,realString(_cpCostsWoC));
    tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT6);
    fputs(MMC_STRINGDATA(tmpMeta17),stdout);

    _i = ((modelica_integer) 1);

    {
      modelica_metatype _levelCost;
      for (tmpMeta18 = _levelCosts; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
      {
        _levelCost = MMC_CAR(tmpMeta18);
        tmp19 = ((modelica_integer)floor(_parTime));
        if (tmp19 == 0) {MMC_THROW_INTERNAL();}
        _costShare = modelica_div_integer((((modelica_integer) 100)) * (((modelica_integer)floor(mmc_unbox_real(_levelCost)))),tmp19).quot;

        tmpMeta20 = stringAppend(_OMC_LIT39,intString(_i));
        tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT5);
        tmpMeta22 = stringAppend(tmpMeta21,realString(mmc_unbox_real(_levelCost)));
        tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT40);
        tmpMeta24 = stringAppend(tmpMeta23,omc_System_snprintff(threadData, _OMC_LIT41, ((modelica_integer) 5), ((modelica_real)_costShare)));
        tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT42);
        fputs(MMC_STRINGDATA(tmpMeta25),stdout);

        _i = ((modelica_integer) 1) + _i;
      }
    }
  }

  _speedUp = 0.0;

  _speedUpMax = 0.0;

  if((_parTime != 0.0))
  {
    tmp27 = _parTime;
    if (tmp27 == 0) {MMC_THROW_INTERNAL();}
    _speedUp = (_serTime) / tmp27;
  }

  if((_cpCostsWoC != 0.0))
  {
    tmp28 = _cpCostsWoC;
    if (tmp28 == 0) {MMC_THROW_INTERNAL();}
    _speedUpMax = (_serTime) / tmp28;
  }

  omc_HpcOmScheduler_printPredictedExeTimeInfo(threadData, _serTime, _parTime, _speedUp, _speedUpMax, _iNumProc);
  _return: OMC_LABEL_UNUSED
  return _oCriticalPathInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_analyseScheduledTaskGraphLevel(threadData_t *threadData, modelica_metatype _iLevelTasks, modelica_metatype _iNumProc, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_fnptr _iParallelSectionCalculator)
{
  modelica_integer tmp1;
  modelica_string _oCriticalPathInfo = NULL;
  tmp1 = mmc_unbox_integer(_iNumProc);
  _oCriticalPathInfo = omc_HpcOmScheduler_analyseScheduledTaskGraphLevel(threadData, _iLevelTasks, tmp1, _iTaskGraph, _iTaskGraphMeta, _iParallelSectionCalculator);
  /* skip box _oCriticalPathInfo; String */
  return _oCriticalPathInfo;
}

DLLDirection
modelica_string omc_HpcOmScheduler_analyseScheduledTaskGraph(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_integer _numProcIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_string _inSystemName)
{
  modelica_string _criticalPathInfoOut = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _criticalPathInfoOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _scheduleIn;
    {
      modelica_metatype _outgoingDepTasks = NULL;
      modelica_metatype _tasksOfLevels = NULL;
      modelica_metatype _criticalPaths = NULL;
      modelica_metatype _criticalPathsWoC = NULL;
      modelica_real _cpCosts;
      modelica_real _cpCostsWoC;
      modelica_real _serTime;
      modelica_real _parTime;
      modelica_real _speedUp;
      modelica_real _speedUpMax;
      modelica_string _criticalPathInfo = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _outgoingDepTasks has no default value.
      // _tasksOfLevels has no default value.
      // _criticalPaths has no default value.
      // _criticalPathsWoC has no default value.
      // _cpCosts has no default value.
      // _cpCostsWoC has no default value.
      // _serTime has no default value.
      // _parTime has no default value.
      // _speedUp has no default value.
      // _speedUpMax has no default value.
      // _criticalPathInfo has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_real tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta10 = omc_HpcOmTaskGraph_getCriticalPaths(threadData, _taskGraphIn, _taskGraphMetaIn, &tmpMeta6);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmp13 = mmc_unbox_real(tmpMeta12);
          _criticalPaths = tmpMeta11;
          _cpCosts = tmp13  /* pattern as ty=Real */;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp9 = mmc_unbox_real(tmpMeta8);
          _criticalPathsWoC = tmpMeta7;
          _cpCostsWoC = tmp9  /* pattern as ty=Real */;
          tmpMeta14 = mmc_mk_box2(0, _criticalPaths, mmc_mk_real(_cpCosts));
          tmpMeta15 = mmc_mk_box2(0, _criticalPathsWoC, mmc_mk_real(_cpCostsWoC));
          tmp1 = omc_HpcOmTaskGraph_dumpCriticalPathInfo(threadData, tmpMeta14, tmpMeta15);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          if (0 /* false */ != tmp18) goto tmp3_end;
          _tasksOfLevels = tmpMeta16;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_HpcOmScheduler_analyseScheduledTaskGraphLevel(threadData, _tasksOfLevels, _numProcIn, _taskGraphIn, _taskGraphMetaIn, boxvar_HpcOmScheduler_getLevelParallelTime);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          if (1 /* true */ != tmp21) goto tmp3_end;
          _tasksOfLevels = tmpMeta19;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_HpcOmScheduler_analyseScheduledTaskGraphLevel(threadData, _tasksOfLevels, _numProcIn, _taskGraphIn, _taskGraphMetaIn, boxvar_HpcOmScheduler_getLevelParallelTime);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_real tmp28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_real tmp32;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _outgoingDepTasks = tmpMeta22;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta23 = stringAppend(_OMC_LIT43,intString(listLength(_outgoingDepTasks)));
            tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT6);
            fputs(MMC_STRINGDATA(tmpMeta24),stdout);
          }

          /* Pattern-matching tuple assignment */
          tmpMeta29 = omc_HpcOmTaskGraph_getCriticalPaths(threadData, _taskGraphIn, _taskGraphMetaIn, &tmpMeta25);
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 1));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmp32 = mmc_unbox_real(tmpMeta31);
          _criticalPaths = tmpMeta30;
          _cpCosts = tmp32  /* pattern as ty=Real */;
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 1));
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          tmp28 = mmc_unbox_real(tmpMeta27);
          _criticalPathsWoC = tmpMeta26;
          _cpCostsWoC = tmp28  /* pattern as ty=Real */;

          tmpMeta33 = mmc_mk_box2(0, _criticalPaths, mmc_mk_real(_cpCosts));
          tmpMeta34 = mmc_mk_box2(0, _criticalPathsWoC, mmc_mk_real(_cpCostsWoC));
          _criticalPathInfo = omc_HpcOmTaskGraph_dumpCriticalPathInfo(threadData, tmpMeta33, tmpMeta34);

          _serTime = omc_HpcOmScheduler_predictExecutionTime(threadData, _scheduleIn, mmc_mk_some(mmc_mk_real(_cpCostsWoC)), _numProcIn, _taskGraphIn, _taskGraphMetaIn ,&_parTime ,&_speedUp ,&_speedUpMax);

          _serTime = omc_HpcOmTaskGraph_roundReal(threadData, _serTime, ((modelica_integer) 2));

          _parTime = omc_HpcOmTaskGraph_roundReal(threadData, _parTime, ((modelica_integer) 2));

          _cpCostsWoC = omc_HpcOmTaskGraph_roundReal(threadData, _cpCostsWoC, ((modelica_integer) 2));

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmpMeta35 = stringAppend(_OMC_LIT36,realString(_serTime));
            tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT6);
            fputs(MMC_STRINGDATA(tmpMeta36),stdout);

            tmpMeta37 = stringAppend(_OMC_LIT37,realString(_parTime));
            tmpMeta38 = stringAppend(tmpMeta37,_OMC_LIT6);
            fputs(MMC_STRINGDATA(tmpMeta38),stdout);

            tmpMeta39 = stringAppend(_OMC_LIT38,realString(_cpCostsWoC));
            tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT6);
            fputs(MMC_STRINGDATA(tmpMeta40),stdout);
          }

          if((_speedUpMax <= 2.0))
          {
            tmpMeta41 = stringAppend(_OMC_LIT44,_inSystemName);
            tmpMeta42 = stringAppend(tmpMeta41,_OMC_LIT45);
            fputs(MMC_STRINGDATA(tmpMeta42),stdout);
          }

          if((_serTime <= 2e4))
          {
            tmpMeta43 = stringAppend(_OMC_LIT7,_inSystemName);
            tmpMeta44 = stringAppend(tmpMeta43,_OMC_LIT46);
            fputs(MMC_STRINGDATA(tmpMeta44),stdout);
          }

          omc_HpcOmScheduler_printPredictedExeTimeInfo(threadData, _serTime, _parTime, _speedUp, _speedUpMax, _numProcIn);
          tmp1 = _criticalPathInfo;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_real tmp48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_real tmp52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta49 = omc_HpcOmTaskGraph_getCriticalPaths(threadData, _taskGraphIn, _taskGraphMetaIn, &tmpMeta45);
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta49), 1));
          tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta49), 2));
          tmp52 = mmc_unbox_real(tmpMeta51);
          _criticalPaths = tmpMeta50;
          _cpCosts = tmp52  /* pattern as ty=Real */;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 1));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 2));
          tmp48 = mmc_unbox_real(tmpMeta47);
          _criticalPathsWoC = tmpMeta46;
          _cpCostsWoC = tmp48  /* pattern as ty=Real */;
          tmpMeta53 = mmc_mk_box2(0, _criticalPaths, mmc_mk_real(_cpCosts));
          tmpMeta54 = mmc_mk_box2(0, _criticalPathsWoC, mmc_mk_real(_cpCostsWoC));
          tmp1 = omc_HpcOmTaskGraph_dumpCriticalPathInfo(threadData, tmpMeta53, tmpMeta54);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT47),stdout);
          tmp1 = _OMC_LIT47;
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
      if (++tmp4 < 6) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _criticalPathInfoOut = tmp1;
  _return: OMC_LABEL_UNUSED
  return _criticalPathInfoOut;
}
modelica_metatype boxptr_HpcOmScheduler_analyseScheduledTaskGraph(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_metatype _numProcIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype _inSystemName)
{
  modelica_integer tmp1;
  modelica_string _criticalPathInfoOut = NULL;
  tmp1 = mmc_unbox_integer(_numProcIn);
  _criticalPathInfoOut = omc_HpcOmScheduler_analyseScheduledTaskGraph(threadData, _scheduleIn, tmp1, _taskGraphIn, _taskGraphMetaIn, _inSystemName);
  /* skip box _criticalPathInfoOut; String */
  return _criticalPathInfoOut;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpSchedule(threadData_t *threadData, modelica_metatype _iSchedule)
{
  modelica_string _str = NULL;
  modelica_string _s = NULL;
  modelica_metatype _sLst = NULL;
  modelica_metatype _outgoingDepTasks = NULL;
  modelica_metatype _allTasks = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _tasksOfLevels = NULL;
  modelica_metatype _taskDepTasks = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _s has no default value.
  // _sLst has no default value.
  // _outgoingDepTasks has no default value.
  // _allTasks has no default value.
  // _threadTasks has no default value.
  // _tasksOfLevels has no default value.
  // _taskDepTasks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iSchedule;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _threadTasks = tmpMeta5;
          _outgoingDepTasks = tmpMeta6;
          /* Pattern matching succeeded */
          _sLst = omc_List_mapFold(threadData, arrayList(_threadTasks), boxvar_HpcOmScheduler_dumpThreadSchedule, mmc_mk_integer(((modelica_integer) 1)), NULL);

          _s = stringDelimitList(_sLst, _OMC_LIT6);

          tmpMeta7 = stringAppend(_s,_OMC_LIT48);
          tmpMeta8 = stringAppend(tmpMeta7,stringDelimitList(omc_List_map(threadData, _outgoingDepTasks, boxvar_HpcOmScheduler_dumpTask), _OMC_LIT49));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT50);
          _s = tmpMeta9;
          tmpMeta10 = stringAppend(_OMC_LIT51,_s);
          tmp1 = tmpMeta10;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _tasksOfLevels = tmpMeta11;
          /* Pattern matching succeeded */
          _sLst = omc_List_mapFold(threadData, _tasksOfLevels, boxvar_HpcOmScheduler_dumpLevelSchedule, mmc_mk_integer(((modelica_integer) 1)), NULL);

          _s = stringDelimitList(_sLst, _OMC_LIT6);
          tmpMeta12 = stringAppend(_OMC_LIT52,_s);
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _taskDepTasks = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta14 = stringAppend(stringDelimitList(omc_List_map(threadData, _taskDepTasks, boxvar_HpcOmScheduler_dumpTaskDepSchedule), _OMC_LIT6),_OMC_LIT6);
          _s = tmpMeta14;
          tmpMeta15 = stringAppend(_OMC_LIT53,_s);
          tmp1 = tmpMeta15;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta16,1,2) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          
          _allTasks = tmpMeta17;
          /* Pattern matching succeeded */
          _s = omc_HpcOmScheduler_dumpThreadSchedule(threadData, _allTasks, ((modelica_integer) 1), NULL);
          tmpMeta18 = stringAppend(_OMC_LIT54,_s);
          tmp1 = tmpMeta18;
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
void omc_HpcOmScheduler_printSchedule(threadData_t *threadData, modelica_metatype _iSchedule)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(MMC_STRINGDATA(omc_HpcOmScheduler_dumpSchedule(threadData, _iSchedule)),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_realSubr(threadData_t *threadData, modelica_real _r1, modelica_real _r2)
{
  modelica_real _r3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _r3 has no default value.
  _r3 = _r2 - _r1;
  _return: OMC_LABEL_UNUSED
  return _r3;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_realSubr(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _r3;
  modelica_metatype out_r3;
  tmp1 = mmc_unbox_real(_r1);
  tmp2 = mmc_unbox_real(_r2);
  _r3 = omc_HpcOmScheduler_realSubr(threadData, tmp1, tmp2);
  out_r3 = mmc_mk_rcon(_r3);
  return out_r3;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesTopDown2(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _alapIn, modelica_metatype _lastIn, modelica_metatype _lactIn, modelica_metatype _tdsLevelIn, modelica_metatype _visitedNodes)
{
  modelica_metatype _nodesOut = NULL;
  modelica_integer _nodeIdx;
  modelica_real _nodeExeCost;
  modelica_real _maxLevel;
  modelica_real _maxAlap;
  modelica_real _maxLast;
  modelica_metatype _rest = NULL;
  modelica_metatype _parentNodes = NULL;
  modelica_metatype _childNodes = NULL;
  modelica_metatype _childTDSLevels = NULL;
  modelica_metatype _childAlaps = NULL;
  modelica_metatype _childLasts = NULL;
  modelica_metatype _childLacts = NULL;
  modelica_metatype _commCostsToChilds = NULL;
  modelica_metatype _alap = NULL;
  modelica_metatype _last = NULL;
  modelica_metatype _lact = NULL;
  modelica_metatype _tdsLevel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _nodesOut has no default value.
  // _nodeIdx has no default value.
  // _nodeExeCost has no default value.
  // _maxLevel has no default value.
  // _maxAlap has no default value.
  // _maxLast has no default value.
  // _rest has no default value.
  // _parentNodes has no default value.
  // _childNodes has no default value.
  // _childTDSLevels has no default value.
  // _childAlaps has no default value.
  // _childLasts has no default value.
  // _childLacts has no default value.
  // _commCostsToChilds has no default value.
  // _alap has no default value.
  // _last has no default value.
  // _lact has no default value.
  // _tdsLevel has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _nodesIn;
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  tmp4 = mmc_unbox_integer(tmpMeta2);
  _nodeIdx = tmp4  /* pattern as ty=Integer */;
  _rest = tmpMeta3;

  _childNodes = arrayGet(_iTaskGraph, _nodeIdx);

  _nodeExeCost = omc_HpcOmTaskGraph_getExeCostReqCycles(threadData, _nodeIdx, _iTaskGraphMeta);

  arrayUpdate(_visitedNodes, _nodeIdx, mmc_mk_boolean(1 /* true */));

  if(listEmpty(_childNodes))
  {
    _alap = arrayUpdate(_alapIn, _nodeIdx, mmc_mk_real(_nodeExeCost));

    _last = arrayUpdate(_lastIn, _nodeIdx, mmc_mk_real(_nodeExeCost));

    _lact = arrayUpdate(_lactIn, _nodeIdx, _OMC_LIT21);

    _tdsLevel = arrayUpdate(_tdsLevelIn, _nodeIdx, mmc_mk_real(_nodeExeCost));

    _parentNodes = arrayGet(_iTaskGraphT, _nodeIdx);

    _nodesOut = listAppend(_rest, _parentNodes);
  }
  else
  {
    _childTDSLevels = omc_List_map1(threadData, _childNodes, boxvar_Array_getIndexFirst, _tdsLevelIn);

    if(omc_List_isMemberOnTrue(threadData, _OMC_LIT55, _childTDSLevels, boxvar_realEq))
    {
      tmpMeta5 = mmc_mk_cons(mmc_mk_integer(_nodeIdx), MMC_REFSTRUCTLIT(mmc_nil));
      _nodesOut = listAppend(_rest, tmpMeta5);

      arrayUpdate(_visitedNodes, _nodeIdx, mmc_mk_boolean(0 /* false */));
    }
    else
    {
      {
        modelica_metatype __omcQ_24tmpVar1;
        modelica_metatype* tmp7;
        modelica_metatype tmpMeta8;
        modelica_metatype __omcQ_24tmpVar0;
        modelica_integer tmp9;
        modelica_metatype _n_loopVar = 0;
        modelica_metatype _n;
        _n_loopVar = _childNodes;
        tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar1 = tmpMeta8; /* defaultValue */
        tmp7 = &__omcQ_24tmpVar1;
        while(1) {
          tmp9 = 1;
          if (!listEmpty(_n_loopVar)) {
            _n = MMC_CAR(_n_loopVar);
            _n_loopVar = MMC_CDR(_n_loopVar);
            tmp9--;
          }
          if (tmp9 == 0) {
            __omcQ_24tmpVar0 = mmc_mk_real(omc_HpcOmTaskGraph_getCommCostTimeBetweenNodes(threadData, _nodeIdx, mmc_unbox_integer(_n), _iTaskGraphMeta));
            *tmp7 = mmc_mk_cons(__omcQ_24tmpVar0,0);
            tmp7 = &MMC_CDR(*tmp7);
          } else if (tmp9 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp7 = mmc_mk_nil();
        tmpMeta6 = __omcQ_24tmpVar1;
      }
      _commCostsToChilds = tmpMeta6;

      _childAlaps = omc_List_map1(threadData, _childNodes, boxvar_Array_getIndexFirst, _alapIn);

      _childAlaps = omc_List_threadMap(threadData, _childAlaps, _commCostsToChilds, boxvar_realAdd);

      _childLasts = omc_List_map1(threadData, _childNodes, boxvar_Array_getIndexFirst, _lastIn);

      _childLacts = omc_List_map1(threadData, _childNodes, boxvar_Array_getIndexFirst, _lactIn);

      _maxLevel = mmc_unbox_real(omc_List_fold(threadData, _childTDSLevels, boxvar_realMax, _OMC_LIT21));

      _maxAlap = mmc_unbox_real(omc_List_fold(threadData, _childAlaps, boxvar_realMax, _OMC_LIT21));

      _maxLast = mmc_unbox_real(omc_List_fold(threadData, _childLasts, boxvar_realMax, _OMC_LIT21));

      _tdsLevel = arrayUpdate(_tdsLevelIn, _nodeIdx, mmc_mk_real(_nodeExeCost + _maxLevel));

      _alap = arrayUpdate(_alapIn, _nodeIdx, mmc_mk_real(_nodeExeCost + _maxAlap));

      _last = arrayUpdate(_lastIn, _nodeIdx, mmc_mk_real(_nodeExeCost + _maxLast));

      _lact = arrayUpdate(_lactIn, _nodeIdx, mmc_mk_real(_maxLast));

      _parentNodes = arrayGet(_iTaskGraphT, _nodeIdx);

      _nodesOut = listAppend(_rest, _parentNodes);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _nodesOut;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_computeGraphValuesTopDown1(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _alapIn, modelica_metatype _lastIn, modelica_metatype _lactIn, modelica_metatype _tdsLevelIn, modelica_metatype _visitedNodes)
{
  modelica_metatype _nodes = NULL;
  modelica_metatype _alap = NULL;
  modelica_metatype _last = NULL;
  modelica_metatype _lact = NULL;
  modelica_metatype _tdsLevel = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _nodes = _nodesIn;
  _alap = _alapIn;
  _last = _lastIn;
  _lact = _lactIn;
  _tdsLevel = _tdsLevelIn;
  while(1)
  {
    if(!(!listEmpty(_nodes))) break;
    if(mmc_unbox_boolean(arrayGet(_visitedNodes, mmc_unbox_integer(listHead(_nodes)))))
    {
      _nodes = listRest(_nodes);
    }
    else
    {
      _nodes = omc_HpcOmScheduler_computeGraphValuesTopDown2(threadData, _nodes, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _alap, _last, _lact, _tdsLevel, _visitedNodes);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesTopDown(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype *out_lastOut, modelica_metatype *out_lactOut, modelica_metatype *out_tdsLevelOut)
{
  modelica_metatype _alapOut = NULL;
  modelica_metatype _lastOut = NULL;
  modelica_metatype _lactOut = NULL;
  modelica_metatype _tdsLevelOut = NULL;
  modelica_integer _size;
  modelica_integer _lastNodeInCP;
  modelica_real _cp;
  modelica_real _cpWithComm;
  modelica_metatype _endNodes = NULL;
  modelica_metatype _alap = NULL;
  modelica_metatype _lact = NULL;
  modelica_metatype _last = NULL;
  modelica_metatype _tdsLevel = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _visitedNodes = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _alapOut has no default value.
  // _lastOut has no default value.
  // _lactOut has no default value.
  // _tdsLevelOut has no default value.
  // _size has no default value.
  // _lastNodeInCP has no default value.
  // _cp has no default value.
  // _cpWithComm has no default value.
  // _endNodes has no default value.
  // _alap has no default value.
  // _lact has no default value.
  // _last has no default value.
  // _tdsLevel has no default value.
  // _taskGraphT has no default value.
  // _visitedNodes has no default value.
  _size = arrayLength(_iTaskGraph);

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, _size);

  _endNodes = omc_HpcOmTaskGraph_getLeafNodes(threadData, _iTaskGraph);

  _alap = arrayCreate(_size, _OMC_LIT55);

  _last = arrayCreate(_size, _OMC_LIT55);

  _lact = arrayCreate(_size, _OMC_LIT55);

  _tdsLevel = arrayCreate(_size, _OMC_LIT55);

  _visitedNodes = arrayCreate(_size, mmc_mk_boolean(0 /* false */));

  omc_HpcOmScheduler_computeGraphValuesTopDown1(threadData, _endNodes, _iTaskGraph, _taskGraphT, _iTaskGraphMeta, _alap, _last, _lact, _tdsLevel, _visitedNodes);

  _cpWithComm = mmc_unbox_real(omc_Array_fold(threadData, _alap, boxvar_realMax, _OMC_LIT21));

  _lastNodeInCP = omc_Array_position(threadData, _alap, mmc_mk_real(_cpWithComm), _size);

  _cp = mmc_unbox_real(omc_Array_fold(threadData, _last, boxvar_realMax, _OMC_LIT21));

  _alapOut = omc_Array_map1(threadData, _alap, boxvar_HpcOmScheduler_realSubr, mmc_mk_real(_cpWithComm));

  _lactOut = omc_Array_map1(threadData, _lact, boxvar_HpcOmScheduler_realSubr, mmc_mk_real(_cp));

  _lastOut = omc_Array_map1(threadData, _last, boxvar_HpcOmScheduler_realSubr, mmc_mk_real(_cp));

  _tdsLevelOut = _tdsLevel;
  _return: OMC_LABEL_UNUSED
  if (out_lastOut) { *out_lastOut = _lastOut; }
  if (out_lactOut) { *out_lactOut = _lactOut; }
  if (out_tdsLevelOut) { *out_tdsLevelOut = _tdsLevelOut; }
  return _alapOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesBottomUp2(threadData_t *threadData, modelica_integer _node, modelica_metatype _graph, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _asapIn, modelica_metatype _estIn, modelica_metatype _ectIn, modelica_metatype *out_estOut, modelica_metatype *out_ectOut, modelica_metatype *out_children)
{
  modelica_metatype _asapOut = NULL;
  modelica_metatype _estOut = NULL;
  modelica_metatype _ectOut = NULL;
  modelica_metatype _children = NULL;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _asapOut has no default value.
  // _estOut has no default value.
  // _ectOut has no default value.
  // _children has no default value.
  
  
  
  
  { /* matchcontinue expression */
    {
      modelica_real _maxASAP;
      modelica_real _maxEct;
      modelica_real _exeCost;
      modelica_metatype _asap = NULL;
      modelica_metatype _ect = NULL;
      modelica_metatype _est = NULL;
      modelica_metatype _parents = NULL;
      modelica_metatype _parentEcts = NULL;
      modelica_metatype _parentAsaps = NULL;
      modelica_metatype _parentAsaps2 = NULL;
      modelica_metatype _parentsExeCosts = NULL;
      modelica_metatype _commCosts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _maxASAP has no default value.
      // _maxEct has no default value.
      // _exeCost has no default value.
      // _asap has no default value.
      // _ect has no default value.
      // _est has no default value.
      // _parents has no default value.
      // _parentEcts has no default value.
      // _parentAsaps has no default value.
      // _parentAsaps2 has no default value.
      // _parentsExeCosts has no default value.
      // _commCosts has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          _parents = arrayGet(_graphT, _node);

          _parentAsaps = omc_List_map1(threadData, _parents, boxvar_Array_getIndexFirst, _asapIn);

          /* Pattern-matching assignment */
          tmp6 = omc_List_isMemberOnTrue(threadData, _OMC_LIT55, _parentAsaps, boxvar_realEq);
          if (0 /* false */ != tmp6) goto goto_2;

          _exeCost = omc_HpcOmTaskGraph_getExeCostReqCycles(threadData, _node, _iTaskGraphMeta);

          _parentsExeCosts = omc_List_map1(threadData, _parents, boxvar_HpcOmTaskGraph_getExeCostReqCycles, _iTaskGraphMeta);

          _commCosts = omc_List_map2(threadData, _parents, boxvar_HpcOmTaskGraph_getCommCostTimeBetweenNodes, mmc_mk_integer(_node), _iTaskGraphMeta);

          _parentAsaps2 = omc_List_threadMap(threadData, _parentAsaps, _parentsExeCosts, boxvar_realAdd);

          _parentAsaps2 = omc_List_threadMap(threadData, _parentAsaps2, _commCosts, boxvar_realAdd);

          _maxASAP = mmc_unbox_real(omc_List_fold(threadData, _parentAsaps2, boxvar_realMax, _OMC_LIT21));

          _asap = arrayUpdate(_asapIn, _node, mmc_mk_real(_maxASAP));

          _parentEcts = omc_List_map1(threadData, _parents, boxvar_Array_getIndexFirst, _ectIn);

          _maxEct = mmc_unbox_real(omc_List_fold(threadData, _parentEcts, boxvar_realMax, _OMC_LIT21));

          _est = arrayUpdate(_estIn, _node, mmc_mk_real(_maxEct));

          _ect = arrayUpdate(_ectIn, _node, mmc_mk_real(_maxEct + _exeCost));

          _children = arrayGet(_graph, _node);
          tmpMeta[0+0] = _asap;
          tmpMeta[0+1] = _est;
          tmpMeta[0+2] = _ect;
          tmpMeta[0+3] = _children;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          /* Pattern matching succeeded */
          _parents = arrayGet(_graphT, _node);

          _parentAsaps = omc_List_map1(threadData, _parents, boxvar_Array_getIndexFirst, _asapIn);

          /* Pattern-matching assignment */
          tmp7 = omc_List_isMemberOnTrue(threadData, _OMC_LIT55, _parentAsaps, boxvar_realEq);
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta8 = mmc_mk_cons(mmc_mk_integer(_node), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = _asapIn;
          tmpMeta[0+1] = _estIn;
          tmpMeta[0+2] = _ectIn;
          tmpMeta[0+3] = tmpMeta8;
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT56),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _asapOut = tmpMeta[0+0];
  _estOut = tmpMeta[0+1];
  _ectOut = tmpMeta[0+2];
  _children = tmpMeta[0+3];
  _return: OMC_LABEL_UNUSED
  if (out_estOut) { *out_estOut = _estOut; }
  if (out_ectOut) { *out_ectOut = _ectOut; }
  if (out_children) { *out_children = _children; }
  return _asapOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_computeGraphValuesBottomUp2(threadData_t *threadData, modelica_metatype _node, modelica_metatype _graph, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _asapIn, modelica_metatype _estIn, modelica_metatype _ectIn, modelica_metatype *out_estOut, modelica_metatype *out_ectOut, modelica_metatype *out_children)
{
  modelica_integer tmp1;
  modelica_metatype _asapOut = NULL;
  tmp1 = mmc_unbox_integer(_node);
  _asapOut = omc_HpcOmScheduler_computeGraphValuesBottomUp2(threadData, tmp1, _graph, _graphT, _iTaskGraphMeta, _asapIn, _estIn, _ectIn, out_estOut, out_ectOut, out_children);
  /* skip box _asapOut; array<#Real> */
  /* skip box _estOut; array<#Real> */
  /* skip box _ectOut; array<#Real> */
  /* skip box _children; list<#Integer> */
  return _asapOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesBottomUp1(threadData_t *threadData, modelica_metatype _parentsIn, modelica_metatype _graph, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _asapIn, modelica_metatype _estIn, modelica_metatype _ectIn, modelica_metatype *out_estOut, modelica_metatype *out_ectOut)
{
  modelica_metatype _asapOut = NULL;
  modelica_metatype _estOut = NULL;
  modelica_metatype _ectOut = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _asapOut has no default value.
  // _estOut has no default value.
  // _ectOut has no default value.
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _parentsIn;
    tmp4_2 = _asapIn;
    tmp4_3 = _estIn;
    tmp4_4 = _ectIn;
    {
      modelica_integer _node;
      modelica_metatype _asap = NULL;
      modelica_metatype _ect = NULL;
      modelica_metatype _est = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _children = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _asap has no default value.
      // _ect has no default value.
      // _est has no default value.
      // _rest has no default value.
      // _children has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          
          _node = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          _asap = tmp4_2;
          _est = tmp4_3;
          _ect = tmp4_4;
          /* Pattern matching succeeded */
          _asap = omc_HpcOmScheduler_computeGraphValuesBottomUp2(threadData, _node, _graph, _graphT, _iTaskGraphMeta, _asap, _est, _ect ,&_est ,&_ect ,&_children);
          /* Tail recursive call */
          _parentsIn = listAppend(_rest, _children);
          _asapIn = _asap;
          _estIn = _est;
          _ectIn = _ect;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _asapIn;
          tmpMeta[0+1] = _estIn;
          tmpMeta[0+2] = _ectIn;
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
  _asapOut = tmpMeta[0+0];
  _estOut = tmpMeta[0+1];
  _ectOut = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_estOut) { *out_estOut = _estOut; }
  if (out_ectOut) { *out_ectOut = _ectOut; }
  return _asapOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeGraphValuesBottomUp(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype *out_estOut, modelica_metatype *out_ectOut)
{
  modelica_metatype _asapOut = NULL;
  modelica_metatype _estOut = NULL;
  modelica_metatype _ectOut = NULL;
  modelica_integer _size;
  modelica_metatype _rootNodes = NULL;
  modelica_metatype _asap = NULL;
  modelica_metatype _ect = NULL;
  modelica_metatype _est = NULL;
  modelica_metatype _taskGraphT = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _asapOut has no default value.
  // _estOut has no default value.
  // _ectOut has no default value.
  // _size has no default value.
  // _rootNodes has no default value.
  // _asap has no default value.
  // _ect has no default value.
  // _est has no default value.
  // _taskGraphT has no default value.
  _size = arrayLength(_iTaskGraph);

  _rootNodes = omc_HpcOmTaskGraph_getRootNodes(threadData, _iTaskGraph);

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, _size);

  _asap = arrayCreate(_size, _OMC_LIT55);

  _est = arrayCreate(_size, _OMC_LIT55);

  _ect = arrayCreate(_size, _OMC_LIT55);

  _asapOut = omc_HpcOmScheduler_computeGraphValuesBottomUp1(threadData, _rootNodes, _iTaskGraph, _taskGraphT, _iTaskGraphMeta, _asap, _est, _ect ,&_estOut ,&_ectOut);
  _return: OMC_LABEL_UNUSED
  if (out_estOut) { *out_estOut = _estOut; }
  if (out_ectOut) { *out_ectOut = _ectOut; }
  return _asapOut;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMedian3(threadData_t *threadData, modelica_real _r1, modelica_real _r2, modelica_real _r3, modelica_integer *out_which)
{
  modelica_real _rOut;
  modelica_integer _which;
  modelica_metatype _r = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _rOut has no default value.
  // _which has no default value.
  // _r has no default value.
  tmpMeta1 = mmc_mk_cons(mmc_mk_real(_r1), mmc_mk_cons(mmc_mk_real(_r2), mmc_mk_cons(mmc_mk_real(_r3), MMC_REFSTRUCTLIT(mmc_nil))));
  _r = omc_List_sort(threadData, tmpMeta1, boxvar_realGt);

  _rOut = mmc_unbox_real(listGet(_r, ((modelica_integer) 2)));

  tmpMeta2 = mmc_mk_cons(mmc_mk_real(_r1), mmc_mk_cons(mmc_mk_real(_r2), mmc_mk_cons(mmc_mk_real(_r3), MMC_REFSTRUCTLIT(mmc_nil))));
  _which = omc_List_position(threadData, mmc_mk_real(_rOut), tmpMeta2);
  _return: OMC_LABEL_UNUSED
  if (out_which) { *out_which = _which; }
  return _rOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMedian3(threadData_t *threadData, modelica_metatype _r1, modelica_metatype _r2, modelica_metatype _r3, modelica_metatype *out_which)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer _which;
  modelica_real _rOut;
  modelica_metatype out_rOut;
  tmp1 = mmc_unbox_real(_r1);
  tmp2 = mmc_unbox_real(_r2);
  tmp3 = mmc_unbox_real(_r3);
  _rOut = omc_HpcOmScheduler_getMedian3(threadData, tmp1, tmp2, tmp3, &_which);
  out_rOut = mmc_mk_rcon(_rOut);
  if (out_which) { *out_which = mmc_mk_icon(_which); }
  return out_rOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_swapEntriesInList(threadData_t *threadData, modelica_integer _idx1, modelica_integer _idx2, modelica_metatype _lstIn)
{
  modelica_metatype _lstOut = NULL;
  modelica_metatype _r1 = NULL;
  modelica_metatype _r2 = NULL;
  modelica_metatype _lstTmp = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lstOut has no default value.
  // _r1 has no default value.
  // _r2 has no default value.
  // _lstTmp has no default value.
  _r1 = listGet(_lstIn, _idx1);

  _r2 = listGet(_lstIn, _idx2);

  _lstTmp = omc_List_replaceAt(threadData, _r1, _idx2, _lstIn);

  _lstOut = omc_List_replaceAt(threadData, _r2, _idx1, _lstTmp);
  _return: OMC_LABEL_UNUSED
  return _lstOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_swapEntriesInList(threadData_t *threadData, modelica_metatype _idx1, modelica_metatype _idx2, modelica_metatype _lstIn)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _lstOut = NULL;
  tmp1 = mmc_unbox_integer(_idx1);
  tmp2 = mmc_unbox_integer(_idx2);
  _lstOut = omc_HpcOmScheduler_swapEntriesInList(threadData, tmp1, tmp2, _lstIn);
  /* skip box _lstOut; list<polymorphic<ElementType>> */
  return _lstOut;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMemberOnTrueWithIdx1(threadData_t *threadData, modelica_integer _inIdx, modelica_real _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_integer *out_outIdx, modelica_boolean *out_found)
{
  modelica_real _outElement;
  modelica_integer _outIdx;
  modelica_boolean _found;
  modelica_real tmp1_c0 __attribute__((unused)) = 0;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_boolean tmp1_c2 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  // _outIdx has no default value.
  // _found has no default value.
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inList;
    {
      modelica_real _e;
      modelica_metatype _rest = NULL;
      modelica_boolean _b;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _e has no default value.
      // _rest has no default value.
      // _b has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1_c0 = 0.0;
          tmp1_c1 = ((modelica_integer) 0);
          tmp1_c2 = 0 /* false */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_real tmp8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_real(tmpMeta6);
          _e = tmp8  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _b = mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 2))), mmc_mk_real(_inValue), mmc_mk_real(_e)) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inCompFunc), 1)))) (threadData, mmc_mk_real(_inValue), mmc_mk_real(_e)));

          /* Pattern-matching assignment */
          tmp9 = _b;
          if (1 /* true */ != tmp9) goto goto_2;
          tmp1_c0 = _e;
          tmp1_c1 = _inIdx;
          tmp1_c2 = _b;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          tmp1_c0 = omc_HpcOmScheduler_getMemberOnTrueWithIdx1(threadData, ((modelica_integer) 1) + _inIdx, _inValue, _rest, ((modelica_fnptr) _inCompFunc), &tmp1_c1, &tmp1_c2);
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
  _outElement = tmp1_c0;
  _outIdx = tmp1_c1;
  _found = tmp1_c2;
  _return: OMC_LABEL_UNUSED
  if (out_outIdx) { *out_outIdx = _outIdx; }
  if (out_found) { *out_found = _found; }
  return _outElement;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMemberOnTrueWithIdx1(threadData_t *threadData, modelica_metatype _inIdx, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_metatype *out_outIdx, modelica_metatype *out_found)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_integer _outIdx;
  modelica_boolean _found;
  modelica_real _outElement;
  modelica_metatype out_outElement;
  tmp1 = mmc_unbox_integer(_inIdx);
  tmp2 = mmc_unbox_real(_inValue);
  _outElement = omc_HpcOmScheduler_getMemberOnTrueWithIdx1(threadData, tmp1, tmp2, _inList, _inCompFunc, &_outIdx, &_found);
  out_outElement = mmc_mk_rcon(_outElement);
  if (out_outIdx) { *out_outIdx = mmc_mk_icon(_outIdx); }
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return out_outElement;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMemberOnTrueWithIdx(threadData_t *threadData, modelica_real _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_integer *out_outIdx, modelica_boolean *out_found)
{
  modelica_real _outElement;
  modelica_integer _outIdx;
  modelica_boolean _found;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outElement has no default value.
  // _outIdx has no default value.
  // _found has no default value.
  _outElement = omc_HpcOmScheduler_getMemberOnTrueWithIdx1(threadData, ((modelica_integer) 1), _inValue, _inList, ((modelica_fnptr) _inCompFunc) ,&_outIdx ,&_found);
  _return: OMC_LABEL_UNUSED
  if (out_outIdx) { *out_outIdx = _outIdx; }
  if (out_found) { *out_found = _found; }
  return _outElement;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMemberOnTrueWithIdx(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inList, modelica_fnptr _inCompFunc, modelica_metatype *out_outIdx, modelica_metatype *out_found)
{
  modelica_real tmp1;
  modelica_integer _outIdx;
  modelica_boolean _found;
  modelica_real _outElement;
  modelica_metatype out_outElement;
  tmp1 = mmc_unbox_real(_inValue);
  _outElement = omc_HpcOmScheduler_getMemberOnTrueWithIdx(threadData, tmp1, _inList, _inCompFunc, &_outIdx, &_found);
  out_outElement = mmc_mk_rcon(_outElement);
  if (out_outIdx) { *out_outIdx = mmc_mk_icon(_outIdx); }
  if (out_found) { *out_found = mmc_mk_icon(_found); }
  return out_outElement;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getNextPivot(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _markedLstIn, modelica_integer _pivotIdx, modelica_integer *out_newIdx)
{
  modelica_metatype _marked = NULL;
  modelica_integer _newIdx;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _marked has no default value.
  // _newIdx has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _markedLstIn;
    {
      modelica_integer _midIdx;
      modelica_real _pivotElement;
      modelica_real _r1;
      modelica_real _r2;
      modelica_real _r3;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _midIdx has no default value.
      // _pivotElement has no default value.
      // _r1 has no default value.
      // _r2 has no default value.
      // _r3 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta8;
          tmp1_c1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          /* Pattern matching succeeded */
          _pivotElement = mmc_unbox_real(listGet(_lstIn, _pivotIdx));

          _marked = omc_List_deleteMemberOnTrue(threadData, mmc_mk_real(_pivotElement), _markedLstIn, boxvar_realEq, NULL);

          _r1 = mmc_unbox_real(listHead(_marked));

          _r2 = mmc_unbox_real(omc_List_last(threadData, _marked));

          tmp11 = ((modelica_integer) 2);
          if (tmp11 == 0) {goto goto_2;}
          _midIdx = modelica_div_integer(listLength(_marked),tmp11).quot;

          _midIdx = ((_midIdx == ((modelica_integer) 0))?((modelica_integer) 1):_midIdx);

          _r3 = mmc_unbox_real(listGet(_marked, _midIdx));

          _pivotElement = omc_HpcOmScheduler_getMedian3(threadData, _r1, _r2, _r3, NULL);

          _newIdx = omc_List_position(threadData, mmc_mk_real(_pivotElement), _lstIn);
          tmpMeta[0+0] = _marked;
          tmp1_c1 = _newIdx;
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
  _marked = tmpMeta[0+0];
  _newIdx = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_newIdx) { *out_newIdx = _newIdx; }
  return _marked;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getNextPivot(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _markedLstIn, modelica_metatype _pivotIdx, modelica_metatype *out_newIdx)
{
  modelica_integer tmp1;
  modelica_integer _newIdx;
  modelica_metatype _marked = NULL;
  tmp1 = mmc_unbox_integer(_pivotIdx);
  _marked = omc_HpcOmScheduler_getNextPivot(threadData, _lstIn, _markedLstIn, tmp1, &_newIdx);
  /* skip box _marked; list<#Real> */
  if (out_newIdx) { *out_newIdx = mmc_mk_icon(_newIdx); }
  return _marked;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_quicksortWithOrder1(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _orderIn, modelica_integer _pivotIdx, modelica_metatype _markedIn, modelica_integer _size, modelica_metatype *out_orderOut)
{
  modelica_metatype _lstOut = NULL;
  modelica_metatype _orderOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lstOut has no default value.
  // _orderOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _lstIn;
    tmp4_2 = _markedIn;
    {
      modelica_boolean _b1;
      modelica_boolean _b2;
      modelica_integer _lIdx;
      modelica_integer _rIdx;
      modelica_integer _pivot;
      modelica_real _e;
      modelica_real _p;
      modelica_metatype _orderTmp = NULL;
      modelica_metatype _marked = NULL;
      modelica_metatype _lstTmp = NULL;
      modelica_metatype _leftLst = NULL;
      modelica_metatype _rightLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _b1 has no default value.
      // _b2 has no default value.
      // _lIdx has no default value.
      // _rIdx has no default value.
      // _pivot has no default value.
      // _e has no default value.
      // _p has no default value.
      // _orderTmp has no default value.
      // _marked has no default value.
      // _lstTmp has no default value.
      // _leftLst has no default value.
      // _rightLst has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_real tmp10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta8 = MMC_CAR(tmp4_1);
          tmpMeta9 = MMC_CDR(tmp4_1);
          tmp10 = mmc_unbox_real(tmpMeta8);
          if (!listEmpty(tmpMeta9)) goto tmp3_end;
          
          _e = tmp10  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(mmc_mk_real(_e), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = _OMC_LIT57;
          goto tmp3_done;
        }
        case 2: {
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _lstIn;
          tmpMeta[0+1] = _orderIn;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          _p = mmc_unbox_real(listGet(_lstIn, _pivotIdx));

          _leftLst = omc_List_split(threadData, _lstIn, _pivotIdx ,&_rightLst);

          _rightLst = listReverse(_rightLst);

          omc_HpcOmScheduler_getMemberOnTrueWithIdx(threadData, _p, _leftLst, boxvar_realLt ,&_lIdx ,&_b1);

          omc_HpcOmScheduler_getMemberOnTrueWithIdx(threadData, _p, _rightLst, boxvar_realGt ,&_rIdx ,&_b2);

          _rIdx = ((modelica_integer) 1) + _size - _rIdx;

          _lstTmp = (_b1?omc_HpcOmScheduler_swapEntriesInList(threadData, _pivotIdx, _lIdx, _lstIn):_lstIn);

          _lstTmp = (_b2?omc_HpcOmScheduler_swapEntriesInList(threadData, _pivotIdx, _rIdx, _lstTmp):_lstTmp);

          _orderTmp = (_b1?omc_HpcOmScheduler_swapEntriesInList(threadData, _pivotIdx, _lIdx, _orderIn):_orderIn);

          _orderTmp = (_b2?omc_HpcOmScheduler_swapEntriesInList(threadData, _pivotIdx, _rIdx, _orderTmp):_orderTmp);

          if(((!_b1) && (!_b2)))
          {
            _marked = omc_HpcOmScheduler_getNextPivot(threadData, _lstTmp, _markedIn, _pivotIdx ,&_pivot);
          }
          else
          {
            _marked = _markedIn;

            _pivot = _pivotIdx;
          }
          /* Tail recursive call */
          _lstIn = _lstTmp;
          _orderIn = _orderTmp;
          _pivotIdx = _pivot;
          _markedIn = _marked;
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
  _lstOut = tmpMeta[0+0];
  _orderOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_orderOut) { *out_orderOut = _orderOut; }
  return _lstOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_quicksortWithOrder1(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype _orderIn, modelica_metatype _pivotIdx, modelica_metatype _markedIn, modelica_metatype _size, modelica_metatype *out_orderOut)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _lstOut = NULL;
  tmp1 = mmc_unbox_integer(_pivotIdx);
  tmp2 = mmc_unbox_integer(_size);
  _lstOut = omc_HpcOmScheduler_quicksortWithOrder1(threadData, _lstIn, _orderIn, tmp1, _markedIn, tmp2, out_orderOut);
  /* skip box _lstOut; list<#Real> */
  /* skip box _orderOut; list<#Integer> */
  return _lstOut;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_quicksortWithOrder(threadData_t *threadData, modelica_metatype _lstIn, modelica_metatype *out_orderOut)
{
  modelica_metatype _lstOut = NULL;
  modelica_metatype _orderOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lstOut has no default value.
  // _orderOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _lstIn;
    {
      modelica_integer _length;
      modelica_integer _pivotIdx;
      modelica_real _r1;
      modelica_real _r2;
      modelica_real _r3;
      modelica_real _pivotValue;
      modelica_metatype _orderTmp = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _length has no default value.
      // _pivotIdx has no default value.
      // _r1 has no default value.
      // _r2 has no default value.
      // _r3 has no default value.
      // _pivotValue has no default value.
      // _orderTmp has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_integer tmp6;
          
          /* Pattern matching succeeded */
          _length = listLength(_lstIn);

          _orderTmp = omc_List_intRange(threadData, _length);

          _r1 = mmc_unbox_real(listHead(_lstIn));

          _r2 = mmc_unbox_real(omc_List_last(threadData, _lstIn));

          tmp6 = ((modelica_integer) 2);
          if (tmp6 == 0) {goto goto_2;}
          _r3 = mmc_unbox_real(listGet(_lstIn, modelica_div_integer(_length,tmp6).quot));

          _pivotValue = omc_HpcOmScheduler_getMedian3(threadData, _r1, _r2, _r3, NULL);

          _pivotIdx = omc_List_position(threadData, mmc_mk_real(_pivotValue), _lstIn);
          tmpMeta[0+0] = omc_HpcOmScheduler_quicksortWithOrder1(threadData, _lstIn, _orderTmp, _pivotIdx, _lstIn, _length, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_real tmp9;
          modelica_metatype tmpMeta10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_CAR(tmp4_1);
          tmpMeta8 = MMC_CDR(tmp4_1);
          tmp9 = mmc_unbox_real(tmpMeta7);
          if (!listEmpty(tmpMeta8)) goto tmp3_end;
          _r1 = tmp9  /* pattern as ty=Real */;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta10 = mmc_mk_cons(mmc_mk_real(_r1), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = tmpMeta10;
          tmpMeta[0+1] = _OMC_LIT57;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta11;
          tmpMeta[0+1] = tmpMeta12;
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
  _lstOut = tmpMeta[0+0];
  _orderOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_orderOut) { *out_orderOut = _orderOut; }
  return _lstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_listIndecesForValues(threadData_t *threadData, modelica_integer _idx, modelica_metatype _lstIn, modelica_metatype _arrayIn)
{
  modelica_metatype _arrayOut = NULL;
  modelica_integer _value;
  modelica_metatype _valueLst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _arrayOut has no default value.
  // _value has no default value.
  // _valueLst has no default value.
  _value = mmc_unbox_integer(listGet(_lstIn, _idx));

  _valueLst = arrayGet(_arrayIn, _value);

  tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_idx), _valueLst);
  _valueLst = tmpMeta1;

  _arrayOut = arrayUpdate(_arrayIn, _value, _valueLst);
  _return: OMC_LABEL_UNUSED
  return _arrayOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_listIndecesForValues(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _lstIn, modelica_metatype _arrayIn)
{
  modelica_integer tmp1;
  modelica_metatype _arrayOut = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _arrayOut = omc_HpcOmScheduler_listIndecesForValues(threadData, tmp1, _lstIn, _arrayIn);
  /* skip box _arrayOut; array<list<#Integer>> */
  return _arrayOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_mapListGet(threadData_t *threadData, modelica_metatype _mapLstIn, modelica_metatype _argLst)
{
  modelica_metatype _mapLstOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mapLstOut has no default value.
  _mapLstOut = omc_List_map1(threadData, _mapLstIn, boxvar_List_getIndexFirst, _argLst);
  _return: OMC_LABEL_UNUSED
  return _mapLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_lengthNotOne(threadData_t *threadData, modelica_metatype _lstIn)
{
  modelica_boolean _b;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  _b = (listLength(_lstIn) != ((modelica_integer) 1));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_lengthNotOne(threadData_t *threadData, modelica_metatype _lstIn)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_HpcOmScheduler_lengthNotOne(threadData, _lstIn);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_removeLatestTaskFromList(threadData_t *threadData, modelica_metatype _taskLstIn, modelica_metatype _taskOrderIn)
{
  modelica_metatype _taskLstOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskLstOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _taskLstIn;
    {
      modelica_metatype _posInOrder = NULL;
      modelica_integer _latestTask;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _posInOrder has no default value.
      // _latestTask has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _taskLstIn;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          _posInOrder = omc_List_map1(threadData, _taskLstIn, boxvar_List_position, _taskOrderIn);

          _posInOrder = omc_List_map1(threadData, _posInOrder, boxvar_intSub, mmc_mk_integer(((modelica_integer) 1)));

          _latestTask = mmc_unbox_integer(omc_List_fold(threadData, _posInOrder, boxvar_intMax, mmc_mk_integer(((modelica_integer) -1))));

          _latestTask = mmc_unbox_integer(listGet(_taskOrderIn, ((modelica_integer) 1) + _latestTask));
          tmpMeta1 = omc_List_removeOnTrue(threadData, mmc_mk_integer(_latestTask), boxvar_intEq, _taskLstIn);
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
  _taskLstOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _taskLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getSuperfluousLocks(threadData_t *threadData, modelica_metatype _otherParentsIn, modelica_integer _nodeIn, modelica_metatype _taskAssIn, modelica_metatype _orderIn, modelica_integer _numProc, modelica_metatype _iAllCalcTasks, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _removeLocksIn)
{
  modelica_metatype _removeLocksOut = NULL;
  modelica_metatype _parentsOnThreads = NULL;
  modelica_metatype _otherParentsProcs = NULL;
  modelica_metatype _lockCandidatesFlat = NULL;
  modelica_metatype _lockCandidates = NULL;
  modelica_metatype _removeLocks = NULL;
  modelica_metatype _taskLstAss = NULL;
  modelica_metatype _taskLstRel = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _removeLocksOut has no default value.
  // _parentsOnThreads has no default value.
  // _otherParentsProcs has no default value.
  // _lockCandidatesFlat has no default value.
  // _lockCandidates has no default value.
  // _removeLocks has no default value.
  // _taskLstAss has no default value.
  // _taskLstRel has no default value.
  _otherParentsProcs = omc_List_map1(threadData, _otherParentsIn, boxvar_Array_getIndexFirst, _taskAssIn);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _parentsOnThreads = arrayCreate(_numProc, tmpMeta1);

  _parentsOnThreads = omc_List_fold1(threadData, omc_List_intRange(threadData, listLength(_otherParentsProcs)), boxvar_HpcOmScheduler_listIndecesForValues, _otherParentsProcs, _parentsOnThreads);

  _parentsOnThreads = omc_Array_map1(threadData, _parentsOnThreads, boxvar_HpcOmScheduler_mapListGet, _otherParentsIn);

  _lockCandidates = omc_List_filterOnTrue(threadData, arrayList(_parentsOnThreads), boxvar_HpcOmScheduler_lengthNotOne);

  _lockCandidates = omc_List_map1(threadData, _lockCandidates, boxvar_HpcOmScheduler_removeLatestTaskFromList, _orderIn);

  _lockCandidatesFlat = omc_List_flatten(threadData, _lockCandidates);

  _taskLstAss = omc_List_map6(threadData, _lockCandidatesFlat, boxvar_HpcOmScheduler_createDepTaskByTaskIdc, mmc_mk_integer(_nodeIn), _iAllCalcTasks, mmc_mk_boolean(0 /* false */), _iCommCosts, _iCompTaskMapping, _iSimVarMapping);

  _taskLstRel = omc_List_map6(threadData, _lockCandidatesFlat, boxvar_HpcOmScheduler_createDepTaskByTaskIdc, mmc_mk_integer(_nodeIn), _iAllCalcTasks, mmc_mk_boolean(1 /* true */), _iCommCosts, _iCompTaskMapping, _iSimVarMapping);

  _removeLocks = listAppend(_removeLocksIn, _taskLstAss);

  _removeLocksOut = listAppend(_removeLocks, _taskLstRel);
  _return: OMC_LABEL_UNUSED
  return _removeLocksOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getSuperfluousLocks(threadData_t *threadData, modelica_metatype _otherParentsIn, modelica_metatype _nodeIn, modelica_metatype _taskAssIn, modelica_metatype _orderIn, modelica_metatype _numProc, modelica_metatype _iAllCalcTasks, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _removeLocksIn)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _removeLocksOut = NULL;
  tmp1 = mmc_unbox_integer(_nodeIn);
  tmp2 = mmc_unbox_integer(_numProc);
  _removeLocksOut = omc_HpcOmScheduler_getSuperfluousLocks(threadData, _otherParentsIn, tmp1, _taskAssIn, _orderIn, tmp2, _iAllCalcTasks, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, _removeLocksIn);
  /* skip box _removeLocksOut; list<HpcOmSimCode.Task> */
  return _removeLocksOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_removeLocksFromThread(threadData_t *threadData, modelica_metatype _threadIn, modelica_metatype _lockLst)
{
  modelica_metatype _threadOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _threadOut has no default value.
  omc_List_intersection1OnTrue(threadData, _threadIn, _lockLst, boxvar_HpcOmScheduler_tasksEqual ,&_threadOut ,NULL);
  _return: OMC_LABEL_UNUSED
  return _threadOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_removeLocksFromLockList(threadData_t *threadData, modelica_metatype _lockIdsIn, modelica_metatype _lockTasks)
{
  modelica_metatype _lockIdsOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lockIdsOut has no default value.
  omc_List_intersection1OnTrue(threadData, _lockIdsIn, _lockTasks, boxvar_HpcOmScheduler_tasksEqual ,&_lockIdsOut ,NULL);
  _return: OMC_LABEL_UNUSED
  return _lockIdsOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_tasksEqual(threadData_t *threadData, modelica_metatype _task1, modelica_metatype _task2)
{
  modelica_boolean _isEqOut;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEqOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _task1;
    tmp4_2 = _task2;
    {
      modelica_boolean _isEq;
      modelica_integer _id1;
      modelica_integer _id2;
      modelica_metatype _nodeIdc1 = NULL;
      modelica_metatype _nodeIdc2 = NULL;
      modelica_metatype _sourceTask1 = NULL;
      modelica_metatype _sourceTask2 = NULL;
      modelica_metatype _targetTask1 = NULL;
      modelica_metatype _targetTask2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _isEq has no default value.
      // _id1 has no default value.
      // _id2 has no default value.
      // _nodeIdc1 has no default value.
      // _nodeIdc2 has no default value.
      // _sourceTask1 has no default value.
      // _sourceTask2 has no default value.
      // _targetTask1 has no default value.
      // _targetTask2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,6) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _id1 = tmp7  /* pattern as ty=Integer */;
          _id2 = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = (_id1 == _id2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,3) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _nodeIdc1 = tmpMeta10;
          _nodeIdc2 = tmpMeta11;
          /* Pattern matching succeeded */
          tmp1 = omc_List_isEqual(threadData, _nodeIdc1, _nodeIdc2, 1 /* true */);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,3,5) == 0) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          
          _sourceTask1 = tmpMeta12;
          _targetTask1 = tmpMeta13;
          _sourceTask2 = tmpMeta14;
          _targetTask2 = tmpMeta15;
          /* Pattern matching succeeded */
          _isEq = omc_HpcOmScheduler_tasksEqual(threadData, _sourceTask1, _sourceTask2);
          tmp1 = (_isEq && omc_HpcOmScheduler_tasksEqual(threadData, _targetTask1, _targetTask2));
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,5,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        case 4: {
          
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
  _isEqOut = tmp1;
  _return: OMC_LABEL_UNUSED
  return _isEqOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_tasksEqual(threadData_t *threadData, modelica_metatype _task1, modelica_metatype _task2)
{
  modelica_boolean _isEqOut;
  modelica_metatype out_isEqOut;
  _isEqOut = omc_HpcOmScheduler_tasksEqual(threadData, _task1, _task2);
  out_isEqOut = mmc_mk_icon(_isEqOut);
  return out_isEqOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_setThreadIdxInTask(threadData_t *threadData, modelica_metatype _taskIn, modelica_integer _threadIdx)
{
  modelica_metatype _taskOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
    {
      modelica_integer _weighting;
      modelica_integer _index;
      modelica_real _calcTime;
      modelica_real _timeFinished;
      modelica_metatype _eqIdc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _weighting has no default value.
      // _index has no default value.
      // _calcTime has no default value.
      // _timeFinished has no default value.
      // _eqIdc has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_real tmp11;
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp11 = mmc_unbox_real(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp13 = mmc_unbox_real(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _weighting = tmp7  /* pattern as ty=Integer */;
          _index = tmp9  /* pattern as ty=Integer */;
          _calcTime = tmp11  /* pattern as ty=Real */;
          _timeFinished = tmp13  /* pattern as ty=Real */;
          _eqIdc = tmpMeta14;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_timeFinished), mmc_mk_integer(_threadIdx), _eqIdc);
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _taskIn;
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
  _taskOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _taskOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_setThreadIdxInTask(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _threadIdx)
{
  modelica_integer tmp1;
  modelica_metatype _taskOut = NULL;
  tmp1 = mmc_unbox_integer(_threadIdx);
  _taskOut = omc_HpcOmScheduler_setThreadIdxInTask(threadData, _taskIn, tmp1);
  /* skip box _taskOut; HpcOmSimCode.Task */
  return _taskOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_setSimEqIdcsInTask(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _SccSimEqMappingIn)
{
  modelica_metatype _taskOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
    {
      modelica_integer _weighting;
      modelica_integer _index;
      modelica_integer _threadIdx;
      modelica_real _calcTime;
      modelica_real _timeFinished;
      modelica_metatype _eqIdc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _weighting has no default value.
      // _index has no default value.
      // _threadIdx has no default value.
      // _calcTime has no default value.
      // _timeFinished has no default value.
      // _eqIdc has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_real tmp11;
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp11 = mmc_unbox_real(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp13 = mmc_unbox_real(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _weighting = tmp7  /* pattern as ty=Integer */;
          _index = tmp9  /* pattern as ty=Integer */;
          _calcTime = tmp11  /* pattern as ty=Real */;
          _timeFinished = tmp13  /* pattern as ty=Real */;
          _threadIdx = tmp15  /* pattern as ty=Integer */;
          _eqIdc = tmpMeta16;
          /* Pattern matching succeeded */
          _eqIdc = omc_List_flatten(threadData, omc_List_map1(threadData, _eqIdc, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _SccSimEqMappingIn));
          tmpMeta17 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_timeFinished), mmc_mk_integer(_threadIdx), _eqIdc);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _taskIn;
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
  _taskOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _taskOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createScheduleFromAssignments(threadData_t *threadData, modelica_metatype _taskAss, modelica_metatype _procAss, modelica_metatype _orderOpt, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphTIn, modelica_metatype _taskGraphMetaIn, modelica_metatype _SccSimEqMappingIn, modelica_metatype _removeLocksIn, modelica_metatype _orderIn, modelica_metatype _iSimVarMapping, modelica_metatype _scheduleIn, modelica_metatype *out_removeLocksOut)
{
  modelica_metatype _scheduleOut = NULL;
  modelica_metatype _removeLocksOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scheduleOut has no default value.
  // _removeLocksOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _orderOpt;
    tmp4_2 = _taskGraphMetaIn;
    tmp4_3 = _scheduleIn;
    {
      modelica_integer _node;
      modelica_integer _proc;
      modelica_integer _mark;
      modelica_integer _numProc;
      modelica_real _exeCost;
      modelica_metatype _order = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _components = NULL;
      modelica_metatype _simEqIdc = NULL;
      modelica_metatype _parentNodes = NULL;
      modelica_metatype _childNodes = NULL;
      modelica_metatype _sameProcTasks = NULL;
      modelica_metatype _otherParents = NULL;
      modelica_metatype _otherChildren = NULL;
      modelica_metatype _outgoingDepTasks = NULL;
      modelica_metatype _nodeMark = NULL;
      modelica_metatype _inComps = NULL;
      modelica_metatype _inCommCosts = NULL;
      modelica_metatype _threadTasks = NULL;
      modelica_metatype _taskLst1 = NULL;
      modelica_metatype _taskLst = NULL;
      modelica_metatype _taskLstAss = NULL;
      modelica_metatype _taskLstRel = NULL;
      modelica_metatype _removeLocks = NULL;
      modelica_metatype _schedule = NULL;
      modelica_metatype _task = NULL;
      modelica_metatype _allCalcTasks = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _proc has no default value.
      // _mark has no default value.
      // _numProc has no default value.
      // _exeCost has no default value.
      // _order has no default value.
      // _rest has no default value.
      // _components has no default value.
      // _simEqIdc has no default value.
      // _parentNodes has no default value.
      // _childNodes has no default value.
      // _sameProcTasks has no default value.
      // _otherParents has no default value.
      // _otherChildren has no default value.
      // _outgoingDepTasks has no default value.
      // _nodeMark has no default value.
      // _inComps has no default value.
      // _inCommCosts has no default value.
      // _threadTasks has no default value.
      // _taskLst1 has no default value.
      // _taskLst has no default value.
      // _taskLstAss has no default value.
      // _taskLstRel has no default value.
      // _removeLocks has no default value.
      // _schedule has no default value.
      // _task has no default value.
      // _allCalcTasks has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,1,4) == 0) goto tmp3_end;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (!listEmpty(tmpMeta6)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _scheduleIn;
          tmpMeta[0+1] = _removeLocksIn;
          goto tmp3_done;
        }
        case 1: {
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
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_real tmp20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,1,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 5));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 9));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 10));
          
          _order = tmpMeta7;
          _threadTasks = tmpMeta8;
          _outgoingDepTasks = tmpMeta9;
          _allCalcTasks = tmpMeta10;
          _inComps = tmpMeta11;
          _inCommCosts = tmpMeta12;
          _nodeMark = tmpMeta13;
          /* Pattern matching succeeded */
          _numProc = arrayLength(_procAss);

          /* Pattern-matching assignment */
          tmpMeta14 = _order;
          if (listEmpty(tmpMeta14)) goto goto_2;
          tmpMeta15 = MMC_CAR(tmpMeta14);
          tmpMeta16 = MMC_CDR(tmpMeta14);
          tmp17 = mmc_unbox_integer(tmpMeta15);
          _node = tmp17  /* pattern as ty=Integer */;
          _rest = tmpMeta16;

          _proc = mmc_unbox_integer(arrayGet(_taskAss, _node));

          _taskLst = arrayGet(_threadTasks, _proc);

          _parentNodes = arrayGet(_taskGraphTIn, _node);

          _childNodes = arrayGet(_taskGraphIn, _node);

          _sameProcTasks = arrayGet(_procAss, _proc);

          omc_List_intersection1OnTrue(threadData, _parentNodes, _sameProcTasks, boxvar_intEq ,&_otherParents ,NULL);

          omc_List_intersection1OnTrue(threadData, _childNodes, _sameProcTasks, boxvar_intEq ,&_otherChildren ,NULL);

          _removeLocks = omc_HpcOmScheduler_getSuperfluousLocks(threadData, _otherParents, _node, _taskAss, _orderIn, _numProc, _allCalcTasks, _inCommCosts, _inComps, _iSimVarMapping, _removeLocksIn);

          _taskLstAss = omc_List_map6(threadData, _otherParents, boxvar_HpcOmScheduler_createDepTaskByTaskIdc, mmc_mk_integer(_node), _allCalcTasks, mmc_mk_boolean(0 /* false */), _inCommCosts, _inComps, _iSimVarMapping);

          _taskLstRel = omc_List_map6(threadData, _otherChildren, boxvar_HpcOmScheduler_createDepTaskByTaskIdcR, mmc_mk_integer(_node), _allCalcTasks, mmc_mk_boolean(1 /* true */), _inCommCosts, _inComps, _iSimVarMapping);

          _components = arrayGet(_inComps, _node);

          _mark = mmc_unbox_integer(arrayGet(_nodeMark, _node));

          /* Pattern-matching assignment */
          tmpMeta18 = omc_HpcOmTaskGraph_getExeCost(threadData, _node, _taskGraphMetaIn);
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmp20 = mmc_unbox_real(tmpMeta19);
          _exeCost = tmp20  /* pattern as ty=Real */;

          _simEqIdc = omc_List_map(threadData, omc_List_map1(threadData, _components, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _SccSimEqMappingIn), boxvar_List_last);

          tmpMeta21 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_mark), mmc_mk_integer(_node), mmc_mk_real(_exeCost), _OMC_LIT55, mmc_mk_integer(_proc), _simEqIdc);
          _task = tmpMeta21;

          tmpMeta22 = mmc_mk_cons(_task, _taskLstRel);
          _taskLst1 = tmpMeta22;

          _taskLst1 = listAppend(_taskLstAss, _taskLst1);

          _taskLst1 = listAppend(_taskLst, _taskLst1);

          _threadTasks = arrayUpdate(_threadTasks, _proc, _taskLst1);

          _outgoingDepTasks = listAppend(_outgoingDepTasks, _taskLstAss);

          tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta24 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, tmpMeta23, _allCalcTasks);
          _schedule = tmpMeta24;
          /* Tail recursive call */
          _orderOpt = mmc_mk_some(_rest);
          _removeLocksIn = _removeLocks;
          _scheduleIn = _schedule;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,1,4) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT58),stdout);
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
  _scheduleOut = tmpMeta[0+0];
  _removeLocksOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_removeLocksOut) { *out_removeLocksOut = _removeLocksOut; }
  return _scheduleOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_traverseAndUpdateThreadsInSchedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_fnptr _funcIn, modelica_metatype _extraArg)
{
  modelica_metatype _scheduleOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scheduleOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _scheduleIn;
    {
      modelica_metatype _threadTasks = NULL;
      modelica_metatype _outgoingDepTasks = NULL;
      modelica_metatype _allCalcTasks = NULL;
      int tmp4;
      // _threadTasks has no default value.
      // _outgoingDepTasks has no default value.
      // _allCalcTasks has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _scheduleIn;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _threadTasks = tmpMeta5;
          _outgoingDepTasks = tmpMeta6;
          _allCalcTasks = tmpMeta7;
          /* Pattern matching succeeded */
          _threadTasks = omc_Array_map1(threadData, _threadTasks, ((modelica_fnptr) _funcIn), _extraArg);
          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta9 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, tmpMeta8, _allCalcTasks);
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _scheduleIn;
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
  _scheduleOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _scheduleOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateLockIdcsInThreadschedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_fnptr _inFunc, modelica_metatype _extraArg)
{
  modelica_metatype _scheduleOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scheduleOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _scheduleIn;
    {
      modelica_metatype _threadTasks = NULL;
      modelica_metatype _outgoingDepTasks = NULL;
      modelica_metatype _allCalcTasks = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _threadTasks has no default value.
      // _outgoingDepTasks has no default value.
      // _allCalcTasks has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _threadTasks = tmpMeta6;
          _outgoingDepTasks = tmpMeta7;
          _allCalcTasks = tmpMeta8;
          /* Pattern matching succeeded */
          _outgoingDepTasks = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _outgoingDepTasks, _extraArg) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _outgoingDepTasks, _extraArg);
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, tmpMeta9, _allCalcTasks);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT59),stdout);
          tmpMeta1 = _scheduleIn;
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
  _scheduleOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _scheduleOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_MCP__getTaskAssignment1(threadData_t *threadData, modelica_metatype _orderIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _processorTimeIn, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_procAssOut)
{
  modelica_metatype _taskAssOut = NULL;
  modelica_metatype _procAssOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskAssOut has no default value.
  // _procAssOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _orderIn;
    {
      modelica_integer _node;
      modelica_integer _processor;
      modelica_real _eft;
      modelica_real _exeCost;
      modelica_real _newTime;
      modelica_metatype _rest = NULL;
      modelica_metatype _taskLst = NULL;
      modelica_metatype _processorTime = NULL;
      modelica_metatype _taskAss = NULL;
      modelica_metatype _procAss = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _processor has no default value.
      // _eft has no default value.
      // _exeCost has no default value.
      // _newTime has no default value.
      // _rest has no default value.
      // _taskLst has no default value.
      // _processorTime has no default value.
      // _taskAss has no default value.
      // _procAss has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _taskAssIn;
          tmpMeta[0+1] = _procAssIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_real tmp12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _node = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _eft = mmc_unbox_real(omc_List_fold(threadData, _processorTimeIn, boxvar_realMin, listGet(_processorTimeIn, ((modelica_integer) 1))));

          _processor = omc_List_position(threadData, mmc_mk_real(_eft), _processorTimeIn);

          _taskAss = arrayUpdate(_taskAssIn, _node, mmc_mk_integer(_processor));

          _taskLst = arrayGet(_procAssIn, _processor);

          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_node), _taskLst);
          _taskLst = tmpMeta9;

          _procAss = arrayUpdate(_procAssIn, _processor, _taskLst);

          /* Pattern-matching assignment */
          tmpMeta10 = omc_HpcOmTaskGraph_getExeCost(threadData, _node, _taskGraphMetaIn);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          tmp12 = mmc_unbox_real(tmpMeta11);
          _exeCost = tmp12  /* pattern as ty=Real */;

          _newTime = _eft + _exeCost;

          _processorTime = omc_List_replaceAt(threadData, mmc_mk_real(_newTime), _processor, _processorTimeIn);
          tmpMeta[0+0] = omc_HpcOmScheduler_MCP__getTaskAssignment1(threadData, _rest, _taskAss, _procAss, _processorTime, _taskGraphIn, _taskGraphMetaIn, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT60),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _taskAssOut = tmpMeta[0+0];
  _procAssOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_procAssOut) { *out_procAssOut = _procAssOut; }
  return _taskAssOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_MCP__getTaskAssignment(threadData_t *threadData, modelica_metatype _orderIn, modelica_metatype _alapIn, modelica_integer _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_procAssOut)
{
  modelica_metatype _taskAssOut = NULL;
  modelica_metatype _procAssOut = NULL;
  modelica_metatype _processorTime = NULL;
  modelica_metatype _taskAss = NULL;
  modelica_metatype _procAss = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskAssOut has no default value.
  // _procAssOut has no default value.
  // _processorTime has no default value.
  // _taskAss has no default value.
  // _procAss has no default value.
  _processorTime = omc_List_fill(threadData, _OMC_LIT21, _numProc);

  _taskAss = arrayCreate(listLength(_orderIn), mmc_mk_integer(((modelica_integer) 0)));

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _procAss = arrayCreate(_numProc, tmpMeta1);

  _taskAssOut = omc_HpcOmScheduler_MCP__getTaskAssignment1(threadData, _orderIn, _taskAss, _procAss, _processorTime, _taskGraphIn, _taskGraphMetaIn ,&_procAssOut);
  _return: OMC_LABEL_UNUSED
  if (out_procAssOut) { *out_procAssOut = _procAssOut; }
  return _taskAssOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_MCP__getTaskAssignment(threadData_t *threadData, modelica_metatype _orderIn, modelica_metatype _alapIn, modelica_metatype _numProc, modelica_metatype _taskGraphIn, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_procAssOut)
{
  modelica_integer tmp1;
  modelica_metatype _taskAssOut = NULL;
  tmp1 = mmc_unbox_integer(_numProc);
  _taskAssOut = omc_HpcOmScheduler_MCP__getTaskAssignment(threadData, _orderIn, _alapIn, tmp1, _taskGraphIn, _taskGraphMetaIn, out_procAssOut);
  /* skip box _taskAssOut; array<#Integer> */
  /* skip box _procAssOut; array<list<#Integer>> */
  return _taskAssOut;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createMCPschedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_integer _size;
  modelica_integer _numSfLocks;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _alapArray = NULL;
  modelica_metatype _priorityLst = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype _taskAss = NULL;
  modelica_metatype _procAss = NULL;
  modelica_metatype _schedule = NULL;
  modelica_metatype _removeLocks = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _threadTask = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _size has no default value.
  // _numSfLocks has no default value.
  // _taskGraphT has no default value.
  // _alapArray has no default value.
  // _priorityLst has no default value.
  // _order has no default value.
  // _taskAss has no default value.
  // _procAss has no default value.
  // _schedule has no default value.
  // _removeLocks has no default value.
  // _commCosts has no default value.
  // _threadTask has no default value.
  // _allCalcTasks has no default value.
  // _inComps has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskGraphMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
  _inComps = tmpMeta2;
  _commCosts = tmpMeta3;

  _size = arrayLength(_iTaskGraph);

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, _size);

  _alapArray = omc_HpcOmScheduler_computeGraphValuesTopDown(threadData, _iTaskGraph, _iTaskGraphMeta, NULL, NULL, NULL);

  _priorityLst = omc_HpcOmScheduler_quicksortWithOrder(threadData, arrayList(_alapArray) ,&_order);

  _taskAss = omc_HpcOmScheduler_MCP__getTaskAssignment(threadData, _order, _alapArray, _numProc, _iTaskGraph, _iTaskGraphMeta ,&_procAss);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _threadTask = arrayCreate(_numProc, tmpMeta4);

  _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _taskGraphT, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTask);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTask, tmpMeta5, tmpMeta6, _allCalcTasks);
  _schedule = tmpMeta7;

  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _removeLocks = tmpMeta8;

  _schedule = omc_HpcOmScheduler_createScheduleFromAssignments(threadData, _taskAss, _procAss, mmc_mk_some(_order), _iTaskGraph, _taskGraphT, _iTaskGraphMeta, _iSccSimEqMapping, _removeLocks, _order, _iSimVarMapping, _schedule ,&_removeLocks);

  tmp9 = ((modelica_integer) 2);
  if (tmp9 == 0) {MMC_THROW_INTERNAL();}
  _numSfLocks = modelica_div_integer(listLength(_removeLocks),tmp9).quot;

  if(omc_Flags_isSet(threadData, _OMC_LIT29))
  {
    tmpMeta10 = stringAppend(_OMC_LIT61,intString(_numSfLocks));
    tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT6);
    fputs(MMC_STRINGDATA(tmpMeta11),stdout);
  }

  _schedule = omc_HpcOmScheduler_traverseAndUpdateThreadsInSchedule(threadData, _schedule, boxvar_HpcOmScheduler_removeLocksFromThread, _removeLocks);

  _schedule = omc_HpcOmScheduler_updateLockIdcsInThreadschedule(threadData, _schedule, boxvar_HpcOmScheduler_removeLocksFromLockList, _removeLocks);

  _oSchedule = omc_HpcOmScheduler_setScheduleLockIds(threadData, _schedule);
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createMCPschedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_numProc);
  _oSchedule = omc_HpcOmScheduler_createMCPschedule(threadData, _iTaskGraph, _iTaskGraphMeta, tmp1, _iSccSimEqMapping, _iSimVarMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createSingleThreadSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_integer _numProc)
{
  modelica_metatype _oSchedule = NULL;
  modelica_integer _nTasks;
  modelica_integer _size;
  modelica_metatype _order = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _allTasksLst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _thread2TaskAss = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _nTasks has no default value.
  // _size has no default value.
  // _order has no default value.
  // _taskGraphT has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _allTasksLst = tmpMeta1;
  // _thread2TaskAss has no default value.
  // _allCalcTasks has no default value.
  _nTasks = arrayLength(_iTaskGraph);

  _size = arrayLength(_iTaskGraph);

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, _size);

  _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _taskGraphT, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTask);

  _order = omc_List_flatten(threadData, omc_HpcOmTaskGraph_getLevelNodes(threadData, _iTaskGraph));

  {
    modelica_metatype _i;
    for (tmpMeta2 = _order; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _i = MMC_CAR(tmpMeta2);
      tmpMeta3 = mmc_mk_cons(omc_HpcOmScheduler_setSimEqIdcsInTask(threadData, omc_Util_tuple21(threadData, arrayGet(_allCalcTasks, mmc_unbox_integer(_i))), _iSccSimEqMapping), _allTasksLst);
      _allTasksLst = tmpMeta3;
    }
  }

  _allTasksLst = listReverse(_allTasksLst);

  _allTasksLst = omc_List_map1(threadData, _allTasksLst, boxvar_HpcOmScheduler_setThreadIdxInTask, mmc_mk_integer(((modelica_integer) 1)));

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _thread2TaskAss = arrayCreate(_numProc, tmpMeta5);

  _thread2TaskAss = arrayUpdate(_thread2TaskAss, ((modelica_integer) 1), _allTasksLst);

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _thread2TaskAss, tmpMeta6, tmpMeta7, _allCalcTasks);
  _oSchedule = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createSingleThreadSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _numProc)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_numProc);
  _oSchedule = omc_HpcOmScheduler_createSingleThreadSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping, tmp1);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_reassignPartitions(threadData_t *threadData, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_integer _value;
  modelica_integer _newAss;
  modelica_metatype _oldAss = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  // _value has no default value.
  // _newAss has no default value.
  // _oldAss has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tplIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 1));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  _value = tmp3  /* pattern as ty=Integer */;
  _oldAss = tmpMeta5;
  _newAss = tmp7  /* pattern as ty=Integer */;

  if(omc_List_exist1(threadData, _oldAss, boxvar_intEq, mmc_mk_integer(_value)))
  {
    _value = _newAss;
  }

  tmpMeta8 = mmc_mk_box2(0, _oldAss, mmc_mk_integer(_newAss));
  tmpMeta9 = mmc_mk_box2(0, mmc_mk_integer(_value), tmpMeta8);
  _tplOut = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_isUnAssigned(threadData_t *threadData, modelica_integer _task, modelica_metatype _ass)
{
  modelica_boolean _isUnass;
  modelica_integer _idx;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isUnass has no default value.
  // _idx has no default value.
  _idx = mmc_unbox_integer(arrayGet(_ass, _task));

  _isUnass = (_idx == ((modelica_integer) -1));
  _return: OMC_LABEL_UNUSED
  return _isUnass;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_isUnAssigned(threadData_t *threadData, modelica_metatype _task, modelica_metatype _ass)
{
  modelica_integer tmp1;
  modelica_boolean _isUnass;
  modelica_metatype out_isUnass;
  tmp1 = mmc_unbox_integer(_task);
  _isUnass = omc_HpcOmScheduler_isUnAssigned(threadData, tmp1, _ass);
  out_isUnass = mmc_mk_icon(_isUnass);
  return out_isUnass;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_assignPartitions(threadData_t *threadData, modelica_integer _rootNode, modelica_metatype _graph, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_integer _node;
  modelica_integer _idx;
  modelica_metatype _taskAss = NULL;
  modelica_metatype _partAss = NULL;
  modelica_metatype _nodes = NULL;
  modelica_metatype _successors = NULL;
  modelica_metatype _unassTasks = NULL;
  modelica_metatype _otherParts = NULL;
  modelica_metatype _otherPartsTasks = NULL;
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
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  // _node has no default value.
  // _idx has no default value.
  // _taskAss has no default value.
  // _partAss has no default value.
  // _nodes has no default value.
  // _successors has no default value.
  // _unassTasks has no default value.
  // _otherParts has no default value.
  // _otherPartsTasks has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tplIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  _taskAss = tmpMeta2;
  _partAss = tmpMeta3;
  _idx = tmp5  /* pattern as ty=Integer */;

  _taskAss = arrayUpdate(_taskAss, _rootNode, mmc_mk_integer(_idx));

  tmpMeta6 = mmc_mk_cons(mmc_mk_integer(_rootNode), MMC_REFSTRUCTLIT(mmc_nil));
  _partAss = omc_Array_appendToElement(threadData, _idx, tmpMeta6, _partAss);

  tmpMeta7 = mmc_mk_cons(mmc_mk_integer(_rootNode), MMC_REFSTRUCTLIT(mmc_nil));
  _nodes = tmpMeta7;

  while(1)
  {
    if(!(!listEmpty(_nodes))) break;
    /* Pattern-matching assignment */
    tmpMeta8 = _nodes;
    if (listEmpty(tmpMeta8)) MMC_THROW_INTERNAL();
    tmpMeta9 = MMC_CAR(tmpMeta8);
    tmpMeta10 = MMC_CDR(tmpMeta8);
    tmp11 = mmc_unbox_integer(tmpMeta9);
    _node = tmp11  /* pattern as ty=Integer */;
    _nodes = tmpMeta10;

    _successors = arrayGet(_graph, _node);

    _unassTasks = omc_List_split1OnTrue(threadData, _successors, boxvar_HpcOmScheduler_isUnAssigned, _taskAss ,&_otherPartsTasks);

    _otherParts = omc_List_map1(threadData, _otherPartsTasks, boxvar_Array_getIndexFirst, _taskAss);

    _otherParts = omc_List_filter1OnTrueSync(threadData, _otherParts, boxvar_intNe, mmc_mk_integer(_idx), _otherPartsTasks ,&_otherPartsTasks);

    _otherParts = omc_List_unique(threadData, _otherParts);

    if((!listEmpty(_otherParts)))
    {
      tmpMeta12 = mmc_mk_box2(0, _otherParts, mmc_mk_integer(_idx));
      _taskAss = omc_Array_mapNoCopy__1(threadData, _taskAss, boxvar_HpcOmScheduler_reassignPartitions, tmpMeta12, NULL);

      tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
      _otherPartsTasks = omc_List_fold(threadData, omc_List_map1(threadData, _otherParts, boxvar_Array_getIndexFirst, _partAss), boxvar_listAppend, tmpMeta13);

      tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
      omc_List_map2__0(threadData, _otherParts, boxvar_Array_updateIndexFirst, tmpMeta14, _partAss);

      _partAss = omc_Array_appendToElement(threadData, _idx, _otherPartsTasks, _partAss);
    }

    omc_List_map2__0(threadData, _unassTasks, boxvar_Array_updateIndexFirst, mmc_mk_integer(_idx), _taskAss);

    _partAss = omc_Array_appendToElement(threadData, _idx, _unassTasks, _partAss);

    _nodes = listAppend(_unassTasks, _nodes);
  }

  tmpMeta15 = mmc_mk_box3(0, _taskAss, _partAss, mmc_mk_integer(((modelica_integer) 1) + _idx));
  _tplOut = tmpMeta15;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_assignPartitions(threadData_t *threadData, modelica_metatype _rootNode, modelica_metatype _graph, modelica_metatype _tplIn)
{
  modelica_integer tmp1;
  modelica_metatype _tplOut = NULL;
  tmp1 = mmc_unbox_integer(_rootNode);
  _tplOut = omc_HpcOmScheduler_assignPartitions(threadData, tmp1, _graph, _tplIn);
  /* skip box _tplOut; tuple<array<#Integer>, array<list<#Integer>>, #Integer> */
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_distributePartitions(threadData_t *threadData, modelica_metatype _taskMapIn, modelica_metatype _partMap, modelica_metatype _metaIn, modelica_integer _n, modelica_metatype *out_partitions)
{
  modelica_metatype _taskMapOut = NULL;
  modelica_metatype _partitions = NULL;
  modelica_integer _partIdx;
  modelica_real _costs;
  modelica_metatype _part = NULL;
  modelica_metatype _clusters = NULL;
  modelica_metatype _partCosts = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskMapOut has no default value.
  // _partitions has no default value.
  // _partIdx has no default value.
  // _costs has no default value.
  // _part has no default value.
  // _clusters has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _partCosts = tmpMeta1;
  {
    modelica_metatype _part;
    for (tmpMeta2 = _partMap, tmp6 = arrayLength(tmpMeta2), tmp5 = 1; tmp5 <= tmp6; tmp5++)
    {
      _part = arrayGet(tmpMeta2,tmp5);
      _costs = mmc_unbox_real(omc_List_fold(threadData, omc_List_map1(threadData, _part, boxvar_HpcOmTaskGraph_getExeCostReqCycles, _metaIn), boxvar_realAdd, _OMC_LIT21));

      tmpMeta3 = mmc_mk_cons(mmc_mk_real(_costs), _partCosts);
      _partCosts = tmpMeta3;
    }
  }

  _partCosts = listReverse(_partCosts);

  _partitions = omc_HpcOmTaskGraph_distributeToClusters(threadData, omc_List_intRange(threadData, arrayLength(_partMap)), _partCosts, _n, NULL);

  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = _n;
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _partIdx;
    for(_partIdx = ((modelica_integer) 1); in_range_integer(_partIdx, tmp8, tmp10); _partIdx += tmp9)
    {
      _part = arrayGet(_partitions, _partIdx);

      _clusters = omc_List_map1(threadData, _part, boxvar_Array_getIndexFirst, _partMap);

      tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
      _part = omc_List_fold(threadData, _clusters, boxvar_listAppend, tmpMeta7);

      _partitions = arrayUpdate(_partitions, _partIdx, _part);

      omc_List_map2__0(threadData, _part, boxvar_Array_updateIndexFirst, mmc_mk_integer(_partIdx), _taskMapIn);
    }
  }

  _taskMapOut = _taskMapIn;
  _return: OMC_LABEL_UNUSED
  if (out_partitions) { *out_partitions = _partitions; }
  return _taskMapOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_distributePartitions(threadData_t *threadData, modelica_metatype _taskMapIn, modelica_metatype _partMap, modelica_metatype _metaIn, modelica_metatype _n, modelica_metatype *out_partitions)
{
  modelica_integer tmp1;
  modelica_metatype _taskMapOut = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _taskMapOut = omc_HpcOmScheduler_distributePartitions(threadData, _taskMapIn, _partMap, _metaIn, tmp1, out_partitions);
  /* skip box _taskMapOut; array<#Integer> */
  /* skip box _partitions; array<list<#Integer>> */
  return _taskMapOut;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createPartSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iTaskGraphMeta;
    {
      modelica_integer _nTasks;
      modelica_metatype _rootNodes = NULL;
      modelica_metatype _taskMap = NULL;
      modelica_metatype _partitions = NULL;
      modelica_metatype _partMap = NULL;
      modelica_metatype _graphT = NULL;
      modelica_metatype _threadTask = NULL;
      modelica_metatype _allCalcTasks = NULL;
      modelica_metatype _schedule = NULL;
      modelica_metatype _order = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _nTasks has no default value.
      // _rootNodes has no default value.
      // _taskMap has no default value.
      // _partitions has no default value.
      // _partMap has no default value.
      // _graphT has no default value.
      // _threadTask has no default value.
      // _allCalcTasks has no default value.
      // _schedule has no default value.
      // _order has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
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
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (arrayLength(_iTaskGraph) != ((modelica_integer) 0));
          if (1 /* true */ != tmp6) goto goto_2;

          _nTasks = arrayLength(_iTaskGraph);

          _rootNodes = omc_HpcOmTaskGraph_getRootNodes(threadData, _iTaskGraph);

          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          _partitions = arrayCreate(_numProc, tmpMeta7);

          _taskMap = arrayCreate(_nTasks, mmc_mk_integer(((modelica_integer) -1)));

          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _partMap = arrayCreate(listLength(_rootNodes), tmpMeta8);

          arrayCreate(_numProc, _OMC_LIT21);

          _graphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, arrayLength(_iTaskGraph));

          /* Pattern-matching assignment */
          tmpMeta9 = mmc_mk_box3(0, _taskMap, _partMap, mmc_mk_integer(((modelica_integer) 1)));
          tmpMeta10 = omc_List_fold1(threadData, _rootNodes, boxvar_HpcOmScheduler_assignPartitions, _iTaskGraph, tmpMeta9);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 1));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 2));
          _taskMap = tmpMeta11;
          _partMap = tmpMeta12;

          _taskMap = omc_HpcOmScheduler_distributePartitions(threadData, _taskMap, _partMap, _iTaskGraphMeta, _numProc ,&_partitions);

          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _threadTask = arrayCreate(_numProc, tmpMeta13);

          _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _graphT, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTask);

          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTask, tmpMeta14, tmpMeta15, _allCalcTasks);
          _schedule = tmpMeta16;

          _order = omc_List_flatten(threadData, omc_HpcOmTaskGraph_getLevelNodes(threadData, _iTaskGraph));

          if(omc_List_isEqual(threadData, arrayGet(_partitions, ((modelica_integer) 1)), _OMC_LIT66, 1 /* true */))
          {
            _order = listReverse(_order);
          }
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_HpcOmScheduler_createScheduleFromAssignments(threadData, _taskMap, _partitions, mmc_mk_some(_order), _iTaskGraph, _graphT, _iTaskGraphMeta, _iSccSimEqMapping, tmpMeta17, _order, _iSimVarMapping, _schedule, NULL);
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp18;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp18 = (arrayLength(_iTaskGraph) == ((modelica_integer) 0));
          if (1 /* true */ != tmp18) goto goto_2;
          tmpMeta1 = _OMC_LIT68;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          if(omc_Flags_isSet(threadData, _OMC_LIT72))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT69),stdout);
          }
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oSchedule = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createPartSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_numProc);
  _oSchedule = omc_HpcOmScheduler_createPartSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, tmp1, _iSccSimEqMapping, _iSimVarMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeFavouritePred1(threadData_t *threadData, modelica_integer _nodeIdx, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _ect, modelica_metatype _fpredIn)
{
  modelica_metatype _fpredOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fpredOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_integer _fpredPos;
      modelica_integer _fpred;
      modelica_real _maxCost;
      modelica_metatype _parents = NULL;
      modelica_metatype _parentECTs = NULL;
      modelica_metatype _commCosts = NULL;
      modelica_metatype _costs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _fpredPos has no default value.
      // _fpred has no default value.
      // _maxCost has no default value.
      // _parents has no default value.
      // _parentECTs has no default value.
      // _commCosts has no default value.
      // _costs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          _parents = arrayGet(_graphT, _nodeIdx);

          /* Pattern-matching assignment */
          tmp6 = listEmpty(_parents);
          if (0 /* false */ != tmp6) goto goto_2;

          _parentECTs = omc_List_map1(threadData, _parents, boxvar_Array_getIndexFirst, _ect);

          _commCosts = omc_List_map2(threadData, _parents, boxvar_HpcOmTaskGraph_getCommCostTimeBetweenNodes, mmc_mk_integer(_nodeIdx), _iTaskGraphMeta);

          _costs = omc_List_threadMap(threadData, _parentECTs, _commCosts, boxvar_realAdd);

          _maxCost = mmc_unbox_real(omc_List_fold(threadData, _costs, boxvar_realMax, _OMC_LIT21));

          _fpredPos = omc_List_position(threadData, mmc_mk_real(_maxCost), _costs);

          _fpred = mmc_unbox_integer(listGet(_parents, _fpredPos));
          tmpMeta1 = arrayUpdate(_fpredIn, _nodeIdx, mmc_mk_integer(_fpred));
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          /* Pattern matching succeeded */
          _parents = arrayGet(_graphT, _nodeIdx);

          /* Pattern-matching assignment */
          tmp7 = listEmpty(_parents);
          if (1 /* true */ != tmp7) goto goto_2;
          tmpMeta1 = arrayUpdate(_fpredIn, _nodeIdx, mmc_mk_integer(((modelica_integer) 0)));
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
  _fpredOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _fpredOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_computeFavouritePred1(threadData_t *threadData, modelica_metatype _nodeIdx, modelica_metatype _graphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _ect, modelica_metatype _fpredIn)
{
  modelica_integer tmp1;
  modelica_metatype _fpredOut = NULL;
  tmp1 = mmc_unbox_integer(_nodeIdx);
  _fpredOut = omc_HpcOmScheduler_computeFavouritePred1(threadData, tmp1, _graphT, _iTaskGraphMeta, _ect, _fpredIn);
  /* skip box _fpredOut; array<#Integer> */
  return _fpredOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_computeFavouritePred(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _ect)
{
  modelica_metatype _fpredOut = NULL;
  modelica_integer _size;
  modelica_metatype _fpred = NULL;
  modelica_metatype _taskGraphT = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _fpredOut has no default value.
  // _size has no default value.
  // _fpred has no default value.
  // _taskGraphT has no default value.
  _size = arrayLength(_iTaskGraph);

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, _size);

  _fpred = arrayCreate(_size, mmc_mk_integer(((modelica_integer) -1)));

  _fpredOut = omc_List_fold3(threadData, omc_List_intRange(threadData, _size), boxvar_HpcOmScheduler_computeFavouritePred1, _taskGraphT, _iTaskGraphMeta, _ect, _fpred);
  _return: OMC_LABEL_UNUSED
  return _fpredOut;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_TDSpredIsCritical(threadData_t *threadData, modelica_integer _node, modelica_integer _pred, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn)
{
  modelica_boolean _isCritical;
  modelica_real _lastNode;
  modelica_real _lactPred;
  modelica_real _commCosts;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isCritical has no default value.
  // _lastNode has no default value.
  // _lactPred has no default value.
  // _commCosts has no default value.
  _lastNode = mmc_unbox_real(arrayGet(_lastArrayIn, _node));

  _lactPred = mmc_unbox_real(arrayGet(_lactArrayIn, _pred));

  _commCosts = omc_HpcOmTaskGraph_getCommCostTimeBetweenNodes(threadData, _pred, _node, _iTaskGraphMeta);

  _isCritical = (_lastNode - _lactPred <= _commCosts);
  _return: OMC_LABEL_UNUSED
  return _isCritical;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDSpredIsCritical(threadData_t *threadData, modelica_metatype _node, modelica_metatype _pred, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _isCritical;
  modelica_metatype out_isCritical;
  tmp1 = mmc_unbox_integer(_node);
  tmp2 = mmc_unbox_integer(_pred);
  _isCritical = omc_HpcOmScheduler_TDSpredIsCritical(threadData, tmp1, tmp2, _iTaskGraphMeta, _lastArrayIn, _lactArrayIn);
  out_isCritical = mmc_mk_icon(_isCritical);
  return out_isCritical;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__InitialCluster1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn, modelica_metatype _fpredArrayIn, modelica_metatype _rootNodes, modelica_metatype _taskAssIn, modelica_integer _currThread, modelica_metatype _queue, modelica_metatype _clustersIn)
{
  modelica_metatype _clustersOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clustersOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _queue;
    {
      modelica_boolean _isCritical;
      modelica_integer _front;
      modelica_integer _fpred;
      modelica_integer _pos;
      modelica_real _maxExeCost;
      modelica_metatype _parentExeCost = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _parents = NULL;
      modelica_metatype _parentsNofpred = NULL;
      modelica_metatype _parentAssgmnts = NULL;
      modelica_metatype _unAssParents = NULL;
      modelica_metatype _thread = NULL;
      modelica_metatype _clusters = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _isCritical has no default value.
      // _front has no default value.
      // _fpred has no default value.
      // _pos has no default value.
      // _maxExeCost has no default value.
      // _parentExeCost has no default value.
      // _rest has no default value.
      // _parents has no default value.
      // _parentsNofpred has no default value.
      // _parentAssgmnts has no default value.
      // _unAssParents has no default value.
      // _thread has no default value.
      // _clusters has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _clusters = omc_List_filterOnFalse(threadData, _clustersIn, boxvar_listEmpty);
          tmpMeta1 = omc_List_map(threadData, _clusters, boxvar_listReverse);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _front = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = omc_List_isMemberOnTrue(threadData, mmc_mk_integer(_front), _rootNodes, boxvar_intEq);
          if (1 /* true */ != tmp9) goto goto_2;

          _thread = listGet(_clustersIn, _currThread);

          tmpMeta10 = mmc_mk_cons(mmc_mk_integer(_front), _thread);
          _thread = tmpMeta10;

          _clusters = omc_List_replaceAt(threadData, _thread, _currThread, _clustersIn);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _clusters = omc_List_appendElt(threadData, tmpMeta11, _clusters);
          tmpMeta1 = omc_HpcOmScheduler_TDS__InitialCluster1(threadData, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _lastArrayIn, _lactArrayIn, _fpredArrayIn, _rootNodes, _taskAssIn, ((modelica_integer) 1) + _currThread, _rest, _clusters);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          tmp14 = mmc_unbox_integer(tmpMeta12);
          _front = tmp14  /* pattern as ty=Integer */;
          _rest = tmpMeta13;
          /* Pattern matching succeeded */
          _fpred = mmc_unbox_integer(arrayGet(_fpredArrayIn, _front));

          _isCritical = omc_HpcOmScheduler_TDSpredIsCritical(threadData, _front, _fpred, _iTaskGraphMeta, _lastArrayIn, _lactArrayIn);

          /* Pattern-matching assignment */
          tmp15 = _isCritical;
          if (1 /* true */ != tmp15) goto goto_2;

          _thread = listGet(_clustersIn, _currThread);

          tmpMeta16 = mmc_mk_cons(mmc_mk_integer(_front), _thread);
          _thread = tmpMeta16;

          _clusters = omc_List_replaceAt(threadData, _thread, _currThread, _clustersIn);

          arrayUpdate(_taskAssIn, _front, mmc_mk_integer(_currThread));

          _rest = omc_List_removeOnTrue(threadData, mmc_mk_integer(_fpred), boxvar_intEq, _rest);

          tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_fpred), _rest);
          _rest = tmpMeta17;
          tmpMeta1 = omc_HpcOmScheduler_TDS__InitialCluster1(threadData, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _lastArrayIn, _lactArrayIn, _fpredArrayIn, _rootNodes, _taskAssIn, _currThread, _rest, _clusters);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_boolean tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          tmp20 = mmc_unbox_integer(tmpMeta18);
          _front = tmp20  /* pattern as ty=Integer */;
          _rest = tmpMeta19;
          /* Pattern matching succeeded */
          _fpred = mmc_unbox_integer(arrayGet(_fpredArrayIn, _front));

          _isCritical = omc_HpcOmScheduler_TDSpredIsCritical(threadData, _front, _fpred, _iTaskGraphMeta, _lastArrayIn, _lactArrayIn);

          /* Pattern-matching assignment */
          tmp21 = (!_isCritical);
          if (1 /* true */ != tmp21) goto goto_2;

          _thread = listGet(_clustersIn, _currThread);

          tmpMeta22 = mmc_mk_cons(mmc_mk_integer(_front), _thread);
          _thread = tmpMeta22;

          _clusters = omc_List_replaceAt(threadData, _thread, _currThread, _clustersIn);

          arrayUpdate(_taskAssIn, _front, mmc_mk_integer(_currThread));

          _parents = arrayGet(_iTaskGraphT, _front);

          _parentsNofpred = omc_List_removeOnTrue(threadData, mmc_mk_integer(_fpred), boxvar_intEq, _parents);

          _parentAssgmnts = omc_List_map1(threadData, _parentsNofpred, boxvar_Array_getIndexFirst, _taskAssIn);

          omc_List_filter1OnTrueSync(threadData, _parentAssgmnts, boxvar_intEq, mmc_mk_integer(((modelica_integer) -1)), _parentsNofpred ,&_unAssParents);

          _parents = (listEmpty(_unAssParents)?_parents:_unAssParents);

          _parentExeCost = omc_List_map1(threadData, _parents, boxvar_HpcOmTaskGraph_getExeCostReqCycles, _iTaskGraphMeta);

          _maxExeCost = mmc_unbox_real(omc_List_fold(threadData, _parentExeCost, boxvar_realMax, _OMC_LIT21));

          _pos = omc_List_position(threadData, mmc_mk_real(_maxExeCost), _parentExeCost);

          _fpred = mmc_unbox_integer(listGet(_parents, _pos));

          _rest = omc_List_removeOnTrue(threadData, mmc_mk_integer(_fpred), boxvar_intEq, _rest);

          tmpMeta23 = mmc_mk_cons(mmc_mk_integer(_fpred), _rest);
          _rest = tmpMeta23;
          tmpMeta1 = omc_HpcOmScheduler_TDS__InitialCluster1(threadData, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _lastArrayIn, _lactArrayIn, _fpredArrayIn, _rootNodes, _taskAssIn, _currThread, _rest, _clusters);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT73),stdout);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _clustersOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _clustersOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__InitialCluster1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn, modelica_metatype _fpredArrayIn, modelica_metatype _rootNodes, modelica_metatype _taskAssIn, modelica_metatype _currThread, modelica_metatype _queue, modelica_metatype _clustersIn)
{
  modelica_integer tmp1;
  modelica_metatype _clustersOut = NULL;
  tmp1 = mmc_unbox_integer(_currThread);
  _clustersOut = omc_HpcOmScheduler_TDS__InitialCluster1(threadData, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _lastArrayIn, _lactArrayIn, _fpredArrayIn, _rootNodes, _taskAssIn, tmp1, _queue, _clustersIn);
  /* skip box _clustersOut; list<list<#Integer>> */
  return _clustersOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__InitialCluster(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _lastArrayIn, modelica_metatype _lactArrayIn, modelica_metatype _fpredArrayIn, modelica_metatype _queue)
{
  modelica_metatype _clustersOut = NULL;
  modelica_metatype _taskAssignments = NULL;
  modelica_metatype _rootNodes = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clustersOut has no default value.
  // _taskAssignments has no default value.
  // _rootNodes has no default value.
  _taskAssignments = arrayCreate(arrayLength(_iTaskGraph), mmc_mk_integer(((modelica_integer) -1)));

  _rootNodes = omc_HpcOmTaskGraph_getRootNodes(threadData, _iTaskGraph);

  _clustersOut = omc_HpcOmScheduler_TDS__InitialCluster1(threadData, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _lastArrayIn, _lactArrayIn, _fpredArrayIn, _rootNodes, _taskAssignments, ((modelica_integer) 1), _queue, _OMC_LIT74);
  _return: OMC_LABEL_UNUSED
  return _clustersOut;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_TDS__computeClusterCosts(threadData_t *threadData, modelica_metatype _clusters, modelica_metatype _iTaskGraphMeta)
{
  modelica_real _costs;
  modelica_metatype _nodeCosts = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _costs has no default value.
  // _nodeCosts has no default value.
  _nodeCosts = omc_List_map1(threadData, _clusters, boxvar_HpcOmTaskGraph_getExeCostReqCycles, _iTaskGraphMeta);

  _costs = mmc_unbox_real(omc_List_fold(threadData, _nodeCosts, boxvar_realAdd, _OMC_LIT21));
  _return: OMC_LABEL_UNUSED
  return _costs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__computeClusterCosts(threadData_t *threadData, modelica_metatype _clusters, modelica_metatype _iTaskGraphMeta)
{
  modelica_real _costs;
  modelica_metatype out_costs;
  _costs = omc_HpcOmScheduler_TDS__computeClusterCosts(threadData, _clusters, _iTaskGraphMeta);
  out_costs = mmc_mk_rcon(_costs);
  return out_costs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__SortCompactClusters(threadData_t *threadData, modelica_metatype _clusterIn, modelica_metatype _tdsLevelIn)
{
  modelica_metatype _clusterOut = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype _cluster = NULL;
  modelica_metatype _tdsLevels = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clusterOut has no default value.
  // _order has no default value.
  // _cluster has no default value.
  // _tdsLevels has no default value.
  _cluster = omc_List_unique(threadData, _clusterIn);

  _tdsLevels = omc_List_map1(threadData, _cluster, boxvar_Array_getIndexFirst, _tdsLevelIn);

  omc_HpcOmScheduler_quicksortWithOrder(threadData, _tdsLevels ,&_order);

  _order = listReverse(_order);

  _clusterOut = omc_List_map1(threadData, _order, boxvar_List_getIndexFirst, _cluster);
  _return: OMC_LABEL_UNUSED
  return _clusterOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__CompactClusters(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _TDSLevel, modelica_integer _numProc)
{
  modelica_metatype _clustersOut = NULL;
  modelica_integer _numMergeClusters;
  modelica_metatype _clusterExeCosts = NULL;
  modelica_metatype _clusterOrder = NULL;
  modelica_metatype _firstClusters = NULL;
  modelica_metatype _lastClusters = NULL;
  modelica_metatype _middleCluster = NULL;
  modelica_metatype _clusters = NULL;
  modelica_metatype _mergedClusters = NULL;
  modelica_integer tmp1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clustersOut has no default value.
  // _numMergeClusters has no default value.
  // _clusterExeCosts has no default value.
  // _clusterOrder has no default value.
  // _firstClusters has no default value.
  // _lastClusters has no default value.
  // _middleCluster has no default value.
  // _clusters has no default value.
  // _mergedClusters has no default value.
  _clusterExeCosts = omc_List_map1(threadData, _clustersIn, boxvar_HpcOmScheduler_TDS__computeClusterCosts, _iTaskGraphMeta);

  omc_HpcOmScheduler_quicksortWithOrder(threadData, _clusterExeCosts ,&_clusterOrder);

  _clusterOrder = listReverse(_clusterOrder);

  _clusters = omc_List_map1(threadData, _clusterOrder, boxvar_List_getIndexFirst, _clustersIn);

  tmp1 = ((modelica_integer) 2);
  if (tmp1 == 0) {MMC_THROW_INTERNAL();}
  _numMergeClusters = modelica_integer_min((modelica_integer)(modelica_div_integer(listLength(_clustersIn),tmp1).quot),(modelica_integer)(listLength(_clustersIn) - _numProc));

  _firstClusters = omc_List_split(threadData, _clusters, _numMergeClusters ,&_lastClusters);

  _middleCluster = omc_List_split(threadData, _lastClusters, listLength(_lastClusters) - _numMergeClusters ,&_lastClusters);

  _lastClusters = listReverse(_lastClusters);

  _mergedClusters = omc_List_threadMap(threadData, _firstClusters, _lastClusters, boxvar_listAppend);

  _clustersOut = listAppend(_mergedClusters, _middleCluster);
  _return: OMC_LABEL_UNUSED
  return _clustersOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__CompactClusters(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _TDSLevel, modelica_metatype _numProc)
{
  modelica_integer tmp1;
  modelica_metatype _clustersOut = NULL;
  tmp1 = mmc_unbox_integer(_numProc);
  _clustersOut = omc_HpcOmScheduler_TDS__CompactClusters(threadData, _clustersIn, _iTaskGraph, _iTaskGraphMeta, _TDSLevel, tmp1);
  /* skip box _clustersOut; list<list<#Integer>> */
  return _clustersOut;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_TDS__getTaskAssignment(threadData_t *threadData, modelica_integer _procIdx, modelica_metatype _clusterArrayIn, modelica_metatype _taskAssIn)
{
  modelica_metatype _procTasks = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _procTasks has no default value.
  _procTasks = arrayGet(_clusterArrayIn, _procIdx);

  omc_List_map2__0(threadData, _procTasks, boxvar_Array_updateIndexFirst, mmc_mk_integer(_procIdx), _taskAssIn);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_TDS__getTaskAssignment(threadData_t *threadData, modelica_metatype _procIdx, modelica_metatype _clusterArrayIn, modelica_metatype _taskAssIn)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_procIdx);
  omc_HpcOmScheduler_TDS__getTaskAssignment(threadData, tmp1, _clusterArrayIn, _taskAssIn);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceInSimJac(threadData_t *threadData, modelica_metatype _simJacRowIn, modelica_metatype _replIn)
{
  modelica_metatype _simJacRowOut = NULL;
  modelica_integer _int1;
  modelica_integer _int2;
  modelica_metatype _simEqSys = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simJacRowOut has no default value.
  // _int1 has no default value.
  // _int2 has no default value.
  // _simEqSys has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _simJacRowIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _int1 = tmp3  /* pattern as ty=Integer */;
  _int2 = tmp5  /* pattern as ty=Integer */;
  _simEqSys = tmpMeta6;

  _simEqSys = omc_HpcOmScheduler_replaceExpsInSimEqSystem(threadData, _simEqSys, _replIn, NULL);

  tmpMeta7 = mmc_mk_box3(0, mmc_mk_integer(_int1), mmc_mk_integer(_int2), _simEqSys);
  _simJacRowOut = tmpMeta7;
  _return: OMC_LABEL_UNUSED
  return _simJacRowOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceCrefInSimVar(threadData_t *threadData, modelica_metatype _simVarIn, modelica_metatype _replIn, modelica_boolean *out_changedOut)
{
  modelica_metatype _simVarOut = NULL;
  modelica_boolean _changedOut;
  modelica_metatype _name = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _simVarOut = _simVarIn;
  // _changedOut has no default value.
  // _name has no default value.
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
          /* Pattern matching succeeded */
          if(omc_BackendVarTransform_hasReplacement(threadData, _replIn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVarIn), 2)))))
          {
            /* Pattern-matching assignment */
            tmpMeta5 = omc_BackendVarTransform_getReplacement(threadData, _replIn, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simVarIn), 2))));
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta5,6,2) == 0) goto goto_1;
            tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
            _name = tmpMeta6;

            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(33));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_simVarOut), 33*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = _name;
            _simVarOut = tmpMeta7;

            _changedOut = 1 /* true */;
          }
          else
          {
            _changedOut = 0 /* false */;
          }
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          _changedOut = 0 /* false */;
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
  if (out_changedOut) { *out_changedOut = _changedOut; }
  return _simVarOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_replaceCrefInSimVar(threadData_t *threadData, modelica_metatype _simVarIn, modelica_metatype _replIn, modelica_metatype *out_changedOut)
{
  modelica_boolean _changedOut;
  modelica_metatype _simVarOut = NULL;
  _simVarOut = omc_HpcOmScheduler_replaceCrefInSimVar(threadData, _simVarIn, _replIn, &_changedOut);
  /* skip box _simVarOut; SimCodeVar.SimVar */
  if (out_changedOut) { *out_changedOut = mmc_mk_icon(_changedOut); }
  return _simVarOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceExpsInSimEqSystem(threadData_t *threadData, modelica_metatype _simEqSysIn, modelica_metatype _replIn, modelica_boolean *out_changedOut)
{
  modelica_metatype _simEqSysOut = NULL;
  modelica_boolean _changedOut;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simEqSysOut has no default value.
  // _changedOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _simEqSysIn;
    {
      modelica_boolean _changed;
      modelica_boolean _changed1;
      modelica_boolean _hasRepl;
      modelica_metatype _bLst = NULL;
      modelica_metatype _cref = NULL;
      modelica_metatype _source = NULL;
      modelica_metatype _exp = NULL;
      modelica_metatype _lhs = NULL;
      modelica_metatype _simEqSys = NULL;
      modelica_metatype _cont = NULL;
      modelica_metatype _expLst = NULL;
      modelica_metatype _crefExps = NULL;
      modelica_metatype _crefs = NULL;
      modelica_metatype _stmts = NULL;
      modelica_metatype _simEqSysLst = NULL;
      modelica_metatype _simVars = NULL;
      modelica_metatype _simEqSysLstLst = NULL;
      modelica_metatype _simJac = NULL;
      modelica_metatype _ifs = NULL;
      modelica_metatype _elsebranch = NULL;
      modelica_metatype _lSystem = NULL;
      modelica_metatype _nlSystem = NULL;
      modelica_metatype _elseWhen = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _changed has no default value.
      // _changed1 has no default value.
      // _hasRepl has no default value.
      // _bLst has no default value.
      // _cref has no default value.
      // _source has no default value.
      // _exp has no default value.
      // _lhs has no default value.
      // _simEqSys has no default value.
      // _cont has no default value.
      // _expLst has no default value.
      // _crefExps has no default value.
      // _crefs has no default value.
      // _stmts has no default value.
      // _simEqSysLst has no default value.
      // _simVars has no default value.
      // _simEqSysLstLst has no default value.
      // _simJac has no default value.
      // _ifs has no default value.
      // _elsebranch has no default value.
      // _lSystem has no default value.
      // _nlSystem has no default value.
      // _elseWhen has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 12; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          _simEqSys = tmp4_1;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          _exp = omc_BackendVarTransform_replaceExp(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simEqSys), 4))), _replIn, mmc_mk_none() ,&_changed);

          tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_simEqSys), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = _exp;
          _simEqSys = tmpMeta6;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = _changed;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _simEqSys = tmp4_1;
          _cref = tmpMeta7;
          _exp = tmpMeta8;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          _hasRepl = omc_BackendVarTransform_hasReplacement(threadData, _replIn, _cref);

          /* Pattern-matching assignment */
          tmp10 = (modelica_boolean)_hasRepl;
          if(tmp10)
          {
            tmpMeta11 = omc_BackendVarTransform_getReplacement(threadData, _replIn, _cref);
          }
          else
          {
            tmpMeta9 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cref, _OMC_LIT75);
            tmpMeta11 = tmpMeta9;
          }
          tmpMeta12 = tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta12,6,2) == 0) goto goto_2;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          _cref = tmpMeta13;

          _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _replIn, mmc_mk_none() ,&_changed);

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_simEqSys), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = _cref;
          _simEqSys = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_simEqSys), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[4] = _exp;
          _simEqSys = tmpMeta15;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = (_changed || _hasRepl);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_boolean tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,6) == 0) goto tmp3_end;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _simEqSys = tmp4_1;
          _cref = tmpMeta16;
          _exp = tmpMeta17;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          _hasRepl = omc_BackendVarTransform_hasReplacement(threadData, _replIn, _cref);

          /* Pattern-matching assignment */
          tmp19 = (modelica_boolean)_hasRepl;
          if(tmp19)
          {
            tmpMeta20 = omc_BackendVarTransform_getReplacement(threadData, _replIn, _cref);
          }
          else
          {
            tmpMeta18 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cref, _OMC_LIT75);
            tmpMeta20 = tmpMeta18;
          }
          tmpMeta21 = tmpMeta20;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,6,2) == 0) goto goto_2;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          _cref = tmpMeta22;

          _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _replIn, mmc_mk_none() ,&_changed);

          tmpMeta23 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta23), MMC_UNTAGPTR(_simEqSys), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta23))[3] = _cref;
          _simEqSys = tmpMeta23;

          tmpMeta24 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta24), MMC_UNTAGPTR(_simEqSys), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta24))[4] = _exp;
          _simEqSys = tmpMeta24;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = (_changed || _hasRepl);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_boolean tmp28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,5) == 0) goto tmp3_end;
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _simEqSys = tmp4_1;
          _lhs = tmpMeta25;
          _exp = tmpMeta26;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cref = omc_Expression_expCref(threadData, _lhs);

          _hasRepl = omc_BackendVarTransform_hasReplacement(threadData, _replIn, _cref);

          tmp28 = (modelica_boolean)_hasRepl;
          if(tmp28)
          {
            tmpMeta29 = omc_BackendVarTransform_getReplacement(threadData, _replIn, _cref);
          }
          else
          {
            tmpMeta27 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _cref, _OMC_LIT75);
            tmpMeta29 = tmpMeta27;
          }
          _lhs = tmpMeta29;

          _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _replIn, mmc_mk_none() ,&_changed);

          tmpMeta30 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta30), MMC_UNTAGPTR(_simEqSys), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta30))[3] = _lhs;
          _simEqSys = tmpMeta30;

          tmpMeta31 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta31), MMC_UNTAGPTR(_simEqSys), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta31))[4] = _exp;
          _simEqSys = tmpMeta31;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = (_changed || _hasRepl);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,9,5) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          
          _simEqSys = tmp4_1;
          _ifs = tmpMeta32;
          _elsebranch = tmpMeta33;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          _expLst = omc_List_map(threadData, _ifs, boxvar_Util_tuple21);

          _expLst = omc_BackendVarTransform_replaceExpList(threadData, _expLst, _replIn, mmc_mk_none() ,&_changed);

          _simEqSysLstLst = omc_List_map(threadData, _ifs, boxvar_Util_tuple22);

          _simEqSysLstLst = omc_List_map1__2(threadData, _simEqSysLstLst, boxvar_HpcOmScheduler_replaceInSimEqSystemLst, _replIn, NULL);

          _ifs = omc_List_threadMap(threadData, _expLst, _simEqSysLstLst, boxvar_Util_makeTuple);

          _elsebranch = omc_List_map1__2(threadData, _elsebranch, boxvar_HpcOmScheduler_replaceExpsInSimEqSystem, _replIn ,&_bLst);

          _changed = mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(_changed)));

          tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_simEqSys), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[3] = _ifs;
          _simEqSys = tmpMeta34;

          tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(7));
          memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_simEqSys), 7*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[4] = _elsebranch;
          _simEqSys = tmpMeta35;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = _changed;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,10,3) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _simEqSys = tmp4_1;
          _stmts = tmpMeta36;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          _stmts = omc_BackendVarTransform_replaceStatementLst(threadData, _stmts, _replIn, mmc_mk_none(), tmpMeta37, 0 /* false */ ,&_changed);

          tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[3] = _stmts;
          _simEqSys = tmpMeta38;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = _changed;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _simEqSys = tmp4_1;
          _lSystem = tmpMeta39;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          _simVars = omc_List_map1__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 5))), boxvar_HpcOmScheduler_replaceCrefInSimVar, _replIn ,&_bLst);

          _expLst = omc_BackendVarTransform_replaceExpList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 6))), _replIn, mmc_mk_none() ,&_changed);

          _changed = mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(_changed)));

          _simJac = omc_List_map1(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_lSystem), 7))), boxvar_HpcOmScheduler_replaceInSimJac, _replIn);

          tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[5] = _simVars;
          _lSystem = tmpMeta40;

          tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[6] = _expLst;
          _lSystem = tmpMeta41;

          tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[7] = _simJac;
          _lSystem = tmpMeta42;

          tmpMeta43 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta43), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta43))[2] = _lSystem;
          _simEqSys = tmpMeta43;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = _changed;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _simEqSys = tmp4_1;
          _nlSystem = tmpMeta44;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _expLst = omc_List_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 4))), boxvar_Expression_crefExp);

          _expLst = omc_BackendVarTransform_replaceExpList(threadData, _expLst, _replIn, mmc_mk_none() ,&_changed);

          _crefs = omc_List_map(threadData, _expLst, boxvar_Expression_expCref);

          _simEqSysLst = omc_List_map1__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_nlSystem), 3))), boxvar_HpcOmScheduler_replaceExpsInSimEqSystem, _replIn ,&_bLst);

          _changed = (_changed || mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(0 /* false */))));

          fputs(MMC_STRINGDATA(_OMC_LIT76),stdout);

          tmpMeta45 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta45), MMC_UNTAGPTR(_nlSystem), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta45))[4] = _crefs;
          _nlSystem = tmpMeta45;

          tmpMeta46 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta46), MMC_UNTAGPTR(_nlSystem), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta46))[3] = _simEqSysLst;
          _nlSystem = tmpMeta46;

          tmpMeta47 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta47), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta47))[2] = _nlSystem;
          _simEqSys = tmpMeta47;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = _changed;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,6) == 0) goto tmp3_end;
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _simEqSys = tmp4_1;
          _cont = tmpMeta48;
          _simVars = tmpMeta49;
          _simEqSysLst = tmpMeta50;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _cont = omc_HpcOmScheduler_replaceExpsInSimEqSystem(threadData, _cont, _replIn ,&_changed);

          _simVars = omc_List_map1__2(threadData, _simVars, boxvar_HpcOmScheduler_replaceCrefInSimVar, _replIn ,&_bLst);

          _changed = mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(_changed)));

          _simEqSysLst = omc_List_map1__2(threadData, _simEqSysLst, boxvar_HpcOmScheduler_replaceExpsInSimEqSystem, _replIn ,&_bLst);

          _changed = mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(_changed)));

          tmpMeta51 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta51), MMC_UNTAGPTR(_simEqSys), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta51))[4] = _simVars;
          _simEqSys = tmpMeta51;

          tmpMeta52 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta52), MMC_UNTAGPTR(_simEqSys), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta52))[5] = _simEqSysLst;
          _simEqSys = tmpMeta52;

          tmpMeta53 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta53), MMC_UNTAGPTR(_simEqSys), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta53))[3] = _cont;
          _simEqSys = tmpMeta53;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = _changed;
          goto tmp3_done;
        }
        case 9: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,7) == 0) goto tmp3_end;
          tmpMeta54 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (listEmpty(tmpMeta55)) goto tmp3_end;
          tmpMeta56 = MMC_CAR(tmpMeta55);
          tmpMeta57 = MMC_CDR(tmpMeta55);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta56,0,3) == 0) goto tmp3_end;
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta56), 2));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta56), 3));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta56), 4));
          if (!listEmpty(tmpMeta57)) goto tmp3_end;
          tmpMeta61 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (!optionNone(tmpMeta61)) goto tmp3_end;
          
          _simEqSys = tmp4_1;
          _crefs = tmpMeta54;
          _lhs = tmpMeta58;
          _exp = tmpMeta59;
          _source = tmpMeta60;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _crefExps = omc_List_map1__2(threadData, _crefs, boxvar_BackendVarTransform_replaceCref, _replIn ,&_bLst);

          _crefs = omc_List_map(threadData, _crefExps, boxvar_Expression_expCref);

          _lhs = omc_BackendVarTransform_replaceExp(threadData, _lhs, _replIn, mmc_mk_none() ,&_changed);

          _changed = mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(_changed)));

          _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _replIn, mmc_mk_none() ,&_changed1);

          _changed = (_changed || _changed1);

          tmpMeta62 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta62), MMC_UNTAGPTR(_simEqSys), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta62))[3] = _crefs;
          _simEqSys = tmpMeta62;

          tmpMeta65 = mmc_mk_box4(3, &BackendDAE_WhenOperator_ASSIGN__desc, _lhs, _exp, _source);
          tmpMeta64 = mmc_mk_cons(tmpMeta65, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta63 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta63), MMC_UNTAGPTR(_simEqSys), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta63))[5] = tmpMeta64;
          _simEqSys = tmpMeta63;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = _changed;
          goto tmp3_done;
        }
        case 10: {
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,15,7) == 0) goto tmp3_end;
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta67 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (listEmpty(tmpMeta67)) goto tmp3_end;
          tmpMeta68 = MMC_CAR(tmpMeta67);
          tmpMeta69 = MMC_CDR(tmpMeta67);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta68,0,3) == 0) goto tmp3_end;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 2));
          tmpMeta71 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 3));
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta68), 4));
          if (!listEmpty(tmpMeta69)) goto tmp3_end;
          tmpMeta73 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (optionNone(tmpMeta73)) goto tmp3_end;
          tmpMeta74 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta73), 1));
          
          _simEqSys = tmp4_1;
          _crefs = tmpMeta66;
          _lhs = tmpMeta70;
          _exp = tmpMeta71;
          _source = tmpMeta72;
          _elseWhen = tmpMeta74;
          /* Pattern matching succeeded */
          _crefExps = omc_List_map1__2(threadData, _crefs, boxvar_BackendVarTransform_replaceCref, _replIn ,&_bLst);

          _crefs = omc_List_map(threadData, _crefExps, boxvar_Expression_expCref);

          _lhs = omc_BackendVarTransform_replaceExp(threadData, _lhs, _replIn, mmc_mk_none() ,&_changed);

          _changed = mmc_unbox_boolean(omc_List_fold(threadData, _bLst, boxvar_boolOr, mmc_mk_boolean(_changed)));

          _exp = omc_BackendVarTransform_replaceExp(threadData, _exp, _replIn, mmc_mk_none() ,&_changed1);

          _changed = (_changed || _changed1);

          _simEqSys = omc_HpcOmScheduler_replaceExpsInSimEqSystem(threadData, _simEqSys, _replIn ,&_changed1);

          _changed = (_changed || _changed1);

          tmpMeta75 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta75), MMC_UNTAGPTR(_simEqSys), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta75))[3] = _crefs;
          _simEqSys = tmpMeta75;

          tmpMeta78 = mmc_mk_box4(3, &BackendDAE_WhenOperator_ASSIGN__desc, _lhs, _exp, _source);
          tmpMeta77 = mmc_mk_cons(tmpMeta78, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta76 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta76), MMC_UNTAGPTR(_simEqSys), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta76))[5] = tmpMeta77;
          _simEqSys = tmpMeta76;

          tmpMeta79 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta79), MMC_UNTAGPTR(_simEqSys), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta79))[6] = mmc_mk_some(_elseWhen);
          _simEqSys = tmpMeta79;
          tmpMeta[0+0] = _simEqSys;
          tmp1_c1 = _changed;
          goto tmp3_done;
        }
        case 11: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT77),stdout);
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
      if (++tmp4 < 12) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _simEqSysOut = tmpMeta[0+0];
  _changedOut = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_changedOut) { *out_changedOut = _changedOut; }
  return _simEqSysOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_replaceExpsInSimEqSystem(threadData_t *threadData, modelica_metatype _simEqSysIn, modelica_metatype _replIn, modelica_metatype *out_changedOut)
{
  modelica_boolean _changedOut;
  modelica_metatype _simEqSysOut = NULL;
  _simEqSysOut = omc_HpcOmScheduler_replaceExpsInSimEqSystem(threadData, _simEqSysIn, _replIn, &_changedOut);
  /* skip box _simEqSysOut; SimCode.SimEqSystem */
  if (out_changedOut) { *out_changedOut = mmc_mk_icon(_changedOut); }
  return _simEqSysOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceInSimEqSystemLst(threadData_t *threadData, modelica_metatype _simEqSysLstIn, modelica_metatype _replIn, modelica_metatype *out_changedOut)
{
  modelica_metatype _simEqSysLstOut = NULL;
  modelica_metatype _changedOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simEqSysLstOut has no default value.
  // _changedOut has no default value.
  _simEqSysLstOut = omc_List_map1__2(threadData, _simEqSysLstIn, boxvar_HpcOmScheduler_replaceExpsInSimEqSystem, _replIn ,&_changedOut);
  _return: OMC_LABEL_UNUSED
  if (out_changedOut) { *out_changedOut = _changedOut; }
  return _simEqSysLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceSystemIndex(threadData_t *threadData, modelica_metatype _simEqSysIn, modelica_metatype _idcsIn, modelica_metatype *out_idcsOut)
{
  modelica_metatype _simEqSysOut = NULL;
  modelica_metatype _idcsOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simEqSysOut has no default value.
  // _idcsOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _simEqSysIn;
    {
      modelica_integer _lsIdx;
      modelica_integer _nlsIdx;
      modelica_integer _mIdx;
      modelica_metatype _simEqSys = NULL;
      modelica_metatype _lSystem = NULL;
      modelica_metatype _nlSystem = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lsIdx has no default value.
      // _nlsIdx has no default value.
      // _mIdx has no default value.
      // _simEqSys has no default value.
      // _lSystem has no default value.
      // _nlSystem has no default value.
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _simEqSys = tmp4_1;
          _lSystem = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta7 = _idcsIn;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 3));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          _lsIdx = tmp9  /* pattern as ty=Integer */;
          _nlsIdx = tmp11  /* pattern as ty=Integer */;
          _mIdx = tmp13  /* pattern as ty=Integer */;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[11] = mmc_mk_integer(_lsIdx);
          _lSystem = tmpMeta14;

          tmpMeta15 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta15), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta15))[2] = _lSystem;
          _simEqSys = tmpMeta15;
          tmpMeta16 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) 1) + _lsIdx), mmc_mk_integer(_nlsIdx), mmc_mk_integer(_mIdx));
          tmpMeta[0+0] = _simEqSys;
          tmpMeta[0+1] = tmpMeta16;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _simEqSys = tmp4_1;
          _nlSystem = tmpMeta17;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta18 = _idcsIn;
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 3));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          _lsIdx = tmp20  /* pattern as ty=Integer */;
          _nlsIdx = tmp22  /* pattern as ty=Integer */;
          _mIdx = tmp24  /* pattern as ty=Integer */;

          tmpMeta25 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta25), MMC_UNTAGPTR(_nlSystem), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta25))[5] = mmc_mk_integer(_nlsIdx);
          _nlSystem = tmpMeta25;

          tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[2] = _nlSystem;
          _simEqSys = tmpMeta26;
          tmpMeta27 = mmc_mk_box3(0, mmc_mk_integer(_lsIdx), mmc_mk_integer(((modelica_integer) 1) + _nlsIdx), mmc_mk_integer(_mIdx));
          tmpMeta[0+0] = _simEqSys;
          tmpMeta[0+1] = tmpMeta27;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          modelica_integer tmp32;
          modelica_metatype tmpMeta33;
          modelica_integer tmp34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,6) == 0) goto tmp3_end;
          
          _simEqSys = tmp4_1;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta28 = _idcsIn;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 1));
          tmp30 = mmc_unbox_integer(tmpMeta29);
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 2));
          tmp32 = mmc_unbox_integer(tmpMeta31);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta28), 3));
          tmp34 = mmc_unbox_integer(tmpMeta33);
          _lsIdx = tmp30  /* pattern as ty=Integer */;
          _nlsIdx = tmp32  /* pattern as ty=Integer */;
          _mIdx = tmp34  /* pattern as ty=Integer */;

          tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_simEqSys), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[6] = mmc_mk_integer(_mIdx);
          _simEqSys = tmpMeta35;
          tmpMeta36 = mmc_mk_box3(0, mmc_mk_integer(_lsIdx), mmc_mk_integer(_nlsIdx), mmc_mk_integer(((modelica_integer) 1) + _mIdx));
          tmpMeta[0+0] = _simEqSys;
          tmpMeta[0+1] = tmpMeta36;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _simEqSysIn;
          tmpMeta[0+1] = _idcsIn;
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
  _simEqSysOut = tmpMeta[0+0];
  _idcsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_idcsOut) { *out_idcsOut = _idcsOut; }
  return _simEqSysOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceSimEqSystemWithSameIndex(threadData_t *threadData, modelica_metatype _eqSysIn, modelica_metatype _eqSysLstIn)
{
  modelica_metatype _eqSysLstOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqSysLstOut has no default value.
  { /* matchcontinue expression */
    {
      modelica_integer _pos;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _pos has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          _pos = omc_List_position1OnTrue(threadData, _eqSysLstIn, boxvar_SimCodeUtil_equationIndexEqual, _eqSysIn);
          tmpMeta1 = omc_List_replaceAt(threadData, _eqSysIn, _pos, _eqSysLstIn);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _eqSysLstIn;
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
  _eqSysLstOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _eqSysLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_replaceSimEqSystemLstWithSameIndex(threadData_t *threadData, modelica_metatype _eqSystsIn, modelica_metatype _eqSysLstIn)
{
  modelica_metatype _eqSysLstOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqSysLstOut has no default value.
  _eqSysLstOut = omc_List_fold(threadData, _eqSystsIn, boxvar_HpcOmScheduler_replaceSimEqSystemWithSameIndex, _eqSysLstIn);
  _return: OMC_LABEL_UNUSED
  return _eqSysLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_makeSEScrefAssignment(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_integer _idx)
{
  modelica_metatype _sesOut = NULL;
  modelica_metatype _ty = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sesOut has no default value.
  // _ty has no default value.
  _ty = omc_ComponentReference_crefType(threadData, _rhs);

  tmpMeta1 = mmc_mk_box3(9, &DAE_Exp_CREF__desc, _rhs, _ty);
  tmpMeta2 = mmc_mk_box6(6, &SimCode_SimEqSystem_SES__SIMPLE__ASSIGN__desc, mmc_mk_integer(_idx), _lhs, tmpMeta1, _OMC_LIT80, _OMC_LIT83);
  _sesOut = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _sesOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_makeSEScrefAssignment(threadData_t *threadData, modelica_metatype _lhs, modelica_metatype _rhs, modelica_metatype _idx)
{
  modelica_integer tmp1;
  modelica_metatype _sesOut = NULL;
  tmp1 = mmc_unbox_integer(_idx);
  _sesOut = omc_HpcOmScheduler_makeSEScrefAssignment(threadData, _lhs, _rhs, tmp1);
  /* skip box _sesOut; SimCode.SimEqSystem */
  return _sesOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__duplicateSystemOfEquations(threadData_t *threadData, modelica_metatype _simEqsIn, modelica_integer _simEqSysIdxIn, modelica_metatype _repl, modelica_metatype _simEqsFold, modelica_integer *out_simEqSysIdxOut)
{
  modelica_metatype _simEqsOut = NULL;
  modelica_integer _simEqSysIdxOut;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simEqsOut has no default value.
  // _simEqSysIdxOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _simEqsIn;
    {
      modelica_integer _simEqSysIdx;
      modelica_integer _numEqs;
      modelica_metatype _systSimEqSysIdcs2 = NULL;
      modelica_metatype _simEqSys = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _duplicated = NULL;
      modelica_metatype _residual = NULL;
      modelica_metatype _lSystem = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _simEqSysIdx has no default value.
      // _numEqs has no default value.
      // _systSimEqSysIdcs2 has no default value.
      // _simEqSys has no default value.
      // _rest has no default value.
      // _duplicated has no default value.
      // _residual has no default value.
      // _lSystem has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = listReverse(_simEqsFold);
          tmp1_c1 = _simEqSysIdxIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,12,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 8));
          
          _simEqSys = tmpMeta6;
          _lSystem = tmpMeta8;
          _residual = tmpMeta9;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _numEqs = listLength(_residual);

          tmp11 = (modelica_boolean)(_numEqs == ((modelica_integer) 0));
          if(tmp11)
          {
            tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta12 = tmpMeta10;
          }
          else
          {
            tmpMeta12 = omc_List_intRange2(threadData, _simEqSysIdxIn, ((modelica_integer) -1) + _simEqSysIdxIn + _numEqs);
          }
          _systSimEqSysIdcs2 = tmpMeta12;

          _duplicated = omc_List_map1__2(threadData, _residual, boxvar_HpcOmScheduler_replaceExpsInSimEqSystem, _repl, NULL);

          _duplicated = omc_List_threadMap(threadData, _duplicated, _systSimEqSysIdcs2, boxvar_SimCodeUtil_replaceSimEqSysIndex);

          tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[8] = _duplicated;
          _lSystem = tmpMeta13;

          tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[2] = _lSystem;
          _simEqSys = tmpMeta14;

          _simEqSysIdx = _simEqSysIdxIn + _numEqs;
          tmpMeta15 = mmc_mk_cons(_simEqSys, _simEqsFold);
          tmpMeta[0+0] = omc_HpcOmScheduler_TDS__duplicateSystemOfEquations(threadData, _rest, _simEqSysIdx, _repl, tmpMeta15, &tmp1_c1);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta16 = _simEqsIn;
          if (listEmpty(tmpMeta16)) goto goto_2;
          tmpMeta17 = MMC_CAR(tmpMeta16);
          tmpMeta18 = MMC_CDR(tmpMeta16);
          _simEqSys = tmpMeta17;
          _rest = tmpMeta18;
          tmpMeta19 = mmc_mk_cons(_simEqSys, _simEqsFold);
          tmpMeta[0+0] = omc_HpcOmScheduler_TDS__duplicateSystemOfEquations(threadData, _rest, _simEqSysIdxIn, _repl, tmpMeta19, &tmp1_c1);
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
  _simEqsOut = tmpMeta[0+0];
  _simEqSysIdxOut = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_simEqSysIdxOut) { *out_simEqSysIdxOut = _simEqSysIdxOut; }
  return _simEqsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__duplicateSystemOfEquations(threadData_t *threadData, modelica_metatype _simEqsIn, modelica_metatype _simEqSysIdxIn, modelica_metatype _repl, modelica_metatype _simEqsFold, modelica_metatype *out_simEqSysIdxOut)
{
  modelica_integer tmp1;
  modelica_integer _simEqSysIdxOut;
  modelica_metatype _simEqsOut = NULL;
  tmp1 = mmc_unbox_integer(_simEqSysIdxIn);
  _simEqsOut = omc_HpcOmScheduler_TDS__duplicateSystemOfEquations(threadData, _simEqsIn, tmp1, _repl, _simEqsFold, &_simEqSysIdxOut);
  /* skip box _simEqsOut; list<SimCode.SimEqSystem> */
  if (out_simEqSysIdxOut) { *out_simEqSysIdxOut = mmc_mk_icon(_simEqSysIdxOut); }
  return _simEqsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__duplicateTasks2(threadData_t *threadData, modelica_integer _node, modelica_metatype _allCluster, modelica_metatype _replIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _threadIn, modelica_metatype _idcsIn, modelica_metatype _taskGraphOrig, modelica_metatype _taskGraphTOrig, modelica_metatype _taskGraphIn, modelica_metatype _taskDuplAssIn, modelica_metatype _iTaskGraphMeta, modelica_metatype _simCodeIn, modelica_metatype _sccSimEqMappingIn, modelica_metatype _duplSccSimEqMapIn, modelica_metatype _duplCompsIn, modelica_metatype *out_taskAssOut, modelica_metatype *out_procAssOut, modelica_metatype *out_taskGraphOut, modelica_metatype *out_taskDuplAssOut, modelica_metatype *out_threadOut, modelica_metatype *out_idcsOut, modelica_metatype *out_simCodeOut, modelica_metatype *out_duplSccSimEqMapOut, modelica_metatype *out_duplCompsOut)
{
  modelica_metatype _replOut = NULL;
  modelica_metatype _taskAssOut = NULL;
  modelica_metatype _procAssOut = NULL;
  modelica_metatype _taskGraphOut = NULL;
  modelica_metatype _taskDuplAssOut = NULL;
  modelica_metatype _threadOut = NULL;
  modelica_metatype _idcsOut = NULL;
  modelica_metatype _simCodeOut = NULL;
  modelica_metatype _duplSccSimEqMapOut = NULL;
  modelica_metatype _duplCompsOut = NULL;
  modelica_string _crefAppend = NULL;
  modelica_integer _threadIdx;
  modelica_integer _compIdx;
  modelica_integer _simVarIdx;
  modelica_integer _simVarIdx2;
  modelica_integer _simEqSysIdx;
  modelica_integer _simEqSysIdx2;
  modelica_integer _simEqSysIdx3;
  modelica_integer _numVars;
  modelica_integer _numEqs;
  modelica_integer _numInitEqs;
  modelica_integer _taskIdx;
  modelica_integer _lsIdx;
  modelica_integer _nlsIdx;
  modelica_integer _mIdx;
  modelica_metatype _comps = NULL;
  modelica_metatype _simVarSysIdcs2 = NULL;
  modelica_metatype _simEqSysIdcs = NULL;
  modelica_metatype _simEqSysIdcs2 = NULL;
  modelica_metatype _simEqSysIdcsInit = NULL;
  modelica_metatype _thread = NULL;
  modelica_metatype _clTasks = NULL;
  modelica_metatype _origPredTasks = NULL;
  modelica_metatype _clPredTasks = NULL;
  modelica_metatype _duplPredTasks = NULL;
  modelica_metatype _pos = NULL;
  modelica_metatype _simEqIdxLst = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _repl = NULL;
  modelica_metatype _taskGraph = NULL;
  modelica_metatype _ht = NULL;
  modelica_metatype _simVars = NULL;
  modelica_metatype _simCode = NULL;
  modelica_metatype _vars = NULL;
  modelica_metatype _crefs = NULL;
  modelica_metatype _crefsDupl = NULL;
  modelica_metatype _crefLst = NULL;
  modelica_metatype _crefsDuplExp = NULL;
  modelica_metatype _simVarLst = NULL;
  modelica_metatype _simVarDupl = NULL;
  modelica_metatype _simEqSysts = NULL;
  modelica_metatype _simEqSystsDupl = NULL;
  modelica_metatype _initEqs = NULL;
  modelica_metatype _odes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_metatype tmpMeta17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_integer tmp22;
  modelica_metatype tmpMeta23;
  modelica_integer tmp24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_integer tmp28;
  modelica_metatype tmpMeta29;
  modelica_integer tmp30;
  modelica_metatype tmpMeta31;
  modelica_integer tmp32;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _replOut has no default value.
  // _taskAssOut has no default value.
  // _procAssOut has no default value.
  // _taskGraphOut has no default value.
  // _taskDuplAssOut has no default value.
  // _threadOut has no default value.
  // _idcsOut has no default value.
  // _simCodeOut has no default value.
  // _duplSccSimEqMapOut has no default value.
  // _duplCompsOut has no default value.
  // _crefAppend has no default value.
  // _threadIdx has no default value.
  // _compIdx has no default value.
  // _simVarIdx has no default value.
  // _simVarIdx2 has no default value.
  // _simEqSysIdx has no default value.
  // _simEqSysIdx2 has no default value.
  // _simEqSysIdx3 has no default value.
  // _numVars has no default value.
  // _numEqs has no default value.
  // _numInitEqs has no default value.
  // _taskIdx has no default value.
  // _lsIdx has no default value.
  // _nlsIdx has no default value.
  // _mIdx has no default value.
  // _comps has no default value.
  // _simVarSysIdcs2 has no default value.
  // _simEqSysIdcs has no default value.
  // _simEqSysIdcs2 has no default value.
  // _simEqSysIdcsInit has no default value.
  // _thread has no default value.
  // _clTasks has no default value.
  // _origPredTasks has no default value.
  // _clPredTasks has no default value.
  // _duplPredTasks has no default value.
  // _pos has no default value.
  // _simEqIdxLst has no default value.
  // _inComps has no default value.
  // _repl has no default value.
  // _taskGraph has no default value.
  // _ht has no default value.
  // _simVars has no default value.
  // _simCode has no default value.
  // _vars has no default value.
  // _crefs has no default value.
  // _crefsDupl has no default value.
  // _crefLst has no default value.
  // _crefsDuplExp has no default value.
  // _simVarLst has no default value.
  // _simVarDupl has no default value.
  // _simEqSysts has no default value.
  // _simEqSystsDupl has no default value.
  // _initEqs has no default value.
  // _odes has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskGraphMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _inComps = tmpMeta2;

  /* Pattern-matching assignment */
  tmpMeta3 = _simCodeIn;
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 2));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 11));
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 9));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 44));
  _simVars = tmpMeta5;
  _odes = tmpMeta6;
  _ht = tmpMeta7;

  /* Pattern-matching assignment */
  tmpMeta8 = _idcsIn;
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
  tmp12 = mmc_unbox_integer(tmpMeta11);
  tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
  tmp14 = mmc_unbox_integer(tmpMeta13);
  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 4));
  tmp16 = mmc_unbox_integer(tmpMeta15);
  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 5));
  tmp18 = mmc_unbox_integer(tmpMeta17);
  tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 6));
  tmp20 = mmc_unbox_integer(tmpMeta19);
  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 7));
  tmp22 = mmc_unbox_integer(tmpMeta21);
  tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 8));
  tmp24 = mmc_unbox_integer(tmpMeta23);
  _threadIdx = tmp10  /* pattern as ty=Integer */;
  _taskIdx = tmp12  /* pattern as ty=Integer */;
  _compIdx = tmp14  /* pattern as ty=Integer */;
  _simVarIdx = tmp16  /* pattern as ty=Integer */;
  _simEqSysIdx = tmp18  /* pattern as ty=Integer */;
  _lsIdx = tmp20  /* pattern as ty=Integer */;
  _nlsIdx = tmp22  /* pattern as ty=Integer */;
  _mIdx = tmp24  /* pattern as ty=Integer */;

  _comps = arrayGet(_inComps, _node);

  _comps = listReverse(_comps);

  _simEqIdxLst = omc_List_map1(threadData, _comps, boxvar_Array_getIndexFirst, _sccSimEqMappingIn);

  _simEqSysIdcs = omc_List_flatten(threadData, _simEqIdxLst);

  _crefLst = omc_List_map1(threadData, _simEqSysIdcs, boxvar_SimCodeUtil_getAssignedCrefsOfSimEq, _simCodeIn);

  _crefs = omc_List_flatten(threadData, _crefLst);

  _simVarLst = omc_List_map1(threadData, _crefs, boxvar_BaseHashTable_get, _ht);

  _numVars = listLength(_simVarLst);

  _simVarSysIdcs2 = omc_List_intRange2(threadData, _simVarIdx, ((modelica_integer) -1) + _simVarIdx + _numVars);

  tmpMeta25 = stringAppend(_OMC_LIT84,intString(_threadIdx));
  _crefAppend = tmpMeta25;

  _crefsDupl = omc_List_map1r(threadData, _crefs, boxvar_ComponentReference_appendStringLastIdent, _crefAppend);

  _crefsDuplExp = omc_List_map(threadData, _crefsDupl, boxvar_Expression_crefExp);

  _simVarDupl = omc_List_threadMap(threadData, _crefsDupl, _simVarLst, boxvar_SimCodeUtil_replaceSimVarName);

  _simVarDupl = omc_List_threadMap(threadData, _simVarSysIdcs2, _simVarDupl, boxvar_SimCodeUtil_replaceSimVarIndex);

  _simCode = omc_List_fold(threadData, _simVarDupl, boxvar_SimCodeUtil_addSimVarToAlgVars, _simCodeIn);

  _simVarIdx2 = _simVarIdx + _numVars;

  _ht = omc_List_fold(threadData, _simVarDupl, boxvar_HashTableCrefSimVar_addSimVarToHashTable, _ht);

  _repl = omc_BackendVarTransform_addReplacements(threadData, _replIn, _crefs, _crefsDuplExp, mmc_mk_none());

  _simEqSysts = omc_List_map1(threadData, _simEqSysIdcs, boxvar_SimCodeUtil_getSimEqSysForIndex, omc_List_flatten(threadData, _odes));

  _numEqs = listLength(_simEqSysts);

  _simEqSysIdcs2 = omc_List_intRange2(threadData, _simEqSysIdx, ((modelica_integer) -1) + _simEqSysIdx + _numEqs);

  _simEqSystsDupl = omc_List_map1__2(threadData, _simEqSysts, boxvar_HpcOmScheduler_replaceExpsInSimEqSystem, _repl, NULL);

  /* Pattern-matching tuple assignment */
  tmpMeta33 = mmc_mk_box3(0, mmc_mk_integer(_lsIdx), mmc_mk_integer(_nlsIdx), mmc_mk_integer(_mIdx));
  tmpMeta34 = omc_List_mapFold(threadData, _simEqSystsDupl, boxvar_HpcOmScheduler_replaceSystemIndex, tmpMeta33, &tmpMeta26);
  _simEqSystsDupl = tmpMeta34;
  tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 1));
  tmp28 = mmc_unbox_integer(tmpMeta27);
  tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
  tmp30 = mmc_unbox_integer(tmpMeta29);
  tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 3));
  tmp32 = mmc_unbox_integer(tmpMeta31);
  _lsIdx = tmp28  /* pattern as ty=Integer */;
  _nlsIdx = tmp30  /* pattern as ty=Integer */;
  _mIdx = tmp32  /* pattern as ty=Integer */;

  _simEqSystsDupl = omc_List_threadMap(threadData, _simEqSystsDupl, _simEqSysIdcs2, boxvar_SimCodeUtil_replaceSimEqSysIndex);

  _simEqSysIdx2 = _simEqSysIdx + _numEqs;

  tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
  _simEqSystsDupl = omc_HpcOmScheduler_TDS__duplicateSystemOfEquations(threadData, _simEqSystsDupl, _simEqSysIdx2, _repl, tmpMeta35 ,&_simEqSysIdx2);

  _duplSccSimEqMapOut = listAppend(omc_List_map(threadData, _simEqSysIdcs2, boxvar_List_create), _duplSccSimEqMapIn);

  _simCode = omc_List_fold1(threadData, _simEqSystsDupl, boxvar_SimCodeUtil_addSimEqSysToODEquations, mmc_mk_integer(((modelica_integer) 1)), _simCode);

  tmpMeta37 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_taskIdx), _OMC_LIT21, _OMC_LIT55, mmc_mk_integer(_threadIdx), _simEqSysIdcs2);
  tmpMeta36 = mmc_mk_cons(tmpMeta37, _threadIn);
  _threadOut = tmpMeta36;

  _numInitEqs = listLength(_crefs);

  _simEqSysIdcsInit = omc_List_intRange2(threadData, _simEqSysIdx2, ((modelica_integer) -1) + _simEqSysIdx2 + _numInitEqs);

  _initEqs = omc_List_thread3Map(threadData, _crefsDupl, _crefs, _simEqSysIdcsInit, boxvar_HpcOmScheduler_makeSEScrefAssignment);

  _simCode = omc_List_fold(threadData, _initEqs, boxvar_SimCodeUtil_addSimEqSysToInitialEquations, _simCode);

  _simEqSysIdx3 = _simEqSysIdx2 + _numInitEqs;

  /* Pattern-matching assignment */
  tmpMeta38 = _simCode;
  tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta38), 9));
  _odes = tmpMeta39;

  _taskAssOut = arrayUpdate(_taskAssIn, _taskIdx, mmc_mk_integer(_threadIdx));

  _thread = arrayGet(_procAssIn, _threadIdx);

  tmpMeta40 = mmc_mk_cons(mmc_mk_integer(_taskIdx), _thread);
  _thread = tmpMeta40;

  _procAssOut = arrayUpdate(_procAssIn, _threadIdx, _thread);

  _comps = omc_List_intRange2(threadData, _compIdx, ((modelica_integer) -1) + _compIdx + listLength(_comps));

  _compIdx = _compIdx + listLength(_comps);

  tmpMeta41 = mmc_mk_cons(_comps, _duplCompsIn);
  _duplCompsOut = tmpMeta41;

  _taskDuplAssOut = arrayUpdate(_taskDuplAssIn, _taskIdx, mmc_mk_integer(_node));

  _clTasks = listHead(_allCluster);

  _origPredTasks = arrayGet(_taskGraphTOrig, _node);

  _clPredTasks = omc_List_intersection1OnTrue(threadData, _origPredTasks, _clTasks, boxvar_intEq ,&_origPredTasks ,NULL);

  _pos = omc_List_map1(threadData, _clPredTasks, boxvar_List_position, _clTasks);

  _clTasks = arrayGet(_procAssOut, _threadIdx);

  _clTasks = listReverse(_clTasks);

  _clPredTasks = omc_List_map1(threadData, _pos, boxvar_List_getIndexFirst, _clTasks);

  _duplPredTasks = omc_List_intersection1OnTrue(threadData, _clPredTasks, _clTasks, boxvar_intEq, NULL, NULL);

  tmpMeta42 = mmc_mk_cons(mmc_mk_integer(_taskIdx), MMC_REFSTRUCTLIT(mmc_nil));
  _taskGraph = omc_List_fold1(threadData, _duplPredTasks, boxvar_Array_appendToElement, tmpMeta42, _taskGraphIn);

  tmpMeta43 = mmc_mk_cons(mmc_mk_integer(_taskIdx), MMC_REFSTRUCTLIT(mmc_nil));
  _taskGraphOut = omc_List_fold1(threadData, _origPredTasks, boxvar_Array_appendToElement, tmpMeta43, _taskGraph);

  tmpMeta44 = mmc_mk_box8(0, mmc_mk_integer(_threadIdx), mmc_mk_integer(((modelica_integer) 1) + _taskIdx), mmc_mk_integer(_compIdx), mmc_mk_integer(_simVarIdx2), mmc_mk_integer(_simEqSysIdx3), mmc_mk_integer(_lsIdx), mmc_mk_integer(_nlsIdx), mmc_mk_integer(_mIdx));
  _idcsOut = tmpMeta44;

  _simCodeOut = _simCode;

  _replOut = _repl;
  _return: OMC_LABEL_UNUSED
  if (out_taskAssOut) { *out_taskAssOut = _taskAssOut; }
  if (out_procAssOut) { *out_procAssOut = _procAssOut; }
  if (out_taskGraphOut) { *out_taskGraphOut = _taskGraphOut; }
  if (out_taskDuplAssOut) { *out_taskDuplAssOut = _taskDuplAssOut; }
  if (out_threadOut) { *out_threadOut = _threadOut; }
  if (out_idcsOut) { *out_idcsOut = _idcsOut; }
  if (out_simCodeOut) { *out_simCodeOut = _simCodeOut; }
  if (out_duplSccSimEqMapOut) { *out_duplSccSimEqMapOut = _duplSccSimEqMapOut; }
  if (out_duplCompsOut) { *out_duplCompsOut = _duplCompsOut; }
  return _replOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__duplicateTasks2(threadData_t *threadData, modelica_metatype _node, modelica_metatype _allCluster, modelica_metatype _replIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _threadIn, modelica_metatype _idcsIn, modelica_metatype _taskGraphOrig, modelica_metatype _taskGraphTOrig, modelica_metatype _taskGraphIn, modelica_metatype _taskDuplAssIn, modelica_metatype _iTaskGraphMeta, modelica_metatype _simCodeIn, modelica_metatype _sccSimEqMappingIn, modelica_metatype _duplSccSimEqMapIn, modelica_metatype _duplCompsIn, modelica_metatype *out_taskAssOut, modelica_metatype *out_procAssOut, modelica_metatype *out_taskGraphOut, modelica_metatype *out_taskDuplAssOut, modelica_metatype *out_threadOut, modelica_metatype *out_idcsOut, modelica_metatype *out_simCodeOut, modelica_metatype *out_duplSccSimEqMapOut, modelica_metatype *out_duplCompsOut)
{
  modelica_integer tmp1;
  modelica_metatype _replOut = NULL;
  tmp1 = mmc_unbox_integer(_node);
  _replOut = omc_HpcOmScheduler_TDS__duplicateTasks2(threadData, tmp1, _allCluster, _replIn, _taskAssIn, _procAssIn, _threadIn, _idcsIn, _taskGraphOrig, _taskGraphTOrig, _taskGraphIn, _taskDuplAssIn, _iTaskGraphMeta, _simCodeIn, _sccSimEqMappingIn, _duplSccSimEqMapIn, _duplCompsIn, out_taskAssOut, out_procAssOut, out_taskGraphOut, out_taskDuplAssOut, out_threadOut, out_idcsOut, out_simCodeOut, out_duplSccSimEqMapOut, out_duplCompsOut);
  /* skip box _replOut; BackendVarTransform.VariableReplacements */
  /* skip box _taskAssOut; array<#Integer> */
  /* skip box _procAssOut; array<list<#Integer>> */
  /* skip box _taskGraphOut; array<list<#Integer>> */
  /* skip box _taskDuplAssOut; array<#Integer> */
  /* skip box _threadOut; list<HpcOmSimCode.Task> */
  /* skip box _idcsOut; tuple<#Integer, #Integer, #Integer, #Integer, #Integer, #Integer, #Integer, #Integer> */
  /* skip box _simCodeOut; SimCode.SimCode */
  /* skip box _duplSccSimEqMapOut; list<list<#Integer>> */
  /* skip box _duplCompsOut; list<list<#Integer>> */
  return _replOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__duplicateTasks1(threadData_t *threadData, modelica_metatype _clusterIn, modelica_metatype _allCluster, modelica_metatype _replIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _threadIn, modelica_metatype _idcsIn, modelica_metatype _taskGraphOrig, modelica_metatype _taskGraphTOrig, modelica_metatype _taskGraphIn, modelica_metatype _taskDuplAssIn, modelica_metatype _iTaskGraphMeta, modelica_metatype _simCodeIn, modelica_metatype _sccSimEqMappingIn, modelica_metatype _duplSccSimEqMapIn, modelica_metatype _duplCompsIn, modelica_metatype *out_procAssOut, modelica_metatype *out_taskGraphOut, modelica_metatype *out_taskDuplAssOut, modelica_metatype *out_threadOut, modelica_metatype *out_idcsOut, modelica_metatype *out_simCodeOut, modelica_metatype *out_duplSccSimEqMapOut, modelica_metatype *out_duplCompsOut)
{
  modelica_metatype _taskAssOut = NULL;
  modelica_metatype _procAssOut = NULL;
  modelica_metatype _taskGraphOut = NULL;
  modelica_metatype _taskDuplAssOut = NULL;
  modelica_metatype _threadOut = NULL;
  modelica_metatype _idcsOut = NULL;
  modelica_metatype _simCodeOut = NULL;
  modelica_metatype _duplSccSimEqMapOut = NULL;
  modelica_metatype _duplCompsOut = NULL;
  modelica_metatype tmpMeta[9] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskAssOut has no default value.
  // _procAssOut has no default value.
  // _taskGraphOut has no default value.
  // _taskDuplAssOut has no default value.
  // _threadOut has no default value.
  // _idcsOut has no default value.
  // _simCodeOut has no default value.
  // _duplSccSimEqMapOut has no default value.
  // _duplCompsOut has no default value.
  
  
  
  
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _clusterIn;
    {
      modelica_integer _node;
      modelica_integer _ass;
      modelica_integer _threadIdx;
      modelica_metatype _rest = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _simEqs = NULL;
      modelica_metatype _taskLst = NULL;
      modelica_metatype _origPredTasks = NULL;
      modelica_metatype _clPredTasks = NULL;
      modelica_metatype _duplPredTasks = NULL;
      modelica_metatype _clTasks = NULL;
      modelica_metatype _pos = NULL;
      modelica_metatype _duplSccSimEqMap = NULL;
      modelica_metatype _duplComps = NULL;
      modelica_metatype _simEqsLst = NULL;
      modelica_metatype _taskAss = NULL;
      modelica_metatype _taskDuplAss = NULL;
      modelica_metatype _procAss = NULL;
      modelica_metatype _inComps = NULL;
      modelica_metatype _idcs = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _task = NULL;
      modelica_metatype _taskGraph = NULL;
      modelica_metatype _simCode = NULL;
      modelica_metatype _thread = NULL;
      modelica_metatype _odes = NULL;
      modelica_metatype _simEqSysts = NULL;
      modelica_metatype _allEqs = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _ass has no default value.
      // _threadIdx has no default value.
      // _rest has no default value.
      // _comps has no default value.
      // _simEqs has no default value.
      // _taskLst has no default value.
      // _origPredTasks has no default value.
      // _clPredTasks has no default value.
      // _duplPredTasks has no default value.
      // _clTasks has no default value.
      // _pos has no default value.
      // _duplSccSimEqMap has no default value.
      // _duplComps has no default value.
      // _simEqsLst has no default value.
      // _taskAss has no default value.
      // _taskDuplAss has no default value.
      // _procAss has no default value.
      // _inComps has no default value.
      // _idcs has no default value.
      // _repl has no default value.
      // _task has no default value.
      // _taskGraph has no default value.
      // _simCode has no default value.
      // _thread has no default value.
      // _odes has no default value.
      // _simEqSysts has no default value.
      // _allEqs has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta[0+0] = _taskAssIn;
          tmpMeta[0+1] = _procAssIn;
          tmpMeta[0+2] = _taskGraphIn;
          tmpMeta[0+3] = _taskDuplAssIn;
          tmpMeta[0+4] = _threadIn;
          tmpMeta[0+5] = _idcsIn;
          tmpMeta[0+6] = _simCodeIn;
          tmpMeta[0+7] = _duplSccSimEqMapIn;
          tmpMeta[0+8] = _duplCompsIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _node = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _ass = mmc_unbox_integer(arrayGet(_taskAssIn, _node));

          /* Pattern-matching assignment */
          tmp9 = (_ass != ((modelica_integer) -1));
          if (1 /* true */ != tmp9) goto goto_2;

          _repl = omc_HpcOmScheduler_TDS__duplicateTasks2(threadData, _node, _allCluster, _replIn, _taskAssIn, _procAssIn, _threadIn, _idcsIn, _taskGraphOrig, _taskGraphTOrig, _taskGraphIn, _taskDuplAssIn, _iTaskGraphMeta, _simCodeIn, _sccSimEqMappingIn, _duplSccSimEqMapIn, _duplCompsIn ,&_taskAss ,&_procAss ,&_taskGraph ,&_taskDuplAss ,&_thread ,&_idcs ,&_simCode ,&_duplSccSimEqMap ,&_duplComps);
          tmpMeta[0+0] = omc_HpcOmScheduler_TDS__duplicateTasks1(threadData, _rest, _allCluster, _repl, _taskAss, _procAss, _thread, _idcs, _taskGraphOrig, _taskGraphTOrig, _taskGraph, _taskDuplAss, _iTaskGraphMeta, _simCode, _sccSimEqMappingIn, _duplSccSimEqMap, _duplComps, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmpMeta[0+4], &tmpMeta[0+5], &tmpMeta[0+6], &tmpMeta[0+7], &tmpMeta[0+8]);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta10 = MMC_CAR(tmp4_1);
          tmpMeta11 = MMC_CDR(tmp4_1);
          tmp12 = mmc_unbox_integer(tmpMeta10);
          _node = tmp12  /* pattern as ty=Integer */;
          _rest = tmpMeta11;
          /* Pattern matching succeeded */
          _ass = mmc_unbox_integer(arrayGet(_taskAssIn, _node));

          /* Pattern-matching assignment */
          tmp13 = (_ass == ((modelica_integer) -1));
          if (1 /* true */ != tmp13) goto goto_2;

          /* Pattern-matching assignment */
          tmpMeta14 = _idcsIn;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          _threadIdx = tmp16  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmpMeta17 = _iTaskGraphMeta;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta17), 2));
          _inComps = tmpMeta18;

          _taskAss = arrayUpdate(_taskAssIn, _node, mmc_mk_integer(_threadIdx));

          _taskLst = arrayGet(_procAssIn, _threadIdx);

          tmpMeta19 = mmc_mk_cons(mmc_mk_integer(_node), _taskLst);
          _procAss = arrayUpdate(_procAssIn, _threadIdx, tmpMeta19);

          _comps = arrayGet(_inComps, _node);

          _simEqsLst = omc_List_map1(threadData, _comps, boxvar_Array_getIndexFirst, _sccSimEqMappingIn);

          _simEqs = omc_List_flatten(threadData, _simEqsLst);

          _simEqs = listReverse(_simEqs);

          /* Pattern-matching assignment */
          tmpMeta20 = _simCodeIn;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 8));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 9));
          _allEqs = tmpMeta21;
          _odes = tmpMeta22;

          _simEqSysts = omc_List_map1(threadData, _simEqs, boxvar_SimCodeUtil_getSimEqSysForIndex, omc_List_flatten(threadData, _odes));

          _simEqSysts = omc_HpcOmScheduler_replaceInSimEqSystemLst(threadData, _simEqSysts, _replIn, NULL);

          _allEqs = omc_HpcOmScheduler_replaceSimEqSystemLstWithSameIndex(threadData, _simEqSysts, _allEqs);

          _odes = omc_List_map1r(threadData, _odes, boxvar_HpcOmScheduler_replaceSimEqSystemLstWithSameIndex, _simEqSysts);

          _simCode = omc_SimCodeUtil_replaceODEandALLequations(threadData, _allEqs, _odes, _simCodeIn);

          _clTasks = listHead(_allCluster);

          _origPredTasks = arrayGet(_taskGraphTOrig, _node);

          _clPredTasks = omc_List_intersection1OnTrue(threadData, _origPredTasks, _clTasks, boxvar_intEq ,&_origPredTasks ,NULL);

          _pos = omc_List_map1(threadData, _clPredTasks, boxvar_List_position, _clTasks);

          _clTasks = arrayGet(_procAssIn, _threadIdx);

          _clTasks = listReverse(_clTasks);

          _clPredTasks = omc_List_map1(threadData, _pos, boxvar_List_getIndexFirst, _clTasks);

          _duplPredTasks = omc_List_intersection1OnTrue(threadData, _clPredTasks, _clTasks, boxvar_intEq, NULL, NULL);

          tmpMeta23 = mmc_mk_cons(mmc_mk_integer(_node), MMC_REFSTRUCTLIT(mmc_nil));
          _taskGraph = omc_List_fold1(threadData, _duplPredTasks, boxvar_Array_appendToElement, tmpMeta23, _taskGraphIn);

          tmpMeta24 = mmc_mk_cons(mmc_mk_integer(_node), MMC_REFSTRUCTLIT(mmc_nil));
          _taskGraphOut = omc_List_fold1(threadData, _origPredTasks, boxvar_Array_appendToElement, tmpMeta24, _taskGraph);

          tmpMeta25 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_node), _OMC_LIT21, _OMC_LIT55, mmc_mk_integer(_threadIdx), _simEqs);
          _task = tmpMeta25;

          tmpMeta26 = mmc_mk_cons(_task, _threadIn);
          _thread = tmpMeta26;

          _taskDuplAss = arrayUpdate(_taskDuplAssIn, _node, mmc_mk_integer(_node));
          tmpMeta[0+0] = omc_HpcOmScheduler_TDS__duplicateTasks1(threadData, _rest, _allCluster, _replIn, _taskAss, _procAss, _thread, _idcsIn, _taskGraphOrig, _taskGraphTOrig, _taskGraph, _taskDuplAss, _iTaskGraphMeta, _simCode, _sccSimEqMappingIn, _duplSccSimEqMapIn, _duplCompsIn, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmpMeta[0+4], &tmpMeta[0+5], &tmpMeta[0+6], &tmpMeta[0+7], &tmpMeta[0+8]);
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
  _taskAssOut = tmpMeta[0+0];
  _procAssOut = tmpMeta[0+1];
  _taskGraphOut = tmpMeta[0+2];
  _taskDuplAssOut = tmpMeta[0+3];
  _threadOut = tmpMeta[0+4];
  _idcsOut = tmpMeta[0+5];
  _simCodeOut = tmpMeta[0+6];
  _duplSccSimEqMapOut = tmpMeta[0+7];
  _duplCompsOut = tmpMeta[0+8];
  _return: OMC_LABEL_UNUSED
  if (out_procAssOut) { *out_procAssOut = _procAssOut; }
  if (out_taskGraphOut) { *out_taskGraphOut = _taskGraphOut; }
  if (out_taskDuplAssOut) { *out_taskDuplAssOut = _taskDuplAssOut; }
  if (out_threadOut) { *out_threadOut = _threadOut; }
  if (out_idcsOut) { *out_idcsOut = _idcsOut; }
  if (out_simCodeOut) { *out_simCodeOut = _simCodeOut; }
  if (out_duplSccSimEqMapOut) { *out_duplSccSimEqMapOut = _duplSccSimEqMapOut; }
  if (out_duplCompsOut) { *out_duplCompsOut = _duplCompsOut; }
  return _taskAssOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__duplicateTasks(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _taskAssIn, modelica_metatype _procAssIn, modelica_metatype _idcsIn, modelica_metatype _taskGraphOrig, modelica_metatype _taskGraphTOrig, modelica_metatype _taskGraphIn, modelica_metatype _taskDuplAssIn, modelica_metatype _iTaskGraphMeta, modelica_metatype _simCodeIn, modelica_metatype _scheduleIn, modelica_metatype _sccSimEqMappingIn, modelica_metatype _duplSccSimEqMapIn, modelica_metatype _duplCompsIn, modelica_metatype *out_procAssOut, modelica_metatype *out_taskGraphOut, modelica_metatype *out_taskDuplAssOut, modelica_metatype *out_idcsOut, modelica_metatype *out_simCodeOut, modelica_metatype *out_scheduleOut, modelica_metatype *out_duplSccSimEqMapOut, modelica_metatype *out_duplCompsOut)
{
  modelica_metatype _taskAssOut = NULL;
  modelica_metatype _procAssOut = NULL;
  modelica_metatype _taskGraphOut = NULL;
  modelica_metatype _taskDuplAssOut = NULL;
  modelica_metatype _idcsOut = NULL;
  modelica_metatype _simCodeOut = NULL;
  modelica_metatype _scheduleOut = NULL;
  modelica_metatype _duplSccSimEqMapOut = NULL;
  modelica_metatype _duplCompsOut = NULL;
  modelica_metatype tmpMeta[9] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskAssOut has no default value.
  // _procAssOut has no default value.
  // _taskGraphOut has no default value.
  // _taskDuplAssOut has no default value.
  // _idcsOut has no default value.
  // _simCodeOut has no default value.
  // _scheduleOut has no default value.
  // _duplSccSimEqMapOut has no default value.
  // _duplCompsOut has no default value.
  
  
  
  
  
  
  
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _clustersIn;
    {
      modelica_integer _threadIdx;
      modelica_integer _compIdx;
      modelica_integer _simVarIdx;
      modelica_integer _simEqSysIdx;
      modelica_integer _taskIdx;
      modelica_integer _lsIdx;
      modelica_integer _nlsIdx;
      modelica_integer _mIdx;
      modelica_metatype _cluster = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _duplSccSimEqMap = NULL;
      modelica_metatype _duplComps = NULL;
      modelica_metatype _taskAss = NULL;
      modelica_metatype _taskDuplAss = NULL;
      modelica_metatype _procAss = NULL;
      modelica_metatype _idcs = NULL;
      modelica_metatype _repl = NULL;
      modelica_metatype _simCode = NULL;
      modelica_metatype _schedule = NULL;
      modelica_metatype _taskGraph = NULL;
      modelica_metatype _thread = NULL;
      modelica_metatype _outgoingDepTasks = NULL;
      modelica_metatype _threadTasks = NULL;
      modelica_metatype _allCalcTasks = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _threadIdx has no default value.
      // _compIdx has no default value.
      // _simVarIdx has no default value.
      // _simEqSysIdx has no default value.
      // _taskIdx has no default value.
      // _lsIdx has no default value.
      // _nlsIdx has no default value.
      // _mIdx has no default value.
      // _cluster has no default value.
      // _rest has no default value.
      // _duplSccSimEqMap has no default value.
      // _duplComps has no default value.
      // _taskAss has no default value.
      // _taskDuplAss has no default value.
      // _procAss has no default value.
      // _idcs has no default value.
      // _repl has no default value.
      // _simCode has no default value.
      // _schedule has no default value.
      // _taskGraph has no default value.
      // _thread has no default value.
      // _outgoingDepTasks has no default value.
      // _threadTasks has no default value.
      // _allCalcTasks has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _taskAssIn;
          tmpMeta[0+1] = _procAssIn;
          tmpMeta[0+2] = _taskGraphIn;
          tmpMeta[0+3] = _taskDuplAssIn;
          tmpMeta[0+4] = _idcsIn;
          tmpMeta[0+5] = _simCodeIn;
          tmpMeta[0+6] = _scheduleIn;
          tmpMeta[0+7] = _duplSccSimEqMapIn;
          tmpMeta[0+8] = _duplCompsIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _cluster = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _repl = omc_BackendVarTransform_emptyReplacements(threadData);

          /* Pattern-matching tuple assignment */
          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta33 = omc_HpcOmScheduler_TDS__duplicateTasks1(threadData, _cluster, _clustersIn, _repl, _taskAssIn, _procAssIn, tmpMeta32, _idcsIn, _taskGraphOrig, _taskGraphTOrig, _taskGraphIn, _taskDuplAssIn, _iTaskGraphMeta, _simCodeIn, _sccSimEqMappingIn, _duplSccSimEqMapIn, _duplCompsIn, &tmpMeta8, &tmpMeta9, &tmpMeta10, &tmpMeta11, &tmpMeta12, &tmpMeta29, &tmpMeta30, &tmpMeta31);
          _taskAss = tmpMeta33;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 1));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 2));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 3));
          tmp18 = mmc_unbox_integer(tmpMeta17);
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 4));
          tmp20 = mmc_unbox_integer(tmpMeta19);
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 5));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 6));
          tmp24 = mmc_unbox_integer(tmpMeta23);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 7));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta12), 8));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          _procAss = tmpMeta8;
          _taskGraph = tmpMeta9;
          _taskDuplAss = tmpMeta10;
          _thread = tmpMeta11;
          _threadIdx = tmp14  /* pattern as ty=Integer */;
          _taskIdx = tmp16  /* pattern as ty=Integer */;
          _compIdx = tmp18  /* pattern as ty=Integer */;
          _simVarIdx = tmp20  /* pattern as ty=Integer */;
          _simEqSysIdx = tmp22  /* pattern as ty=Integer */;
          _lsIdx = tmp24  /* pattern as ty=Integer */;
          _nlsIdx = tmp26  /* pattern as ty=Integer */;
          _mIdx = tmp28  /* pattern as ty=Integer */;
          _simCode = tmpMeta29;
          _duplSccSimEqMap = tmpMeta30;
          _duplComps = tmpMeta31;

          /* Pattern-matching assignment */
          tmpMeta34 = _simCode;
          

          /* Pattern-matching assignment */
          tmpMeta35 = _scheduleIn;
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,1,4) == 0) goto goto_2;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 3));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 5));
          _threadTasks = tmpMeta36;
          _outgoingDepTasks = tmpMeta37;
          _allCalcTasks = tmpMeta38;

          _threadTasks = arrayUpdate(_threadTasks, _threadIdx, listReverse(_thread));

          tmpMeta39 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta40 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, tmpMeta39, _allCalcTasks);
          _schedule = tmpMeta40;

          _threadIdx = ((modelica_integer) 1) + _threadIdx;

          tmpMeta41 = mmc_mk_box8(0, mmc_mk_integer(_threadIdx), mmc_mk_integer(_taskIdx), mmc_mk_integer(_compIdx), mmc_mk_integer(_simVarIdx), mmc_mk_integer(_simEqSysIdx), mmc_mk_integer(_lsIdx), mmc_mk_integer(_nlsIdx), mmc_mk_integer(_mIdx));
          _taskAss = omc_HpcOmScheduler_TDS__duplicateTasks(threadData, _rest, _taskAss, _procAss, tmpMeta41, _taskGraphOrig, _taskGraphTOrig, _taskGraph, _taskDuplAss, _iTaskGraphMeta, _simCode, _schedule, _sccSimEqMappingIn, _duplSccSimEqMap, _duplComps ,&_procAss ,&_taskGraph ,&_taskDuplAss ,&_idcs ,&_simCode ,&_schedule ,&_duplSccSimEqMap ,&_duplComps);
          tmpMeta[0+0] = _taskAssIn;
          tmpMeta[0+1] = _procAssIn;
          tmpMeta[0+2] = _taskGraph;
          tmpMeta[0+3] = _taskDuplAss;
          tmpMeta[0+4] = _idcs;
          tmpMeta[0+5] = _simCode;
          tmpMeta[0+6] = _schedule;
          tmpMeta[0+7] = _duplSccSimEqMap;
          tmpMeta[0+8] = _duplComps;
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
  _taskAssOut = tmpMeta[0+0];
  _procAssOut = tmpMeta[0+1];
  _taskGraphOut = tmpMeta[0+2];
  _taskDuplAssOut = tmpMeta[0+3];
  _idcsOut = tmpMeta[0+4];
  _simCodeOut = tmpMeta[0+5];
  _scheduleOut = tmpMeta[0+6];
  _duplSccSimEqMapOut = tmpMeta[0+7];
  _duplCompsOut = tmpMeta[0+8];
  _return: OMC_LABEL_UNUSED
  if (out_procAssOut) { *out_procAssOut = _procAssOut; }
  if (out_taskGraphOut) { *out_taskGraphOut = _taskGraphOut; }
  if (out_taskDuplAssOut) { *out_taskDuplAssOut = _taskDuplAssOut; }
  if (out_idcsOut) { *out_idcsOut = _idcsOut; }
  if (out_simCodeOut) { *out_simCodeOut = _simCodeOut; }
  if (out_scheduleOut) { *out_scheduleOut = _scheduleOut; }
  if (out_duplSccSimEqMapOut) { *out_duplSccSimEqMapOut = _duplSccSimEqMapOut; }
  if (out_duplCompsOut) { *out_duplCompsOut = _duplCompsOut; }
  return _taskAssOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__updateModelInfo(threadData_t *threadData, modelica_metatype _simCodeIn, modelica_metatype _idcs)
{
  modelica_metatype __omcQ_24mrfa_5F0 = NULL;
  modelica_metatype __omcQ_24mrfa_5F1 = NULL;
  modelica_metatype __omcQ_24mrfa_5F2 = NULL;
  modelica_metatype __omcQ_24mrfa_5F3 = NULL;
  modelica_metatype _simCodeOut = NULL;
  modelica_integer _lsIdx;
  modelica_integer _nlsIdx;
  modelica_integer _mIdx;
  modelica_metatype _modelInfo = NULL;
  modelica_metatype _varInfo = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F0 has no default value.
  // __omcQ_24mrfa_5F1 has no default value.
  // __omcQ_24mrfa_5F2 has no default value.
  // __omcQ_24mrfa_5F3 has no default value.
  _simCodeOut = _simCodeIn;
  // _lsIdx has no default value.
  // _nlsIdx has no default value.
  // _mIdx has no default value.
  // _modelInfo has no default value.
  // _varInfo has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _idcs;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 7));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 8));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  _lsIdx = tmp3  /* pattern as ty=Integer */;
  _nlsIdx = tmp5  /* pattern as ty=Integer */;
  _mIdx = tmp7  /* pattern as ty=Integer */;

  _modelInfo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeIn), 2)));

  _varInfo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 10)));

  __omcQ_24mrfa_5F0 = mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 11)))), 2)))));

  __omcQ_24mrfa_5F1 = mmc_mk_integer(listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 11)))), 4)))));

  __omcQ_24mrfa_5F2 = mmc_mk_integer(((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 24)))) == ((modelica_integer) 0))?((modelica_integer) 0):_lsIdx));

  __omcQ_24mrfa_5F3 = mmc_mk_integer(((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 25)))) == ((modelica_integer) 0))?((modelica_integer) 0):_nlsIdx));

  tmpMeta8 = mmc_mk_box(36, 3, &SimCode_VarInfo_VARINFO__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 5))), __omcQ_24mrfa_5F0, __omcQ_24mrfa_5F1, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 10))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 11))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 12))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 13))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 14))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 15))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 16))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 17))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 19))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 20))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 21))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 22))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 23))), __omcQ_24mrfa_5F2, __omcQ_24mrfa_5F3, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 26))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 27))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 28))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 29))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 30))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 31))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 32))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 33))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 34))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 35))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_varInfo), 36))));
  _varInfo = tmpMeta8;

  tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(23));
  memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_modelInfo), 23*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[10] = _varInfo;
  _modelInfo = tmpMeta9;

  tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = _modelInfo;
  _simCodeOut = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _simCodeOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumn(threadData_t *threadData, modelica_metatype _jacIn, modelica_metatype _assIn)
{
  modelica_metatype _jacOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _jacOut = _jacIn;
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(6));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_jacOut), 6*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[2] = omc_List_map1(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacOut), 2))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndex, _assIn);
  _jacOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _jacOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrix(threadData_t *threadData, modelica_metatype _jacIn, modelica_metatype _assIn)
{
  modelica_metatype _jacOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _jacOut = _jacIn;
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _jacIn;
    {
      modelica_metatype _jacMatrix = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _jacMatrix has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          
          _jacMatrix = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(17));
          memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_jacMatrix), 17*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[2] = omc_List_map1(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jacMatrix), 2))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumn, _assIn);
          _jacMatrix = tmpMeta7;
          tmpMeta1 = mmc_mk_some(_jacMatrix);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _jacIn;
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
  _jacOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _jacOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumnWithUpdate(threadData_t *threadData, modelica_metatype _jacIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut)
{
  modelica_metatype _jacOut = NULL;
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacOut has no default value.
  // _tplOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _jacIn;
    tmp4_2 = _tplIn;
    {
      modelica_metatype _simEqs = NULL;
      modelica_metatype _constEqns = NULL;
      modelica_metatype _simVars = NULL;
      modelica_integer _rowLen;
      modelica_metatype _ass = NULL;
      modelica_integer _newIdx;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _simEqs has no default value.
      // _constEqns has no default value.
      // _simVars has no default value.
      // _rowLen has no default value.
      // _ass has no default value.
      // _newIdx has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _simEqs = tmpMeta6;
          _simVars = tmpMeta7;
          _rowLen = tmp9  /* pattern as ty=Integer */;
          _constEqns = tmpMeta10;
          _newIdx = tmp12  /* pattern as ty=Integer */;
          _ass = tmpMeta13;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta18 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta19 = omc_List_mapFold(threadData, _simEqs, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta18, &tmpMeta14);
          _simEqs = tmpMeta19;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          _newIdx = tmp16  /* pattern as ty=Integer */;
          _ass = tmpMeta17;
          tmpMeta20 = mmc_mk_box5(3, &SimCode_JacobianColumn_JAC__COLUMN__desc, _simEqs, _simVars, mmc_mk_integer(_rowLen), _constEqns);
          tmpMeta21 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta[0+0] = tmpMeta20;
          tmpMeta[0+1] = tmpMeta21;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _jacIn;
          tmpMeta[0+1] = _tplIn;
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
  _jacOut = tmpMeta[0+0];
  _tplOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tplOut) { *out_tplOut = _tplOut; }
  return _jacOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrixWithUpdate(threadData_t *threadData, modelica_metatype _jacIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut)
{
  modelica_metatype _jacOut = NULL;
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacOut has no default value.
  // _tplOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _jacIn;
    tmp4_2 = _tplIn;
    {
      modelica_integer _maxCol;
      modelica_integer _jacIdx;
      modelica_integer _partIdx;
      modelica_metatype _jacCols = NULL;
      modelica_metatype _vars = NULL;
      modelica_string _name = NULL;
      modelica_metatype _sparsity = NULL;
      modelica_metatype _sparsityT = NULL;
      modelica_metatype _nonlinearPat = NULL;
      modelica_metatype _nonlinearPatT = NULL;
      modelica_metatype _colCols = NULL;
      modelica_metatype _colRows = NULL;
      modelica_metatype _ass = NULL;
      modelica_integer _newIdx;
      modelica_boolean _isAdj;
      modelica_metatype _crefToSimVarHTJacobian = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _maxCol has no default value.
      // _jacIdx has no default value.
      // _partIdx has no default value.
      // _jacCols has no default value.
      // _vars has no default value.
      // _name has no default value.
      // _sparsity has no default value.
      // _sparsityT has no default value.
      // _nonlinearPat has no default value.
      // _nonlinearPatT has no default value.
      // _colCols has no default value.
      // _colRows has no default value.
      // _ass has no default value.
      // _newIdx has no default value.
      // _isAdj has no default value.
      // _crefToSimVarHTJacobian has no default value.
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
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_integer tmp25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_integer tmp31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 5));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 8));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 9));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 10));
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 11));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 12));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 13));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 14));
          if (!listEmpty(tmpMeta22)) goto tmp3_end;
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 15));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 16));
          tmp25 = mmc_unbox_integer(tmpMeta24);
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _jacCols = tmpMeta7;
          _vars = tmpMeta8;
          _name = tmpMeta9;
          _sparsity = tmpMeta10;
          _sparsityT = tmpMeta11;
          _nonlinearPat = tmpMeta12;
          _nonlinearPatT = tmpMeta13;
          _colCols = tmpMeta14;
          _colRows = tmpMeta15;
          _maxCol = tmp17  /* pattern as ty=Integer */;
          _jacIdx = tmp19  /* pattern as ty=Integer */;
          _partIdx = tmp21  /* pattern as ty=Integer */;
          _crefToSimVarHTJacobian = tmpMeta23;
          _isAdj = tmp25  /* pattern as ty=Boolean */;
          _newIdx = tmp27  /* pattern as ty=Integer */;
          _ass = tmpMeta28;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta33 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta34 = omc_List_mapFold(threadData, _jacCols, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianColumnWithUpdate, tmpMeta33, &tmpMeta29);
          _jacCols = tmpMeta34;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 1));
          tmp31 = mmc_unbox_integer(tmpMeta30);
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          _newIdx = tmp31  /* pattern as ty=Integer */;
          _ass = tmpMeta32;
          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta36 = mmc_mk_box16(3, &SimCode_JacobianMatrix_JAC__MATRIX__desc, _jacCols, _vars, _name, _sparsity, _sparsityT, _nonlinearPat, _nonlinearPatT, _colCols, _colRows, mmc_mk_integer(_maxCol), mmc_mk_integer(_jacIdx), mmc_mk_integer(_partIdx), tmpMeta35, _crefToSimVarHTJacobian, mmc_mk_boolean(_isAdj));
          tmpMeta37 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta[0+0] = mmc_mk_some(tmpMeta36);
          tmpMeta[0+1] = tmpMeta37;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _jacIn;
          tmpMeta[0+1] = _tplIn;
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
  _jacOut = tmpMeta[0+0];
  _tplOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tplOut) { *out_tplOut = _tplOut; }
  return _jacOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate(threadData_t *threadData, modelica_metatype _simEqIn, modelica_metatype _tplIn, modelica_metatype *out_tplOut)
{
  modelica_metatype _simEqOut = NULL;
  modelica_metatype _tplOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simEqOut has no default value.
  // _tplOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _simEqIn;
    tmp4_2 = _tplIn;
    {
      modelica_integer _newIdx;
      modelica_integer _oldIdx;
      modelica_metatype _ass = NULL;
      modelica_metatype _simEqSys = NULL;
      modelica_metatype _cont = NULL;
      modelica_metatype _eqs = NULL;
      modelica_metatype _jacobianMatrix = NULL;
      modelica_metatype _nlSystem = NULL;
      modelica_metatype _lSystem = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _newIdx has no default value.
      // _oldIdx has no default value.
      // _ass has no default value.
      // _simEqSys has no default value.
      // _cont has no default value.
      // _eqs has no default value.
      // _jacobianMatrix has no default value.
      // _nlSystem has no default value.
      // _lSystem has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _simEqSys = tmp4_1;
          _nlSystem = tmpMeta6;
          _oldIdx = tmp8  /* pattern as ty=Integer */;
          _eqs = tmpMeta9;
          _jacobianMatrix = tmpMeta10;
          _newIdx = tmp12  /* pattern as ty=Integer */;
          _ass = tmpMeta13;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta18 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta19 = omc_List_mapFold(threadData, _eqs, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta18, &tmpMeta14);
          _eqs = tmpMeta19;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
          _newIdx = tmp16  /* pattern as ty=Integer */;
          _ass = tmpMeta17;

          /* Pattern-matching tuple assignment */
          tmpMeta24 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta25 = omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrixWithUpdate(threadData, _jacobianMatrix, tmpMeta24, &tmpMeta20);
          _jacobianMatrix = tmpMeta25;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 1));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta20), 2));
          _newIdx = tmp22  /* pattern as ty=Integer */;
          _ass = tmpMeta23;

          _ass = arrayUpdate(_ass, _oldIdx, mmc_mk_integer(_newIdx));

          tmpMeta26 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta26), MMC_UNTAGPTR(_nlSystem), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta26))[7] = _jacobianMatrix;
          _nlSystem = tmpMeta26;

          tmpMeta27 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta27), MMC_UNTAGPTR(_nlSystem), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta27))[2] = mmc_mk_integer(_newIdx);
          _nlSystem = tmpMeta27;

          tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_nlSystem), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[3] = _eqs;
          _nlSystem = tmpMeta28;

          tmpMeta29 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta29), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta29))[2] = _nlSystem;
          _simEqSys = tmpMeta29;
          tmpMeta30 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _newIdx), _ass);
          tmpMeta[0+0] = _simEqSys;
          tmpMeta[0+1] = tmpMeta30;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_integer tmp33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_integer tmp41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_integer tmp47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 2));
          tmp33 = mmc_unbox_integer(tmpMeta32);
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 8));
          tmpMeta35 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta31), 9));
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp37 = mmc_unbox_integer(tmpMeta36);
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _simEqSys = tmp4_1;
          _lSystem = tmpMeta31;
          _oldIdx = tmp33  /* pattern as ty=Integer */;
          _eqs = tmpMeta34;
          _jacobianMatrix = tmpMeta35;
          _newIdx = tmp37  /* pattern as ty=Integer */;
          _ass = tmpMeta38;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          /* Pattern-matching tuple assignment */
          tmpMeta43 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta44 = omc_List_mapFold(threadData, _eqs, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta43, &tmpMeta39);
          _eqs = tmpMeta44;
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 1));
          tmp41 = mmc_unbox_integer(tmpMeta40);
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
          _newIdx = tmp41  /* pattern as ty=Integer */;
          _ass = tmpMeta42;

          /* Pattern-matching tuple assignment */
          tmpMeta49 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta50 = omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrixWithUpdate(threadData, _jacobianMatrix, tmpMeta49, &tmpMeta45);
          _jacobianMatrix = tmpMeta50;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 1));
          tmp47 = mmc_unbox_integer(tmpMeta46);
          tmpMeta48 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 2));
          _newIdx = tmp47  /* pattern as ty=Integer */;
          _ass = tmpMeta48;

          _ass = arrayUpdate(_ass, _oldIdx, mmc_mk_integer(_newIdx));

          tmpMeta51 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta51), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta51))[9] = _jacobianMatrix;
          _lSystem = tmpMeta51;

          tmpMeta52 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta52), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta52))[2] = mmc_mk_integer(_newIdx);
          _lSystem = tmpMeta52;

          tmpMeta53 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta53), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta53))[8] = _eqs;
          _lSystem = tmpMeta53;

          tmpMeta54 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta54), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta54))[2] = _lSystem;
          _simEqSys = tmpMeta54;
          tmpMeta55 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _newIdx), _ass);
          tmpMeta[0+0] = _simEqSys;
          tmpMeta[0+1] = tmpMeta55;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta56;
          modelica_integer tmp57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_integer tmp61;
          modelica_metatype tmpMeta62;
          modelica_metatype tmpMeta63;
          modelica_metatype tmpMeta64;
          modelica_integer tmp65;
          modelica_metatype tmpMeta66;
          modelica_metatype tmpMeta67;
          modelica_metatype tmpMeta68;
          modelica_metatype tmpMeta69;
          modelica_metatype tmpMeta70;
          modelica_integer tmp71;
          modelica_metatype tmpMeta72;
          modelica_metatype tmpMeta73;
          modelica_metatype tmpMeta74;
          modelica_metatype tmpMeta75;
          modelica_metatype tmpMeta76;
          modelica_metatype tmpMeta77;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,14,6) == 0) goto tmp3_end;
          tmpMeta56 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp57 = mmc_unbox_integer(tmpMeta56);
          tmpMeta58 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta59 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp61 = mmc_unbox_integer(tmpMeta60);
          tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _simEqSys = tmp4_1;
          _oldIdx = tmp57  /* pattern as ty=Integer */;
          _cont = tmpMeta58;
          _eqs = tmpMeta59;
          _newIdx = tmp61  /* pattern as ty=Integer */;
          _ass = tmpMeta62;
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta67 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta68 = omc_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate(threadData, _cont, tmpMeta67, &tmpMeta63);
          _cont = tmpMeta68;
          tmpMeta64 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 1));
          tmp65 = mmc_unbox_integer(tmpMeta64);
          tmpMeta66 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta63), 2));
          _newIdx = tmp65  /* pattern as ty=Integer */;
          _ass = tmpMeta66;

          /* Pattern-matching tuple assignment */
          tmpMeta73 = mmc_mk_box2(0, mmc_mk_integer(_newIdx), _ass);
          tmpMeta74 = omc_List_mapFold(threadData, _eqs, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta73, &tmpMeta69);
          _eqs = tmpMeta74;
          tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta69), 1));
          tmp71 = mmc_unbox_integer(tmpMeta70);
          tmpMeta72 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta69), 2));
          _newIdx = tmp71  /* pattern as ty=Integer */;
          _ass = tmpMeta72;

          _ass = arrayUpdate(_ass, _oldIdx, mmc_mk_integer(_newIdx));

          tmpMeta75 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta75), MMC_UNTAGPTR(_simEqSys), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta75))[3] = _cont;
          _simEqSys = tmpMeta75;

          tmpMeta76 = MMC_TAGPTR(mmc_alloc_words(8));
          memcpy(MMC_UNTAGPTR(tmpMeta76), MMC_UNTAGPTR(_simEqSys), 8*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta76))[5] = _eqs;
          _simEqSys = tmpMeta76;
          tmpMeta77 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _newIdx), _ass);
          tmpMeta[0+0] = _simEqSys;
          tmpMeta[0+1] = tmpMeta77;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta78;
          modelica_integer tmp79;
          modelica_metatype tmpMeta80;
          modelica_metatype tmpMeta81;
          tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp79 = mmc_unbox_integer(tmpMeta78);
          tmpMeta80 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          _newIdx = tmp79  /* pattern as ty=Integer */;
          _ass = tmpMeta80;
          /* Pattern matching succeeded */
          _oldIdx = omc_SimCodeUtil_simEqSystemIndex(threadData, _simEqIn);

          _ass = arrayUpdate(_ass, _oldIdx, mmc_mk_integer(_newIdx));

          _simEqSys = omc_SimCodeUtil_replaceSimEqSysIndex(threadData, _simEqIn, _newIdx);
          tmpMeta81 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _newIdx), _ass);
          tmpMeta[0+0] = _simEqSys;
          tmpMeta[0+1] = tmpMeta81;
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _simEqOut = tmpMeta[0+0];
  _tplOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_tplOut) { *out_tplOut = _tplOut; }
  return _simEqOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIndex(threadData_t *threadData, modelica_metatype _simEqIn, modelica_metatype _assIn)
{
  modelica_metatype _simEqOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simEqOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _simEqIn;
    {
      modelica_integer _newIdx;
      modelica_integer _oldIdx;
      modelica_metatype _eqs = NULL;
      modelica_metatype _jacobianMatrix = NULL;
      modelica_metatype _simEqSys = NULL;
      modelica_metatype _nlSystem = NULL;
      modelica_metatype _lSystem = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _newIdx has no default value.
      // _oldIdx has no default value.
      // _eqs has no default value.
      // _jacobianMatrix has no default value.
      // _simEqSys has no default value.
      // _nlSystem has no default value.
      // _lSystem has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,13,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
          
          _simEqSys = tmp4_1;
          _nlSystem = tmpMeta6;
          _eqs = tmpMeta7;
          _jacobianMatrix = tmpMeta8;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _eqs = omc_List_map1(threadData, _eqs, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndex, _assIn);

          _oldIdx = omc_SimCodeUtil_simEqSystemIndex(threadData, _simEqIn);

          _newIdx = mmc_unbox_integer(arrayGet(_assIn, _oldIdx));

          _jacobianMatrix = omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrix(threadData, _jacobianMatrix, _assIn);

          tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_nlSystem), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[7] = _jacobianMatrix;
          _nlSystem = tmpMeta9;

          tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_nlSystem), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[2] = mmc_mk_integer(_newIdx);
          _nlSystem = tmpMeta10;

          tmpMeta11 = MMC_TAGPTR(mmc_alloc_words(12));
          memcpy(MMC_UNTAGPTR(tmpMeta11), MMC_UNTAGPTR(_nlSystem), 12*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta11))[3] = _eqs;
          _nlSystem = tmpMeta11;

          tmpMeta12 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta12), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta12))[2] = _nlSystem;
          _simEqSys = tmpMeta12;
          tmpMeta1 = _simEqSys;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,12,3) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 8));
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 9));
          
          _simEqSys = tmp4_1;
          _lSystem = tmpMeta13;
          _eqs = tmpMeta14;
          _jacobianMatrix = tmpMeta15;
          /* Pattern matching succeeded */
          _eqs = omc_List_map1(threadData, _eqs, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndex, _assIn);

          _oldIdx = omc_SimCodeUtil_simEqSystemIndex(threadData, _simEqIn);

          _newIdx = mmc_unbox_integer(arrayGet(_assIn, _oldIdx));

          _jacobianMatrix = omc_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrix(threadData, _jacobianMatrix, _assIn);

          tmpMeta16 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta16), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta16))[9] = _jacobianMatrix;
          _lSystem = tmpMeta16;

          tmpMeta17 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta17), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta17))[2] = mmc_mk_integer(_newIdx);
          _lSystem = tmpMeta17;

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(14));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_lSystem), 14*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[8] = _eqs;
          _lSystem = tmpMeta18;

          tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(5));
          memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_simEqSys), 5*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[2] = _lSystem;
          _simEqSys = tmpMeta19;
          tmpMeta1 = _simEqSys;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          _oldIdx = omc_SimCodeUtil_simEqSystemIndex(threadData, _simEqIn);

          _newIdx = mmc_unbox_integer(arrayGet(_assIn, _oldIdx));
          tmpMeta1 = omc_SimCodeUtil_replaceSimEqSysIndex(threadData, _simEqIn, _newIdx);
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
  _simEqOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _simEqOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__assignNewSimEqSysIdxs(threadData_t *threadData, modelica_metatype _simCodeIn, modelica_metatype _idxAssIn, modelica_metatype *out_idxAssOut)
{
  modelica_metatype __omcQ_24mrfa_5F4 = NULL;
  modelica_metatype __omcQ_24mrfa_5F5 = NULL;
  modelica_metatype __omcQ_24mrfa_5F6 = NULL;
  modelica_metatype __omcQ_24mrfa_5F7 = NULL;
  modelica_metatype _simCodeOut = NULL;
  modelica_metatype _idxAssOut = NULL;
  modelica_metatype _modelInfo = NULL;
  modelica_metatype _varInfo = NULL;
  modelica_metatype _jacObts = NULL;
  modelica_metatype _eqs = NULL;
  modelica_integer _idx;
  modelica_metatype _ass = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_integer tmp24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_integer tmp31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_integer tmp38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  modelica_metatype tmpMeta42;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_integer tmp45;
  modelica_metatype tmpMeta46;
  modelica_metatype tmpMeta47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_metatype tmpMeta50;
  modelica_metatype tmpMeta51;
  modelica_integer tmp52;
  modelica_metatype tmpMeta53;
  modelica_metatype tmpMeta54;
  modelica_metatype tmpMeta55;
  modelica_metatype tmpMeta56;
  modelica_metatype tmpMeta57;
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  modelica_metatype tmpMeta60;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // __omcQ_24mrfa_5F4 has no default value.
  // __omcQ_24mrfa_5F5 has no default value.
  // __omcQ_24mrfa_5F6 has no default value.
  // __omcQ_24mrfa_5F7 has no default value.
  _simCodeOut = _simCodeIn;
  // _idxAssOut has no default value.
  // _modelInfo has no default value.
  // _varInfo has no default value.
  // _jacObts has no default value.
  // _eqs has no default value.
  // _idx has no default value.
  // _ass has no default value.
  _modelInfo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 2)));

  _varInfo = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_modelInfo), 10)));

  /* Pattern-matching tuple assignment */
  tmpMeta5 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1)), _idxAssIn);
  tmpMeta6 = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 12))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta5, &tmpMeta1);
  _eqs = tmpMeta6;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _idx = tmp3  /* pattern as ty=Integer */;
  _ass = tmpMeta4;

  tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[12] = _eqs;
  _simCodeOut = tmpMeta7;

  /* Pattern-matching tuple assignment */
  tmpMeta12 = mmc_mk_box2(0, mmc_mk_integer(_idx), _ass);
  tmpMeta13 = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 8))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta12, &tmpMeta8);
  _eqs = tmpMeta13;
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 1));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
  _idx = tmp10  /* pattern as ty=Integer */;
  _ass = tmpMeta11;

  tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[8] = _eqs;
  _simCodeOut = tmpMeta14;

  /* Pattern-matching tuple assignment */
  tmpMeta19 = mmc_mk_box2(0, mmc_mk_integer(_idx), _ass);
  tmpMeta20 = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 15))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta19, &tmpMeta15);
  _eqs = tmpMeta20;
  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 1));
  tmp17 = mmc_unbox_integer(tmpMeta16);
  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
  _idx = tmp17  /* pattern as ty=Integer */;
  _ass = tmpMeta18;

  tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[15] = _eqs;
  _simCodeOut = tmpMeta21;

  /* Pattern-matching tuple assignment */
  tmpMeta26 = mmc_mk_box2(0, mmc_mk_integer(_idx), _ass);
  tmpMeta27 = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 16))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta26, &tmpMeta22);
  _eqs = tmpMeta27;
  tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 1));
  tmp24 = mmc_unbox_integer(tmpMeta23);
  tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta22), 2));
  _idx = tmp24  /* pattern as ty=Integer */;
  _ass = tmpMeta25;

  tmpMeta28 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta28), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta28))[16] = _eqs;
  _simCodeOut = tmpMeta28;

  /* Pattern-matching tuple assignment */
  tmpMeta33 = mmc_mk_box2(0, mmc_mk_integer(_idx), _ass);
  tmpMeta34 = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 17))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta33, &tmpMeta29);
  _eqs = tmpMeta34;
  tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 1));
  tmp31 = mmc_unbox_integer(tmpMeta30);
  tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
  _idx = tmp31  /* pattern as ty=Integer */;
  _ass = tmpMeta32;

  tmpMeta35 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta35), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta35))[17] = _eqs;
  _simCodeOut = tmpMeta35;

  /* Pattern-matching tuple assignment */
  tmpMeta40 = mmc_mk_box2(0, mmc_mk_integer(_idx), _ass);
  tmpMeta41 = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 18))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta40, &tmpMeta36);
  _eqs = tmpMeta41;
  tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 1));
  tmp38 = mmc_unbox_integer(tmpMeta37);
  tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 2));
  _idx = tmp38  /* pattern as ty=Integer */;
  _ass = tmpMeta39;

  tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[18] = _eqs;
  _simCodeOut = tmpMeta42;

  /* Pattern-matching tuple assignment */
  tmpMeta47 = mmc_mk_box2(0, mmc_mk_integer(_idx), _ass);
  tmpMeta48 = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 19))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta47, &tmpMeta43);
  _eqs = tmpMeta48;
  tmpMeta44 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 1));
  tmp45 = mmc_unbox_integer(tmpMeta44);
  tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta43), 2));
  _idx = tmp45  /* pattern as ty=Integer */;
  _ass = tmpMeta46;

  tmpMeta49 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta49), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta49))[19] = _eqs;
  _simCodeOut = tmpMeta49;

  /* Pattern-matching tuple assignment */
  tmpMeta54 = mmc_mk_box2(0, mmc_mk_integer(_idx), _ass);
  tmpMeta55 = omc_List_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 21))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndexWithUpdate, tmpMeta54, &tmpMeta50);
  _eqs = tmpMeta55;
  tmpMeta51 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 1));
  tmp52 = mmc_unbox_integer(tmpMeta51);
  tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta50), 2));
  _idx = tmp52  /* pattern as ty=Integer */;
  _ass = tmpMeta53;

  __omcQ_24mrfa_5F4 = _eqs;

  __omcQ_24mrfa_5F5 = omc_List_map1List(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 9))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndex, _ass);

  __omcQ_24mrfa_5F6 = omc_List_map1List(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 10))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndex, _ass);

  __omcQ_24mrfa_5F7 = omc_List_map1(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 22))), boxvar_HpcOmScheduler_TDS__replaceSimEqSysIndex, _ass);

  tmpMeta56 = mmc_mk_box(53, 3, &SimCode_SimCode_SIMCODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 4))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 8))), __omcQ_24mrfa_5F5, __omcQ_24mrfa_5F6, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 11))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 12))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 13))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 14))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 15))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 16))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 17))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 18))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 19))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 20))), __omcQ_24mrfa_5F4, __omcQ_24mrfa_5F7, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 23))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 24))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 25))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 26))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 27))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 28))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 29))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 30))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 31))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 32))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 33))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 34))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 35))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 36))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 37))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 38))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 39))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 40))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 41))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 42))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 43))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 44))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 45))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 46))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 47))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 48))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 49))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 50))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 51))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 52))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 53))));
  _simCodeOut = tmpMeta56;

  _jacObts = omc_List_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCodeOut), 35))), boxvar_Util_makeOption);

  _jacObts = omc_List_map1(threadData, _jacObts, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxInJacobianMatrix, _ass);

  tmpMeta57 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta57), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta57))[35] = omc_List_map(threadData, _jacObts, boxvar_Util_getOption);
  _simCodeOut = tmpMeta57;

  tmpMeta58 = MMC_TAGPTR(mmc_alloc_words(37));
  memcpy(MMC_UNTAGPTR(tmpMeta58), MMC_UNTAGPTR(_varInfo), 37*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta58))[23] = mmc_mk_integer(_idx);
  _varInfo = tmpMeta58;

  tmpMeta59 = MMC_TAGPTR(mmc_alloc_words(23));
  memcpy(MMC_UNTAGPTR(tmpMeta59), MMC_UNTAGPTR(_modelInfo), 23*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta59))[10] = _varInfo;
  _modelInfo = tmpMeta59;

  tmpMeta60 = MMC_TAGPTR(mmc_alloc_words(54));
  memcpy(MMC_UNTAGPTR(tmpMeta60), MMC_UNTAGPTR(_simCodeOut), 54*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta60))[2] = _modelInfo;
  _simCodeOut = tmpMeta60;

  _idxAssOut = _ass;
  _return: OMC_LABEL_UNUSED
  if (out_idxAssOut) { *out_idxAssOut = _idxAssOut; }
  return _simCodeOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTaskLst(threadData_t *threadData, modelica_metatype _taskLstIn, modelica_metatype _assIn)
{
  modelica_metatype _taskLstOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskLstOut has no default value.
  _taskLstOut = omc_List_map1(threadData, _taskLstIn, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTask, _assIn);
  _return: OMC_LABEL_UNUSED
  return _taskLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTask(threadData_t *threadData, modelica_metatype _taskIn, modelica_metatype _assIn)
{
  modelica_metatype _taskOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _taskIn;
    {
      modelica_integer _weighting;
      modelica_integer _index;
      modelica_integer _threadIdx;
      modelica_real _calcTime;
      modelica_real _timeFinished;
      modelica_metatype _eqIdc = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _weighting has no default value.
      // _index has no default value.
      // _threadIdx has no default value.
      // _calcTime has no default value.
      // _timeFinished has no default value.
      // _eqIdc has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_real tmp11;
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp11 = mmc_unbox_real(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp13 = mmc_unbox_real(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _weighting = tmp7  /* pattern as ty=Integer */;
          _index = tmp9  /* pattern as ty=Integer */;
          _calcTime = tmp11  /* pattern as ty=Real */;
          _timeFinished = tmp13  /* pattern as ty=Real */;
          _threadIdx = tmp15  /* pattern as ty=Integer */;
          _eqIdc = tmpMeta16;
          /* Pattern matching succeeded */
          _eqIdc = omc_List_map1(threadData, _eqIdc, boxvar_Array_getIndexFirst, _assIn);
          tmpMeta17 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_timeFinished), mmc_mk_integer(_threadIdx), _eqIdc);
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _taskIn;
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
  _taskOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _taskOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__replaceSimEqSysIdxsInSchedule(threadData_t *threadData, modelica_metatype _scheduleIn, modelica_metatype _assIn)
{
  modelica_metatype _scheduleOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _scheduleOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _scheduleIn;
    {
      modelica_metatype _threadTasks = NULL;
      modelica_metatype _outgoingDepTasks = NULL;
      modelica_metatype _scheduledTasks = NULL;
      modelica_metatype _allCalcTasks = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _threadTasks has no default value.
      // _outgoingDepTasks has no default value.
      // _scheduledTasks has no default value.
      // _allCalcTasks has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _threadTasks = tmpMeta6;
          _outgoingDepTasks = tmpMeta7;
          _scheduledTasks = tmpMeta8;
          _allCalcTasks = tmpMeta9;
          /* Pattern matching succeeded */
          _scheduledTasks = omc_List_map1(threadData, _scheduledTasks, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTask, _assIn);

          _threadTasks = omc_Array_map1(threadData, _threadTasks, boxvar_HpcOmScheduler_TDS__replaceSimEqSysIdxsInTaskLst, _assIn);
          tmpMeta10 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, _scheduledTasks, _allCalcTasks);
          tmpMeta1 = tmpMeta10;
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
  _scheduleOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _scheduleOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_TDS__schedule1(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _TDSLevel, modelica_integer _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimCode, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _oSimCode = NULL;
  modelica_metatype _oTaskGraph = NULL;
  modelica_metatype _oTaskGraphMeta = NULL;
  modelica_metatype _oSccSimEqMapping = NULL;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _oSimCode has no default value.
  // _oTaskGraph has no default value.
  // _oTaskGraphMeta has no default value.
  // _oSccSimEqMapping has no default value.
  
  
  
  
  
  { /* matchcontinue expression */
    {
      modelica_integer _sizeTasks;
      modelica_integer _numDupl;
      modelica_integer _threadIdx;
      modelica_integer _compIdx;
      modelica_integer _simVarIdx;
      modelica_integer _simEqSysIdx;
      modelica_integer _taskIdx;
      modelica_integer _lsIdx;
      modelica_integer _nlsIdx;
      modelica_integer _mIdx;
      modelica_metatype _taskAss = NULL;
      modelica_metatype _taskDuplAss = NULL;
      modelica_metatype _nodeMark = NULL;
      modelica_metatype _newIdxAss = NULL;
      modelica_metatype _procAss = NULL;
      modelica_metatype _sccSimEqMap = NULL;
      modelica_metatype _inComps = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _exeCosts = NULL;
      modelica_metatype _commCosts = NULL;
      modelica_metatype _varCompMapping = NULL;
      modelica_metatype _eqCompMapping = NULL;
      modelica_metatype _idcs = NULL;
      modelica_metatype _compNames = NULL;
      modelica_metatype _compDescs = NULL;
      modelica_metatype _clusters = NULL;
      modelica_metatype _duplSccSimEqMap = NULL;
      modelica_metatype _duplComps = NULL;
      modelica_metatype _schedule = NULL;
      modelica_metatype _taskGraph = NULL;
      modelica_metatype _taskGraphT = NULL;
      modelica_metatype _meta = NULL;
      modelica_metatype _simCode = NULL;
      modelica_metatype _simVars = NULL;
      modelica_metatype _algVars = NULL;
      modelica_metatype _threadTask = NULL;
      modelica_metatype _odes = NULL;
      modelica_metatype _allCalcTasks = NULL;
      modelica_metatype _compParamMapping = NULL;
      modelica_metatype _compInformations = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _sizeTasks has no default value.
      // _numDupl has no default value.
      // _threadIdx has no default value.
      // _compIdx has no default value.
      // _simVarIdx has no default value.
      // _simEqSysIdx has no default value.
      // _taskIdx has no default value.
      // _lsIdx has no default value.
      // _nlsIdx has no default value.
      // _mIdx has no default value.
      // _taskAss has no default value.
      // _taskDuplAss has no default value.
      // _nodeMark has no default value.
      // _newIdxAss has no default value.
      // _procAss has no default value.
      // _sccSimEqMap has no default value.
      // _inComps has no default value.
      // _comps has no default value.
      // _exeCosts has no default value.
      // _commCosts has no default value.
      // _varCompMapping has no default value.
      // _eqCompMapping has no default value.
      // _idcs has no default value.
      // _compNames has no default value.
      // _compDescs has no default value.
      // _clusters has no default value.
      // _duplSccSimEqMap has no default value.
      // _duplComps has no default value.
      // _schedule has no default value.
      // _taskGraph has no default value.
      // _taskGraphT has no default value.
      // _meta has no default value.
      // _simCode has no default value.
      // _simVars has no default value.
      // _algVars has no default value.
      // _threadTask has no default value.
      // _odes has no default value.
      // _allCalcTasks has no default value.
      // _compParamMapping has no default value.
      // _compInformations has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (listLength(_clustersIn) < _numProc);
          if (1 /* true */ != tmp6) goto goto_2;

          fputs(MMC_STRINGDATA(_OMC_LIT85),stdout);

          _clusters = omc_List_map(threadData, _clustersIn, boxvar_listReverse);

          omc_FlagsUtil_setConfigInt(threadData, _OMC_LIT92, listLength(_clustersIn));
          tmpMeta[0+0] = omc_HpcOmScheduler_TDS__schedule1(threadData, _clusters, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _TDSLevel, listLength(_clustersIn), _iSccSimEqMapping, _iSimCode, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = (listLength(_clustersIn) > _numProc);
          if (1 /* true */ != tmp7) goto goto_2;

          _clusters = omc_HpcOmScheduler_TDS__CompactClusters(threadData, _clustersIn, _iTaskGraph, _iTaskGraphMeta, _TDSLevel, _numProc);
          tmpMeta[0+0] = omc_HpcOmScheduler_TDS__schedule1(threadData, _clusters, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _TDSLevel, _numProc, _iSccSimEqMapping, _iSimCode, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 2: {
          modelica_boolean tmp8;
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
          modelica_integer tmp34;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (listLength(_clustersIn) == _numProc);
          if (1 /* true */ != tmp8) goto goto_2;

          _clusters = omc_List_map1(threadData, _clustersIn, boxvar_HpcOmScheduler_TDS__SortCompactClusters, _TDSLevel);

          /* Pattern-matching assignment */
          tmpMeta9 = _iSimCode;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 11));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 9));
          _simVars = tmpMeta11;
          _odes = tmpMeta12;

          /* Pattern-matching assignment */
          tmpMeta13 = _simVars;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 4));
          _algVars = tmpMeta14;

          /* Pattern-matching assignment */
          tmpMeta15 = _iTaskGraphMeta;
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 3));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 4));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 5));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 6));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 7));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 8));
          tmpMeta23 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 9));
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 10));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta15), 11));
          _inComps = tmpMeta16;
          _varCompMapping = tmpMeta17;
          _eqCompMapping = tmpMeta18;
          _compParamMapping = tmpMeta19;
          _compNames = tmpMeta20;
          _compDescs = tmpMeta21;
          _exeCosts = tmpMeta22;
          _commCosts = tmpMeta23;
          _nodeMark = tmpMeta24;
          _compInformations = tmpMeta25;

          _sizeTasks = mmc_unbox_integer(omc_List_fold(threadData, omc_List_map(threadData, _clusters, boxvar_listLength), boxvar_intAdd, mmc_mk_integer(((modelica_integer) 0))));

          _taskAss = arrayCreate(_sizeTasks, mmc_mk_integer(((modelica_integer) -1)));

          tmpMeta26 = MMC_REFSTRUCTLIT(mmc_nil);
          _procAss = arrayCreate(listLength(_clusters), tmpMeta26);

          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          _taskGraph = arrayCreate(_sizeTasks, tmpMeta27);

          _taskDuplAss = arrayCreate(_sizeTasks, mmc_mk_integer(((modelica_integer) -1)));

          tmpMeta28 = MMC_REFSTRUCTLIT(mmc_nil);
          _threadTask = arrayCreate(_numProc, tmpMeta28);

          _allCalcTasks = arrayCreate(_sizeTasks, _OMC_LIT93);

          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta31 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTask, tmpMeta29, tmpMeta30, _allCalcTasks);
          _schedule = tmpMeta31;

          tmpMeta32 = MMC_REFSTRUCTLIT(mmc_nil);
          _duplSccSimEqMap = tmpMeta32;

          tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
          _duplComps = tmpMeta33;

          _threadIdx = ((modelica_integer) 1);

          _compIdx = ((modelica_integer) 1) + arrayLength(_iSccSimEqMapping);

          _taskIdx = ((modelica_integer) 1) + arrayLength(_iTaskGraph);

          {
            modelica_integer __omcQ_24tmpVar3;
            modelica_integer __omcQ_24tmpVar2;
            modelica_integer tmp35;
            modelica_metatype _v_loopVar = 0;
            modelica_metatype _v;
            _v_loopVar = _algVars;
            __omcQ_24tmpVar3 = ((modelica_integer) -4611686018427387903); /* defaultValue */
            while(1) {
              tmp35 = 1;
              if (!listEmpty(_v_loopVar)) {
                _v = MMC_CAR(_v_loopVar);
                _v_loopVar = MMC_CDR(_v_loopVar);
                tmp35--;
              }
              if (tmp35 == 0) {
                __omcQ_24tmpVar2 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_v), 7))));
                __omcQ_24tmpVar3 = modelica_integer_max((modelica_integer)(__omcQ_24tmpVar2),(modelica_integer)(__omcQ_24tmpVar3));
              } else if (tmp35 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmp34 = __omcQ_24tmpVar3;
          }
          _simVarIdx = ((modelica_integer) 1) + tmp34;

          _simEqSysIdx = ((modelica_integer) 1) + omc_SimCodeUtil_getMaxSimEqSystemIndex(threadData, _iSimCode);

          _lsIdx = ((modelica_integer) 1) + mmc_unbox_integer(omc_List_fold(threadData, omc_List_map(threadData, omc_List_flatten(threadData, _odes), boxvar_SimCodeUtil_getLSindex), boxvar_intMax, mmc_mk_integer(((modelica_integer) 0))));

          _nlsIdx = ((modelica_integer) 1) + mmc_unbox_integer(omc_List_fold(threadData, omc_List_map(threadData, omc_List_flatten(threadData, _odes), boxvar_SimCodeUtil_getNLSindex), boxvar_intMax, mmc_mk_integer(((modelica_integer) 0))));

          _mIdx = ((modelica_integer) 1) + mmc_unbox_integer(omc_List_fold(threadData, omc_List_map(threadData, omc_List_flatten(threadData, _odes), boxvar_SimCodeUtil_getMixedindex), boxvar_intMax, mmc_mk_integer(((modelica_integer) 0))));

          tmpMeta36 = mmc_mk_box8(0, mmc_mk_integer(_threadIdx), mmc_mk_integer(_taskIdx), mmc_mk_integer(_compIdx), mmc_mk_integer(_simVarIdx), mmc_mk_integer(_simEqSysIdx), mmc_mk_integer(_lsIdx), mmc_mk_integer(_nlsIdx), mmc_mk_integer(_mIdx));
          _taskAss = omc_HpcOmScheduler_TDS__duplicateTasks(threadData, _clusters, _taskAss, _procAss, tmpMeta36, _iTaskGraph, _iTaskGraphT, _taskGraph, _taskDuplAss, _iTaskGraphMeta, _iSimCode, _schedule, _iSccSimEqMapping, _duplSccSimEqMap, _duplComps ,&_procAss ,&_taskGraph ,&_taskDuplAss ,&_idcs ,&_simCode ,&_schedule ,&_duplSccSimEqMap ,&_duplComps);

          _simCode = omc_HpcOmScheduler_TDS__updateModelInfo(threadData, _simCode, _idcs);

          _numDupl = mmc_unbox_integer(omc_List_fold(threadData, omc_List_map(threadData, _duplComps, boxvar_listLength), boxvar_intAdd, mmc_mk_integer(((modelica_integer) 0))));

          _procAss = omc_Array_map(threadData, _procAss, boxvar_listReverse);

          _sccSimEqMap = arrayAppend(_iSccSimEqMapping, listArray(listReverse(_duplSccSimEqMap)));

          _comps = arrayAppend(_inComps, listArray(listReverse(_duplComps)));

          _varCompMapping = arrayAppend(_varCompMapping, arrayCreate(_numDupl, _OMC_LIT94));

          _eqCompMapping = arrayAppend(_eqCompMapping, arrayCreate(_numDupl, _OMC_LIT94));

          tmpMeta37 = MMC_REFSTRUCTLIT(mmc_nil);
          _compParamMapping = arrayAppend(_compParamMapping, arrayCreate(_numDupl, tmpMeta37));

          _compNames = arrayAppend(_compNames, arrayCreate(_numDupl, _OMC_LIT95));

          _compDescs = arrayAppend(_compDescs, arrayCreate(_numDupl, _OMC_LIT95));

          _exeCosts = arrayAppend(_exeCosts, arrayCreate(_numDupl, _OMC_LIT97));

          _nodeMark = arrayAppend(_nodeMark, arrayCreate(_numDupl, mmc_mk_integer(((modelica_integer) -1))));

          tmpMeta38 = mmc_mk_box11(3, &HpcOmTaskGraph_TaskGraphMeta_TASKGRAPHMETA__desc, _comps, _varCompMapping, _eqCompMapping, _compParamMapping, _compNames, _compDescs, _exeCosts, _commCosts, _nodeMark, _compInformations);
          _meta = tmpMeta38;

          _newIdxAss = arrayCreate(omc_SimCodeUtil_getMaxSimEqSystemIndex(threadData, _simCode), mmc_mk_integer(((modelica_integer) -1)));

          _simCode = omc_HpcOmScheduler_TDS__assignNewSimEqSysIdxs(threadData, _simCode, _newIdxAss ,&_newIdxAss);

          _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _taskGraph, arrayLength(_taskGraph));

          _schedule = omc_HpcOmScheduler_insertLocksInSchedule(threadData, _schedule, _taskGraph, _taskGraphT, _taskAss, _procAss, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);

          _schedule = omc_HpcOmScheduler_TDS__replaceSimEqSysIdxsInSchedule(threadData, _schedule, _newIdxAss);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _simCode;
          tmpMeta[0+2] = _taskGraph;
          tmpMeta[0+3] = _meta;
          tmpMeta[0+4] = _sccSimEqMap;
          goto tmp3_done;
        }
        case 3: {
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT98),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oSchedule = tmpMeta[0+0];
  _oSimCode = tmpMeta[0+1];
  _oTaskGraph = tmpMeta[0+2];
  _oTaskGraphMeta = tmpMeta[0+3];
  _oSccSimEqMapping = tmpMeta[0+4];
  _return: OMC_LABEL_UNUSED
  if (out_oSimCode) { *out_oSimCode = _oSimCode; }
  if (out_oTaskGraph) { *out_oTaskGraph = _oTaskGraph; }
  if (out_oTaskGraphMeta) { *out_oTaskGraphMeta = _oTaskGraphMeta; }
  if (out_oSccSimEqMapping) { *out_oSccSimEqMapping = _oSccSimEqMapping; }
  return _oSchedule;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_TDS__schedule1(threadData_t *threadData, modelica_metatype _clustersIn, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _TDSLevel, modelica_metatype _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimCode, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_numProc);
  _oSchedule = omc_HpcOmScheduler_TDS__schedule1(threadData, _clustersIn, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _TDSLevel, tmp1, _iSccSimEqMapping, _iSimCode, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, out_oSimCode, out_oTaskGraph, out_oTaskGraphMeta, out_oSccSimEqMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  /* skip box _oSimCode; SimCode.SimCode */
  /* skip box _oTaskGraph; array<list<#Integer>> */
  /* skip box _oTaskGraphMeta; HpcOmTaskGraph.TaskGraphMeta */
  /* skip box _oSccSimEqMapping; array<list<#Integer>> */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_insertLocksInSchedule1(threadData_t *threadData, modelica_metatype _threadsIn, modelica_metatype _iTaskGraphTransposed, modelica_metatype _taskProcAss, modelica_metatype _iAllCalcTasks, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _foldIn)
{
  modelica_metatype _foldOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _foldOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;modelica_metatype tmp4_4;
    tmp4_1 = _threadsIn;
    tmp4_2 = _iTaskGraphTransposed;
    tmp4_3 = _taskProcAss;
    tmp4_4 = _foldIn;
    {
      modelica_metatype _iTaskGraph = NULL;
      modelica_metatype _iTaskGraphT = NULL;
      modelica_integer _idx;
      modelica_integer _thr;
      modelica_metatype _preds = NULL;
      modelica_metatype _succs = NULL;
      modelica_metatype _predThr = NULL;
      modelica_metatype _succThr = NULL;
      modelica_metatype _thread = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _relLocks = NULL;
      modelica_metatype _assLocks = NULL;
      modelica_metatype _tasks = NULL;
      modelica_metatype _threads = NULL;
      modelica_metatype _task = NULL;
      modelica_metatype _outgoingDepTasks = NULL;
      modelica_metatype _taskAss = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _iTaskGraph has no default value.
      // _iTaskGraphT has no default value.
      // _idx has no default value.
      // _thr has no default value.
      // _preds has no default value.
      // _succs has no default value.
      // _predThr has no default value.
      // _succThr has no default value.
      // _thread has no default value.
      // _rest has no default value.
      // _relLocks has no default value.
      // _assLocks has no default value.
      // _tasks has no default value.
      // _threads has no default value.
      // _task has no default value.
      // _outgoingDepTasks has no default value.
      // _taskAss has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 1));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 2));
          _threads = tmpMeta6;
          _outgoingDepTasks = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta8 = mmc_mk_cons(tmpMeta9, _threads);
          _threads = tmpMeta8;
          tmpMeta10 = mmc_mk_box2(0, _threads, _outgoingDepTasks);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_boolean tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_boolean tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,6) == 0) goto tmp3_end;
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 3));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 6));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_3), 1));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 1));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_4), 2));
          _idx = tmp14  /* pattern as ty=Integer */;
          _thr = tmp16  /* pattern as ty=Integer */;
          _rest = tmpMeta12;
          _iTaskGraph = tmpMeta17;
          _iTaskGraphT = tmpMeta18;
          _taskAss = tmpMeta19;
          _threads = tmpMeta20;
          _outgoingDepTasks = tmpMeta21;
          /* Pattern matching succeeded */
          _task = listHead(_threadsIn);

          _preds = arrayGet(_iTaskGraphT, _idx);

          _succs = arrayGet(_iTaskGraph, _idx);

          _predThr = omc_List_map1(threadData, _preds, boxvar_Array_getIndexFirst, _taskAss);

          _succThr = omc_List_map1(threadData, _succs, boxvar_Array_getIndexFirst, _taskAss);

          omc_List_filter1OnTrueSync(threadData, _predThr, boxvar_intNe, mmc_mk_integer(_thr), _preds ,&_preds);

          omc_List_filter1OnTrueSync(threadData, _succThr, boxvar_intNe, mmc_mk_integer(_thr), _succs ,&_succs);

          _assLocks = omc_List_map6(threadData, _preds, boxvar_HpcOmScheduler_createDepTaskByTaskIdc, mmc_mk_integer(_idx), _iAllCalcTasks, mmc_mk_boolean(0 /* false */), _iCommCosts, _iCompTaskMapping, _iSimVarMapping);

          _relLocks = omc_List_map6(threadData, _succs, boxvar_HpcOmScheduler_createDepTaskByTaskIdc, mmc_mk_integer(_idx), _iAllCalcTasks, mmc_mk_boolean(1 /* true */), _iCommCosts, _iCompTaskMapping, _iSimVarMapping);

          tmpMeta22 = mmc_mk_cons(_task, MMC_REFSTRUCTLIT(mmc_nil));
          _tasks = listAppend(listAppend(_relLocks, tmpMeta22), _assLocks);

          tmp24 = (modelica_boolean)(!listEmpty(_threads));
          if(tmp24)
          {
            tmpMeta25 = listHead(_threads);
          }
          else
          {
            tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta25 = tmpMeta23;
          }
          _thread = tmpMeta25;

          _thread = listAppend(_tasks, _thread);

          tmp27 = (modelica_boolean)(!listEmpty(_threads));
          if(tmp27)
          {
            tmpMeta28 = omc_List_replaceAt(threadData, _thread, ((modelica_integer) 1), _threads);
          }
          else
          {
            tmpMeta26 = mmc_mk_cons(_thread, MMC_REFSTRUCTLIT(mmc_nil));
            tmpMeta28 = tmpMeta26;
          }
          _threads = tmpMeta28;

          _outgoingDepTasks = listAppend(_relLocks, _outgoingDepTasks);

          _outgoingDepTasks = listAppend(_assLocks, _outgoingDepTasks);

          /* Pattern-matching assignment */
          tmpMeta29 = mmc_mk_box2(0, _threads, _outgoingDepTasks);
          tmpMeta30 = omc_HpcOmScheduler_insertLocksInSchedule1(threadData, _rest, _iTaskGraphTransposed, _taskProcAss, _iAllCalcTasks, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, tmpMeta29);
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 1));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
          _threads = tmpMeta31;
          _outgoingDepTasks = tmpMeta32;
          tmpMeta33 = mmc_mk_box2(0, _threads, _outgoingDepTasks);
          tmpMeta1 = tmpMeta33;
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
  _foldOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _foldOut;
}

static modelica_metatype closure9_HpcOmScheduler_insertLocksInSchedule1(threadData_t *thData, modelica_metatype closure, modelica_metatype threadsIn, modelica_metatype foldIn)
{
  modelica_metatype iTaskGraphTransposed = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype taskProcAss = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iAllCalcTasks = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iCommCosts = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iCompTaskMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype iSimVarMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  return boxptr_HpcOmScheduler_insertLocksInSchedule1(thData, threadsIn, iTaskGraphTransposed, taskProcAss, iAllCalcTasks, iCommCosts, iCompTaskMapping, iSimVarMapping, foldIn);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_insertLocksInSchedule(threadData_t *threadData, modelica_metatype _iSchedule, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _taskAss, modelica_metatype _procAss, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _threads = NULL;
  modelica_metatype _outgoingDepTasks = NULL;
  modelica_metatype _allCalcTasks = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _threadTasks has no default value.
  // _threads has no default value.
  // _outgoingDepTasks has no default value.
  // _allCalcTasks has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iSchedule;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta1,1,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _threadTasks = tmpMeta2;
  _allCalcTasks = tmpMeta3;

  _threads = arrayList(_threadTasks);

  /* Pattern-matching assignment */
  tmpMeta5 = mmc_mk_box2(0, _iTaskGraph, _iTaskGraphT);
  tmpMeta6 = mmc_mk_box2(0, _taskAss, _procAss);
  tmpMeta4 = mmc_mk_box6(0, tmpMeta5, tmpMeta6, _allCalcTasks, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
  tmpMeta7 = omc_List_fold(threadData, _threads, (modelica_fnptr) mmc_mk_box2(0,closure9_HpcOmScheduler_insertLocksInSchedule1,tmpMeta4), _OMC_LIT99);
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  _threads = tmpMeta8;
  _outgoingDepTasks = tmpMeta9;

  _threads = omc_List_filterOnFalse(threadData, _threads, boxvar_listEmpty);

  _threads = omc_List_map(threadData, _threads, boxvar_listReverse);

  _threads = listReverse(_threads);

  _threadTasks = listArray(_threads);

  _outgoingDepTasks = omc_List_unique(threadData, _outgoingDepTasks);

  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta11 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, tmpMeta10, _allCalcTasks);
  _oSchedule = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_TDS__schedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iSimCode, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _oSimCode = NULL;
  modelica_metatype _oTaskGraph = NULL;
  modelica_metatype _oTaskGraphMeta = NULL;
  modelica_metatype _oSccSimEqMapping = NULL;
  modelica_integer _size;
  modelica_metatype _queue = NULL;
  modelica_metatype _levels = NULL;
  modelica_metatype _ectArray = NULL;
  modelica_metatype _tdsLevelArray = NULL;
  modelica_metatype _lastArray = NULL;
  modelica_metatype _lactArray = NULL;
  modelica_metatype _fpredArray = NULL;
  modelica_metatype _initClusters = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _oSimCode has no default value.
  // _oTaskGraph has no default value.
  // _oTaskGraphMeta has no default value.
  // _oSccSimEqMapping has no default value.
  // _size has no default value.
  // _queue has no default value.
  // _levels has no default value.
  // _ectArray has no default value.
  // _tdsLevelArray has no default value.
  // _lastArray has no default value.
  // _lactArray has no default value.
  // _fpredArray has no default value.
  // _initClusters has no default value.
  // _taskGraphT has no default value.
  // _commCosts has no default value.
  // _inComps has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskGraphMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
  _inComps = tmpMeta2;
  _commCosts = tmpMeta3;

  _size = arrayLength(_iTaskGraph);

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, _size);

  omc_HpcOmScheduler_computeGraphValuesBottomUp(threadData, _iTaskGraph, _iTaskGraphMeta ,NULL ,&_ectArray);

  omc_HpcOmScheduler_computeGraphValuesTopDown(threadData, _iTaskGraph, _iTaskGraphMeta ,&_lastArray ,&_lactArray ,&_tdsLevelArray);

  _fpredArray = omc_HpcOmScheduler_computeFavouritePred(threadData, _iTaskGraph, _iTaskGraphMeta, _ectArray);

  _levels = omc_HpcOmScheduler_quicksortWithOrder(threadData, arrayList(_tdsLevelArray) ,&_queue);

  _initClusters = omc_HpcOmScheduler_TDS__InitialCluster(threadData, _iTaskGraph, _taskGraphT, _iTaskGraphMeta, _lastArray, _lactArray, _fpredArray, _queue);

  _oSchedule = omc_HpcOmScheduler_TDS__schedule1(threadData, _initClusters, _iTaskGraph, _taskGraphT, _iTaskGraphMeta, _tdsLevelArray, _numProc, _iSccSimEqMapping, _iSimCode, _commCosts, _inComps, _iSimVarMapping ,&_oSimCode ,&_oTaskGraph ,&_oTaskGraphMeta ,&_oSccSimEqMapping);
  _return: OMC_LABEL_UNUSED
  if (out_oSimCode) { *out_oSimCode = _oSimCode; }
  if (out_oTaskGraph) { *out_oTaskGraph = _oTaskGraph; }
  if (out_oTaskGraphMeta) { *out_oTaskGraphMeta = _oTaskGraphMeta; }
  if (out_oSccSimEqMapping) { *out_oSccSimEqMapping = _oSccSimEqMapping; }
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_TDS__schedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _numProc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iSimCode, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_numProc);
  _oSchedule = omc_HpcOmScheduler_TDS__schedule(threadData, _iTaskGraph, _iTaskGraphMeta, tmp1, _iSccSimEqMapping, _iSimVarMapping, _iSimCode, out_oSimCode, out_oTaskGraph, out_oTaskGraphMeta, out_oSccSimEqMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  /* skip box _oSimCode; SimCode.SimCode */
  /* skip box _oTaskGraph; array<list<#Integer>> */
  /* skip box _oTaskGraphMeta; HpcOmTaskGraph.TaskGraphMeta */
  /* skip box _oSccSimEqMapping; array<list<#Integer>> */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createExtSchedule1(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iThreadAssignments, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_fnptr _iLockWithPredecessorHandler, modelica_metatype _iSchedule)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _newTask = NULL;
  modelica_integer _newTaskRefCount;
  modelica_metatype _rest = NULL;
  modelica_metatype _predecessors = NULL;
  modelica_metatype _successors = NULL;
  modelica_metatype _successorIdc = NULL;
  modelica_metatype _outgoingDepTasks = NULL;
  modelica_metatype _newOutgoingDepTasks = NULL;
  modelica_integer _firstEq;
  modelica_metatype _allThreadTasks = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _lockTasks = NULL;
  modelica_integer _threadId;
  modelica_real _threadFinishTime;
  modelica_metatype _tmpNodeList = NULL;
  modelica_integer _weighting;
  modelica_integer _index;
  modelica_real _calcTime;
  modelica_metatype _eqIdc = NULL;
  modelica_metatype _simEqIdc = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _head has no default value.
  // _newTask has no default value.
  // _newTaskRefCount has no default value.
  // _rest has no default value.
  // _predecessors has no default value.
  // _successors has no default value.
  // _successorIdc has no default value.
  // _outgoingDepTasks has no default value.
  // _newOutgoingDepTasks has no default value.
  // _firstEq has no default value.
  // _allThreadTasks has no default value.
  // _threadTasks has no default value.
  // _lockTasks has no default value.
  // _threadId has no default value.
  // _threadFinishTime has no default value.
  // _tmpNodeList has no default value.
  // _weighting has no default value.
  // _index has no default value.
  // _calcTime has no default value.
  // _eqIdc has no default value.
  // _simEqIdc has no default value.
  // _allCalcTasks has no default value.
  // _tmpSchedule has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _iNodeList;
    tmp4_2 = _iSchedule;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_real tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_boolean tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_integer tmp27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,6) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          tmp16 = mmc_unbox_real(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 7));
          if (listEmpty(tmpMeta17)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmpMeta17);
          tmpMeta19 = MMC_CDR(tmpMeta17);
          tmp20 = mmc_unbox_integer(tmpMeta18);
          _allThreadTasks = tmpMeta6;
          _outgoingDepTasks = tmpMeta7;
          _allCalcTasks = tmpMeta8;
          _head = tmpMeta9;
          _weighting = tmp12  /* pattern as ty=Integer */;
          _index = tmp14  /* pattern as ty=Integer */;
          _calcTime = tmp16  /* pattern as ty=Real */;
          _eqIdc = tmpMeta17;
          _firstEq = tmp20  /* pattern as ty=Integer */;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          _predecessors = omc_HpcOmScheduler_getSuccessorsByTask(threadData, _head, _iTaskGraphT, _allCalcTasks, NULL);

          _successors = omc_HpcOmScheduler_getSuccessorsByTask(threadData, _head, _iTaskGraph, _allCalcTasks ,&_successorIdc);

          /* Pattern-matching assignment */
          tmp21 = listEmpty(_predecessors);
          if (0 /* false */ != tmp21) goto goto_2;

          _threadId = mmc_unbox_integer(arrayGet(_iThreadAssignments, _index));

          _threadFinishTime = -1.0;

          _threadTasks = arrayGet(_allThreadTasks, _threadId);

          _lockTasks = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 2))), _head, _predecessors, mmc_mk_integer(_threadId), _iCommCosts, _iCompTaskMapping, _iSimVarMapping ,&_newOutgoingDepTasks) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 1)))) (threadData, _head, _predecessors, mmc_mk_integer(_threadId), _iCommCosts, _iCompTaskMapping, _iSimVarMapping ,&_newOutgoingDepTasks);

          _outgoingDepTasks = listAppend(_outgoingDepTasks, _newOutgoingDepTasks);

          _threadTasks = listAppend(_lockTasks, _threadTasks);

          _simEqIdc = omc_List_map(threadData, omc_List_map1(threadData, _eqIdc, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _iSccSimEqMapping), boxvar_List_last);

          tmpMeta22 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_threadFinishTime), mmc_mk_integer(_threadId), _simEqIdc);
          _newTask = tmpMeta22;

          tmpMeta23 = mmc_mk_cons(_newTask, _threadTasks);
          _threadTasks = tmpMeta23;

          _allThreadTasks = arrayUpdate(_allThreadTasks, _threadId, _threadTasks);

          tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
          _allCalcTasks = omc_HpcOmScheduler_updateRefCounterBySuccessorIdc(threadData, _allCalcTasks, _successorIdc, tmpMeta24 ,&_tmpNodeList);

          _tmpNodeList = listAppend(_tmpNodeList, _rest);

          _tmpNodeList = omc_List_sort(threadData, _tmpNodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

          /* Pattern-matching assignment */
          tmpMeta25 = arrayGet(_allCalcTasks, _index);
          tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta25), 2));
          tmp27 = mmc_unbox_integer(tmpMeta26);
          _newTaskRefCount = tmp27  /* pattern as ty=Integer */;

          tmpMeta28 = mmc_mk_box2(0, _newTask, mmc_mk_integer(_newTaskRefCount));
          arrayUpdate(_allCalcTasks, _index, tmpMeta28);
          tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta30 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _allThreadTasks, _outgoingDepTasks, tmpMeta29, _allCalcTasks);
          tmpMeta1 = omc_HpcOmScheduler_createExtSchedule1(threadData, _tmpNodeList, _iThreadAssignments, _iTaskGraph, _iTaskGraphT, _iCommCosts, _iCompTaskMapping, _iSccSimEqMapping, _iSimVarMapping, ((modelica_fnptr) _iLockWithPredecessorHandler), tmpMeta30);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_integer tmp37;
          modelica_metatype tmpMeta38;
          modelica_integer tmp39;
          modelica_metatype tmpMeta40;
          modelica_real tmp41;
          modelica_metatype tmpMeta42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_integer tmp45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_integer tmp51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta34 = MMC_CAR(tmp4_1);
          tmpMeta35 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta34,1,6) == 0) goto tmp3_end;
          tmpMeta36 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 2));
          tmp37 = mmc_unbox_integer(tmpMeta36);
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 3));
          tmp39 = mmc_unbox_integer(tmpMeta38);
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 4));
          tmp41 = mmc_unbox_real(tmpMeta40);
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta34), 7));
          if (listEmpty(tmpMeta42)) goto tmp3_end;
          tmpMeta43 = MMC_CAR(tmpMeta42);
          tmpMeta44 = MMC_CDR(tmpMeta42);
          tmp45 = mmc_unbox_integer(tmpMeta43);
          _allThreadTasks = tmpMeta31;
          _outgoingDepTasks = tmpMeta32;
          _allCalcTasks = tmpMeta33;
          _head = tmpMeta34;
          _weighting = tmp37  /* pattern as ty=Integer */;
          _index = tmp39  /* pattern as ty=Integer */;
          _calcTime = tmp41  /* pattern as ty=Real */;
          _eqIdc = tmpMeta42;
          _firstEq = tmp45  /* pattern as ty=Integer */;
          _rest = tmpMeta35;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _successors = omc_HpcOmScheduler_getSuccessorsByTask(threadData, _head, _iTaskGraph, _allCalcTasks ,&_successorIdc);

          _threadId = mmc_unbox_integer(arrayGet(_iThreadAssignments, _index));

          _threadFinishTime = -1.0;

          _threadTasks = arrayGet(_allThreadTasks, _threadId);

          _simEqIdc = omc_List_flatten(threadData, omc_List_map1(threadData, _eqIdc, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _iSccSimEqMapping));

          tmpMeta46 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_threadFinishTime), mmc_mk_integer(_threadId), _simEqIdc);
          _newTask = tmpMeta46;

          tmpMeta47 = mmc_mk_cons(_newTask, _threadTasks);
          _allThreadTasks = arrayUpdate(_allThreadTasks, _threadId, tmpMeta47);

          tmpMeta48 = MMC_REFSTRUCTLIT(mmc_nil);
          _allCalcTasks = omc_HpcOmScheduler_updateRefCounterBySuccessorIdc(threadData, _allCalcTasks, _successorIdc, tmpMeta48 ,&_tmpNodeList);

          _tmpNodeList = listAppend(_tmpNodeList, _rest);

          _tmpNodeList = omc_List_sort(threadData, _tmpNodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

          /* Pattern-matching assignment */
          tmpMeta49 = arrayGet(_allCalcTasks, _index);
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta49), 2));
          tmp51 = mmc_unbox_integer(tmpMeta50);
          _newTaskRefCount = tmp51  /* pattern as ty=Integer */;

          tmpMeta52 = mmc_mk_box2(0, _newTask, mmc_mk_integer(_newTaskRefCount));
          arrayUpdate(_allCalcTasks, _index, tmpMeta52);
          tmpMeta53 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta54 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _allThreadTasks, _outgoingDepTasks, tmpMeta53, _allCalcTasks);
          tmpMeta1 = omc_HpcOmScheduler_createExtSchedule1(threadData, _tmpNodeList, _iThreadAssignments, _iTaskGraph, _iTaskGraphT, _iCommCosts, _iCompTaskMapping, _iSccSimEqMapping, _iSimVarMapping, ((modelica_fnptr) _iLockWithPredecessorHandler), tmpMeta54);
          goto tmp3_done;
        }
        case 2: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iSchedule;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT100),stdout);

          omc_HpcOmScheduler_printTaskList(threadData, _iNodeList);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oSchedule = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createExtSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_string _iGraphMLFile)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _extInfo = NULL;
  modelica_metatype _extInfoArr = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _rootNodes = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype _nodeList_refCount = NULL;
  modelica_metatype _nodeList = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _extInfo has no default value.
  // _extInfoArr has no default value.
  // _taskGraphT has no default value.
  // _tmpSchedule has no default value.
  // _threadTasks has no default value.
  // _commCosts has no default value.
  // _rootNodes has no default value.
  // _allCalcTasks has no default value.
  // _nodeList_refCount has no default value.
  // _nodeList has no default value.
  // _inComps has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iTaskGraphMeta;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          
          _inComps = tmpMeta6;
          _commCosts = tmpMeta7;
          /* Pattern matching succeeded */
          _extInfo = omc_HpcOmSchedulerExt_readScheduleFromGraphMl(threadData, _iGraphMLFile);

          _extInfoArr = listArray(_extInfo);

          /* Pattern-matching assignment */
          tmp8 = (arrayLength(_iTaskGraph) == arrayLength(_extInfoArr));
          if (1 /* true */ != tmp8) goto goto_2;

          _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, arrayLength(_iTaskGraph));

          _rootNodes = omc_HpcOmTaskGraph_getRootNodes(threadData, _iTaskGraph);

          _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _taskGraphT, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTask);

          _nodeList_refCount = omc_List_map1(threadData, _rootNodes, boxvar_HpcOmScheduler_getTaskByIndex, _allCalcTasks);

          _nodeList = omc_List_map(threadData, _nodeList_refCount, boxvar_Util_tuple21);

          _nodeList = omc_List_sort(threadData, _nodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _threadTasks = arrayCreate(_iNumberOfThreads, tmpMeta9);

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, tmpMeta10, tmpMeta11, _allCalcTasks);
          _tmpSchedule = tmpMeta12;

          _tmpSchedule = omc_HpcOmScheduler_createExtSchedule1(threadData, _nodeList, _extInfoArr, _iTaskGraph, _taskGraphT, _commCosts, _inComps, _iSccSimEqMapping, _iSimVarMapping, boxvar_HpcOmScheduler_getLocksByPredecessorList, _tmpSchedule);
          tmpMeta1 = omc_HpcOmScheduler_addSuccessorLocksToSchedule(threadData, _iTaskGraph, boxvar_HpcOmScheduler_addReleaseLocksToSchedule, _commCosts, _inComps, _iSimVarMapping, _tmpSchedule);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT101),stdout);
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
  _oSchedule = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createExtSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iGraphMLFile)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oSchedule = omc_HpcOmScheduler_createExtSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, tmp1, _iSccSimEqMapping, _iSimVarMapping, _iGraphMLFile);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_preparehMetis(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype *out_eptr, modelica_metatype *out_eint, modelica_metatype *out_hewgts)
{
  modelica_metatype _vwgts = NULL;
  modelica_metatype _eptr = NULL;
  modelica_metatype _eint = NULL;
  modelica_metatype _hewgts = NULL;
  modelica_integer _n;
  modelica_metatype _l_eptr = NULL;
  modelica_metatype _l_eint = NULL;
  modelica_metatype _l_hewgts = NULL;
  modelica_metatype _allTheNodes = NULL;
  modelica_metatype _result = NULL;
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
  // _vwgts has no default value.
  // _eptr has no default value.
  // _eint has no default value.
  // _hewgts has no default value.
  // _n has no default value.
  // _l_eptr has no default value.
  // _l_eint has no default value.
  // _l_hewgts has no default value.
  // _allTheNodes has no default value.
  // _result has no default value.
  _n = arrayLength(_iTaskGraph);

  _result = omc_Array_fold(threadData, _iTaskGraph, boxvar_HpcOmScheduler_getHedge, _OMC_LIT103);

  /* Pattern-matching assignment */
  tmpMeta1 = _result;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  _l_eptr = tmpMeta2;
  _l_eint = tmpMeta3;
  _l_hewgts = tmpMeta4;

  tmpMeta5 = stringAppend(_OMC_LIT104,intString(listLength(_l_eptr)));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT105);
  tmpMeta7 = stringAppend(tmpMeta6,intString(listLength(_l_eint)));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT6);
  fputs(MMC_STRINGDATA(tmpMeta8),stdout);

  _allTheNodes = omc_List_intRange(threadData, _n);

  _vwgts = arrayCreate(_n, mmc_mk_integer(((modelica_integer) 0)));

  omc_List_map2__0(threadData, _allTheNodes, boxvar_HpcOmScheduler_setVwgt, _vwgts, _iTaskGraphMeta);

  _eptr = listArray(_l_eptr);

  _eint = listArray(_l_eint);

  _hewgts = listArray(_l_hewgts);
  _return: OMC_LABEL_UNUSED
  if (out_eptr) { *out_eptr = _eptr; }
  if (out_eint) { *out_eint = _eint; }
  if (out_hewgts) { *out_hewgts = _hewgts; }
  return _vwgts;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getHedge(threadData_t *threadData, modelica_metatype _childnodes, modelica_metatype _actnode)
{
  modelica_metatype _actnode_out = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _actnode_out has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _childnodes;
    tmp4_2 = _actnode;
    {
      modelica_integer _n;
      modelica_integer _node;
      modelica_integer _position;
      modelica_metatype _l_eptr = NULL;
      modelica_metatype _l_eint = NULL;
      modelica_metatype _l_hewgts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _n has no default value.
      // _node has no default value.
      // _position has no default value.
      // _l_eptr has no default value.
      // _l_eint has no default value.
      // _l_hewgts has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          _node = tmp7  /* pattern as ty=Integer */;
          _position = tmp9  /* pattern as ty=Integer */;
          _l_eptr = tmpMeta10;
          _l_eint = tmpMeta11;
          _l_hewgts = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box5(0, mmc_mk_integer(((modelica_integer) 1) + _node), mmc_mk_integer(_position), _l_eptr, _l_eint, _l_hewgts);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          _node = tmp15  /* pattern as ty=Integer */;
          _position = tmp17  /* pattern as ty=Integer */;
          _l_eptr = tmpMeta18;
          _l_eint = tmpMeta19;
          _l_hewgts = tmpMeta20;
          /* Pattern matching succeeded */
          _n = ((modelica_integer) -1) + _node;

          _l_eint = omc_List_appendElt(threadData, mmc_mk_integer(_n), _l_eint);

          _l_eint = omc_List_fold(threadData, _childnodes, boxvar_HpcOmScheduler_listNodes, _l_eint);

          _n = ((modelica_integer) 1) + _position + listLength(_childnodes);

          _l_eptr = omc_List_appendElt(threadData, mmc_mk_integer(_n), _l_eptr);
          tmpMeta21 = mmc_mk_box5(0, mmc_mk_integer(((modelica_integer) 1) + _node), mmc_mk_integer(_n), _l_eptr, _l_eint, _l_hewgts);
          tmpMeta1 = tmpMeta21;
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
  _actnode_out = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _actnode_out;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_listNodes(threadData_t *threadData, modelica_integer _node, modelica_metatype _l_eint)
{
  modelica_metatype _l_eint_out = NULL;
  modelica_integer _actnode;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _l_eint_out has no default value.
  // _actnode has no default value.
  _actnode = ((modelica_integer) -1) + _node;

  tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_actnode), MMC_REFSTRUCTLIT(mmc_nil));
  _l_eint_out = listAppend(_l_eint, tmpMeta1);

  tmpMeta2 = stringAppend(_OMC_LIT106,intString(listLength(_l_eint_out)));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT6);
  fputs(MMC_STRINGDATA(tmpMeta3),stdout);
  _return: OMC_LABEL_UNUSED
  return _l_eint_out;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_listNodes(threadData_t *threadData, modelica_metatype _node, modelica_metatype _l_eint)
{
  modelica_integer tmp1;
  modelica_metatype _l_eint_out = NULL;
  tmp1 = mmc_unbox_integer(_node);
  _l_eint_out = omc_HpcOmScheduler_listNodes(threadData, tmp1, _l_eint);
  /* skip box _l_eint_out; list<#Integer> */
  return _l_eint_out;
}

static modelica_metatype closure10_HpcOmScheduler_getRelations(threadData_t *thData, modelica_metatype closure, modelica_metatype edges, modelica_metatype irelations)
{
  modelica_metatype iTaskGraphMeta = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_HpcOmScheduler_getRelations(thData, edges, iTaskGraphMeta, irelations);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_prepareMetis(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype *out_adjncy, modelica_metatype *out_vwgt, modelica_metatype *out_adjwgt)
{
  modelica_metatype _xadj = NULL;
  modelica_metatype _adjncy = NULL;
  modelica_metatype _vwgt = NULL;
  modelica_metatype _adjwgt = NULL;
  modelica_integer _n;
  modelica_integer _m;
  modelica_metatype _adjundirected = NULL;
  modelica_metatype _help = NULL;
  modelica_metatype _allTheNodes = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _xadj has no default value.
  // _adjncy has no default value.
  // _vwgt has no default value.
  // _adjwgt has no default value.
  // _n has no default value.
  // _m has no default value.
  // _adjundirected has no default value.
  // _help has no default value.
  // _allTheNodes has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _help = tmpMeta1;

  _n = arrayLength(_iTaskGraph);

  _xadj = arrayCreate(((modelica_integer) 1) + _n, mmc_mk_integer(((modelica_integer) 0)));

  _m = mmc_unbox_integer(omc_Array_fold(threadData, _iTaskGraph, boxvar_HpcOmScheduler_sumEdge, mmc_mk_integer(((modelica_integer) 0))));

  _adjwgt = arrayCreate((((modelica_integer) 2)) * (_m), mmc_mk_integer(((modelica_integer) 0)));

  tmpMeta2 = mmc_mk_box1(0, _iTaskGraphMeta);
  _adjundirected = omc_Array_fold(threadData, _iTaskGraph, (modelica_fnptr) mmc_mk_box2(0,closure10_HpcOmScheduler_getRelations,tmpMeta2), _OMC_LIT107);

  /* Pattern-matching assignment */
  tmpMeta3 = _adjundirected;
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
  _help = tmpMeta4;

  _allTheNodes = omc_List_intRange(threadData, _n);

  _adjncy = arrayCreate((((modelica_integer) 2)) * (_m), mmc_mk_integer(((modelica_integer) 0)));

  _xadj = arrayUpdate(_xadj, ((modelica_integer) 1), mmc_mk_integer(((modelica_integer) 0)));

  omc_List_fold4(threadData, _allTheNodes, boxvar_HpcOmScheduler_sortEdge, _xadj, _adjncy, _adjwgt, _help, mmc_mk_integer(((modelica_integer) 1)));

  _vwgt = arrayCreate(_n, mmc_mk_integer(((modelica_integer) 0)));

  omc_List_map2__0(threadData, _allTheNodes, boxvar_HpcOmScheduler_setVwgt, _vwgt, _iTaskGraphMeta);
  _return: OMC_LABEL_UNUSED
  if (out_adjncy) { *out_adjncy = _adjncy; }
  if (out_vwgt) { *out_vwgt = _vwgt; }
  if (out_adjwgt) { *out_adjwgt = _adjwgt; }
  return _xadj;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_setVwgt(threadData_t *threadData, modelica_integer _node, modelica_metatype _vwgt, modelica_metatype _iTaskGraphMeta)
{
  modelica_metatype _value = NULL;
  modelica_real _rv;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _rv has no default value.
  _value = omc_HpcOmTaskGraph_getExeCost(threadData, _node, _iTaskGraphMeta);

  /* Pattern-matching assignment */
  tmpMeta1 = _value;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_real(tmpMeta2);
  _rv = tmp3  /* pattern as ty=Real */;

  arrayUpdate(_vwgt, _node, mmc_mk_integer(((modelica_integer)floor(_rv))));
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_setVwgt(threadData_t *threadData, modelica_metatype _node, modelica_metatype _vwgt, modelica_metatype _iTaskGraphMeta)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_node);
  omc_HpcOmScheduler_setVwgt(threadData, tmp1, _vwgt, _iTaskGraphMeta);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_sortEdge(threadData_t *threadData, modelica_integer _actnode, modelica_metatype _xadj, modelica_metatype _adjncy, modelica_metatype _adjwgt, modelica_metatype _help, modelica_integer _imarker)
{
  modelica_integer _omarker;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omarker has no default value.
  _omarker = mmc_unbox_integer(omc_List_fold3(threadData, _help, boxvar_HpcOmScheduler_sortEdgeHelp, mmc_mk_integer(_actnode), _adjncy, _adjwgt, mmc_mk_integer(_imarker)));

  arrayUpdate(_xadj, ((modelica_integer) 1) + _actnode, mmc_mk_integer(((modelica_integer) -1) + _omarker));
  _return: OMC_LABEL_UNUSED
  return _omarker;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_sortEdge(threadData_t *threadData, modelica_metatype _actnode, modelica_metatype _xadj, modelica_metatype _adjncy, modelica_metatype _adjwgt, modelica_metatype _help, modelica_metatype _imarker)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _omarker;
  modelica_metatype out_omarker;
  tmp1 = mmc_unbox_integer(_actnode);
  tmp2 = mmc_unbox_integer(_imarker);
  _omarker = omc_HpcOmScheduler_sortEdge(threadData, tmp1, _xadj, _adjncy, _adjwgt, _help, tmp2);
  out_omarker = mmc_mk_icon(_omarker);
  return out_omarker;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_sortEdgeHelp(threadData_t *threadData, modelica_metatype _edge, modelica_integer _actnode, modelica_metatype _adjncy, modelica_metatype _adjwgt, modelica_integer _imarker)
{
  modelica_integer _omarker;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _omarker has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _edge;
    {
      modelica_integer _tonode;
      modelica_integer _fromnode;
      modelica_integer _cost;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _tonode has no default value.
      // _fromnode has no default value.
      // _cost has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_boolean tmp12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          _fromnode = tmp7  /* pattern as ty=Integer */;
          _tonode = tmp9  /* pattern as ty=Integer */;
          _cost = tmp11  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp12 = (_fromnode == _actnode);
          if (1 /* true */ != tmp12) goto goto_2;

          arrayUpdate(_adjwgt, _imarker, mmc_mk_integer(_cost));

          arrayUpdate(_adjncy, _imarker, mmc_mk_integer(((modelica_integer) -1) + _tonode));
          tmp1 = ((modelica_integer) 1) + _imarker;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _imarker;
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
  _omarker = tmp1;
  _return: OMC_LABEL_UNUSED
  return _omarker;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_sortEdgeHelp(threadData_t *threadData, modelica_metatype _edge, modelica_metatype _actnode, modelica_metatype _adjncy, modelica_metatype _adjwgt, modelica_metatype _imarker)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _omarker;
  modelica_metatype out_omarker;
  tmp1 = mmc_unbox_integer(_actnode);
  tmp2 = mmc_unbox_integer(_imarker);
  _omarker = omc_HpcOmScheduler_sortEdgeHelp(threadData, _edge, tmp1, _adjncy, _adjwgt, tmp2);
  out_omarker = mmc_mk_icon(_omarker);
  return out_omarker;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getRelations(threadData_t *threadData, modelica_metatype _edges, modelica_metatype _iTaskGraphMeta, modelica_metatype _irelations)
{
  modelica_metatype _orelations = NULL;
  modelica_integer _n;
  modelica_metatype _relations = NULL;
  modelica_metatype _orel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _orelations has no default value.
  // _n has no default value.
  // _relations has no default value.
  // _orel has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _irelations;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _relations = tmpMeta2;
  _n = tmp4  /* pattern as ty=Integer */;

  _orel = omc_List_fold2(threadData, _edges, boxvar_HpcOmScheduler_getSingleRelations, mmc_mk_integer(_n), _iTaskGraphMeta, _relations);

  tmpMeta5 = mmc_mk_box2(0, _orel, mmc_mk_integer(((modelica_integer) 1) + _n));
  _orelations = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _orelations;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getSingleRelations(threadData_t *threadData, modelica_integer _edge, modelica_integer _n, modelica_metatype _iTaskGraphMeta, modelica_metatype _irelations)
{
  modelica_metatype _orelations = NULL;
  modelica_real _costs;
  modelica_integer _costsInt;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _orelations has no default value.
  // _costs has no default value.
  // _costsInt has no default value.
  _costs = omc_HpcOmTaskGraph_getCommCostTimeBetweenNodes(threadData, _n, _edge, _iTaskGraphMeta);

  _costsInt = ((modelica_integer)floor(_costs));

  tmpMeta1 = mmc_mk_box3(0, mmc_mk_integer(_edge), mmc_mk_integer(_n), mmc_mk_integer(_costsInt));
  _orelations = omc_List_appendElt(threadData, tmpMeta1, _irelations);

  tmpMeta2 = mmc_mk_box3(0, mmc_mk_integer(_n), mmc_mk_integer(_edge), mmc_mk_integer(_costsInt));
  _orelations = omc_List_appendElt(threadData, tmpMeta2, _orelations);
  _return: OMC_LABEL_UNUSED
  return _orelations;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getSingleRelations(threadData_t *threadData, modelica_metatype _edge, modelica_metatype _n, modelica_metatype _iTaskGraphMeta, modelica_metatype _irelations)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _orelations = NULL;
  tmp1 = mmc_unbox_integer(_edge);
  tmp2 = mmc_unbox_integer(_n);
  _orelations = omc_HpcOmScheduler_getSingleRelations(threadData, tmp1, tmp2, _iTaskGraphMeta, _irelations);
  /* skip box _orelations; list<tuple<#Integer, #Integer, #Integer>> */
  return _orelations;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_sumEdge(threadData_t *threadData, modelica_metatype _edges, modelica_integer _innumedge)
{
  modelica_integer _outnumedge;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outnumedge has no default value.
  _outnumedge = _innumedge + listLength(_edges);
  _return: OMC_LABEL_UNUSED
  return _outnumedge;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_sumEdge(threadData_t *threadData, modelica_metatype _edges, modelica_metatype _innumedge)
{
  modelica_integer tmp1;
  modelica_integer _outnumedge;
  modelica_metatype out_outnumedge;
  tmp1 = mmc_unbox_integer(_innumedge);
  _outnumedge = omc_HpcOmScheduler_sumEdge(threadData, _edges, tmp1);
  out_outnumedge = mmc_mk_icon(_outnumedge);
  return out_outnumedge;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createHMetisSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _extInfo = NULL;
  modelica_metatype _xadj = NULL;
  modelica_metatype _adjncy = NULL;
  modelica_metatype _vwgt = NULL;
  modelica_metatype _adjwgt = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype _extInfoArr = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _rootNodes = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype _nodeList_refCount = NULL;
  modelica_metatype _nodeList = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _extInfo has no default value.
  // _xadj has no default value.
  // _adjncy has no default value.
  // _vwgt has no default value.
  // _adjwgt has no default value.
  // _tmpSchedule has no default value.
  // _extInfoArr has no default value.
  // _taskGraphT has no default value.
  // _threadTasks has no default value.
  // _rootNodes has no default value.
  // _allCalcTasks has no default value.
  // _nodeList_refCount has no default value.
  // _nodeList has no default value.
  // _commCosts has no default value.
  // _inComps has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iTaskGraphMeta;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
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
          modelica_boolean tmp10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          
          _inComps = tmpMeta6;
          _commCosts = tmpMeta7;
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT108),stdout);

          _xadj = omc_HpcOmScheduler_preparehMetis(threadData, _iTaskGraph, _iTaskGraphMeta ,&_adjncy ,&_vwgt ,&_adjwgt);

          _extInfo = omc_HpcOmSchedulerExt_schedulehMetis(threadData, _xadj, _adjncy, _vwgt, _adjwgt, _iNumberOfThreads);

          _extInfoArr = listArray(_extInfo);

          fputs(MMC_STRINGDATA(_OMC_LIT109),stdout);

          tmpMeta8 = stringAppend(_OMC_LIT110,stringDelimitList(omc_List_map(threadData, _extInfo, boxvar_intString), _OMC_LIT111));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT6);
          fputs(MMC_STRINGDATA(tmpMeta9),stdout);

          /* Pattern-matching assignment */
          tmp10 = (arrayLength(_iTaskGraph) == arrayLength(_extInfoArr));
          if (1 /* true */ != tmp10) goto goto_2;

          _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, arrayLength(_iTaskGraph));

          _rootNodes = omc_HpcOmTaskGraph_getRootNodes(threadData, _iTaskGraph);

          _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _taskGraphT, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTask);

          _nodeList_refCount = omc_List_map1(threadData, _rootNodes, boxvar_HpcOmScheduler_getTaskByIndex, _allCalcTasks);

          _nodeList = omc_List_map(threadData, _nodeList_refCount, boxvar_Util_tuple21);

          _nodeList = omc_List_sort(threadData, _nodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _threadTasks = arrayCreate(_iNumberOfThreads, tmpMeta11);

          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, tmpMeta12, tmpMeta13, _allCalcTasks);
          _tmpSchedule = tmpMeta14;

          _tmpSchedule = omc_HpcOmScheduler_createExtSchedule1(threadData, _nodeList, _extInfoArr, _iTaskGraph, _taskGraphT, _commCosts, _inComps, _iSccSimEqMapping, _iSimVarMapping, boxvar_HpcOmScheduler_getLocksByPredecessorList, _tmpSchedule);

          _tmpSchedule = omc_HpcOmScheduler_addSuccessorLocksToSchedule(threadData, _iTaskGraph, boxvar_HpcOmScheduler_addReleaseLocksToSchedule, _commCosts, _inComps, _iSimVarMapping, _tmpSchedule);
          tmpMeta1 = omc_HpcOmScheduler_setScheduleLockIds(threadData, _tmpSchedule);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT112),stdout);
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
  _oSchedule = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createHMetisSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oSchedule = omc_HpcOmScheduler_createHMetisSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, tmp1, _iSccSimEqMapping, _iSimVarMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_arrayIntIsNotOne(threadData_t *threadData, modelica_integer _idx, modelica_metatype _arr)
{
  modelica_boolean _isOne;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isOne has no default value.
  _isOne = (((modelica_integer) 1) != mmc_unbox_integer(arrayGet(_arr, _idx)));
  _return: OMC_LABEL_UNUSED
  return _isOne;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_arrayIntIsNotOne(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _arr)
{
  modelica_integer tmp1;
  modelica_boolean _isOne;
  modelica_metatype out_isOne;
  tmp1 = mmc_unbox_integer(_idx);
  _isOne = omc_HpcOmScheduler_arrayIntIsNotOne(threadData, tmp1, _arr);
  out_isOne = mmc_mk_icon(_isOne);
  return out_isOne;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_createMetisSchedule1(threadData_t *threadData, modelica_metatype _taskIdcs, modelica_metatype _threadIds, modelica_metatype _taskGraph, modelica_metatype _taskGraphT, modelica_metatype _priorityArr)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _taskIdcs;
    {
      modelica_integer _threadId;
      modelica_integer _taskIdx;
      modelica_metatype _preds = NULL;
      modelica_metatype _predThreads = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _threadId has no default value.
      // _taskIdx has no default value.
      // _preds has no default value.
      // _predThreads has no default value.
      // _rest has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_boolean tmp8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmp7 = mmc_unbox_integer(tmpMeta5);
          _taskIdx = tmp7  /* pattern as ty=Integer */;
          _rest = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp8 = (((modelica_integer) 1) == mmc_unbox_integer(arrayGet(_priorityArr, _taskIdx)));
          if (1 /* true */ != tmp8) goto goto_1;

          _preds = arrayGet(_taskGraphT, _taskIdx);

          _preds = omc_List_filter1OnTrue(threadData, _preds, boxvar_HpcOmScheduler_arrayIntIsNotOne, _priorityArr);

          omc_List_map2__0(threadData, _preds, boxvar_Array_updateIndexFirst, mmc_mk_integer(((modelica_integer) 1)), _priorityArr);

          _rest = listAppend(_preds, _rest);

          omc_HpcOmScheduler_createMetisSchedule1(threadData, _rest, _threadIds, _taskGraph, _taskGraphT, _priorityArr);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta9 = MMC_CAR(tmp3_1);
          tmpMeta10 = MMC_CDR(tmp3_1);
          tmp11 = mmc_unbox_integer(tmpMeta9);
          _taskIdx = tmp11  /* pattern as ty=Integer */;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          _threadId = mmc_unbox_integer(arrayGet(_threadIds, _taskIdx));

          _preds = arrayGet(_taskGraphT, _taskIdx);

          _predThreads = omc_List_map1(threadData, _preds, boxvar_Array_getIndexFirst, _threadIds);

          _predThreads = omc_List_filter1OnTrueSync(threadData, _predThreads, boxvar_intNe, mmc_mk_integer(_threadId), _preds ,&_preds);

          if((!listEmpty(_predThreads)))
          {
            omc_List_map2__0(threadData, _preds, boxvar_Array_updateIndexFirst, mmc_mk_integer(((modelica_integer) 1)), _priorityArr);

            _rest = listAppend(_preds, _rest);
          }
          else
          {
            arrayUpdate(_priorityArr, _taskIdx, mmc_mk_integer(((modelica_integer) 0)));
          }

          omc_HpcOmScheduler_createMetisSchedule1(threadData, _rest, _threadIds, _taskGraph, _taskGraphT, _priorityArr);
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
      if (++tmp3 < 3) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_isPrioNode(threadData_t *threadData, modelica_integer _idx, modelica_metatype _prioArr)
{
  modelica_boolean _isPrio;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isPrio has no default value.
  _isPrio = (((modelica_integer) 1) == mmc_unbox_integer(arrayGet(_prioArr, _idx)));
  _return: OMC_LABEL_UNUSED
  return _isPrio;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_isPrioNode(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _prioArr)
{
  modelica_integer tmp1;
  modelica_boolean _isPrio;
  modelica_metatype out_isPrio;
  tmp1 = mmc_unbox_integer(_idx);
  _isPrio = omc_HpcOmScheduler_isPrioNode(threadData, tmp1, _prioArr);
  out_isPrio = mmc_mk_icon(_isPrio);
  return out_isPrio;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createMetisSchedule2(threadData_t *threadData, modelica_metatype _levelNodes, modelica_metatype _priorityArr, modelica_metatype _prioLstIn, modelica_metatype _otherLstIn, modelica_metatype *out_otherLstOut)
{
  modelica_metatype _prioLstOut = NULL;
  modelica_metatype _otherLstOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _prioLstOut has no default value.
  // _otherLstOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _levelNodes;
    {
      modelica_metatype _level = NULL;
      modelica_metatype _prioLst = NULL;
      modelica_metatype _otherLst = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _level has no default value.
      // _prioLst has no default value.
      // _otherLst has no default value.
      // _rest has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _prioLstIn;
          tmpMeta[0+1] = _otherLstIn;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          _level = tmpMeta6;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _prioLst = omc_List_split1OnTrue(threadData, _level, boxvar_HpcOmScheduler_isPrioNode, _priorityArr ,&_otherLst);

          _prioLst = listAppend(_prioLstIn, _prioLst);

          _otherLst = listAppend(_otherLstIn, _otherLst);
          /* Tail recursive call */
          _levelNodes = _rest;
          _prioLstIn = _prioLst;
          _otherLstIn = _otherLst;
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
  _prioLstOut = tmpMeta[0+0];
  _otherLstOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_otherLstOut) { *out_otherLstOut = _otherLstOut; }
  return _prioLstOut;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_getProcAss(threadData_t *threadData, modelica_integer _idx, modelica_metatype _taskAss, modelica_metatype _procAss)
{
  modelica_integer _thread;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _thread has no default value.
  _thread = mmc_unbox_integer(arrayGet(_taskAss, _idx));

  tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_idx), MMC_REFSTRUCTLIT(mmc_nil));
  omc_Array_appendToElement(threadData, _thread, tmpMeta1, _procAss);
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmScheduler_getProcAss(threadData_t *threadData, modelica_metatype _idx, modelica_metatype _taskAss, modelica_metatype _procAss)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_idx);
  omc_HpcOmScheduler_getProcAss(threadData, tmp1, _taskAss, _procAss);
  return;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createMetisSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _extInfo = NULL;
  modelica_metatype _xadj = NULL;
  modelica_metatype _adjncy = NULL;
  modelica_metatype _vwgt = NULL;
  modelica_metatype _adjwgt = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype _extInfoArr = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _rootNodes = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _priorityArr = NULL;
  modelica_metatype _levelNodes = NULL;
  modelica_metatype _procAss = NULL;
  modelica_metatype _priorityTasks = NULL;
  modelica_metatype _otherTasks = NULL;
  modelica_metatype _order = NULL;
  modelica_metatype _removeLocks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _extInfo has no default value.
  // _xadj has no default value.
  // _adjncy has no default value.
  // _vwgt has no default value.
  // _adjwgt has no default value.
  // _tmpSchedule has no default value.
  // _extInfoArr has no default value.
  // _taskGraphT has no default value.
  // _threadTasks has no default value.
  // _rootNodes has no default value.
  // _allCalcTasks has no default value.
  // _commCosts has no default value.
  // _inComps has no default value.
  // _priorityArr has no default value.
  // _levelNodes has no default value.
  // _procAss has no default value.
  // _priorityTasks has no default value.
  // _otherTasks has no default value.
  // _order has no default value.
  // _removeLocks has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iTaskGraphMeta;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 9));
          
          _inComps = tmpMeta6;
          _commCosts = tmpMeta7;
          /* Pattern matching succeeded */
          _xadj = omc_HpcOmScheduler_prepareMetis(threadData, _iTaskGraph, _iTaskGraphMeta ,&_adjncy ,&_vwgt ,&_adjwgt);

          if((_iNumberOfThreads > ((modelica_integer) 1)))
          {
            _extInfo = omc_HpcOmSchedulerExt_scheduleMetis(threadData, _xadj, _adjncy, _vwgt, _adjwgt, _iNumberOfThreads);

            _extInfoArr = listArray(_extInfo);
          }
          else
          {
            _extInfoArr = arrayCreate(arrayLength(_iTaskGraph), mmc_mk_integer(((modelica_integer) 1)));

            _extInfo = arrayList(_extInfoArr);
          }

          /* Pattern-matching assignment */
          tmp8 = (arrayLength(_iTaskGraph) == arrayLength(_extInfoArr));
          if (1 /* true */ != tmp8) goto goto_2;

          _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, arrayLength(_iTaskGraph));

          _rootNodes = omc_HpcOmTaskGraph_getRootNodes(threadData, _iTaskGraph);

          _priorityArr = arrayCreate(arrayLength(_iTaskGraph), mmc_mk_integer(((modelica_integer) 0)));

          omc_HpcOmScheduler_createMetisSchedule1(threadData, omc_List_intRange(threadData, arrayLength(_iTaskGraph)), _extInfoArr, _iTaskGraph, _taskGraphT, _priorityArr);

          _levelNodes = omc_HpcOmTaskGraph_getLevelNodes(threadData, _iTaskGraph);

          _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _taskGraphT, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTask);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _priorityTasks = omc_HpcOmScheduler_createMetisSchedule2(threadData, _levelNodes, _priorityArr, tmpMeta9, tmpMeta10 ,&_otherTasks);

          _order = listAppend(_priorityTasks, _otherTasks);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _procAss = arrayCreate(_iNumberOfThreads, tmpMeta11);

          omc_List_map2__0(threadData, omc_List_intRange(threadData, arrayLength(_iTaskGraph)), boxvar_HpcOmScheduler_getProcAss, _extInfoArr, _procAss);

          tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
          _threadTasks = arrayCreate(_iNumberOfThreads, tmpMeta12);

          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          _removeLocks = tmpMeta13;

          tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta16 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, tmpMeta14, tmpMeta15, _allCalcTasks);
          _tmpSchedule = tmpMeta16;

          _tmpSchedule = omc_HpcOmScheduler_createScheduleFromAssignments(threadData, _extInfoArr, _procAss, mmc_mk_some(_order), _iTaskGraph, _taskGraphT, _iTaskGraphMeta, _iSccSimEqMapping, _removeLocks, _order, _iSimVarMapping, _tmpSchedule ,&_removeLocks);

          if(omc_Flags_isSet(threadData, _OMC_LIT29))
          {
            tmp17 = ((modelica_integer) 2);
            if (tmp17 == 0) {goto goto_2;}
            tmpMeta18 = stringAppend(_OMC_LIT61,intString(modelica_div_integer(listLength(_removeLocks),tmp17).quot));
            tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT6);
            fputs(MMC_STRINGDATA(tmpMeta19),stdout);
          }

          _tmpSchedule = omc_HpcOmScheduler_traverseAndUpdateThreadsInSchedule(threadData, _tmpSchedule, boxvar_HpcOmScheduler_removeLocksFromThread, _removeLocks);

          _tmpSchedule = omc_HpcOmScheduler_updateLockIdcsInThreadschedule(threadData, _tmpSchedule, boxvar_HpcOmScheduler_removeLocksFromLockList, _removeLocks);
          tmpMeta1 = omc_HpcOmScheduler_setScheduleLockIds(threadData, _tmpSchedule);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT113),stdout);
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
  _oSchedule = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createMetisSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oSchedule = omc_HpcOmScheduler_createMetisSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, tmp1, _iSccSimEqMapping, _iSimVarMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_filterNodeLevelMapping(threadData_t *threadData, modelica_metatype _iElem)
{
  modelica_metatype _oElem = NULL;
  modelica_metatype _task = NULL;
  modelica_metatype _childTasks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oElem has no default value.
  // _task has no default value.
  // _childTasks has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iElem;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _task = tmpMeta2;
  _childTasks = tmpMeta3;

  tmpMeta4 = mmc_mk_box2(0, _task, _childTasks);
  _oElem = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _oElem;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_sortNodeLevelMapping(threadData_t *threadData, modelica_metatype _iElem1, modelica_metatype _iElem2)
{
  modelica_boolean _oResult;
  modelica_integer _elemLvl1;
  modelica_integer _elemLvl2;
  modelica_integer _task1Idx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oResult has no default value.
  // _elemLvl1 has no default value.
  // _elemLvl2 has no default value.
  // _task1Idx has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iElem1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta2,1,6) == 0) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 3));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _task1Idx = tmp4  /* pattern as ty=Integer */;
  _elemLvl1 = tmp6  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta7 = _iElem2;
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
  tmp9 = mmc_unbox_integer(tmpMeta8);
  _elemLvl2 = tmp9  /* pattern as ty=Integer */;

  _oResult = (_elemLvl1 >= _elemLvl2);
  _return: OMC_LABEL_UNUSED
  return _oResult;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_sortNodeLevelMapping(threadData_t *threadData, modelica_metatype _iElem1, modelica_metatype _iElem2)
{
  modelica_boolean _oResult;
  modelica_metatype out_oResult;
  _oResult = omc_HpcOmScheduler_sortNodeLevelMapping(threadData, _iElem1, _iElem2);
  out_oResult = mmc_mk_icon(_oResult);
  return out_oResult;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createNodeLevelMapping(threadData_t *threadData, modelica_metatype _iNodeDependenciesT, modelica_metatype _nodeMarks, modelica_metatype _inComps, modelica_metatype _iSccSimEqMapping, modelica_metatype _iNodeInfo)
{
  modelica_metatype _oNodeInfo = NULL;
  modelica_metatype _task = NULL;
  modelica_integer _nodeIdx;
  modelica_integer _nodeMark;
  modelica_metatype _components = NULL;
  modelica_metatype _simEqIdc = NULL;
  modelica_metatype _nodeLevelMap = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oNodeInfo has no default value.
  // _task has no default value.
  // _nodeIdx has no default value.
  // _nodeMark has no default value.
  // _components has no default value.
  // _simEqIdc has no default value.
  // _nodeLevelMap has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iNodeInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _nodeIdx = tmp3  /* pattern as ty=Integer */;
  _nodeLevelMap = tmpMeta4;

  _components = arrayGet(_inComps, _nodeIdx);

  _nodeMark = mmc_unbox_integer(arrayGet(_nodeMarks, mmc_unbox_integer(omc_List_last(threadData, _components))));

  _simEqIdc = omc_List_map(threadData, omc_List_map1(threadData, _components, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _iSccSimEqMapping), boxvar_List_last);

  tmpMeta5 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(((modelica_integer) -1)), mmc_mk_integer(_nodeIdx), _OMC_LIT55, _OMC_LIT55, mmc_mk_integer(((modelica_integer) -1)), _simEqIdc);
  _task = tmpMeta5;

  tmpMeta7 = mmc_mk_box3(0, _task, mmc_mk_integer(_nodeMark), _iNodeDependenciesT);
  tmpMeta6 = mmc_mk_cons(tmpMeta7, _nodeLevelMap);
  _nodeLevelMap = tmpMeta6;

  tmpMeta8 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _nodeIdx), _nodeLevelMap);
  _oNodeInfo = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _oNodeInfo;
}

static modelica_metatype closure11_HpcOmScheduler_createNodeLevelMapping(threadData_t *thData, modelica_metatype closure, modelica_metatype iNodeDependenciesT, modelica_metatype iNodeInfo)
{
  modelica_metatype nodeMarks = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype inComps = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iSccSimEqMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_HpcOmScheduler_createNodeLevelMapping(thData, iNodeDependenciesT, nodeMarks, inComps, iSccSimEqMapping, iNodeInfo);
}
DLLDirection
modelica_metatype omc_HpcOmScheduler_createTaskDepSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _nodeMark = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _nodeLevelMap = NULL;
  modelica_metatype _filteredNodeLevelMap = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _tmpSchedule has no default value.
  // _inComps has no default value.
  // _nodeMark has no default value.
  // _taskGraphT has no default value.
  // _nodeLevelMap has no default value.
  // _filteredNodeLevelMap has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iTaskGraphMeta;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
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
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          
          _inComps = tmpMeta6;
          _nodeMark = tmpMeta7;
          /* Pattern matching succeeded */
          _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, arrayLength(_iTaskGraph));

          /* Pattern-matching assignment */
          tmpMeta8 = mmc_mk_box3(0, _nodeMark, _inComps, _iSccSimEqMapping);
          tmpMeta9 = omc_Array_fold(threadData, _taskGraphT, (modelica_fnptr) mmc_mk_box2(0,closure11_HpcOmScheduler_createNodeLevelMapping,tmpMeta8), _OMC_LIT114);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          _nodeLevelMap = tmpMeta10;

          _nodeLevelMap = omc_List_sort(threadData, _nodeLevelMap, boxvar_HpcOmScheduler_sortNodeLevelMapping);

          _filteredNodeLevelMap = omc_List_map(threadData, _nodeLevelMap, boxvar_HpcOmScheduler_filterNodeLevelMapping);

          _filteredNodeLevelMap = listReverse(_filteredNodeLevelMap);
          tmpMeta11 = mmc_mk_box2(5, &HpcOmSimCode_Schedule_TASKDEPSCHEDULE__desc, _filteredNodeLevelMap);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT115),stdout);
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
  _oSchedule = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getFirstReadyThread0(threadData_t *threadData, modelica_real _iThreadReadyTime, modelica_metatype _iFirstReadyThread)
{
  modelica_metatype _oFirstReadyThread = NULL;
  modelica_integer _firstThreadIdx;
  modelica_integer _currentThreadIdx;
  modelica_real _readyTime;
  modelica_boolean _isLower;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oFirstReadyThread has no default value.
  // _firstThreadIdx has no default value.
  // _currentThreadIdx has no default value.
  // _readyTime has no default value.
  // _isLower has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iFirstReadyThread;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (-1 != tmp7) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          _currentThreadIdx = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box3(0, mmc_mk_integer(_currentThreadIdx), mmc_mk_real(_iThreadReadyTime), mmc_mk_integer(((modelica_integer) 1) + _currentThreadIdx));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_real tmp14;
          modelica_metatype tmpMeta15;
          modelica_integer tmp16;
          modelica_metatype tmpMeta17;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp14 = mmc_unbox_real(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp16 = mmc_unbox_integer(tmpMeta15);
          _firstThreadIdx = tmp12  /* pattern as ty=Integer */;
          _readyTime = tmp14  /* pattern as ty=Real */;
          _currentThreadIdx = tmp16  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _isLower = (_iThreadReadyTime < _readyTime);

          _firstThreadIdx = (_isLower?_currentThreadIdx:_firstThreadIdx);

          _readyTime = (_isLower?_iThreadReadyTime:_readyTime);
          tmpMeta17 = mmc_mk_box3(0, mmc_mk_integer(_firstThreadIdx), mmc_mk_real(_readyTime), mmc_mk_integer(((modelica_integer) 1) + _currentThreadIdx));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT116),stdout);
          tmpMeta1 = _iFirstReadyThread;
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
  _oFirstReadyThread = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oFirstReadyThread;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getFirstReadyThread0(threadData_t *threadData, modelica_metatype _iThreadReadyTime, modelica_metatype _iFirstReadyThread)
{
  modelica_real tmp1;
  modelica_metatype _oFirstReadyThread = NULL;
  tmp1 = mmc_unbox_real(_iThreadReadyTime);
  _oFirstReadyThread = omc_HpcOmScheduler_getFirstReadyThread0(threadData, tmp1, _iFirstReadyThread);
  /* skip box _oFirstReadyThread; tuple<#Integer, #Real, #Integer> */
  return _oFirstReadyThread;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getFirstReadyThread(threadData_t *threadData, modelica_metatype _iThreadReadyList)
{
  modelica_integer _oFirstReadyThreadIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oFirstReadyThreadIdx has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = omc_Array_fold(threadData, _iThreadReadyList, boxvar_HpcOmScheduler_getFirstReadyThread0, _OMC_LIT117);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _oFirstReadyThreadIdx = tmp3  /* pattern as ty=Integer */;
  _return: OMC_LABEL_UNUSED
  return _oFirstReadyThreadIdx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getFirstReadyThread(threadData_t *threadData, modelica_metatype _iThreadReadyList)
{
  modelica_integer _oFirstReadyThreadIdx;
  modelica_metatype out_oFirstReadyThreadIdx;
  _oFirstReadyThreadIdx = omc_HpcOmScheduler_getFirstReadyThread(threadData, _iThreadReadyList);
  out_oFirstReadyThreadIdx = mmc_mk_icon(_oFirstReadyThreadIdx);
  return out_oFirstReadyThreadIdx;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmScheduler_getBestFittingThread(threadData_t *threadData, modelica_metatype _iAdviceList, modelica_real _iLevelExecCosts, modelica_metatype _iThreadReadyList)
{
  modelica_integer _oThreadIdx;
  modelica_real _averageThreadTime;
  modelica_real _readyTime;
  modelica_integer _numOfThreads;
  modelica_integer _threadIdx;
  modelica_integer _head;
  modelica_metatype _tail = NULL;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oThreadIdx has no default value.
  // _averageThreadTime has no default value.
  // _readyTime has no default value.
  // _numOfThreads has no default value.
  // _threadIdx has no default value.
  // _head has no default value.
  // _tail has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iAdviceList;
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
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_HpcOmScheduler_getFirstReadyThread(threadData, _iThreadReadyList);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_real tmp9;
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _head = tmp8  /* pattern as ty=Integer */;
          _tail = tmpMeta7;
          /* Pattern matching succeeded */
          _readyTime = mmc_unbox_real(arrayGet(_iThreadReadyList, _head));

          _numOfThreads = arrayLength(_iThreadReadyList);

          tmp9 = ((modelica_real)_numOfThreads);
          if (tmp9 == 0) {goto goto_2;}
          _averageThreadTime = (_iLevelExecCosts) / tmp9;

          /* Pattern-matching assignment */
          tmp10 = (_readyTime < _averageThreadTime);
          if (1 /* true */ != tmp10) goto goto_2;
          tmp1 = _head;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          tmp13 = mmc_unbox_integer(tmpMeta11);
          _head = tmp13  /* pattern as ty=Integer */;
          _tail = tmpMeta12;
          /* Pattern matching succeeded */
          tmp1 = omc_HpcOmScheduler_getBestFittingThread(threadData, _tail, _iLevelExecCosts, _iThreadReadyList);
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
  _oThreadIdx = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oThreadIdx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getBestFittingThread(threadData_t *threadData, modelica_metatype _iAdviceList, modelica_metatype _iLevelExecCosts, modelica_metatype _iThreadReadyList)
{
  modelica_real tmp1;
  modelica_integer _oThreadIdx;
  modelica_metatype out_oThreadIdx;
  tmp1 = mmc_unbox_real(_iLevelExecCosts);
  _oThreadIdx = omc_HpcOmScheduler_getBestFittingThread(threadData, _iAdviceList, tmp1, _iThreadReadyList);
  out_oThreadIdx = mmc_mk_icon(_oThreadIdx);
  return out_oThreadIdx;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_intTpl22Gt(threadData_t *threadData, modelica_metatype _iTpl1, modelica_metatype _iTpl2)
{
  modelica_boolean _oRes;
  modelica_integer _val1;
  modelica_integer _val2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oRes has no default value.
  // _val1 has no default value.
  // _val2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTpl1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _val1 = tmp3  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta4 = _iTpl2;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _val2 = tmp6  /* pattern as ty=Integer */;

  _oRes = (_val1 > _val2);
  _return: OMC_LABEL_UNUSED
  return _oRes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_intTpl22Gt(threadData_t *threadData, modelica_metatype _iTpl1, modelica_metatype _iTpl2)
{
  modelica_boolean _oRes;
  modelica_metatype out_oRes;
  _oRes = omc_HpcOmScheduler_intTpl22Gt(threadData, _iTpl1, _iTpl2);
  out_oRes = mmc_mk_icon(_oRes);
  return out_oRes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_arrayToTupleListZeroRemoved(threadData_t *threadData, modelica_metatype _iArray, modelica_integer _iCurrentIdx, modelica_metatype _iTupleList)
{
  modelica_metatype _oTupleList = NULL;
  modelica_metatype _tmpTupleList = NULL;
  modelica_integer _currentValue;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTupleList has no default value.
  // _tmpTupleList has no default value.
  // _currentValue has no default value.
  { /* matchcontinue expression */
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
          modelica_boolean tmp6;
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_iCurrentIdx <= arrayLength(_iArray));
          if (1 /* true */ != tmp6) goto goto_2;

          _currentValue = mmc_unbox_integer(arrayGet(_iArray, _iCurrentIdx));

          /* Pattern-matching assignment */
          tmp7 = (_currentValue != ((modelica_integer) 0));
          if (1 /* true */ != tmp7) goto goto_2;

          tmpMeta9 = mmc_mk_box2(0, mmc_mk_integer(_iCurrentIdx), mmc_mk_integer(_currentValue));
          tmpMeta8 = mmc_mk_cons(tmpMeta9, _iTupleList);
          _tmpTupleList = tmpMeta8;
          tmpMeta1 = omc_HpcOmScheduler_arrayToTupleListZeroRemoved(threadData, _iArray, ((modelica_integer) 1) + _iCurrentIdx, _tmpTupleList);
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp10;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (_iCurrentIdx <= arrayLength(_iArray));
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta1 = omc_HpcOmScheduler_arrayToTupleListZeroRemoved(threadData, _iArray, ((modelica_integer) 1) + _iCurrentIdx, _iTupleList);
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iTupleList;
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
  _oTupleList = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTupleList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_arrayToTupleListZeroRemoved(threadData_t *threadData, modelica_metatype _iArray, modelica_metatype _iCurrentIdx, modelica_metatype _iTupleList)
{
  modelica_integer tmp1;
  modelica_metatype _oTupleList = NULL;
  tmp1 = mmc_unbox_integer(_iCurrentIdx);
  _oTupleList = omc_HpcOmScheduler_arrayToTupleListZeroRemoved(threadData, _iArray, tmp1, _iTupleList);
  /* skip box _oTupleList; list<tuple<#Integer, #Integer>> */
  return _oTupleList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_flattenAdviceListElem(threadData_t *threadData, modelica_integer _iAdviceElem, modelica_metatype _iCounterArray)
{
  modelica_metatype _oCounterArray = NULL;
  modelica_integer _counter;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCounterArray has no default value.
  // _counter has no default value.
  _counter = mmc_unbox_integer(arrayGet(_iCounterArray, _iAdviceElem));

  _counter = ((modelica_integer) 1) + _counter;

  _oCounterArray = arrayUpdate(_iCounterArray, _iAdviceElem, mmc_mk_integer(_counter));
  _return: OMC_LABEL_UNUSED
  return _oCounterArray;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_flattenAdviceListElem(threadData_t *threadData, modelica_metatype _iAdviceElem, modelica_metatype _iCounterArray)
{
  modelica_integer tmp1;
  modelica_metatype _oCounterArray = NULL;
  tmp1 = mmc_unbox_integer(_iAdviceElem);
  _oCounterArray = omc_HpcOmScheduler_flattenAdviceListElem(threadData, tmp1, _iCounterArray);
  /* skip box _oCounterArray; array<#Integer> */
  return _oCounterArray;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_flattenAdviceList(threadData_t *threadData, modelica_metatype _iAdviceList, modelica_integer _iNumOfThreads)
{
  modelica_metatype _oAdviceList = NULL;
  modelica_metatype _counterArray = NULL;
  modelica_metatype _tupleList = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAdviceList has no default value.
  // _counterArray has no default value.
  // _tupleList has no default value.
  _counterArray = arrayCreate(_iNumOfThreads, mmc_mk_integer(((modelica_integer) 0)));

  _counterArray = omc_List_fold(threadData, _iAdviceList, boxvar_HpcOmScheduler_flattenAdviceListElem, _counterArray);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tupleList = omc_HpcOmScheduler_arrayToTupleListZeroRemoved(threadData, _counterArray, ((modelica_integer) 1), tmpMeta1);

  _oAdviceList = omc_List_map(threadData, omc_List_sort(threadData, _tupleList, boxvar_HpcOmScheduler_intTpl22Gt), boxvar_Util_tuple21);
  _return: OMC_LABEL_UNUSED
  return _oAdviceList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_flattenAdviceList(threadData_t *threadData, modelica_metatype _iAdviceList, modelica_metatype _iNumOfThreads)
{
  modelica_integer tmp1;
  modelica_metatype _oAdviceList = NULL;
  tmp1 = mmc_unbox_integer(_iNumOfThreads);
  _oAdviceList = omc_HpcOmScheduler_flattenAdviceList(threadData, _iAdviceList, tmp1);
  /* skip box _oAdviceList; list<#Integer> */
  return _oAdviceList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createFixedLevelScheduleForTask0(threadData_t *threadData, modelica_integer _iSuccessor, modelica_integer _iThreadAdvice, modelica_metatype _iAdviceList)
{
  modelica_metatype _oAdviceList = NULL;
  modelica_metatype _adviceElem = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAdviceList has no default value.
  // _adviceElem has no default value.
  _adviceElem = arrayGet(_iAdviceList, _iSuccessor);

  tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_iThreadAdvice), _adviceElem);
  _adviceElem = tmpMeta1;

  _oAdviceList = arrayUpdate(_iAdviceList, _iSuccessor, _adviceElem);
  _return: OMC_LABEL_UNUSED
  return _oAdviceList;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createFixedLevelScheduleForTask0(threadData_t *threadData, modelica_metatype _iSuccessor, modelica_metatype _iThreadAdvice, modelica_metatype _iAdviceList)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oAdviceList = NULL;
  tmp1 = mmc_unbox_integer(_iSuccessor);
  tmp2 = mmc_unbox_integer(_iThreadAdvice);
  _oAdviceList = omc_HpcOmScheduler_createFixedLevelScheduleForTask0(threadData, tmp1, tmp2, _iAdviceList);
  /* skip box _oAdviceList; array<list<#Integer>> */
  return _oAdviceList;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createFixedLevelScheduleForTask(threadData_t *threadData, modelica_integer _iTaskIdx, modelica_real _iLevelExecCosts, modelica_metatype _iAdviceList, modelica_metatype _iThreadReadyList, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iThreadTasks)
{
  modelica_metatype _oThreadTasks = NULL;
  modelica_metatype _adviceElem = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _successorList = NULL;
  modelica_integer _threadIdx;
  modelica_real _threadReadyTime;
  modelica_real _exeCost;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oThreadTasks has no default value.
  // _adviceElem has no default value.
  // _threadTasks has no default value.
  // _successorList has no default value.
  // _threadIdx has no default value.
  // _threadReadyTime has no default value.
  // _exeCost has no default value.
  _adviceElem = arrayGet(_iAdviceList, _iTaskIdx);

  _adviceElem = omc_HpcOmScheduler_flattenAdviceList(threadData, _adviceElem, arrayLength(_iThreadReadyList));

  _threadIdx = omc_HpcOmScheduler_getBestFittingThread(threadData, _adviceElem, _iLevelExecCosts, _iThreadReadyList);

  _threadTasks = arrayGet(_iThreadTasks, _threadIdx);

  _successorList = arrayGet(_iGraph, _iTaskIdx);

  omc_List_fold1(threadData, _successorList, boxvar_HpcOmScheduler_createFixedLevelScheduleForTask0, mmc_mk_integer(_threadIdx), _iAdviceList);

  _threadReadyTime = mmc_unbox_real(arrayGet(_iThreadReadyList, _threadIdx));

  /* Pattern-matching assignment */
  tmpMeta1 = omc_HpcOmTaskGraph_getExeCost(threadData, _iTaskIdx, _iMeta);
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp3 = mmc_unbox_real(tmpMeta2);
  _exeCost = tmp3  /* pattern as ty=Real */;

  _threadReadyTime = _threadReadyTime + _exeCost;

  arrayUpdate(_iThreadReadyList, _threadIdx, mmc_mk_real(_threadReadyTime));

  tmpMeta4 = mmc_mk_cons(mmc_mk_integer(_iTaskIdx), _threadTasks);
  _threadTasks = tmpMeta4;

  _oThreadTasks = arrayUpdate(_iThreadTasks, _threadIdx, _threadTasks);
  _return: OMC_LABEL_UNUSED
  return _oThreadTasks;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createFixedLevelScheduleForTask(threadData_t *threadData, modelica_metatype _iTaskIdx, modelica_metatype _iLevelExecCosts, modelica_metatype _iAdviceList, modelica_metatype _iThreadReadyList, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iThreadTasks)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_metatype _oThreadTasks = NULL;
  tmp1 = mmc_unbox_integer(_iTaskIdx);
  tmp2 = mmc_unbox_real(_iLevelExecCosts);
  _oThreadTasks = omc_HpcOmScheduler_createFixedLevelScheduleForTask(threadData, tmp1, tmp2, _iAdviceList, _iThreadReadyList, _iGraph, _iMeta, _iThreadTasks);
  /* skip box _oThreadTasks; array<list<#Integer>> */
  return _oThreadTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createFixedLevelScheduleForLevel0(threadData_t *threadData, modelica_metatype _iTaskList, modelica_metatype _iComps, modelica_metatype _iSccSimEqMapping, modelica_metatype _iIdxTaskList)
{
  modelica_metatype _oIdxTaskList = NULL;
  modelica_integer _threadIdx;
  modelica_metatype _taskList = NULL;
  modelica_metatype _newTask = NULL;
  modelica_metatype _components = NULL;
  modelica_metatype _simEqs = NULL;
  modelica_integer _taskIdx;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oIdxTaskList has no default value.
  // _threadIdx has no default value.
  // _taskList has no default value.
  // _newTask has no default value.
  // _components has no default value.
  // _simEqs has no default value.
  // _taskIdx has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iIdxTaskList;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _threadIdx = tmp3  /* pattern as ty=Integer */;
  _taskList = tmpMeta4;

  {
    modelica_metatype _taskIdx;
    for (tmpMeta5 = _iTaskList; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
    {
      _taskIdx = MMC_CAR(tmpMeta5);
      _components = arrayGet(_iComps, mmc_unbox_integer(_taskIdx));

      _simEqs = omc_List_flatten(threadData, omc_List_map(threadData, omc_List_map1(threadData, _components, boxvar_Array_getIndexFirst, _iSccSimEqMapping), boxvar_listReverse));

      if((!listEmpty(_simEqs)))
      {
        _simEqs = _simEqs;

        tmpMeta6 = mmc_mk_cons(_taskIdx, MMC_REFSTRUCTLIT(mmc_nil));
        tmpMeta7 = mmc_mk_box4(5, &HpcOmSimCode_Task_CALCTASK__LEVEL__desc, _simEqs, tmpMeta6, mmc_mk_some(mmc_mk_integer(_threadIdx)));
        _newTask = tmpMeta7;

        tmpMeta8 = mmc_mk_cons(_newTask, _taskList);
        _taskList = tmpMeta8;
      }
    }
  }

  tmpMeta10 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _threadIdx), _taskList);
  _oIdxTaskList = tmpMeta10;
  _return: OMC_LABEL_UNUSED
  return _oIdxTaskList;
}

static modelica_metatype closure12_HpcOmTaskGraph_compareTasksByExecTime(threadData_t *thData, modelica_metatype closure, modelica_metatype iTask1, modelica_metatype iTask2)
{
  modelica_metatype iTaskComps = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iExeCosts = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iDescending = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_HpcOmTaskGraph_compareTasksByExecTime(thData, iTask1, iTask2, iTaskComps, iExeCosts, iDescending);
}static modelica_metatype closure13_HpcOmScheduler_createFixedLevelScheduleForTask(threadData_t *thData, modelica_metatype closure, modelica_metatype iTaskIdx, modelica_metatype iThreadTasks)
{
  modelica_metatype iLevelExecCosts = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iAdviceList = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iThreadReadyList = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iGraph = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iMeta = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  return boxptr_HpcOmScheduler_createFixedLevelScheduleForTask(thData, iTaskIdx, iLevelExecCosts, iAdviceList, iThreadReadyList, iGraph, iMeta, iThreadTasks);
}static modelica_metatype closure14_HpcOmScheduler_createFixedLevelScheduleForLevel0(threadData_t *thData, modelica_metatype closure, modelica_metatype iTaskList, modelica_metatype iIdxTaskList)
{
  modelica_metatype iComps = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iSccSimEqMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmScheduler_createFixedLevelScheduleForLevel0(thData, iTaskList, iComps, iSccSimEqMapping, iIdxTaskList);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createFixedLevelScheduleForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iAdviceList, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iLevelTaskLists)
{
  modelica_metatype _oLevelTaskLists = NULL;
  modelica_real _levelExecCosts;
  modelica_metatype _threadReadyList = NULL;
  modelica_metatype _threadTaskList = NULL;
  modelica_metatype _exeCosts = NULL;
  modelica_metatype _taskList = NULL;
  modelica_metatype _tasksOfLevel = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _sortedTasksOfLevel = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLevelTaskLists has no default value.
  // _levelExecCosts has no default value.
  // _threadReadyList has no default value.
  // _threadTaskList has no default value.
  // _exeCosts has no default value.
  // _taskList has no default value.
  // _tasksOfLevel has no default value.
  // _inComps has no default value.
  // _sortedTasksOfLevel has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 8));
  _inComps = tmpMeta2;
  _exeCosts = tmpMeta3;

  _levelExecCosts = omc_HpcOmTaskGraph_getCostsForContractedNodes(threadData, _iTasksOfLevel, _exeCosts);

  _threadReadyList = arrayCreate(_iNumberOfThreads, _OMC_LIT21);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _threadTaskList = arrayCreate(_iNumberOfThreads, tmpMeta4);

  tmpMeta5 = mmc_mk_box3(0, _inComps, _exeCosts, mmc_mk_boolean(1 /* true */));
  _sortedTasksOfLevel = omc_List_sort(threadData, _iTasksOfLevel, (modelica_fnptr) mmc_mk_box2(0,closure12_HpcOmTaskGraph_compareTasksByExecTime,tmpMeta5));

  tmpMeta6 = mmc_mk_box5(0, mmc_mk_real(_levelExecCosts), _iAdviceList, _threadReadyList, _iGraph, _iMeta);
  omc_List_fold(threadData, _sortedTasksOfLevel, (modelica_fnptr) mmc_mk_box2(0,closure13_HpcOmScheduler_createFixedLevelScheduleForTask,tmpMeta6), _threadTaskList);

  _threadTaskList = omc_Array_map(threadData, _threadTaskList, boxvar_listReverse);

  /* Pattern-matching assignment */
  tmpMeta7 = mmc_mk_box2(0, _inComps, _iSccSimEqMapping);
  tmpMeta8 = omc_Array_fold(threadData, _threadTaskList, (modelica_fnptr) mmc_mk_box2(0,closure14_HpcOmScheduler_createFixedLevelScheduleForLevel0,tmpMeta7), _OMC_LIT114);
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
  _tasksOfLevel = tmpMeta9;

  tmpMeta10 = mmc_mk_box2(3, &HpcOmSimCode_TaskList_PARALLELTASKLIST__desc, _tasksOfLevel);
  _taskList = tmpMeta10;

  tmpMeta11 = mmc_mk_cons(_taskList, _iLevelTaskLists);
  _oLevelTaskLists = tmpMeta11;
  _return: OMC_LABEL_UNUSED
  return _oLevelTaskLists;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createFixedLevelScheduleForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iAdviceList, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iLevelTaskLists)
{
  modelica_integer tmp1;
  modelica_metatype _oLevelTaskLists = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oLevelTaskLists = omc_HpcOmScheduler_createFixedLevelScheduleForLevel(threadData, _iTasksOfLevel, _iAdviceList, _iGraph, _iMeta, tmp1, _iSccSimEqMapping, _iLevelTaskLists);
  /* skip box _oLevelTaskLists; list<HpcOmSimCode.TaskList> */
  return _oLevelTaskLists;
}

static modelica_metatype closure15_HpcOmScheduler_createFixedLevelScheduleForLevel(threadData_t *thData, modelica_metatype closure, modelica_metatype iTasksOfLevel, modelica_metatype iLevelTaskLists)
{
  modelica_metatype iAdviceList = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iGraph = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iMeta = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iNumberOfThreads = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iSccSimEqMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  return boxptr_HpcOmScheduler_createFixedLevelScheduleForLevel(thData, iTasksOfLevel, iAdviceList, iGraph, iMeta, iNumberOfThreads, iSccSimEqMapping, iLevelTaskLists);
}
DLLDirection
modelica_metatype omc_HpcOmScheduler_createFixedLevelSchedule(threadData_t *threadData, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype *out_oMeta)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _oMeta = NULL;
  modelica_metatype _levelTasks = NULL;
  modelica_metatype _adviceLists = NULL;
  modelica_metatype _levelTaskLists = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _oMeta has no default value.
  // _levelTasks has no default value.
  // _adviceLists has no default value.
  // _levelTaskLists has no default value.
  _levelTasks = omc_HpcOmTaskGraph_getLevelNodes(threadData, _iGraph);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _adviceLists = arrayCreate(arrayLength(_iGraph), tmpMeta1);

  tmpMeta2 = mmc_mk_box5(0, _adviceLists, _iGraph, _iMeta, mmc_mk_integer(_iNumberOfThreads), _iSccSimEqMapping);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _levelTaskLists = omc_List_fold(threadData, _levelTasks, (modelica_fnptr) mmc_mk_box2(0,closure15_HpcOmScheduler_createFixedLevelScheduleForLevel,tmpMeta2), tmpMeta3);

  _levelTaskLists = listReverse(_levelTaskLists);

  tmpMeta4 = mmc_mk_box3(3, &HpcOmSimCode_Schedule_LEVELSCHEDULE__desc, _levelTaskLists, mmc_mk_boolean(1 /* true */));
  _oSchedule = tmpMeta4;

  _oMeta = _iMeta;
  _return: OMC_LABEL_UNUSED
  if (out_oMeta) { *out_oMeta = _oMeta; }
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createFixedLevelSchedule(threadData_t *threadData, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype *out_oMeta)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oSchedule = omc_HpcOmScheduler_createFixedLevelSchedule(threadData, _iGraph, _iMeta, tmp1, _iSccSimEqMapping, out_oMeta);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  /* skip box _oMeta; HpcOmTaskGraph.TaskGraphMeta */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpLevelSchedule(threadData_t *threadData, modelica_metatype _iLevelInfo, modelica_integer _iLevel, modelica_integer *out_oLevel)
{
  modelica_string _levelStr = NULL;
  modelica_integer _oLevel;
  modelica_string _s = NULL;
  modelica_metatype _tasks = NULL;
  modelica_string tmp1_c0 __attribute__((unused)) = 0;
  modelica_integer tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _levelStr has no default value.
  // _oLevel has no default value.
  // _s has no default value.
  // _tasks has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iLevelInfo;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,1) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          _tasks = tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT118,intString(_iLevel));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT119);
          _s = tmpMeta7;

          tmpMeta8 = stringAppend(_s,omc_HpcOmScheduler_dumpTaskList(threadData, _tasks));
          _s = tmpMeta8;
          tmp1_c0 = _s;
          tmp1_c1 = ((modelica_integer) 1) + _iLevel;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _tasks = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT120,intString(_iLevel));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT119);
          _s = tmpMeta11;

          tmpMeta12 = stringAppend(_s,omc_HpcOmScheduler_dumpTaskList(threadData, _tasks));
          _s = tmpMeta12;
          tmp1_c0 = _s;
          tmp1_c1 = ((modelica_integer) 1) + _iLevel;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT121),stdout);
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
  _levelStr = tmp1_c0;
  _oLevel = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_oLevel) { *out_oLevel = _oLevel; }
  return _levelStr;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_dumpLevelSchedule(threadData_t *threadData, modelica_metatype _iLevelInfo, modelica_metatype _iLevel, modelica_metatype *out_oLevel)
{
  modelica_integer tmp1;
  modelica_integer _oLevel;
  modelica_string _levelStr = NULL;
  tmp1 = mmc_unbox_integer(_iLevel);
  _levelStr = omc_HpcOmScheduler_dumpLevelSchedule(threadData, _iLevelInfo, tmp1, &_oLevel);
  /* skip box _levelStr; String */
  if (out_oLevel) { *out_oLevel = mmc_mk_icon(_oLevel); }
  return _levelStr;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_arrayIntIsNegative(threadData_t *threadData, modelica_integer _node, modelica_metatype _ass)
{
  modelica_boolean _isAss;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isAss has no default value.
  _isAss = (mmc_unbox_integer(arrayGet(_ass, _node)) < ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _isAss;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_arrayIntIsNegative(threadData_t *threadData, modelica_metatype _node, modelica_metatype _ass)
{
  modelica_integer tmp1;
  modelica_boolean _isAss;
  modelica_metatype out_isAss;
  tmp1 = mmc_unbox_integer(_node);
  _isAss = omc_HpcOmScheduler_arrayIntIsNegative(threadData, tmp1, _ass);
  out_isAss = mmc_mk_icon(_isAss);
  return out_isAss;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_makeCalcTask(threadData_t *threadData, modelica_metatype _simEqs, modelica_integer _node, modelica_integer _threadIdx)
{
  modelica_metatype _taskOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskOut has no default value.
  tmpMeta1 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(_node), _OMC_LIT96, _OMC_LIT96, mmc_mk_integer(_threadIdx), _simEqs);
  _taskOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _taskOut;
}
modelica_metatype boxptr_HpcOmScheduler_makeCalcTask(threadData_t *threadData, modelica_metatype _simEqs, modelica_metatype _node, modelica_metatype _threadIdx)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _taskOut = NULL;
  tmp1 = mmc_unbox_integer(_node);
  tmp2 = mmc_unbox_integer(_threadIdx);
  _taskOut = omc_HpcOmScheduler_makeCalcTask(threadData, _simEqs, tmp1, tmp2);
  /* skip box _taskOut; HpcOmSimCode.Task */
  return _taskOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_makeCalcTaskLevel(threadData_t *threadData, modelica_metatype _iNodeIdc, modelica_metatype _iNodeSccMapping, modelica_metatype _iSccSimEqMapping)
{
  modelica_metatype _oTask = NULL;
  modelica_metatype _simEqs = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _sccs = NULL;
  modelica_integer _sccIdx;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTask has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _simEqs = tmpMeta1;
  // _sccs has no default value.
  // _sccIdx has no default value.
  {
    modelica_metatype _nodeIdx;
    for (tmpMeta2 = _iNodeIdc; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _nodeIdx = MMC_CAR(tmpMeta2);
      _sccs = arrayGet(_iNodeSccMapping, mmc_unbox_integer(_nodeIdx));

      {
        modelica_metatype _sccIdx;
        for (tmpMeta3 = _sccs; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
        {
          _sccIdx = MMC_CAR(tmpMeta3);
          _simEqs = omc_List_append__reverse(threadData, arrayGet(_iSccSimEqMapping, mmc_unbox_integer(_sccIdx)), _simEqs);
        }
      }
    }
  }

  tmpMeta6 = mmc_mk_box4(5, &HpcOmSimCode_Task_CALCTASK__LEVEL__desc, listReverse(_simEqs), _iNodeIdc, mmc_mk_none());
  _oTask = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _oTask;
}

static modelica_metatype closure16_HpcOmScheduler_makeCalcTaskLevel(threadData_t *thData, modelica_metatype closure, modelica_metatype iNodeIdc)
{
  modelica_metatype iNodeSccMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iSccSimEqMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  return boxptr_HpcOmScheduler_makeCalcTaskLevel(thData, iNodeIdc, iNodeSccMapping, iSccSimEqMapping);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_makeCalcLevelParTaskLstForMergedNodes(threadData_t *threadData, modelica_metatype _iNodeIdc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iNodeSccMapping)
{
  modelica_metatype _oTasks = NULL;
  modelica_metatype _tmpList = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTasks has no default value.
  // _tmpList has no default value.
  tmpMeta1 = mmc_mk_box2(0, _iNodeSccMapping, _iSccSimEqMapping);
  _tmpList = omc_List_map(threadData, _iNodeIdc, (modelica_fnptr) mmc_mk_box2(0,closure16_HpcOmScheduler_makeCalcTaskLevel,tmpMeta1));

  tmpMeta2 = mmc_mk_box2(3, &HpcOmSimCode_TaskList_PARALLELTASKLIST__desc, _tmpList);
  _oTasks = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _oTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_makeCalcLevelParTaskLst(threadData_t *threadData, modelica_metatype _iNodeIdc, modelica_metatype _iSccSimEqMapping, modelica_metatype _iNodeSccMapping)
{
  modelica_metatype _oTasks = NULL;
  modelica_metatype _tmpList = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _nodeIdx;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTasks has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpList = tmpMeta1;
  // _nodeIdx has no default value.
  {
    modelica_metatype _nodeIdx;
    for (tmpMeta2 = listReverse(_iNodeIdc); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _nodeIdx = MMC_CAR(tmpMeta2);
      tmpMeta4 = mmc_mk_cons(_nodeIdx, MMC_REFSTRUCTLIT(mmc_nil));
      tmpMeta3 = mmc_mk_cons(tmpMeta4, _tmpList);
      _tmpList = tmpMeta3;
    }
  }

  _oTasks = omc_HpcOmScheduler_makeCalcLevelParTaskLstForMergedNodes(threadData, _tmpList, _iSccSimEqMapping, _iNodeSccMapping);
  _return: OMC_LABEL_UNUSED
  return _oTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLevelAssignment(threadData_t *threadData, modelica_metatype _level, modelica_metatype _tplIn)
{
  modelica_metatype _tplOut = NULL;
  modelica_integer _idx;
  modelica_metatype _ass = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tplOut has no default value.
  // _idx has no default value.
  // _ass has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tplIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _idx = tmp3  /* pattern as ty=Integer */;
  _ass = tmpMeta4;

  omc_List_map2__0(threadData, _level, boxvar_Array_updateIndexFirst, mmc_mk_integer(_idx), _ass);

  tmpMeta5 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1) + _idx), _ass);
  _tplOut = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _tplOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createLevelScheduleForLevel(threadData_t *threadData, modelica_metatype _iTasksOfLevel, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iLevelTaskLists)
{
  modelica_metatype _oLevelTaskLists = NULL;
  modelica_metatype _exeCosts = NULL;
  modelica_metatype _taskList = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _sortedTasksOfLevel = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLevelTaskLists has no default value.
  // _exeCosts has no default value.
  // _taskList has no default value.
  // _inComps has no default value.
  // _sortedTasksOfLevel has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 8));
  _inComps = tmpMeta2;
  _exeCosts = tmpMeta3;

  _sortedTasksOfLevel = _iTasksOfLevel;

  _taskList = omc_HpcOmScheduler_makeCalcLevelParTaskLst(threadData, _sortedTasksOfLevel, _iSccSimEqMapping, _inComps);

  tmpMeta4 = mmc_mk_cons(_taskList, _iLevelTaskLists);
  _oLevelTaskLists = tmpMeta4;
  _return: OMC_LABEL_UNUSED
  return _oLevelTaskLists;
}

static modelica_metatype closure17_HpcOmScheduler_createLevelScheduleForLevel(threadData_t *thData, modelica_metatype closure, modelica_metatype iTasksOfLevel, modelica_metatype iLevelTaskLists)
{
  modelica_metatype iGraph = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iMeta = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iSccSimEqMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_HpcOmScheduler_createLevelScheduleForLevel(thData, iTasksOfLevel, iGraph, iMeta, iSccSimEqMapping, iLevelTaskLists);
}
DLLDirection
modelica_metatype omc_HpcOmScheduler_createLevelSchedule(threadData_t *threadData, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype *out_oMeta)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _oMeta = NULL;
  modelica_metatype _levelTasks = NULL;
  modelica_metatype _levelTaskLists = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _oMeta has no default value.
  // _levelTasks has no default value.
  // _levelTaskLists has no default value.
  _levelTasks = omc_HpcOmTaskGraph_getLevelNodes(threadData, _iGraph);

  tmpMeta1 = mmc_mk_box3(0, _iGraph, _iMeta, _iSccSimEqMapping);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _levelTaskLists = omc_List_fold(threadData, _levelTasks, (modelica_fnptr) mmc_mk_box2(0,closure17_HpcOmScheduler_createLevelScheduleForLevel,tmpMeta1), tmpMeta2);

  _levelTaskLists = listReverse(_levelTaskLists);

  tmpMeta3 = mmc_mk_box3(3, &HpcOmSimCode_Schedule_LEVELSCHEDULE__desc, _levelTaskLists, mmc_mk_boolean(0 /* false */));
  _oSchedule = tmpMeta3;

  _oMeta = _iMeta;
  _return: OMC_LABEL_UNUSED
  if (out_oMeta) { *out_oMeta = _oMeta; }
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_deleteIntListMembers(threadData_t *threadData, modelica_metatype _lst1, modelica_metatype _lst2)
{
  modelica_metatype _lstOut = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lstOut has no default value.
  omc_List_intersection1OnTrue(threadData, _lst1, _lst2, boxvar_intEq ,&_lstOut ,NULL);
  _return: OMC_LABEL_UNUSED
  return _lstOut;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_realSum(threadData_t *threadData, modelica_metatype _reals)
{
  modelica_real _sum;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sum has no default value.
  _sum = mmc_unbox_real(omc_List_fold(threadData, _reals, boxvar_realAdd, _OMC_LIT21));
  _return: OMC_LABEL_UNUSED
  return _sum;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_realSum(threadData_t *threadData, modelica_metatype _reals)
{
  modelica_real _sum;
  modelica_metatype out_sum;
  _sum = omc_HpcOmScheduler_realSum(threadData, _reals);
  out_sum = mmc_mk_rcon(_sum);
  return out_sum;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__mergeToTargetSize(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _costsIn, modelica_real _targetSize, modelica_metatype _mergedNodesIn, modelica_metatype *out_clusterCostsOut)
{
  modelica_metatype _clustersOut = NULL;
  modelica_metatype _clusterCostsOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _clustersOut has no default value.
  // _clusterCostsOut has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _nodesIn;
    tmp4_2 = _costsIn;
    tmp4_3 = _mergedNodesIn;
    {
      modelica_integer _node;
      modelica_real _cost;
      modelica_real _clusterCost;
      modelica_metatype _nodeRest = NULL;
      modelica_metatype _cluster = NULL;
      modelica_metatype _clusterTmp = NULL;
      modelica_metatype _costRest = NULL;
      modelica_metatype _clusterCostsTmp = NULL;
      modelica_metatype _group = NULL;
      modelica_metatype _restGroups = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _cost has no default value.
      // _clusterCost has no default value.
      // _nodeRest has no default value.
      // _cluster has no default value.
      // _clusterTmp has no default value.
      // _costRest has no default value.
      // _clusterCostsTmp has no default value.
      // _group has no default value.
      // _restGroups has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 6; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          if (!listEmpty(tmp4_3)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta[0+0] = tmpMeta6;
          tmpMeta[0+1] = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (!listEmpty(tmp4_2)) goto tmp3_end;
          
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          _clusterCostsTmp = omc_List_map(threadData, _mergedNodesIn, boxvar_Util_tuple22);

          _clusterTmp = listReverse(omc_List_map(threadData, _mergedNodesIn, boxvar_Util_tuple21));

          /* Pattern-matching assignment */
          tmpMeta8 = _clusterTmp;
          if (listEmpty(tmpMeta8)) goto goto_2;
          tmpMeta9 = MMC_CAR(tmpMeta8);
          tmpMeta10 = MMC_CDR(tmpMeta8);
          _cluster = tmpMeta9;
          _clusterTmp = tmpMeta10;

          _cluster = (listEmpty(_clusterTmp)?listReverse(_cluster):_cluster);

          tmpMeta11 = mmc_mk_cons(_cluster, _clusterTmp);
          _clusterTmp = tmpMeta11;
          tmpMeta[0+0] = _clusterTmp;
          tmpMeta[0+1] = _clusterCostsTmp;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_real tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          tmp14 = mmc_unbox_integer(tmpMeta12);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta15 = MMC_CAR(tmp4_2);
          tmpMeta16 = MMC_CDR(tmp4_2);
          tmp17 = mmc_unbox_real(tmpMeta15);
          if (!listEmpty(tmp4_3)) goto tmp3_end;
          _node = tmp14  /* pattern as ty=Integer */;
          _nodeRest = tmpMeta13;
          _cost = tmp17  /* pattern as ty=Real */;
          _costRest = tmpMeta16;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta19 = mmc_mk_cons(mmc_mk_integer(_node), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta20 = mmc_mk_box2(0, tmpMeta19, mmc_mk_real(_cost));
          tmpMeta18 = mmc_mk_cons(tmpMeta20, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta[0+0] = omc_HpcOmScheduler_BLS__mergeToTargetSize(threadData, _nodeRest, _costRest, _targetSize, tmpMeta18, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_real tmp26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_real tmp32;
          modelica_boolean tmp33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta21 = MMC_CAR(tmp4_1);
          tmpMeta22 = MMC_CDR(tmp4_1);
          tmp23 = mmc_unbox_integer(tmpMeta21);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta24 = MMC_CAR(tmp4_2);
          tmpMeta25 = MMC_CDR(tmp4_2);
          tmp26 = mmc_unbox_real(tmpMeta24);
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta27 = MMC_CAR(tmp4_3);
          tmpMeta28 = MMC_CDR(tmp4_3);
          _node = tmp23  /* pattern as ty=Integer */;
          _nodeRest = tmpMeta22;
          _cost = tmp26  /* pattern as ty=Real */;
          _costRest = tmpMeta25;
          _group = tmpMeta27;
          _restGroups = tmpMeta28;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta29 = _group;
          tmpMeta30 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 1));
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta29), 2));
          tmp32 = mmc_unbox_real(tmpMeta31);
          _cluster = tmpMeta30;
          _clusterCost = tmp32  /* pattern as ty=Real */;

          /* Pattern-matching assignment */
          tmp33 = (_clusterCost + _cost < _targetSize);
          if (1 /* true */ != tmp33) goto goto_2;

          tmpMeta34 = mmc_mk_cons(mmc_mk_integer(_node), _cluster);
          tmpMeta35 = mmc_mk_box2(0, tmpMeta34, mmc_mk_real(_cost + _clusterCost));
          _group = tmpMeta35;
          tmpMeta36 = mmc_mk_cons(_group, _restGroups);
          tmpMeta[0+0] = omc_HpcOmScheduler_BLS__mergeToTargetSize(threadData, _nodeRest, _costRest, _targetSize, tmpMeta36, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_integer tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_real tmp42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_real tmp48;
          modelica_boolean tmp49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_metatype tmpMeta54;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta37 = MMC_CAR(tmp4_1);
          tmpMeta38 = MMC_CDR(tmp4_1);
          tmp39 = mmc_unbox_integer(tmpMeta37);
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta40 = MMC_CAR(tmp4_2);
          tmpMeta41 = MMC_CDR(tmp4_2);
          tmp42 = mmc_unbox_real(tmpMeta40);
          if (listEmpty(tmp4_3)) goto tmp3_end;
          tmpMeta43 = MMC_CAR(tmp4_3);
          tmpMeta44 = MMC_CDR(tmp4_3);
          _node = tmp39  /* pattern as ty=Integer */;
          _nodeRest = tmpMeta38;
          _cost = tmp42  /* pattern as ty=Real */;
          _costRest = tmpMeta41;
          _group = tmpMeta43;
          _restGroups = tmpMeta44;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta45 = _group;
          tmpMeta46 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 1));
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta45), 2));
          tmp48 = mmc_unbox_real(tmpMeta47);
          _cluster = tmpMeta46;
          _clusterCost = tmp48  /* pattern as ty=Real */;

          /* Pattern-matching assignment */
          tmp49 = (_clusterCost + _cost >= _targetSize);
          if (1 /* true */ != tmp49) goto goto_2;

          _cluster = listReverse(_cluster);

          tmpMeta51 = mmc_mk_box2(0, _cluster, mmc_mk_real(_clusterCost));
          tmpMeta50 = mmc_mk_cons(tmpMeta51, _restGroups);
          _restGroups = tmpMeta50;

          tmpMeta52 = mmc_mk_cons(mmc_mk_integer(_node), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta53 = mmc_mk_box2(0, tmpMeta52, mmc_mk_real(_cost));
          _group = tmpMeta53;
          tmpMeta54 = mmc_mk_cons(_group, _restGroups);
          tmpMeta[0+0] = omc_HpcOmScheduler_BLS__mergeToTargetSize(threadData, _nodeRest, _costRest, _targetSize, tmpMeta54, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT122),stdout);
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
      if (++tmp4 < 6) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _clustersOut = tmpMeta[0+0];
  _clusterCostsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_clusterCostsOut) { *out_clusterCostsOut = _clusterCostsOut; }
  return _clustersOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_BLS__mergeToTargetSize(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _costsIn, modelica_metatype _targetSize, modelica_metatype _mergedNodesIn, modelica_metatype *out_clusterCostsOut)
{
  modelica_real tmp1;
  modelica_metatype _clustersOut = NULL;
  tmp1 = mmc_unbox_real(_targetSize);
  _clustersOut = omc_HpcOmScheduler_BLS__mergeToTargetSize(threadData, _nodesIn, _costsIn, tmp1, _mergedNodesIn, out_clusterCostsOut);
  /* skip box _clustersOut; list<list<#Integer>> */
  /* skip box _clusterCostsOut; list<#Real> */
  return _clustersOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__getDependentGroups(threadData_t *threadData, modelica_metatype _nodes, modelica_metatype _iGraph, modelica_metatype _iGraphT, modelica_metatype _referenceNodesIn, modelica_metatype _dependentsIn)
{
  modelica_metatype _dependentsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _dependentsOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _nodes;
    {
      modelica_integer _node;
      modelica_metatype _successors = NULL;
      modelica_metatype _predecessors = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _dependentNodes = NULL;
      modelica_metatype _referenceNodes = NULL;
      modelica_metatype _allNodes = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _successors has no default value.
      // _predecessors has no default value.
      // _rest has no default value.
      // _dependentNodes has no default value.
      // _referenceNodes has no default value.
      // _allNodes has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_List_unique(threadData, _dependentsIn);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _node = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _successors = arrayGet(_iGraph, _node);

          _predecessors = arrayGet(_iGraphT, _node);

          _successors = omc_List_intersection1OnTrue(threadData, _successors, _referenceNodesIn, boxvar_intEq ,NULL ,&_referenceNodes);

          _predecessors = omc_List_intersection1OnTrue(threadData, _predecessors, _referenceNodes, boxvar_intEq ,NULL ,&_referenceNodes);

          _dependentNodes = listAppend(_predecessors, _successors);

          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_node), _dependentNodes);
          _allNodes = tmpMeta9;
          tmpMeta1 = omc_HpcOmScheduler_BLS__getDependentGroups(threadData, listAppend(_rest, _dependentNodes), _iGraph, _iGraphT, _referenceNodes, listAppend(_allNodes, _dependentsIn));
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT123),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _dependentsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _dependentsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__mergeDependentLevelTask(threadData_t *threadData, modelica_metatype _nodesIn, modelica_metatype _iGraph, modelica_metatype _iGraphT, modelica_metatype _sectionsIn)
{
  modelica_metatype _sectionsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sectionsOut has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _nodesIn;
    {
      modelica_integer _node;
      modelica_metatype _rest = NULL;
      modelica_metatype _dependentNodes = NULL;
      modelica_metatype _section = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _rest has no default value.
      // _dependentNodes has no default value.
      // _section has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = listReverse(_sectionsIn);
          goto tmp3_done;
        }
        case 1: {
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
          _node = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_cons(mmc_mk_integer(_node), MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _dependentNodes = omc_HpcOmScheduler_BLS__getDependentGroups(threadData, tmpMeta9, _iGraph, _iGraphT, _nodesIn, tmpMeta10);

          tmpMeta11 = mmc_mk_cons(mmc_mk_integer(_node), _dependentNodes);
          _section = tmpMeta11;

          _section = omc_List_unique(threadData, _section);

          omc_List_intersection1OnTrue(threadData, _rest, _dependentNodes, boxvar_intEq ,&_rest ,NULL);

          _section = listReverse(_section);
          tmpMeta12 = mmc_mk_cons(_section, _sectionsIn);
          /* Tail recursive call */
          _nodesIn = _rest;
          _sectionsIn = tmpMeta12;
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
  _sectionsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sectionsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__fillParallelSections(threadData_t *threadData, modelica_metatype _levelIn, modelica_metatype _levelAssIn, modelica_metatype _critPathNodes, modelica_integer _levelIdx, modelica_real _targetCosts, modelica_metatype _iGraph, modelica_metatype _iGraphT, modelica_metatype _iMeta, modelica_metatype _unassNodesIn, modelica_metatype _sectionsIn)
{
  modelica_metatype _sectionsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sectionsOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _critPathNodes;
    {
      modelica_real _critPathCost;
      modelica_integer _critPathNode;
      modelica_integer _critNodeLevel;
      modelica_metatype _section = NULL;
      modelica_metatype _restCritNodes = NULL;
      modelica_metatype _levelNodes = NULL;
      modelica_metatype _unassNodes = NULL;
      modelica_metatype _necessaryPredecessors = NULL;
      modelica_metatype _level = NULL;
      modelica_metatype _levelNodeCluster = NULL;
      modelica_metatype _followingLevel = NULL;
      modelica_metatype _sectionLst = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _critPathCost has no default value.
      // _critPathNode has no default value.
      // _critNodeLevel has no default value.
      // _section has no default value.
      // _restCritNodes has no default value.
      // _levelNodes has no default value.
      // _unassNodes has no default value.
      // _necessaryPredecessors has no default value.
      // _level has no default value.
      // _levelNodeCluster has no default value.
      // _followingLevel has no default value.
      // _sectionLst has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = listReverse(_sectionsIn);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          _critPathNode = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _critNodeLevel = mmc_unbox_integer(arrayGet(_levelAssIn, _critPathNode));

          _critNodeLevel = modelica_integer_min((modelica_integer)(_levelIdx),(modelica_integer)(_critNodeLevel));

          omc_List_split(threadData, _levelIn, ((modelica_integer) -1) + _critNodeLevel ,&_followingLevel);

          _levelNodes = omc_List_flatten(threadData, _followingLevel);

          _unassNodes = listAppend(_levelNodes, _unassNodesIn);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _levelNodeCluster = omc_HpcOmScheduler_BLS__mergeDependentLevelTask(threadData, _unassNodes, _iGraph, _iGraphT, tmpMeta9);

          tmpMeta10 = mmc_mk_cons(_levelNodeCluster, _sectionsIn);
          _sectionLst = tmpMeta10;
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_HpcOmScheduler_BLS__fillParallelSections(threadData, _levelIn, _levelAssIn, tmpMeta11, ((modelica_integer) 1) + _critNodeLevel, _targetCosts, _iGraph, _iGraphT, _iMeta, _unassNodes, _sectionLst);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_boolean tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta12 = MMC_CAR(tmp4_1);
          tmpMeta13 = MMC_CDR(tmp4_1);
          tmp14 = mmc_unbox_integer(tmpMeta12);
          _critPathNode = tmp14  /* pattern as ty=Integer */;
          _restCritNodes = tmpMeta13;
          /* Pattern matching succeeded */
          _critPathCost = omc_HpcOmTaskGraph_getExeCostReqCycles(threadData, _critPathNode, _iMeta);

          _critNodeLevel = mmc_unbox_integer(arrayGet(_levelAssIn, _critPathNode));

          /* Pattern-matching assignment */
          tmp15 = (_critPathCost < _targetCosts);
          if (1 /* true */ != tmp15) goto goto_2;

          _levelNodes = omc_List_flatten(threadData, omc_List_map1(threadData, omc_List_intRange2(threadData, _levelIdx, _critNodeLevel), boxvar_List_getIndexFirst, _levelIn));

          _levelNodes = omc_List_deleteMemberOnTrue(threadData, mmc_mk_integer(_critPathNode), _levelNodes, boxvar_intEq, NULL);

          _necessaryPredecessors = arrayGet(_iGraphT, mmc_unbox_integer(listHead(_restCritNodes)));

          _unassNodes = listAppend(_levelNodes, _unassNodesIn);

          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          _necessaryPredecessors = omc_List_flatten(threadData, omc_List_map4(threadData, omc_List_map(threadData, _necessaryPredecessors, boxvar_List_create), boxvar_HpcOmScheduler_BLS__getDependentGroups, _iGraph, _iGraphT, _unassNodes, tmpMeta16));

          _necessaryPredecessors = omc_List_unique(threadData, _necessaryPredecessors);

          _necessaryPredecessors = omc_List_intersection1OnTrue(threadData, _necessaryPredecessors, _unassNodes, boxvar_intEq ,NULL ,&_unassNodes);

          tmpMeta17 = mmc_mk_cons(mmc_mk_integer(_critPathNode), _necessaryPredecessors);
          _section = tmpMeta17;

          _section = omc_List_unique(threadData, _section);

          tmpMeta19 = mmc_mk_cons(_section, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta18 = mmc_mk_cons(tmpMeta19, _sectionsIn);
          _sectionLst = tmpMeta18;

          omc_List_map2__0(threadData, _section, boxvar_Array_updateIndexFirst, mmc_mk_integer(_critNodeLevel), _levelAssIn);

          _level = omc_List_map1(threadData, _levelIn, boxvar_HpcOmScheduler_deleteIntListMembers, _section);

          _level = omc_List_set(threadData, _level, _critNodeLevel, _section);
          tmpMeta1 = omc_HpcOmScheduler_BLS__fillParallelSections(threadData, _level, _levelAssIn, _restCritNodes, ((modelica_integer) 1) + _critNodeLevel, _targetCosts, _iGraph, _iGraphT, _iMeta, _unassNodes, _sectionLst);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_boolean tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta20 = MMC_CAR(tmp4_1);
          tmpMeta21 = MMC_CDR(tmp4_1);
          tmp22 = mmc_unbox_integer(tmpMeta20);
          _critPathNode = tmp22  /* pattern as ty=Integer */;
          _restCritNodes = tmpMeta21;
          /* Pattern matching succeeded */
          _critPathCost = omc_HpcOmTaskGraph_getExeCostReqCycles(threadData, _critPathNode, _iMeta);

          _critNodeLevel = mmc_unbox_integer(arrayGet(_levelAssIn, _critPathNode));

          /* Pattern-matching assignment */
          tmp23 = (_critPathCost >= _targetCosts);
          if (1 /* true */ != tmp23) goto goto_2;

          _levelNodes = omc_List_flatten(threadData, omc_List_map1(threadData, omc_List_intRange2(threadData, _levelIdx, _critNodeLevel), boxvar_List_getIndexFirst, _levelIn));

          _levelNodes = omc_List_deleteMemberOnTrue(threadData, mmc_mk_integer(_critPathNode), _levelNodes, boxvar_intEq, NULL);

          arrayGet(_iGraphT, mmc_unbox_integer(listHead(_restCritNodes)));

          _unassNodes = listAppend(_unassNodesIn, _levelNodes);

          tmpMeta24 = mmc_mk_cons(mmc_mk_integer(_critPathNode), _unassNodes);
          _unassNodes = tmpMeta24;

          _unassNodes = omc_List_unique(threadData, _unassNodes);

          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          _levelNodeCluster = omc_HpcOmScheduler_BLS__mergeDependentLevelTask(threadData, _unassNodes, _iGraph, _iGraphT, tmpMeta25);

          omc_List_intersection1OnTrue(threadData, _unassNodes, omc_List_flatten(threadData, _levelNodeCluster), boxvar_intEq ,&_unassNodes ,NULL);

          tmpMeta26 = mmc_mk_cons(_levelNodeCluster, _sectionsIn);
          _sectionLst = tmpMeta26;

          omc_List_map2__0(threadData, omc_List_flatten(threadData, _levelNodeCluster), boxvar_Array_updateIndexFirst, mmc_mk_integer(_critNodeLevel), _levelAssIn);

          _level = omc_List_map1(threadData, _levelIn, boxvar_HpcOmScheduler_deleteIntListMembers, omc_List_flatten(threadData, _levelNodeCluster));

          _level = omc_List_set(threadData, _level, _critNodeLevel, omc_List_flatten(threadData, _levelNodeCluster));
          tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta1 = omc_HpcOmScheduler_BLS__fillParallelSections(threadData, _level, _levelAssIn, _restCritNodes, ((modelica_integer) 1) + _critNodeLevel, _targetCosts, _iGraph, _iGraphT, _iMeta, tmpMeta27, _sectionLst);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _sectionsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sectionsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_BLS__fillParallelSections(threadData_t *threadData, modelica_metatype _levelIn, modelica_metatype _levelAssIn, modelica_metatype _critPathNodes, modelica_metatype _levelIdx, modelica_metatype _targetCosts, modelica_metatype _iGraph, modelica_metatype _iGraphT, modelica_metatype _iMeta, modelica_metatype _unassNodesIn, modelica_metatype _sectionsIn)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_metatype _sectionsOut = NULL;
  tmp1 = mmc_unbox_integer(_levelIdx);
  tmp2 = mmc_unbox_real(_targetCosts);
  _sectionsOut = omc_HpcOmScheduler_BLS__fillParallelSections(threadData, _levelIn, _levelAssIn, _critPathNodes, tmp1, tmp2, _iGraph, _iGraphT, _iMeta, _unassNodesIn, _sectionsIn);
  /* skip box _sectionsOut; list<list<list<#Integer>>> */
  return _sectionsOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__generateSchedule(threadData_t *threadData, modelica_metatype _level, modelica_metatype _iMeta, modelica_metatype _iSccSimEqMapping)
{
  modelica_metatype _taskLstOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _taskLstOut has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _level;
    tmp4_2 = _iMeta;
    {
      modelica_metatype _section = NULL;
      modelica_metatype _inComps = NULL;
      modelica_metatype _task = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _section has no default value.
      // _inComps has no default value.
      // _task has no default value.
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
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (!listEmpty(tmpMeta7)) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _section = tmpMeta6;
          _inComps = tmpMeta8;
          /* Pattern matching succeeded */
          _task = omc_HpcOmScheduler_makeCalcTaskLevel(threadData, _section, _inComps, _iSccSimEqMapping);
          tmpMeta9 = mmc_mk_cons(_task, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta10 = mmc_mk_box3(4, &HpcOmSimCode_TaskList_SERIALTASKLIST__desc, tmpMeta9, mmc_mk_boolean(1 /* true */));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _inComps = tmpMeta13;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_HpcOmScheduler_makeCalcLevelParTaskLstForMergedNodes(threadData, _level, _iSccSimEqMapping, _inComps);
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
  _taskLstOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _taskLstOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_BLS__mergeSmallSections(threadData_t *threadData, modelica_metatype _sectionsIn, modelica_metatype _iMeta, modelica_real _targetCosts)
{
  modelica_metatype _sectionsOut = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sectionsOut has no default value.
  { /* match expression */
    {
      modelica_metatype _costs = NULL;
      modelica_metatype _mergedSectionIdcs = NULL;
      modelica_metatype _sectionsNew = NULL;
      modelica_metatype _sectionsNewUnflattened = NULL;
      modelica_metatype _sectionCosts = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _costs has no default value.
      // _mergedSectionIdcs has no default value.
      // _sectionsNew has no default value.
      // _sectionsNewUnflattened has no default value.
      // _sectionCosts has no default value.
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          _costs = omc_List_map1List(threadData, _sectionsIn, boxvar_HpcOmTaskGraph_getExeCostReqCycles, _iMeta);

          _sectionCosts = omc_List_map(threadData, _costs, boxvar_HpcOmScheduler_realSum);

          tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
          _mergedSectionIdcs = omc_HpcOmScheduler_BLS__mergeToTargetSize(threadData, omc_List_intRange(threadData, listLength(_sectionsIn)), _sectionCosts, _targetCosts, tmpMeta6, NULL);

          _sectionsNewUnflattened = omc_List_map1List(threadData, _mergedSectionIdcs, boxvar_List_getIndexFirst, _sectionsIn);

          _sectionsNew = omc_List_map(threadData, _sectionsNewUnflattened, boxvar_List_flatten);
          tmpMeta1 = omc_List_map1(threadData, _sectionsNew, boxvar_List_sort, boxvar_intGt);
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
  _sectionsOut = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _sectionsOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_BLS__mergeSmallSections(threadData_t *threadData, modelica_metatype _sectionsIn, modelica_metatype _iMeta, modelica_metatype _targetCosts)
{
  modelica_real tmp1;
  modelica_metatype _sectionsOut = NULL;
  tmp1 = mmc_unbox_real(_targetCosts);
  _sectionsOut = omc_HpcOmScheduler_BLS__mergeSmallSections(threadData, _sectionsIn, _iMeta, tmp1);
  /* skip box _sectionsOut; list<list<#Integer>> */
  return _sectionsOut;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createBalancedLevelScheduling(threadData_t *threadData, modelica_metatype _iGraph, modelica_metatype _iMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype *out_oMeta)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _oMeta = NULL;
  modelica_real _targetCost;
  modelica_metatype _levelAss = NULL;
  modelica_metatype _nodeMark = NULL;
  modelica_metatype _critPathNodes = NULL;
  modelica_metatype _critPathCosts = NULL;
  modelica_metatype _level = NULL;
  modelica_metatype _allSections = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _graphT = NULL;
  modelica_metatype _levelTasks = NULL;
  modelica_metatype _varCompMapping = NULL;
  modelica_metatype _eqCompMapping = NULL;
  modelica_metatype _compNames = NULL;
  modelica_metatype _compDescs = NULL;
  modelica_metatype _exeCosts = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _compParamMapping = NULL;
  modelica_metatype _compInformations = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _oMeta has no default value.
  // _targetCost has no default value.
  // _levelAss has no default value.
  // _nodeMark has no default value.
  // _critPathNodes has no default value.
  // _critPathCosts has no default value.
  // _level has no default value.
  // _allSections has no default value.
  // _inComps has no default value.
  // _graphT has no default value.
  // _levelTasks has no default value.
  // _varCompMapping has no default value.
  // _eqCompMapping has no default value.
  // _compNames has no default value.
  // _compDescs has no default value.
  // _exeCosts has no default value.
  // _commCosts has no default value.
  // _compParamMapping has no default value.
  // _compInformations has no default value.
  _targetCost = 1000.0;

  /* Pattern-matching assignment */
  tmpMeta1 = _iMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _inComps = tmpMeta2;

  _graphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iGraph, arrayLength(_iGraph));

  _level = omc_HpcOmTaskGraph_getLevelNodes(threadData, _iGraph);

  _levelAss = arrayCreate(arrayLength(_inComps), mmc_mk_integer(((modelica_integer) -1)));

  /* Pattern-matching assignment */
  tmpMeta3 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1)), _levelAss);
  tmpMeta4 = omc_List_fold(threadData, _level, boxvar_HpcOmScheduler_getLevelAssignment, tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
  _levelAss = tmpMeta5;

  /* Pattern-matching tuple assignment, wild first pattern */
  omc_HpcOmTaskGraph_getCriticalPaths(threadData, _iGraph, _iMeta, &tmpMeta6);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
  if (listEmpty(tmpMeta7)) MMC_THROW_INTERNAL();
  tmpMeta8 = MMC_CAR(tmpMeta7);
  tmpMeta9 = MMC_CDR(tmpMeta7);
  _critPathNodes = tmpMeta8;

  _critPathCosts = omc_List_map1(threadData, _critPathNodes, boxvar_HpcOmTaskGraph_getExeCostReqCycles, _iMeta);

  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _allSections = omc_HpcOmScheduler_BLS__fillParallelSections(threadData, _level, _levelAss, _critPathNodes, ((modelica_integer) 1), _targetCost, _iGraph, _graphT, _iMeta, tmpMeta10, tmpMeta11);

  _allSections = omc_List_map2(threadData, _allSections, boxvar_HpcOmScheduler_BLS__mergeSmallSections, _iMeta, mmc_mk_real(_targetCost));

  _levelTasks = omc_List_map2(threadData, _allSections, boxvar_HpcOmScheduler_BLS__generateSchedule, _iMeta, _iSccSimEqMapping);

  tmpMeta12 = mmc_mk_box3(3, &HpcOmSimCode_Schedule_LEVELSCHEDULE__desc, _levelTasks, mmc_mk_boolean(0 /* false */));
  _oSchedule = tmpMeta12;

  /* Pattern-matching assignment */
  tmpMeta13 = _iMeta;
  tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 2));
  tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 3));
  tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 4));
  tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 5));
  tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 6));
  tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 7));
  tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 8));
  tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 9));
  tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta13), 11));
  _inComps = tmpMeta14;
  _varCompMapping = tmpMeta15;
  _eqCompMapping = tmpMeta16;
  _compParamMapping = tmpMeta17;
  _compNames = tmpMeta18;
  _compDescs = tmpMeta19;
  _exeCosts = tmpMeta20;
  _commCosts = tmpMeta21;
  _compInformations = tmpMeta22;

  _nodeMark = arrayCreate(arrayLength(_inComps), mmc_mk_integer(((modelica_integer) -1)));

  _level = omc_List_map(threadData, _allSections, boxvar_List_flatten);

  /* Pattern-matching assignment */
  tmpMeta23 = mmc_mk_box2(0, mmc_mk_integer(((modelica_integer) 1)), _nodeMark);
  tmpMeta24 = omc_List_fold(threadData, _level, boxvar_HpcOmScheduler_getLevelAssignment, tmpMeta23);
  tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
  _nodeMark = tmpMeta25;

  tmpMeta26 = mmc_mk_box11(3, &HpcOmTaskGraph_TaskGraphMeta_TASKGRAPHMETA__desc, _inComps, _varCompMapping, _eqCompMapping, _compParamMapping, _compNames, _compDescs, _exeCosts, _commCosts, _nodeMark, _compInformations);
  _oMeta = tmpMeta26;
  _return: OMC_LABEL_UNUSED
  if (out_oMeta) { *out_oMeta = _oMeta; }
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertScheduleStrucToInfoLevel1(threadData_t *threadData, modelica_metatype _tasks, modelica_integer _sectionsNumber, modelica_integer _sectionIdx, modelica_metatype _iScheduleInfo)
{
  modelica_metatype _oScheduleInfo = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oScheduleInfo has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tasks;
    {
      modelica_integer _numNodes;
      modelica_integer _threadIdx;
      modelica_metatype _nodeIdc = NULL;
      modelica_metatype _tuplLst = NULL;
      modelica_metatype _rest = NULL;
      modelica_metatype _threadIdxOpt = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _numNodes has no default value.
      // _threadIdx has no default value.
      // _nodeIdc has no default value.
      // _tuplLst has no default value.
      // _rest has no default value.
      // _threadIdxOpt has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _iScheduleInfo;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,3) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 4));
          _nodeIdc = tmpMeta8;
          _threadIdxOpt = tmpMeta9;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _numNodes = listLength(_nodeIdc);

          _threadIdx = mmc_unbox_integer(omc_Util_getOptionOrDefault(threadData, _threadIdxOpt, mmc_mk_integer(((modelica_integer) -1))));

          _tuplLst = omc_List_threadMap1(threadData, omc_List_fill(threadData, mmc_mk_integer(_threadIdx), _numNodes), omc_List_fill(threadData, mmc_mk_integer(((modelica_integer) -1)), _numNodes), boxvar_Util_make3Tuple, _OMC_LIT21);

          omc_List_threadMap1__0(threadData, _nodeIdc, _tuplLst, boxvar_Array_updateIndexFirst, _iScheduleInfo);
          /* Tail recursive call */
          _tasks = _rest;
          _sectionIdx = ((modelica_integer) 1) + _sectionIdx;
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
  _oScheduleInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oScheduleInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertScheduleStrucToInfoLevel1(threadData_t *threadData, modelica_metatype _tasks, modelica_metatype _sectionsNumber, modelica_metatype _sectionIdx, modelica_metatype _iScheduleInfo)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oScheduleInfo = NULL;
  tmp1 = mmc_unbox_integer(_sectionsNumber);
  tmp2 = mmc_unbox_integer(_sectionIdx);
  _oScheduleInfo = omc_HpcOmScheduler_convertScheduleStrucToInfoLevel1(threadData, _tasks, tmp1, tmp2, _iScheduleInfo);
  /* skip box _oScheduleInfo; array<tuple<#Integer, #Integer, #Real>> */
  return _oScheduleInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertScheduleStrucToInfoLevel(threadData_t *threadData, modelica_metatype _taskLst, modelica_integer _sectionsNumber, modelica_metatype _iScheduleInfo)
{
  modelica_metatype _oScheduleInfo = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oScheduleInfo has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _taskLst;
    {
      modelica_metatype _scheduleInfo = NULL;
      modelica_metatype _tasks = NULL;
      modelica_metatype _rest = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _scheduleInfo has no default value.
      // _tasks has no default value.
      // _rest has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = _iScheduleInfo;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          _tasks = tmpMeta8;
          _rest = tmpMeta7;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _scheduleInfo = omc_HpcOmScheduler_convertScheduleStrucToInfoLevel1(threadData, _tasks, _sectionsNumber, ((modelica_integer) 1), _iScheduleInfo);
          tmpMeta1 = omc_HpcOmScheduler_convertScheduleStrucToInfoLevel(threadData, _rest, ((modelica_integer) 1) + _sectionsNumber, _scheduleInfo);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,2) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          
          _tasks = tmpMeta11;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          _scheduleInfo = omc_HpcOmScheduler_convertScheduleStrucToInfoLevel1(threadData, _tasks, _sectionsNumber, ((modelica_integer) 1), _iScheduleInfo);
          tmpMeta1 = omc_HpcOmScheduler_convertScheduleStrucToInfoLevel(threadData, _rest, ((modelica_integer) 1) + _sectionsNumber, _scheduleInfo);
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT124),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oScheduleInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oScheduleInfo;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertScheduleStrucToInfoLevel(threadData_t *threadData, modelica_metatype _taskLst, modelica_metatype _sectionsNumber, modelica_metatype _iScheduleInfo)
{
  modelica_integer tmp1;
  modelica_metatype _oScheduleInfo = NULL;
  tmp1 = mmc_unbox_integer(_sectionsNumber);
  _oScheduleInfo = omc_HpcOmScheduler_convertScheduleStrucToInfoLevel(threadData, _taskLst, tmp1, _iScheduleInfo);
  /* skip box _oScheduleInfo; array<tuple<#Integer, #Integer, #Real>> */
  return _oScheduleInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertScheduleStrucToInfo1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iScheduleInfo)
{
  modelica_metatype _oScheduleInfo = NULL;
  modelica_integer _taskIdx;
  modelica_integer _taskNumber;
  modelica_integer _threadIdx;
  modelica_metatype _tmpScheduleInfo = NULL;
  modelica_real _timeFinished;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oScheduleInfo has no default value.
  // _taskIdx has no default value.
  // _taskNumber has no default value.
  // _threadIdx has no default value.
  // _tmpScheduleInfo has no default value.
  // _timeFinished has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iTask;
    tmp4_2 = _iScheduleInfo;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_real tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp9 = mmc_unbox_real(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          _taskIdx = tmp7  /* pattern as ty=Integer */;
          _timeFinished = tmp9  /* pattern as ty=Real */;
          _threadIdx = tmp11  /* pattern as ty=Integer */;
          _tmpScheduleInfo = tmpMeta12;
          _taskNumber = tmp14  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box3(0, mmc_mk_integer(_threadIdx), mmc_mk_integer(_taskNumber), mmc_mk_real(_timeFinished));
          _tmpScheduleInfo = arrayUpdate(_tmpScheduleInfo, _taskIdx, tmpMeta15);
          tmpMeta16 = mmc_mk_box2(0, _tmpScheduleInfo, mmc_mk_integer(((modelica_integer) 1) + _taskNumber));
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iScheduleInfo;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT125),stdout);
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
  _oScheduleInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oScheduleInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertScheduleStrucToInfo0(threadData_t *threadData, modelica_metatype _iTaskList, modelica_metatype _iScheduleInfo)
{
  modelica_metatype _oScheduleInfo = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oScheduleInfo has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = mmc_mk_box2(0, _iScheduleInfo, mmc_mk_integer(((modelica_integer) 1)));
  tmpMeta2 = omc_List_fold(threadData, _iTaskList, boxvar_HpcOmScheduler_convertScheduleStrucToInfo1, tmpMeta1);
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
  _oScheduleInfo = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _oScheduleInfo;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_convertScheduleStrucToInfo(threadData_t *threadData, modelica_metatype _iSchedule, modelica_integer _iTaskCount)
{
  modelica_metatype _oScheduleInfo = NULL;
  modelica_metatype _tmpScheduleInfo = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _tasksOfLevels = NULL;
  modelica_metatype _allTasks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oScheduleInfo has no default value.
  // _tmpScheduleInfo has no default value.
  // _threadTasks has no default value.
  // _tasksOfLevels has no default value.
  // _allTasks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iSchedule;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 2));
          
          _allTasks = tmpMeta7;
          /* Pattern matching succeeded */
          _tmpScheduleInfo = arrayCreate(_iTaskCount, _OMC_LIT126);

          _threadTasks = arrayCreate(((modelica_integer) 1), _allTasks);
          tmpMeta1 = omc_Array_fold(threadData, _threadTasks, boxvar_HpcOmScheduler_convertScheduleStrucToInfo0, _tmpScheduleInfo);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _threadTasks = tmpMeta8;
          /* Pattern matching succeeded */
          _tmpScheduleInfo = arrayCreate(_iTaskCount, _OMC_LIT126);
          tmpMeta1 = omc_Array_fold(threadData, _threadTasks, boxvar_HpcOmScheduler_convertScheduleStrucToInfo0, _tmpScheduleInfo);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _tasksOfLevels = tmpMeta9;
          /* Pattern matching succeeded */
          _tmpScheduleInfo = arrayCreate(_iTaskCount, _OMC_LIT126);
          tmpMeta1 = omc_HpcOmScheduler_convertScheduleStrucToInfoLevel(threadData, _tasksOfLevels, ((modelica_integer) 1), _tmpScheduleInfo);
          goto tmp3_done;
        }
        case 3: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,1) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = arrayCreate(_iTaskCount, _OMC_LIT126);
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT127),stdout);
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
  _oScheduleInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oScheduleInfo;
}
modelica_metatype boxptr_HpcOmScheduler_convertScheduleStrucToInfo(threadData_t *threadData, modelica_metatype _iSchedule, modelica_metatype _iTaskCount)
{
  modelica_integer tmp1;
  modelica_metatype _oScheduleInfo = NULL;
  tmp1 = mmc_unbox_integer(_iTaskCount);
  _oScheduleInfo = omc_HpcOmScheduler_convertScheduleStrucToInfo(threadData, _iSchedule, tmp1);
  /* skip box _oScheduleInfo; array<tuple<#Integer, #Integer, #Real>> */
  return _oScheduleInfo;
}

DLLDirection
void omc_HpcOmScheduler_printTask(threadData_t *threadData, modelica_metatype _iTask)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(MMC_STRINGDATA(omc_HpcOmScheduler_dumpTask(threadData, _iTask)),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpTask(threadData_t *threadData, modelica_metatype _iTask)
{
  modelica_string _oString = NULL;
  modelica_integer _weighting;
  modelica_integer _index;
  modelica_integer _threadIdx;
  modelica_integer _compIdx;
  modelica_integer _numThreads;
  modelica_integer _sourceIndex;
  modelica_integer _targetIndex;
  modelica_metatype _eqIdc = NULL;
  modelica_metatype _nodeIdc = NULL;
  modelica_real _timeFinished;
  modelica_string _s = NULL;
  modelica_metatype _taskSchedule = NULL;
  modelica_boolean _outgoing;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oString has no default value.
  // _weighting has no default value.
  // _index has no default value.
  // _threadIdx has no default value.
  // _compIdx has no default value.
  // _numThreads has no default value.
  // _sourceIndex has no default value.
  // _targetIndex has no default value.
  // _eqIdc has no default value.
  // _nodeIdc has no default value.
  // _timeFinished has no default value.
  // _s has no default value.
  // _taskSchedule has no default value.
  // _outgoing has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,3) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          _compIdx = tmp7  /* pattern as ty=Integer */;
          _numThreads = tmp9  /* pattern as ty=Integer */;
          _taskSchedule = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_OMC_LIT128,intString(_compIdx));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT129);
          tmpMeta13 = stringAppend(tmpMeta12,intString(_numThreads));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT130);
          _s = tmpMeta14;

          tmpMeta15 = stringAppend(_s,_OMC_LIT131);
          tmpMeta16 = stringAppend(tmpMeta15,omc_System_stringReplace(threadData, omc_HpcOmScheduler_dumpSchedule(threadData, _taskSchedule), _OMC_LIT6, _OMC_LIT132));
          _s = tmpMeta16;
          tmpMeta17 = stringAppend(_s,_OMC_LIT133);
          tmp1 = tmpMeta17;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          modelica_integer tmp21;
          modelica_metatype tmpMeta22;
          modelica_real tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp21 = mmc_unbox_integer(tmpMeta20);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmp23 = mmc_unbox_real(tmpMeta22);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          _weighting = tmp19  /* pattern as ty=Integer */;
          _index = tmp21  /* pattern as ty=Integer */;
          _timeFinished = tmp23  /* pattern as ty=Real */;
          _eqIdc = tmpMeta24;
          /* Pattern matching succeeded */
          tmpMeta25 = stringAppend(_OMC_LIT134,intString(_index));
          tmpMeta26 = stringAppend(tmpMeta25,_OMC_LIT135);
          tmpMeta27 = stringAppend(tmpMeta26,stringDelimitList(omc_List_map(threadData, _eqIdc, boxvar_intString), _OMC_LIT136));
          tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT137);
          tmpMeta29 = stringAppend(tmpMeta28,realString(_timeFinished));
          tmpMeta30 = stringAppend(tmpMeta29,_OMC_LIT6);
          tmp1 = tmpMeta30;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (!optionNone(tmpMeta33)) goto tmp3_end;
          _eqIdc = tmpMeta31;
          _nodeIdc = tmpMeta32;
          /* Pattern matching succeeded */
          tmpMeta34 = stringAppend(_OMC_LIT138,stringDelimitList(omc_List_map(threadData, _nodeIdc, boxvar_intString), _OMC_LIT136));
          tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT139);
          tmpMeta36 = stringAppend(tmpMeta35,stringDelimitList(omc_List_map(threadData, _eqIdc, boxvar_intString), _OMC_LIT136));
          tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT6);
          tmp1 = tmpMeta37;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_integer tmp42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,3) == 0) goto tmp3_end;
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          if (optionNone(tmpMeta40)) goto tmp3_end;
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 1));
          tmp42 = mmc_unbox_integer(tmpMeta41);
          _eqIdc = tmpMeta38;
          _nodeIdc = tmpMeta39;
          _threadIdx = tmp42  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmpMeta43 = stringAppend(_OMC_LIT138,stringDelimitList(omc_List_map(threadData, _nodeIdc, boxvar_intString), _OMC_LIT136));
          tmpMeta44 = stringAppend(tmpMeta43,_OMC_LIT139);
          tmpMeta45 = stringAppend(tmpMeta44,stringDelimitList(omc_List_map(threadData, _eqIdc, boxvar_intString), _OMC_LIT136));
          tmpMeta46 = stringAppend(tmpMeta45,_OMC_LIT140);
          tmpMeta47 = stringAppend(tmpMeta46,intString(_threadIdx));
          tmpMeta48 = stringAppend(tmpMeta47,_OMC_LIT6);
          tmp1 = tmpMeta48;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_integer tmp51;
          modelica_metatype tmpMeta52;
          modelica_metatype tmpMeta53;
          modelica_integer tmp54;
          modelica_metatype tmpMeta55;
          modelica_integer tmp56;
          modelica_metatype tmpMeta57;
          modelica_metatype tmpMeta58;
          modelica_metatype tmpMeta59;
          modelica_metatype tmpMeta60;
          modelica_metatype tmpMeta61;
          modelica_metatype tmpMeta62;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,3,5) == 0) goto tmp3_end;
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta49,1,6) == 0) goto tmp3_end;
          tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta49), 3));
          tmp51 = mmc_unbox_integer(tmpMeta50);
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta52,1,6) == 0) goto tmp3_end;
          tmpMeta53 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta52), 3));
          tmp54 = mmc_unbox_integer(tmpMeta53);
          tmpMeta55 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp56 = mmc_unbox_integer(tmpMeta55);
          
          _sourceIndex = tmp51  /* pattern as ty=Integer */;
          _targetIndex = tmp54  /* pattern as ty=Integer */;
          _outgoing = tmp56  /* pattern as ty=Boolean */;
          /* Pattern matching succeeded */
          _s = _OMC_LIT141;

          tmpMeta57 = stringAppend(_s,(_outgoing?_OMC_LIT142:_OMC_LIT143));
          _s = tmpMeta57;
          tmpMeta58 = stringAppend(_s,_OMC_LIT144);
          tmpMeta59 = stringAppend(tmpMeta58,intString(_sourceIndex));
          tmpMeta60 = stringAppend(tmpMeta59,_OMC_LIT145);
          tmpMeta61 = stringAppend(tmpMeta60,intString(_targetIndex));
          tmpMeta62 = stringAppend(tmpMeta61,_OMC_LIT6);
          tmp1 = tmpMeta62;
          goto tmp3_done;
        }
        case 5: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,5,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT146;
          goto tmp3_done;
        }
        case 6: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT147),stdout);
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
  _oString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oString;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpTaskList(threadData_t *threadData, modelica_metatype _iTaskList)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  _str = stringDelimitList(omc_List_map(threadData, _iTaskList, boxvar_HpcOmScheduler_dumpTask), _OMC_LIT49);
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmScheduler_printTaskList(threadData_t *threadData, modelica_metatype _iTaskList)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  fputs(MMC_STRINGDATA(omc_HpcOmScheduler_dumpTaskList(threadData, _iTaskList)),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpTaskDepSchedule(threadData_t *threadData, modelica_metatype _iTaskInfo)
{
  modelica_string _str = NULL;
  modelica_string _s = NULL;
  modelica_metatype _iTask = NULL;
  modelica_metatype _iDependencies = NULL;
  modelica_metatype tmpMeta1;
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
  // _str has no default value.
  // _s has no default value.
  // _iTask has no default value.
  // _iDependencies has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskInfo;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _iTask = tmpMeta2;
  _iDependencies = tmpMeta3;

  _s = _OMC_LIT148;

  tmpMeta4 = stringAppend(_s,omc_HpcOmScheduler_dumpTask(threadData, _iTask));
  tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT6);
  _s = tmpMeta5;

  tmpMeta6 = stringAppend(_s,_OMC_LIT149);
  tmpMeta7 = stringAppend(tmpMeta6,stringDelimitList(omc_List_map(threadData, _iDependencies, boxvar_intString), _OMC_LIT111));
  tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT6);
  _s = tmpMeta8;

  tmpMeta9 = stringAppend(_s,_OMC_LIT150);
  _str = tmpMeta9;
  _return: OMC_LABEL_UNUSED
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_HpcOmScheduler_dumpThreadSchedule(threadData_t *threadData, modelica_metatype _iTaskList, modelica_integer _iThreadIdx, modelica_integer *out_oThreadIdx)
{
  modelica_string _str = NULL;
  modelica_integer _oThreadIdx;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _oThreadIdx has no default value.
  _str = _OMC_LIT151;

  tmpMeta1 = stringAppend(_str,_OMC_LIT152);
  tmpMeta2 = stringAppend(tmpMeta1,intString(_iThreadIdx));
  tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT6);
  _str = tmpMeta3;

  tmpMeta4 = stringAppend(_str,_OMC_LIT151);
  _str = tmpMeta4;

  tmpMeta5 = stringAppend(_str,omc_HpcOmScheduler_dumpTaskList(threadData, _iTaskList));
  _str = tmpMeta5;

  _oThreadIdx = ((modelica_integer) 1) + _iThreadIdx;
  _return: OMC_LABEL_UNUSED
  if (out_oThreadIdx) { *out_oThreadIdx = _oThreadIdx; }
  return _str;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_dumpThreadSchedule(threadData_t *threadData, modelica_metatype _iTaskList, modelica_metatype _iThreadIdx, modelica_metatype *out_oThreadIdx)
{
  modelica_integer tmp1;
  modelica_integer _oThreadIdx;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_iThreadIdx);
  _str = omc_HpcOmScheduler_dumpThreadSchedule(threadData, _iTaskList, tmp1, &_oThreadIdx);
  /* skip box _str; String */
  if (out_oThreadIdx) { *out_oThreadIdx = mmc_mk_icon(_oThreadIdx); }
  return _str;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_compareTaskWithThreadIdx(threadData_t *threadData, modelica_integer _iThreadIdx, modelica_metatype _iTask1)
{
  modelica_boolean _oMatch;
  modelica_integer _threadIdx;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oMatch has no default value.
  // _threadIdx has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTask1;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          
          _threadIdx = tmp8  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = (_threadIdx == _iThreadIdx);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT153),stdout);
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
  _oMatch = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oMatch;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_compareTaskWithThreadIdx(threadData_t *threadData, modelica_metatype _iThreadIdx, modelica_metatype _iTask1)
{
  modelica_integer tmp1;
  modelica_boolean _oMatch;
  modelica_metatype out_oMatch;
  tmp1 = mmc_unbox_integer(_iThreadIdx);
  _oMatch = omc_HpcOmScheduler_compareTaskWithThreadIdx(threadData, tmp1, _iTask1);
  out_oMatch = mmc_mk_icon(_oMatch);
  return out_oMatch;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_compareTasksByEqIdc(threadData_t *threadData, modelica_metatype _iTask1, modelica_metatype _iTask2)
{
  modelica_boolean _oResult;
  modelica_metatype _eqIdcTask1 = NULL;
  modelica_metatype _eqIdcTask2 = NULL;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oResult has no default value.
  // _eqIdcTask1 has no default value.
  // _eqIdcTask2 has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iTask1;
    tmp4_2 = _iTask2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          _eqIdcTask1 = tmpMeta6;
          _eqIdcTask2 = tmpMeta7;
          /* Pattern matching succeeded */
          tmp1 = (mmc_unbox_integer(omc_List_last(threadData, _eqIdcTask1)) > mmc_unbox_integer(omc_List_last(threadData, _eqIdcTask2)));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          tmpMeta9 = stringAppend(_OMC_LIT158,omc_HpcOmScheduler_getTaskTypeString(threadData, _iTask1));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT159);
          tmpMeta11 = stringAppend(tmpMeta10,omc_HpcOmScheduler_getTaskTypeString(threadData, _iTask2));
          tmpMeta8 = mmc_mk_cons(tmpMeta11, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT157, tmpMeta8);
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
  _oResult = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oResult;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_compareTasksByEqIdc(threadData_t *threadData, modelica_metatype _iTask1, modelica_metatype _iTask2)
{
  modelica_boolean _oResult;
  modelica_metatype out_oResult;
  _oResult = omc_HpcOmScheduler_compareTasksByEqIdc(threadData, _iTask1, _iTask2);
  out_oResult = mmc_mk_icon(_oResult);
  return out_oResult;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmScheduler_compareTasksByWeighting(threadData_t *threadData, modelica_metatype _iTask1, modelica_metatype _iTask2)
{
  modelica_boolean _oResult;
  modelica_integer _weightingTask1;
  modelica_integer _weightingTask2;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oResult has no default value.
  // _weightingTask1 has no default value.
  // _weightingTask2 has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iTask1;
    tmp4_2 = _iTask2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,6) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _weightingTask1 = tmp7  /* pattern as ty=Integer */;
          _weightingTask2 = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          tmp1 = (_weightingTask1 > _weightingTask2);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_OMC_LIT160,omc_HpcOmScheduler_getTaskTypeString(threadData, _iTask1));
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT159);
          tmpMeta13 = stringAppend(tmpMeta12,omc_HpcOmScheduler_getTaskTypeString(threadData, _iTask2));
          tmpMeta10 = mmc_mk_cons(tmpMeta13, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT157, tmpMeta10);
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
  _oResult = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oResult;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_compareTasksByWeighting(threadData_t *threadData, modelica_metatype _iTask1, modelica_metatype _iTask2)
{
  modelica_boolean _oResult;
  modelica_metatype out_oResult;
  _oResult = omc_HpcOmScheduler_compareTasksByWeighting(threadData, _iTask1, _iTask2);
  out_oResult = mmc_mk_icon(_oResult);
  return out_oResult;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_getSuccessorsByTask(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iAllCalcTasks, modelica_metatype *out_oTaskIdc)
{
  modelica_metatype _oTasks = NULL;
  modelica_metatype _oTaskIdc = NULL;
  modelica_integer _taskIdx;
  modelica_metatype _successors = NULL;
  modelica_metatype _tmpTasks = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTasks has no default value.
  // _oTaskIdc has no default value.
  // _taskIdx has no default value.
  // _successors has no default value.
  // _tmpTasks has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          
          _taskIdx = tmp7  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _successors = arrayGet(_iTaskGraph, _taskIdx);

          _tmpTasks = omc_List_map1(threadData, _successors, boxvar_HpcOmScheduler_getTaskByIndex, _iAllCalcTasks);
          tmpMeta[0+0] = _tmpTasks;
          tmpMeta[0+1] = _successors;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT161),stdout);
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
  _oTasks = tmpMeta[0+0];
  _oTaskIdc = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oTaskIdc) { *out_oTaskIdc = _oTaskIdc; }
  return _oTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getTaskByIndex(threadData_t *threadData, modelica_integer _iTaskIdx, modelica_metatype _iAllCalcTasks)
{
  modelica_metatype _oTask = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTask has no default value.
  _oTask = arrayGet(_iAllCalcTasks, _iTaskIdx);
  _return: OMC_LABEL_UNUSED
  return _oTask;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getTaskByIndex(threadData_t *threadData, modelica_metatype _iTaskIdx, modelica_metatype _iAllCalcTasks)
{
  modelica_integer tmp1;
  modelica_metatype _oTask = NULL;
  tmp1 = mmc_unbox_integer(_iTaskIdx);
  _oTask = omc_HpcOmScheduler_getTaskByIndex(threadData, tmp1, _iAllCalcTasks);
  /* skip box _oTask; tuple<HpcOmSimCode.Task, #Integer> */
  return _oTask;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getMaxCommCostsByTaskList2(threadData_t *threadData, modelica_metatype _iCommCosts, modelica_integer _iIdx)
{
  modelica_metatype _oComm = NULL;
  modelica_integer _childIdxHead;
  modelica_metatype _tail = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oComm has no default value.
  // _childIdxHead has no default value.
  // _tail has no default value.
  // _head has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iCommCosts;
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_boolean tmp10;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _head = tmpMeta6;
          _childIdxHead = tmp9  /* pattern as ty=Integer */;
          _tail = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (_childIdxHead == _iIdx);
          if (1 /* true */ != tmp10) goto goto_2;
          tmpMeta1 = _head;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta11 = MMC_CAR(tmp4_1);
          tmpMeta12 = MMC_CDR(tmp4_1);
          _tail = tmpMeta12;
          /* Pattern matching succeeded */
          tmpMeta1 = omc_HpcOmScheduler_getMaxCommCostsByTaskList2(threadData, _tail, _iIdx);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT162),stdout);
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
      if (++tmp4 < 3) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oComm = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oComm;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMaxCommCostsByTaskList2(threadData_t *threadData, modelica_metatype _iCommCosts, modelica_metatype _iIdx)
{
  modelica_integer tmp1;
  modelica_metatype _oComm = NULL;
  tmp1 = mmc_unbox_integer(_iIdx);
  _oComm = omc_HpcOmScheduler_getMaxCommCostsByTaskList2(threadData, _iCommCosts, tmp1);
  /* skip box _oComm; HpcOmTaskGraph.Communication */
  return _oComm;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMaxCommCostsByTaskList1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iParentTask, modelica_metatype _iCommCosts, modelica_real _iCurrentMax)
{
  modelica_real _oCommCost;
  modelica_real _reqCycles;
  modelica_metatype _eqIdc = NULL;
  modelica_metatype _parentEqIdc = NULL;
  modelica_metatype _childCommCosts = NULL;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCommCost has no default value.
  // _reqCycles has no default value.
  // _eqIdc has no default value.
  // _parentEqIdc has no default value.
  // _childCommCosts has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _iTask;
    tmp4_2 = _iParentTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
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
          modelica_real tmp11;
          modelica_boolean tmp12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 7));
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,6) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 7));
          _eqIdc = tmpMeta7;
          _parentEqIdc = tmpMeta8;
          /* Pattern matching succeeded */
          _childCommCosts = arrayGet(_iCommCosts, mmc_unbox_integer(listHead(_eqIdc)));

          /* Pattern-matching assignment */
          tmpMeta9 = omc_HpcOmScheduler_getMaxCommCostsByTaskList2(threadData, _childCommCosts, mmc_unbox_integer(listHead(_parentEqIdc)));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 8));
          tmp11 = mmc_unbox_real(tmpMeta10);
          _reqCycles = tmp11  /* pattern as ty=Real */;

          /* Pattern-matching assignment */
          tmp12 = (_reqCycles > _iCurrentMax);
          if (1 /* true */ != tmp12) goto goto_2;
          tmp1 = _reqCycles;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _iCurrentMax;
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
  _oCommCost = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oCommCost;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMaxCommCostsByTaskList1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iParentTask, modelica_metatype _iCommCosts, modelica_metatype _iCurrentMax)
{
  modelica_real tmp1;
  modelica_real _oCommCost;
  modelica_metatype out_oCommCost;
  tmp1 = mmc_unbox_real(_iCurrentMax);
  _oCommCost = omc_HpcOmScheduler_getMaxCommCostsByTaskList1(threadData, _iTask, _iParentTask, _iCommCosts, tmp1);
  out_oCommCost = mmc_mk_rcon(_oCommCost);
  return out_oCommCost;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_getMaxCommCostsByTaskList(threadData_t *threadData, modelica_metatype _iParentTask, modelica_metatype _iTaskList, modelica_metatype _iCommCosts)
{
  modelica_real _oCommCost;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCommCost has no default value.
  _oCommCost = mmc_unbox_real(omc_List_fold2(threadData, _iTaskList, boxvar_HpcOmScheduler_getMaxCommCostsByTaskList1, _iParentTask, _iCommCosts, _OMC_LIT21));
  _return: OMC_LABEL_UNUSED
  return _oCommCost;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getMaxCommCostsByTaskList(threadData_t *threadData, modelica_metatype _iParentTask, modelica_metatype _iTaskList, modelica_metatype _iCommCosts)
{
  modelica_real _oCommCost;
  modelica_metatype out_oCommCost;
  _oCommCost = omc_HpcOmScheduler_getMaxCommCostsByTaskList(threadData, _iParentTask, _iTaskList, _iCommCosts);
  out_oCommCost = mmc_mk_rcon(_oCommCost);
  return out_oCommCost;
}

PROTECTED_FUNCTION_STATIC modelica_real omc_HpcOmScheduler_calculateFinishTimeByThreadId(threadData_t *threadData, modelica_real _iThreadReadyTime, modelica_real _iPredecessorTaskLastFinished, modelica_integer _iThreadId, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts)
{
  modelica_real _oFinishTime;
  modelica_metatype _predecessorTasksOtherTh = NULL;
  modelica_real _commCost;
  modelica_real _calcTime;
  modelica_real _startTime;
  modelica_real tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oFinishTime has no default value.
  // _predecessorTasksOtherTh has no default value.
  // _commCost has no default value.
  // _calcTime has no default value.
  // _startTime has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_real tmp7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmp7 = mmc_unbox_real(tmpMeta6);
          
          _calcTime = tmp7  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          _predecessorTasksOtherTh = omc_List_removeOnTrue(threadData, mmc_mk_integer(_iThreadId), boxvar_HpcOmScheduler_compareTaskWithThreadIdx, _iPredecessorTasks);

          _startTime = fmax(_iThreadReadyTime,_iPredecessorTaskLastFinished);

          _commCost = omc_HpcOmScheduler_getMaxCommCostsByTaskList(threadData, _iTask, _predecessorTasksOtherTh, _iCommCosts);
          tmp1 = _startTime + _commCost + _calcTime;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT163),stdout);
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
  _oFinishTime = tmp1;
  _return: OMC_LABEL_UNUSED
  return _oFinishTime;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_calculateFinishTimeByThreadId(threadData_t *threadData, modelica_metatype _iThreadReadyTime, modelica_metatype _iPredecessorTaskLastFinished, modelica_metatype _iThreadId, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_real _oFinishTime;
  modelica_metatype out_oFinishTime;
  tmp1 = mmc_unbox_real(_iThreadReadyTime);
  tmp2 = mmc_unbox_real(_iPredecessorTaskLastFinished);
  tmp3 = mmc_unbox_integer(_iThreadId);
  _oFinishTime = omc_HpcOmScheduler_calculateFinishTimeByThreadId(threadData, tmp1, tmp2, tmp3, _iTask, _iPredecessorTasks, _iCommCosts);
  out_oFinishTime = mmc_mk_rcon(_oFinishTime);
  return out_oFinishTime;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_calculateFinishTimes1(threadData_t *threadData, modelica_real _iPredecessorTaskLastFinished, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts, modelica_metatype _iThreadReadyTimes, modelica_integer _iThreadIdx, modelica_metatype _iFinishTimes)
{
  modelica_metatype _oFinishTimes = NULL;
  modelica_real _thFinishTime;
  modelica_real _thReadyTime;
  modelica_metatype _tmpFinishTimes = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oFinishTimes has no default value.
  // _thFinishTime has no default value.
  // _thReadyTime has no default value.
  // _tmpFinishTimes has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_iThreadIdx <= arrayLength(_iThreadReadyTimes));
          if (1 /* true */ != tmp6) goto goto_2;

          _thReadyTime = mmc_unbox_real(arrayGet(_iThreadReadyTimes, _iThreadIdx));

          _thFinishTime = omc_HpcOmScheduler_calculateFinishTimeByThreadId(threadData, _thReadyTime, _iPredecessorTaskLastFinished, _iThreadIdx, _iTask, _iPredecessorTasks, _iCommCosts);

          _tmpFinishTimes = arrayUpdate(_iFinishTimes, _iThreadIdx, mmc_mk_real(_thFinishTime));
          tmpMeta1 = omc_HpcOmScheduler_calculateFinishTimes1(threadData, _iPredecessorTaskLastFinished, _iTask, _iPredecessorTasks, _iCommCosts, _iThreadReadyTimes, ((modelica_integer) 1) + _iThreadIdx, _tmpFinishTimes);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iFinishTimes;
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
  _oFinishTimes = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oFinishTimes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_calculateFinishTimes1(threadData_t *threadData, modelica_metatype _iPredecessorTaskLastFinished, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts, modelica_metatype _iThreadReadyTimes, modelica_metatype _iThreadIdx, modelica_metatype _iFinishTimes)
{
  modelica_real tmp1;
  modelica_integer tmp2;
  modelica_metatype _oFinishTimes = NULL;
  tmp1 = mmc_unbox_real(_iPredecessorTaskLastFinished);
  tmp2 = mmc_unbox_integer(_iThreadIdx);
  _oFinishTimes = omc_HpcOmScheduler_calculateFinishTimes1(threadData, tmp1, _iTask, _iPredecessorTasks, _iCommCosts, _iThreadReadyTimes, tmp2, _iFinishTimes);
  /* skip box _oFinishTimes; array<#Real> */
  return _oFinishTimes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_calculateFinishTimes(threadData_t *threadData, modelica_real _iPredecessorTaskLastFinished, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts, modelica_metatype _iThreadReadyTimes)
{
  modelica_metatype _oFinishTimes = NULL;
  modelica_metatype _tmpFinishTimes = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oFinishTimes has no default value.
  // _tmpFinishTimes has no default value.
  _tmpFinishTimes = arrayCreate(arrayLength(_iThreadReadyTimes), _OMC_LIT21);

  _tmpFinishTimes = omc_HpcOmScheduler_calculateFinishTimes1(threadData, _iPredecessorTaskLastFinished, _iTask, _iPredecessorTasks, _iCommCosts, _iThreadReadyTimes, ((modelica_integer) 1), _tmpFinishTimes);

  _oFinishTimes = _tmpFinishTimes;
  _return: OMC_LABEL_UNUSED
  return _oFinishTimes;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_calculateFinishTimes(threadData_t *threadData, modelica_metatype _iPredecessorTaskLastFinished, modelica_metatype _iTask, modelica_metatype _iPredecessorTasks, modelica_metatype _iCommCosts, modelica_metatype _iThreadReadyTimes)
{
  modelica_real tmp1;
  modelica_metatype _oFinishTimes = NULL;
  tmp1 = mmc_unbox_real(_iPredecessorTaskLastFinished);
  _oFinishTimes = omc_HpcOmScheduler_calculateFinishTimes(threadData, tmp1, _iTask, _iPredecessorTasks, _iCommCosts, _iThreadReadyTimes);
  /* skip box _oFinishTimes; array<#Real> */
  return _oFinishTimes;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertNodeToTaskReverse(threadData_t *threadData, modelica_integer _iNodeIdx, modelica_metatype _iTaskGraphMeta)
{
  modelica_metatype _oTask = NULL;
  modelica_integer _nodeMark;
  modelica_integer _primalComp;
  modelica_metatype _components = NULL;
  modelica_real _exeCost;
  modelica_metatype _nodeMarks = NULL;
  modelica_metatype _exeCosts = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTask has no default value.
  // _nodeMark has no default value.
  // _primalComp has no default value.
  // _components has no default value.
  // _exeCost has no default value.
  // _nodeMarks has no default value.
  // _exeCosts has no default value.
  // _inComps has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTaskGraphMeta;
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
          modelica_real tmp11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          
          _inComps = tmpMeta6;
          _exeCosts = tmpMeta7;
          _nodeMarks = tmpMeta8;
          /* Pattern matching succeeded */
          _components = arrayGet(_inComps, _iNodeIdx);

          _primalComp = mmc_unbox_integer(listGet(_components, ((modelica_integer) 1)));

          _nodeMark = mmc_unbox_integer(arrayGet(_nodeMarks, _primalComp));

          /* Pattern-matching assignment */
          tmpMeta9 = arrayGet(_exeCosts, _iNodeIdx);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp11 = mmc_unbox_real(tmpMeta10);
          _exeCost = tmp11  /* pattern as ty=Real */;

          _nodeMark = (-_nodeMark);
          tmpMeta12 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_nodeMark), mmc_mk_integer(_iNodeIdx), mmc_mk_real(_exeCost), _OMC_LIT55, mmc_mk_integer(((modelica_integer) -1)), _components);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT164),stdout);
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
  _oTask = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTask;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertNodeToTaskReverse(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iTaskGraphMeta)
{
  modelica_integer tmp1;
  modelica_metatype _oTask = NULL;
  tmp1 = mmc_unbox_integer(_iNodeIdx);
  _oTask = omc_HpcOmScheduler_convertNodeToTaskReverse(threadData, tmp1, _iTaskGraphMeta);
  /* skip box _oTask; HpcOmSimCode.Task */
  return _oTask;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertNodeToTask(threadData_t *threadData, modelica_integer _iNodeIdx, modelica_metatype _iTaskGraphMeta)
{
  modelica_metatype _oTask = NULL;
  modelica_integer _nodeMark;
  modelica_integer _primalComp;
  modelica_metatype _components = NULL;
  modelica_real _exeCost;
  modelica_metatype _nodeMarks = NULL;
  modelica_metatype _exeCosts = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTask has no default value.
  // _nodeMark has no default value.
  // _primalComp has no default value.
  // _components has no default value.
  // _exeCost has no default value.
  // _nodeMarks has no default value.
  // _exeCosts has no default value.
  // _inComps has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iTaskGraphMeta;
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
          modelica_real tmp11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 10));
          
          _inComps = tmpMeta6;
          _exeCosts = tmpMeta7;
          _nodeMarks = tmpMeta8;
          /* Pattern matching succeeded */
          _components = arrayGet(_inComps, _iNodeIdx);

          _primalComp = mmc_unbox_integer(listGet(_components, ((modelica_integer) 1)));

          _nodeMark = mmc_unbox_integer(arrayGet(_nodeMarks, _primalComp));

          /* Pattern-matching assignment */
          tmpMeta9 = omc_HpcOmTaskGraph_getExeCost(threadData, _iNodeIdx, _iTaskGraphMeta);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp11 = mmc_unbox_real(tmpMeta10);
          _exeCost = tmp11  /* pattern as ty=Real */;
          tmpMeta12 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_nodeMark), mmc_mk_integer(_iNodeIdx), mmc_mk_real(_exeCost), _OMC_LIT55, mmc_mk_integer(((modelica_integer) -1)), _components);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT164),stdout);
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
  _oTask = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTask;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertNodeToTask(threadData_t *threadData, modelica_metatype _iNodeIdx, modelica_metatype _iTaskGraphMeta)
{
  modelica_integer tmp1;
  modelica_metatype _oTask = NULL;
  tmp1 = mmc_unbox_integer(_iNodeIdx);
  _oTask = omc_HpcOmScheduler_convertNodeToTask(threadData, tmp1, _iTaskGraphMeta);
  /* skip box _oTask; HpcOmSimCode.Task */
  return _oTask;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertTaskGraphToTasks1(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iTaskGraphT, modelica_integer _iIndex, modelica_fnptr _iConverterFunc, modelica_metatype _iTasks)
{
  modelica_metatype _oTasks = NULL;
  modelica_metatype _tmpTasks = NULL;
  modelica_integer _refCount;
  modelica_metatype _newTask = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTasks has no default value.
  // _tmpTasks has no default value.
  // _refCount has no default value.
  // _newTask has no default value.
  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_iIndex <= arrayLength(_iTaskGraphT));
          if (1 /* true */ != tmp6) goto goto_2;

          _refCount = listLength(arrayGet(_iTaskGraphT, _iIndex));

          _newTask = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iConverterFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iConverterFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iConverterFunc), 2))), mmc_mk_integer(_iIndex), _iTaskGraphMeta) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iConverterFunc), 1)))) (threadData, mmc_mk_integer(_iIndex), _iTaskGraphMeta);

          tmpMeta7 = mmc_mk_box2(0, _newTask, mmc_mk_integer(_refCount));
          _tmpTasks = arrayUpdate(_iTasks, _iIndex, tmpMeta7);
          tmpMeta1 = omc_HpcOmScheduler_convertTaskGraphToTasks1(threadData, _iTaskGraphMeta, _iTaskGraphT, ((modelica_integer) 1) + _iIndex, ((modelica_fnptr) _iConverterFunc), _tmpTasks);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta1 = _iTasks;
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
  _oTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTasks;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertTaskGraphToTasks1(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iTaskGraphT, modelica_metatype _iIndex, modelica_fnptr _iConverterFunc, modelica_metatype _iTasks)
{
  modelica_integer tmp1;
  modelica_metatype _oTasks = NULL;
  tmp1 = mmc_unbox_integer(_iIndex);
  _oTasks = omc_HpcOmScheduler_convertTaskGraphToTasks1(threadData, _iTaskGraphMeta, _iTaskGraphT, tmp1, _iConverterFunc, _iTasks);
  /* skip box _oTasks; array<tuple<HpcOmSimCode.Task, #Integer>> */
  return _oTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertTaskGraphToTasks(threadData_t *threadData, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_fnptr _iConverterFunc)
{
  modelica_metatype _oTasks = NULL;
  modelica_metatype _tmpTaskArray = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTasks has no default value.
  // _tmpTaskArray has no default value.
  _tmpTaskArray = arrayCreate(arrayLength(_iTaskGraphT), _OMC_LIT93);

  _oTasks = omc_HpcOmScheduler_convertTaskGraphToTasks1(threadData, _iTaskGraphMeta, _iTaskGraphT, ((modelica_integer) 1), ((modelica_fnptr) _iConverterFunc), _tmpTaskArray);
  _return: OMC_LABEL_UNUSED
  return _oTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getTaskWithHighestFinishTime(threadData_t *threadData, modelica_metatype _iTasks, modelica_metatype _iCurrentTask)
{
  modelica_metatype _oTask = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _tmpTask = NULL;
  modelica_metatype _tail = NULL;
  modelica_real _timeFinishedHead;
  modelica_real _timeFinishedCurrent;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTask has no default value.
  // _head has no default value.
  // _tmpTask has no default value.
  // _tail has no default value.
  // _timeFinishedHead has no default value.
  // _timeFinishedCurrent has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _iTasks;
    tmp4_2 = _iCurrentTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 1));
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _head = tmpMeta8;
          _tail = tmpMeta7;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_HpcOmScheduler_getTaskWithHighestFinishTime(threadData, _tail, mmc_mk_some(_head));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_real tmp16;
          modelica_boolean tmp17;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta11,1,6) == 0) goto tmp3_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 5));
          tmp13 = mmc_unbox_real(tmpMeta12);
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta14,1,6) == 0) goto tmp3_end;
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 5));
          tmp16 = mmc_unbox_real(tmpMeta15);
          
          _head = tmpMeta11;
          _timeFinishedHead = tmp13  /* pattern as ty=Real */;
          _tail = tmpMeta10;
          _timeFinishedCurrent = tmp16  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp17 = (_timeFinishedHead > _timeFinishedCurrent);
          if (1 /* true */ != tmp17) goto goto_2;
          tmpMeta1 = omc_HpcOmScheduler_getTaskWithHighestFinishTime(threadData, _tail, mmc_mk_some(_head));
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmp4_1);
          tmpMeta19 = MMC_CDR(tmp4_1);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta18), 1));
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _head = tmpMeta20;
          _tail = tmpMeta19;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta1 = omc_HpcOmScheduler_getTaskWithHighestFinishTime(threadData, _tail, _iCurrentTask);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta22;
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _tmpTask = tmpMeta22;
          /* Pattern matching succeeded */
          tmpMeta1 = _tmpTask;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT165),stdout);
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
      if (++tmp4 < 5) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oTask = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oTask;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getThreadFinishTimesMin(threadData_t *threadData, modelica_integer _iThreadIdx, modelica_metatype _iThreadFinishTimes, modelica_integer _iCurrentMinThreadIdx, modelica_real _iCurrentMinFinishTime)
{
  modelica_metatype _minThreadTime_Idx = NULL;
  modelica_real _threadFinishTime;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _minThreadTime_Idx has no default value.
  // _threadFinishTime has no default value.
  { /* matchcontinue expression */
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
          modelica_boolean tmp6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = (_iThreadIdx > arrayLength(_iThreadFinishTimes));
          if (1 /* true */ != tmp6) goto goto_2;
          tmpMeta7 = mmc_mk_box2(0, mmc_mk_integer(_iCurrentMinThreadIdx), mmc_mk_real(_iCurrentMinFinishTime));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 1: {
          modelica_boolean tmp8;
          /* Pattern matching succeeded */
          _threadFinishTime = mmc_unbox_real(arrayGet(_iThreadFinishTimes, _iThreadIdx));

          /* Pattern-matching assignment */
          tmp8 = ((_threadFinishTime < _iCurrentMinFinishTime) || (_iCurrentMinThreadIdx == ((modelica_integer) -1)));
          if (1 /* true */ != tmp8) goto goto_2;
          tmpMeta1 = omc_HpcOmScheduler_getThreadFinishTimesMin(threadData, ((modelica_integer) 1) + _iThreadIdx, _iThreadFinishTimes, _iThreadIdx, _threadFinishTime);
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          tmpMeta1 = omc_HpcOmScheduler_getThreadFinishTimesMin(threadData, ((modelica_integer) 1) + _iThreadIdx, _iThreadFinishTimes, _iCurrentMinThreadIdx, _iCurrentMinFinishTime);
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
  _minThreadTime_Idx = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _minThreadTime_Idx;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getThreadFinishTimesMin(threadData_t *threadData, modelica_metatype _iThreadIdx, modelica_metatype _iThreadFinishTimes, modelica_metatype _iCurrentMinThreadIdx, modelica_metatype _iCurrentMinFinishTime)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_real tmp3;
  modelica_metatype _minThreadTime_Idx = NULL;
  tmp1 = mmc_unbox_integer(_iThreadIdx);
  tmp2 = mmc_unbox_integer(_iCurrentMinThreadIdx);
  tmp3 = mmc_unbox_real(_iCurrentMinFinishTime);
  _minThreadTime_Idx = omc_HpcOmScheduler_getThreadFinishTimesMin(threadData, tmp1, _iThreadFinishTimes, tmp2, tmp3);
  /* skip box _minThreadTime_Idx; tuple<#Integer, #Real> */
  return _minThreadTime_Idx;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_updateRefCounterBySuccessorIdc(threadData_t *threadData, modelica_metatype _iAllCalcTasks, modelica_metatype _iSuccessorIdc, modelica_metatype _iRefZeroTasks, modelica_metatype *out_oRefZeroTasks)
{
  modelica_metatype _oAllCalcTasks = NULL;
  modelica_metatype _oRefZeroTasks = NULL;
  modelica_integer _head;
  modelica_integer _currentRefCount;
  modelica_metatype _rest = NULL;
  modelica_metatype _tmpRefZeroTasks = NULL;
  modelica_metatype _currentTask = NULL;
  modelica_metatype _tmpAllCalcTasks = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAllCalcTasks has no default value.
  // _oRefZeroTasks has no default value.
  // _head has no default value.
  // _currentRefCount has no default value.
  // _rest has no default value.
  // _tmpRefZeroTasks has no default value.
  // _currentTask has no default value.
  // _tmpAllCalcTasks has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iSuccessorIdc;
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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_boolean tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _head = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta9 = arrayGet(_iAllCalcTasks, _head);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 1));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          _currentTask = tmpMeta10;
          _currentRefCount = tmp12  /* pattern as ty=Integer */;

          /* Pattern-matching assignment */
          tmp13 = (_currentRefCount == ((modelica_integer) 1));
          if (1 /* true */ != tmp13) goto goto_2;

          tmpMeta14 = mmc_mk_box2(0, _currentTask, mmc_mk_integer(((modelica_integer) 0)));
          _tmpAllCalcTasks = arrayUpdate(_iAllCalcTasks, _head, tmpMeta14);

          tmpMeta15 = mmc_mk_cons(_currentTask, _iRefZeroTasks);
          _tmpRefZeroTasks = tmpMeta15;
          tmpMeta[0+0] = omc_HpcOmScheduler_updateRefCounterBySuccessorIdc(threadData, _tmpAllCalcTasks, _rest, _tmpRefZeroTasks, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_integer tmp18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_metatype tmpMeta23;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta16 = MMC_CAR(tmp4_1);
          tmpMeta17 = MMC_CDR(tmp4_1);
          tmp18 = mmc_unbox_integer(tmpMeta16);
          _head = tmp18  /* pattern as ty=Integer */;
          _rest = tmpMeta17;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta19 = arrayGet(_iAllCalcTasks, _head);
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 1));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 2));
          tmp22 = mmc_unbox_integer(tmpMeta21);
          _currentTask = tmpMeta20;
          _currentRefCount = tmp22  /* pattern as ty=Integer */;

          tmpMeta23 = mmc_mk_box2(0, _currentTask, mmc_mk_integer(((modelica_integer) -1) + _currentRefCount));
          _tmpAllCalcTasks = arrayUpdate(_iAllCalcTasks, _head, tmpMeta23);
          tmpMeta[0+0] = omc_HpcOmScheduler_updateRefCounterBySuccessorIdc(threadData, _tmpAllCalcTasks, _rest, _iRefZeroTasks, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _iAllCalcTasks;
          tmpMeta[0+1] = _iRefZeroTasks;
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
  _oAllCalcTasks = tmpMeta[0+0];
  _oRefZeroTasks = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oRefZeroTasks) { *out_oRefZeroTasks = _oRefZeroTasks; }
  return _oAllCalcTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createDepTaskByTaskIdcR(threadData_t *threadData, modelica_integer _iSourceTaskIdx, modelica_integer _iTargetTaskIdx, modelica_metatype _iAllCalcTasks, modelica_boolean _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oAssignTask = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAssignTask has no default value.
  _oAssignTask = omc_HpcOmScheduler_createDepTaskByTaskIdc(threadData, _iTargetTaskIdx, _iSourceTaskIdx, _iAllCalcTasks, _iOutgoing, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
  _return: OMC_LABEL_UNUSED
  return _oAssignTask;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createDepTaskByTaskIdcR(threadData_t *threadData, modelica_metatype _iSourceTaskIdx, modelica_metatype _iTargetTaskIdx, modelica_metatype _iAllCalcTasks, modelica_metatype _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _oAssignTask = NULL;
  tmp1 = mmc_unbox_integer(_iSourceTaskIdx);
  tmp2 = mmc_unbox_integer(_iTargetTaskIdx);
  tmp3 = mmc_unbox_integer(_iOutgoing);
  _oAssignTask = omc_HpcOmScheduler_createDepTaskByTaskIdcR(threadData, tmp1, tmp2, _iAllCalcTasks, tmp3, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
  /* skip box _oAssignTask; HpcOmSimCode.Task */
  return _oAssignTask;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createDepTaskByTaskIdc(threadData_t *threadData, modelica_integer _iSourceTaskIdx, modelica_integer _iTargetTaskIdx, modelica_metatype _iAllCalcTasks, modelica_boolean _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oAssignTask = NULL;
  modelica_metatype _sourceTask = NULL;
  modelica_metatype _targetTask = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAssignTask has no default value.
  // _sourceTask has no default value.
  // _targetTask has no default value.
  _sourceTask = omc_Util_tuple21(threadData, arrayGet(_iAllCalcTasks, _iSourceTaskIdx));

  _targetTask = omc_Util_tuple21(threadData, arrayGet(_iAllCalcTasks, _iTargetTaskIdx));

  _oAssignTask = omc_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData, _sourceTask, _targetTask, _iOutgoing, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
  _return: OMC_LABEL_UNUSED
  return _oAssignTask;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createDepTaskByTaskIdc(threadData_t *threadData, modelica_metatype _iSourceTaskIdx, modelica_metatype _iTargetTaskIdx, modelica_metatype _iAllCalcTasks, modelica_metatype _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype _oAssignTask = NULL;
  tmp1 = mmc_unbox_integer(_iSourceTaskIdx);
  tmp2 = mmc_unbox_integer(_iTargetTaskIdx);
  tmp3 = mmc_unbox_integer(_iOutgoing);
  _oAssignTask = omc_HpcOmScheduler_createDepTaskByTaskIdc(threadData, tmp1, tmp2, _iAllCalcTasks, tmp3, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
  /* skip box _oAssignTask; HpcOmSimCode.Task */
  return _oAssignTask;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData_t *threadData, modelica_metatype _iSourceTask, modelica_metatype _iTargetTask, modelica_boolean _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oAssignTask = NULL;
  modelica_integer _predIndex;
  modelica_integer _taskIndex;
  modelica_metatype _tmpTask = NULL;
  modelica_metatype _commBetweenTasks = NULL;
  modelica_metatype _commInfo = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAssignTask has no default value.
  // _predIndex has no default value.
  // _taskIndex has no default value.
  // _tmpTask has no default value.
  // _commBetweenTasks has no default value.
  // _commInfo has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _iSourceTask;
    tmp4_2 = _iTargetTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,6) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          
          _predIndex = tmp7  /* pattern as ty=Integer */;
          _taskIndex = tmp9  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          _commBetweenTasks = omc_HpcOmScheduler_getCommunicationObjBetweenMergedTasks(threadData, _predIndex, _taskIndex, _iCompTaskMapping, _iCommCosts);

          _commInfo = omc_HpcOmScheduler_convertCommunicationToCommInfo(threadData, _commBetweenTasks, _iSimVarMapping);
          tmpMeta1 = omc_HpcOmScheduler_createDepTask(threadData, _iSourceTask, _iTargetTask, _iOutgoing, _commInfo);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT166),stdout);
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
  _oAssignTask = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oAssignTask;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData_t *threadData, modelica_metatype _iSourceTask, modelica_metatype _iTargetTask, modelica_metatype _iOutgoing, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oAssignTask = NULL;
  tmp1 = mmc_unbox_integer(_iOutgoing);
  _oAssignTask = omc_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData, _iSourceTask, _iTargetTask, tmp1, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
  /* skip box _oAssignTask; HpcOmSimCode.Task */
  return _oAssignTask;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createDepTask(threadData_t *threadData, modelica_metatype _iSourceTask, modelica_metatype _iTargetTask, modelica_boolean _iOutgoing, modelica_metatype _commInfo)
{
  modelica_metatype _oAssignTask = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oAssignTask has no default value.
  tmpMeta1 = mmc_mk_box6(6, &HpcOmSimCode_Task_DEPTASK__desc, _iSourceTask, _iTargetTask, mmc_mk_boolean(_iOutgoing), mmc_mk_integer(((modelica_integer) 0)), _commInfo);
  _oAssignTask = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oAssignTask;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createDepTask(threadData_t *threadData, modelica_metatype _iSourceTask, modelica_metatype _iTargetTask, modelica_metatype _iOutgoing, modelica_metatype _commInfo)
{
  modelica_integer tmp1;
  modelica_metatype _oAssignTask = NULL;
  tmp1 = mmc_unbox_integer(_iOutgoing);
  _oAssignTask = omc_HpcOmScheduler_createDepTask(threadData, _iSourceTask, _iTargetTask, tmp1, _commInfo);
  /* skip box _oAssignTask; HpcOmSimCode.Task */
  return _oAssignTask;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertVarIdxToSimVar(threadData_t *threadData, modelica_integer _iVarIdx, modelica_metatype _iSimVarMapping, modelica_metatype _iSimVar)
{
  modelica_metatype _oSimVar = NULL;
  modelica_metatype _tmpSimVars = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSimVar has no default value.
  // _tmpSimVars has no default value.
  _tmpSimVars = arrayGet(_iSimVarMapping, _iVarIdx);

  _oSimVar = listAppend(_iSimVar, _tmpSimVars);
  _return: OMC_LABEL_UNUSED
  return _oSimVar;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_convertVarIdxToSimVar(threadData_t *threadData, modelica_metatype _iVarIdx, modelica_metatype _iSimVarMapping, modelica_metatype _iSimVar)
{
  modelica_integer tmp1;
  modelica_metatype _oSimVar = NULL;
  tmp1 = mmc_unbox_integer(_iVarIdx);
  _oSimVar = omc_HpcOmScheduler_convertVarIdxToSimVar(threadData, tmp1, _iSimVarMapping, _iSimVar);
  /* skip box _oSimVar; list<SimCodeVar.SimVar> */
  return _oSimVar;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_convertCommunicationToCommInfo(threadData_t *threadData, modelica_metatype _iCommunication, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oCommInfo = NULL;
  modelica_metatype _integerVars = NULL;
  modelica_metatype _floatVars = NULL;
  modelica_metatype _booleanVars = NULL;
  modelica_metatype _intSimVars = NULL;
  modelica_metatype _floatSimVars = NULL;
  modelica_metatype _boolSimVars = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCommInfo has no default value.
  // _integerVars has no default value.
  // _floatVars has no default value.
  // _booleanVars has no default value.
  // _intSimVars has no default value.
  // _floatSimVars has no default value.
  // _boolSimVars has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iCommunication;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          
          _integerVars = tmpMeta6;
          _floatVars = tmpMeta7;
          _booleanVars = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          _intSimVars = omc_List_fold1(threadData, _integerVars, boxvar_HpcOmScheduler_convertVarIdxToSimVar, _iSimVarMapping, tmpMeta9);

          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          _floatSimVars = omc_List_fold1(threadData, _floatVars, boxvar_HpcOmScheduler_convertVarIdxToSimVar, _iSimVarMapping, tmpMeta10);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _boolSimVars = omc_List_fold1(threadData, _booleanVars, boxvar_HpcOmScheduler_convertVarIdxToSimVar, _iSimVarMapping, tmpMeta11);
          tmpMeta12 = mmc_mk_box4(3, &HpcOmSimCode_CommunicationInfo_COMMUNICATION__INFO__desc, _floatSimVars, _intSimVars, _boolSimVars);
          tmpMeta1 = tmpMeta12;
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
  _oCommInfo = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCommInfo;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getCommunicationObjBetweenMergedTasks1(threadData_t *threadData, modelica_metatype _parentCommCost, modelica_metatype _tasks, modelica_metatype _iCommunication)
{
  modelica_metatype _oCommunication = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCommunication has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _parentCommCost;
    tmp4_2 = _iCommunication;
    {
      modelica_integer _nV1;
      modelica_integer _nV2;
      modelica_integer _childNode;
      modelica_metatype _ints1 = NULL;
      modelica_metatype _ints2 = NULL;
      modelica_metatype _fl1 = NULL;
      modelica_metatype _fl2 = NULL;
      modelica_metatype _b1 = NULL;
      modelica_metatype _b2 = NULL;
      modelica_metatype _s1 = NULL;
      modelica_metatype _s2 = NULL;
      modelica_real _reqT1;
      modelica_real _reqT2;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _nV1 has no default value.
      // _nV2 has no default value.
      // _childNode has no default value.
      // _ints1 has no default value.
      // _ints2 has no default value.
      // _fl1 has no default value.
      // _fl2 has no default value.
      // _b1 has no default value.
      // _b2 has no default value.
      // _s1 has no default value.
      // _s2 has no default value.
      // _reqT1 has no default value.
      // _reqT2 has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_integer tmp13;
          modelica_metatype tmpMeta14;
          modelica_real tmp15;
          modelica_metatype tmpMeta16;
          modelica_integer tmp17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_real tmp23;
          modelica_boolean tmp24;
          modelica_metatype tmpMeta25;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 4));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 7));
          tmp13 = mmc_unbox_integer(tmpMeta12);
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          tmp15 = mmc_unbox_real(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmp17 = mmc_unbox_integer(tmpMeta16);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 4));
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 6));
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 8));
          tmp23 = mmc_unbox_real(tmpMeta22);
          _nV1 = tmp7  /* pattern as ty=Integer */;
          _ints1 = tmpMeta8;
          _fl1 = tmpMeta9;
          _b1 = tmpMeta10;
          _s1 = tmpMeta11;
          _childNode = tmp13  /* pattern as ty=Integer */;
          _reqT1 = tmp15  /* pattern as ty=Real */;
          _nV2 = tmp17  /* pattern as ty=Integer */;
          _ints2 = tmpMeta18;
          _fl2 = tmpMeta19;
          _b2 = tmpMeta20;
          _s2 = tmpMeta21;
          _reqT2 = tmp23  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp24 = listMember(mmc_mk_integer(_childNode), _tasks);
          if (1 /* true */ != tmp24) goto goto_2;
          tmpMeta25 = mmc_mk_box8(3, &HpcOmTaskGraph_Communication_COMMUNICATION__desc, mmc_mk_integer(_nV1 + _nV2), listAppend(_ints1, _ints2), listAppend(_fl1, _fl2), listAppend(_b1, _b2), listAppend(_s1, _s2), mmc_mk_integer(_childNode), mmc_mk_real(_reqT1 + _reqT2));
          tmpMeta1 = tmpMeta25;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iCommunication;
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
  _oCommunication = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oCommunication;
}

static modelica_metatype closure18_HpcOmScheduler_getCommunicationObjBetweenMergedTasks1(threadData_t *thData, modelica_metatype closure, modelica_metatype parentCommCost, modelica_metatype iCommunication)
{
  modelica_metatype tasks = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_HpcOmScheduler_getCommunicationObjBetweenMergedTasks1(thData, parentCommCost, tasks, iCommunication);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getCommunicationObjBetweenMergedTasks(threadData_t *threadData, modelica_integer _parentNode, modelica_integer _node, modelica_metatype _inComps, modelica_metatype _inCommCosts)
{
  modelica_metatype _oCommunication = NULL;
  modelica_metatype _nodeTasks = NULL;
  modelica_metatype _parentTasks = NULL;
  modelica_metatype _commFold = NULL;
  modelica_metatype _edgesFromParents = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oCommunication has no default value.
  // _nodeTasks has no default value.
  // _parentTasks has no default value.
  // _commFold has no default value.
  // _edgesFromParents has no default value.
  _nodeTasks = arrayGet(_inComps, _node);

  _parentTasks = arrayGet(_inComps, _parentNode);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = mmc_mk_box8(3, &HpcOmTaskGraph_Communication_COMMUNICATION__desc, mmc_mk_integer(((modelica_integer) 0)), tmpMeta1, tmpMeta2, tmpMeta3, tmpMeta4, mmc_mk_integer(_node), _OMC_LIT55);
  _commFold = tmpMeta5;

  _edgesFromParents = omc_List_flatten(threadData, omc_List_map1(threadData, _parentTasks, boxvar_Array_getIndexFirst, _inCommCosts));

  tmpMeta6 = mmc_mk_box1(0, _nodeTasks);
  _oCommunication = omc_List_fold(threadData, _edgesFromParents, (modelica_fnptr) mmc_mk_box2(0,closure18_HpcOmScheduler_getCommunicationObjBetweenMergedTasks1,tmpMeta6), _commFold);
  _return: OMC_LABEL_UNUSED
  return _oCommunication;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getCommunicationObjBetweenMergedTasks(threadData_t *threadData, modelica_metatype _parentNode, modelica_metatype _node, modelica_metatype _inComps, modelica_metatype _inCommCosts)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oCommunication = NULL;
  tmp1 = mmc_unbox_integer(_parentNode);
  tmp2 = mmc_unbox_integer(_node);
  _oCommunication = omc_HpcOmScheduler_getCommunicationObjBetweenMergedTasks(threadData, tmp1, tmp2, _inComps, _inCommCosts);
  /* skip box _oCommunication; HpcOmTaskGraph.Communication */
  return _oCommunication;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLockTasksByPredecessorListReverse0(threadData_t *threadData, modelica_metatype _iPredecessorTask, modelica_metatype _iTask, modelica_integer _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iLockTasks)
{
  modelica_metatype _oLockTasks = NULL;
  modelica_integer _index;
  modelica_integer _threadIdx;
  modelica_metatype _predTask = NULL;
  modelica_metatype _tmpTask = NULL;
  modelica_metatype _tmpLockTasks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLockTasks has no default value.
  // _index has no default value.
  // _threadIdx has no default value.
  // _predTask has no default value.
  // _tmpTask has no default value.
  // _tmpLockTasks has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _iPredecessorTask;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 3));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          tmp10 = mmc_unbox_integer(tmpMeta9);
          
          _predTask = tmpMeta6;
          _index = tmp8  /* pattern as ty=Integer */;
          _threadIdx = tmp10  /* pattern as ty=Integer */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = (_iThreadIdx != _threadIdx);
          if (1 /* true */ != tmp11) goto goto_2;

          _tmpTask = omc_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData, _iTask, _predTask, 1 /* true */, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
          tmpMeta12 = mmc_mk_cons(_tmpTask, _iLockTasks);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iLockTasks;
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
  _oLockTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oLockTasks;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLockTasksByPredecessorListReverse0(threadData_t *threadData, modelica_metatype _iPredecessorTask, modelica_metatype _iTask, modelica_metatype _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iLockTasks)
{
  modelica_integer tmp1;
  modelica_metatype _oLockTasks = NULL;
  tmp1 = mmc_unbox_integer(_iThreadIdx);
  _oLockTasks = omc_HpcOmScheduler_getLockTasksByPredecessorListReverse0(threadData, _iPredecessorTask, _iTask, tmp1, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, _iLockTasks);
  /* skip box _oLockTasks; list<HpcOmSimCode.Task> */
  return _oLockTasks;
}

static modelica_metatype closure19_HpcOmScheduler_getLockTasksByPredecessorListReverse0(threadData_t *thData, modelica_metatype closure, modelica_metatype iPredecessorTask, modelica_metatype iLockTasks)
{
  modelica_metatype iTask = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iThreadIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iCommCosts = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iCompTaskMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iSimVarMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  return boxptr_HpcOmScheduler_getLockTasksByPredecessorListReverse0(thData, iPredecessorTask, iTask, iThreadIdx, iCommCosts, iCompTaskMapping, iSimVarMapping, iLockTasks);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLockTasksByPredecessorListReverse(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iPredecessorList, modelica_integer _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oOutgoingDepTasks)
{
  modelica_metatype _oLockTasks = NULL;
  modelica_metatype _oOutgoingDepTasks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLockTasks has no default value.
  // _oOutgoingDepTasks has no default value.
  tmpMeta1 = mmc_mk_box5(0, _iTask, mmc_mk_integer(_iThreadIdx), _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _oLockTasks = omc_List_fold(threadData, _iPredecessorList, (modelica_fnptr) mmc_mk_box2(0,closure19_HpcOmScheduler_getLockTasksByPredecessorListReverse0,tmpMeta1), tmpMeta2);

  _oOutgoingDepTasks = _oLockTasks;
  _return: OMC_LABEL_UNUSED
  if (out_oOutgoingDepTasks) { *out_oOutgoingDepTasks = _oOutgoingDepTasks; }
  return _oLockTasks;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLockTasksByPredecessorListReverse(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iPredecessorList, modelica_metatype _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oOutgoingDepTasks)
{
  modelica_integer tmp1;
  modelica_metatype _oLockTasks = NULL;
  tmp1 = mmc_unbox_integer(_iThreadIdx);
  _oLockTasks = omc_HpcOmScheduler_getLockTasksByPredecessorListReverse(threadData, _iTask, _iPredecessorList, tmp1, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, out_oOutgoingDepTasks);
  /* skip box _oLockTasks; list<HpcOmSimCode.Task> */
  /* skip box _oOutgoingDepTasks; list<HpcOmSimCode.Task> */
  return _oLockTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLockTasksByPredecessorList(threadData_t *threadData, modelica_metatype _iPredecessorTask, modelica_metatype _iTask, modelica_integer _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iLockTasks)
{
  modelica_metatype _oLockTasks = NULL;
  modelica_integer _threadIdx;
  modelica_metatype _tmpLockTasks = NULL;
  modelica_metatype _tmpTask = NULL;
  modelica_metatype _predTask = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLockTasks has no default value.
  // _threadIdx has no default value.
  // _tmpLockTasks has no default value.
  // _tmpTask has no default value.
  // _predTask has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;volatile modelica_metatype tmp4_3;
    tmp4_1 = _iPredecessorTask;
    tmp4_2 = _iTask;
    tmp4_3 = _iLockTasks;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_boolean tmp9;
          modelica_metatype tmpMeta10;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,1,6) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta6), 6));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,6) == 0) goto tmp3_end;
          
          _predTask = tmpMeta6;
          _threadIdx = tmp8  /* pattern as ty=Integer */;
          _tmpLockTasks = tmp4_3;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp9 = (_iThreadIdx != _threadIdx);
          if (1 /* true */ != tmp9) goto goto_2;

          _tmpTask = omc_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData, _predTask, _iTask, 0 /* false */, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
          tmpMeta10 = mmc_mk_cons(_tmpTask, _tmpLockTasks);
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iLockTasks;
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
  _oLockTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oLockTasks;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLockTasksByPredecessorList(threadData_t *threadData, modelica_metatype _iPredecessorTask, modelica_metatype _iTask, modelica_metatype _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iLockTasks)
{
  modelica_integer tmp1;
  modelica_metatype _oLockTasks = NULL;
  tmp1 = mmc_unbox_integer(_iThreadIdx);
  _oLockTasks = omc_HpcOmScheduler_getLockTasksByPredecessorList(threadData, _iPredecessorTask, _iTask, tmp1, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, _iLockTasks);
  /* skip box _oLockTasks; list<HpcOmSimCode.Task> */
  return _oLockTasks;
}

static modelica_metatype closure20_HpcOmScheduler_getLockTasksByPredecessorList(threadData_t *thData, modelica_metatype closure, modelica_metatype iPredecessorTask, modelica_metatype iLockTasks)
{
  modelica_metatype iTask = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iThreadIdx = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iCommCosts = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iCompTaskMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iSimVarMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  return boxptr_HpcOmScheduler_getLockTasksByPredecessorList(thData, iPredecessorTask, iTask, iThreadIdx, iCommCosts, iCompTaskMapping, iSimVarMapping, iLockTasks);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getLocksByPredecessorList(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iPredecessorList, modelica_integer _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oOutgoingDepTasks)
{
  modelica_metatype _oLockTasks = NULL;
  modelica_metatype _oOutgoingDepTasks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oLockTasks has no default value.
  // _oOutgoingDepTasks has no default value.
  tmpMeta1 = mmc_mk_box5(0, _iTask, mmc_mk_integer(_iThreadIdx), _iCommCosts, _iCompTaskMapping, _iSimVarMapping);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _oLockTasks = omc_List_fold(threadData, _iPredecessorList, (modelica_fnptr) mmc_mk_box2(0,closure20_HpcOmScheduler_getLockTasksByPredecessorList,tmpMeta1), tmpMeta2);

  _oOutgoingDepTasks = _oLockTasks;
  _return: OMC_LABEL_UNUSED
  if (out_oOutgoingDepTasks) { *out_oOutgoingDepTasks = _oOutgoingDepTasks; }
  return _oLockTasks;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getLocksByPredecessorList(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iPredecessorList, modelica_metatype _iThreadIdx, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype *out_oOutgoingDepTasks)
{
  modelica_integer tmp1;
  modelica_metatype _oLockTasks = NULL;
  tmp1 = mmc_unbox_integer(_iThreadIdx);
  _oLockTasks = omc_HpcOmScheduler_getLocksByPredecessorList(threadData, _iTask, _iPredecessorList, tmp1, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, out_oOutgoingDepTasks);
  /* skip box _oLockTasks; list<HpcOmSimCode.Task> */
  /* skip box _oOutgoingDepTasks; list<HpcOmSimCode.Task> */
  return _oLockTasks;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_getSimEqSysIdcsForNodeLst(threadData_t *threadData, modelica_metatype _nodeIdcs, modelica_metatype _iSccSimEqMapping)
{
  modelica_metatype _simEqSysIdcsLst = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simEqSysIdcsLst has no default value.
  _simEqSysIdcsLst = omc_List_map1(threadData, _nodeIdcs, boxvar_HpcOmScheduler_getSimEqSysIdcsForCompLst, _iSccSimEqMapping);
  _return: OMC_LABEL_UNUSED
  return _simEqSysIdcsLst;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getSimEqSysIdcsForCompLst(threadData_t *threadData, modelica_metatype _compIdcs, modelica_metatype _iSccSimEqMapping)
{
  modelica_metatype _simEqSysIdcs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simEqSysIdcs has no default value.
  _simEqSysIdcs = omc_List_flatten(threadData, omc_List_map1(threadData, _compIdcs, boxvar_Array_getIndexFirst, _iSccSimEqMapping));
  _return: OMC_LABEL_UNUSED
  return _simEqSysIdcs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_getSimEqSysIdxForComp(threadData_t *threadData, modelica_integer _compIdx, modelica_metatype _iSccSimEqMapping)
{
  modelica_metatype _simEqSysIdcs = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simEqSysIdcs has no default value.
  _simEqSysIdcs = arrayGet(_iSccSimEqMapping, _compIdx);
  _return: OMC_LABEL_UNUSED
  return _simEqSysIdcs;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_getSimEqSysIdxForComp(threadData_t *threadData, modelica_metatype _compIdx, modelica_metatype _iSccSimEqMapping)
{
  modelica_integer tmp1;
  modelica_metatype _simEqSysIdcs = NULL;
  tmp1 = mmc_unbox_integer(_compIdx);
  _simEqSysIdcs = omc_HpcOmScheduler_getSimEqSysIdxForComp(threadData, tmp1, _iSccSimEqMapping);
  /* skip box _simEqSysIdcs; list<#Integer> */
  return _simEqSysIdcs;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addAssignLocksToSchedule(threadData_t *threadData, modelica_metatype _iSuccessorTask, modelica_metatype _iTask, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iReleaseTasks)
{
  modelica_metatype _oReleaseTasks = NULL;
  modelica_metatype _tmpTask = NULL;
  modelica_metatype _successorTask = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oReleaseTasks has no default value.
  // _tmpTask has no default value.
  // _successorTask has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iSuccessorTask;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _successorTask = tmpMeta2;

  _tmpTask = omc_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData, _successorTask, _iTask, 0 /* false */, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);

  tmpMeta3 = mmc_mk_cons(_tmpTask, _iReleaseTasks);
  _oReleaseTasks = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _oReleaseTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addReleaseLocksToSchedule(threadData_t *threadData, modelica_metatype _iSuccessorTask, modelica_metatype _iTask, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iReleaseTasks)
{
  modelica_metatype _oReleaseTasks = NULL;
  modelica_metatype _tmpTask = NULL;
  modelica_metatype _successorTask = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oReleaseTasks has no default value.
  // _tmpTask has no default value.
  // _successorTask has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iSuccessorTask;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _successorTask = tmpMeta2;

  _tmpTask = omc_HpcOmScheduler_createDepTaskAndCommunicationInfo(threadData, _iTask, _successorTask, 1 /* true */, _iCommCosts, _iCompTaskMapping, _iSimVarMapping);

  tmpMeta3 = mmc_mk_cons(_tmpTask, _iReleaseTasks);
  _oReleaseTasks = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  return _oReleaseTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addSuccessorLocksToSchedule1(threadData_t *threadData, modelica_metatype _iTask, modelica_metatype _iTaskGraph, modelica_metatype _iAllCalcTasks, modelica_metatype _iSimVarMapping, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iThreadIdLockFunction, modelica_metatype _iThreadTasks)
{
  modelica_metatype _oThreadTasks = NULL;
  modelica_integer _threadIdx;
  modelica_integer _index;
  modelica_metatype _successors = NULL;
  modelica_metatype _tmpThreadTasks = NULL;
  modelica_metatype _releaseTasks = NULL;
  modelica_fnptr _iCreateLockFunction;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oThreadTasks has no default value.
  // _threadIdx has no default value.
  // _index has no default value.
  // _successors has no default value.
  // _tmpThreadTasks has no default value.
  // _releaseTasks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _iTask;
    tmp4_2 = _iThreadIdLockFunction;
    tmp4_3 = _iThreadTasks;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,6) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          
          _index = tmp7  /* pattern as ty=Integer */;
          _threadIdx = tmp9  /* pattern as ty=Integer */;
          _iCreateLockFunction = tmpMeta10;
          _tmpThreadTasks = tmp4_3;
          /* Pattern matching succeeded */
          _successors = omc_HpcOmScheduler_getSuccessorsByTask(threadData, _iTask, _iTaskGraph, _iAllCalcTasks, NULL);

          _successors = omc_List_removeOnTrue(threadData, mmc_mk_integer(_threadIdx), boxvar_HpcOmScheduler_compareTaskWithThreadIdx, _successors);

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _releaseTasks = omc_List_fold4(threadData, _successors, ((modelica_fnptr) _iCreateLockFunction), _iTask, _iCommCosts, _iCompTaskMapping, _iSimVarMapping, tmpMeta11);

          _tmpThreadTasks = listAppend(_releaseTasks, _tmpThreadTasks);
          tmpMeta12 = mmc_mk_cons(_iTask, _tmpThreadTasks);
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta13;
          
          _tmpThreadTasks = tmp4_3;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_cons(_iTask, _tmpThreadTasks);
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT167),stdout);
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
  _oThreadTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oThreadTasks;
}

static modelica_metatype closure21_HpcOmScheduler_addSuccessorLocksToSchedule1(threadData_t *thData, modelica_metatype closure, modelica_metatype iTask, modelica_metatype iThreadTasks)
{
  modelica_metatype iTaskGraph = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iAllCalcTasks = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iSimVarMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iCommCosts = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iCompTaskMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_metatype iThreadIdLockFunction = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  return boxptr_HpcOmScheduler_addSuccessorLocksToSchedule1(thData, iTask, iTaskGraph, iAllCalcTasks, iSimVarMapping, iCommCosts, iCompTaskMapping, iThreadIdLockFunction, iThreadTasks);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addSuccessorLocksToSchedule0(threadData_t *threadData, modelica_metatype _iThreadTaskList, modelica_metatype _iTaskGraph, modelica_metatype _iAllCalcTasks, modelica_metatype _iSimVarMapping, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_fnptr _iCreateLockFunction, modelica_metatype _iThreadTasks)
{
  modelica_metatype _oThreadTasks = NULL;
  modelica_integer _threadId;
  modelica_metatype _allThreadTasks = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oThreadTasks has no default value.
  // _threadId has no default value.
  // _allThreadTasks has no default value.
  // _threadTasks has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iThreadTasks;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _allThreadTasks = tmpMeta2;
  _threadId = tmp4  /* pattern as ty=Integer */;

  tmpMeta6 = mmc_mk_box2(0, mmc_mk_integer(_threadId), ((modelica_fnptr) _iCreateLockFunction));
  tmpMeta5 = mmc_mk_box6(0, _iTaskGraph, _iAllCalcTasks, _iSimVarMapping, _iCommCosts, _iCompTaskMapping, tmpMeta6);
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _threadTasks = omc_List_fold(threadData, _iThreadTaskList, (modelica_fnptr) mmc_mk_box2(0,closure21_HpcOmScheduler_addSuccessorLocksToSchedule1,tmpMeta5), tmpMeta7);

  _allThreadTasks = arrayUpdate(_allThreadTasks, _threadId, _threadTasks);

  tmpMeta8 = mmc_mk_box2(0, _allThreadTasks, mmc_mk_integer(((modelica_integer) 1) + _threadId));
  _oThreadTasks = tmpMeta8;
  _return: OMC_LABEL_UNUSED
  return _oThreadTasks;
}

static modelica_metatype closure22_HpcOmScheduler_addSuccessorLocksToSchedule0(threadData_t *thData, modelica_metatype closure, modelica_metatype iThreadTaskList, modelica_metatype iThreadTasks)
{
  modelica_metatype iTaskGraph = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iAllCalcTasks = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iSimVarMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_metatype iCommCosts = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype iCompTaskMapping = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  modelica_fnptr iCreateLockFunction = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),6));
  return boxptr_HpcOmScheduler_addSuccessorLocksToSchedule0(thData, iThreadTaskList, iTaskGraph, iAllCalcTasks, iSimVarMapping, iCommCosts, iCompTaskMapping, iCreateLockFunction, iThreadTasks);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_addSuccessorLocksToSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_fnptr _iCreateLockFunction, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iSchedule)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _allThreadTasks = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype _outgoingDepTasks = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _allThreadTasks has no default value.
  // _tmpSchedule has no default value.
  // _outgoingDepTasks has no default value.
  // _allCalcTasks has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _iSchedule;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          _allThreadTasks = tmpMeta6;
          _outgoingDepTasks = tmpMeta7;
          _allCalcTasks = tmpMeta8;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta9 = mmc_mk_box6(0, _iTaskGraph, _allCalcTasks, _iSimVarMapping, _iCommCosts, _iCompTaskMapping, ((modelica_fnptr) _iCreateLockFunction));
          tmpMeta10 = mmc_mk_box2(0, _allThreadTasks, mmc_mk_integer(((modelica_integer) 1)));
          tmpMeta11 = omc_Array_fold(threadData, _allThreadTasks, (modelica_fnptr) mmc_mk_box2(0,closure22_HpcOmScheduler_addSuccessorLocksToSchedule0,tmpMeta9), tmpMeta10);
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta11), 1));
          _allThreadTasks = tmpMeta12;
          tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta14 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _allThreadTasks, _outgoingDepTasks, tmpMeta13, _allCalcTasks);
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT168),stdout);
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
  _oSchedule = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createListScheduleReverse(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _nodeList_refCount = NULL;
  modelica_metatype _nodeList = NULL;
  modelica_metatype _leaveNodes = NULL;
  modelica_metatype _threadReadyTimes = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _commCostsT = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype _outgoingDepTasks = NULL;
  modelica_metatype _inComps = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _taskGraphT has no default value.
  // _nodeList_refCount has no default value.
  // _nodeList has no default value.
  // _leaveNodes has no default value.
  // _threadReadyTimes has no default value.
  // _allCalcTasks has no default value.
  // _threadTasks has no default value.
  // _commCosts has no default value.
  // _commCostsT has no default value.
  // _tmpSchedule has no default value.
  // _outgoingDepTasks has no default value.
  // _inComps has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskGraphMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
  _inComps = tmpMeta2;
  _commCosts = tmpMeta3;

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, arrayLength(_iTaskGraph));

  _commCostsT = omc_HpcOmTaskGraph_transposeCommCosts(threadData, _commCosts);

  _leaveNodes = omc_HpcOmTaskGraph_getLeafNodes(threadData, _iTaskGraph);

  _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _iTaskGraph, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTaskReverse);

  _nodeList_refCount = omc_List_map1(threadData, _leaveNodes, boxvar_HpcOmScheduler_getTaskByIndex, _allCalcTasks);

  _nodeList = omc_List_map(threadData, _nodeList_refCount, boxvar_Util_tuple21);

  _nodeList = omc_List_sort(threadData, _nodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

  _threadReadyTimes = arrayCreate(_iNumberOfThreads, _OMC_LIT21);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _threadTasks = arrayCreate(_iNumberOfThreads, tmpMeta4);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, tmpMeta5, tmpMeta6, _allCalcTasks);
  _tmpSchedule = tmpMeta7;

  _tmpSchedule = omc_HpcOmScheduler_createListSchedule1(threadData, _nodeList, _threadReadyTimes, _taskGraphT, _iTaskGraph, _commCostsT, _inComps, _iSccSimEqMapping, _iSimVarMapping, boxvar_HpcOmScheduler_getLockTasksByPredecessorListReverse, _tmpSchedule, NULL);

  _tmpSchedule = omc_HpcOmScheduler_addSuccessorLocksToSchedule(threadData, _taskGraphT, boxvar_HpcOmScheduler_addAssignLocksToSchedule, _commCosts, _inComps, _iSimVarMapping, _tmpSchedule);

  /* Pattern-matching assignment */
  tmpMeta8 = _tmpSchedule;
  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta8,1,4) == 0) MMC_THROW_INTERNAL();
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 2));
  tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta8), 3));
  _threadTasks = tmpMeta9;
  _outgoingDepTasks = tmpMeta10;

  _threadTasks = omc_Array_map(threadData, _threadTasks, boxvar_listReverse);

  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta12 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, _outgoingDepTasks, tmpMeta11, _allCalcTasks);
  _tmpSchedule = tmpMeta12;

  _oSchedule = omc_HpcOmScheduler_setScheduleLockIds(threadData, _tmpSchedule);
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createListScheduleReverse(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oSchedule = omc_HpcOmScheduler_createListScheduleReverse(threadData, _iTaskGraph, _iTaskGraphMeta, tmp1, _iSccSimEqMapping, _iSimVarMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createRandomSchedule1(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iThreadReadyTimes, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_fnptr _iLockWithPredecessorHandler, modelica_integer _iNumberOfThreads, modelica_metatype _iSchedule, modelica_metatype *out_oThreadReadyTimes)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _oThreadReadyTimes = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _newTask = NULL;
  modelica_integer _newTaskRefCount;
  modelica_metatype _rest = NULL;
  modelica_metatype _predecessors = NULL;
  modelica_metatype _successors = NULL;
  modelica_metatype _successorIdc = NULL;
  modelica_metatype _outgoingDepTasks = NULL;
  modelica_metatype _newOutgoingDepTasks = NULL;
  modelica_metatype _threadFinishTimes = NULL;
  modelica_integer _firstEq;
  modelica_metatype _allThreadTasks = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _lockTasks = NULL;
  modelica_integer _threadId;
  modelica_real _threadFinishTime;
  modelica_metatype _tmpThreadReadyTimes = NULL;
  modelica_metatype _tmpNodeList = NULL;
  modelica_integer _weighting;
  modelica_integer _index;
  modelica_real _calcTime;
  modelica_metatype _eqIdc = NULL;
  modelica_metatype _simEqIdc = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _oThreadReadyTimes has no default value.
  // _head has no default value.
  // _newTask has no default value.
  // _newTaskRefCount has no default value.
  // _rest has no default value.
  // _predecessors has no default value.
  // _successors has no default value.
  // _successorIdc has no default value.
  // _outgoingDepTasks has no default value.
  // _newOutgoingDepTasks has no default value.
  // _threadFinishTimes has no default value.
  // _firstEq has no default value.
  // _allThreadTasks has no default value.
  // _threadTasks has no default value.
  // _lockTasks has no default value.
  // _threadId has no default value.
  // _threadFinishTime has no default value.
  // _tmpThreadReadyTimes has no default value.
  // _tmpNodeList has no default value.
  // _weighting has no default value.
  // _index has no default value.
  // _calcTime has no default value.
  // _eqIdc has no default value.
  // _simEqIdc has no default value.
  // _tmpSchedule has no default value.
  // _allCalcTasks has no default value.
  
  
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _iNodeList;
    tmp4_2 = _iSchedule;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_real tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_boolean tmp21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_integer tmp28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,6) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          tmp16 = mmc_unbox_real(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 7));
          if (listEmpty(tmpMeta17)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmpMeta17);
          tmpMeta19 = MMC_CDR(tmpMeta17);
          tmp20 = mmc_unbox_integer(tmpMeta18);
          _allThreadTasks = tmpMeta6;
          _outgoingDepTasks = tmpMeta7;
          _allCalcTasks = tmpMeta8;
          _head = tmpMeta9;
          _weighting = tmp12  /* pattern as ty=Integer */;
          _index = tmp14  /* pattern as ty=Integer */;
          _calcTime = tmp16  /* pattern as ty=Real */;
          _eqIdc = tmpMeta17;
          _firstEq = tmp20  /* pattern as ty=Integer */;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          _predecessors = omc_HpcOmScheduler_getSuccessorsByTask(threadData, _head, _iTaskGraphT, _allCalcTasks, NULL);

          _successors = omc_HpcOmScheduler_getSuccessorsByTask(threadData, _head, _iTaskGraph, _allCalcTasks ,&_successorIdc);

          /* Pattern-matching assignment */
          tmp21 = listEmpty(_predecessors);
          if (0 /* false */ != tmp21) goto goto_2;

          _threadId = ((modelica_integer) 1) + omc_System_intRandom(threadData, _iNumberOfThreads);

          tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
          _threadFinishTimes = omc_HpcOmScheduler_calculateFinishTimes(threadData, 0.0, _head, tmpMeta22, _iCommCosts, _iThreadReadyTimes);

          _threadFinishTime = mmc_unbox_real(arrayGet(_threadFinishTimes, _threadId));

          _tmpThreadReadyTimes = arrayUpdate(_iThreadReadyTimes, _threadId, mmc_mk_real(_threadFinishTime));

          _threadTasks = arrayGet(_allThreadTasks, _threadId);

          _lockTasks = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 2))), _head, _predecessors, mmc_mk_integer(_threadId), _iCommCosts, _iCompTaskMapping, _iSimVarMapping ,&_newOutgoingDepTasks) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 1)))) (threadData, _head, _predecessors, mmc_mk_integer(_threadId), _iCommCosts, _iCompTaskMapping, _iSimVarMapping ,&_newOutgoingDepTasks);

          _outgoingDepTasks = listAppend(_outgoingDepTasks, _newOutgoingDepTasks);

          _threadTasks = listAppend(_lockTasks, _threadTasks);

          _simEqIdc = omc_List_map(threadData, omc_List_map1(threadData, _eqIdc, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _iSccSimEqMapping), boxvar_List_last);

          tmpMeta23 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_threadFinishTime), mmc_mk_integer(_threadId), _simEqIdc);
          _newTask = tmpMeta23;

          tmpMeta24 = mmc_mk_cons(_newTask, _threadTasks);
          _threadTasks = tmpMeta24;

          _allThreadTasks = arrayUpdate(_allThreadTasks, _threadId, _threadTasks);

          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          _allCalcTasks = omc_HpcOmScheduler_updateRefCounterBySuccessorIdc(threadData, _allCalcTasks, _successorIdc, tmpMeta25 ,&_tmpNodeList);

          _tmpNodeList = listAppend(_tmpNodeList, _rest);

          _tmpNodeList = omc_List_sort(threadData, _tmpNodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

          /* Pattern-matching assignment */
          tmpMeta26 = arrayGet(_allCalcTasks, _index);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
          tmp28 = mmc_unbox_integer(tmpMeta27);
          _newTaskRefCount = tmp28  /* pattern as ty=Integer */;

          tmpMeta29 = mmc_mk_box2(0, _newTask, mmc_mk_integer(_newTaskRefCount));
          arrayUpdate(_allCalcTasks, _index, tmpMeta29);
          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta31 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _allThreadTasks, _outgoingDepTasks, tmpMeta30, _allCalcTasks);
          tmpMeta[0+0] = omc_HpcOmScheduler_createRandomSchedule1(threadData, _tmpNodeList, _tmpThreadReadyTimes, _iTaskGraph, _iTaskGraphT, _iCommCosts, _iCompTaskMapping, _iSccSimEqMapping, _iSimVarMapping, ((modelica_fnptr) _iLockWithPredecessorHandler), _iNumberOfThreads, tmpMeta31, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_integer tmp38;
          modelica_metatype tmpMeta39;
          modelica_integer tmp40;
          modelica_metatype tmpMeta41;
          modelica_real tmp42;
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_integer tmp46;
          modelica_metatype tmpMeta47;
          modelica_metatype tmpMeta48;
          modelica_metatype tmpMeta49;
          modelica_metatype tmpMeta50;
          modelica_metatype tmpMeta51;
          modelica_metatype tmpMeta52;
          modelica_integer tmp53;
          modelica_metatype tmpMeta54;
          modelica_metatype tmpMeta55;
          modelica_metatype tmpMeta56;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta34 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta35 = MMC_CAR(tmp4_1);
          tmpMeta36 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta35,1,6) == 0) goto tmp3_end;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 2));
          tmp38 = mmc_unbox_integer(tmpMeta37);
          tmpMeta39 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 3));
          tmp40 = mmc_unbox_integer(tmpMeta39);
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 4));
          tmp42 = mmc_unbox_real(tmpMeta41);
          tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta35), 7));
          if (listEmpty(tmpMeta43)) goto tmp3_end;
          tmpMeta44 = MMC_CAR(tmpMeta43);
          tmpMeta45 = MMC_CDR(tmpMeta43);
          tmp46 = mmc_unbox_integer(tmpMeta44);
          _allThreadTasks = tmpMeta32;
          _outgoingDepTasks = tmpMeta33;
          _allCalcTasks = tmpMeta34;
          _head = tmpMeta35;
          _weighting = tmp38  /* pattern as ty=Integer */;
          _index = tmp40  /* pattern as ty=Integer */;
          _calcTime = tmp42  /* pattern as ty=Real */;
          _eqIdc = tmpMeta43;
          _firstEq = tmp46  /* pattern as ty=Integer */;
          _rest = tmpMeta36;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _successors = omc_HpcOmScheduler_getSuccessorsByTask(threadData, _head, _iTaskGraph, _allCalcTasks ,&_successorIdc);

          _threadId = ((modelica_integer) 1) + omc_System_intRandom(threadData, _iNumberOfThreads);

          tmpMeta47 = MMC_REFSTRUCTLIT(mmc_nil);
          _threadFinishTimes = omc_HpcOmScheduler_calculateFinishTimes(threadData, 0.0, _head, tmpMeta47, _iCommCosts, _iThreadReadyTimes);

          _threadFinishTime = mmc_unbox_real(arrayGet(_threadFinishTimes, _threadId));

          _tmpThreadReadyTimes = arrayUpdate(_iThreadReadyTimes, _threadId, mmc_mk_real(_threadFinishTime));

          _threadTasks = arrayGet(_allThreadTasks, _threadId);

          _simEqIdc = omc_List_flatten(threadData, omc_List_map1(threadData, _eqIdc, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _iSccSimEqMapping));

          tmpMeta48 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_threadFinishTime), mmc_mk_integer(_threadId), _simEqIdc);
          _newTask = tmpMeta48;

          tmpMeta49 = mmc_mk_cons(_newTask, _threadTasks);
          _allThreadTasks = arrayUpdate(_allThreadTasks, _threadId, tmpMeta49);

          tmpMeta50 = MMC_REFSTRUCTLIT(mmc_nil);
          _allCalcTasks = omc_HpcOmScheduler_updateRefCounterBySuccessorIdc(threadData, _allCalcTasks, _successorIdc, tmpMeta50 ,&_tmpNodeList);

          _tmpNodeList = listAppend(_tmpNodeList, _rest);

          _tmpNodeList = omc_List_sort(threadData, _tmpNodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

          /* Pattern-matching assignment */
          tmpMeta51 = arrayGet(_allCalcTasks, _index);
          tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta51), 2));
          tmp53 = mmc_unbox_integer(tmpMeta52);
          _newTaskRefCount = tmp53  /* pattern as ty=Integer */;

          tmpMeta54 = mmc_mk_box2(0, _newTask, mmc_mk_integer(_newTaskRefCount));
          arrayUpdate(_allCalcTasks, _index, tmpMeta54);
          tmpMeta55 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta56 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _allThreadTasks, _outgoingDepTasks, tmpMeta55, _allCalcTasks);
          tmpMeta[0+0] = omc_HpcOmScheduler_createRandomSchedule1(threadData, _tmpNodeList, _tmpThreadReadyTimes, _iTaskGraph, _iTaskGraphT, _iCommCosts, _iCompTaskMapping, _iSccSimEqMapping, _iSimVarMapping, ((modelica_fnptr) _iLockWithPredecessorHandler), _iNumberOfThreads, tmpMeta56, &tmpMeta[0+1]);
          goto tmp3_done;
        }
        case 2: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _iSchedule;
          tmpMeta[0+1] = _iThreadReadyTimes;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT169),stdout);
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
      if (++tmp4 < 4) {
        goto tmp3_top;
      }
      MMC_THROW_INTERNAL();
      tmp3_done2:;
    }
  }
  _oSchedule = tmpMeta[0+0];
  _oThreadReadyTimes = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oThreadReadyTimes) { *out_oThreadReadyTimes = _oThreadReadyTimes; }
  return _oSchedule;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmScheduler_createRandomSchedule1(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iThreadReadyTimes, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_fnptr _iLockWithPredecessorHandler, modelica_metatype _iNumberOfThreads, modelica_metatype _iSchedule, modelica_metatype *out_oThreadReadyTimes)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oSchedule = omc_HpcOmScheduler_createRandomSchedule1(threadData, _iNodeList, _iThreadReadyTimes, _iTaskGraph, _iTaskGraphT, _iCommCosts, _iCompTaskMapping, _iSccSimEqMapping, _iSimVarMapping, _iLockWithPredecessorHandler, tmp1, _iSchedule, out_oThreadReadyTimes);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  /* skip box _oThreadReadyTimes; array<#Real> */
  return _oSchedule;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createRandomSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _nodeList_refCount = NULL;
  modelica_metatype _nodeList = NULL;
  modelica_metatype _rootNodes = NULL;
  modelica_metatype _threadReadyTimes = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _taskGraphT has no default value.
  // _inComps has no default value.
  // _nodeList_refCount has no default value.
  // _nodeList has no default value.
  // _rootNodes has no default value.
  // _threadReadyTimes has no default value.
  // _allCalcTasks has no default value.
  // _threadTasks has no default value.
  // _commCosts has no default value.
  // _tmpSchedule has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskGraphMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
  _inComps = tmpMeta2;
  _commCosts = tmpMeta3;

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, arrayLength(_iTaskGraph));

  _rootNodes = omc_HpcOmTaskGraph_getRootNodes(threadData, _iTaskGraph);

  _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _taskGraphT, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTask);

  _nodeList_refCount = omc_List_map1(threadData, _rootNodes, boxvar_HpcOmScheduler_getTaskByIndex, _allCalcTasks);

  _nodeList = omc_List_map(threadData, _nodeList_refCount, boxvar_Util_tuple21);

  _nodeList = omc_List_sort(threadData, _nodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

  _threadReadyTimes = arrayCreate(_iNumberOfThreads, _OMC_LIT21);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _threadTasks = arrayCreate(_iNumberOfThreads, tmpMeta4);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, tmpMeta5, tmpMeta6, _allCalcTasks);
  _tmpSchedule = tmpMeta7;

  _tmpSchedule = omc_HpcOmScheduler_createRandomSchedule1(threadData, _nodeList, _threadReadyTimes, _iTaskGraph, _taskGraphT, _commCosts, _inComps, _iSccSimEqMapping, _iSimVarMapping, boxvar_HpcOmScheduler_getLocksByPredecessorList, _iNumberOfThreads, _tmpSchedule, NULL);

  _tmpSchedule = omc_HpcOmScheduler_addSuccessorLocksToSchedule(threadData, _iTaskGraph, boxvar_HpcOmScheduler_addReleaseLocksToSchedule, _commCosts, _inComps, _iSimVarMapping, _tmpSchedule);

  _oSchedule = omc_HpcOmScheduler_setScheduleLockIds(threadData, _tmpSchedule);
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createRandomSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oSchedule = omc_HpcOmScheduler_createRandomSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, tmp1, _iSccSimEqMapping, _iSimVarMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmScheduler_createListSchedule1(threadData_t *threadData, modelica_metatype _iNodeList, modelica_metatype _iThreadReadyTimes, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iCommCosts, modelica_metatype _iCompTaskMapping, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_fnptr _iLockWithPredecessorHandler, modelica_metatype _iSchedule, modelica_metatype *out_oThreadReadyTimes)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _oThreadReadyTimes = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _newTask = NULL;
  modelica_integer _newTaskRefCount;
  modelica_metatype _rest = NULL;
  modelica_real _lastChildFinishTime;
  modelica_metatype _lastChild = NULL;
  modelica_metatype _predecessors = NULL;
  modelica_metatype _successors = NULL;
  modelica_metatype _successorIdc = NULL;
  modelica_metatype _outgoingDepTasks = NULL;
  modelica_metatype _newOutgoingDepTasks = NULL;
  modelica_metatype _threadFinishTimes = NULL;
  modelica_integer _firstEq;
  modelica_metatype _allThreadTasks = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _lockTasks = NULL;
  modelica_integer _threadId;
  modelica_real _threadFinishTime;
  modelica_metatype _tmpThreadReadyTimes = NULL;
  modelica_metatype _tmpNodeList = NULL;
  modelica_integer _weighting;
  modelica_integer _index;
  modelica_real _calcTime;
  modelica_metatype _eqIdc = NULL;
  modelica_metatype _simEqIdc = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _oThreadReadyTimes has no default value.
  // _head has no default value.
  // _newTask has no default value.
  // _newTaskRefCount has no default value.
  // _rest has no default value.
  // _lastChildFinishTime has no default value.
  // _lastChild has no default value.
  // _predecessors has no default value.
  // _successors has no default value.
  // _successorIdc has no default value.
  // _outgoingDepTasks has no default value.
  // _newOutgoingDepTasks has no default value.
  // _threadFinishTimes has no default value.
  // _firstEq has no default value.
  // _allThreadTasks has no default value.
  // _threadTasks has no default value.
  // _lockTasks has no default value.
  // _threadId has no default value.
  // _threadFinishTime has no default value.
  // _tmpThreadReadyTimes has no default value.
  // _tmpNodeList has no default value.
  // _weighting has no default value.
  // _index has no default value.
  // _calcTime has no default value.
  // _eqIdc has no default value.
  // _simEqIdc has no default value.
  // _tmpSchedule has no default value.
  // _allCalcTasks has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iNodeList;
    tmp4_2 = _iSchedule;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
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
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          modelica_integer tmp14;
          modelica_metatype tmpMeta15;
          modelica_real tmp16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_integer tmp20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_real tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_integer tmp26;
          modelica_metatype tmpMeta27;
          modelica_real tmp28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_integer tmp34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,1,4) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 3));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 5));
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta9 = MMC_CAR(tmp4_1);
          tmpMeta10 = MMC_CDR(tmp4_1);
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta9,1,6) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 2));
          tmp12 = mmc_unbox_integer(tmpMeta11);
          tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 3));
          tmp14 = mmc_unbox_integer(tmpMeta13);
          tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 4));
          tmp16 = mmc_unbox_real(tmpMeta15);
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta9), 7));
          if (listEmpty(tmpMeta17)) goto tmp3_end;
          tmpMeta18 = MMC_CAR(tmpMeta17);
          tmpMeta19 = MMC_CDR(tmpMeta17);
          tmp20 = mmc_unbox_integer(tmpMeta18);
          _allThreadTasks = tmpMeta6;
          _outgoingDepTasks = tmpMeta7;
          _allCalcTasks = tmpMeta8;
          _head = tmpMeta9;
          _weighting = tmp12  /* pattern as ty=Integer */;
          _index = tmp14  /* pattern as ty=Integer */;
          _calcTime = tmp16  /* pattern as ty=Real */;
          _eqIdc = tmpMeta17;
          _firstEq = tmp20  /* pattern as ty=Integer */;
          _rest = tmpMeta10;
          /* Pattern matching succeeded */
          _predecessors = omc_HpcOmScheduler_getSuccessorsByTask(threadData, _head, _iTaskGraphT, _allCalcTasks, NULL);

          _successors = omc_HpcOmScheduler_getSuccessorsByTask(threadData, _head, _iTaskGraph, _allCalcTasks ,&_successorIdc);

          if((!listEmpty(_predecessors)))
          {
            _lastChild = omc_HpcOmScheduler_getTaskWithHighestFinishTime(threadData, _predecessors, mmc_mk_none());

            /* Pattern-matching assignment */
            tmpMeta21 = _lastChild;
            if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,1,6) == 0) goto goto_2;
            tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 5));
            tmp23 = mmc_unbox_real(tmpMeta22);
            _lastChildFinishTime = tmp23  /* pattern as ty=Real */;
          }
          else
          {
            _lastChildFinishTime = 0.0;
          }

          _threadFinishTimes = omc_HpcOmScheduler_calculateFinishTimes(threadData, _lastChildFinishTime, _head, _predecessors, _iCommCosts, _iThreadReadyTimes);

          /* Pattern-matching assignment */
          tmpMeta24 = omc_HpcOmScheduler_getThreadFinishTimesMin(threadData, ((modelica_integer) 1), _threadFinishTimes, ((modelica_integer) -1), 0.0);
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 1));
          tmp26 = mmc_unbox_integer(tmpMeta25);
          tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta24), 2));
          tmp28 = mmc_unbox_real(tmpMeta27);
          _threadId = tmp26  /* pattern as ty=Integer */;
          _threadFinishTime = tmp28  /* pattern as ty=Real */;

          _tmpThreadReadyTimes = arrayUpdate(_iThreadReadyTimes, _threadId, mmc_mk_real(_threadFinishTime));

          _threadTasks = arrayGet(_allThreadTasks, _threadId);

          if((!listEmpty(_predecessors)))
          {
            _lockTasks = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 2))), _head, _predecessors, mmc_mk_integer(_threadId), _iCommCosts, _iCompTaskMapping, _iSimVarMapping ,&_newOutgoingDepTasks) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_iLockWithPredecessorHandler), 1)))) (threadData, _head, _predecessors, mmc_mk_integer(_threadId), _iCommCosts, _iCompTaskMapping, _iSimVarMapping ,&_newOutgoingDepTasks);

            _outgoingDepTasks = listAppend(_outgoingDepTasks, _newOutgoingDepTasks);

            _threadTasks = listAppend(_lockTasks, _threadTasks);

            _simEqIdc = omc_List_map(threadData, omc_List_map1(threadData, _eqIdc, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _iSccSimEqMapping), boxvar_List_last);
          }
          else
          {
            _simEqIdc = omc_List_flatten(threadData, omc_List_map1(threadData, _eqIdc, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _iSccSimEqMapping));
          }

          tmpMeta29 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_threadFinishTime), mmc_mk_integer(_threadId), _simEqIdc);
          _newTask = tmpMeta29;

          tmpMeta30 = mmc_mk_cons(_newTask, _threadTasks);
          _threadTasks = tmpMeta30;

          _allThreadTasks = arrayUpdate(_allThreadTasks, _threadId, _threadTasks);

          tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
          _allCalcTasks = omc_HpcOmScheduler_updateRefCounterBySuccessorIdc(threadData, _allCalcTasks, _successorIdc, tmpMeta31 ,&_tmpNodeList);

          _tmpNodeList = listAppend(_tmpNodeList, _rest);

          _tmpNodeList = omc_List_sort(threadData, _tmpNodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

          /* Pattern-matching assignment */
          tmpMeta32 = arrayGet(_allCalcTasks, _index);
          tmpMeta33 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta32), 2));
          tmp34 = mmc_unbox_integer(tmpMeta33);
          _newTaskRefCount = tmp34  /* pattern as ty=Integer */;

          tmpMeta35 = mmc_mk_box2(0, _newTask, mmc_mk_integer(_newTaskRefCount));
          arrayUpdate(_allCalcTasks, _index, tmpMeta35);
          tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta37 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _allThreadTasks, _outgoingDepTasks, tmpMeta36, _allCalcTasks);
          /* Tail recursive call */
          _iNodeList = _tmpNodeList;
          _iThreadReadyTimes = _tmpThreadReadyTimes;
          _iSchedule = tmpMeta37;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _iSchedule;
          tmpMeta[0+1] = _iThreadReadyTimes;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT170),stdout);
          tmpMeta[0+0] = _iSchedule;
          tmpMeta[0+1] = _iThreadReadyTimes;
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
  _oSchedule = tmpMeta[0+0];
  _oThreadReadyTimes = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_oThreadReadyTimes) { *out_oThreadReadyTimes = _oThreadReadyTimes; }
  return _oSchedule;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createListSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_integer _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _nodeList_refCount = NULL;
  modelica_metatype _nodeList = NULL;
  modelica_metatype _rootNodes = NULL;
  modelica_metatype _threadReadyTimes = NULL;
  modelica_metatype _allCalcTasks = NULL;
  modelica_metatype _threadTasks = NULL;
  modelica_metatype _commCosts = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _taskGraphT has no default value.
  // _inComps has no default value.
  // _nodeList_refCount has no default value.
  // _nodeList has no default value.
  // _rootNodes has no default value.
  // _threadReadyTimes has no default value.
  // _allCalcTasks has no default value.
  // _threadTasks has no default value.
  // _commCosts has no default value.
  // _tmpSchedule has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskGraphMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 9));
  _inComps = tmpMeta2;
  _commCosts = tmpMeta3;

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, arrayLength(_iTaskGraph));

  _rootNodes = omc_HpcOmTaskGraph_getRootNodes(threadData, _iTaskGraph);

  _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _taskGraphT, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTask);

  _nodeList_refCount = omc_List_map1(threadData, _rootNodes, boxvar_HpcOmScheduler_getTaskByIndex, _allCalcTasks);

  _nodeList = omc_List_map(threadData, _nodeList_refCount, boxvar_Util_tuple21);

  _nodeList = omc_List_sort(threadData, _nodeList, boxvar_HpcOmScheduler_compareTasksByWeighting);

  _threadReadyTimes = arrayCreate(_iNumberOfThreads, _OMC_LIT21);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _threadTasks = arrayCreate(_iNumberOfThreads, tmpMeta4);

  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = mmc_mk_box5(4, &HpcOmSimCode_Schedule_THREADSCHEDULE__desc, _threadTasks, tmpMeta5, tmpMeta6, _allCalcTasks);
  _tmpSchedule = tmpMeta7;

  _tmpSchedule = omc_HpcOmScheduler_createListSchedule1(threadData, _nodeList, _threadReadyTimes, _iTaskGraph, _taskGraphT, _commCosts, _inComps, _iSccSimEqMapping, _iSimVarMapping, boxvar_HpcOmScheduler_getLocksByPredecessorList, _tmpSchedule, NULL);

  _tmpSchedule = omc_HpcOmScheduler_addSuccessorLocksToSchedule(threadData, _iTaskGraph, boxvar_HpcOmScheduler_addReleaseLocksToSchedule, _commCosts, _inComps, _iSimVarMapping, _tmpSchedule);

  _oSchedule = omc_HpcOmScheduler_setScheduleLockIds(threadData, _tmpSchedule);
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}
modelica_metatype boxptr_HpcOmScheduler_createListSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iNumberOfThreads, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumberOfThreads);
  _oSchedule = omc_HpcOmScheduler_createListSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, tmp1, _iSccSimEqMapping, _iSimVarMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  return _oSchedule;
}

DLLDirection
modelica_metatype omc_HpcOmScheduler_createEmptySchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _allTasks = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _allCalcTasks = NULL;
  modelica_integer _taskIdx;
  modelica_integer _weighting;
  modelica_integer _index;
  modelica_integer _threadIdx;
  modelica_real _calcTime;
  modelica_real _timeFinished;
  modelica_metatype _eqIdc = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_metatype tmpMeta9;
  modelica_real tmp10;
  modelica_metatype tmpMeta11;
  modelica_real tmp12;
  modelica_metatype tmpMeta13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _taskGraphT has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _allTasks = tmpMeta1;
  // _allCalcTasks has no default value.
  // _taskIdx has no default value.
  // _weighting has no default value.
  // _index has no default value.
  // _threadIdx has no default value.
  // _calcTime has no default value.
  // _timeFinished has no default value.
  // _eqIdc has no default value.
  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _iTaskGraph, arrayLength(_iTaskGraph));

  _allCalcTasks = omc_HpcOmScheduler_convertTaskGraphToTasks(threadData, _taskGraphT, _iTaskGraphMeta, boxvar_HpcOmScheduler_convertNodeToTask);

  {
    modelica_metatype _taskIdx;
    for (tmpMeta2 = listReverse(omc_List_intRange(threadData, arrayLength(_allCalcTasks))); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _taskIdx = MMC_CAR(tmpMeta2);
      /* Pattern-matching assignment */
      tmpMeta3 = arrayGet(_allCalcTasks, mmc_unbox_integer(_taskIdx));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta3), 1));
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta4,1,6) == 0) MMC_THROW_INTERNAL();
      tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 2));
      tmp6 = mmc_unbox_integer(tmpMeta5);
      tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
      tmp8 = mmc_unbox_integer(tmpMeta7);
      tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 4));
      tmp10 = mmc_unbox_real(tmpMeta9);
      tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 5));
      tmp12 = mmc_unbox_real(tmpMeta11);
      tmpMeta13 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 6));
      tmp14 = mmc_unbox_integer(tmpMeta13);
      tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 7));
      _weighting = tmp6  /* pattern as ty=Integer */;
      _index = tmp8  /* pattern as ty=Integer */;
      _calcTime = tmp10  /* pattern as ty=Real */;
      _timeFinished = tmp12  /* pattern as ty=Real */;
      _threadIdx = tmp14  /* pattern as ty=Integer */;
      _eqIdc = tmpMeta15;

      _eqIdc = omc_List_map(threadData, omc_List_map1(threadData, _eqIdc, boxvar_HpcOmScheduler_getSimEqSysIdxForComp, _iSccSimEqMapping), boxvar_List_last);

      tmpMeta17 = mmc_mk_box7(4, &HpcOmSimCode_Task_CALCTASK__desc, mmc_mk_integer(_weighting), mmc_mk_integer(_index), mmc_mk_real(_calcTime), mmc_mk_real(_timeFinished), mmc_mk_integer(_threadIdx), _eqIdc);
      tmpMeta16 = mmc_mk_cons(tmpMeta17, _allTasks);
      _allTasks = tmpMeta16;
    }
  }

  _allTasks = omc_List_sort(threadData, _allTasks, boxvar_HpcOmScheduler_compareTasksByEqIdc);

  tmpMeta19 = mmc_mk_box3(4, &HpcOmSimCode_TaskList_SERIALTASKLIST__desc, _allTasks, mmc_mk_boolean(1 /* true */));
  tmpMeta20 = mmc_mk_box2(6, &HpcOmSimCode_Schedule_EMPTYSCHEDULE__desc, tmpMeta19);
  _oSchedule = tmpMeta20;
  _return: OMC_LABEL_UNUSED
  return _oSchedule;
}

