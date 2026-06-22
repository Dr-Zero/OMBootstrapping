#include "omc_simulation_settings.h"
#include "Main.h"
#define _OMC_LIT0_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,1,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "interactive"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,11,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,4,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "do nothing"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,10,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,0) {_OMC_LIT3,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "corba"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,5,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "Starts omc as a server listening on the Corba interface."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,56,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT9,2,0) {_OMC_LIT7,_OMC_LIT8}};
#define _OMC_LIT9 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "tcp"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,3,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data "Starts omc as a server listening on the socket interface."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,57,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,2,0) {_OMC_LIT10,_OMC_LIT11}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "zmq"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,3,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "Starts omc as a ZeroMQ server listening on the socket interface."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,64,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,2,0) {_OMC_LIT13,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT16,2,1) {_OMC_LIT15,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT16 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT16)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT17,2,1) {_OMC_LIT12,_OMC_LIT16}};
#define _OMC_LIT17 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,1) {_OMC_LIT9,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,2,1) {_OMC_LIT6,_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT19}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,1,1) {_OMC_LIT20}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
#define _OMC_LIT22_data "Sets the interactive mode for omc."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT22,34,_OMC_LIT22_data);
#define _OMC_LIT22 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(106)),_OMC_LIT1,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT2,_OMC_LIT4,_OMC_LIT21,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT24,1,8) {&ErrorTypes_MessageType_SCRIPTING__desc,}};
#define _OMC_LIT24 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT24)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT25,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT25 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "You are trying to run OpenModelica as a server using the root user.\nThis is a very bad idea:\n* The socket interface does not authenticate the user.\n* OpenModelica allows execution of arbitrary commands."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,202,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(557)),_OMC_LIT24,_OMC_LIT25,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,0,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "# Error encountered! Exiting...\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,32,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "# Please check the error message and the flags.\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,48,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "\n\n----\n\nError buffer:\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,23,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "Error: Failed to retrieve the installation directory path!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,59,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "GC stats after initialization:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,30,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "\n  "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,3,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "gcProfiling"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,11,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "Prints garbage collection stats to standard output."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,51,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),_OMC_LIT35,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT36}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
#define _OMC_LIT38_data "alarm"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT38,5,_OMC_LIT38_data);
#define _OMC_LIT38 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "r"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,1,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,1,1) {_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,2,5) {&Flags_FlagData_INT__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "Sets the number seconds until omc timeouts and exits. Used by the testing framework to terminate infinite running processes."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,124,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(93)),_OMC_LIT38,_OMC_LIT40,_OMC_LIT2,_OMC_LIT41,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
#define _OMC_LIT44_data "GC stats at end of program:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT44,27,_OMC_LIT44_data);
#define _OMC_LIT44 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,154,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
#define _OMC_LIT46_data "G_SLICE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT46,7,_OMC_LIT46_data);
#define _OMC_LIT46 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "always-malloc"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,13,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "CC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,2,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "OPENMODELICAHOME"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,16,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "OMDEV"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,5,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "\\tools\\msys"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,11,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data "\\usr\\bin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,8,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "\\"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,1,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data "\\bin"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,4,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "\\lib\\gcc\\"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,9,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data "gcc"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,3,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "We could not find some needed MINGW paths in $OPENMODELICAHOME or $OMDEV. Searched for paths:\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,94,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,1,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data " [found] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,9,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data " [not found] "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,13,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "disableWindowsPathCheckWarning"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,30,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "Disables warnings on Windows if OPENMODELICAHOME/MinGW is missing."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,66,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT63,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(96)),_OMC_LIT61,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT62}};
#define _OMC_LIT63 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "PATH"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,4,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "\\bin;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,5,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "\\lib;"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,5,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data ";"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,1,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,1,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "runScript(\""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,11,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "\")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,2,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "-s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,2,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
#define _OMC_LIT72_data " \""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT72,2,_OMC_LIT72_data);
#define _OMC_LIT72 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "quit requested, shutting server down\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,37,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "zeroMQFileSuffix"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,16,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
#define _OMC_LIT75_data "z"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT75,1,_OMC_LIT75_data);
#define _OMC_LIT75 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,1,1) {_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT77,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT28}};
#define _OMC_LIT77 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "Sets the file suffix for zeroMQ port file if --interactive=zmq is used."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,71,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(107)),_OMC_LIT74,_OMC_LIT76,_OMC_LIT2,_OMC_LIT77,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT78}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,1,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "zmqDangerousAcceptConnectionsFromAnywhere"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,41,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "When opening a zmq connection, listen on all interfaces instead of only connections from 127.0.0.1."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,99,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(184)),_OMC_LIT81,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "interactivePort"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,15,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "Sets the port used by the interactive server."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,45,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(142)),_OMC_LIT84,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT2,_OMC_LIT41,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT85}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,1,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "------- Recieved Data from client -----\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,40,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "------- End recieved Data-----\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,31,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "interactivedump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,15,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "Prints out debug information for the interactive server."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,56,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT92,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(36)),_OMC_LIT90,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT91}};
#define _OMC_LIT92 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "Failed to initialize Corba! Is another OMC already running?\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,60,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "Exiting!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,9,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "cmd"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,3,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
#define _OMC_LIT96_data "Executes the string argument as a script before any other operation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT96,68,_OMC_LIT96_data);
#define _OMC_LIT96 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT96)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT97,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(162)),_OMC_LIT95,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT2,_OMC_LIT77,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT96}};
#define _OMC_LIT97 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "<interactive>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,13,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "\n--------------- Parsed program ---------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,48,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT100,2,3) {&Dump_DumpOptions_DUMPOPTIONS__desc,_OMC_LIT28}};
#define _OMC_LIT100 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT100)
#define _OMC_LIT101_data "dump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT101,4,_OMC_LIT101_data);
#define _OMC_LIT101 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT101)
#define _OMC_LIT102_data "Dumps the absyn representation of a program."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT102,44,_OMC_LIT102_data);
#define _OMC_LIT102 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT102)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT103,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(29)),_OMC_LIT101,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT102}};
#define _OMC_LIT103 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT103)
#define _OMC_LIT104_data "\n--------------- Julia representation of the parsed program ---------------\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT104,76,_OMC_LIT104_data);
#define _OMC_LIT104 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT104)
#define _OMC_LIT105_data "dumpJL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT105,6,_OMC_LIT105_data);
#define _OMC_LIT105 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT105)
#define _OMC_LIT106_data "Dumps the absyn representation of a program as a Julia representation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT106,69,_OMC_LIT106_data);
#define _OMC_LIT106 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT106)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT107,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(177)),_OMC_LIT105,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT106}};
#define _OMC_LIT107 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT107)
#define _OMC_LIT108_data "graphviz"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT108,8,_OMC_LIT108_data);
#define _OMC_LIT108 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT108)
#define _OMC_LIT109_data "Dumps the absyn representation of a program in graphviz format."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT109,63,_OMC_LIT109_data);
#define _OMC_LIT109 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT109)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT110,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(30)),_OMC_LIT108,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT109}};
#define _OMC_LIT110 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT110)
#define _OMC_LIT111_data "Parsed file"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT111,11,_OMC_LIT111_data);
#define _OMC_LIT111 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT111)
#define _OMC_LIT112_data "_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT112,1,_OMC_LIT112_data);
#define _OMC_LIT112 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT112)
#define _OMC_LIT113_data "File does not exist: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT113,21,_OMC_LIT113_data);
#define _OMC_LIT113 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT113)
#define _OMC_LIT114_data "Error processing file: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT114,23,_OMC_LIT114_data);
#define _OMC_LIT114 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT114)
#define _OMC_LIT115_data "UTF-8"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT115,5,_OMC_LIT115_data);
#define _OMC_LIT115 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT115)
#define _OMC_LIT116_data "command-line argument"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT116,21,_OMC_LIT116_data);
#define _OMC_LIT116 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT116)
#define _OMC_LIT117_data "default"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT117,7,_OMC_LIT117_data);
#define _OMC_LIT117 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT117)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT118,2,1) {_OMC_LIT117,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT118 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT118)
#define _OMC_LIT119_data "Failed to load library: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT119,24,_OMC_LIT119_data);
#define _OMC_LIT119 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT119)
#define _OMC_LIT120_data "!\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT120,2,_OMC_LIT120_data);
#define _OMC_LIT120 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT120)
#define _OMC_LIT121_data "Failed to parse file: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT121,22,_OMC_LIT121_data);
#define _OMC_LIT121 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT121)
#define _OMC_LIT122_data "tpl"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT122,3,_OMC_LIT122_data);
#define _OMC_LIT122 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT122)
#define _OMC_LIT123_data "mos"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT123,3,_OMC_LIT123_data);
#define _OMC_LIT123 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT123)
#define _OMC_LIT124_data "mof"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT124,3,_OMC_LIT124_data);
#define _OMC_LIT124 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT124)
#define _OMC_LIT125_data "mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT125,2,_OMC_LIT125_data);
#define _OMC_LIT125 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT125)
#define _OMC_LIT126_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT126,1,_OMC_LIT126_data);
#define _OMC_LIT126 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT126)
#define _OMC_LIT127_data ","
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT127,1,_OMC_LIT127_data);
#define _OMC_LIT127 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT127)
#define _OMC_LIT128_data "}\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT128,2,_OMC_LIT128_data);
#define _OMC_LIT128 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT128)
#define _OMC_LIT129_data "Error occurred building AST\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT129,28,_OMC_LIT129_data);
#define _OMC_LIT129 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT129)
#define _OMC_LIT130_data "Syntax Error\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT130,13,_OMC_LIT130_data);
#define _OMC_LIT130 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT130)
#define _OMC_LIT131_data "Stack overflow occurred while evaluating %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT131,44,_OMC_LIT131_data);
#define _OMC_LIT131 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT131)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT132,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(205)),_OMC_LIT24,_OMC_LIT25,_OMC_LIT131}};
#define _OMC_LIT132 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT132)
#define _OMC_LIT133_data "Ok\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT133,3,_OMC_LIT133_data);
#define _OMC_LIT133 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT133)
#define _OMC_LIT134_data "quit()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT134,6,_OMC_LIT134_data);
#define _OMC_LIT134 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT134)
#define _OMC_LIT135_data "parsestring"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT135,11,_OMC_LIT135_data);
#define _OMC_LIT135 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT135)
#define _OMC_LIT136_data "std"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT136,3,_OMC_LIT136_data);
#define _OMC_LIT136 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT136)
#define _OMC_LIT137_data "1.x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT137,3,_OMC_LIT137_data);
#define _OMC_LIT137 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT137)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT138,2,0) {_OMC_LIT137,MMC_IMMEDIATE(MMC_TAGFIXNUM(10))}};
#define _OMC_LIT138 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT138)
#define _OMC_LIT139_data "2.x"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT139,3,_OMC_LIT139_data);
#define _OMC_LIT139 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT139)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT140,2,0) {_OMC_LIT139,MMC_IMMEDIATE(MMC_TAGFIXNUM(20))}};
#define _OMC_LIT140 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT140)
#define _OMC_LIT141_data "3.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT141,3,_OMC_LIT141_data);
#define _OMC_LIT141 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT141)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT142,2,0) {_OMC_LIT141,MMC_IMMEDIATE(MMC_TAGFIXNUM(30))}};
#define _OMC_LIT142 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT142)
#define _OMC_LIT143_data "3.1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT143,3,_OMC_LIT143_data);
#define _OMC_LIT143 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT143)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT144,2,0) {_OMC_LIT143,MMC_IMMEDIATE(MMC_TAGFIXNUM(31))}};
#define _OMC_LIT144 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT144)
#define _OMC_LIT145_data "3.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT145,3,_OMC_LIT145_data);
#define _OMC_LIT145 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT145)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT146,2,0) {_OMC_LIT145,MMC_IMMEDIATE(MMC_TAGFIXNUM(32))}};
#define _OMC_LIT146 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT146)
#define _OMC_LIT147_data "3.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT147,3,_OMC_LIT147_data);
#define _OMC_LIT147 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT147)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT148,2,0) {_OMC_LIT147,MMC_IMMEDIATE(MMC_TAGFIXNUM(33))}};
#define _OMC_LIT148 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT148)
#define _OMC_LIT149_data "3.4"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT149,3,_OMC_LIT149_data);
#define _OMC_LIT149 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT149)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT150,2,0) {_OMC_LIT149,MMC_IMMEDIATE(MMC_TAGFIXNUM(34))}};
#define _OMC_LIT150 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT150)
#define _OMC_LIT151_data "3.5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT151,3,_OMC_LIT151_data);
#define _OMC_LIT151 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT151)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT152,2,0) {_OMC_LIT151,MMC_IMMEDIATE(MMC_TAGFIXNUM(35))}};
#define _OMC_LIT152 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT152)
#define _OMC_LIT153_data "3.6"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT153,3,_OMC_LIT153_data);
#define _OMC_LIT153 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT153)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT154,2,0) {_OMC_LIT153,MMC_IMMEDIATE(MMC_TAGFIXNUM(36))}};
#define _OMC_LIT154 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT154)
#define _OMC_LIT155_data "latest"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT155,6,_OMC_LIT155_data);
#define _OMC_LIT155 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT155)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT156,2,0) {_OMC_LIT155,MMC_IMMEDIATE(MMC_TAGFIXNUM(1000))}};
#define _OMC_LIT156 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT156)
#define _OMC_LIT157_data "experimental"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT157,12,_OMC_LIT157_data);
#define _OMC_LIT157 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT157)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT158,2,0) {_OMC_LIT157,MMC_IMMEDIATE(MMC_TAGFIXNUM(9999))}};
#define _OMC_LIT158 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT158)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT159,2,1) {_OMC_LIT158,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT159 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT159)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT160,2,1) {_OMC_LIT156,_OMC_LIT159}};
#define _OMC_LIT160 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT160)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT161,2,1) {_OMC_LIT154,_OMC_LIT160}};
#define _OMC_LIT161 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT161)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT162,2,1) {_OMC_LIT152,_OMC_LIT161}};
#define _OMC_LIT162 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT162)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT163,2,1) {_OMC_LIT150,_OMC_LIT162}};
#define _OMC_LIT163 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT163)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT164,2,1) {_OMC_LIT148,_OMC_LIT163}};
#define _OMC_LIT164 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT164)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT165,2,1) {_OMC_LIT146,_OMC_LIT164}};
#define _OMC_LIT165 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT165)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT166,2,1) {_OMC_LIT144,_OMC_LIT165}};
#define _OMC_LIT166 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT166)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT167,2,1) {_OMC_LIT142,_OMC_LIT166}};
#define _OMC_LIT167 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT167)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT168,2,1) {_OMC_LIT140,_OMC_LIT167}};
#define _OMC_LIT168 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT168)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT169,2,1) {_OMC_LIT138,_OMC_LIT168}};
#define _OMC_LIT169 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT169)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT170,3,10) {&Flags_FlagData_ENUM__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(1000)),_OMC_LIT169}};
#define _OMC_LIT170 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT170)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT171,2,1) {_OMC_LIT157,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT171 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT171)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT172,2,1) {_OMC_LIT155,_OMC_LIT171}};
#define _OMC_LIT172 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT172)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT173,2,1) {_OMC_LIT153,_OMC_LIT172}};
#define _OMC_LIT173 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT173)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT174,2,1) {_OMC_LIT151,_OMC_LIT173}};
#define _OMC_LIT174 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT174)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT175,2,1) {_OMC_LIT149,_OMC_LIT174}};
#define _OMC_LIT175 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT175)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT176,2,1) {_OMC_LIT147,_OMC_LIT175}};
#define _OMC_LIT176 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT176)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT177,2,1) {_OMC_LIT145,_OMC_LIT176}};
#define _OMC_LIT177 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT177)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT178,2,1) {_OMC_LIT143,_OMC_LIT177}};
#define _OMC_LIT178 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT178)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT179,2,1) {_OMC_LIT139,_OMC_LIT178}};
#define _OMC_LIT179 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT179)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT180,2,1) {_OMC_LIT137,_OMC_LIT179}};
#define _OMC_LIT180 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT180)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT181,2,3) {&Flags_ValidOptions_STRING__OPTION__desc,_OMC_LIT180}};
#define _OMC_LIT181 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT181)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT182,1,1) {_OMC_LIT181}};
#define _OMC_LIT182 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT182)
#define _OMC_LIT183_data "Sets the language standard that should be used."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT183,47,_OMC_LIT183_data);
#define _OMC_LIT183 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT183)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT184,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(8)),_OMC_LIT136,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT2,_OMC_LIT170,_OMC_LIT182,_OMC_LIT183}};
#define _OMC_LIT184 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT184)
#define _OMC_LIT185_data "strict"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT185,6,_OMC_LIT185_data);
#define _OMC_LIT185 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT185)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT186,2,4) {&Flags_FlagData_BOOL__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */))}};
#define _OMC_LIT186 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT186)
#define _OMC_LIT187_data "Enables stricter enforcement of Modelica language rules."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT187,56,_OMC_LIT187_data);
#define _OMC_LIT187 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT187)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT188,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(44)),_OMC_LIT185,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT2,_OMC_LIT186,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT187}};
#define _OMC_LIT188 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT188)
#define _OMC_LIT189_data "\n---DEBUG("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT189,10,_OMC_LIT189_data);
#define _OMC_LIT189 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT189)
#define _OMC_LIT190_data ")---\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT190,5,_OMC_LIT190_data);
#define _OMC_LIT190 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT190)
#define _OMC_LIT191_data "\n---/DEBUG("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT191,11,_OMC_LIT191_data);
#define _OMC_LIT191 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT191)
#include "util/modelica.h"

