#include "omc_simulation_settings.h"
#include "HpcOmSimCodeMain.h"
#define _OMC_LIT0_data "task"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,4,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "-> measured: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,13,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data " and estimated: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,16,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,2,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "start cost benchmark\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,21,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "finish cost benchmark\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,22,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "the number of equations in the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,31,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data " task graph ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,13,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data ") is distinguished from the expected number of equations ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,58,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,2,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "the number of nodes in the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,27,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data ") is distinguished from the number of nodes in task graph meta ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,64,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "There are simCode-equations multiple times in the graph structure.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,67,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "the size of the ODE-system should be "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,37,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data " but it is "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,11,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,2,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "expected the following sim code equations: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,43,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,1,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,1,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "the ODE-system is NOT correct\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,30,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
#define _OMC_LIT20_data "Using serial code for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT20,26,_OMC_LIT20_data);
#define _OMC_LIT20 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "Using level Scheduler for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,30,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Using fixed level Scheduler (experimental) for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,51,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
#define _OMC_LIT23_data "Using external Scheduler for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT23,33,_OMC_LIT23_data);
#define _OMC_LIT23 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "taskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,9,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "_ext.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,12,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "Using METIS Scheduler for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,30,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data "Using hMETIS Scheduler for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,31,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "Using list reverse Scheduler for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,37,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "Using Random Scheduler for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,31,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "Using list Scheduler for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,29,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Using Modified Critical Path Scheduler for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,47,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Using partition Scheduler for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,34,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Using dynamic task dependencies for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,40,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "Using Task Duplication-based Scheduling for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,48,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "Using Balanced Level Scheduling for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,40,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Using Single Block Scheduling for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,38,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "Using Single Thread Scheduling for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,39,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "HpcOmSimCode.createSchedule failed!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,36,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,4,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
#define _OMC_LIT40_data "level"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT40,5,_OMC_LIT40_data);
#define _OMC_LIT40 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT40)
#define _OMC_LIT41_data "levelfix"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT41,8,_OMC_LIT41_data);
#define _OMC_LIT41 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "ext"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,3,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "metis"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,5,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "hmet"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,4,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "listr"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,5,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "rand"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,4,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "list"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,4,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "mcp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,3,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "part"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,4,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "taskdep"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,7,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "tds"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,3,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "bls"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,3,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "sbs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,3,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "sts"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,3,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT55,2,1) {_OMC_LIT54,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT55 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,1) {_OMC_LIT53,_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,2,1) {_OMC_LIT52,_OMC_LIT56}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT58,2,1) {_OMC_LIT51,_OMC_LIT57}};
#define _OMC_LIT58 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,1) {_OMC_LIT50,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,2,1) {_OMC_LIT49,_OMC_LIT59}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT61,2,1) {_OMC_LIT48,_OMC_LIT60}};
#define _OMC_LIT61 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT61)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT62,2,1) {_OMC_LIT47,_OMC_LIT61}};
#define _OMC_LIT62 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,2,1) {_OMC_LIT46,_OMC_LIT62}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT64,2,1) {_OMC_LIT45,_OMC_LIT63}};
#define _OMC_LIT64 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT64)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT65,2,1) {_OMC_LIT44,_OMC_LIT64}};
#define _OMC_LIT65 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT65)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT66,2,1) {_OMC_LIT43,_OMC_LIT65}};
#define _OMC_LIT66 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,1) {_OMC_LIT42,_OMC_LIT66}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,2,1) {_OMC_LIT41,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT69,2,1) {_OMC_LIT40,_OMC_LIT68}};
#define _OMC_LIT69 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,2,1) {_OMC_LIT39,_OMC_LIT69}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "HpcOmScheduler.createSchedule warning: The scheduler '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,54,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data "' is unknown. The list-scheduling algorithm is used instead for the "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,68,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data ".\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,2,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "HpcOmScheduler.createSchedule warning: Cannot schedule the the task graph to "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,77,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data " processors, because the number is larger than the available processors ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,73,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
#define _OMC_LIT76_data ").\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT76,3,_OMC_LIT76_data);
#define _OMC_LIT76 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "hpcomScheduler"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,14,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT40}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "Sets the scheduler for task graph scheduling (list | listr | level | levelfix | ext | metis | mcp | taskdep | tds | bls | rand | none). Default: level."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,151,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT81,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(47)),_OMC_LIT77,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT78,_OMC_LIT79,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT80}};
#define _OMC_LIT81 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "You did not choose a number of cores. Since there is no ODE-System, the number of cores is set to 1!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,101,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "Your system provides only "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,26,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data " processors!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,13,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data " processors might be a reasonable number of processors.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,56,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "Please set the number of processors you want to use!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,53,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
#define _OMC_LIT87_data "numProcs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT87,8,_OMC_LIT87_data);
#define _OMC_LIT87 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,1,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT89,1,1) {_OMC_LIT88}};
#define _OMC_LIT89 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,5) {&Flags_FlagData_INT__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "Sets the number of processors to use (0=default=auto)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,54,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(24)),_OMC_LIT87,_OMC_LIT89,_OMC_LIT78,_OMC_LIT90,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT91}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "Warning: Your system provides only "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,35,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "hpcomDump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,9,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "Dumps additional information on the parallel execution with hpcom."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,66,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(94)),_OMC_LIT94,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT95}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "_init.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,13,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT98,-1.0);
#define _OMC_LIT98 MMC_REFREALLIT(_OMC_LIT_STRUCT98)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT99,3,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),MMC_IMMEDIATE(MMC_TAGFIXNUM(-1)),_OMC_LIT98}};
#define _OMC_LIT99 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,0,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT101,5,3) {&HpcOmTaskGraph_GraphDumpOptions_GRAPHDUMPOPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT101 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "multirate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,9,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
#define _OMC_LIT103_data "The solver can switch partitions in the system."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT103,47,_OMC_LIT103_data);
#define _OMC_LIT103 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT103)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT104,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(137)),_OMC_LIT102,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT103}};
#define _OMC_LIT104 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "DO MULTIRATE\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,13,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "hpcom setup"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,11,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
#define _OMC_LIT107_data "_eqs_prof"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT107,9,_OMC_LIT107_data);
#define _OMC_LIT107 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "_ODE.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,12,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "hpcom"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,5,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
#define _OMC_LIT110_data "Enables parallel calculation based on task-graphs."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT110,50,_OMC_LIT110_data);
#define _OMC_LIT110 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT110)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT111,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT109,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT110}};
#define _OMC_LIT111 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "hpcom create DAE TaskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,26,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "DAE system"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,10,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "hpcom validate DAE TaskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,28,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "hpcom create costs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,18,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "hpcom create ODE TaskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,26,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "TaskgraphMeta ODE invalid\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,26,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
#define _OMC_LIT118_data "hpcom validate ODE TaskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT118,28,_OMC_LIT118_data);
#define _OMC_LIT118 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT118)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT119,3,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT119 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "_ZeroFuncs.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,18,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "hpcom create and dump zeroFuncs TaskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,41,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT122,3,0) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT122 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "ZeroFunc system"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,15,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "DAE.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,11,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "hpcom dump DAE TaskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,24,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data " sum: ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,7,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data " ; "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,3,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,1,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "ODE.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,11,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "hpcom assign levels / get crit. path"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,36,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT131,5,3) {&HpcOmTaskGraph_GraphDumpOptions_GRAPHDUMPOPTIONS__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */))}};
#define _OMC_LIT131 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT131)
#define _OMC_LIT132_data "hpcom dump ODE TaskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT132,24,_OMC_LIT132_data);
#define _OMC_LIT132 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "Critical Path successfully calculated\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,38,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "hpcom GRS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,9,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "ODE_merged.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,18,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "hpcom dump simplified TaskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,31,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "Filter successfully applied. Merged "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,36,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
#define _OMC_LIT138_data " tasks.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT138,8,_OMC_LIT138_data);
#define _OMC_LIT138 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "ODE system"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,10,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
#define _OMC_LIT140_data "hpcom create schedule"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT140,21,_OMC_LIT140_data);
#define _OMC_LIT140 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "ODE_schedule.graphml"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,20,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
#define _OMC_LIT142_data "hpcom dump schedule TaskGraph"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT142,29,_OMC_LIT142_data);
#define _OMC_LIT142 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "Schedule created\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,17,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
#define _OMC_LIT144_data "hpcom check ODE system size"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT144,27,_OMC_LIT144_data);
#define _OMC_LIT144 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "hpcom create memory map"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,23,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
#define _OMC_LIT146_data "hpcom other"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT146,11,_OMC_LIT146_data);
#define _OMC_LIT146 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "HpcOm is still under construction.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,35,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT148,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT148 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT148)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT149,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT149 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT149)
#define _OMC_LIT150_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT150,17,_OMC_LIT150_data);
#define _OMC_LIT150 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT150)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT151,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT148,_OMC_LIT149,_OMC_LIT150}};
#define _OMC_LIT151 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT151)
#define _OMC_LIT152_data "function createSimCode failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT152,30,_OMC_LIT152_data);
#define _OMC_LIT152 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT152)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT153,2,1) {_OMC_LIT152,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT153 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT153)
#include "util/modelica.h"