#include "Main_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_Main_main2(threadData_t *threadData, modelica_metatype _args);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_main2,2,0) {(void*) boxptr_Main_main2,0}};
#define boxvar_Main_main2 MMC_REFSTRUCTLIT(boxvar_lit_Main_main2)
PROTECTED_FUNCTION_STATIC void omc_Main_setDefaultCC(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_setDefaultCC,2,0) {(void*) boxptr_Main_setDefaultCC,0}};
#define boxvar_Main_setDefaultCC MMC_REFSTRUCTLIT(boxvar_lit_Main_setDefaultCC)
PROTECTED_FUNCTION_STATIC void omc_Main_readSettingsFile(threadData_t *threadData, modelica_string _filePath);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_readSettingsFile,2,0) {(void*) boxptr_Main_readSettingsFile,0}};
#define boxvar_Main_readSettingsFile MMC_REFSTRUCTLIT(boxvar_lit_Main_readSettingsFile)
PROTECTED_FUNCTION_STATIC void omc_Main_serverLoopCorba(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_serverLoopCorba,2,0) {(void*) boxptr_Main_serverLoopCorba,0}};
#define boxvar_Main_serverLoopCorba MMC_REFSTRUCTLIT(boxvar_lit_Main_serverLoopCorba)
PROTECTED_FUNCTION_STATIC void omc_Main_interactivemodeZMQ(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_interactivemodeZMQ,2,0) {(void*) boxptr_Main_interactivemodeZMQ,0}};
#define boxvar_Main_interactivemodeZMQ MMC_REFSTRUCTLIT(boxvar_lit_Main_interactivemodeZMQ)
PROTECTED_FUNCTION_STATIC void omc_Main_interactivemodeCorba(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_interactivemodeCorba,2,0) {(void*) boxptr_Main_interactivemodeCorba,0}};
#define boxvar_Main_interactivemodeCorba MMC_REFSTRUCTLIT(boxvar_lit_Main_interactivemodeCorba)
PROTECTED_FUNCTION_STATIC void omc_Main_interactivemode(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_interactivemode,2,0) {(void*) boxptr_Main_interactivemode,0}};
#define boxvar_Main_interactivemode MMC_REFSTRUCTLIT(boxvar_lit_Main_interactivemode)
PROTECTED_FUNCTION_STATIC void omc_Main_translateFile(threadData_t *threadData, modelica_metatype _inStringLst);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_translateFile,2,0) {(void*) boxptr_Main_translateFile,0}};
#define boxvar_Main_translateFile MMC_REFSTRUCTLIT(boxvar_lit_Main_translateFile)
PROTECTED_FUNCTION_STATIC void omc_Main_loadLib(threadData_t *threadData, modelica_string _inLib);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_loadLib,2,0) {(void*) boxptr_Main_loadLib,0}};
#define boxvar_Main_loadLib MMC_REFSTRUCTLIT(boxvar_lit_Main_loadLib)
PROTECTED_FUNCTION_STATIC void omc_Main_showErrors(threadData_t *threadData, modelica_string _errorString, modelica_string _errorMessages);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_showErrors,2,0) {(void*) boxptr_Main_showErrors,0}};
#define boxvar_Main_showErrors MMC_REFSTRUCTLIT(boxvar_lit_Main_showErrors)
PROTECTED_FUNCTION_STATIC void omc_Main_isCodegenTemplateFile(threadData_t *threadData, modelica_string _filename);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_isCodegenTemplateFile,2,0) {(void*) boxptr_Main_isCodegenTemplateFile,0}};
#define boxvar_Main_isCodegenTemplateFile MMC_REFSTRUCTLIT(boxvar_lit_Main_isCodegenTemplateFile)
PROTECTED_FUNCTION_STATIC void omc_Main_isModelicaScriptFile(threadData_t *threadData, modelica_string _filename);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_isModelicaScriptFile,2,0) {(void*) boxptr_Main_isModelicaScriptFile,0}};
#define boxvar_Main_isModelicaScriptFile MMC_REFSTRUCTLIT(boxvar_lit_Main_isModelicaScriptFile)
PROTECTED_FUNCTION_STATIC void omc_Main_isFlatModelicaFile(threadData_t *threadData, modelica_string _filename);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_isFlatModelicaFile,2,0) {(void*) boxptr_Main_isFlatModelicaFile,0}};
#define boxvar_Main_isFlatModelicaFile MMC_REFSTRUCTLIT(boxvar_lit_Main_isFlatModelicaFile)
PROTECTED_FUNCTION_STATIC void omc_Main_isEmptyOrFirstIsModelicaFile(threadData_t *threadData, modelica_metatype _libs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_isEmptyOrFirstIsModelicaFile,2,0) {(void*) boxptr_Main_isEmptyOrFirstIsModelicaFile,0}};
#define boxvar_Main_isEmptyOrFirstIsModelicaFile MMC_REFSTRUCTLIT(boxvar_lit_Main_isEmptyOrFirstIsModelicaFile)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_Main_isModelicaFile(threadData_t *threadData, modelica_string _inFilename);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Main_isModelicaFile(threadData_t *threadData, modelica_metatype _inFilename);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_isModelicaFile,2,0) {(void*) boxptr_Main_isModelicaFile,0}};
#define boxvar_Main_isModelicaFile MMC_REFSTRUCTLIT(boxvar_lit_Main_isModelicaFile)
PROTECTED_FUNCTION_STATIC modelica_string omc_Main_makeClassDefResult(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_makeClassDefResult,2,0) {(void*) boxptr_Main_makeClassDefResult,0}};
#define boxvar_Main_makeClassDefResult MMC_REFSTRUCTLIT(boxvar_lit_Main_makeClassDefResult)
PROTECTED_FUNCTION_STATIC modelica_string omc_Main_handleCommand2(threadData_t *threadData, modelica_metatype _inStatements, modelica_metatype _inProgram, modelica_string _inCommand);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_handleCommand2,2,0) {(void*) boxptr_Main_handleCommand2,0}};
#define boxvar_Main_handleCommand2 MMC_REFSTRUCTLIT(boxvar_lit_Main_handleCommand2)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_Main_parseCommand(threadData_t *threadData, modelica_string _inCommand, modelica_metatype *out_outProgram);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_parseCommand,2,0) {(void*) boxptr_Main_parseCommand,0}};
#define boxvar_Main_parseCommand MMC_REFSTRUCTLIT(boxvar_lit_Main_parseCommand)
PROTECTED_FUNCTION_STATIC modelica_string omc_Main_makeDebugResult(threadData_t *threadData, modelica_metatype _inFlag, modelica_string _res);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Main_makeDebugResult,2,0) {(void*) boxptr_Main_makeDebugResult,0}};
#define boxvar_Main_makeDebugResult MMC_REFSTRUCTLIT(boxvar_lit_Main_makeDebugResult)

PROTECTED_FUNCTION_STATIC void omc_Main_main2(threadData_t *threadData, modelica_metatype _args)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_string _interactiveMode = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _interactiveMode has no default value.
  if(omc_Config_versionRequest(threadData))
  {
    tmpMeta1 = stringAppend(omc_Settings_getVersionNr(threadData),_OMC_LIT0);
    fputs(MMC_STRINGDATA(tmpMeta1),stdout);

    goto _return;
  }

  _interactiveMode = omc_Flags_getConfigString(threadData, _OMC_LIT23);

  if((omc_System_userIsRoot(threadData) && (((stringEqual(_interactiveMode, _OMC_LIT7)) || (stringEqual(_interactiveMode, _OMC_LIT10))) || (stringEqual(_interactiveMode, _OMC_LIT13)))))
  {
    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    omc_Error_addMessage(threadData, _OMC_LIT27, tmpMeta2);

    fputs(MMC_STRINGDATA(omc_ErrorExt_printMessagesStr(threadData, 0 /* false */)),stdout);

    MMC_THROW_INTERNAL();
  }

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp5;
      int tmp6;
      tmp5 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp4_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          /* Pattern matching succeeded */
          omc_Settings_getInstallationDirectoryPath(threadData);

          omc_Main_readSettings(threadData, _args);

          if((stringEqual(_interactiveMode, _OMC_LIT10)))
          {
            omc_Main_interactivemode(threadData);
          }
          else
          {
            if((stringEqual(_interactiveMode, _OMC_LIT7)))
            {
              omc_Main_interactivemodeCorba(threadData);
            }
            else
            {
              if((stringEqual(_interactiveMode, _OMC_LIT13)))
              {
                omc_Main_interactivemodeZMQ(threadData);
              }
              else
              {
                omc_Main_translateFile(threadData, _args);
              }
            }
          }
          goto tmp4_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          if((listEmpty(_args) && (stringEqual(omc_Config_classToInstantiate(threadData), _OMC_LIT28))))
          {
            if((!omc_Config_helpRequest(threadData)))
            {
              fputs(MMC_STRINGDATA(omc_FlagsUtil_printUsage(threadData)),stdout);

              omc_System_fflush(threadData);
            }

            goto _return;
          }

          { /* matchcontinue expression */
            {
              volatile mmc_switch_type tmp9;
              int tmp10;
              tmp9 = 0;
              MMC_TRY_INTERNAL(mmc_jumper)
              tmp8_top:
              threadData->mmc_jumper = &new_mmc_jumper;
              for (; tmp9 < 2; tmp9++) {
                switch (MMC_SWITCH_CAST(tmp9)) {
                case 0: {
                  /* Pattern matching succeeded */
                  omc_Settings_getInstallationDirectoryPath(threadData);

                  fputs(MMC_STRINGDATA(_OMC_LIT29),stdout);

                  omc_System_fflush(threadData);

                  fputs(MMC_STRINGDATA(_OMC_LIT30),stdout);

                  omc_System_fflush(threadData);

                  omc_Print_printBuf(threadData, _OMC_LIT31);

                  omc_System_fflush(threadData);

                  fputs(MMC_STRINGDATA(omc_Print_getErrorString(threadData)),stdout);

                  omc_System_fflush(threadData);

                  fputs(MMC_STRINGDATA(omc_ErrorExt_printMessagesStr(threadData, 0 /* false */)),stdout);

                  omc_System_fflush(threadData);

                  fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);

                  omc_System_fflush(threadData);
                  goto tmp8_done;
                }
                case 1: {
                  /* Pattern matching succeeded */
                  fputs(MMC_STRINGDATA(_OMC_LIT32),stdout);

                  omc_System_fflush(threadData);
                  goto tmp8_done;
                }
                }
                goto tmp8_end;
                tmp8_end: ;
              }
              goto goto_7;
              tmp8_done:
              (void)tmp9;
              MMC_RESTORE_INTERNAL(mmc_jumper);
              goto tmp8_done2;
              goto_7:;
              MMC_CATCH_INTERNAL(mmc_jumper);
              if (++tmp9 < 2) {
                goto tmp8_top;
              }
              goto goto_3;
              tmp8_done2:;
            }
          }
          ;

          goto goto_3;
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      tmp4_done:
      (void)tmp5;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp4_done2;
      goto_3:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp5 < 2) {
        goto tmp4_top;
      }
      MMC_THROW_INTERNAL();
      tmp4_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return;
}