#include "HpcOmSimCodeMain_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_HpcOmSimCodeMain_outputTimeBenchmark2(threadData_t *threadData, modelica_metatype _compsIn, modelica_metatype _numCycles, modelica_metatype _eqSystemsIn, modelica_metatype _shared, modelica_integer _compIdx);
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmSimCodeMain_outputTimeBenchmark2(threadData_t *threadData, modelica_metatype _compsIn, modelica_metatype _numCycles, modelica_metatype _eqSystemsIn, modelica_metatype _shared, modelica_metatype _compIdx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_outputTimeBenchmark2,2,0) {(void*) boxptr_HpcOmSimCodeMain_outputTimeBenchmark2,0}};
#define boxvar_HpcOmSimCodeMain_outputTimeBenchmark2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_outputTimeBenchmark2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmSimCodeMain_checkEquationCount(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_string _iSystemName, modelica_integer _iExpectedNumberOfEqs, modelica_metatype _iSccSimEqMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_checkEquationCount(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSystemName, modelica_metatype _iExpectedNumberOfEqs, modelica_metatype _iSccSimEqMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_checkEquationCount,2,0) {(void*) boxptr_HpcOmSimCodeMain_checkEquationCount,0}};
#define boxvar_HpcOmSimCodeMain_checkEquationCount MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_checkEquationCount)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmSimCodeMain_checkTaskGraphMetaConsistency(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_string _iSystemName);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_checkTaskGraphMetaConsistency(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSystemName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_checkTaskGraphMetaConsistency,2,0) {(void*) boxptr_HpcOmSimCodeMain_checkTaskGraphMetaConsistency,0}};
#define boxvar_HpcOmSimCodeMain_checkTaskGraphMetaConsistency MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_checkTaskGraphMetaConsistency)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmSimCodeMain_checkOdeSystemSize(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iOdeEqs, modelica_metatype _iSccSimEqMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_checkOdeSystemSize(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iOdeEqs, modelica_metatype _iSccSimEqMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_checkOdeSystemSize,2,0) {(void*) boxptr_HpcOmSimCodeMain_checkOdeSystemSize,0}};
#define boxvar_HpcOmSimCodeMain_checkOdeSystemSize MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_checkOdeSystemSize)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_createSchedule1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_string _iFilenamePrefix, modelica_integer _iNumProc, modelica_metatype _iSimCode, modelica_metatype _iScheduledTasks, modelica_string _iSystemName, modelica_string _iSchedulerName, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_createSchedule1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iFilenamePrefix, modelica_metatype _iNumProc, modelica_metatype _iSimCode, modelica_metatype _iScheduledTasks, modelica_metatype _iSystemName, modelica_metatype _iSchedulerName, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_createSchedule1,2,0) {(void*) boxptr_HpcOmSimCodeMain_createSchedule1,0}};
#define boxvar_HpcOmSimCodeMain_createSchedule1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_createSchedule1)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_createSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_string _iFilenamePrefix, modelica_integer _iNumProc, modelica_integer _iNumProcToUse, modelica_metatype _iSimCode, modelica_metatype _iScheduledTasks, modelica_string _iSystemName, modelica_string _iSchedulerName, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_createSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iFilenamePrefix, modelica_metatype _iNumProc, modelica_metatype _iNumProcToUse, modelica_metatype _iSimCode, modelica_metatype _iScheduledTasks, modelica_metatype _iSystemName, modelica_metatype _iSchedulerName, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_createSchedule,2,0) {(void*) boxptr_HpcOmSimCodeMain_createSchedule,0}};
#define boxvar_HpcOmSimCodeMain_createSchedule MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_createSchedule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_GRS__newGraph2(threadData_t *threadData, modelica_metatype _origNodes, modelica_metatype _removedNodes, modelica_metatype _contrTasks, modelica_metatype _origGraph, modelica_metatype _origInComps, modelica_metatype _newGraph, modelica_metatype _newInComps, modelica_integer _newNode, modelica_metatype *out_inCompsOut);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_GRS__newGraph2(threadData_t *threadData, modelica_metatype _origNodes, modelica_metatype _removedNodes, modelica_metatype _contrTasks, modelica_metatype _origGraph, modelica_metatype _origInComps, modelica_metatype _newGraph, modelica_metatype _newInComps, modelica_metatype _newNode, modelica_metatype *out_inCompsOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_GRS__newGraph2,2,0) {(void*) boxptr_HpcOmSimCodeMain_GRS__newGraph2,0}};
#define boxvar_HpcOmSimCodeMain_GRS__newGraph2 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_GRS__newGraph2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_GRS__newGraph(threadData_t *threadData, modelica_metatype _graphIn, modelica_metatype _metaIn, modelica_metatype _contrTasks, modelica_metatype *out_metaOut);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_GRS__newGraph,2,0) {(void*) boxptr_HpcOmSimCodeMain_GRS__newGraph,0}};
#define boxvar_HpcOmSimCodeMain_GRS__newGraph MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_GRS__newGraph)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_applyGRSForScheduler(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _iContractedTasks, modelica_metatype *out_oTaskGraphT, modelica_metatype *out_oTaskGraphMeta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_applyGRSForScheduler,2,0) {(void*) boxptr_HpcOmSimCodeMain_applyGRSForScheduler,0}};
#define boxvar_HpcOmSimCodeMain_applyGRSForScheduler MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_applyGRSForScheduler)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_applyGRS1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _iContractedTasks, modelica_boolean _again, modelica_metatype *out_oTaskGraphT, modelica_metatype *out_oTaskGraphMeta);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_applyGRS1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _iContractedTasks, modelica_metatype _again, modelica_metatype *out_oTaskGraphT, modelica_metatype *out_oTaskGraphMeta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_applyGRS1,2,0) {(void*) boxptr_HpcOmSimCodeMain_applyGRS1,0}};
#define boxvar_HpcOmSimCodeMain_applyGRS1 MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_applyGRS1)
PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmSimCodeMain_setNumProc(threadData_t *threadData, modelica_integer _numProcFlag, modelica_real _cpCosts, modelica_metatype _taskGraphMetaIn, modelica_boolean *out_numFixed);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_setNumProc(threadData_t *threadData, modelica_metatype _numProcFlag, modelica_metatype _cpCosts, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_numFixed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_setNumProc,2,0) {(void*) boxptr_HpcOmSimCodeMain_setNumProc,0}};
#define boxvar_HpcOmSimCodeMain_setNumProc MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_setNumProc)
PROTECTED_FUNCTION_STATIC void omc_HpcOmSimCodeMain_createAndExportInitialSystemTaskGraph(threadData_t *threadData, modelica_metatype _iInitDae, modelica_string _iFileNamePrefix);
static const MMC_DEFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_createAndExportInitialSystemTaskGraph,2,0) {(void*) boxptr_HpcOmSimCodeMain_createAndExportInitialSystemTaskGraph,0}};
#define boxvar_HpcOmSimCodeMain_createAndExportInitialSystemTaskGraph MMC_REFSTRUCTLIT(boxvar_lit_HpcOmSimCodeMain_createAndExportInitialSystemTaskGraph)

PROTECTED_FUNCTION_STATIC void omc_HpcOmSimCodeMain_outputTimeBenchmark2(threadData_t *threadData, modelica_metatype _compsIn, modelica_metatype _numCycles, modelica_metatype _eqSystemsIn, modelica_metatype _shared, modelica_integer _compIdx)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;volatile modelica_metatype tmp3_2;volatile modelica_metatype tmp3_3;
    tmp3_1 = _compsIn;
    tmp3_2 = _numCycles;
    tmp3_3 = _eqSystemsIn;
    {
      modelica_real _exeCost;
      modelica_real _estimate;
      modelica_metatype _restCosts = NULL;
      modelica_metatype _compInfo = NULL;
      modelica_metatype _eqSys = NULL;
      modelica_metatype _comp = NULL;
      modelica_metatype _eqSysRest = NULL;
      modelica_metatype _comps = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _exeCost has no default value.
      // _estimate has no default value.
      // _restCosts has no default value.
      // _compInfo has no default value.
      // _eqSys has no default value.
      // _comp has no default value.
      // _eqSysRest has no default value.
      // _comps has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 4; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (listEmpty(tmp3_3)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_3);
          tmpMeta6 = MMC_CDR(tmp3_3);
          if (!listEmpty(tmpMeta6)) goto tmp2_end;
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          if (listEmpty(tmp3_3)) goto tmp2_end;
          tmpMeta7 = MMC_CAR(tmp3_3);
          tmpMeta8 = MMC_CDR(tmp3_3);
          
          _eqSysRest = tmpMeta8;
          tmp3 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _comps = omc_BackendDAEUtil_getStrongComponents(threadData, listHead(_eqSysRest));

          omc_HpcOmSimCodeMain_outputTimeBenchmark2(threadData, _comps, _numCycles, _eqSysRest, _shared, _compIdx);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_real tmp13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_real tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta9 = MMC_CAR(tmp3_1);
          tmpMeta10 = MMC_CDR(tmp3_1);
          if (listEmpty(tmp3_2)) goto tmp2_end;
          tmpMeta11 = MMC_CAR(tmp3_2);
          tmpMeta12 = MMC_CDR(tmp3_2);
          tmp13 = mmc_unbox_real(tmpMeta11);
          if (listEmpty(tmp3_3)) goto tmp2_end;
          tmpMeta14 = MMC_CAR(tmp3_3);
          tmpMeta15 = MMC_CDR(tmp3_3);
          _comp = tmpMeta9;
          _comps = tmpMeta10;
          _exeCost = tmp13  /* pattern as ty=Real */;
          _restCosts = tmpMeta12;
          _eqSys = tmpMeta14;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmpMeta16 = mmc_mk_cons(_comp, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta18 = omc_BackendDAEOptimize_countOperationstraverseComps(threadData, tmpMeta16, _eqSys, _shared, tmpMeta17);
          if (listEmpty(tmpMeta18)) goto goto_1;
          tmpMeta19 = MMC_CAR(tmpMeta18);
          tmpMeta20 = MMC_CDR(tmpMeta18);
          if (!listEmpty(tmpMeta20)) goto goto_1;
          _compInfo = tmpMeta19;

          /* Pattern-matching assignment */
          tmpMeta21 = omc_HpcOmTaskGraph_calculateCosts(threadData, _compInfo);
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          tmp23 = mmc_unbox_real(tmpMeta22);
          _estimate = tmp23  /* pattern as ty=Real */;

          omc_BackendDump_dumpCompInfo(threadData, _compInfo);

          tmpMeta24 = stringAppend(_OMC_LIT0,intString(_compIdx));
          tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT1);
          tmpMeta26 = stringAppend(tmpMeta25,intString(((modelica_integer)floor(_exeCost))));
          tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT2);
          tmpMeta28 = stringAppend(tmpMeta27,intString(((modelica_integer)floor(_estimate))));
          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT3);
          fputs(MMC_STRINGDATA(tmpMeta29),stdout);

          omc_HpcOmSimCodeMain_outputTimeBenchmark2(threadData, _comps, _restCosts, _eqSystemsIn, _shared, ((modelica_integer) 1) + _compIdx);
          goto tmp2_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
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
      if (++tmp3 < 4) {
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
PROTECTED_FUNCTION_STATIC void boxptr_HpcOmSimCodeMain_outputTimeBenchmark2(threadData_t *threadData, modelica_metatype _compsIn, modelica_metatype _numCycles, modelica_metatype _eqSystemsIn, modelica_metatype _shared, modelica_metatype _compIdx)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_compIdx);
  omc_HpcOmSimCodeMain_outputTimeBenchmark2(threadData, _compsIn, _numCycles, _eqSystemsIn, _shared, tmp1);
  return;
}