DLLDirection
void omc_Main_main(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _args_1 = NULL;
  modelica_integer _seconds;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _args_1 has no default value.
  // _seconds has no default value.
  omc_ExecStat_execStatReset(threadData);

  { /* stack overflow check */
    {
      modelica_metatype tmpMeta11;
      modelica_metatype tmpMeta12;
      modelica_metatype tmpMeta13;
      MMC_TRY_STACK()
      { /* matchcontinue expression */
        {
          volatile mmc_switch_type tmp6;
          int tmp7;
          tmp6 = 0;
          MMC_TRY_INTERNAL(mmc_jumper)
          tmp5_top:
          threadData->mmc_jumper = &new_mmc_jumper;
          for (; tmp6 < 2; tmp6++) {
            switch (MMC_SWITCH_CAST(tmp6)) {
            case 0: {
              modelica_metatype tmpMeta8;
              /* Pattern matching succeeded */
              _args_1 = omc_Main_init(threadData, _args);

              if(omc_Flags_isSet(threadData, _OMC_LIT37))
              {
                tmpMeta8 = stringAppend(omc_GCExt_profStatsStr(threadData, omc_GCExt_getProfStats(threadData), _OMC_LIT33, _OMC_LIT34),_OMC_LIT0);
                fputs(MMC_STRINGDATA(tmpMeta8),stdout);
              }

              _seconds = omc_Flags_getConfigInt(threadData, _OMC_LIT43);

              if((_seconds > ((modelica_integer) 0)))
              {
                omc_System_alarm(threadData, _seconds);
              }

              omc_Main_main2(threadData, _args_1);
              goto tmp5_done;
            }
            case 1: {
              modelica_boolean tmp9;
              /* Pattern matching succeeded */
              omc_ErrorExt_clearMessages(threadData);

              tmp9 = 0; /* begin failure */
              MMC_TRY_INTERNAL(mmc_jumper)
                omc_FlagsUtil_new(threadData, _args);
                tmp9 = 1;
              goto goto_10;
              goto_10:;
              MMC_CATCH_INTERNAL(mmc_jumper)
              if (tmp9) {goto goto_4;} /* end failure */

              fputs(MMC_STRINGDATA(omc_ErrorExt_printMessagesStr(threadData, 0 /* false */)),stdout);

              fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);

              goto goto_4;
              goto tmp5_done;
            }
            }
            goto tmp5_end;
            tmp5_end: ;
          }
          goto goto_4;
          tmp5_done:
          (void)tmp6;
          MMC_RESTORE_INTERNAL(mmc_jumper);
          goto tmp5_done2;
          goto_4:;
          MMC_CATCH_INTERNAL(mmc_jumper);
          if (++tmp6 < 2) {
            goto tmp5_top;
          }
          MMC_THROW_INTERNAL();
          tmp5_done2:;
        }
      }
      ;

      if(omc_Flags_isSet(threadData, _OMC_LIT37))
      {
        tmpMeta11 = stringAppend(omc_GCExt_profStatsStr(threadData, omc_GCExt_getProfStats(threadData), _OMC_LIT44, _OMC_LIT34),_OMC_LIT0);
        fputs(MMC_STRINGDATA(tmpMeta11),stdout);
      }
      MMC_ELSE_STACK()
      fputs(MMC_STRINGDATA(_OMC_LIT45),stdout);

      {
        modelica_metatype _s;
        for (tmpMeta12 = omc_StackOverflow_readableStacktraceMessages(threadData); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
        {
          _s = MMC_CAR(tmpMeta12);
          fputs(MMC_STRINGDATA(_s),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);
        }
      }
      MMC_CATCH_STACK()
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_metatype omc_Main_init(threadData_t *threadData, modelica_metatype _args)
{
  modelica_metatype _args_1 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _args_1 has no default value.
  omc_System_setEnv(threadData, _OMC_LIT46, _OMC_LIT47, 1 /* true */);

  omc_System_initGarbageCollector(threadData);

  omc_GCExt_setForceUnmapOnGcollect(threadData, 0 /* false */);

  omc_Global_initialize(threadData);

  omc_ErrorExt_registerModelicaFormatError(threadData);

  omc_ErrorExt_initAssertionFunctions(threadData);

  omc_System_realtimeTick(threadData, ((modelica_integer) 8));

  _args_1 = omc_FlagsUtil_new(threadData, _args);

  omc_Main_setDefaultCC(threadData);

  omc_SymbolTable_reset(threadData);

  omc_BackendInterfaceImplementation_initializeBackendInterface(threadData);
  _return: OMC_LABEL_UNUSED
  return _args_1;
}

PROTECTED_FUNCTION_STATIC void omc_Main_setDefaultCC(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
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
          /* Pattern matching succeeded */
          omc_System_setCCompiler(threadData, omc_System_readEnv(threadData, _OMC_LIT48));
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
  return;
}

DLLDirection
void omc_Main_setWindowsPaths(threadData_t *threadData, modelica_string _inOMHome)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_string tmp3_1;
    tmp3_1 = _inOMHome;
    {
      modelica_string _oldPath = NULL;
      modelica_string _newPath = NULL;
      modelica_string _omHome = NULL;
      modelica_string _omdevPath = NULL;
      modelica_string _msysPath = NULL;
      modelica_string _mingwDir = NULL;
      modelica_string _binDir = NULL;
      modelica_string _libBinDir = NULL;
      modelica_string _msysBinDir = NULL;
      modelica_boolean _hasBinDir;
      modelica_boolean _hasLibBinDir;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _oldPath has no default value.
      // _newPath has no default value.
      // _omHome has no default value.
      // _omdevPath has no default value.
      // _msysPath has no default value.
      // _mingwDir has no default value.
      // _binDir has no default value.
      // _libBinDir has no default value.
      // _msysBinDir has no default value.
      // _hasBinDir has no default value.
      // _hasLibBinDir has no default value.
      tmp3 = 0;
      for (; tmp3 < 1; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
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
          
          _omHome = tmp3_1;
          /* Pattern matching succeeded */
          omc_System_setEnv(threadData, _OMC_LIT49, _omHome, 1 /* true */);

          _omdevPath = omc_Util_makeValueOrDefault(threadData, boxvar_System_readEnv, _OMC_LIT50, _OMC_LIT28);

          if((stringEqual(_omdevPath, _OMC_LIT28)))
          {
            _omdevPath = _omHome;
          }

          tmpMeta5 = stringAppend(_omdevPath,_OMC_LIT51);
          _msysPath = tmpMeta5;

          _mingwDir = omc_System_openModelicaPlatform(threadData);

          tmpMeta6 = stringAppend(_msysPath,_OMC_LIT52);
          _msysBinDir = tmpMeta6;

          tmpMeta7 = stringAppend(_msysPath,_OMC_LIT53);
          tmpMeta8 = stringAppend(tmpMeta7,_mingwDir);
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT54);
          _binDir = tmpMeta9;

          if((stringEqual(omc_System_getCCompiler(threadData), _OMC_LIT56)))
          {
            tmpMeta10 = stringAppend(_msysPath,_OMC_LIT53);
            tmpMeta11 = stringAppend(tmpMeta10,_mingwDir);
            tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT55);
            tmpMeta13 = stringAppend(tmpMeta12,omc_System_gccDumpMachine(threadData));
            tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT53);
            tmpMeta15 = stringAppend(tmpMeta14,omc_System_gccVersion(threadData));
            _libBinDir = tmpMeta15;
          }
          else
          {
            _libBinDir = _binDir;
          }

          _hasBinDir = omc_System_directoryExists(threadData, _binDir);

          _hasLibBinDir = omc_System_directoryExists(threadData, _libBinDir);

          if((_hasBinDir && _hasLibBinDir))
          {
            _oldPath = omc_System_readEnv(threadData, _OMC_LIT64);

            tmpMeta17 = stringAppend(_binDir,_OMC_LIT67);
            tmpMeta18 = stringAppend(_libBinDir,_OMC_LIT67);
            tmpMeta19 = stringAppend(_msysBinDir,_OMC_LIT67);
            tmpMeta16 = mmc_mk_cons(_omHome, mmc_mk_cons(_OMC_LIT65, mmc_mk_cons(_omHome, mmc_mk_cons(_OMC_LIT66, mmc_mk_cons(tmpMeta17, mmc_mk_cons(tmpMeta18, mmc_mk_cons(tmpMeta19, MMC_REFSTRUCTLIT(mmc_nil))))))));
            _newPath = stringAppendList(tmpMeta16);

            tmpMeta20 = stringAppend(omc_System_stringReplace(threadData, _newPath, _OMC_LIT68, _OMC_LIT53),_oldPath);
            _newPath = tmpMeta20;

            omc_System_setEnv(threadData, _OMC_LIT64, _newPath, 1 /* true */);
          }
          else
          {
            if((!omc_Flags_isSet(threadData, _OMC_LIT63)))
            {
              fputs(MMC_STRINGDATA(_OMC_LIT57),stdout);

              tmpMeta21 = stringAppend(_OMC_LIT58,_binDir);
              tmpMeta22 = stringAppend(tmpMeta21,(_hasBinDir?_OMC_LIT59:_OMC_LIT60));
              tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT0);
              fputs(MMC_STRINGDATA(tmpMeta23),stdout);

              tmpMeta24 = stringAppend(_OMC_LIT58,_libBinDir);
              tmpMeta25 = stringAppend(tmpMeta24,(_hasLibBinDir?_OMC_LIT59:_OMC_LIT60));
              tmpMeta26 = stringAppend(tmpMeta25,_OMC_LIT0);
              fputs(MMC_STRINGDATA(tmpMeta26),stdout);
            }
          }
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

PROTECTED_FUNCTION_STATIC void omc_Main_readSettingsFile(threadData_t *threadData, modelica_string _filePath)
{
  modelica_string _command = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _command has no default value.
  if(omc_System_regularFileExists(threadData, _filePath))
  {
    tmpMeta1 = stringAppend(_OMC_LIT69,_filePath);
    tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT70);
    _command = tmpMeta2;

    omc_Main_handleCommand(threadData, _command, NULL);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
void omc_Main_readSettings(threadData_t *threadData, modelica_metatype _inArguments)
{
  modelica_string _settings_file = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _settings_file has no default value.
  _settings_file = omc_Util_flagValue(threadData, _OMC_LIT71, _inArguments);

  if((!stringEqual(_settings_file, _OMC_LIT28)))
  {
    _settings_file = omc_System_trim(threadData, _settings_file, _OMC_LIT72);

    omc_Main_readSettingsFile(threadData, _settings_file);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_serverLoopCorba(threadData_t *threadData)
{
  modelica_string _str = NULL;
  modelica_string _reply_str = NULL;
  modelica_boolean _cont;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  // _reply_str has no default value.
  // _cont has no default value.
  _cont = 1 /* true */;

  while(1)
  {
    if(!1 /* true */) break;
    _str = omc_Corba_waitForCommand(threadData);

    _cont = omc_Main_handleCommand(threadData, _str ,&_reply_str);

    if(_cont)
    {
      omc_Corba_sendreply(threadData, _reply_str);
    }
    else
    {
      break;
    }
  }

  omc_Corba_sendreply(threadData, _OMC_LIT73);

  omc_Corba_close(threadData);
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_interactivemodeZMQ(threadData_t *threadData)
{
  modelica_metatype _zmqSocket = NULL;
  modelica_boolean _b;
  modelica_string _str = NULL;
  modelica_string _replystr = NULL;
  modelica_string _suffix = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp2;
  modelica_string tmp3;
  modelica_boolean tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _zmqSocket has no default value.
  // _b has no default value.
  // _str has no default value.
  // _replystr has no default value.
  // _suffix has no default value.
  _suffix = omc_Flags_getConfigString(threadData, _OMC_LIT79);

  tmp2 = (modelica_boolean)(stringEqual(_suffix, _OMC_LIT28));
  if(tmp2)
  {
    tmp3 = _OMC_LIT28;
  }
  else
  {
    tmpMeta1 = stringAppend(_OMC_LIT80,_suffix);
    tmp3 = tmpMeta1;
  }
  _zmqSocket = omc_ZeroMQ_initialize(threadData, tmp3, omc_Flags_isSet(threadData, _OMC_LIT83), omc_Flags_getConfigInt(threadData, _OMC_LIT86));

  /* Pattern-matching assignment */
  tmp4 = valueEq(_OMC_LIT87, _zmqSocket);
  if (0 /* false */ != tmp4) MMC_THROW_INTERNAL();

  while(1)
  {
    if(!1 /* true */) break;
    _str = omc_ZeroMQ_handleRequest(threadData, _zmqSocket);

    if(omc_Flags_isSet(threadData, _OMC_LIT92))
    {
      omc_Debug_trace(threadData, _OMC_LIT88);

      omc_Debug_trace(threadData, _str);

      omc_Debug_trace(threadData, _OMC_LIT89);
    }

    _b = omc_Main_handleCommand(threadData, _str ,&_replystr);

    _replystr = (_b?_replystr:_OMC_LIT73);

    omc_ZeroMQ_sendReply(threadData, _zmqSocket, _replystr);

    if((!_b))
    {
      omc_ZeroMQ_close(threadData, _zmqSocket);

      break;
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_interactivemodeCorba(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
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
          /* Pattern matching succeeded */
          omc_Corba_initialize(threadData);

          omc_Main_serverLoopCorba(threadData);
          goto tmp2_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT93);

          omc_Print_printBuf(threadData, _OMC_LIT94);
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
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_interactivemode(threadData_t *threadData)
{
  modelica_integer _shandle;
  modelica_boolean _b;
  modelica_string _str = NULL;
  modelica_string _replystr = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _shandle has no default value.
  // _b has no default value.
  // _str has no default value.
  // _replystr has no default value.
  _shandle = omc_Socket_waitforconnect(threadData, ((modelica_integer) 29500));

  if((_shandle == ((modelica_integer) -1)))
  {
    MMC_THROW_INTERNAL();
  }

  while(1)
  {
    if(!1 /* true */) break;
    _str = omc_Socket_handlerequest(threadData, _shandle);

    if(omc_Flags_isSet(threadData, _OMC_LIT92))
    {
      omc_Debug_trace(threadData, _OMC_LIT88);

      omc_Debug_trace(threadData, _str);

      omc_Debug_trace(threadData, _OMC_LIT89);
    }

    _b = omc_Main_handleCommand(threadData, _str ,&_replystr);

    _replystr = (_b?_replystr:_OMC_LIT73);

    omc_Socket_sendreply(threadData, _shandle, _replystr);

    if((!_b))
    {
      omc_Socket_close(threadData, _shandle);

      omc_Socket_cleanup(threadData);

      break;
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_translateFile(threadData_t *threadData, modelica_metatype _inStringLst)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_string _f = NULL;
  modelica_metatype _libs = NULL;
  modelica_metatype _cname = NULL;
  modelica_boolean _runBackend;
  modelica_boolean _runSilent;
  modelica_metatype _stmts = NULL;
  modelica_string _cls = NULL;
  modelica_string _fileNamePrefix = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _f has no default value.
  // _libs has no default value.
  // _cname has no default value.
  // _runBackend has no default value.
  // _runSilent has no default value.
  // _stmts has no default value.
  // _cls has no default value.
  // _fileNamePrefix has no default value.
  if((!(stringLength(omc_Flags_getConfigString(threadData, _OMC_LIT97)) == ((modelica_integer) 0))))
  {
    _stmts = omc_Parser_parsestringexp(threadData, omc_Flags_getConfigString(threadData, _OMC_LIT97), _OMC_LIT98);

    omc_Main_showErrors(threadData, omc_Print_getErrorString(threadData), omc_ErrorExt_printMessagesStr(threadData, 0 /* false */));

    omc_Interactive_evaluateToStdOut(threadData, _stmts, 1 /* true */);

    if((listEmpty(_inStringLst) && (stringLength(omc_Config_classToInstantiate(threadData)) == ((modelica_integer) 0))))
    {
      goto _return;
    }
  }

  { /* matchcontinue expression */
    volatile modelica_metatype tmp3_1;
    tmp3_1 = _inStringLst;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 4; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          _libs = tmp3_1;
          /* Pattern matching succeeded */
          omc_Main_isEmptyOrFirstIsModelicaFile(threadData, _libs);

          omc_ExecStat_execStatReset(threadData);

          {
            modelica_metatype _lib;
            for (tmpMeta5 = _libs; !listEmpty(tmpMeta5); tmpMeta5=MMC_CDR(tmpMeta5))
            {
              _lib = MMC_CAR(tmpMeta5);
              omc_Main_loadLib(threadData, _lib);
            }
          }

          if(omc_Flags_isSet(threadData, _OMC_LIT103))
          {
            omc_Debug_trace(threadData, _OMC_LIT99);

            omc_Dump_unparseStr(threadData, omc_SymbolTable_getAbsyn(threadData), 0 /* false */, _OMC_LIT100);

            fputs(MMC_STRINGDATA(omc_Print_getString(threadData)),stdout);
          }

          if(omc_Flags_isSet(threadData, _OMC_LIT107))
          {
            omc_Debug_trace(threadData, _OMC_LIT104);

            tmpMeta7 = stringAppend(omc_Tpl_tplString(threadData, boxvar_AbsynJLDumpTpl_dump, omc_SymbolTable_getAbsyn(threadData)),_OMC_LIT0);
            fputs(MMC_STRINGDATA(tmpMeta7),stdout);
          }

          if(omc_Flags_isSet(threadData, _OMC_LIT110))
          {
            omc_DumpGraphviz_dump(threadData, omc_SymbolTable_getAbsyn(threadData));
          }

          omc_ExecStat_execStat(threadData, _OMC_LIT111);

          _cls = omc_Config_classToInstantiate(threadData);

          _cname = ((stringLength(_cls) == ((modelica_integer) 0))?omc_AbsynUtil_lastClassname(threadData, omc_SymbolTable_getAbsyn(threadData)):omc_AbsynUtil_stringPath(threadData, _cls));

          _fileNamePrefix = omc_Util_stringReplaceChar(threadData, omc_AbsynUtil_pathString(threadData, _cname, _OMC_LIT80, 1 /* true */, 0 /* false */), _OMC_LIT80, _OMC_LIT112);

          _runBackend = (omc_Config_simulationCg(threadData) || omc_Config_simulation(threadData));

          _runSilent = omc_Config_silent(threadData);

          omc_CevalScriptBackend_translateModel(threadData, omc_FCore_emptyCache(threadData), omc_FGraph_empty(threadData), _cname, _fileNamePrefix, _runBackend, _runSilent, mmc_mk_none(), NULL, NULL, NULL, NULL);

          omc_Main_showErrors(threadData, omc_Print_getErrorString(threadData), omc_ErrorExt_printMessagesStr(threadData, 0 /* false */));
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta8 = MMC_CAR(tmp3_1);
          tmpMeta9 = MMC_CDR(tmp3_1);
          _f = tmpMeta8;
          _libs = tmpMeta9;
          /* Pattern matching succeeded */
          omc_Main_isModelicaScriptFile(threadData, _f);

          {
            modelica_metatype _lib;
            for (tmpMeta10 = _libs; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
            {
              _lib = MMC_CAR(tmpMeta10);
              omc_Main_loadLib(threadData, _lib);
            }
          }

          _stmts = omc_Parser_parseexp(threadData, _f);

          omc_Main_showErrors(threadData, omc_Print_getErrorString(threadData), omc_ErrorExt_printMessagesStr(threadData, 0 /* false */));

          omc_Interactive_evaluateToStdOut(threadData, _stmts, 1 /* true */);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta12 = MMC_CAR(tmp3_1);
          tmpMeta13 = MMC_CDR(tmp3_1);
          if (!listEmpty(tmpMeta13)) goto tmp2_end;
          _f = tmpMeta12;
          /* Pattern matching succeeded */
          omc_Main_isCodegenTemplateFile(threadData, _f);

          omc_TplMain_main(threadData, _f);
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta14 = MMC_CAR(tmp3_1);
          tmpMeta15 = MMC_CDR(tmp3_1);
          _f = tmpMeta14;
          /* Pattern matching succeeded */
          if(omc_System_regularFileExists(threadData, _f))
          {
            fputs(MMC_STRINGDATA(_OMC_LIT114),stdout);
          }
          else
          {
            fputs(MMC_STRINGDATA(_OMC_LIT113),stdout);
          }

          fputs(MMC_STRINGDATA(_f),stdout);

          fputs(MMC_STRINGDATA(_OMC_LIT0),stdout);

          omc_System_fflush(threadData);

          omc_Main_showErrors(threadData, omc_Print_getErrorString(threadData), omc_ErrorExt_printMessagesStr(threadData, 0 /* false */));
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
      if (++tmp3 < 4) {
        goto tmp2_top;
      }
      MMC_THROW_INTERNAL();
      tmp2_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_loadLib(threadData_t *threadData, modelica_string _inLib)
{
  modelica_boolean _is_modelica_file;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _is_modelica_file has no default value.
  _is_modelica_file = omc_Main_isModelicaFile(threadData, _inLib);

  { /* matchcontinue expression */
    volatile modelica_boolean tmp3_1;
    tmp3_1 = _is_modelica_file;
    {
      modelica_string _mp = NULL;
      modelica_metatype _pnew = NULL;
      modelica_metatype _p = NULL;
      modelica_metatype _path = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _mp has no default value.
      // _pnew has no default value.
      // _p has no default value.
      // _path has no default value.
      tmp3 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp2_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp3 < 4; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (1 /* true */ != tmp3_1) goto tmp2_end;
          tmp3 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          _p = omc_SymbolTable_getAbsyn(threadData);

          _pnew = omc_CevalScript_loadFile(threadData, _inLib, _OMC_LIT115, _p, 1 /* true */, 1 /* true */, 0 /* false */, 1 /* true */);

          omc_SymbolTable_setAbsyn(threadData, _pnew);
          goto tmp2_done;
        }
        case 1: {
          modelica_boolean tmp5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (0 /* false */ != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          _path = omc_AbsynUtil_stringPath(threadData, _inLib);

          _mp = omc_Settings_getModelicaPath(threadData, omc_Testsuite_isRunning(threadData));

          _p = omc_SymbolTable_getAbsyn(threadData);

          /* Pattern-matching tuple assignment */
          tmpMeta7 = mmc_mk_box4(0, _path, _OMC_LIT116, _OMC_LIT118, mmc_mk_boolean(0 /* false */));
          tmpMeta6 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          tmpMeta8 = omc_CevalScript_loadModel(threadData, tmpMeta6, _mp, _p, 1 /* true */, 1 /* true */, 1 /* true */, 0 /* false */, 0 /* false */, _OMC_LIT28, &tmp5);
          _pnew = tmpMeta8;
          if (1 /* true */ != tmp5) goto goto_1;

          omc_SymbolTable_setAbsyn(threadData, _pnew);
          goto tmp2_done;
        }
        case 2: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (0 /* false */ != tmp3_1) goto tmp2_end;
          tmp3 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmpMeta9 = stringAppend(_OMC_LIT119,_inLib);
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT120);
          omc_Print_printErrorBuf(threadData, tmpMeta10);
          goto goto_1;
          goto tmp2_done;
        }
        case 3: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (1 /* true */ != tmp3_1) goto tmp2_end;
          /* Pattern matching succeeded */
          tmpMeta11 = stringAppend(_OMC_LIT121,_inLib);
          tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT120);
          omc_Print_printErrorBuf(threadData, tmpMeta12);
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

PROTECTED_FUNCTION_STATIC void omc_Main_showErrors(threadData_t *threadData, modelica_string _errorString, modelica_string _errorMessages)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  if((!stringEqual(_errorString, _OMC_LIT28)))
  {
    omc_System_fflush(threadData);

    omc_System_fputs(threadData, _errorString, 2);

    omc_System_fputs(threadData, _OMC_LIT0, 2);

    omc_System_fflush(threadData);
  }

  if((!stringEqual(_errorMessages, _OMC_LIT28)))
  {
    omc_System_fflush(threadData);

    omc_System_fputs(threadData, _errorMessages, 2);

    omc_System_fputs(threadData, _OMC_LIT0, 2);

    omc_System_fflush(threadData);
  }
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_isCodegenTemplateFile(threadData_t *threadData, modelica_string _filename)
{
  modelica_metatype _lst = NULL;
  modelica_string _last = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_boolean tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lst has no default value.
  // _last has no default value.
  _lst = omc_System_strtok(threadData, _filename, _OMC_LIT80);

  /* Pattern-matching assignment */
  tmpMeta1 = listReverse(_lst);
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  _last = tmpMeta2;

  /* Pattern-matching assignment */
  tmp4 = (stringEqual(_last, _OMC_LIT122));
  if (1 /* true */ != tmp4) MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_isModelicaScriptFile(threadData_t *threadData, modelica_string _filename)
{
  modelica_metatype _lst = NULL;
  modelica_string _last = NULL;
  modelica_boolean tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_boolean tmp5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lst has no default value.
  // _last has no default value.
  /* Pattern-matching assignment */
  tmp1 = omc_System_regularFileExists(threadData, _filename);
  if (1 /* true */ != tmp1) MMC_THROW_INTERNAL();

  _lst = omc_System_strtok(threadData, _filename, _OMC_LIT80);

  /* Pattern-matching assignment */
  tmpMeta2 = listReverse(_lst);
  if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_CAR(tmpMeta2);
  tmpMeta4 = MMC_CDR(tmpMeta2);
  _last = tmpMeta3;

  /* Pattern-matching assignment */
  tmp5 = (stringEqual(_last, _OMC_LIT123));
  if (1 /* true */ != tmp5) MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_isFlatModelicaFile(threadData_t *threadData, modelica_string _filename)
{
  modelica_metatype _lst = NULL;
  modelica_string _last = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_boolean tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lst has no default value.
  // _last has no default value.
  _lst = omc_System_strtok(threadData, _filename, _OMC_LIT80);

  /* Pattern-matching assignment */
  tmpMeta1 = listReverse(_lst);
  if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
  tmpMeta2 = MMC_CAR(tmpMeta1);
  tmpMeta3 = MMC_CDR(tmpMeta1);
  _last = tmpMeta2;

  /* Pattern-matching assignment */
  tmp4 = (stringEqual(_last, _OMC_LIT124));
  if (1 /* true */ != tmp4) MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

PROTECTED_FUNCTION_STATIC void omc_Main_isEmptyOrFirstIsModelicaFile(threadData_t *threadData, modelica_metatype _libs)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _libs;
    {
      modelica_string _f = NULL;
      volatile mmc_switch_type tmp3;
      int tmp4;
      // _f has no default value.
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          if (!listEmpty(tmp3_1)) goto tmp2_end;
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          _f = tmpMeta5;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_Main_isModelicaFile(threadData, _f);
          if (1 /* true */ != tmp7) goto goto_1;
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

PROTECTED_FUNCTION_STATIC modelica_boolean omc_Main_isModelicaFile(threadData_t *threadData, modelica_string _inFilename)
{
  modelica_boolean _outIsModelicaFile;
  modelica_metatype _lst = NULL;
  modelica_string _file_ext = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outIsModelicaFile has no default value.
  // _lst has no default value.
  // _file_ext has no default value.
  _lst = omc_System_strtok(threadData, _inFilename, _OMC_LIT80);

  if(listEmpty(_lst))
  {
    _outIsModelicaFile = 0 /* false */;
  }
  else
  {
    _file_ext = omc_List_last(threadData, _lst);

    _outIsModelicaFile = ((stringEqual(_file_ext, _OMC_LIT125)) || (stringEqual(_file_ext, _OMC_LIT124)));
  }
  _return: OMC_LABEL_UNUSED
  return _outIsModelicaFile;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_Main_isModelicaFile(threadData_t *threadData, modelica_metatype _inFilename)
{
  modelica_boolean _outIsModelicaFile;
  modelica_metatype out_outIsModelicaFile;
  _outIsModelicaFile = omc_Main_isModelicaFile(threadData, _inFilename);
  out_outIsModelicaFile = mmc_mk_icon(_outIsModelicaFile);
  return out_outIsModelicaFile;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Main_makeClassDefResult(threadData_t *threadData, modelica_metatype _p)
{
  modelica_string _res = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _p;
    {
      modelica_metatype _names = NULL;
      modelica_metatype _scope = NULL;
      modelica_metatype _cls = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _names has no default value.
      // _scope has no default value.
      // _cls has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,0,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
          _cls = tmpMeta6;
          _scope = tmpMeta8;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar1;
            modelica_metatype* tmp10;
            modelica_metatype tmpMeta11;
            modelica_metatype tmpMeta12;
            modelica_metatype __omcQ_24tmpVar0;
            modelica_integer tmp13;
            modelica_metatype _c_loopVar = 0;
            modelica_metatype _c;
            _c_loopVar = _cls;
            tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar1 = tmpMeta11; /* defaultValue */
            tmp10 = &__omcQ_24tmpVar1;
            while(1) {
              tmp13 = 1;
              if (!listEmpty(_c_loopVar)) {
                _c = MMC_CAR(_c_loopVar);
                _c_loopVar = MMC_CDR(_c_loopVar);
                tmp13--;
              }
              if (tmp13 == 0) {
                tmpMeta12 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, omc_AbsynUtil_className(threadData, _c));
                __omcQ_24tmpVar0 = tmpMeta12;
                *tmp10 = mmc_mk_cons(__omcQ_24tmpVar0,0);
                tmp10 = &MMC_CDR(*tmp10);
              } else if (tmp13 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp10 = mmc_mk_nil();
            tmpMeta9 = __omcQ_24tmpVar1;
          }
          _names = tmpMeta9;

          _names = omc_List_map1(threadData, _names, boxvar_AbsynUtil_joinPaths, _scope);
          {
            modelica_metatype __omcQ_24tmpVar3;
            modelica_metatype* tmp15;
            modelica_metatype tmpMeta16;
            modelica_string __omcQ_24tmpVar2;
            modelica_integer tmp17;
            modelica_metatype _n_loopVar = 0;
            modelica_metatype _n;
            _n_loopVar = _names;
            tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar3 = tmpMeta16; /* defaultValue */
            tmp15 = &__omcQ_24tmpVar3;
            while(1) {
              tmp17 = 1;
              if (!listEmpty(_n_loopVar)) {
                _n = MMC_CAR(_n_loopVar);
                _n_loopVar = MMC_CDR(_n_loopVar);
                tmp17--;
              }
              if (tmp17 == 0) {
                __omcQ_24tmpVar2 = omc_AbsynUtil_pathString(threadData, _n, _OMC_LIT80, 1 /* true */, 0 /* false */);
                *tmp15 = mmc_mk_cons(__omcQ_24tmpVar2,0);
                tmp15 = &MMC_CDR(*tmp15);
              } else if (tmp17 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp15 = mmc_mk_nil();
            tmpMeta14 = __omcQ_24tmpVar3;
          }
          tmpMeta18 = stringAppend(_OMC_LIT126,stringDelimitList(tmpMeta14, _OMC_LIT127));
          tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT128);
          tmp1 = tmpMeta19;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta21,1,0) == 0) goto tmp3_end;
          _cls = tmpMeta20;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp23;
            modelica_metatype tmpMeta24;
            modelica_metatype tmpMeta25;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp26;
            modelica_metatype _c_loopVar = 0;
            modelica_metatype _c;
            _c_loopVar = _cls;
            tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta24; /* defaultValue */
            tmp23 = &__omcQ_24tmpVar5;
            while(1) {
              tmp26 = 1;
              if (!listEmpty(_c_loopVar)) {
                _c = MMC_CAR(_c_loopVar);
                _c_loopVar = MMC_CDR(_c_loopVar);
                tmp26--;
              }
              if (tmp26 == 0) {
                tmpMeta25 = mmc_mk_box2(4, &Absyn_Path_IDENT__desc, omc_AbsynUtil_className(threadData, _c));
                __omcQ_24tmpVar4 = tmpMeta25;
                *tmp23 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp23 = &MMC_CDR(*tmp23);
              } else if (tmp26 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp23 = mmc_mk_nil();
            tmpMeta22 = __omcQ_24tmpVar5;
          }
          _names = tmpMeta22;
          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp28;
            modelica_metatype tmpMeta29;
            modelica_string __omcQ_24tmpVar6;
            modelica_integer tmp30;
            modelica_metatype _n_loopVar = 0;
            modelica_metatype _n;
            _n_loopVar = _names;
            tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta29; /* defaultValue */
            tmp28 = &__omcQ_24tmpVar7;
            while(1) {
              tmp30 = 1;
              if (!listEmpty(_n_loopVar)) {
                _n = MMC_CAR(_n_loopVar);
                _n_loopVar = MMC_CDR(_n_loopVar);
                tmp30--;
              }
              if (tmp30 == 0) {
                __omcQ_24tmpVar6 = omc_AbsynUtil_pathString(threadData, _n, _OMC_LIT80, 1 /* true */, 0 /* false */);
                *tmp28 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp28 = &MMC_CDR(*tmp28);
              } else if (tmp30 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp28 = mmc_mk_nil();
            tmpMeta27 = __omcQ_24tmpVar7;
          }
          tmpMeta31 = stringAppend(_OMC_LIT126,stringDelimitList(tmpMeta27, _OMC_LIT127));
          tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT128);
          tmp1 = tmpMeta32;
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
  _res = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Main_handleCommand2(threadData_t *threadData, modelica_metatype _inStatements, modelica_metatype _inProgram, modelica_string _inCommand)
{
  modelica_string _outResult = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;volatile modelica_metatype tmp4_2;
    tmp4_1 = _inStatements;
    tmp4_2 = _inProgram;
    {
      modelica_metatype _stmts = NULL;
      modelica_metatype _prog = NULL;
      modelica_metatype _prog2 = NULL;
      modelica_metatype _ast = NULL;
      modelica_string _result = NULL;
      modelica_metatype _vars = NULL;
      modelica_metatype _table = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _stmts has no default value.
      // _prog has no default value.
      // _prog2 has no default value.
      // _ast has no default value.
      // _result has no default value.
      // _vars has no default value.
      // _table has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (optionNone(tmp4_1)) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
          if (!optionNone(tmp4_2)) goto tmp3_end;
          _stmts = tmpMeta6;
          tmp4 += 2; /* Pattern matching succeeded; we may skip some cases if we fail */
          tmp1 = omc_Interactive_evaluate(threadData, _stmts, 0 /* false */);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (optionNone(tmp4_2)) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_2), 1));
          _prog = tmpMeta7;
          tmp4 += 1; /* Pattern matching succeeded; we may skip some cases if we fail */
          _table = omc_SymbolTable_get(threadData);

          _ast = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_table), 2)));

          _vars = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_table), 4)));

          _prog2 = omc_Interactive_addScope(threadData, _prog, _vars);

          _prog2 = omc_ProgramUtil_updateProgram(threadData, _prog2, _ast, 0 /* false */);

          if(omc_Flags_isSet(threadData, _OMC_LIT103))
          {
            omc_Debug_trace(threadData, _OMC_LIT99);

            omc_Print_printBuf(threadData, omc_Dump_unparseStr(threadData, _prog2, 0 /* false */, _OMC_LIT100));
          }

          if(omc_Flags_isSet(threadData, _OMC_LIT110))
          {
            omc_DumpGraphviz_dump(threadData, _prog2);
          }

          _result = omc_Main_makeClassDefResult(threadData, _prog);

          omc_SymbolTable_setAbsyn(threadData, _prog2);
          tmp1 = _result;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (!optionNone(tmp4_1)) goto tmp3_end;
          if (!optionNone(tmp4_2)) goto tmp3_end;
          /* Pattern matching succeeded */
          omc_Print_printBuf(threadData, _OMC_LIT129);

          _result = omc_Print_getString(threadData);

          tmpMeta8 = stringAppend(_result,_OMC_LIT130);
          _result = tmpMeta8;
          tmpMeta9 = stringAppend(_result,omc_Error_printMessagesStr(threadData, 0 /* false */));
          tmp1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_boolean tmp10;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp10 = (isSome(_inStatements) || isSome(_inProgram));
          if (1 /* true */ != tmp10) goto goto_2;
          tmp1 = omc_Error_printMessagesStr(threadData, 0 /* false */);
          goto tmp3_done;
        }
        case 4: {
          modelica_boolean tmp11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp11 = (isSome(_inStatements) || isSome(_inProgram));
          if (1 /* true */ != tmp11) goto goto_2;

          tmpMeta12 = mmc_mk_cons(_inCommand, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT132, tmpMeta12);
          tmp1 = _OMC_LIT28;
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
  _outResult = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLDirection
modelica_boolean omc_Main_handleCommand(threadData_t *threadData, modelica_string _inCommand, modelica_string *out_outResult)
{
  modelica_boolean _outContinue;
  modelica_string _outResult = NULL;
  modelica_metatype _stmts = NULL;
  modelica_metatype _prog = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outContinue has no default value.
  // _outResult has no default value.
  // _stmts has no default value.
  // _prog has no default value.
  omc_Print_clearBuf(threadData);

  if(omc_Util_strncmp(threadData, _OMC_LIT134, _inCommand, ((modelica_integer) 6)))
  {
    _outContinue = 0 /* false */;

    _outResult = _OMC_LIT133;
  }
  else
  {
    _outContinue = 1 /* true */;

    _stmts = omc_Main_parseCommand(threadData, _inCommand ,&_prog);

    _outResult = omc_Main_handleCommand2(threadData, _stmts, _prog, _inCommand);

    _outResult = omc_Main_makeDebugResult(threadData, _OMC_LIT103, _outResult);

    _outResult = omc_Main_makeDebugResult(threadData, _OMC_LIT110, _outResult);
  }
  _return: OMC_LABEL_UNUSED
  if (out_outResult) { *out_outResult = _outResult; }
  return _outContinue;
}
modelica_metatype boxptr_Main_handleCommand(threadData_t *threadData, modelica_metatype _inCommand, modelica_metatype *out_outResult)
{
  modelica_boolean _outContinue;
  modelica_metatype out_outContinue;
  _outContinue = omc_Main_handleCommand(threadData, _inCommand, out_outResult);
  out_outContinue = mmc_mk_icon(_outContinue);
  /* skip box _outResult; String */
  return out_outContinue;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_Main_parseCommand(threadData_t *threadData, modelica_string _inCommand, modelica_metatype *out_outProgram)
{
  modelica_metatype _outStatements = NULL;
  modelica_metatype _outProgram = NULL;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outStatements has no default value.
  // _outProgram has no default value.
  
  
  { /* matchcontinue expression */
    {
      modelica_metatype _stmts = NULL;
      modelica_metatype _prog = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _stmts has no default value.
      // _prog has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          /* Pattern matching succeeded */
          omc_ErrorExt_setCheckpoint(threadData, _OMC_LIT135);

          _stmts = omc_Parser_parsestringexp(threadData, _inCommand, _OMC_LIT98);

          omc_ErrorExt_delCheckpoint(threadData, _OMC_LIT135);
          tmpMeta[0+0] = mmc_mk_some(_stmts);
          tmpMeta[0+1] = mmc_mk_none();
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          omc_ErrorExt_rollBack(threadData, _OMC_LIT135);

          _prog = omc_Parser_parsestring(threadData, _inCommand, _OMC_LIT98, omc_Config_acceptedGrammar(threadData), omc_Flags_getConfigEnum(threadData, _OMC_LIT184), omc_Flags_getConfigBool(threadData, _OMC_LIT188));
          tmpMeta[0+0] = mmc_mk_none();
          tmpMeta[0+1] = mmc_mk_some(_prog);
          goto tmp3_done;
        }
        case 2: {
          /* Pattern matching succeeded */
          tmpMeta[0+0] = mmc_mk_none();
          tmpMeta[0+1] = mmc_mk_none();
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
  _outStatements = tmpMeta[0+0];
  _outProgram = tmpMeta[0+1];
  _return: OMC_LABEL_UNUSED
  if (out_outProgram) { *out_outProgram = _outProgram; }
  return _outStatements;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_Main_makeDebugResult(threadData_t *threadData, modelica_metatype _inFlag, modelica_string _res)
{
  modelica_string _res_1 = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res_1 has no default value.
  { /* matchcontinue expression */
    volatile modelica_metatype tmp4_1;
    tmp4_1 = _inFlag;
    {
      modelica_string _debugstr = NULL;
      modelica_string _flagstr = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _debugstr has no default value.
      // _flagstr has no default value.
      tmp4 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp3_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_boolean tmp7;
          modelica_metatype tmpMeta8;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _flagstr = tmpMeta6;
          /* Pattern matching succeeded */
          /* Pattern-matching assignment */
          tmp7 = omc_Flags_isSet(threadData, _inFlag);
          if (1 /* true */ != tmp7) goto goto_2;

          _debugstr = omc_Print_getString(threadData);
          tmpMeta8 = mmc_mk_cons(_res, mmc_mk_cons(_OMC_LIT189, mmc_mk_cons(_flagstr, mmc_mk_cons(_OMC_LIT190, mmc_mk_cons(_debugstr, mmc_mk_cons(_OMC_LIT191, mmc_mk_cons(_flagstr, mmc_mk_cons(_OMC_LIT190, MMC_REFSTRUCTLIT(mmc_nil)))))))));
          tmp1 = stringAppendList(tmpMeta8);
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = _res;
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
  _res_1 = tmp1;
  _return: OMC_LABEL_UNUSED
  return _res_1;
}