DLLDirection
void omc_HpcOmSimCodeMain_outputTimeBenchmark(threadData_t *threadData, modelica_metatype _graphData, modelica_metatype _dae)
{
  modelica_metatype _eqSystems = NULL;
  modelica_metatype _exeCosts = NULL;
  modelica_metatype _numCycles = NULL;
  modelica_metatype _shared = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _eqSystems has no default value.
  // _exeCosts has no default value.
  // _numCycles has no default value.
  // _shared has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _dae;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  _eqSystems = tmpMeta2;
  _shared = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta4 = _graphData;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 8));
  _exeCosts = tmpMeta5;

  _numCycles = omc_List_mapArray(threadData, _exeCosts, boxvar_Util_tuple22);

  fputs(MMC_STRINGDATA(_OMC_LIT4),stdout);

  omc_HpcOmSimCodeMain_outputTimeBenchmark2(threadData, omc_BackendDAEUtil_getStrongComponents(threadData, listHead(_eqSystems)), _numCycles, _eqSystems, _shared, ((modelica_integer) 1));

  fputs(MMC_STRINGDATA(_OMC_LIT5),stdout);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmSimCodeMain_checkEquationCount(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_string _iSystemName, modelica_integer _iExpectedNumberOfEqs, modelica_metatype _iSccSimEqMapping)
{
  modelica_boolean _oIsCorrect;
  modelica_integer _inCompsIdx;
  modelica_integer _eqCount;
  modelica_metatype _inComps = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _compEqs = NULL;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oIsCorrect has no default value.
  // _inCompsIdx has no default value.
  // _eqCount has no default value.
  // _inComps has no default value.
  // _comps has no default value.
  // _compEqs has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskGraphMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _inComps = tmpMeta2;

  _inCompsIdx = arrayLength(_inComps);

  _eqCount = ((modelica_integer) 0);

  while(1)
  {
    if(!(_inCompsIdx > ((modelica_integer) 0))) break;
    _comps = arrayGet(_inComps, _inCompsIdx);

    {
      modelica_metatype _comp;
      for (tmpMeta3 = _comps; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
      {
        _comp = MMC_CAR(tmpMeta3);
        _compEqs = arrayGet(_iSccSimEqMapping, mmc_unbox_integer(_comp));

        _eqCount = _eqCount + listLength(_compEqs);
      }
    }

    _inCompsIdx = ((modelica_integer) -1) + _inCompsIdx;
  }

  _oIsCorrect = (_iExpectedNumberOfEqs == _eqCount);

  if((!_oIsCorrect))
  {
    tmpMeta5 = stringAppend(_OMC_LIT6,_iSystemName);
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT7);
    tmpMeta7 = stringAppend(tmpMeta6,intString(_eqCount));
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT8);
    tmpMeta9 = stringAppend(tmpMeta8,intString(_iExpectedNumberOfEqs));
    tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT9);
    fputs(MMC_STRINGDATA(tmpMeta10),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return _oIsCorrect;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_checkEquationCount(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSystemName, modelica_metatype _iExpectedNumberOfEqs, modelica_metatype _iSccSimEqMapping)
{
  modelica_integer tmp1;
  modelica_boolean _oIsCorrect;
  modelica_metatype out_oIsCorrect;
  tmp1 = mmc_unbox_integer(_iExpectedNumberOfEqs);
  _oIsCorrect = omc_HpcOmSimCodeMain_checkEquationCount(threadData, _iTaskGraphMeta, _iSystemName, tmp1, _iSccSimEqMapping);
  out_oIsCorrect = mmc_mk_icon(_oIsCorrect);
  return out_oIsCorrect;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmSimCodeMain_checkTaskGraphMetaConsistency(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_string _iSystemName)
{
  modelica_boolean _oIsCorrect;
  modelica_integer _numberOfNodes;
  modelica_metatype _inComps = NULL;
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
  // _oIsCorrect has no default value.
  // _numberOfNodes has no default value.
  // _inComps has no default value.
  _numberOfNodes = arrayLength(_iTaskGraph);

  /* Pattern-matching assignment */
  tmpMeta1 = _iTaskGraphMeta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _inComps = tmpMeta2;

  if((!(_numberOfNodes == arrayLength(_inComps))))
  {
    tmpMeta3 = stringAppend(_OMC_LIT10,_iSystemName);
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT7);
    tmpMeta5 = stringAppend(tmpMeta4,intString(_numberOfNodes));
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT11);
    tmpMeta7 = stringAppend(tmpMeta6,intString(arrayLength(_inComps)));
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT9);
    fputs(MMC_STRINGDATA(tmpMeta8),stdout);

    _oIsCorrect = 0 /* false */;
  }
  else
  {
    _oIsCorrect = 1 /* true */;
  }
  _return: OMC_LABEL_UNUSED
  return _oIsCorrect;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_checkTaskGraphMetaConsistency(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSystemName)
{
  modelica_boolean _oIsCorrect;
  modelica_metatype out_oIsCorrect;
  _oIsCorrect = omc_HpcOmSimCodeMain_checkTaskGraphMetaConsistency(threadData, _iTaskGraph, _iTaskGraphMeta, _iSystemName);
  out_oIsCorrect = mmc_mk_icon(_oIsCorrect);
  return out_oIsCorrect;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_HpcOmSimCodeMain_checkOdeSystemSize(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iOdeEqs, modelica_metatype _iSccSimEqMapping)
{
  modelica_boolean _oIsCorrect;
  modelica_integer _scc;
  modelica_metatype _sccs = NULL;
  modelica_integer _actualSizePre;
  modelica_integer _actualSize;
  modelica_integer _targetSize;
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
  // _oIsCorrect has no default value.
  // _scc has no default value.
  // _sccs has no default value.
  // _actualSizePre has no default value.
  // _actualSize has no default value.
  // _targetSize has no default value.
  _sccs = omc_List_sort(threadData, omc_HpcOmTaskGraph_getAllSCCsOfGraph(threadData, _iTaskGraphMeta), boxvar_intGt);

  _actualSizePre = listLength(_sccs);

  _actualSize = listLength(omc_List_sortedUnique(threadData, _sccs, boxvar_intEq));

  if((_actualSizePre != _actualSize))
  {
    fputs(MMC_STRINGDATA(_OMC_LIT12),stdout);
  }

  _actualSize = ((modelica_integer) 0);

  {
    modelica_metatype _scc;
    for (tmpMeta1 = _sccs; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _scc = MMC_CAR(tmpMeta1);
      _actualSize = _actualSize + listLength(arrayGet(_iSccSimEqMapping, mmc_unbox_integer(_scc)));
    }
  }

  _targetSize = listLength(omc_List_flatten(threadData, _iOdeEqs));

  _oIsCorrect = (_targetSize == _actualSize);

  if(_oIsCorrect)
  {
  }
  else
  {
    tmpMeta3 = stringAppend(_OMC_LIT13,intString(_targetSize));
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT14);
    tmpMeta5 = stringAppend(tmpMeta4,intString(_actualSize));
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT15);
    fputs(MMC_STRINGDATA(tmpMeta6),stdout);

    tmpMeta7 = stringAppend(_OMC_LIT16,stringDelimitList(omc_List_map(threadData, omc_List_map(threadData, omc_List_flatten(threadData, _iOdeEqs), boxvar_SimCodeUtil_simEqSystemIndex), boxvar_intString), _OMC_LIT17));
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT18);
    fputs(MMC_STRINGDATA(tmpMeta8),stdout);

    fputs(MMC_STRINGDATA(_OMC_LIT19),stdout);
  }
  _return: OMC_LABEL_UNUSED
  return _oIsCorrect;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_checkOdeSystemSize(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iOdeEqs, modelica_metatype _iSccSimEqMapping)
{
  modelica_boolean _oIsCorrect;
  modelica_metatype out_oIsCorrect;
  _oIsCorrect = omc_HpcOmSimCodeMain_checkOdeSystemSize(threadData, _iTaskGraphMeta, _iOdeEqs, _iSccSimEqMapping);
  out_oIsCorrect = mmc_mk_icon(_oIsCorrect);
  return out_oIsCorrect;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_createSchedule1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_string _iFilenamePrefix, modelica_integer _iNumProc, modelica_metatype _iSimCode, modelica_metatype _iScheduledTasks, modelica_string _iSystemName, modelica_string _iSchedulerName, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _oSimCode = NULL;
  modelica_metatype _oTaskGraph = NULL;
  modelica_metatype _oTaskGraphMeta = NULL;
  modelica_metatype _oSccSimEqMapping = NULL;
  modelica_metatype _sccSimEqMap = NULL;
  modelica_metatype _schedule = NULL;
  modelica_metatype _taskGraph1 = NULL;
  modelica_metatype _taskGraphMeta1 = NULL;
  modelica_metatype _simCode = NULL;
  modelica_metatype tmpMeta[5] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oSchedule has no default value.
  // _oSimCode has no default value.
  // _oTaskGraph has no default value.
  // _oTaskGraphMeta has no default value.
  // _oSccSimEqMapping has no default value.
  // _sccSimEqMap has no default value.
  // _schedule has no default value.
  // _taskGraph1 has no default value.
  // _taskGraphMeta1 has no default value.
  // _simCode has no default value.
  
  
  
  
  
  { /* matchcontinue expression */
    volatile modelica_string tmp4_1;
    tmp4_1 = _iSchedulerName;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 17; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT39), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 15; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta6 = stringAppend(_OMC_LIT20,_iSystemName);
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta7),stdout);

          _schedule = omc_HpcOmScheduler_createEmptySchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT40), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 14; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta8 = stringAppend(_OMC_LIT21,_iSystemName);
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta9),stdout);

          _schedule = omc_HpcOmScheduler_createLevelSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping ,&_taskGraphMeta1);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _taskGraphMeta1;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (8 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT41), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 13; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta10 = stringAppend(_OMC_LIT22,_iSystemName);
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta11),stdout);

          _schedule = omc_HpcOmScheduler_createFixedLevelSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping ,&_taskGraphMeta1);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _taskGraphMeta1;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT42), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 12; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta12 = stringAppend(_OMC_LIT23,_iSystemName);
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta13),stdout);

          tmpMeta14 = stringAppend(_OMC_LIT24,_iFilenamePrefix);
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT25);
          _schedule = omc_HpcOmScheduler_createExtSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping, _iSimVarMapping, tmpMeta15);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT43), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 11; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta16 = stringAppend(_OMC_LIT26,_iSystemName);
          tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta17),stdout);

          _schedule = omc_HpcOmScheduler_createMetisSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping, _iSimVarMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT44), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 10; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta18 = stringAppend(_OMC_LIT27,_iSystemName);
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta19),stdout);

          _schedule = omc_HpcOmScheduler_createHMetisSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping, _iSimVarMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          if (5 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT45), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 9; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta20 = stringAppend(_OMC_LIT28,_iSystemName);
          tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta21),stdout);

          _schedule = omc_HpcOmScheduler_createListScheduleReverse(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping, _iSimVarMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT46), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 8; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta22 = stringAppend(_OMC_LIT29,_iSystemName);
          tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta23),stdout);

          _schedule = omc_HpcOmScheduler_createRandomSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping, _iSimVarMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT47), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 7; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta24 = stringAppend(_OMC_LIT30,_iSystemName);
          tmpMeta25 = stringAppend(tmpMeta24,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta25),stdout);

          _schedule = omc_HpcOmScheduler_createListSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping, _iSimVarMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT48), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 6; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta26 = stringAppend(_OMC_LIT31,_iSystemName);
          tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta27),stdout);

          _schedule = omc_HpcOmScheduler_createMCPschedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping, _iSimVarMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT49), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 5; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta28 = stringAppend(_OMC_LIT32,_iSystemName);
          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta29),stdout);

          _schedule = omc_HpcOmScheduler_createPartSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping, _iSimVarMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT50), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 4; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta30 = stringAppend(_OMC_LIT33,_iSystemName);
          tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta31),stdout);

          _schedule = omc_HpcOmScheduler_createTaskDepSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT51), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 3; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta32 = stringAppend(_OMC_LIT34,_iSystemName);
          tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta33),stdout);
          tmpMeta[0+0] = omc_HpcOmScheduler_TDS__schedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iNumProc, _iSccSimEqMapping, _iSimVarMapping, _iSimCode, &tmpMeta[0+1], &tmpMeta[0+2], &tmpMeta[0+3], &tmpMeta[0+4]);
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT52), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta34 = stringAppend(_OMC_LIT35,_iSystemName);
          tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta35),stdout);

          _schedule = omc_HpcOmScheduler_createBalancedLevelScheduling(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping ,&_taskGraphMeta1);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _taskGraphMeta1;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT53), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta36 = stringAppend(_OMC_LIT36,_iSystemName);
          tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta37),stdout);

          _schedule = omc_HpcOmEqSystems_createSingleBlockSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iScheduledTasks, _iSccSimEqMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          if (3 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT54), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta38 = stringAppend(_OMC_LIT37,_iSystemName);
          tmpMeta39 = stringAppend(tmpMeta38,_OMC_LIT18);
          fputs(MMC_STRINGDATA(tmpMeta39),stdout);

          _schedule = omc_HpcOmScheduler_createSingleThreadSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping, _iNumProc);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
          goto tmp3_done;
        }
        case 16: {
          
          /* Pattern matching succeeded */
          fputs(MMC_STRINGDATA(_OMC_LIT38),stdout);

          _schedule = omc_HpcOmScheduler_createEmptySchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping);
          tmpMeta[0+0] = _schedule;
          tmpMeta[0+1] = _iSimCode;
          tmpMeta[0+2] = _iTaskGraph;
          tmpMeta[0+3] = _iTaskGraphMeta;
          tmpMeta[0+4] = _iSccSimEqMapping;
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
      if (++tmp4 < 17) {
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_createSchedule1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iFilenamePrefix, modelica_metatype _iNumProc, modelica_metatype _iSimCode, modelica_metatype _iScheduledTasks, modelica_metatype _iSystemName, modelica_metatype _iSchedulerName, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping)
{
  modelica_integer tmp1;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumProc);
  _oSchedule = omc_HpcOmSimCodeMain_createSchedule1(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping, _iSimVarMapping, _iFilenamePrefix, tmp1, _iSimCode, _iScheduledTasks, _iSystemName, _iSchedulerName, out_oSimCode, out_oTaskGraph, out_oTaskGraphMeta, out_oSccSimEqMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  /* skip box _oSimCode; SimCode.SimCode */
  /* skip box _oTaskGraph; array<list<#Integer>> */
  /* skip box _oTaskGraphMeta; HpcOmTaskGraph.TaskGraphMeta */
  /* skip box _oSccSimEqMapping; array<list<#Integer>> */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_createSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_string _iFilenamePrefix, modelica_integer _iNumProc, modelica_integer _iNumProcToUse, modelica_metatype _iSimCode, modelica_metatype _iScheduledTasks, modelica_string _iSystemName, modelica_string _iSchedulerName, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping)
{
  modelica_metatype _oSchedule = NULL;
  modelica_metatype _oSimCode = NULL;
  modelica_metatype _oTaskGraph = NULL;
  modelica_metatype _oTaskGraphMeta = NULL;
  modelica_metatype _oSccSimEqMapping = NULL;
  modelica_metatype _knownScheduler = NULL;
  modelica_string _schedulerName = NULL;
  modelica_metatype _tmpSchedule = NULL;
  modelica_integer _numProcToUse;
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
  // _oSchedule has no default value.
  // _oSimCode has no default value.
  // _oTaskGraph has no default value.
  // _oTaskGraphMeta has no default value.
  // _oSccSimEqMapping has no default value.
  _knownScheduler = _OMC_LIT70;
  _schedulerName = _iSchedulerName;
  // _tmpSchedule has no default value.
  _numProcToUse = _iNumProcToUse;
  if((!omc_List_exist1(threadData, _knownScheduler, boxvar_stringEq, _schedulerName)))
  {
    tmpMeta1 = stringAppend(_OMC_LIT71,_iSchedulerName);
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT72);
    tmpMeta3 = stringAppend(tmpMeta2,_iSystemName);
    tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT73);
    fputs(MMC_STRINGDATA(tmpMeta4),stdout);

    _schedulerName = _OMC_LIT47;
  }

  if((_iNumProcToUse > _iNumProc))
  {
    tmpMeta5 = stringAppend(_OMC_LIT74,intString(_iNumProcToUse));
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT75);
    tmpMeta7 = stringAppend(tmpMeta6,intString(_iNumProc));
    tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT76);
    fputs(MMC_STRINGDATA(tmpMeta8),stdout);

    _numProcToUse = _iNumProc;
  }

  _tmpSchedule = omc_HpcOmSimCodeMain_createSchedule1(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping, _iSimVarMapping, _iFilenamePrefix, _numProcToUse, _iSimCode, _iScheduledTasks, _iSystemName, _schedulerName ,&_oSimCode ,&_oTaskGraph ,&_oTaskGraphMeta ,&_oSccSimEqMapping);

  _oSchedule = omc_HpcOmScheduler_expandSchedule(threadData, _iNumProc, _numProcToUse, _tmpSchedule);
  _return: OMC_LABEL_UNUSED
  if (out_oSimCode) { *out_oSimCode = _oSimCode; }
  if (out_oTaskGraph) { *out_oTaskGraph = _oTaskGraph; }
  if (out_oTaskGraphMeta) { *out_oTaskGraphMeta = _oTaskGraphMeta; }
  if (out_oSccSimEqMapping) { *out_oSccSimEqMapping = _oSccSimEqMapping; }
  return _oSchedule;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_createSchedule(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype _iSccSimEqMapping, modelica_metatype _iSimVarMapping, modelica_metatype _iFilenamePrefix, modelica_metatype _iNumProc, modelica_metatype _iNumProcToUse, modelica_metatype _iSimCode, modelica_metatype _iScheduledTasks, modelica_metatype _iSystemName, modelica_metatype _iSchedulerName, modelica_metatype *out_oSimCode, modelica_metatype *out_oTaskGraph, modelica_metatype *out_oTaskGraphMeta, modelica_metatype *out_oSccSimEqMapping)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oSchedule = NULL;
  tmp1 = mmc_unbox_integer(_iNumProc);
  tmp2 = mmc_unbox_integer(_iNumProcToUse);
  _oSchedule = omc_HpcOmSimCodeMain_createSchedule(threadData, _iTaskGraph, _iTaskGraphMeta, _iSccSimEqMapping, _iSimVarMapping, _iFilenamePrefix, tmp1, tmp2, _iSimCode, _iScheduledTasks, _iSystemName, _iSchedulerName, out_oSimCode, out_oTaskGraph, out_oTaskGraphMeta, out_oSccSimEqMapping);
  /* skip box _oSchedule; HpcOmSimCode.Schedule */
  /* skip box _oSimCode; SimCode.SimCode */
  /* skip box _oTaskGraph; array<list<#Integer>> */
  /* skip box _oTaskGraphMeta; HpcOmTaskGraph.TaskGraphMeta */
  /* skip box _oSccSimEqMapping; array<list<#Integer>> */
  return _oSchedule;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_GRS__newGraph2(threadData_t *threadData, modelica_metatype _origNodes, modelica_metatype _removedNodes, modelica_metatype _contrTasks, modelica_metatype _origGraph, modelica_metatype _origInComps, modelica_metatype _newGraph, modelica_metatype _newInComps, modelica_integer _newNode, modelica_metatype *out_inCompsOut)
{
  modelica_metatype _graphOut = NULL;
  modelica_metatype _inCompsOut = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _graphOut has no default value.
  // _inCompsOut has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _origNodes;
    {
      modelica_integer _node;
      modelica_metatype _rest = NULL;
      modelica_metatype _row = NULL;
      modelica_metatype _comps = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _rest has no default value.
      // _row has no default value.
      // _comps has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (!listEmpty(tmp4_1)) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _newGraph;
          tmpMeta[0+1] = _newInComps;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (listEmpty(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_1);
          tmpMeta7 = MMC_CDR(tmp4_1);
          tmp8 = mmc_unbox_integer(tmpMeta6);
          _node = tmp8  /* pattern as ty=Integer */;
          _rest = tmpMeta7;
          /* Pattern matching succeeded */
          _row = arrayGet(_origGraph, _node);

          _row = omc_HpcOmTaskGraph_filterContractedNodes(threadData, _row, _contrTasks);

          _row = omc_HpcOmTaskGraph_updateContinuousEntriesInList(threadData, _row, _removedNodes);

          _comps = arrayGet(_origInComps, _node);

          arrayUpdate(_newGraph, _newNode, _row);

          arrayUpdate(_newInComps, _newNode, _comps);
          /* Tail recursive call */
          _origNodes = _rest;
          _newNode = ((modelica_integer) 1) + _newNode;
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
  _graphOut = tmpMeta[0+0];
  _inCompsOut = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_inCompsOut) { *out_inCompsOut = _inCompsOut; }
  return _graphOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_GRS__newGraph2(threadData_t *threadData, modelica_metatype _origNodes, modelica_metatype _removedNodes, modelica_metatype _contrTasks, modelica_metatype _origGraph, modelica_metatype _origInComps, modelica_metatype _newGraph, modelica_metatype _newInComps, modelica_metatype _newNode, modelica_metatype *out_inCompsOut)
{
  modelica_integer tmp1;
  modelica_metatype _graphOut = NULL;
  tmp1 = mmc_unbox_integer(_newNode);
  _graphOut = omc_HpcOmSimCodeMain_GRS__newGraph2(threadData, _origNodes, _removedNodes, _contrTasks, _origGraph, _origInComps, _newGraph, _newInComps, tmp1, out_inCompsOut);
  /* skip box _graphOut; array<list<#Integer>> */
  /* skip box _inCompsOut; array<list<#Integer>> */
  return _graphOut;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_GRS__newGraph(threadData_t *threadData, modelica_metatype _graphIn, modelica_metatype _metaIn, modelica_metatype _contrTasks, modelica_metatype *out_metaOut)
{
  modelica_metatype _graphOut = NULL;
  modelica_metatype _metaOut = NULL;
  modelica_integer _newSize;
  modelica_metatype _notRemovedNodes = NULL;
  modelica_metatype _removedNodes = NULL;
  modelica_metatype _inComps = NULL;
  modelica_metatype _inCompsNew = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _graphOut has no default value.
  // _metaOut has no default value.
  // _newSize has no default value.
  // _notRemovedNodes has no default value.
  // _removedNodes has no default value.
  // _inComps has no default value.
  // _inCompsNew has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _metaIn;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _inComps = tmpMeta2;

  _notRemovedNodes = omc_HpcOmTaskGraph_filterContractedNodes(threadData, omc_List_intRange(threadData, arrayLength(_graphIn)), _contrTasks);

  _removedNodes = omc_HpcOmTaskGraph_filterNonContractedNodes(threadData, omc_List_intRange(threadData, arrayLength(_graphIn)), _contrTasks);

  _newSize = listLength(_notRemovedNodes);

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _graphOut = arrayCreate(_newSize, tmpMeta3);

  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _inCompsNew = arrayCreate(_newSize, tmpMeta4);

  _graphOut = omc_HpcOmSimCodeMain_GRS__newGraph2(threadData, _notRemovedNodes, _removedNodes, _contrTasks, _graphIn, _inComps, _graphOut, _inCompsNew, ((modelica_integer) 1) ,&_inCompsNew);

  _metaOut = omc_HpcOmTaskGraph_setInCompsInMeta(threadData, _inCompsNew, _metaIn);
  _return: OMC_LABEL_UNUSED
  if (out_metaOut) { *out_metaOut = _metaOut; }
  return _graphOut;
}

DLLDirection
modelica_metatype omc_HpcOmSimCodeMain_applyGRSForLevelFixSchedulerLevel(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iContractedTasks, modelica_integer _iCriticalSize, modelica_metatype _iSortedLevelTasks, modelica_integer _iCurrentSmallTask, modelica_metatype _iCurrentBigTask, modelica_metatype _iContractedLevelfixTasks)
{
  modelica_metatype _oContractedLevelfixTasks = NULL;
  modelica_metatype _tmpContractedTasks = NULL;
  modelica_metatype _bigTaskChilds = NULL;
  modelica_real _mergedGroupExecTime;
  modelica_integer _bigTaskIdx;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oContractedLevelfixTasks has no default value.
  // _tmpContractedTasks has no default value.
  // _bigTaskChilds has no default value.
  // _mergedGroupExecTime has no default value.
  // _bigTaskIdx has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _iCurrentBigTask;
    tmp4_2 = _iContractedLevelfixTasks;
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
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_real tmp10;
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp10 = mmc_unbox_real(tmpMeta9);
          
          _bigTaskIdx = tmp7  /* pattern as ty=Integer */;
          _bigTaskChilds = tmpMeta8;
          _mergedGroupExecTime = tmp10  /* pattern as ty=Real */;
          _tmpContractedTasks = tmp4_2;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = (_bigTaskIdx <= _iCurrentSmallTask);
          if (1 /* true */ != tmp11) goto goto_2;

          if((!listEmpty(_bigTaskChilds)))
          {
            tmpMeta13 = mmc_mk_cons(arrayGet(_iSortedLevelTasks, _bigTaskIdx), _bigTaskChilds);
            tmpMeta12 = mmc_mk_cons(tmpMeta13, _tmpContractedTasks);
            _tmpContractedTasks = tmpMeta12;
          }
          tmpMeta1 = _tmpContractedTasks;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta14;
          modelica_integer tmp15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_real tmp18;
          modelica_boolean tmp19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          tmpMeta14 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp15 = mmc_unbox_integer(tmpMeta14);
          tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta17 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp18 = mmc_unbox_real(tmpMeta17);
          
          _bigTaskIdx = tmp15  /* pattern as ty=Integer */;
          _bigTaskChilds = tmpMeta16;
          _mergedGroupExecTime = tmp18  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp19 = omc_HpcOmTaskGraph_isNodeContracted(threadData, _bigTaskIdx, _iContractedTasks);
          if (1 /* true */ != tmp19) goto goto_2;

          if((_bigTaskIdx > ((modelica_integer) 1)))
          {
            _mergedGroupExecTime = omc_HpcOmTaskGraph_getExeCostReqCycles(threadData, mmc_unbox_integer(arrayGet(_iSortedLevelTasks, ((modelica_integer) -1) + _bigTaskIdx)), _iTaskGraphMeta);
          }
          else
          {
            _mergedGroupExecTime = 0.0;
          }
          tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta21 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) -1) + _bigTaskIdx), tmpMeta20, mmc_mk_real(_mergedGroupExecTime));
          tmpMeta1 = omc_HpcOmSimCodeMain_applyGRSForLevelFixSchedulerLevel(threadData, _iTaskGraphMeta, _iContractedTasks, _iCriticalSize, _iSortedLevelTasks, _iCurrentSmallTask, tmpMeta21, _iContractedLevelfixTasks);
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta22;
          modelica_integer tmp23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_real tmp26;
          modelica_boolean tmp27;
          modelica_metatype tmpMeta28;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp26 = mmc_unbox_real(tmpMeta25);
          
          _bigTaskIdx = tmp23  /* pattern as ty=Integer */;
          _bigTaskChilds = tmpMeta24;
          _mergedGroupExecTime = tmp26  /* pattern as ty=Real */;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp27 = omc_HpcOmTaskGraph_isNodeContracted(threadData, _iCurrentSmallTask, _iContractedTasks);
          if (1 /* true */ != tmp27) goto goto_2;
          tmpMeta28 = mmc_mk_box3(0, mmc_mk_integer(_bigTaskIdx), _bigTaskChilds, mmc_mk_real(_mergedGroupExecTime));
          tmpMeta1 = omc_HpcOmSimCodeMain_applyGRSForLevelFixSchedulerLevel(threadData, _iTaskGraphMeta, _iContractedTasks, _iCriticalSize, _iSortedLevelTasks, ((modelica_integer) 1) + _iCurrentSmallTask, tmpMeta28, _iContractedLevelfixTasks);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta29;
          modelica_integer tmp30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_real tmp33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          tmp30 = mmc_unbox_integer(tmpMeta29);
          tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta32 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp33 = mmc_unbox_real(tmpMeta32);
          
          _bigTaskIdx = tmp30  /* pattern as ty=Integer */;
          _bigTaskChilds = tmpMeta31;
          _mergedGroupExecTime = tmp33  /* pattern as ty=Real */;
          _tmpContractedTasks = tmp4_2;
          /* Pattern matching succeeded */
          _mergedGroupExecTime = _mergedGroupExecTime + omc_HpcOmTaskGraph_getExeCostReqCycles(threadData, mmc_unbox_integer(arrayGet(_iSortedLevelTasks, _iCurrentSmallTask)), _iTaskGraphMeta);

          if((_mergedGroupExecTime >= ((modelica_real)_iCriticalSize)))
          {
            if((!listEmpty(_bigTaskChilds)))
            {
              tmpMeta35 = mmc_mk_cons(arrayGet(_iSortedLevelTasks, _bigTaskIdx), _bigTaskChilds);
              tmpMeta34 = mmc_mk_cons(tmpMeta35, _tmpContractedTasks);
              _tmpContractedTasks = tmpMeta34;
            }

            if((_bigTaskIdx > ((modelica_integer) 1)))
            {
              _mergedGroupExecTime = omc_HpcOmTaskGraph_getExeCostReqCycles(threadData, mmc_unbox_integer(arrayGet(_iSortedLevelTasks, ((modelica_integer) -1) + _bigTaskIdx)), _iTaskGraphMeta);
            }
            else
            {
              _mergedGroupExecTime = 0.0;
            }

            tmpMeta36 = MMC_REFSTRUCTLIT(mmc_nil);
            tmpMeta37 = mmc_mk_box3(0, mmc_mk_integer(((modelica_integer) -1) + _bigTaskIdx), tmpMeta36, mmc_mk_real(_mergedGroupExecTime));
            _tmpContractedTasks = omc_HpcOmSimCodeMain_applyGRSForLevelFixSchedulerLevel(threadData, _iTaskGraphMeta, _iContractedTasks, _iCriticalSize, _iSortedLevelTasks, _iCurrentSmallTask, tmpMeta37, _tmpContractedTasks);
          }
          else
          {
            tmpMeta38 = mmc_mk_cons(arrayGet(_iSortedLevelTasks, _iCurrentSmallTask), _bigTaskChilds);
            tmpMeta39 = mmc_mk_box3(0, mmc_mk_integer(_bigTaskIdx), tmpMeta38, mmc_mk_real(_mergedGroupExecTime));
            _tmpContractedTasks = omc_HpcOmSimCodeMain_applyGRSForLevelFixSchedulerLevel(threadData, _iTaskGraphMeta, _iContractedTasks, _iCriticalSize, _iSortedLevelTasks, ((modelica_integer) 1) + _iCurrentSmallTask, tmpMeta39, _tmpContractedTasks);
          }
          tmpMeta1 = _tmpContractedTasks;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iContractedLevelfixTasks;
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
  _oContractedLevelfixTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oContractedLevelfixTasks;
}
modelica_metatype boxptr_HpcOmSimCodeMain_applyGRSForLevelFixSchedulerLevel(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iContractedTasks, modelica_metatype _iCriticalSize, modelica_metatype _iSortedLevelTasks, modelica_metatype _iCurrentSmallTask, modelica_metatype _iCurrentBigTask, modelica_metatype _iContractedLevelfixTasks)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _oContractedLevelfixTasks = NULL;
  tmp1 = mmc_unbox_integer(_iCriticalSize);
  tmp2 = mmc_unbox_integer(_iCurrentSmallTask);
  _oContractedLevelfixTasks = omc_HpcOmSimCodeMain_applyGRSForLevelFixSchedulerLevel(threadData, _iTaskGraphMeta, _iContractedTasks, tmp1, _iSortedLevelTasks, tmp2, _iCurrentBigTask, _iContractedLevelfixTasks);
  /* skip box _oContractedLevelfixTasks; list<list<#Integer>> */
  return _oContractedLevelfixTasks;
}

static modelica_metatype closure0_HpcOmTaskGraph_compareTasksByExecTime(threadData_t *thData, modelica_metatype closure, modelica_metatype iTask1, modelica_metatype iTask2)
{
  modelica_metatype iTaskComps = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype iExeCosts = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype iDescending = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  return boxptr_HpcOmTaskGraph_compareTasksByExecTime(thData, iTask1, iTask2, iTaskComps, iExeCosts, iDescending);
}
DLLDirection
modelica_metatype omc_HpcOmSimCodeMain_applyGRSForLevelFixScheduler(threadData_t *threadData, modelica_metatype _iTaskGraphMeta, modelica_metatype _iContractedTasks, modelica_metatype _iLevelNodes, modelica_metatype _iContractedLevelfixTasks)
{
  modelica_metatype _oContractedLevelfixTasks = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _head = NULL;
  modelica_metatype _sortedHead = NULL;
  modelica_metatype _sortedHeadArray = NULL;
  modelica_metatype _tmpContractedLevelfixTasks = NULL;
  modelica_metatype _exeCosts = NULL;
  modelica_real _bigTaskExecTime;
  modelica_metatype _inComps = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oContractedLevelfixTasks has no default value.
  // _rest has no default value.
  // _head has no default value.
  // _sortedHead has no default value.
  // _sortedHeadArray has no default value.
  // _tmpContractedLevelfixTasks has no default value.
  // _exeCosts has no default value.
  // _bigTaskExecTime has no default value.
  // _inComps has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _iTaskGraphMeta;
    tmp4_2 = _iLevelNodes;
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
          if (listEmpty(tmp4_2)) goto tmp3_end;
          tmpMeta6 = MMC_CAR(tmp4_2);
          tmpMeta7 = MMC_CDR(tmp4_2);
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 8));
          
          _head = tmpMeta6;
          _rest = tmpMeta7;
          _inComps = tmpMeta8;
          _exeCosts = tmpMeta9;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box3(0, _inComps, _exeCosts, mmc_mk_boolean(0 /* false */));
          _sortedHead = omc_List_sort(threadData, _head, (modelica_fnptr) mmc_mk_box2(0,closure0_HpcOmTaskGraph_compareTasksByExecTime,tmpMeta10));

          _sortedHeadArray = listArray(_sortedHead);

          if((arrayLength(_sortedHeadArray) > ((modelica_integer) 0)))
          {
            _bigTaskExecTime = omc_HpcOmTaskGraph_getExeCostReqCycles(threadData, mmc_unbox_integer(arrayGet(_sortedHeadArray, arrayLength(_sortedHeadArray))), _iTaskGraphMeta);
          }
          else
          {
            _bigTaskExecTime = 0.0;
          }

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = mmc_mk_box3(0, mmc_mk_integer(arrayLength(_sortedHeadArray)), tmpMeta11, mmc_mk_real(_bigTaskExecTime));
          _tmpContractedLevelfixTasks = omc_HpcOmSimCodeMain_applyGRSForLevelFixSchedulerLevel(threadData, _iTaskGraphMeta, _iContractedTasks, ((modelica_integer) 500), _sortedHeadArray, ((modelica_integer) 1), tmpMeta12, _iContractedLevelfixTasks);
          /* Tail recursive call */
          _iLevelNodes = _rest;
          _iContractedLevelfixTasks = _tmpContractedLevelfixTasks;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _iContractedLevelfixTasks;
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
  _oContractedLevelfixTasks = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _oContractedLevelfixTasks;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_applyGRSForScheduler(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _iContractedTasks, modelica_metatype *out_oTaskGraphT, modelica_metatype *out_oTaskGraphMeta)
{
  modelica_metatype _oTaskGraph = NULL;
  modelica_metatype _oTaskGraphT = NULL;
  modelica_metatype _oTaskGraphMeta = NULL;
  modelica_string _flagValue = NULL;
  modelica_metatype _levelNodes = NULL;
  modelica_metatype _contractedNodes = NULL;
  modelica_metatype _tmpTaskGraph = NULL;
  modelica_metatype _tmpTaskGraphT = NULL;
  modelica_metatype _tmpTaskGraphMeta = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTaskGraph has no default value.
  // _oTaskGraphT has no default value.
  // _oTaskGraphMeta has no default value.
  // _flagValue has no default value.
  // _levelNodes has no default value.
  // _contractedNodes has no default value.
  // _tmpTaskGraph has no default value.
  // _tmpTaskGraphT has no default value.
  // _tmpTaskGraphMeta has no default value.
  
  
  
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
          _flagValue = omc_Flags_getConfigString(threadData, _OMC_LIT81);

          /* Pattern-matching assignment */
          tmp6 = (stringEqual(_flagValue, _OMC_LIT41));
          if (1 /* true */ != tmp6) goto goto_2;

          _levelNodes = omc_HpcOmTaskGraph_getLevelNodes(threadData, _iTaskGraph);

          tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
          _contractedNodes = omc_HpcOmSimCodeMain_applyGRSForLevelFixScheduler(threadData, _iTaskGraphMeta, _iContractedTasks, _levelNodes, tmpMeta7);

          _tmpTaskGraph = omc_HpcOmTaskGraph_contractNodesInGraph(threadData, _contractedNodes, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _iContractedTasks ,&_tmpTaskGraphT ,&_tmpTaskGraphMeta ,NULL);
          tmpMeta[0+0] = _tmpTaskGraph;
          tmpMeta[0+1] = _tmpTaskGraphT;
          tmpMeta[0+2] = _tmpTaskGraphMeta;
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _iTaskGraph;
          tmpMeta[0+1] = _iTaskGraphT;
          tmpMeta[0+2] = _iTaskGraphMeta;
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
  _oTaskGraph = tmpMeta[0+0];
  _oTaskGraphT = tmpMeta[0+1];
  _oTaskGraphMeta = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_oTaskGraphT) { *out_oTaskGraphT = _oTaskGraphT; }
  if (out_oTaskGraphMeta) { *out_oTaskGraphMeta = _oTaskGraphMeta; }
  return _oTaskGraph;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_HpcOmSimCodeMain_applyGRS1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _iContractedTasks, modelica_boolean _again, modelica_metatype *out_oTaskGraphT, modelica_metatype *out_oTaskGraphMeta)
{
  modelica_metatype _oTaskGraph = NULL;
  modelica_metatype _oTaskGraphT = NULL;
  modelica_metatype _oTaskGraphMeta = NULL;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTaskGraph has no default value.
  // _oTaskGraphT has no default value.
  // _oTaskGraphMeta has no default value.
  
  
  
  { /* match expression */
    modelica_boolean tmp4_1;
    tmp4_1 = _again;
    {
      modelica_boolean _changed;
      modelica_boolean _changed2;
      modelica_metatype _tmpTaskGraph = NULL;
      modelica_metatype _tmpTaskGraphT = NULL;
      modelica_metatype _tmpTaskGraphMeta = NULL;
      modelica_metatype _tmpContractedTasks = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _changed has no default value.
      // _changed2 has no default value.
      // _tmpTaskGraph has no default value.
      // _tmpTaskGraphT has no default value.
      // _tmpTaskGraphMeta has no default value.
      // _tmpContractedTasks has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 /* true */ != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _tmpTaskGraph = omc_HpcOmTaskGraph_mergeSimpleNodes(threadData, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _iContractedTasks ,&_tmpTaskGraphT ,&_tmpTaskGraphMeta ,&_tmpContractedTasks ,&_changed);

          _tmpTaskGraph = omc_HpcOmTaskGraph_mergeParentNodes(threadData, _tmpTaskGraph, _tmpTaskGraphT, _tmpTaskGraphMeta, _tmpContractedTasks ,&_tmpTaskGraphT ,&_tmpTaskGraphMeta ,&_tmpContractedTasks ,&_changed2);

          _changed = (_changed || _changed2);
          /* Tail recursive call */
          _iTaskGraph = _tmpTaskGraph;
          _iTaskGraphT = _tmpTaskGraphT;
          _iTaskGraphMeta = _tmpTaskGraphMeta;
          _iContractedTasks = _tmpContractedTasks;
          _again = _changed;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _iTaskGraph;
          tmpMeta[0+1] = _iTaskGraphT;
          tmpMeta[0+2] = _iTaskGraphMeta;
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
  _oTaskGraph = tmpMeta[0+0];
  _oTaskGraphT = tmpMeta[0+1];
  _oTaskGraphMeta = tmpMeta[0+2];
  _return: OMC_LABEL_UNUSED
  if (out_oTaskGraphT) { *out_oTaskGraphT = _oTaskGraphT; }
  if (out_oTaskGraphMeta) { *out_oTaskGraphMeta = _oTaskGraphMeta; }
  return _oTaskGraph;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_applyGRS1(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphT, modelica_metatype _iTaskGraphMeta, modelica_metatype _iContractedTasks, modelica_metatype _again, modelica_metatype *out_oTaskGraphT, modelica_metatype *out_oTaskGraphMeta)
{
  modelica_integer tmp1;
  modelica_metatype _oTaskGraph = NULL;
  tmp1 = mmc_unbox_integer(_again);
  _oTaskGraph = omc_HpcOmSimCodeMain_applyGRS1(threadData, _iTaskGraph, _iTaskGraphT, _iTaskGraphMeta, _iContractedTasks, tmp1, out_oTaskGraphT, out_oTaskGraphMeta);
  /* skip box _oTaskGraph; array<list<#Integer>> */
  /* skip box _oTaskGraphT; array<list<#Integer>> */
  /* skip box _oTaskGraphMeta; HpcOmTaskGraph.TaskGraphMeta */
  return _oTaskGraph;
}

DLLDirection
modelica_metatype omc_HpcOmSimCodeMain_applyGRS(threadData_t *threadData, modelica_metatype _iTaskGraph, modelica_metatype _iTaskGraphMeta, modelica_metatype *out_oTaskGraphMeta)
{
  modelica_metatype _oTaskGraph = NULL;
  modelica_metatype _oTaskGraphMeta = NULL;
  modelica_metatype _taskGraph1 = NULL;
  modelica_metatype _taskGraphT = NULL;
  modelica_metatype _taskGraphMeta1 = NULL;
  modelica_metatype _contractedTasks = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _oTaskGraph has no default value.
  // _oTaskGraphMeta has no default value.
  // _taskGraph1 has no default value.
  // _taskGraphT has no default value.
  // _taskGraphMeta1 has no default value.
  // _contractedTasks has no default value.
  _taskGraph1 = arrayCopy(_iTaskGraph);

  _taskGraphT = omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _taskGraph1, arrayLength(_taskGraph1));

  _taskGraphMeta1 = omc_HpcOmTaskGraph_copyTaskGraphMeta(threadData, _iTaskGraphMeta);

  _contractedTasks = arrayCreate(arrayLength(_taskGraph1), mmc_mk_integer(((modelica_integer) 0)));

  _taskGraph1 = omc_HpcOmSimCodeMain_applyGRS1(threadData, _taskGraph1, _taskGraphT, _taskGraphMeta1, _contractedTasks, 1 /* true */ ,&_taskGraphT ,&_taskGraphMeta1);

  _oTaskGraph = omc_HpcOmSimCodeMain_GRS__newGraph(threadData, _taskGraph1, _taskGraphMeta1, _contractedTasks ,&_oTaskGraphMeta);
  _return: OMC_LABEL_UNUSED
  if (out_oTaskGraphMeta) { *out_oTaskGraphMeta = _oTaskGraphMeta; }
  return _oTaskGraph;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_HpcOmSimCodeMain_setNumProc(threadData_t *threadData, modelica_integer _numProcFlag, modelica_real _cpCosts, modelica_metatype _taskGraphMetaIn, modelica_boolean *out_numFixed)
{
  modelica_integer _numProcOut;
  modelica_boolean _numFixed;
  modelica_integer tmp1_c0 __attribute__((unused)) = 0;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _numProcOut has no default value.
  // _numFixed has no default value.
  
  
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = _numProcFlag;
    {
      modelica_integer _numProcSys;
      modelica_integer _numProc;
      modelica_integer _numProcSched;
      modelica_real _serCosts;
      modelica_real _maxSpeedUp;
      modelica_string _string1 = NULL;
      modelica_string _string2 = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _numProcSys has no default value.
      // _numProc has no default value.
      // _numProcSched has no default value.
      // _serCosts has no default value.
      // _maxSpeedUp has no default value.
      // _string1 has no default value.
      // _string2 has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_real tmp6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (0 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _serCosts = omc_HpcOmScheduler_getSerialExecutionTime(threadData, _taskGraphMetaIn);

          if((_serCosts != 0.0))
          {
            tmp6 = _cpCosts;
            if (tmp6 == 0) {goto goto_2;}
            _maxSpeedUp = (_serCosts) / tmp6;

            _numProcSched = ((modelica_integer)floor(1.0 + _maxSpeedUp));

            _numProcSys = omc_System_numProcessors(threadData);

            _numProc = modelica_integer_min((modelica_integer)(_numProcSched),(modelica_integer)(_numProcSys));

            tmpMeta7 = stringAppend(_OMC_LIT83,intString(_numProcSys));
            tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT84);
            _string1 = tmpMeta8;

            tmpMeta9 = stringAppend(intString(_numProcSched),_OMC_LIT85);
            _string2 = tmpMeta9;

            _string1 = ((_numProcSched > _numProcSys)?_string1:_string2);

            fputs(MMC_STRINGDATA(_OMC_LIT86),stdout);

            fputs(MMC_STRINGDATA(_string1),stdout);
          }
          else
          {
            _numProc = ((modelica_integer) 1);

            fputs(MMC_STRINGDATA(_OMC_LIT82),stdout);
          }

          omc_FlagsUtil_setConfigInt(threadData, _OMC_LIT92, _numProc);
          tmp1_c0 = _numProc;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          
          /* Pattern matching succeeded */
          _numProcSys = omc_System_numProcessors(threadData);

          if(((_numProcFlag > _numProcSys) && omc_Flags_isSet(threadData, _OMC_LIT96)))
          {
            tmpMeta10 = stringAppend(_OMC_LIT93,intString(_numProcSys));
            tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT84);
            fputs(MMC_STRINGDATA(tmpMeta11),stdout);
          }
          tmp1_c0 = _numProcFlag;
          tmp1_c1 = 1 /* true */;
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
  _numProcOut = tmp1_c0;
  _numFixed = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_numFixed) { *out_numFixed = _numFixed; }
  return _numProcOut;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_HpcOmSimCodeMain_setNumProc(threadData_t *threadData, modelica_metatype _numProcFlag, modelica_metatype _cpCosts, modelica_metatype _taskGraphMetaIn, modelica_metatype *out_numFixed)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_boolean _numFixed;
  modelica_integer _numProcOut;
  modelica_metatype out_numProcOut;
  tmp1 = mmc_unbox_integer(_numProcFlag);
  tmp2 = mmc_unbox_real(_cpCosts);
  _numProcOut = omc_HpcOmSimCodeMain_setNumProc(threadData, tmp1, tmp2, _taskGraphMetaIn, &_numFixed);
  out_numProcOut = mmc_mk_icon(_numProcOut);
  if (out_numFixed) { *out_numFixed = mmc_mk_icon(_numFixed); }
  return out_numProcOut;
}

PROTECTED_FUNCTION_STATIC void omc_HpcOmSimCodeMain_createAndExportInitialSystemTaskGraph(threadData_t *threadData, modelica_metatype _iInitDae, modelica_string _iFileNamePrefix)
{
  modelica_metatype _initDAE = NULL;
  modelica_metatype _tmpTaskGraph = NULL;
  modelica_metatype _tmpTaskGraphMeta = NULL;
  modelica_string _fileName = NULL;
  modelica_metatype _sccSimEqMapping = NULL;
  modelica_metatype _schedulerInfo = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _initDAE has no default value.
  // _tmpTaskGraph has no default value.
  // _tmpTaskGraphMeta has no default value.
  // _fileName has no default value.
  // _sccSimEqMapping has no default value.
  // _schedulerInfo has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _iInitDae;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (optionNone(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 1));
          _initDAE = tmpMeta5;
          /* Pattern matching succeeded */
          _tmpTaskGraph = omc_HpcOmTaskGraph_createTaskGraph(threadData, _initDAE, 0 /* false */ ,&_tmpTaskGraphMeta);

          tmpMeta6 = stringAppend(_OMC_LIT24,_iFileNamePrefix);
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT97);
          _fileName = tmpMeta7;

          _schedulerInfo = arrayCreate(arrayLength(_tmpTaskGraph), _OMC_LIT99);

          tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
          _sccSimEqMapping = arrayCreate(arrayLength(_tmpTaskGraph), tmpMeta8);

          tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_HpcOmTaskGraph_dumpAsGraphMLSccLevel(threadData, _tmpTaskGraph, _tmpTaskGraphMeta, _fileName, _OMC_LIT100, tmpMeta9, tmpMeta10, _sccSimEqMapping, _schedulerInfo, _OMC_LIT101);
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

DLLDirection
modelica_metatype omc_HpcOmSimCodeMain_createSimCode(threadData_t *threadData, modelica_metatype _inBackendDAE, modelica_metatype _inInitDAE, modelica_metatype _inInitDAE_lambda0, modelica_metatype _inRemovedInitialEquationLst, modelica_metatype _inClassName, modelica_string _filenamePrefix, modelica_string _inString11, modelica_metatype _functions, modelica_metatype _externalFunctionIncludes, modelica_metatype _includeDirs, modelica_metatype _libs, modelica_metatype _libPaths, modelica_metatype _program, modelica_metatype _simSettingsOpt, modelica_metatype _recordDecls, modelica_metatype _literals, modelica_metatype _args)
{
  modelica_metatype _simCode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _simCode has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inBackendDAE;
    {
      modelica_integer _lastEqMappingIdx;
      modelica_metatype _eqs = NULL;
      modelica_metatype _equationSccMapping = NULL;
      modelica_metatype _sccSimEqMapping = NULL;
      modelica_metatype _daeSccSimEqMapping = NULL;
      modelica_metatype _simeqCompMapping = NULL;
      modelica_metatype _taskGraph = NULL;
      modelica_metatype _taskGraphDae = NULL;
      modelica_metatype _taskGraphOde = NULL;
      modelica_metatype _taskGraphZeroFuncs = NULL;
      modelica_metatype _taskGraphOdeSimplified = NULL;
      modelica_metatype _taskGraphDaeSimplified = NULL;
      modelica_metatype _taskGraphZeroFuncSimplified = NULL;
      modelica_metatype _taskGraphOdeScheduled = NULL;
      modelica_metatype _taskGraphData = NULL;
      modelica_metatype _taskGraphDataDae = NULL;
      modelica_metatype _taskGraphDataOde = NULL;
      modelica_metatype _taskGraphDataZeroFuncs = NULL;
      modelica_metatype _taskGraphDataOdeSimplified = NULL;
      modelica_metatype _taskGraphDataDaeSimplified = NULL;
      modelica_metatype _taskGraphDataZeroFuncSimplified = NULL;
      modelica_metatype _taskGraphDataOdeScheduled = NULL;
      modelica_string _fileName = NULL;
      modelica_integer _numProc;
      modelica_metatype _criticalPaths = NULL;
      modelica_metatype _criticalPathsWoC = NULL;
      modelica_real _cpCosts;
      modelica_real _cpCostsWoC;
      modelica_metatype _scheduledTasksOde = NULL;
      modelica_metatype _scheduledTasksDae = NULL;
      modelica_metatype _scheduledTasksZeroFunc = NULL;
      modelica_metatype _zeroFuncsSimEqIdc = NULL;
      modelica_boolean _taskGraphMetaValid;
      modelica_string _criticalPathInfo = NULL;
      modelica_metatype _schedulerInfo = NULL;
      modelica_metatype _scheduleOde = NULL;
      modelica_metatype _scheduleDae = NULL;
      modelica_metatype _scheduleZeroFunc = NULL;
      modelica_real _graphCosts;
      modelica_integer _graphOps;
      modelica_metatype _optTmpMemoryMap = NULL;
      modelica_metatype _simVarMapping = NULL;
      modelica_metatype _hpcomData = NULL;
      modelica_metatype _varToArrayIndexMapping = NULL;
      modelica_metatype _varToIndexMapping = NULL;
      modelica_metatype _partData = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lastEqMappingIdx has no default value.
      // _eqs has no default value.
      // _equationSccMapping has no default value.
      // _sccSimEqMapping has no default value.
      // _daeSccSimEqMapping has no default value.
      // _simeqCompMapping has no default value.
      // _taskGraph has no default value.
      // _taskGraphDae has no default value.
      // _taskGraphOde has no default value.
      // _taskGraphZeroFuncs has no default value.
      // _taskGraphOdeSimplified has no default value.
      // _taskGraphDaeSimplified has no default value.
      // _taskGraphZeroFuncSimplified has no default value.
      // _taskGraphOdeScheduled has no default value.
      // _taskGraphData has no default value.
      // _taskGraphDataDae has no default value.
      // _taskGraphDataOde has no default value.
      // _taskGraphDataZeroFuncs has no default value.
      // _taskGraphDataOdeSimplified has no default value.
      // _taskGraphDataDaeSimplified has no default value.
      // _taskGraphDataZeroFuncSimplified has no default value.
      // _taskGraphDataOdeScheduled has no default value.
      // _fileName has no default value.
      // _numProc has no default value.
      // _criticalPaths has no default value.
      // _criticalPathsWoC has no default value.
      // _cpCosts has no default value.
      // _cpCostsWoC has no default value.
      // _scheduledTasksOde has no default value.
      // _scheduledTasksDae has no default value.
      // _scheduledTasksZeroFunc has no default value.
      // _zeroFuncsSimEqIdc has no default value.
      // _taskGraphMetaValid has no default value.
      // _criticalPathInfo has no default value.
      // _schedulerInfo has no default value.
      // _scheduleOde has no default value.
      // _scheduleDae has no default value.
      // _scheduleZeroFunc has no default value.
      // _graphCosts has no default value.
      // _graphOps has no default value.
      // _optTmpMemoryMap has no default value.
      // _simVarMapping has no default value.
      // _hpcomData has no default value.
      // _varToArrayIndexMapping has no default value.
      // _varToIndexMapping has no default value.
      // _partData has no default value.
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
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp6 = omc_Flags_isSet(threadData, _OMC_LIT104);
          if (1 /* true */ != tmp6) goto goto_2;

          fputs(MMC_STRINGDATA(_OMC_LIT105),stdout);

          /* Pattern-matching tuple assignment */
          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta12 = omc_SimCodeUtil_createSimCode(threadData, _inBackendDAE, _inInitDAE, _inInitDAE_lambda0, mmc_mk_none(), _inRemovedInitialEquationLst, _inClassName, _filenamePrefix, _inString11, _functions, _externalFunctionIncludes, _includeDirs, _libs, _libPaths, _program, _simSettingsOpt, _recordDecls, _literals, _args, 0 /* false */, _OMC_LIT100, _OMC_LIT100, tmpMeta11, &tmpMeta7);
          _simCode = tmpMeta12;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 1));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _lastEqMappingIdx = tmp9  /* pattern as ty=Integer */;
          _equationSccMapping = tmpMeta10;

          _simeqCompMapping = omc_HpcOmTaskGraph_setUpHpcOmMapping(threadData, _inBackendDAE, _simCode, _lastEqMappingIdx, _equationSccMapping ,&_sccSimEqMapping ,&_daeSccSimEqMapping);

          omc_ExecStat_execStat(threadData, _OMC_LIT106);

          _taskGraph = omc_HpcOmTaskGraph_createTaskGraph(threadData, _inBackendDAE, 0 /* false */ ,&_taskGraphData);

          _taskGraphDae = arrayCopy(_taskGraph);

          _taskGraphDataDae = omc_HpcOmTaskGraph_copyTaskGraphMeta(threadData, _taskGraphData);

          _taskGraphDae = omc_HpcOmTaskGraph_appendRemovedEquations(threadData, _inBackendDAE, _taskGraphDae, _taskGraphDataDae ,&_taskGraphDataDae);

          tmpMeta13 = stringAppend(_filenamePrefix,_OMC_LIT107);
          _taskGraphDataDae = omc_HpcOmTaskGraph_createCosts(threadData, _inBackendDAE, tmpMeta13, _simeqCompMapping, _taskGraphDataDae);

          _taskGraphData = omc_HpcOmTaskGraph_copyCosts(threadData, _taskGraphDataDae, _taskGraphData);

          _taskGraphOde = arrayCopy(_taskGraph);

          _taskGraphDataOde = omc_HpcOmTaskGraph_copyTaskGraphMeta(threadData, _taskGraphData);

          _taskGraphOde = omc_HpcOmTaskGraph_getOdeSystem(threadData, _taskGraphOde, _taskGraphDataOde, _inBackendDAE ,&_taskGraphDataOde);

          tmpMeta14 = stringAppend(_OMC_LIT24,_filenamePrefix);
          tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT108);
          _fileName = tmpMeta15;

          _schedulerInfo = arrayCreate(arrayLength(_taskGraphOde), _OMC_LIT99);

          tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_HpcOmTaskGraph_dumpAsGraphMLSccLevel(threadData, _taskGraphOde, _taskGraphDataOde, _fileName, _OMC_LIT100, tmpMeta16, tmpMeta17, _daeSccSimEqMapping, _schedulerInfo, _OMC_LIT101);

          _partData = omc_HpcOmTaskGraph_multirate__partitioning(threadData, _taskGraphOde, _taskGraphDataOde, _inBackendDAE, _simCode, _sccSimEqMapping);

          tmpMeta18 = MMC_TAGPTR(mmc_alloc_words(54));
          memcpy(MMC_UNTAGPTR(tmpMeta18), MMC_UNTAGPTR(_simCode), 54*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta18))[49] = _partData;
          _simCode = tmpMeta18;
          tmpMeta1 = _simCode;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta19;
          modelica_boolean tmp20;
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
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_real tmp39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          modelica_real tmp43;
          modelica_metatype tmpMeta44;
          modelica_metatype tmpMeta45;
          modelica_metatype tmpMeta46;
          modelica_metatype tmpMeta47;
          modelica_integer tmp48;
          modelica_metatype tmpMeta49;
          modelica_real tmp50;
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
          tmpMeta19 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _eqs = tmpMeta19;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp20 = omc_Flags_isSet(threadData, _OMC_LIT111);
          if (1 /* true */ != tmp20) goto goto_2;

          omc_System_realtimeTick(threadData, ((modelica_integer) 24));

          /* Pattern-matching tuple assignment */
          tmpMeta25 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta26 = omc_SimCodeUtil_createSimCode(threadData, _inBackendDAE, _inInitDAE, _inInitDAE_lambda0, mmc_mk_none(), _inRemovedInitialEquationLst, _inClassName, _filenamePrefix, _inString11, _functions, _externalFunctionIncludes, _includeDirs, _libs, _libPaths, _program, _simSettingsOpt, _recordDecls, _literals, _args, 0 /* false */, _OMC_LIT100, _OMC_LIT100, tmpMeta25, &tmpMeta21);
          _simCode = tmpMeta26;
          tmpMeta22 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 1));
          tmp23 = mmc_unbox_integer(tmpMeta22);
          tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta21), 2));
          _lastEqMappingIdx = tmp23  /* pattern as ty=Integer */;
          _equationSccMapping = tmpMeta24;

          _simVarMapping = omc_SimCodeUtil_getSimVarMappingOfBackendMapping(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 46))));

          _simeqCompMapping = omc_HpcOmTaskGraph_setUpHpcOmMapping(threadData, _inBackendDAE, _simCode, _lastEqMappingIdx, _equationSccMapping ,&_sccSimEqMapping ,&_daeSccSimEqMapping);

          omc_ExecStat_execStat(threadData, _OMC_LIT106);

          _taskGraph = omc_HpcOmTaskGraph_createTaskGraph(threadData, _inBackendDAE, 0 /* false */ ,&_taskGraphData);

          _taskGraphDae = arrayCopy(_taskGraph);

          _taskGraphDataDae = omc_HpcOmTaskGraph_copyTaskGraphMeta(threadData, _taskGraphData);

          _taskGraphDae = omc_HpcOmTaskGraph_appendRemovedEquations(threadData, _inBackendDAE, _taskGraphDae, _taskGraphDataDae ,&_taskGraphDataDae);

          _schedulerInfo = arrayCreate(arrayLength(_taskGraphDae), _OMC_LIT99);

          omc_ExecStat_execStat(threadData, _OMC_LIT112);

          omc_HpcOmSimCodeMain_checkTaskGraphMetaConsistency(threadData, _taskGraphDae, _taskGraphDataDae, _OMC_LIT113);

          omc_ExecStat_execStat(threadData, _OMC_LIT114);

          tmpMeta27 = stringAppend(_filenamePrefix,_OMC_LIT107);
          _taskGraphDataDae = omc_HpcOmTaskGraph_createCosts(threadData, _inBackendDAE, tmpMeta27, _simeqCompMapping, _taskGraphDataDae);

          _taskGraphData = omc_HpcOmTaskGraph_copyCosts(threadData, _taskGraphDataDae, _taskGraphData);

          omc_ExecStat_execStat(threadData, _OMC_LIT115);

          _taskGraphOde = arrayCopy(_taskGraph);

          _taskGraphDataOde = omc_HpcOmTaskGraph_copyTaskGraphMeta(threadData, _taskGraphData);

          _taskGraphOde = omc_HpcOmTaskGraph_getOdeSystem(threadData, _taskGraphOde, _taskGraphDataOde, _inBackendDAE ,&_taskGraphDataOde);

          omc_ExecStat_execStat(threadData, _OMC_LIT116);

          _taskGraphMetaValid = omc_HpcOmTaskGraph_validateTaskGraphMeta(threadData, _taskGraphDataOde, _inBackendDAE);

          if((!_taskGraphMetaValid))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT117),stdout);
          }

          omc_ExecStat_execStat(threadData, _OMC_LIT118);

          _taskGraphDataDae = omc_HpcOmTaskGraph_markSystemComponents(threadData, _taskGraphOde, _taskGraphDataOde, _OMC_LIT119, _taskGraphDataDae);

          _taskGraphZeroFuncs = arrayCopy(_taskGraphDae);

          _taskGraphDataZeroFuncs = omc_HpcOmTaskGraph_copyTaskGraphMeta(threadData, _taskGraphDataDae);

          _zeroFuncsSimEqIdc = omc_List_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 22))), boxvar_SimCodeUtil_simEqSystemIndex);

          _taskGraphZeroFuncs = omc_HpcOmTaskGraph_getZeroFuncsSystem(threadData, _taskGraphZeroFuncs, _taskGraphDataZeroFuncs, _inBackendDAE, arrayLength(_daeSccSimEqMapping), _zeroFuncsSimEqIdc, _simeqCompMapping ,&_taskGraphDataZeroFuncs);

          tmpMeta28 = stringAppend(_OMC_LIT24,_filenamePrefix);
          tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT120);
          _fileName = tmpMeta29;

          _schedulerInfo = arrayCreate(arrayLength(_taskGraphZeroFuncs), _OMC_LIT99);

          tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta31 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_HpcOmTaskGraph_dumpAsGraphMLSccLevel(threadData, _taskGraphZeroFuncs, _taskGraphDataZeroFuncs, _fileName, _OMC_LIT100, tmpMeta30, tmpMeta31, _daeSccSimEqMapping, _schedulerInfo, _OMC_LIT101);

          omc_ExecStat_execStat(threadData, _OMC_LIT121);

          _taskGraphDataDae = omc_HpcOmTaskGraph_markSystemComponents(threadData, _taskGraphZeroFuncs, _taskGraphDataZeroFuncs, _OMC_LIT122, _taskGraphDataDae);

          omc_HpcOmSimCodeMain_checkTaskGraphMetaConsistency(threadData, _taskGraphZeroFuncs, _taskGraphDataZeroFuncs, _OMC_LIT123);

          omc_HpcOmSimCodeMain_checkEquationCount(threadData, _taskGraphDataZeroFuncs, _OMC_LIT123, listLength(_zeroFuncsSimEqIdc), _sccSimEqMapping);

          tmpMeta32 = stringAppend(_OMC_LIT24,_filenamePrefix);
          tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT124);
          _fileName = tmpMeta33;

          _schedulerInfo = arrayCreate(arrayLength(_taskGraphDae), _OMC_LIT99);

          tmpMeta34 = MMC_REFSTRUCTLIT(mmc_nil);
          tmpMeta35 = MMC_REFSTRUCTLIT(mmc_nil);
          omc_HpcOmTaskGraph_dumpAsGraphMLSccLevel(threadData, _taskGraphDae, _taskGraphDataDae, _fileName, _OMC_LIT100, tmpMeta34, tmpMeta35, _daeSccSimEqMapping, _schedulerInfo, _OMC_LIT101);

          omc_ExecStat_execStat(threadData, _OMC_LIT125);

          /* Pattern-matching tuple assignment */
          tmpMeta40 = omc_HpcOmTaskGraph_getCriticalPaths(threadData, _taskGraphOde, _taskGraphDataOde, &tmpMeta36);
          tmpMeta41 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 1));
          tmpMeta42 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta40), 2));
          tmp43 = mmc_unbox_real(tmpMeta42);
          _criticalPaths = tmpMeta41;
          _cpCosts = tmp43  /* pattern as ty=Real */;
          tmpMeta37 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 1));
          tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta36), 2));
          tmp39 = mmc_unbox_real(tmpMeta38);
          _criticalPathsWoC = tmpMeta37;
          _cpCostsWoC = tmp39  /* pattern as ty=Real */;

          tmpMeta44 = mmc_mk_box2(0, _criticalPaths, mmc_mk_real(_cpCosts));
          tmpMeta45 = mmc_mk_box2(0, _criticalPathsWoC, mmc_mk_real(_cpCostsWoC));
          _criticalPathInfo = omc_HpcOmTaskGraph_dumpCriticalPathInfo(threadData, tmpMeta44, tmpMeta45);

          /* Pattern-matching assignment */
          tmpMeta46 = omc_HpcOmTaskGraph_sumUpExeCosts(threadData, _taskGraphOde, _taskGraphDataOde);
          tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 1));
          tmp48 = mmc_unbox_integer(tmpMeta47);
          tmpMeta49 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta46), 2));
          tmp50 = mmc_unbox_real(tmpMeta49);
          _graphOps = tmp48  /* pattern as ty=Integer */;
          _graphCosts = tmp50  /* pattern as ty=Real */;

          _graphCosts = omc_HpcOmTaskGraph_roundReal(threadData, _graphCosts, ((modelica_integer) 2));

          tmpMeta51 = stringAppend(_criticalPathInfo,_OMC_LIT126);
          tmpMeta52 = stringAppend(tmpMeta51,realString(_graphCosts));
          tmpMeta53 = stringAppend(tmpMeta52,_OMC_LIT127);
          tmpMeta54 = stringAppend(tmpMeta53,intString(_graphOps));
          tmpMeta55 = stringAppend(tmpMeta54,_OMC_LIT128);
          _criticalPathInfo = tmpMeta55;

          tmpMeta56 = stringAppend(_OMC_LIT24,_filenamePrefix);
          tmpMeta57 = stringAppend(tmpMeta56,_OMC_LIT129);
          _fileName = tmpMeta57;

          _schedulerInfo = arrayCreate(arrayLength(_taskGraphOde), _OMC_LIT99);

          omc_ExecStat_execStat(threadData, _OMC_LIT130);

          omc_HpcOmTaskGraph_dumpAsGraphMLSccLevel(threadData, _taskGraphOde, _taskGraphDataOde, _fileName, _criticalPathInfo, omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_criticalPaths)), omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_criticalPathsWoC)), _sccSimEqMapping, _schedulerInfo, _OMC_LIT131);

          omc_ExecStat_execStat(threadData, _OMC_LIT132);

          if(omc_Flags_isSet(threadData, _OMC_LIT96))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT133),stdout);
          }

          tmpMeta58 = MMC_REFSTRUCTLIT(mmc_nil);
          _scheduledTasksDae = tmpMeta58;

          _scheduledTasksOde = omc_HpcOmEqSystems_parallelizeTornSystems(threadData, _taskGraphOde, _taskGraphDataOde, _sccSimEqMapping, _simVarMapping, _inBackendDAE, NULL);

          tmpMeta59 = MMC_REFSTRUCTLIT(mmc_nil);
          _scheduledTasksZeroFunc = tmpMeta59;

          _taskGraphDaeSimplified = omc_HpcOmSimCodeMain_applyGRS(threadData, _taskGraphDae, _taskGraphDataDae ,&_taskGraphDataDaeSimplified);

          _taskGraphOdeSimplified = omc_HpcOmSimCodeMain_applyGRS(threadData, _taskGraphOde, _taskGraphDataOde ,&_taskGraphDataOdeSimplified);

          _taskGraphZeroFuncSimplified = omc_HpcOmSimCodeMain_applyGRS(threadData, _taskGraphZeroFuncs, _taskGraphDataZeroFuncs ,&_taskGraphDataZeroFuncSimplified);

          omc_ExecStat_execStat(threadData, _OMC_LIT134);

          tmpMeta60 = stringAppend(_OMC_LIT24,_filenamePrefix);
          tmpMeta61 = stringAppend(tmpMeta60,_OMC_LIT135);
          _fileName = tmpMeta61;

          omc_HpcOmTaskGraph_dumpAsGraphMLSccLevel(threadData, _taskGraphOdeSimplified, _taskGraphDataOdeSimplified, _fileName, _criticalPathInfo, omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_criticalPaths)), omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_criticalPathsWoC)), _sccSimEqMapping, _schedulerInfo, _OMC_LIT131);

          omc_ExecStat_execStat(threadData, _OMC_LIT136);

          if(omc_Flags_isSet(threadData, _OMC_LIT96))
          {
            tmpMeta62 = stringAppend(_OMC_LIT137,intString(arrayLength(_taskGraphOde) - arrayLength(_taskGraphOdeSimplified)));
            tmpMeta63 = stringAppend(tmpMeta62,_OMC_LIT138);
            fputs(MMC_STRINGDATA(tmpMeta63),stdout);
          }

          _numProc = omc_Flags_getConfigInt(threadData, _OMC_LIT92);

          _numProc = omc_HpcOmSimCodeMain_setNumProc(threadData, _numProc, _cpCostsWoC, _taskGraphDataOde, NULL);

          _scheduleDae = omc_HpcOmSimCodeMain_createSchedule(threadData, _taskGraphDaeSimplified, _taskGraphDataDaeSimplified, _daeSccSimEqMapping, _simVarMapping, _filenamePrefix, _numProc, _numProc, _simCode, _scheduledTasksDae, _OMC_LIT113, omc_Flags_getConfigString(threadData, _OMC_LIT81) ,&_simCode ,NULL ,NULL ,&_sccSimEqMapping);

          _scheduleOde = omc_HpcOmSimCodeMain_createSchedule(threadData, _taskGraphOdeSimplified, _taskGraphDataOdeSimplified, _sccSimEqMapping, _simVarMapping, _filenamePrefix, _numProc, _numProc, _simCode, _scheduledTasksOde, _OMC_LIT139, omc_Flags_getConfigString(threadData, _OMC_LIT81) ,&_simCode ,&_taskGraphOdeScheduled ,&_taskGraphDataOdeScheduled ,&_sccSimEqMapping);

          _scheduleZeroFunc = omc_HpcOmSimCodeMain_createSchedule(threadData, _taskGraphZeroFuncSimplified, _taskGraphDataZeroFuncSimplified, _daeSccSimEqMapping, _simVarMapping, _filenamePrefix, _numProc, _numProc, _simCode, _scheduledTasksZeroFunc, _OMC_LIT123, omc_Flags_getConfigString(threadData, _OMC_LIT81) ,&_simCode ,NULL ,NULL ,&_sccSimEqMapping);

          _numProc = omc_Flags_getConfigInt(threadData, _OMC_LIT92);

          _criticalPathInfo = omc_HpcOmScheduler_analyseScheduledTaskGraph(threadData, _scheduleOde, _numProc, _taskGraphOdeScheduled, _taskGraphDataOdeScheduled, _OMC_LIT139);

          _schedulerInfo = omc_HpcOmScheduler_convertScheduleStrucToInfo(threadData, _scheduleOde, arrayLength(_taskGraphOdeScheduled));

          omc_ExecStat_execStat(threadData, _OMC_LIT140);

          tmpMeta64 = stringAppend(_OMC_LIT24,_filenamePrefix);
          tmpMeta65 = stringAppend(tmpMeta64,_OMC_LIT141);
          _fileName = tmpMeta65;

          omc_HpcOmTaskGraph_dumpAsGraphMLSccLevel(threadData, _taskGraphOdeScheduled, _taskGraphDataOdeScheduled, _fileName, _criticalPathInfo, omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_criticalPaths)), omc_HpcOmTaskGraph_convertNodeListToEdgeTuples(threadData, listHead(_criticalPathsWoC)), _sccSimEqMapping, _schedulerInfo, _OMC_LIT131);

          omc_ExecStat_execStat(threadData, _OMC_LIT142);

          if(omc_Flags_isSet(threadData, _OMC_LIT96))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT143),stdout);
          }

          omc_System_realtimeTick(threadData, ((modelica_integer) 24));

          omc_HpcOmSimCodeMain_checkOdeSystemSize(threadData, _taskGraphDataOdeScheduled, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 9))), _sccSimEqMapping);

          omc_ExecStat_execStat(threadData, _OMC_LIT144);

          _optTmpMemoryMap = omc_HpcOmMemory_createMemoryMap(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 42))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_simCode), 43))), _taskGraphOdeSimplified, omc_AdjacencyMatrix_transposeAdjacencyMatrix(threadData, _taskGraphOdeSimplified, arrayLength(_taskGraphOdeSimplified)), _taskGraphDataOdeSimplified, _eqs, _filenamePrefix, _schedulerInfo, _scheduleOde, _sccSimEqMapping, _criticalPaths, _criticalPathsWoC, _criticalPathInfo, _numProc, omc_HpcOmTaskGraph_getSystemComponents(threadData, _inBackendDAE, NULL), omc_BackendDAEUtil_isInitializationDAE(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inBackendDAE), 3)))) ,&_varToArrayIndexMapping ,&_varToIndexMapping);

          omc_ExecStat_execStat(threadData, _OMC_LIT145);

          tmpMeta66 = MMC_TAGPTR(mmc_alloc_words(54));
          memcpy(MMC_UNTAGPTR(tmpMeta66), MMC_UNTAGPTR(_simCode), 54*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta66))[42] = _varToArrayIndexMapping;
          _simCode = tmpMeta66;

          tmpMeta67 = MMC_TAGPTR(mmc_alloc_words(54));
          memcpy(MMC_UNTAGPTR(tmpMeta67), MMC_UNTAGPTR(_simCode), 54*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta67))[43] = _varToIndexMapping;
          _simCode = tmpMeta67;

          tmpMeta69 = mmc_mk_box3(0, _scheduleOde, _scheduleDae, _scheduleZeroFunc);
          tmpMeta70 = mmc_mk_box3(3, &HpcOmSimCode_HpcOmData_HPCOMDATA__desc, mmc_mk_some(tmpMeta69), _optTmpMemoryMap);
          tmpMeta68 = MMC_TAGPTR(mmc_alloc_words(54));
          memcpy(MMC_UNTAGPTR(tmpMeta68), MMC_UNTAGPTR(_simCode), 54*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta68))[40] = tmpMeta70;
          _simCode = tmpMeta68;

          omc_ExecStat_execStat(threadData, _OMC_LIT146);

          fputs(MMC_STRINGDATA(_OMC_LIT147),stdout);
          tmpMeta1 = _simCode;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT151, _OMC_LIT153);
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
  _simCode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _simCode;
}

