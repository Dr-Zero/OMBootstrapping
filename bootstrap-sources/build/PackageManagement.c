#include "omc_simulation_settings.h"
#include "PackageManagement.h"
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT0,0.0);
#define _OMC_LIT0 MMC_REFREALLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "/share/omlibrary/cache/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,23,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "/share/omlibrary/cache/index.json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,33,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data "/.openmodelica/cache/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,21,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data "/.openmodelica/libraries/index.json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,35,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "/.openmodelica/libraries/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,25,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data "mirrors"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,7,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "https://"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,8,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "/"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,1,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "sha"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,3,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "zipfile"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,7,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,8) {&ErrorTypes_MessageType_SCRIPTING__desc,}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT12,1,5) {&ErrorTypes_Severity_WARNING__desc,}};
#define _OMC_LIT12 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "Conflicting versions for loading package %s: %s is to be installed, but another package requires version %s which is not provided by this version."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,146,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT14,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT13}};
#define _OMC_LIT14 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT14)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT15,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(612)),_OMC_LIT11,_OMC_LIT12,_OMC_LIT14}};
#define _OMC_LIT15 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,0,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "#DUMMY#"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,7,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
#define _OMC_LIT18_data "openmodelica.metadata.json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT18,26,_OMC_LIT18_data);
#define _OMC_LIT18 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT18)
#define _OMC_LIT19_data "libs"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT19,4,_OMC_LIT19_data);
#define _OMC_LIT19 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
#define _OMC_LIT21_data "The package index did not contain an entry for package %s that provides version %s. The following versions are available:\n%s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT21,124,_OMC_LIT21_data);
#define _OMC_LIT21 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT21}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(602)),_OMC_LIT11,_OMC_LIT20,_OMC_LIT22}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,1,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data "The package index did not contain an entry for package %s of version %s. There are other versions that claim to be compatible: %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,130,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT25}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(603)),_OMC_LIT11,_OMC_LIT20,_OMC_LIT26}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,2,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "versions"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,8,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data "path"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,4,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "singleFileStructureCopyAllFiles"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,31,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,1,11) {&JSON_FALSE__desc,}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "uses"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,4,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "The package index %s could not be parsed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,41,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT35,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT34}};
#define _OMC_LIT35 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT35)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT36,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(606)),_OMC_LIT11,_OMC_LIT20,_OMC_LIT35}};
#define _OMC_LIT36 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT36)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT37,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT37 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,1,6) {&ErrorTypes_Severity_NOTIFICATION__desc,}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
#define _OMC_LIT39_data "Cached libraries were found and will be installed into %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT39,58,_OMC_LIT39_data);
#define _OMC_LIT39 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT39}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(616)),_OMC_LIT37,_OMC_LIT38,_OMC_LIT40}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
#define _OMC_LIT42_data "%s %s will not be installed since version %s is installed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT42,58,_OMC_LIT42_data);
#define _OMC_LIT42 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT42)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT43,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT42}};
#define _OMC_LIT43 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(613)),_OMC_LIT11,_OMC_LIT38,_OMC_LIT43}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "%s %s is already installed, skipping."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,37,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT45}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT47,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(617)),_OMC_LIT37,_OMC_LIT38,_OMC_LIT46}};
#define _OMC_LIT47 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,1,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
#define _OMC_LIT49_data "/package.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT49,11,_OMC_LIT49_data);
#define _OMC_LIT49 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT49)
#define _OMC_LIT50_data "."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT50,1,_OMC_LIT50_data);
#define _OMC_LIT50 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "After extracting %s, %s does not exist. Removing the failed installation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,73,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT52,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT51}};
#define _OMC_LIT52 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT52)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT53,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(611)),_OMC_LIT11,_OMC_LIT38,_OMC_LIT52}};
#define _OMC_LIT53 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data ".mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,3,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "Package upgraded successfully (SHA %s from %s)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,47,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT56,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT55}};
#define _OMC_LIT56 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT56)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT57,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(609)),_OMC_LIT11,_OMC_LIT38,_OMC_LIT56}};
#define _OMC_LIT57 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "Package installed successfully (SHA %s)."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,40,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT59,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT58}};
#define _OMC_LIT59 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT59)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT60,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(609)),_OMC_LIT11,_OMC_LIT38,_OMC_LIT59}};
#define _OMC_LIT60 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data "convertFromVersion"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,18,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "support"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,7,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data "provides"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,8,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,1,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "index.json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,10,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "The MODELICAPATH (%s) does not contain %s, so the package index cannot be used."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,79,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT67,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT66}};
#define _OMC_LIT67 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT67)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT68,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(604)),_OMC_LIT11,_OMC_LIT20,_OMC_LIT67}};
#define _OMC_LIT68 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "https://libraries.openmodelica.org/index/v1/index.json"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,54,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
#define _OMC_LIT70_data "Downloaded package index from URL %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT70,37,_OMC_LIT70_data);
#define _OMC_LIT70 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT70)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT71,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT70}};
#define _OMC_LIT71 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(608)),_OMC_LIT11,_OMC_LIT38,_OMC_LIT71}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT73,2,1) {_OMC_LIT69,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT73 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "Failed to download package index %s to file %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,47,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT74}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(607)),_OMC_LIT11,_OMC_LIT20,_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "Unknown support level "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,22,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
#define _OMC_LIT78_data "/home/per/workspace/OpenModelica/OMCompiler/Compiler/Script/PackageManagement.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT78,80,_OMC_LIT78_data);
#define _OMC_LIT78 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT79_6,1.770032059e9);
#define _OMC_LIT79_6 MMC_REFREALLIT(_OMC_LIT_STRUCT79_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT78,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(211)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(211)),MMC_IMMEDIATE(MMC_TAGFIXNUM(92)),_OMC_LIT79_6}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "fullSupport"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,11,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "experimental"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,12,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
#define _OMC_LIT82_data "obsolete"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT82,8,_OMC_LIT82_data);
#define _OMC_LIT82 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT82)
#define _OMC_LIT83_data "unknown"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT83,7,_OMC_LIT83_data);
#define _OMC_LIT83 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT83)
#define _OMC_LIT84_data "noSupport"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT84,9,_OMC_LIT84_data);
#define _OMC_LIT84 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT84)
#define _OMC_LIT85_data "default"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT85,7,_OMC_LIT85_data);
#define _OMC_LIT85 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT85)
#define _OMC_LIT86_data "package.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT86,10,_OMC_LIT86_data);
#define _OMC_LIT86 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,1,5) {&PackageManagement_VersionMap_Tree_EMPTY__desc,}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
#define _OMC_LIT88_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT88,1,_OMC_LIT88_data);
#define _OMC_LIT88 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,1,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
#define _OMC_LIT90_data "EMPTY()"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT90,7,_OMC_LIT90_data);
#define _OMC_LIT90 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT90)
#define _OMC_LIT91_data "     "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT91,5,_OMC_LIT91_data);
#define _OMC_LIT91 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data " │   "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,7,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data " ┌"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,4,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data " └"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,4,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
#define _OMC_LIT95_data "────"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT95,12,_OMC_LIT95_data);
#define _OMC_LIT95 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,1,5) {&PackageManagement_AvailableLibraries_Tree_EMPTY__desc,}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
#include "util/modelica.h"

#include "PackageManagement_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_makeSourceInfo(threadData_t *threadData, modelica_string _fileName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_makeSourceInfo,2,0) {(void*) boxptr_PackageManagement_makeSourceInfo,0}};
#define boxvar_PackageManagement_makeSourceInfo MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_makeSourceInfo)
PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getInstallationCachePath(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_getInstallationCachePath,2,0) {(void*) boxptr_PackageManagement_getInstallationCachePath,0}};
#define boxvar_PackageManagement_getInstallationCachePath MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_getInstallationCachePath)
PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getInstallationIndexPath(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_getInstallationIndexPath,2,0) {(void*) boxptr_PackageManagement_getInstallationIndexPath,0}};
#define boxvar_PackageManagement_getInstallationIndexPath MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_getInstallationIndexPath)
PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getIndexPath(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_getIndexPath,2,0) {(void*) boxptr_PackageManagement_getIndexPath,0}};
#define boxvar_PackageManagement_getIndexPath MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_getIndexPath)
PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getUserLibraryPath(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_getUserLibraryPath,2,0) {(void*) boxptr_PackageManagement_getUserLibraryPath,0}};
#define boxvar_PackageManagement_getUserLibraryPath MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_getUserLibraryPath)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_getMirrors(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_getMirrors,2,0) {(void*) boxptr_PackageManagement_getMirrors,0}};
#define boxvar_PackageManagement_getMirrors MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_getMirrors)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_getAllUrls(threadData_t *threadData, modelica_string _url, modelica_metatype _mirrors);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_getAllUrls,2,0) {(void*) boxptr_PackageManagement_getAllUrls,0}};
#define boxvar_PackageManagement_getAllUrls MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_getAllUrls)
PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getShaOrZipfile(threadData_t *threadData, modelica_metatype _obj);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_getShaOrZipfile,2,0) {(void*) boxptr_PackageManagement_getShaOrZipfile,0}};
#define boxvar_PackageManagement_getShaOrZipfile MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_getShaOrZipfile)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_PackageManagement_installPackageWork(threadData_t *threadData, modelica_string _pkg, modelica_string _version, modelica_boolean _exactMatch, modelica_boolean _fallbackOnNonExactMatch, modelica_metatype __omcQ_24in_5FpackagesToInstall, modelica_metatype *out_packagesToInstall);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_installPackageWork(threadData_t *threadData, modelica_metatype _pkg, modelica_metatype _version, modelica_metatype _exactMatch, modelica_metatype _fallbackOnNonExactMatch, modelica_metatype __omcQ_24in_5FpackagesToInstall, modelica_metatype *out_packagesToInstall);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_installPackageWork,2,0) {(void*) boxptr_PackageManagement_installPackageWork,0}};
#define boxvar_PackageManagement_installPackageWork MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_installPackageWork)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_PackageManagement_compareUrlBool(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_compareUrlBool(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_compareUrlBool,2,0) {(void*) boxptr_PackageManagement_compareUrlBool,0}};
#define boxvar_PackageManagement_compareUrlBool MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_compareUrlBool)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_VersionMap_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_balance,2,0) {(void*) boxptr_PackageManagement_VersionMap_balance,0}};
#define boxvar_PackageManagement_VersionMap_balance MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_PackageManagement_VersionMap_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_VersionMap_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_calculateBalance,2,0) {(void*) boxptr_PackageManagement_VersionMap_calculateBalance,0}};
#define boxvar_PackageManagement_VersionMap_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_PackageManagement_VersionMap_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_VersionMap_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_height,2,0) {(void*) boxptr_PackageManagement_VersionMap_height,0}};
#define boxvar_PackageManagement_VersionMap_height MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_VersionMap_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_VersionMap_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_printTreeStr2,2,0) {(void*) boxptr_PackageManagement_VersionMap_printTreeStr2,0}};
#define boxvar_PackageManagement_VersionMap_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_PackageManagement_VersionMap_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_VersionMap_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_referenceEqOrEmpty,2,0) {(void*) boxptr_PackageManagement_VersionMap_referenceEqOrEmpty,0}};
#define boxvar_PackageManagement_VersionMap_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_VersionMap_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_rotateLeft,2,0) {(void*) boxptr_PackageManagement_VersionMap_rotateLeft,0}};
#define boxvar_PackageManagement_VersionMap_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_VersionMap_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_rotateRight,2,0) {(void*) boxptr_PackageManagement_VersionMap_rotateRight,0}};
#define boxvar_PackageManagement_VersionMap_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_VersionMap_rotateRight)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_AvailableLibraries_balance(threadData_t *threadData, modelica_metatype _inTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_balance,2,0) {(void*) boxptr_PackageManagement_AvailableLibraries_balance,0}};
#define boxvar_PackageManagement_AvailableLibraries_balance MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_balance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_PackageManagement_AvailableLibraries_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_AvailableLibraries_calculateBalance(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_calculateBalance,2,0) {(void*) boxptr_PackageManagement_AvailableLibraries_calculateBalance,0}};
#define boxvar_PackageManagement_AvailableLibraries_calculateBalance MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_calculateBalance)
PROTECTED_FUNCTION_STATIC modelica_integer omc_PackageManagement_AvailableLibraries_height(threadData_t *threadData, modelica_metatype _inNode);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_AvailableLibraries_height(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_height,2,0) {(void*) boxptr_PackageManagement_AvailableLibraries_height,0}};
#define boxvar_PackageManagement_AvailableLibraries_height MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_height)
PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_AvailableLibraries_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_AvailableLibraries_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_printTreeStr2,2,0) {(void*) boxptr_PackageManagement_AvailableLibraries_printTreeStr2,0}};
#define boxvar_PackageManagement_AvailableLibraries_printTreeStr2 MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_printTreeStr2)
PROTECTED_FUNCTION_STATIC modelica_boolean omc_PackageManagement_AvailableLibraries_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_AvailableLibraries_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_referenceEqOrEmpty,2,0) {(void*) boxptr_PackageManagement_AvailableLibraries_referenceEqOrEmpty,0}};
#define boxvar_PackageManagement_AvailableLibraries_referenceEqOrEmpty MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_referenceEqOrEmpty)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_AvailableLibraries_rotateLeft(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_rotateLeft,2,0) {(void*) boxptr_PackageManagement_AvailableLibraries_rotateLeft,0}};
#define boxvar_PackageManagement_AvailableLibraries_rotateLeft MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_rotateLeft)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_AvailableLibraries_rotateRight(threadData_t *threadData, modelica_metatype _inNode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_rotateRight,2,0) {(void*) boxptr_PackageManagement_AvailableLibraries_rotateRight,0}};
#define boxvar_PackageManagement_AvailableLibraries_rotateRight MMC_REFSTRUCTLIT(boxvar_lit_PackageManagement_AvailableLibraries_rotateRight)

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_makeSourceInfo(threadData_t *threadData, modelica_string _fileName)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  tmpMeta1 = mmc_mk_box8(3, &SourceInfo_SOURCEINFO__desc, _fileName, mmc_mk_boolean(1 /* true */), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), _OMC_LIT0);
  _info = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _info;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getInstallationCachePath(threadData_t *threadData)
{
  modelica_string _path = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _path has no default value.
  tmpMeta1 = stringAppend(omc_Settings_getInstallationDirectoryPath(threadData),_OMC_LIT1);
  _path = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getInstallationIndexPath(threadData_t *threadData)
{
  modelica_string _path = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _path has no default value.
  tmpMeta1 = stringAppend(omc_Settings_getInstallationDirectoryPath(threadData),_OMC_LIT2);
  _path = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _path;
}

DLLDirection
modelica_string omc_PackageManagement_getCachePath(threadData_t *threadData)
{
  modelica_string _path = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _path has no default value.
  tmpMeta1 = stringAppend(omc_Settings_getHomeDir(threadData, omc_Testsuite_isRunning(threadData)),_OMC_LIT3);
  _path = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getIndexPath(threadData_t *threadData)
{
  modelica_string _path = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _path has no default value.
  tmpMeta1 = stringAppend(omc_Settings_getHomeDir(threadData, omc_Testsuite_isRunning(threadData)),_OMC_LIT4);
  _path = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getUserLibraryPath(threadData_t *threadData)
{
  modelica_string _path = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _path has no default value.
  tmpMeta1 = stringAppend(omc_Settings_getHomeDir(threadData, omc_Testsuite_isRunning(threadData)),_OMC_LIT5);
  _path = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _path;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_getMirrors(threadData_t *threadData)
{
  modelica_metatype _mirrors = NULL;
  modelica_metatype _obj = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _mirrors has no default value.
  // _obj has no default value.
  _obj = omc_PackageManagement_getPackageIndex(threadData, 0 /* false */);

  if((!omc_JSON_hasKey(threadData, _obj, _OMC_LIT6)))
  {
    tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
    _mirrors = tmpMeta1;

    goto _return;
  }

  _obj = omc_JSON_get(threadData, _obj, _OMC_LIT6);

  _mirrors = omc_JSON_getStringList(threadData, _obj);
  _return: OMC_LABEL_UNUSED
  return _mirrors;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_getAllUrls(threadData_t *threadData, modelica_string _url, modelica_metatype _mirrors)
{
  modelica_metatype _urls = NULL;
  modelica_string _urlWithoutProtocol = NULL;
  modelica_string _newUrl = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_boolean tmp6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _urls has no default value.
  // _urlWithoutProtocol has no default value.
  // _newUrl has no default value.
  tmpMeta1 = mmc_mk_cons(_url, MMC_REFSTRUCTLIT(mmc_nil));
  _urls = tmpMeta1;

  if((!omc_StringUtil_startsWith(threadData, _url, _OMC_LIT7)))
  {
    goto _return;
  }

  _urlWithoutProtocol = substring(_url, ((modelica_integer) 9), stringLength(_url));

  {
    modelica_metatype _mirror;
    for (tmpMeta2 = _mirrors; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _mirror = MMC_CAR(tmpMeta2);
      tmp6 = (modelica_boolean)omc_StringUtil_endsWith(threadData, _mirror, _OMC_LIT8);
      if(tmp6)
      {
        tmpMeta3 = stringAppend(_mirror,_urlWithoutProtocol);
        tmp7 = tmpMeta3;
      }
      else
      {
        tmpMeta4 = stringAppend(_mirror,_OMC_LIT8);
        tmpMeta5 = stringAppend(tmpMeta4,_urlWithoutProtocol);
        tmp7 = tmpMeta5;
      }
      _newUrl = tmp7;

      tmpMeta8 = mmc_mk_cons(_newUrl, _urls);
      _urls = tmpMeta8;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _urls;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_getShaOrZipfile(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_string _res = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  _res = (omc_JSON_hasKey(threadData, _obj, _OMC_LIT9)?omc_JSON_getString(threadData, omc_JSON_get(threadData, _obj, _OMC_LIT9)):omc_System_basename(threadData, omc_JSON_getString(threadData, omc_JSON_get(threadData, _obj, _OMC_LIT10))));
  _return: OMC_LABEL_UNUSED
  return _res;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_PackageManagement_installPackageWork(threadData_t *threadData, modelica_string _pkg, modelica_string _version, modelica_boolean _exactMatch, modelica_boolean _fallbackOnNonExactMatch, modelica_metatype __omcQ_24in_5FpackagesToInstall, modelica_metatype *out_packagesToInstall)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_boolean _success;
  modelica_metatype _packagesToInstall = NULL;
  modelica_metatype _installedLibraries = NULL;
  modelica_metatype _installedVersions = NULL;
  modelica_metatype _candidates = NULL;
  modelica_metatype _candidatesSemver = NULL;
  modelica_metatype _exactMatches = NULL;
  modelica_string _versionToInstall = NULL;
  modelica_string _usedVersion = NULL;
  modelica_string _path = NULL;
  modelica_string _sha = NULL;
  modelica_string _jsonPath = NULL;
  modelica_string _zip = NULL;
  modelica_metatype _semverToInstall = NULL;
  modelica_metatype _semver = NULL;
  modelica_metatype _index = NULL;
  modelica_metatype _versionObj = NULL;
  modelica_metatype _versionsObj = NULL;
  modelica_metatype _usesObj = NULL;
  modelica_boolean _indexHasPkg;
  modelica_metatype _packageToInstall = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta9;
  modelica_boolean tmp10;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_boolean tmp22;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  _packagesToInstall = __omcQ_24in_5FpackagesToInstall;
  // _installedLibraries has no default value.
  // _installedVersions has no default value.
  // _candidates has no default value.
  // _candidatesSemver has no default value.
  // _exactMatches has no default value.
  // _versionToInstall has no default value.
  // _usedVersion has no default value.
  // _path has no default value.
  // _sha has no default value.
  // _jsonPath has no default value.
  // _zip has no default value.
  // _semverToInstall has no default value.
  // _semver has no default value.
  // _index has no default value.
  // _versionObj has no default value.
  // _versionsObj has no default value.
  // _usesObj has no default value.
  // _indexHasPkg has no default value.
  // _packageToInstall has no default value.
  _candidates = omc_PackageManagement_versionsThatProvideTheWanted(threadData, _pkg, _version, 1 /* true */);

  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _candidate_loopVar = 0;
    modelica_metatype _candidate;
    _candidate_loopVar = _candidates;
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_candidate_loopVar)) {
        _candidate = MMC_CAR(_candidate_loopVar);
        _candidate_loopVar = MMC_CDR(_candidate_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = omc_SemanticVersion_parse(threadData, _candidate, 0 /* false */);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _candidatesSemver = tmpMeta1;

  _semver = omc_SemanticVersion_parse(threadData, _version, 0 /* false */);

  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype* tmp6;
    modelica_metatype tmpMeta7;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp8;
    modelica_metatype _candidate_loopVar = 0;
    modelica_metatype _candidate;
    _candidate_loopVar = _candidatesSemver;
    tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta7; /* defaultValue */
    tmp6 = &__omcQ_24tmpVar5;
    while(1) {
      tmp8 = 1;
      while (!listEmpty(_candidate_loopVar)) {
        _candidate = MMC_CAR(_candidate_loopVar);
        _candidate_loopVar = MMC_CDR(_candidate_loopVar);
        if ((((modelica_integer) 0) == omc_SemanticVersion_compare(threadData, _candidate, _semver, 1 /* true */, omc_SemanticVersion_hasMetaInformation(threadData, _semver)))) {
          tmp8--;
          break;
        }
      }
      if (tmp8 == 0) {
        __omcQ_24tmpVar4 = _candidate;
        *tmp6 = mmc_mk_cons(__omcQ_24tmpVar4,0);
        tmp6 = &MMC_CDR(*tmp6);
      } else if (tmp8 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp6 = mmc_mk_nil();
    tmpMeta5 = __omcQ_24tmpVar5;
  }
  _exactMatches = tmpMeta5;

  _success = 0 /* false */;

  {
    modelica_metatype _pkgInfo;
    for (tmpMeta9 = _packagesToInstall; !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
    {
      _pkgInfo = MMC_CAR(tmpMeta9);
      if((stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pkgInfo), 3))), _pkg)))
      {
        {
          modelica_boolean __omcQ_24tmpVar7;
          modelica_boolean __omcQ_24tmpVar6;
          modelica_integer tmp11;
          modelica_metatype _candidate_loopVar = 0;
          modelica_metatype _candidate;
          _candidate_loopVar = _candidatesSemver;
          __omcQ_24tmpVar7 = 0 /* false */; /* defaultValue */
          while(1) {
            tmp11 = 1;
            if (!listEmpty(_candidate_loopVar)) {
              _candidate = MMC_CAR(_candidate_loopVar);
              _candidate_loopVar = MMC_CDR(_candidate_loopVar);
              tmp11--;
            }
            if (tmp11 == 0) {
              __omcQ_24tmpVar6 = (((modelica_integer) 0) == omc_SemanticVersion_compare(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pkgInfo), 4))), _candidate, 1 /* true */, 0 /* false */));
              __omcQ_24tmpVar7 = (__omcQ_24tmpVar6 || __omcQ_24tmpVar7);
            } else if (tmp11 == 1) {
              break;
            } else {
              MMC_THROW_INTERNAL();
            }
          }
          tmp10 = __omcQ_24tmpVar7;
        }
        if(((omc_SemanticVersion_compare(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pkgInfo), 4))), _semver, 1 /* true */, 0 /* false */) == ((modelica_integer) 0)) || tmp10))
        {
          _success = 1 /* true */;

          goto _return;
        }

        tmpMeta12 = mmc_mk_cons(_pkg, mmc_mk_cons(omc_SemanticVersion_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pkgInfo), 4)))), mmc_mk_cons(_version, MMC_REFSTRUCTLIT(mmc_nil))));
        omc_Error_addMessage(threadData, _OMC_LIT15, tmpMeta12);

        _success = 1 /* true */;

        goto _return;
      }
    }
  }

  _installedLibraries = omc_PackageManagement_getInstalledLibraries(threadData);

  if(listEmpty(_candidates))
  {
    _versionToInstall = _version;

    _semverToInstall = _semver;
  }
  else
  {
    if((_exactMatch && (!listEmpty(_exactMatches))))
    {
      _semverToInstall = listHead(_exactMatches);

      _versionToInstall = omc_SemanticVersion_toString(threadData, _semverToInstall);
    }
    else
    {
      _versionToInstall = listHead(_candidates);

      _semverToInstall = listHead(_candidatesSemver);
    }
  }

  _index = omc_PackageManagement_getPackageIndex(threadData, 1 /* true */);

  _indexHasPkg = 1 /* true */;

  _sha = _OMC_LIT16;

  if(omc_PackageManagement_AvailableLibraries_hasKey(threadData, _installedLibraries, _pkg))
  {
    _installedVersions = omc_PackageManagement_AvailableLibraries_get(threadData, _installedLibraries, _pkg);

    if((omc_PackageManagement_VersionMap_hasKey(threadData, _installedVersions, _semverToInstall) || ((stringEqual(_version, _OMC_LIT16)) && (!_indexHasPkg))))
    {
      _success = 1 /* true */;

      _path = (omc_PackageManagement_VersionMap_hasKey(threadData, _installedVersions, _semverToInstall)?omc_PackageManagement_VersionMap_get(threadData, _installedVersions, _semverToInstall):_OMC_LIT17);

      tmpMeta14 = stringAppend(_path,_OMC_LIT8);
      tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT18);
      _jsonPath = tmpMeta15;

      if(omc_System_regularFileExists(threadData, _jsonPath))
      {
        _versionObj = omc_JSON_parseFile(threadData, _jsonPath);

        _zip = omc_JSON_getString(threadData, omc_JSON_get(threadData, _versionObj, _OMC_LIT10));

        { /* matchcontinue expression */
          {
            volatile mmc_switch_type tmp18;
            int tmp19;
            tmp18 = 0;
            MMC_TRY_INTERNAL(mmc_jumper)
            tmp17_top:
            threadData->mmc_jumper = &new_mmc_jumper;
            for (; tmp18 < 2; tmp18++) {
              switch (MMC_SWITCH_CAST(tmp18)) {
              case 0: {
                /* Pattern matching succeeded */
                _sha = omc_JSON_getString(threadData, omc_JSON_get(threadData, _versionObj, _OMC_LIT9));
                goto tmp17_done;
              }
              case 1: {
                /* Pattern matching succeeded */
                goto tmp17_done;
              }
              }
              goto tmp17_end;
              tmp17_end: ;
            }
            goto goto_16;
            tmp17_done:
            (void)tmp18;
            MMC_RESTORE_INTERNAL(mmc_jumper);
            goto tmp17_done2;
            goto_16:;
            MMC_CATCH_INTERNAL(mmc_jumper);
            if (++tmp18 < 2) {
              goto tmp17_top;
            }
            MMC_THROW_INTERNAL();
            tmp17_done2:;
          }
        }
        ;
      }
      else
      {
        _zip = _OMC_LIT16;
      }

      tmpMeta20 = mmc_mk_box9(3, &PackageManagement_PackageInstallInfo_PKG__INSTALL__INFO__desc, mmc_mk_boolean(0 /* false */), _pkg, _semverToInstall, _zip, _path, _sha, mmc_mk_boolean(0 /* false */), omc_JSON_emptyObject(threadData));
      _packageToInstall = tmpMeta20;

      _indexHasPkg = omc_JSON_hasKey(threadData, omc_JSON_get(threadData, _index, _OMC_LIT19), _pkg);
    }
  }

  if((!_success))
  {
    if(listEmpty(_candidates))
    {
      tmpMeta21 = mmc_mk_cons(_pkg, mmc_mk_cons(_version, mmc_mk_cons(stringDelimitList(omc_PackageManagement_getAllProvidedVersionsForLibrary(threadData, _pkg, 1 /* true */), _OMC_LIT24), MMC_REFSTRUCTLIT(mmc_nil))));
      omc_Error_addSourceMessage(threadData, _OMC_LIT23, tmpMeta21, omc_PackageManagement_makeSourceInfo(threadData, omc_PackageManagement_getIndexPath(threadData)));

      goto _return;
    }

    {
      modelica_boolean __omcQ_24tmpVar9;
      modelica_boolean __omcQ_24tmpVar8;
      modelica_integer tmp23;
      modelica_metatype _candidate_loopVar = 0;
      modelica_metatype _candidate;
      _candidate_loopVar = _candidatesSemver;
      __omcQ_24tmpVar9 = 0 /* false */; /* defaultValue */
      while(1) {
        tmp23 = 1;
        if (!listEmpty(_candidate_loopVar)) {
          _candidate = MMC_CAR(_candidate_loopVar);
          _candidate_loopVar = MMC_CDR(_candidate_loopVar);
          tmp23--;
        }
        if (tmp23 == 0) {
          __omcQ_24tmpVar8 = (((modelica_integer) 0) == omc_SemanticVersion_compare(threadData, _semver, _candidate, 1 /* true */, 0 /* false */));
          __omcQ_24tmpVar9 = (__omcQ_24tmpVar8 || __omcQ_24tmpVar9);
        } else if (tmp23 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      tmp22 = __omcQ_24tmpVar9;
    }
    if((_exactMatch && (!tmp22)))
    {
      if((!_fallbackOnNonExactMatch))
      {
        tmpMeta24 = mmc_mk_cons(_pkg, mmc_mk_cons(_version, mmc_mk_cons(stringDelimitList(_candidates, _OMC_LIT28), MMC_REFSTRUCTLIT(mmc_nil))));
        omc_Error_addSourceMessage(threadData, _OMC_LIT27, tmpMeta24, omc_PackageManagement_makeSourceInfo(threadData, omc_PackageManagement_getIndexPath(threadData)));

        goto _return;
      }

      _versionToInstall = listHead(_candidates);

      _semverToInstall = listHead(_candidatesSemver);
    }
  }

  if((!_indexHasPkg))
  {
    tmpMeta25 = mmc_mk_cons(_packageToInstall, _packagesToInstall);
    _packagesToInstall = tmpMeta25;

    goto _return;
  }

  _versionsObj = omc_JSON_get(threadData, omc_JSON_get(threadData, omc_JSON_get(threadData, _index, _OMC_LIT19), _pkg), _OMC_LIT29);

  if((_success && (!omc_JSON_hasKey(threadData, _versionsObj, _versionToInstall))))
  {
    tmpMeta26 = mmc_mk_cons(_packageToInstall, _packagesToInstall);
    _packagesToInstall = tmpMeta26;

    goto _return;
  }

  _versionObj = omc_JSON_get(threadData, _versionsObj, _versionToInstall);

  if(((!_success) || ((!stringEqual(_sha, _OMC_LIT16)) && (!stringEqual(_sha, omc_PackageManagement_getShaOrZipfile(threadData, _versionObj))))))
  {
    _success = 1 /* true */;

    tmpMeta27 = mmc_mk_box9(3, &PackageManagement_PackageInstallInfo_PKG__INSTALL__INFO__desc, mmc_mk_boolean(1 /* true */), _pkg, _semverToInstall, omc_JSON_getString(threadData, omc_JSON_get(threadData, _versionObj, _OMC_LIT10)), omc_JSON_getString(threadData, omc_JSON_get(threadData, _versionObj, _OMC_LIT30)), omc_PackageManagement_getShaOrZipfile(threadData, _versionObj), mmc_mk_boolean(omc_JSON_getBoolean(threadData, omc_JSON_getOrDefault(threadData, _versionObj, _OMC_LIT31, _OMC_LIT32))), _versionObj);
    _packageToInstall = tmpMeta27;
  }

  _usesObj = omc_JSON_getOrDefault(threadData, _versionObj, _OMC_LIT33, omc_JSON_emptyObject(threadData));

  tmpMeta28 = mmc_mk_cons(_packageToInstall, _packagesToInstall);
  _packagesToInstall = tmpMeta28;

  {
    modelica_metatype _usesPackage;
    for (tmpMeta29 = omc_JSON_getKeys(threadData, _usesObj); !listEmpty(tmpMeta29); tmpMeta29=MMC_CDR(tmpMeta29))
    {
      _usesPackage = MMC_CAR(tmpMeta29);
      /* Pattern-matching assignment */
      tmpMeta30 = omc_JSON_get(threadData, _usesObj, _usesPackage);
      if (mmc__uniontype__metarecord__typedef__equal(tmpMeta30,4,1) == 0) MMC_THROW_INTERNAL();
      tmpMeta31 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta30), 2));
      _usedVersion = tmpMeta31;

      _success = omc_PackageManagement_installPackageWork(threadData, _usesPackage, _usedVersion, _exactMatch, 1 /* true */, _packagesToInstall ,&_packagesToInstall);

      if((!_success))
      {
        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_packagesToInstall) { *out_packagesToInstall = _packagesToInstall; }
  threadData->mmc_jumper = old_mmc_jumper;
  return _success;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_installPackageWork(threadData_t *threadData, modelica_metatype _pkg, modelica_metatype _version, modelica_metatype _exactMatch, modelica_metatype _fallbackOnNonExactMatch, modelica_metatype __omcQ_24in_5FpackagesToInstall, modelica_metatype *out_packagesToInstall)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = mmc_unbox_integer(_exactMatch);
  tmp2 = mmc_unbox_integer(_fallbackOnNonExactMatch);
  _success = omc_PackageManagement_installPackageWork(threadData, _pkg, _version, tmp1, tmp2, __omcQ_24in_5FpackagesToInstall, out_packagesToInstall);
  out_success = mmc_mk_icon(_success);
  /* skip box _packagesToInstall; list<PackageManagement.PackageInstallInfo> */
  return out_success;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_PackageManagement_compareUrlBool(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _b;
  modelica_string _s1 = NULL;
  modelica_string _s2 = NULL;
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
  // _b has no default value.
  // _s1 has no default value.
  // _s2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _tpl1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  if (listEmpty(tmpMeta2)) MMC_THROW_INTERNAL();
  tmpMeta3 = MMC_CAR(tmpMeta2);
  tmpMeta4 = MMC_CDR(tmpMeta2);
  _s1 = tmpMeta3;

  /* Pattern-matching assignment */
  tmpMeta5 = _tpl2;
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
  if (listEmpty(tmpMeta6)) MMC_THROW_INTERNAL();
  tmpMeta7 = MMC_CAR(tmpMeta6);
  tmpMeta8 = MMC_CDR(tmpMeta6);
  _s2 = tmpMeta7;

  _b = (stringCompare(_s1, _s2) > ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _b;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_compareUrlBool(threadData_t *threadData, modelica_metatype _tpl1, modelica_metatype _tpl2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_PackageManagement_compareUrlBool(threadData, _tpl1, _tpl2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
void omc_PackageManagement_installCachedPackages(threadData_t *threadData)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_string _packageIndex = NULL;
  modelica_string _homeDir = NULL;
  modelica_metatype _obj = NULL;
  modelica_metatype _libs_obj = NULL;
  modelica_metatype _lib_obj = NULL;
  modelica_metatype _versions_obj = NULL;
  modelica_metatype _libs = NULL;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _packageIndex has no default value.
  // _homeDir has no default value.
  // _obj has no default value.
  // _libs_obj has no default value.
  // _lib_obj has no default value.
  // _versions_obj has no default value.
  // _libs has no default value.
  _homeDir = omc_Settings_getHomeDir(threadData, omc_Testsuite_isRunning(threadData));

  if((((!listEmpty(omc_System_subDirectories(threadData, omc_PackageManagement_getUserLibraryPath(threadData)))) || (stringEqual(_homeDir, _OMC_LIT16))) || (stringEqual(_homeDir, _OMC_LIT8))))
  {
    goto _return;
  }

  _packageIndex = omc_PackageManagement_getInstallationIndexPath(threadData);

  if((!omc_System_regularFileExists(threadData, _packageIndex)))
  {
    goto _return;
  }

  _obj = omc_JSON_makeNull(threadData);

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
          _obj = omc_JSON_parseFile(threadData, _packageIndex);
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta5;
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons(_packageIndex, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT36, tmpMeta5, omc_PackageManagement_makeSourceInfo(threadData, _packageIndex));
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

  { /* matchcontinue expression */
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      MMC_TRY_INTERNAL(mmc_jumper)
      tmp7_top:
      threadData->mmc_jumper = &new_mmc_jumper;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          /* Pattern matching succeeded */
          _libs_obj = omc_JSON_get(threadData, _obj, _OMC_LIT19);

          _libs = omc_JSON_getKeys(threadData, _libs_obj);
          goto tmp7_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      tmp7_done:
      (void)tmp8;
      MMC_RESTORE_INTERNAL(mmc_jumper);
      goto tmp7_done2;
      goto_6:;
      MMC_CATCH_INTERNAL(mmc_jumper);
      if (++tmp8 < 2) {
        goto tmp7_top;
      }
      MMC_THROW_INTERNAL();
      tmp7_done2:;
    }
  }
  ;

  if((!listEmpty(_libs)))
  {
    tmpMeta10 = mmc_mk_cons(omc_PackageManagement_getUserLibraryPath(threadData), MMC_REFSTRUCTLIT(mmc_nil));
    omc_Error_addSourceMessage(threadData, _OMC_LIT41, tmpMeta10, omc_PackageManagement_makeSourceInfo(threadData, _packageIndex));
  }

  if((!omc_System_regularFileExists(threadData, omc_PackageManagement_getIndexPath(threadData))))
  {
    omc_Util_createDirectoryTree(threadData, omc_PackageManagement_getUserLibraryPath(threadData));

    omc_System_copyFile(threadData, _packageIndex, omc_PackageManagement_getIndexPath(threadData));
  }

  {
    modelica_metatype _lib;
    for (tmpMeta11 = _libs; !listEmpty(tmpMeta11); tmpMeta11=MMC_CDR(tmpMeta11))
    {
      _lib = MMC_CAR(tmpMeta11);
      _lib_obj = omc_JSON_get(threadData, _libs_obj, _lib);

      _versions_obj = omc_JSON_getOrDefault(threadData, _lib_obj, _OMC_LIT29, omc_JSON_emptyObject(threadData));

      {
        modelica_metatype _version;
        for (tmpMeta12 = omc_JSON_getKeys(threadData, _versions_obj); !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
        {
          _version = MMC_CAR(tmpMeta12);
          omc_PackageManagement_installPackage(threadData, _lib, _version, 1 /* true */, 1 /* true */);
        }
      }
    }
  }

  omc_PackageManagement_updateIndex(threadData);
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return;
}

DLLDirection
modelica_boolean omc_PackageManagement_installPackage(threadData_t *threadData, modelica_string _pkg, modelica_string _version, modelica_boolean _exactMatch, modelica_boolean _skipDownload)
{
  modelica_boolean _success;
  modelica_metatype _packageList = NULL;
  modelica_metatype _packagesToInstall = NULL;
  modelica_metatype _urlPathList = NULL;
  modelica_metatype _urlPathListToDownload = NULL;
  modelica_string _path = NULL;
  modelica_string _destPath = NULL;
  modelica_string _destPathPkgMo = NULL;
  modelica_string _destPathPkgInfo = NULL;
  modelica_string _oldSha = NULL;
  modelica_string _dirOfPath = NULL;
  modelica_string _expectedLocation = NULL;
  modelica_string _cachePath = NULL;
  modelica_string _installCachePath = NULL;
  modelica_string _curCachePath = NULL;
  modelica_metatype _mirrors = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
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
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  // _packageList has no default value.
  // _packagesToInstall has no default value.
  // _urlPathList has no default value.
  // _urlPathListToDownload has no default value.
  // _path has no default value.
  // _destPath has no default value.
  // _destPathPkgMo has no default value.
  // _destPathPkgInfo has no default value.
  // _oldSha has no default value.
  // _dirOfPath has no default value.
  // _expectedLocation has no default value.
  _cachePath = omc_PackageManagement_getCachePath(threadData);
  _installCachePath = omc_PackageManagement_getInstallationCachePath(threadData);
  // _curCachePath has no default value.
  // _mirrors has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _success = omc_PackageManagement_installPackageWork(threadData, _pkg, _version, _exactMatch, 0 /* false */, tmpMeta1 ,&_packageList);

  {
    modelica_metatype _p;
    for (tmpMeta2 = _packageList; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _p = MMC_CAR(tmpMeta2);
      if(((stringEqual((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 3))), _pkg)) && (!mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2)))))))
      {
        if((stringEqual(_version, omc_SemanticVersion_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 4)))))))
        {
          tmpMeta3 = mmc_mk_cons(_pkg, mmc_mk_cons(omc_SemanticVersion_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 4)))), MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT47, tmpMeta3, omc_PackageManagement_makeSourceInfo(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 6)))));
        }
        else
        {
          tmpMeta4 = mmc_mk_cons(_pkg, mmc_mk_cons(_version, mmc_mk_cons(omc_SemanticVersion_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 4)))), MMC_REFSTRUCTLIT(mmc_nil))));
          omc_Error_addSourceMessage(threadData, _OMC_LIT44, tmpMeta4, omc_PackageManagement_makeSourceInfo(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 6)))));
        }
      }
    }
  }

  {
    modelica_metatype __omcQ_24tmpVar11;
    modelica_metatype* tmp7;
    modelica_metatype tmpMeta8;
    modelica_metatype __omcQ_24tmpVar10;
    modelica_integer tmp9;
    modelica_metatype _p_loopVar = 0;
    modelica_metatype _p;
    _p_loopVar = _packageList;
    tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar11 = tmpMeta8; /* defaultValue */
    tmp7 = &__omcQ_24tmpVar11;
    while(1) {
      tmp9 = 1;
      while (!listEmpty(_p_loopVar)) {
        _p = MMC_CAR(_p_loopVar);
        _p_loopVar = MMC_CDR(_p_loopVar);
        if (mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2))))) {
          tmp9--;
          break;
        }
      }
      if (tmp9 == 0) {
        __omcQ_24tmpVar10 = _p;
        *tmp7 = mmc_mk_cons(__omcQ_24tmpVar10,0);
        tmp7 = &MMC_CDR(*tmp7);
      } else if (tmp9 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp7 = mmc_mk_nil();
    tmpMeta6 = __omcQ_24tmpVar11;
  }
  _packagesToInstall = tmpMeta6;

  {
    modelica_metatype _pack;
    for (tmpMeta10 = _packagesToInstall; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _pack = MMC_CAR(tmpMeta10);
      omc_Util_createDirectoryTree(threadData, _cachePath);
    }
  }

  if((!_skipDownload))
  {
    _mirrors = omc_PackageManagement_getMirrors(threadData);

    {
      modelica_metatype __omcQ_24tmpVar13;
      modelica_metatype* tmp13;
      modelica_metatype tmpMeta14;
      modelica_metatype tmpMeta15;
      modelica_metatype tmpMeta16;
      modelica_metatype tmpMeta17;
      modelica_boolean tmp18;
      modelica_string tmp19;
      modelica_metatype tmpMeta20;
      modelica_metatype __omcQ_24tmpVar12;
      modelica_integer tmp21;
      modelica_metatype _p_loopVar = 0;
      modelica_metatype _p;
      _p_loopVar = _packagesToInstall;
      tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar13 = tmpMeta14; /* defaultValue */
      tmp13 = &__omcQ_24tmpVar13;
      while(1) {
        tmp21 = 1;
        if (!listEmpty(_p_loopVar)) {
          _p = MMC_CAR(_p_loopVar);
          _p_loopVar = MMC_CDR(_p_loopVar);
          tmp21--;
        }
        if (tmp21 == 0) {
          tmpMeta15 = stringAppend(_installCachePath,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 5)))));
          tmp18 = (modelica_boolean)omc_System_regularFileExists(threadData, tmpMeta15);
          if(tmp18)
          {
            tmpMeta16 = stringAppend(_installCachePath,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 5)))));
            tmp19 = tmpMeta16;
          }
          else
          {
            tmpMeta17 = stringAppend(_cachePath,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 5)))));
            tmp19 = tmpMeta17;
          }
          tmpMeta20 = mmc_mk_box2(0, omc_PackageManagement_getAllUrls(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 5))), _mirrors), tmp19);
          __omcQ_24tmpVar12 = tmpMeta20;
          *tmp13 = mmc_mk_cons(__omcQ_24tmpVar12,0);
          tmp13 = &MMC_CDR(*tmp13);
        } else if (tmp21 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp13 = mmc_mk_nil();
      tmpMeta12 = __omcQ_24tmpVar13;
    }
    _urlPathList = omc_List_sort(threadData, tmpMeta12, boxvar_PackageManagement_compareUrlBool);

    _urlPathList = omc_List_unique(threadData, _urlPathList);

    {
      modelica_metatype __omcQ_24tmpVar15;
      modelica_metatype* tmp23;
      modelica_metatype tmpMeta24;
      modelica_metatype __omcQ_24tmpVar14;
      modelica_integer tmp25;
      modelica_metatype _tpl_loopVar = 0;
      modelica_metatype _tpl;
      _tpl_loopVar = _urlPathList;
      tmpMeta24 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar15 = tmpMeta24; /* defaultValue */
      tmp23 = &__omcQ_24tmpVar15;
      while(1) {
        tmp25 = 1;
        while (!listEmpty(_tpl_loopVar)) {
          _tpl = MMC_CAR(_tpl_loopVar);
          _tpl_loopVar = MMC_CDR(_tpl_loopVar);
          if ((!omc_System_regularFileExists(threadData, omc_Util_tuple22(threadData, _tpl)))) {
            tmp25--;
            break;
          }
        }
        if (tmp25 == 0) {
          __omcQ_24tmpVar14 = _tpl;
          *tmp23 = mmc_mk_cons(__omcQ_24tmpVar14,0);
          tmp23 = &MMC_CDR(*tmp23);
        } else if (tmp25 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp23 = mmc_mk_nil();
      tmpMeta22 = __omcQ_24tmpVar15;
    }
    _urlPathListToDownload = tmpMeta22;

    if((!omc_Curl_multiDownload(threadData, _urlPathListToDownload, omc_Config_noProc(threadData))))
    {
      MMC_THROW_INTERNAL();
    }
  }

  {
    modelica_metatype _pack;
    for (tmpMeta26 = _packagesToInstall; !listEmpty(tmpMeta26); tmpMeta26=MMC_CDR(tmpMeta26))
    {
      _pack = MMC_CAR(tmpMeta26);
      tmpMeta27 = stringAppend(omc_PackageManagement_getUserLibraryPath(threadData),(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 3))));
      tmpMeta28 = stringAppend(tmpMeta27,_OMC_LIT48);
      tmpMeta29 = stringAppend(tmpMeta28,omc_SemanticVersion_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 4)))));
      _destPath = tmpMeta29;

      omc_System_removeDirectory(threadData, _destPath);

      omc_System_createDirectory(threadData, _destPath);

      tmpMeta30 = stringAppend(_destPath,_OMC_LIT49);
      _destPathPkgMo = tmpMeta30;

      tmpMeta31 = stringAppend(_destPath,_OMC_LIT8);
      tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT18);
      _destPathPkgInfo = tmpMeta32;

      _oldSha = _OMC_LIT16;

      if(omc_System_regularFileExists(threadData, _destPathPkgInfo))
      {
        { /* matchcontinue expression */
          {
            volatile mmc_switch_type tmp35;
            int tmp36;
            tmp35 = 0;
            MMC_TRY_INTERNAL(mmc_jumper)
            tmp34_top:
            threadData->mmc_jumper = &new_mmc_jumper;
            for (; tmp35 < 2; tmp35++) {
              switch (MMC_SWITCH_CAST(tmp35)) {
              case 0: {
                /* Pattern matching succeeded */
                _oldSha = omc_PackageManagement_getShaOrZipfile(threadData, omc_JSON_parseFile(threadData, _destPathPkgInfo));
                goto tmp34_done;
              }
              case 1: {
                /* Pattern matching succeeded */
                goto tmp34_done;
              }
              }
              goto tmp34_end;
              tmp34_end: ;
            }
            goto goto_33;
            tmp34_done:
            (void)tmp35;
            MMC_RESTORE_INTERNAL(mmc_jumper);
            goto tmp34_done2;
            goto_33:;
            MMC_CATCH_INTERNAL(mmc_jumper);
            if (++tmp35 < 2) {
              goto tmp34_top;
            }
            MMC_THROW_INTERNAL();
            tmp34_done2:;
          }
        }
        ;
      }

      tmpMeta37 = stringAppend(_installCachePath,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 5)))));
      _curCachePath = (omc_System_regularFileExists(threadData, tmpMeta37)?_installCachePath:_cachePath);

      if(omc_StringUtil_endsWith(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 6))), _OMC_LIT54))
      {
        _dirOfPath = omc_System_dirname(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 6))));

        if(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 8)))))
        {
          tmpMeta38 = stringAppend(_curCachePath,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 5)))));
          omc_Unzip_unzipPath(threadData, tmpMeta38, ((stringEqual(_dirOfPath, _OMC_LIT50))?_OMC_LIT16:_dirOfPath), _destPath);

          tmpMeta39 = stringAppend(_destPath,_OMC_LIT8);
          tmpMeta40 = stringAppend(tmpMeta39,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 6)))));
          _expectedLocation = tmpMeta40;

          if((!omc_System_rename(threadData, _expectedLocation, _destPathPkgMo)))
          {
            tmpMeta42 = stringAppend(_curCachePath,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 5)))));
            tmpMeta41 = mmc_mk_cons(tmpMeta42, mmc_mk_cons(_expectedLocation, MMC_REFSTRUCTLIT(mmc_nil)));
            omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta41);

            MMC_THROW_INTERNAL();
          }
        }
        else
        {
          tmpMeta43 = stringAppend(_curCachePath,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 5)))));
          omc_Unzip_unzipPath(threadData, tmpMeta43, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 6))), _destPathPkgMo);
        }
      }
      else
      {
        tmpMeta44 = stringAppend(_curCachePath,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 5)))));
        omc_Unzip_unzipPath(threadData, tmpMeta44, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 6))), _destPath);
      }

      if(omc_System_regularFileExists(threadData, _destPathPkgMo))
      {
        if((stringEqual(_oldSha, _OMC_LIT16)))
        {
          tmpMeta45 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 7))), MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT60, tmpMeta45, omc_PackageManagement_makeSourceInfo(threadData, _destPathPkgMo));
        }
        else
        {
          tmpMeta46 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 7))), mmc_mk_cons(_oldSha, MMC_REFSTRUCTLIT(mmc_nil)));
          omc_Error_addSourceMessage(threadData, _OMC_LIT57, tmpMeta46, omc_PackageManagement_makeSourceInfo(threadData, _destPathPkgMo));
        }
      }
      else
      {
        tmpMeta48 = stringAppend(_curCachePath,omc_System_basename(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 5)))));
        tmpMeta47 = mmc_mk_cons(tmpMeta48, mmc_mk_cons(_destPathPkgMo, MMC_REFSTRUCTLIT(mmc_nil)));
        omc_Error_addMessage(threadData, _OMC_LIT53, tmpMeta47);

        omc_System_removeDirectory(threadData, _destPath);

        MMC_THROW_INTERNAL();
      }

      tmpMeta49 = stringAppend(omc_JSON_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pack), 9))), 0 /* false */),_OMC_LIT24);
      omc_System_writeFile(threadData, _destPathPkgInfo, tmpMeta49);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_PackageManagement_installPackage(threadData_t *threadData, modelica_metatype _pkg, modelica_metatype _version, modelica_metatype _exactMatch, modelica_metatype _skipDownload)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = mmc_unbox_integer(_exactMatch);
  tmp2 = mmc_unbox_integer(_skipDownload);
  _success = omc_PackageManagement_installPackage(threadData, _pkg, _version, tmp1, tmp2);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_metatype omc_PackageManagement_versionsThatConvertToTheWanted(threadData_t *threadData, modelica_string _id, modelica_string _version, modelica_boolean _printError)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _result = NULL;
  modelica_metatype _obj = NULL;
  modelica_metatype _libobject = NULL;
  modelica_metatype _vers = NULL;
  modelica_metatype _wantedVersion = NULL;
  modelica_metatype _libVersion = NULL;
  modelica_string _versionStr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _obj has no default value.
  // _libobject has no default value.
  // _vers has no default value.
  // _wantedVersion has no default value.
  // _libVersion has no default value.
  // _versionStr has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _result = tmpMeta1;

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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          /* Pattern matching succeeded */
          _obj = omc_PackageManagement_getPackageIndex(threadData, _printError);

          _libobject = omc_JSON_get(threadData, omc_JSON_get(threadData, _obj, _OMC_LIT19), _id);

          _vers = omc_JSON_get(threadData, _libobject, _OMC_LIT29);

          _wantedVersion = omc_SemanticVersion_parse(threadData, _version, 1 /* true */);

          {
            modelica_metatype _v;
            for (tmpMeta6 = omc_JSON_getKeys(threadData, _vers); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _v = MMC_CAR(tmpMeta6);
              _libVersion = omc_SemanticVersion_parse(threadData, _v, 1 /* true */);

              if((omc_SemanticVersion_compare(threadData, _wantedVersion, _libVersion, 1 /* true */, 0 /* false */) == ((modelica_integer) 0)))
              {
                _result = omc_JSON_getStringList(threadData, omc_JSON_get(threadData, omc_JSON_get(threadData, _vers, _v), _OMC_LIT61));

                goto _return;
              }
            }
          }
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
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
  ;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _result;
}
modelica_metatype boxptr_PackageManagement_versionsThatConvertToTheWanted(threadData_t *threadData, modelica_metatype _id, modelica_metatype _version, modelica_metatype _printError)
{
  modelica_integer tmp1;
  modelica_metatype _result = NULL;
  tmp1 = mmc_unbox_integer(_printError);
  _result = omc_PackageManagement_versionsThatConvertToTheWanted(threadData, _id, _version, tmp1);
  /* skip box _result; list<String> */
  return _result;
}

DLLDirection
modelica_metatype omc_PackageManagement_versionsThatConvertFromTheWanted(threadData_t *threadData, modelica_string _id, modelica_string _version, modelica_boolean _printError)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _result = NULL;
  modelica_metatype _obj = NULL;
  modelica_metatype _libobject = NULL;
  modelica_metatype _vers = NULL;
  modelica_metatype _wantedVersion = NULL;
  modelica_metatype _convertVersion = NULL;
  modelica_metatype _convertFrom = NULL;
  modelica_string _versionStr = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _obj has no default value.
  // _libobject has no default value.
  // _vers has no default value.
  // _wantedVersion has no default value.
  // _convertVersion has no default value.
  // _convertFrom has no default value.
  // _versionStr has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _result = tmpMeta1;

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
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_integer tmp10;
          modelica_integer tmp11;
          modelica_integer tmp12;
          modelica_metatype tmpMeta13;
          /* Pattern matching succeeded */
          _obj = omc_PackageManagement_getPackageIndex(threadData, _printError);

          _libobject = omc_JSON_get(threadData, omc_JSON_get(threadData, _obj, _OMC_LIT19), _id);

          _vers = omc_JSON_get(threadData, _libobject, _OMC_LIT29);

          _wantedVersion = omc_SemanticVersion_parse(threadData, _version, 1 /* true */);

          {
            modelica_metatype _v;
            for (tmpMeta6 = omc_JSON_getKeys(threadData, _vers); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _v = MMC_CAR(tmpMeta6);
              _convertFrom = omc_JSON_getOrDefault(threadData, omc_JSON_get(threadData, _vers, _v), _OMC_LIT61, omc_JSON_emptyArray(threadData, ((modelica_integer) 0)));

              tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = omc_JSON_size(threadData, _convertFrom);
              if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
              {
                modelica_integer _i;
                for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
                {
                  /* Pattern-matching assignment */
                  tmpMeta7 = omc_JSON_at(threadData, _convertFrom, _i);
                  if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,4,1) == 0) goto goto_2;
                  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 2));
                  _versionStr = tmpMeta8;

                  _convertVersion = omc_SemanticVersion_parse(threadData, _versionStr, 1 /* true */);

                  if((omc_SemanticVersion_compare(threadData, _wantedVersion, _convertVersion, 1 /* true */, 0 /* false */) == ((modelica_integer) 0)))
                  {
                    tmpMeta9 = mmc_mk_cons(_v, _result);
                    _result = tmpMeta9;

                    continue;
                  }
                }
              }
            }
          }
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
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
  ;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _result;
}
modelica_metatype boxptr_PackageManagement_versionsThatConvertFromTheWanted(threadData_t *threadData, modelica_metatype _id, modelica_metatype _version, modelica_metatype _printError)
{
  modelica_integer tmp1;
  modelica_metatype _result = NULL;
  tmp1 = mmc_unbox_integer(_printError);
  _result = omc_PackageManagement_versionsThatConvertFromTheWanted(threadData, _id, _version, tmp1);
  /* skip box _result; list<String> */
  return _result;
}

DLLDirection
modelica_metatype omc_PackageManagement_versionsThatProvideTheWanted(threadData_t *threadData, modelica_string _id, modelica_string _version, modelica_boolean _printError)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _result = NULL;
  modelica_metatype _obj = NULL;
  modelica_metatype _libobject = NULL;
  modelica_metatype _vers = NULL;
  modelica_metatype _wantedVersion = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _obj has no default value.
  // _libobject has no default value.
  // _vers has no default value.
  // _wantedVersion has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _result = tmpMeta1;

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
          modelica_metatype tmpMeta6;
          /* Pattern matching succeeded */
          _obj = omc_PackageManagement_getPackageIndex(threadData, _printError);

          _libobject = omc_JSON_get(threadData, omc_JSON_get(threadData, _obj, _OMC_LIT19), _id);

          _vers = omc_JSON_get(threadData, _libobject, _OMC_LIT29);

          _wantedVersion = omc_SemanticVersion_parse(threadData, _version, 1 /* true */);

          {
            modelica_metatype __omcQ_24tmpVar17;
            modelica_metatype* tmp7;
            modelica_metatype tmpMeta8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar16;
            modelica_integer tmp10;
            modelica_metatype _version_loopVar = 0;
            modelica_metatype _version;
            _version_loopVar = omc_JSON_getKeys(threadData, _vers);
            tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar17 = tmpMeta8; /* defaultValue */
            tmp7 = &__omcQ_24tmpVar17;
            while(1) {
              tmp10 = 1;
              while (!listEmpty(_version_loopVar)) {
                _version = MMC_CAR(_version_loopVar);
                _version_loopVar = MMC_CDR(_version_loopVar);
                if (omc_PackageManagement_providesExpectedVersion(threadData, _version, omc_JSON_getOrDefault(threadData, omc_JSON_get(threadData, _vers, _version), _OMC_LIT63, omc_JSON_emptyArray(threadData, ((modelica_integer) 0))), _wantedVersion)) {
                  tmp10--;
                  break;
                }
              }
              if (tmp10 == 0) {
                tmpMeta9 = mmc_mk_box3(0, _version, omc_SemanticVersion_parse(threadData, _version, 1 /* true */), mmc_mk_integer(omc_PackageManagement_getSupportLevel(threadData, omc_JSON_get(threadData, omc_JSON_get(threadData, _vers, _version), _OMC_LIT62))));
                __omcQ_24tmpVar16 = tmpMeta9;
                *tmp7 = mmc_mk_cons(__omcQ_24tmpVar16,0);
                tmp7 = &MMC_CDR(*tmp7);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp7 = mmc_mk_nil();
            tmpMeta6 = __omcQ_24tmpVar17;
          }
          _result = omc_List_map(threadData, omc_List_sort(threadData, tmpMeta6, boxvar_PackageManagement_compareVersionsAndSupportLevel), boxvar_Util_tuple31);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
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
  ;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _result;
}
modelica_metatype boxptr_PackageManagement_versionsThatProvideTheWanted(threadData_t *threadData, modelica_metatype _id, modelica_metatype _version, modelica_metatype _printError)
{
  modelica_integer tmp1;
  modelica_metatype _result = NULL;
  tmp1 = mmc_unbox_integer(_printError);
  _result = omc_PackageManagement_versionsThatProvideTheWanted(threadData, _id, _version, tmp1);
  /* skip box _result; list<String> */
  return _result;
}

DLLDirection
modelica_metatype omc_PackageManagement_getAllProvidedVersionsForLibrary(threadData_t *threadData, modelica_string _lib, modelica_boolean _printError)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _result = NULL;
  modelica_metatype _obj = NULL;
  modelica_metatype _libobject = NULL;
  modelica_metatype _vers = NULL;
  modelica_metatype _provides = NULL;
  modelica_metatype _tree = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  // _obj has no default value.
  // _libobject has no default value.
  // _vers has no default value.
  // _provides has no default value.
  // _tree has no default value.
  // _values has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _result = tmpMeta1;

  _tree = omc_AvlSetString_new(threadData);

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
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_integer tmp8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          _obj = omc_PackageManagement_getPackageIndex(threadData, _printError);

          _libobject = omc_JSON_get(threadData, omc_JSON_get(threadData, _obj, _OMC_LIT19), _lib);

          _vers = omc_JSON_get(threadData, _libobject, _OMC_LIT29);

          {
            modelica_metatype _version;
            for (tmpMeta6 = omc_JSON_getKeys(threadData, _vers); !listEmpty(tmpMeta6); tmpMeta6=MMC_CDR(tmpMeta6))
            {
              _version = MMC_CAR(tmpMeta6);
              _tree = omc_AvlSetString_add(threadData, _tree, _version);

              _provides = omc_JSON_getOrDefault(threadData, omc_JSON_get(threadData, _vers, _version), _OMC_LIT63, omc_JSON_emptyArray(threadData, ((modelica_integer) 0)));

              tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = omc_JSON_size(threadData, _provides);
              if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
              {
                modelica_integer _i;
                for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
                {
                  _tree = omc_AvlSetString_add(threadData, _tree, omc_JSON_getString(threadData, omc_JSON_at(threadData, _provides, _i)));
                }
              }
            }
          }

          tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
          _result = omc_AvlSetString_listKeys(threadData, _tree, tmpMeta11);
          goto tmp3_done;
        }
        case 1: {
          /* Pattern matching succeeded */
          goto _return;
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
  ;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _result;
}
modelica_metatype boxptr_PackageManagement_getAllProvidedVersionsForLibrary(threadData_t *threadData, modelica_metatype _lib, modelica_metatype _printError)
{
  modelica_integer tmp1;
  modelica_metatype _result = NULL;
  tmp1 = mmc_unbox_integer(_printError);
  _result = omc_PackageManagement_getAllProvidedVersionsForLibrary(threadData, _lib, tmp1);
  /* skip box _result; list<String> */
  return _result;
}

DLLDirection
modelica_metatype omc_PackageManagement_getPackageIndex(threadData_t *threadData, modelica_boolean _printError)
{
  jmp_buf *old_mmc_jumper = threadData->mmc_jumper;
  modelica_metatype _obj = NULL;
  modelica_string _userLibraries = NULL;
  modelica_string _packageIndex = NULL;
  modelica_string _gd = NULL;
  modelica_string _mp = NULL;
  modelica_metatype _mps = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _obj has no default value.
  // _userLibraries has no default value.
  // _packageIndex has no default value.
  // _gd has no default value.
  // _mp has no default value.
  // _mps has no default value.
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
          _obj = getGlobalRoot(((modelica_integer) 29));

          goto _return;
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

  _mp = omc_Settings_getModelicaPath(threadData, omc_Testsuite_isRunning(threadData));

  _gd = _OMC_LIT64;

  _mps = omc_System_strtok(threadData, _mp, _gd);

  _userLibraries = omc_PackageManagement_getUserLibraryPath(threadData);

  tmpMeta5 = stringAppend(_userLibraries,_OMC_LIT65);
  _packageIndex = tmpMeta5;

  _obj = omc_JSON_emptyObject(threadData);

  if(((!listMember(_userLibraries, _mps)) && (!listMember(omc_Util_removeLastNChar(threadData, _userLibraries, ((modelica_integer) 1)), _mps))))
  {
    if(_printError)
    {
      tmpMeta6 = mmc_mk_cons(_mp, mmc_mk_cons(_userLibraries, MMC_REFSTRUCTLIT(mmc_nil)));
      omc_Error_addMessage(threadData, _OMC_LIT68, tmpMeta6);
    }

    goto _return;
  }

  if((!omc_System_regularFileExists(threadData, _packageIndex)))
  {
    if((!omc_PackageManagement_updateIndex(threadData)))
    {
      goto _return;
    }
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
          _obj = omc_JSON_parseFile(threadData, _packageIndex);

          setGlobalRoot(((modelica_integer) 29), _obj);
          goto tmp8_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_cons(_packageIndex, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addSourceMessage(threadData, _OMC_LIT36, tmpMeta11, omc_PackageManagement_makeSourceInfo(threadData, omc_PackageManagement_getIndexPath(threadData)));
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
      MMC_THROW_INTERNAL();
      tmp8_done2:;
    }
  }
  ;
  _return: OMC_LABEL_UNUSED
  threadData->mmc_jumper = old_mmc_jumper;
  return _obj;
}
modelica_metatype boxptr_PackageManagement_getPackageIndex(threadData_t *threadData, modelica_metatype _printError)
{
  modelica_integer tmp1;
  modelica_metatype _obj = NULL;
  tmp1 = mmc_unbox_integer(_printError);
  _obj = omc_PackageManagement_getPackageIndex(threadData, tmp1);
  /* skip box _obj; JSON */
  return _obj;
}

DLLDirection
modelica_boolean omc_PackageManagement_upgradeInstalledPackages(threadData_t *threadData, modelica_boolean _installNewestVersions)
{
  modelica_boolean _success;
  modelica_metatype _installedLibraries = NULL;
  modelica_metatype _versions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  // _installedLibraries has no default value.
  // _versions has no default value.
  _success = 1 /* true */;

  _installedLibraries = omc_PackageManagement_getInstalledLibraries(threadData);

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  {
    modelica_metatype _pkg;
    for (tmpMeta1 = omc_PackageManagement_AvailableLibraries_listKeys(threadData, _installedLibraries, tmpMeta6); !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _pkg = MMC_CAR(tmpMeta1);
      _versions = omc_PackageManagement_AvailableLibraries_get(threadData, _installedLibraries, _pkg);

      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      {
        modelica_metatype _version;
        for (tmpMeta2 = omc_PackageManagement_VersionMap_listKeys(threadData, _versions, tmpMeta4); !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
        {
          _version = MMC_CAR(tmpMeta2);
          _success = (_success && omc_PackageManagement_installPackage(threadData, _pkg, omc_SemanticVersion_toString(threadData, _version), 1 /* true */, 0 /* false */));
        }
      }

      if(_installNewestVersions)
      {
        _success = (_success && omc_PackageManagement_installPackage(threadData, _pkg, _OMC_LIT16, 0 /* false */, 0 /* false */));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_PackageManagement_upgradeInstalledPackages(threadData_t *threadData, modelica_metatype _installNewestVersions)
{
  modelica_integer tmp1;
  modelica_boolean _success;
  modelica_metatype out_success;
  tmp1 = mmc_unbox_integer(_installNewestVersions);
  _success = omc_PackageManagement_upgradeInstalledPackages(threadData, tmp1);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_boolean omc_PackageManagement_updateIndex(threadData_t *threadData)
{
  modelica_boolean _success;
  modelica_string _userLibraries = NULL;
  modelica_string _packageIndex = NULL;
  modelica_string _url = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _success has no default value.
  // _userLibraries has no default value.
  // _packageIndex has no default value.
  _url = _OMC_LIT69;
  _userLibraries = omc_PackageManagement_getUserLibraryPath(threadData);

  omc_Util_createDirectoryTree(threadData, _userLibraries);

  tmpMeta1 = stringAppend(_userLibraries,_OMC_LIT65);
  _packageIndex = tmpMeta1;

  tmpMeta3 = mmc_mk_box2(0, _OMC_LIT73, _packageIndex);
  tmpMeta2 = mmc_mk_cons(tmpMeta3, MMC_REFSTRUCTLIT(mmc_nil));
  if((!omc_Curl_multiDownload(threadData, tmpMeta2, omc_Config_noProc(threadData))))
  {
    tmpMeta4 = mmc_mk_cons(_OMC_LIT69, mmc_mk_cons(_packageIndex, MMC_REFSTRUCTLIT(mmc_nil)));
    omc_Error_addMessage(threadData, _OMC_LIT76, tmpMeta4);

    _success = 0 /* false */;
  }
  else
  {
    omc_Error_addSourceMessage(threadData, _OMC_LIT72, _OMC_LIT73, omc_PackageManagement_makeSourceInfo(threadData, omc_PackageManagement_getIndexPath(threadData)));

    _success = 1 /* true */;
  }

  setGlobalRoot(((modelica_integer) 29), mmc_mk_integer(((modelica_integer) 0)));
  _return: OMC_LABEL_UNUSED
  return _success;
}
modelica_metatype boxptr_PackageManagement_updateIndex(threadData_t *threadData)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_PackageManagement_updateIndex(threadData);
  out_success = mmc_mk_icon(_success);
  return out_success;
}

DLLDirection
modelica_boolean omc_PackageManagement_compareVersionsAndSupportLevel(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2)
{
  modelica_boolean _c;
  modelica_integer _s1;
  modelica_integer _s2;
  modelica_metatype _v1 = NULL;
  modelica_metatype _v2 = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _c has no default value.
  // _s1 has no default value.
  // _s2 has no default value.
  // _v1 has no default value.
  // _v2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _x1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  _v1 = tmpMeta2;
  _s1 = tmp4  /* pattern as ty=enumeration(noSupport, unknown, obsolete, experimental, support, fullSupport) */;

  /* Pattern-matching assignment */
  tmpMeta5 = _x2;
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  _v2 = tmpMeta6;
  _s2 = tmp8  /* pattern as ty=enumeration(noSupport, unknown, obsolete, experimental, support, fullSupport) */;

  if(((modelica_integer)_s1 < (modelica_integer)_s2))
  {
    _c = 1 /* true */;

    goto _return;
  }
  else
  {
    if(((modelica_integer)_s1 > (modelica_integer)_s2))
    {
      _c = 0 /* false */;

      goto _return;
    }
  }

  if((!omc_SemanticVersion_isPrerelease(threadData, _v1) != !omc_SemanticVersion_isPrerelease(threadData, _v2)))
  {
    _c = omc_SemanticVersion_isPrerelease(threadData, _v2);

    goto _return;
  }

  _c = (omc_SemanticVersion_compare(threadData, _v1, _v2, 1 /* true */, 1 /* true */) < ((modelica_integer) 0));
  _return: OMC_LABEL_UNUSED
  return _c;
}
modelica_metatype boxptr_PackageManagement_compareVersionsAndSupportLevel(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2)
{
  modelica_boolean _c;
  modelica_metatype out_c;
  _c = omc_PackageManagement_compareVersionsAndSupportLevel(threadData, _x1, _x2);
  out_c = mmc_mk_icon(_c);
  return out_c;
}

DLLDirection
modelica_integer omc_PackageManagement_getSupportLevel(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_integer _support;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _support has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _obj;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 7; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (11 != MMC_STRLEN(tmpMeta6) || strcmp(MMC_STRINGDATA(_OMC_LIT80), MMC_STRINGDATA(tmpMeta6)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 6;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (7 != MMC_STRLEN(tmpMeta7) || strcmp(MMC_STRINGDATA(_OMC_LIT62), MMC_STRINGDATA(tmpMeta7)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 5;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (12 != MMC_STRLEN(tmpMeta8) || strcmp(MMC_STRINGDATA(_OMC_LIT81), MMC_STRINGDATA(tmpMeta8)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 4;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (8 != MMC_STRLEN(tmpMeta9) || strcmp(MMC_STRINGDATA(_OMC_LIT82), MMC_STRINGDATA(tmpMeta9)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 3;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (7 != MMC_STRLEN(tmpMeta10) || strcmp(MMC_STRINGDATA(_OMC_LIT83), MMC_STRINGDATA(tmpMeta10)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 2;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta11;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,4,1) == 0) goto tmp3_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          if (9 != MMC_STRLEN(tmpMeta11) || strcmp(MMC_STRINGDATA(_OMC_LIT84), MMC_STRINGDATA(tmpMeta11)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta12 = stringAppend(_OMC_LIT77,omc_JSON_toString(threadData, _obj, 0 /* false */));
          omc_Error_addInternalError(threadData, tmpMeta12, _OMC_LIT79);
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
  _support = tmp1;
  _return: OMC_LABEL_UNUSED
  return _support;
}
modelica_metatype boxptr_PackageManagement_getSupportLevel(threadData_t *threadData, modelica_metatype _obj)
{
  modelica_integer _support;
  modelica_metatype out_support;
  _support = omc_PackageManagement_getSupportLevel(threadData, _obj);
  out_support = mmc_mk_icon(_support);
  return out_support;
}

DLLDirection
modelica_boolean omc_PackageManagement_providesExpectedVersion(threadData_t *threadData, modelica_string _version, modelica_metatype _provides, modelica_metatype _wantedVersion)
{
  modelica_boolean _matches;
  modelica_metatype _providedVersions = NULL;
  modelica_string _str = NULL;
  modelica_metatype _thisVersion = NULL;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _matches has no default value.
  // _providedVersions has no default value.
  // _str has no default value.
  // _thisVersion has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _wantedVersion;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 3; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,1,1) == 0) goto tmp2_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          _str = tmpMeta5;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!((stringEqual(_str, _OMC_LIT85)) || (stringEqual(_str, _OMC_LIT16)))) goto tmp2_end;
          _matches = 1 /* true */;

          goto _return;
          goto goto_1;
          goto tmp2_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          modelica_metatype tmpMeta8;
          modelica_integer tmp9;
          modelica_metatype tmpMeta10;
          modelica_integer tmp11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          if (mmc__uniontype__metarecord__typedef__equal(tmp3_1,0,5) == 0) goto tmp2_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 2));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (0 != tmp7) goto tmp2_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 3));
          tmp9 = mmc_unbox_integer(tmpMeta8);
          if (0 != tmp9) goto tmp2_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 4));
          tmp11 = mmc_unbox_integer(tmpMeta10);
          if (0 != tmp11) goto tmp2_end;
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp3_1), 5));
          if (listEmpty(tmpMeta12)) goto tmp2_end;
          tmpMeta13 = MMC_CAR(tmpMeta12);
          tmpMeta14 = MMC_CDR(tmpMeta12);
          if (7 != MMC_STRLEN(tmpMeta13) || strcmp(MMC_STRINGDATA(_OMC_LIT85), MMC_STRINGDATA(tmpMeta13)) != 0) goto tmp2_end;
          if (!listEmpty(tmpMeta14)) goto tmp2_end;
          
          /* Pattern matching succeeded */
          _matches = 1 /* true */;

          goto _return;
          goto goto_1;
          goto tmp2_done;
        }
        case 2: {
          
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

  _providedVersions = omc_JSON_getStringList(threadData, _provides);

  _matches = 0 /* false */;

  tmpMeta17 = mmc_mk_cons(_version, _providedVersions);
  {
    modelica_metatype _v;
    for (tmpMeta15 = tmpMeta17; !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
    {
      _v = MMC_CAR(tmpMeta15);
      _thisVersion = omc_SemanticVersion_parse(threadData, _v, 1 /* true */);

      if((omc_SemanticVersion_compare(threadData, _thisVersion, _wantedVersion, omc_SemanticVersion_isPrerelease(threadData, _wantedVersion), 0 /* false */) == ((modelica_integer) 0)))
      {
        _matches = 1 /* true */;

        goto _return;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _matches;
}
modelica_metatype boxptr_PackageManagement_providesExpectedVersion(threadData_t *threadData, modelica_metatype _version, modelica_metatype _provides, modelica_metatype _wantedVersion)
{
  modelica_boolean _matches;
  modelica_metatype out_matches;
  _matches = omc_PackageManagement_providesExpectedVersion(threadData, _version, _provides, _wantedVersion);
  out_matches = mmc_mk_icon(_matches);
  return out_matches;
}

DLLDirection
modelica_metatype omc_PackageManagement_getLibrarySubdirectories(threadData_t *threadData, modelica_string _inPath)
{
  modelica_metatype _outSubdirectories = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _allSubdirectories = NULL;
  modelica_string _pd = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _outSubdirectories = tmpMeta1;
  _allSubdirectories = omc_System_subDirectories(threadData, _inPath);
  _pd = _OMC_LIT8;
  {
    modelica_metatype _dir;
    for (tmpMeta2 = _allSubdirectories; !listEmpty(tmpMeta2); tmpMeta2=MMC_CDR(tmpMeta2))
    {
      _dir = MMC_CAR(tmpMeta2);
      tmpMeta3 = stringAppend(_inPath,_pd);
      tmpMeta4 = stringAppend(tmpMeta3,_dir);
      tmpMeta5 = stringAppend(tmpMeta4,_pd);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT86);
      if(omc_System_regularFileExists(threadData, tmpMeta6))
      {
        tmpMeta7 = mmc_mk_cons(_dir, _outSubdirectories);
        _outSubdirectories = tmpMeta7;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outSubdirectories;
}

DLLDirection
modelica_metatype omc_PackageManagement_getInstalledLibraryVersions(threadData_t *threadData, modelica_string _libraryName)
{
  modelica_metatype _libraryVersions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _tree = NULL;
  modelica_metatype _versionTree = NULL;
  modelica_metatype _versions = NULL;
  modelica_metatype tmpMeta2;
  modelica_string _versionStr = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _libraryVersions = tmpMeta1;
  // _tree has no default value.
  // _versionTree has no default value.
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _versions = tmpMeta2;
  // _versionStr has no default value.
  _tree = omc_PackageManagement_getInstalledLibraries(threadData);

  _versionTree = omc_PackageManagement_AvailableLibraries_get(threadData, _tree, _libraryName);

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _versions = omc_PackageManagement_VersionMap_listKeys(threadData, _versionTree, tmpMeta3);

  {
    modelica_metatype _version;
    for (tmpMeta4 = _versions; !listEmpty(tmpMeta4); tmpMeta4=MMC_CDR(tmpMeta4))
    {
      _version = MMC_CAR(tmpMeta4);
      _versionStr = omc_PackageManagement_VersionMap_keyStr(threadData, _version);

      if((stringCompare(_versionStr, _OMC_LIT16) > ((modelica_integer) 0)))
      {
        tmpMeta5 = mmc_mk_cons(_versionStr, _libraryVersions);
        _libraryVersions = tmpMeta5;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _libraryVersions;
}

DLLDirection
modelica_metatype omc_PackageManagement_getInstalledLibraries(threadData_t *threadData)
{
  modelica_metatype _tree = NULL;
  modelica_string _mp = NULL;
  modelica_string _gd = NULL;
  modelica_string _first = NULL;
  modelica_string _ver = NULL;
  modelica_string _lib = NULL;
  modelica_metatype _mps = NULL;
  modelica_metatype _files = NULL;
  modelica_metatype _dirs = NULL;
  modelica_metatype _rest = NULL;
  modelica_metatype _versions = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tree has no default value.
  // _mp has no default value.
  // _gd has no default value.
  // _first has no default value.
  // _ver has no default value.
  // _lib has no default value.
  // _mps has no default value.
  // _files has no default value.
  // _dirs has no default value.
  // _rest has no default value.
  // _versions has no default value.
  _mp = omc_Settings_getModelicaPath(threadData, omc_Testsuite_isRunning(threadData));

  _gd = _OMC_LIT64;

  _mps = omc_System_strtok(threadData, _mp, _gd);

  _tree = omc_PackageManagement_AvailableLibraries_new(threadData);

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _files = tmpMeta1;

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _dirs = tmpMeta2;

  {
    modelica_metatype _mp;
    for (tmpMeta3 = _mps; !listEmpty(tmpMeta3); tmpMeta3=MMC_CDR(tmpMeta3))
    {
      _mp = MMC_CAR(tmpMeta3);
      {
        modelica_metatype __omcQ_24tmpVar19;
        modelica_metatype* tmp5;
        modelica_metatype tmpMeta6;
        modelica_metatype tmpMeta7;
        modelica_metatype tmpMeta8;
        modelica_string __omcQ_24tmpVar18;
        modelica_integer tmp9;
        modelica_metatype _file_loopVar = 0;
        modelica_metatype _file;
        _file_loopVar = omc_System_moFiles(threadData, _mp);
        tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar19 = tmpMeta6; /* defaultValue */
        tmp5 = &__omcQ_24tmpVar19;
        while(1) {
          tmp9 = 1;
          if (!listEmpty(_file_loopVar)) {
            _file = MMC_CAR(_file_loopVar);
            _file_loopVar = MMC_CDR(_file_loopVar);
            tmp9--;
          }
          if (tmp9 == 0) {
            tmpMeta7 = stringAppend(_mp,_OMC_LIT8);
            tmpMeta8 = stringAppend(tmpMeta7,_file);
            __omcQ_24tmpVar18 = tmpMeta8;
            *tmp5 = mmc_mk_cons(__omcQ_24tmpVar18,0);
            tmp5 = &MMC_CDR(*tmp5);
          } else if (tmp9 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp5 = mmc_mk_nil();
        tmpMeta4 = __omcQ_24tmpVar19;
      }
      _files = listAppend(tmpMeta4, _files);

      {
        modelica_metatype __omcQ_24tmpVar21;
        modelica_metatype* tmp11;
        modelica_metatype tmpMeta12;
        modelica_metatype tmpMeta13;
        modelica_metatype tmpMeta14;
        modelica_string __omcQ_24tmpVar20;
        modelica_integer tmp15;
        modelica_metatype _dir_loopVar = 0;
        modelica_metatype _dir;
        _dir_loopVar = omc_PackageManagement_getLibrarySubdirectories(threadData, _mp);
        tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar21 = tmpMeta12; /* defaultValue */
        tmp11 = &__omcQ_24tmpVar21;
        while(1) {
          tmp15 = 1;
          if (!listEmpty(_dir_loopVar)) {
            _dir = MMC_CAR(_dir_loopVar);
            _dir_loopVar = MMC_CDR(_dir_loopVar);
            tmp15--;
          }
          if (tmp15 == 0) {
            tmpMeta13 = stringAppend(_mp,_OMC_LIT8);
            tmpMeta14 = stringAppend(tmpMeta13,_dir);
            __omcQ_24tmpVar20 = tmpMeta14;
            *tmp11 = mmc_mk_cons(__omcQ_24tmpVar20,0);
            tmp11 = &MMC_CDR(*tmp11);
          } else if (tmp15 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp11 = mmc_mk_nil();
        tmpMeta10 = __omcQ_24tmpVar21;
      }
      _dirs = listAppend(tmpMeta10, _dirs);
    }
  }

  {
    modelica_metatype _path;
    for (tmpMeta17 = listAppend(_files, _dirs); !listEmpty(tmpMeta17); tmpMeta17=MMC_CDR(tmpMeta17))
    {
      _path = MMC_CAR(tmpMeta17);
      _lib = omc_System_basename(threadData, _path);

      if(omc_StringUtil_endsWith(threadData, _lib, _OMC_LIT54))
      {
        _lib = omc_Util_removeLast3Char(threadData, _lib);
      }

      /* Pattern-matching assignment */
      tmpMeta18 = omc_System_strtok(threadData, _lib, _OMC_LIT48);
      if (listEmpty(tmpMeta18)) MMC_THROW_INTERNAL();
      tmpMeta19 = MMC_CAR(tmpMeta18);
      tmpMeta20 = MMC_CDR(tmpMeta18);
      _first = tmpMeta19;
      _rest = tmpMeta20;

      _ver = stringDelimitList(_rest, _OMC_LIT48);

      _versions = (omc_PackageManagement_AvailableLibraries_hasKey(threadData, _tree, _first)?omc_PackageManagement_AvailableLibraries_get(threadData, _tree, _first):omc_PackageManagement_VersionMap_new(threadData));

      _versions = omc_PackageManagement_VersionMap_add(threadData, _versions, omc_SemanticVersion_parse(threadData, _ver, 0 /* false */), _path, boxvar_PackageManagement_VersionMap_addConflictReplace);

      _tree = omc_PackageManagement_AvailableLibraries_add(threadData, _tree, _first, _versions, boxvar_PackageManagement_AvailableLibraries_addConflictReplace);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_string _inValue, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_metatype _key = NULL;
      modelica_string _value = NULL;
      modelica_integer _key_comp;
      modelica_metatype _outTree = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _key_comp has no default value.
      // _outTree has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box3(4, &PackageManagement_VersionMap_Tree_LEAF__desc, _inKey, _inValue);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta6;
          /* Pattern matching succeeded */
          _key_comp = omc_PackageManagement_VersionMap_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_PackageManagement_VersionMap_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
            _tree = tmpMeta7;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_PackageManagement_VersionMap_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
              _tree = tmpMeta8;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key);

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _value;
                _tree = tmpMeta9;
              }
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_PackageManagement_VersionMap_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _key_comp = omc_PackageManagement_VersionMap_keyCompare(threadData, _inKey, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta10 = mmc_mk_box3(4, &PackageManagement_VersionMap_Tree_LEAF__desc, _inKey, _inValue);
            tmpMeta11 = mmc_mk_box6(3, &PackageManagement_VersionMap_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT87);
            _outTree = tmpMeta11;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta12 = mmc_mk_box3(4, &PackageManagement_VersionMap_Tree_LEAF__desc, _inKey, _inValue);
              tmpMeta13 = mmc_mk_box6(3, &PackageManagement_VersionMap_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT87, tmpMeta12);
              _outTree = tmpMeta13;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
                memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = _value;
                _tree = tmpMeta14;
              }

              _outTree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_outTree:omc_PackageManagement_VersionMap_balance(threadData, _outTree));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_string omc_PackageManagement_VersionMap_addConflictDefault(threadData_t *threadData, modelica_string _newValue, modelica_string _oldValue, modelica_metatype _key)
{
  modelica_string _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_string omc_PackageManagement_VersionMap_addConflictFail(threadData_t *threadData, modelica_string _newValue, modelica_string _oldValue, modelica_metatype _key)
{
  modelica_string _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_string omc_PackageManagement_VersionMap_addConflictKeep(threadData_t *threadData, modelica_string _newValue, modelica_string _oldValue, modelica_metatype _key)
{
  modelica_string _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _oldValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_string omc_PackageManagement_VersionMap_addConflictReplace(threadData_t *threadData, modelica_string _newValue, modelica_string _oldValue, modelica_metatype _key)
{
  modelica_string _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _newValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _key = NULL;
  modelica_string _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_PackageManagement_VersionMap_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _key, modelica_fnptr _fn)
{
  modelica_metatype _tree = NULL;
  modelica_integer _key_comp;
  modelica_metatype _new_tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key_comp has no default value.
  // _new_tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box3(4, &PackageManagement_VersionMap_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _key_comp = omc_PackageManagement_VersionMap_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_PackageManagement_VersionMap_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _key, ((modelica_fnptr) _fn));
            _tree = tmpMeta6;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_PackageManagement_VersionMap_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _key, ((modelica_fnptr) _fn));
              _tree = tmpMeta7;
            }
            else
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))));
              _tree = tmpMeta8;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_PackageManagement_VersionMap_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _key_comp = omc_PackageManagement_VersionMap_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta9 = mmc_mk_box3(4, &PackageManagement_VersionMap_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
            tmpMeta10 = mmc_mk_box6(3, &PackageManagement_VersionMap_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta9, _OMC_LIT87);
            _new_tree = tmpMeta10;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta11 = mmc_mk_box3(4, &PackageManagement_VersionMap_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
              tmpMeta12 = mmc_mk_box6(3, &PackageManagement_VersionMap_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT87, tmpMeta11);
              _new_tree = tmpMeta12;
            }
            else
            {
              tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
              memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))));
              _tree = tmpMeta13;

              _new_tree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_new_tree:omc_PackageManagement_VersionMap_balance(threadData, _new_tree));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_VersionMap_balance(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_integer _lh;
      modelica_integer _rh;
      modelica_integer _diff;
      modelica_metatype _balanced_tree = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lh has no default value.
      // _rh has no default value.
      // _diff has no default value.
      // _balanced_tree has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _lh = omc_PackageManagement_VersionMap_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))));

          _rh = omc_PackageManagement_VersionMap_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))));

          _diff = _lh - _rh;

          if((_diff < ((modelica_integer) -1)))
          {
            _balanced_tree = ((omc_PackageManagement_VersionMap_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))) > ((modelica_integer) 0))?omc_PackageManagement_VersionMap_rotateLeft(threadData, omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _outTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), omc_PackageManagement_VersionMap_rotateRight(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))):omc_PackageManagement_VersionMap_rotateLeft(threadData, _outTree));
          }
          else
          {
            if((_diff > ((modelica_integer) 1)))
            {
              _balanced_tree = ((omc_PackageManagement_VersionMap_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))) < ((modelica_integer) 0))?omc_PackageManagement_VersionMap_rotateRight(threadData, omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _outTree, omc_PackageManagement_VersionMap_rotateLeft(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))))):omc_PackageManagement_VersionMap_rotateRight(threadData, _outTree));
            }
            else
            {
              if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4)))) != ((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh))))
              {
                tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh)));
                _outTree = tmpMeta6;

                _balanced_tree = _outTree;
              }
              else
              {
                _balanced_tree = _outTree;
              }
            }
          }
          tmpMeta1 = _balanced_tree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_PackageManagement_VersionMap_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBalance has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_PackageManagement_VersionMap_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 5)))) - omc_PackageManagement_VersionMap_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 6))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _outBalance = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBalance;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_VersionMap_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_metatype out_outBalance;
  _outBalance = omc_PackageManagement_VersionMap_calculateBalance(threadData, _inNode);
  out_outBalance = mmc_mk_icon(_outBalance);
  return out_outBalance;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      modelica_metatype _key = NULL;
      modelica_string _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _outResult = omc_PackageManagement_VersionMap_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), ((modelica_fnptr) _inFunc), _outResult);

          _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
          _inStartValue = _outResult;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta7;
          _value = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _outResult;
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
  _outResult = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue)
{
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = __omcQ_24in_5Fvalue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_boolean _c;
      int tmp4;
      // _c has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5);
          _value = tmpMeta7;
          tmp6 = mmc_unbox_integer(tmpMeta5);
          _c = tmp6  /* pattern as ty=Boolean */;

          if(_c)
          {
            _value = omc_PackageManagement_VersionMap_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _value);

            _value = omc_PackageManagement_VersionMap_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _value);
          }
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL);
          _value = tmpMeta8;
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _value;
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
  _value = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2)
{
  modelica_metatype _foldArg1 = NULL;
  modelica_metatype _foldArg2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _foldArg1 = __omcQ_24in_5FfoldArg1;
  _foldArg2 = __omcQ_24in_5FfoldArg2;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _foldArg1 = omc_PackageManagement_VersionMap_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = omc_PackageManagement_VersionMap_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  if (out_foldArg2) { *out_foldArg2 = _foldArg2; }
  return _foldArg1;
}

DLLDirection
void omc_PackageManagement_VersionMap_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_PackageManagement_VersionMap_forEach(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _func));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));

          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp2_done;
        }
        case 5: {
          
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
modelica_metatype omc_PackageManagement_VersionMap_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype _key = NULL;
  modelica_string _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _OMC_LIT87;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_PackageManagement_VersionMap_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_string omc_PackageManagement_VersionMap_get(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key)
{
  modelica_string _value = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
  modelica_string tmp6 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
  _k = tmpMeta1;

  { /* match expression */
    modelica_integer tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = omc_PackageManagement_VersionMap_keyCompare(threadData, _key, _k);
    tmp9_2 = _tree;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 4; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,1,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmp6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
          goto tmp8_done;
        }
        case 1: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmp6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
          goto tmp8_done;
        }
        case 2: {
          if (1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        case 3: {
          if (-1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _value = tmp6;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key)
{
  modelica_metatype _value = NULL;
  modelica_metatype _k = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _key;
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
  _k = tmpMeta1;

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = omc_PackageManagement_VersionMap_keyCompare(threadData, _key, _k);
    tmp8_2 = _tree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 5; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,1,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp7_done;
        }
        case 1: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp7_done;
        }
        case 2: {
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_none();
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _value = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_boolean omc_PackageManagement_VersionMap_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype _key = NULL;
  modelica_integer _key_comp;
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  modelica_boolean tmp5 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = 0 /* false */;
  // _key has no default value.
  // _key_comp has no default value.
  // _tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          goto _return;
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
  _key = tmpMeta1;

  _key_comp = omc_PackageManagement_VersionMap_keyCompare(threadData, _inKey, _key);

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = _key_comp;
    tmp8_2 = _inTree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 4; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 6));
          _tree = tmpMeta10;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
          
          _tree = tmpMeta11;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp5 = 0 /* false */;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _comp = tmp5;
  _return: OMC_LABEL_UNUSED
  return _comp;
}
modelica_metatype boxptr_PackageManagement_VersionMap_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype out_comp;
  _comp = omc_PackageManagement_VersionMap_hasKey(threadData, _inTree, _inKey);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_PackageManagement_VersionMap_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHeight has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 4))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _outHeight = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outHeight;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_VersionMap_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_metatype out_outHeight;
  _outHeight = omc_PackageManagement_VersionMap_height(threadData, _inNode);
  out_outHeight = mmc_mk_icon(_outHeight);
  return out_outHeight;
}

DLLDirection
void omc_PackageManagement_VersionMap_intersection(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_PackageManagement_VersionMap_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
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
modelica_metatype boxptr_PackageManagement_VersionMap_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_PackageManagement_VersionMap_isEmpty(threadData, _tree);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _treeToJoin;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _tree;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          _tree = omc_PackageManagement_VersionMap_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));

          _tree = omc_PackageManagement_VersionMap_join(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 5))), ((modelica_fnptr) _conflictFunc));
          /* Tail recursive call */
          __omcQ_24in_5Ftree = _tree;
          _treeToJoin = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_PackageManagement_VersionMap_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_integer omc_PackageManagement_VersionMap_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  _outResult = omc_SemanticVersion_compare(threadData, _inKey1, _inKey2, 1 /* true */, 1 /* true */);
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_PackageManagement_VersionMap_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_PackageManagement_VersionMap_keyCompare(threadData, _inKey1, _inKey2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_string omc_PackageManagement_VersionMap_keyStr(threadData_t *threadData, modelica_metatype _inKey)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_SemanticVersion_toString(threadData, _inKey);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_metatype _key = NULL;
      int tmp4;
      // _key has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_PackageManagement_VersionMap_listKeys(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

          tmpMeta6 = mmc_mk_cons(_key, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_key, _lst);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _lst = omc_PackageManagement_VersionMap_listKeysReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), _lst);

          tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_string _value = NULL;
      int tmp4;
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _value = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_PackageManagement_VersionMap_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

          tmpMeta6 = mmc_mk_cons(_value, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _value = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_value, _lst);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_metatype _key = NULL;
      modelica_string _value = NULL;
      modelica_string _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_PackageManagement_VersionMap_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc));

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          _new_right = omc_PackageManagement_VersionMap_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc));

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &PackageManagement_VersionMap_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_metatype _key = NULL;
      modelica_string _value = NULL;
      modelica_string _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_PackageManagement_VersionMap_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          _new_right = omc_PackageManagement_VersionMap_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &PackageManagement_VersionMap_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_outResult) { *out_outResult = _outResult; }
  return _outTree;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_new(threadData_t *threadData)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _OMC_LIT87;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_PackageManagement_VersionMap_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT88,omc_PackageManagement_VersionMap_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT28);
          tmpMeta8 = stringAppend(tmpMeta7,omc_PackageManagement_VersionMap_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT89);
          tmp1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT88,omc_PackageManagement_VersionMap_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT28);
          tmpMeta12 = stringAppend(tmpMeta11,omc_PackageManagement_VersionMap_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT89);
          tmp1 = tmpMeta13;
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_PackageManagement_VersionMap_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_string _outString = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _left has no default value.
  // _right has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT90;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_PackageManagement_VersionMap_printNodeStr(threadData, _inTree);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _left = tmpMeta5;
          _right = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(omc_PackageManagement_VersionMap_printTreeStr2(threadData, _left, 1 /* true */, _OMC_LIT16),omc_PackageManagement_VersionMap_printNodeStr(threadData, _inTree));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT24);
          tmpMeta9 = stringAppend(tmpMeta8,omc_PackageManagement_VersionMap_printTreeStr2(threadData, _right, 0 /* false */, _OMC_LIT16));
          tmp1 = tmpMeta9;
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_VersionMap_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
{
  modelica_string _outString = NULL;
  modelica_metatype _val_node = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string _left_str = NULL;
  modelica_string _right_str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _val_node has no default value.
  // _left has no default value.
  // _right has no default value.
  // _left_str has no default value.
  // _right_str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_inIndent,(_isLeft?_OMC_LIT91:_OMC_LIT92));
          tmpMeta6 = stringAppend(omc_PackageManagement_VersionMap_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), 1 /* true */, tmpMeta5),_inIndent);
          tmpMeta7 = stringAppend(tmpMeta6,(_isLeft?_OMC_LIT93:_OMC_LIT94));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT95);
          tmpMeta9 = stringAppend(tmpMeta8,omc_PackageManagement_VersionMap_printNodeStr(threadData, _inTree));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT24);
          tmpMeta11 = stringAppend(_inIndent,(_isLeft?_OMC_LIT92:_OMC_LIT91));
          tmpMeta12 = stringAppend(tmpMeta10,omc_PackageManagement_VersionMap_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), 0 /* false */, tmpMeta11));
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_inIndent,(_isLeft?_OMC_LIT93:_OMC_LIT94));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT95);
          tmpMeta15 = stringAppend(tmpMeta14,omc_PackageManagement_VersionMap_printNodeStr(threadData, _inTree));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT24);
          tmp1 = tmpMeta16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_VersionMap_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_isLeft);
  _outString = omc_PackageManagement_VersionMap_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_PackageManagement_VersionMap_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _t1;
    tmp4_2 = _t2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = referenceEq(_t1, _t2);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_VersionMap_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_PackageManagement_VersionMap_referenceEqOrEmpty(threadData, _t1, _t2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_VersionMap_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))));
          tmpMeta1 = omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _child, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), _OMC_LIT87);
          tmpMeta1 = omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _child, _node, _OMC_LIT87);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_VersionMap_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _child, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))), _node);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _outNode, _OMC_LIT87, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_PackageManagement_VersionMap_setTreeLeftRight(threadData, _child, _OMC_LIT87, _node);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _orig;
    tmp4_2 = _left;
    tmp4_3 = _right;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(4, &PackageManagement_VersionMap_Tree_LEAF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _orig;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp8 = (modelica_boolean)(omc_PackageManagement_VersionMap_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 5))), _left) && omc_PackageManagement_VersionMap_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 6))), _right));
          if(tmp8)
          {
            tmpMeta9 = _orig;
          }
          else
          {
            tmpMeta7 = mmc_mk_box6(3, &PackageManagement_VersionMap_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_PackageManagement_VersionMap_height(threadData, _left)),(modelica_integer)(omc_PackageManagement_VersionMap_height(threadData, _right)))), _left, _right);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box6(3, &PackageManagement_VersionMap_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_PackageManagement_VersionMap_height(threadData, _left)),(modelica_integer)(omc_PackageManagement_VersionMap_height(threadData, _right)))), _left, _right);
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
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_smallestKey(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_metatype _key = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _key has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
  _key = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _key;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      modelica_metatype _key = NULL;
      modelica_string _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _lst = omc_PackageManagement_VersionMap_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), _lst);

          tmpMeta8 = mmc_mk_box2(0, _key, _value);
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _lst);
          _lst = tmpMeta7;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta9;
          _value = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(0, _key, _value);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _lst);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_PackageManagement_VersionMap_update(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key, modelica_string _value)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = omc_PackageManagement_VersionMap_add(threadData, _tree, _key, _value, boxvar_PackageManagement_VersionMap_addConflictReplace);
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_PackageManagement_VersionMap_valueStr(threadData_t *threadData, modelica_string _inValue)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = _inValue;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_add(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      modelica_integer _key_comp;
      modelica_metatype _outTree = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _key_comp has no default value.
      // _outTree has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box3(4, &PackageManagement_AvailableLibraries_Tree_LEAF__desc, _inKey, _inValue);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta6;
          /* Pattern matching succeeded */
          _key_comp = omc_PackageManagement_AvailableLibraries_keyCompare(threadData, _inKey, _key);

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[5] = omc_PackageManagement_AvailableLibraries_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
            _tree = tmpMeta7;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[6] = omc_PackageManagement_AvailableLibraries_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _inKey, _inValue, ((modelica_fnptr) _conflictFunc));
              _tree = tmpMeta8;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _key);

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta9 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta9), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta9))[3] = _value;
                _tree = tmpMeta9;
              }
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_PackageManagement_AvailableLibraries_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          
          /* Pattern matching succeeded */
          _key_comp = omc_PackageManagement_AvailableLibraries_keyCompare(threadData, _inKey, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta10 = mmc_mk_box3(4, &PackageManagement_AvailableLibraries_Tree_LEAF__desc, _inKey, _inValue);
            tmpMeta11 = mmc_mk_box6(3, &PackageManagement_AvailableLibraries_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta10, _OMC_LIT96);
            _outTree = tmpMeta11;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta12 = mmc_mk_box3(4, &PackageManagement_AvailableLibraries_Tree_LEAF__desc, _inKey, _inValue);
              tmpMeta13 = mmc_mk_box6(3, &PackageManagement_AvailableLibraries_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT96, tmpMeta12);
              _outTree = tmpMeta13;
            }
            else
            {
              _value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 2))), _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_conflictFunc), 1)))) (threadData, _inValue, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

              if((!referenceEq((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value)))
              {
                tmpMeta14 = MMC_TAGPTR(mmc_alloc_words(4));
                memcpy(MMC_UNTAGPTR(tmpMeta14), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta14))[3] = _value;
                _tree = tmpMeta14;
              }

              _outTree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_outTree:omc_PackageManagement_AvailableLibraries_balance(threadData, _outTree));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _oldValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_string _key)
{
  modelica_metatype _value = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = _newValue;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_string _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_PackageManagement_AvailableLibraries_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_addUpdate(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_string _key, modelica_fnptr _fn)
{
  modelica_metatype _tree = NULL;
  modelica_integer _key_comp;
  modelica_metatype _new_tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  // _key_comp has no default value.
  // _new_tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box3(4, &PackageManagement_AvailableLibraries_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          _key_comp = omc_PackageManagement_AvailableLibraries_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
            memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[5] = omc_PackageManagement_AvailableLibraries_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), _key, ((modelica_fnptr) _fn));
            _tree = tmpMeta6;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta7 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta7), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta7))[6] = omc_PackageManagement_AvailableLibraries_addUpdate(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _key, ((modelica_fnptr) _fn));
              _tree = tmpMeta7;
            }
            else
            {
              tmpMeta8 = MMC_TAGPTR(mmc_alloc_words(7));
              memcpy(MMC_UNTAGPTR(tmpMeta8), MMC_UNTAGPTR(_tree), 7*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta8))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))));
              _tree = tmpMeta8;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_tree:omc_PackageManagement_AvailableLibraries_balance(threadData, _tree));
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          
          /* Pattern matching succeeded */
          _key_comp = omc_PackageManagement_AvailableLibraries_keyCompare(threadData, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))));

          if((_key_comp == ((modelica_integer) -1)))
          {
            tmpMeta9 = mmc_mk_box3(4, &PackageManagement_AvailableLibraries_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
            tmpMeta10 = mmc_mk_box6(3, &PackageManagement_AvailableLibraries_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), tmpMeta9, _OMC_LIT96);
            _new_tree = tmpMeta10;
          }
          else
          {
            if((_key_comp == ((modelica_integer) 1)))
            {
              tmpMeta11 = mmc_mk_box3(4, &PackageManagement_AvailableLibraries_Tree_LEAF__desc, _key, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_none()) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_none()));
              tmpMeta12 = mmc_mk_box6(3, &PackageManagement_AvailableLibraries_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), mmc_mk_integer(((modelica_integer) 2)), _OMC_LIT96, tmpMeta11);
              _new_tree = tmpMeta12;
            }
            else
            {
              tmpMeta13 = MMC_TAGPTR(mmc_alloc_words(4));
              memcpy(MMC_UNTAGPTR(tmpMeta13), MMC_UNTAGPTR(_tree), 4*sizeof(modelica_metatype));
              ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta13))[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 2))), mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))))) : ((modelica_metatype(*)(threadData_t*, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_fn), 1)))) (threadData, mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))));
              _tree = tmpMeta13;

              _new_tree = _tree;
            }
          }
          tmpMeta1 = ((_key_comp == ((modelica_integer) 0))?_new_tree:omc_PackageManagement_AvailableLibraries_balance(threadData, _new_tree));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_AvailableLibraries_balance(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_integer _lh;
      modelica_integer _rh;
      modelica_integer _diff;
      modelica_metatype _balanced_tree = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _lh has no default value.
      // _rh has no default value.
      // _diff has no default value.
      // _balanced_tree has no default value.
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          _lh = omc_PackageManagement_AvailableLibraries_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))));

          _rh = omc_PackageManagement_AvailableLibraries_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))));

          _diff = _lh - _rh;

          if((_diff < ((modelica_integer) -1)))
          {
            _balanced_tree = ((omc_PackageManagement_AvailableLibraries_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))) > ((modelica_integer) 0))?omc_PackageManagement_AvailableLibraries_rotateLeft(threadData, omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _outTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), omc_PackageManagement_AvailableLibraries_rotateRight(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))):omc_PackageManagement_AvailableLibraries_rotateLeft(threadData, _outTree));
          }
          else
          {
            if((_diff > ((modelica_integer) 1)))
            {
              _balanced_tree = ((omc_PackageManagement_AvailableLibraries_calculateBalance(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))) < ((modelica_integer) 0))?omc_PackageManagement_AvailableLibraries_rotateRight(threadData, omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _outTree, omc_PackageManagement_AvailableLibraries_rotateLeft(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5)))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))))):omc_PackageManagement_AvailableLibraries_rotateRight(threadData, _outTree));
            }
            else
            {
              if((mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4)))) != ((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh))))
              {
                tmpMeta6 = MMC_TAGPTR(mmc_alloc_words(7));
                memcpy(MMC_UNTAGPTR(tmpMeta6), MMC_UNTAGPTR(_outTree), 7*sizeof(modelica_metatype));
                ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta6))[4] = mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(_lh),(modelica_integer)(_rh)));
                _outTree = tmpMeta6;

                _balanced_tree = _outTree;
              }
              else
              {
                _balanced_tree = _outTree;
              }
            }
          }
          tmpMeta1 = _balanced_tree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_PackageManagement_AvailableLibraries_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBalance has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_PackageManagement_AvailableLibraries_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 5)))) - omc_PackageManagement_AvailableLibraries_height(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 6))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _outBalance = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outBalance;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_AvailableLibraries_calculateBalance(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outBalance;
  modelica_metatype out_outBalance;
  _outBalance = omc_PackageManagement_AvailableLibraries_calculateBalance(threadData, _inNode);
  out_outBalance = mmc_mk_icon(_outBalance);
  return out_outBalance;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue)
{
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _outResult = omc_PackageManagement_AvailableLibraries_fold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), ((modelica_fnptr) _inFunc), _outResult);

          _outResult = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
          _inStartValue = _outResult;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta7;
          _value = tmpMeta8;
          /* Pattern matching succeeded */
          tmpMeta1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _outResult;
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
  _outResult = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outResult;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue)
{
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _value = __omcQ_24in_5Fvalue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_boolean _c;
      int tmp4;
      // _c has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_integer tmp6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, &tmpMeta5);
          _value = tmpMeta7;
          tmp6 = mmc_unbox_integer(tmpMeta5);
          _c = tmp6  /* pattern as ty=Boolean */;

          if(_c)
          {
            _value = omc_PackageManagement_AvailableLibraries_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _value);

            _value = omc_PackageManagement_AvailableLibraries_foldCond(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _value);
          }
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          
          /* Pattern matching succeeded */
          /* Pattern-matching tuple assignment */
          tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _value, NULL);
          _value = tmpMeta8;
          tmpMeta1 = _value;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _value;
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
  _value = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2)
{
  modelica_metatype _foldArg1 = NULL;
  modelica_metatype _foldArg2 = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _foldArg1 = __omcQ_24in_5FfoldArg1;
  _foldArg2 = __omcQ_24in_5FfoldArg2;
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          _foldArg1 = omc_PackageManagement_AvailableLibraries_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);

          _foldArg1 = omc_PackageManagement_AvailableLibraries_fold__2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), ((modelica_fnptr) _foldFunc), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          _foldArg1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_foldFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))), _foldArg1, _foldArg2 ,&_foldArg2);
          goto tmp2_done;
        }
        default:
        tmp2_default: OMC_LABEL_UNUSED; {
          
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
  if (out_foldArg2) { *out_foldArg2 = _foldArg2; }
  return _foldArg1;
}

DLLDirection
void omc_PackageManagement_AvailableLibraries_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _tree;
    {
      int tmp3;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp3_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          omc_PackageManagement_AvailableLibraries_forEach(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5))), ((modelica_fnptr) _func));

          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));

          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          ;
          goto tmp2_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((void(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)))) : ((void(*)(threadData_t*, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp2_done;
        }
        case 5: {
          
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
modelica_metatype omc_PackageManagement_AvailableLibraries_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_string _key = NULL;
  modelica_metatype _value = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = _OMC_LIT96;
  // _key has no default value.
  // _value has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _inValues; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      /* Pattern-matching assignment */
      tmpMeta2 = _t;
      tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
      tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
      _key = tmpMeta3;
      _value = tmpMeta4;

      _tree = omc_PackageManagement_AvailableLibraries_add(threadData, _tree, _key, _value, ((modelica_fnptr) _conflictFunc));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_get(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
  modelica_metatype _value = NULL;
  modelica_string _k = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
  _k = tmp1;

  { /* match expression */
    modelica_integer tmp9_1;modelica_metatype tmp9_2;
    tmp9_1 = omc_PackageManagement_AvailableLibraries_keyCompare(threadData, _key, _k);
    tmp9_2 = _tree;
    {
      volatile mmc_switch_type tmp9;
      int tmp10;
      tmp9 = 0;
      for (; tmp9 < 4; tmp9++) {
        switch (MMC_SWITCH_CAST(tmp9)) {
        case 0: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,1,2) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
          goto tmp8_done;
        }
        case 1: {
          if (0 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3)));
          goto tmp8_done;
        }
        case 2: {
          if (1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        case 3: {
          if (-1 != tmp9_1) goto tmp8_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp9_2,0,5) == 0) goto tmp8_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp8_done;
        }
        }
        goto tmp8_end;
        tmp8_end: ;
      }
      goto goto_7;
      goto_7:;
      MMC_THROW_INTERNAL();
      goto tmp8_done;
      tmp8_done:;
    }
  }
  _value = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_string _key)
{
  modelica_metatype _value = NULL;
  modelica_string _k = NULL;
  modelica_string tmp1 = 0;
  modelica_metatype tmpMeta5;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _value has no default value.
  // _k has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _key;
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
  _k = tmp1;

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = omc_PackageManagement_AvailableLibraries_keyCompare(threadData, _key, _k);
    tmp8_2 = _tree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 5; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,1,2) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp7_done;
        }
        case 1: {
          if (0 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_some((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 3))));
          goto tmp7_done;
        }
        case 2: {
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_none();
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _value = tmpMeta5;
  _return: OMC_LABEL_UNUSED
  return _value;
}

DLLDirection
modelica_boolean omc_PackageManagement_AvailableLibraries_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_string _inKey)
{
  modelica_boolean _comp;
  modelica_string _key = NULL;
  modelica_integer _key_comp;
  modelica_metatype _tree = NULL;
  modelica_string tmp1 = 0;
  modelica_boolean tmp5 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = 0 /* false */;
  // _key has no default value.
  // _key_comp has no default value.
  // _tree has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2)));
          goto tmp3_done;
        }
        case 5: {
          
          /* Pattern matching succeeded */
          goto _return;
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
  _key = tmp1;

  _key_comp = omc_PackageManagement_AvailableLibraries_keyCompare(threadData, _inKey, _key);

  { /* match expression */
    modelica_integer tmp8_1;modelica_metatype tmp8_2;
    tmp8_1 = _key_comp;
    tmp8_2 = _inTree;
    {
      volatile mmc_switch_type tmp8;
      int tmp9;
      tmp8 = 0;
      for (; tmp8 < 4; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          if (0 != tmp8_1) goto tmp7_end;
          
          /* Pattern matching succeeded */
          tmp5 = 1 /* true */;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          if (1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 6));
          _tree = tmpMeta10;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 2: {
          modelica_metatype tmpMeta11;
          if (-1 != tmp8_1) goto tmp7_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_2,0,5) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_2), 5));
          
          _tree = tmpMeta11;
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _inTree = _tree;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp7_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          tmp5 = 0 /* false */;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_6;
      goto_6:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _comp = tmp5;
  _return: OMC_LABEL_UNUSED
  return _comp;
}
modelica_metatype boxptr_PackageManagement_AvailableLibraries_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey)
{
  modelica_boolean _comp;
  modelica_metatype out_comp;
  _comp = omc_PackageManagement_AvailableLibraries_hasKey(threadData, _inTree, _inKey);
  out_comp = mmc_mk_icon(_comp);
  return out_comp;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_PackageManagement_AvailableLibraries_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_integer tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outHeight has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          
          /* Pattern matching succeeded */
          tmp1 = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 4))));
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 1);
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = ((modelica_integer) 0);
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
  _outHeight = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outHeight;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_AvailableLibraries_height(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_integer _outHeight;
  modelica_metatype out_outHeight;
  _outHeight = omc_PackageManagement_AvailableLibraries_height(threadData, _inNode);
  out_outHeight = mmc_mk_icon(_outHeight);
  return out_outHeight;
}

DLLDirection
void omc_PackageManagement_AvailableLibraries_intersection(threadData_t *threadData)
{
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  MMC_THROW_INTERNAL();
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_PackageManagement_AvailableLibraries_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _isEmpty has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
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
modelica_metatype boxptr_PackageManagement_AvailableLibraries_isEmpty(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_boolean _isEmpty;
  modelica_metatype out_isEmpty;
  _isEmpty = omc_PackageManagement_AvailableLibraries_isEmpty(threadData, _tree);
  out_isEmpty = mmc_mk_icon(_isEmpty);
  return out_isEmpty;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc)
{
  modelica_metatype _tree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _tree = __omcQ_24in_5Ftree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _treeToJoin;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _tree;
          goto tmp3_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          _tree = omc_PackageManagement_AvailableLibraries_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));

          _tree = omc_PackageManagement_AvailableLibraries_join(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 5))), ((modelica_fnptr) _conflictFunc));
          /* Tail recursive call */
          __omcQ_24in_5Ftree = _tree;
          _treeToJoin = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = omc_PackageManagement_AvailableLibraries_add(threadData, _tree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_treeToJoin), 3))), ((modelica_fnptr) _conflictFunc));
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
  _tree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _tree;
}

DLLDirection
modelica_integer omc_PackageManagement_AvailableLibraries_keyCompare(threadData_t *threadData, modelica_string _inKey1, modelica_string _inKey2)
{
  modelica_integer _outResult;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outResult has no default value.
  _outResult = stringCompare(_inKey1, _inKey2);
  _return: OMC_LABEL_UNUSED
  return _outResult;
}
modelica_metatype boxptr_PackageManagement_AvailableLibraries_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2)
{
  modelica_integer _outResult;
  modelica_metatype out_outResult;
  _outResult = omc_PackageManagement_AvailableLibraries_keyCompare(threadData, _inKey1, _inKey2);
  out_outResult = mmc_mk_icon(_outResult);
  return out_outResult;
}

DLLDirection
modelica_string omc_PackageManagement_AvailableLibraries_keyStr(threadData_t *threadData, modelica_string _inKey)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = _inKey;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_listKeys(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_string _key = NULL;
      int tmp4;
      // _key has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_PackageManagement_AvailableLibraries_listKeys(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

          tmpMeta6 = mmc_mk_cons(_key, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          
          _key = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_key, _lst);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 4: {
          modelica_metatype tmpMeta5;
          
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          _lst = omc_PackageManagement_AvailableLibraries_listKeysReverse(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), _lst);

          tmpMeta6 = mmc_mk_cons((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 2))), _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      modelica_metatype _value = NULL;
      int tmp4;
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _value = tmpMeta5;
          /* Pattern matching succeeded */
          _lst = omc_PackageManagement_AvailableLibraries_listValues(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6))), _lst);

          tmpMeta6 = mmc_mk_cons(_value, _lst);
          _lst = tmpMeta6;
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _value = tmpMeta7;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_cons(_value, _lst);
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_PackageManagement_AvailableLibraries_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc));

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          _new_right = omc_PackageManagement_AvailableLibraries_map(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc));

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &PackageManagement_AvailableLibraries_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult)
{
  modelica_metatype _outTree = NULL;
  modelica_metatype _outResult = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _inTree;
  _outResult = _inStartValue;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      modelica_metatype _new_value = NULL;
      modelica_metatype _new_left = NULL;
      modelica_metatype _new_right = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      // _new_value has no default value.
      // _new_left has no default value.
      // _new_right has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _new_left = omc_PackageManagement_AvailableLibraries_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          _new_right = omc_PackageManagement_AvailableLibraries_mapFold(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6))), ((modelica_fnptr) _inFunc), _outResult ,&_outResult);

          if((((!referenceEq(_new_left, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 5))))) || (!referenceEq(_value, _new_value))) || (!referenceEq(_new_right, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 6)))))))
          {
            tmpMeta7 = mmc_mk_box6(3, &PackageManagement_AvailableLibraries_Tree_NODE__desc, _key, _new_value, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outTree), 4))), _new_left, _new_right);
            _outTree = tmpMeta7;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta8;
          _value = tmpMeta9;
          /* Pattern matching succeeded */
          _new_value = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 2))), _key, _value, _outResult ,&_outResult) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inFunc), 1)))) (threadData, _key, _value, _outResult ,&_outResult);

          if((!referenceEq(_value, _new_value)))
          {
            tmpMeta10 = MMC_TAGPTR(mmc_alloc_words(4));
            memcpy(MMC_UNTAGPTR(tmpMeta10), MMC_UNTAGPTR(_outTree), 4*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta10))[3] = _new_value;
            _outTree = tmpMeta10;
          }
          tmpMeta1 = _outTree;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inTree;
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
  _outTree = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_outResult) { *out_outResult = _outResult; }
  return _outTree;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_new(threadData_t *threadData)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = _OMC_LIT96;
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_PackageManagement_AvailableLibraries_printNodeStr(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_string _outString = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inNode;
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
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta6 = stringAppend(_OMC_LIT88,omc_PackageManagement_AvailableLibraries_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT28);
          tmpMeta8 = stringAppend(tmpMeta7,omc_PackageManagement_AvailableLibraries_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT89);
          tmp1 = tmpMeta9;
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = stringAppend(_OMC_LIT88,omc_PackageManagement_AvailableLibraries_keyStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 2)))));
          tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT28);
          tmpMeta12 = stringAppend(tmpMeta11,omc_PackageManagement_AvailableLibraries_valueStr(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inNode), 3)))));
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT89);
          tmp1 = tmpMeta13;
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

DLLDirection
modelica_string omc_PackageManagement_AvailableLibraries_printTreeStr(threadData_t *threadData, modelica_metatype _inTree)
{
  modelica_string _outString = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _left has no default value.
  // _right has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 5: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT90;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = omc_PackageManagement_AvailableLibraries_printNodeStr(threadData, _inTree);
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          _left = tmpMeta5;
          _right = tmpMeta6;
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(omc_PackageManagement_AvailableLibraries_printTreeStr2(threadData, _left, 1 /* true */, _OMC_LIT16),omc_PackageManagement_AvailableLibraries_printNodeStr(threadData, _inTree));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT24);
          tmpMeta9 = stringAppend(tmpMeta8,omc_PackageManagement_AvailableLibraries_printTreeStr2(threadData, _right, 0 /* false */, _OMC_LIT16));
          tmp1 = tmpMeta9;
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_string omc_PackageManagement_AvailableLibraries_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_boolean _isLeft, modelica_string _inIndent)
{
  modelica_string _outString = NULL;
  modelica_metatype _val_node = NULL;
  modelica_metatype _left = NULL;
  modelica_metatype _right = NULL;
  modelica_string _left_str = NULL;
  modelica_string _right_str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  // _val_node has no default value.
  // _left has no default value.
  // _right has no default value.
  // _left_str has no default value.
  // _right_str has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      int tmp4;
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          
          /* Pattern matching succeeded */
          tmpMeta5 = stringAppend(_inIndent,(_isLeft?_OMC_LIT91:_OMC_LIT92));
          tmpMeta6 = stringAppend(omc_PackageManagement_AvailableLibraries_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5))), 1 /* true */, tmpMeta5),_inIndent);
          tmpMeta7 = stringAppend(tmpMeta6,(_isLeft?_OMC_LIT93:_OMC_LIT94));
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT95);
          tmpMeta9 = stringAppend(tmpMeta8,omc_PackageManagement_AvailableLibraries_printNodeStr(threadData, _inTree));
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT24);
          tmpMeta11 = stringAppend(_inIndent,(_isLeft?_OMC_LIT92:_OMC_LIT91));
          tmpMeta12 = stringAppend(tmpMeta10,omc_PackageManagement_AvailableLibraries_printTreeStr2(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), 0 /* false */, tmpMeta11));
          tmp1 = tmpMeta12;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          
          /* Pattern matching succeeded */
          tmpMeta13 = stringAppend(_inIndent,(_isLeft?_OMC_LIT93:_OMC_LIT94));
          tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT95);
          tmpMeta15 = stringAppend(tmpMeta14,omc_PackageManagement_AvailableLibraries_printNodeStr(threadData, _inTree));
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT24);
          tmp1 = tmpMeta16;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT16;
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
  _outString = tmp1;
  _return: OMC_LABEL_UNUSED
  return _outString;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_AvailableLibraries_printTreeStr2(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _isLeft, modelica_metatype _inIndent)
{
  modelica_integer tmp1;
  modelica_string _outString = NULL;
  tmp1 = mmc_unbox_integer(_isLeft);
  _outString = omc_PackageManagement_AvailableLibraries_printTreeStr2(threadData, _inTree, tmp1, _inIndent);
  /* skip box _outString; String */
  return _outString;
}

PROTECTED_FUNCTION_STATIC modelica_boolean omc_PackageManagement_AvailableLibraries_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;
    tmp4_1 = _t1;
    tmp4_2 = _t2;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = referenceEq(_t1, _t2);
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
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_PackageManagement_AvailableLibraries_referenceEqOrEmpty(threadData_t *threadData, modelica_metatype _t1, modelica_metatype _t2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_PackageManagement_AvailableLibraries_referenceEqOrEmpty(threadData, _t1, _t2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_AvailableLibraries_rotateLeft(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))));
          tmpMeta1 = omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _child, _node, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))));
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 5))), _OMC_LIT96);
          tmpMeta1 = omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _child, _node, _OMC_LIT96);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_PackageManagement_AvailableLibraries_rotateRight(threadData_t *threadData, modelica_metatype _inNode)
{
  modelica_metatype _outNode = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outNode = _inNode;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _outNode;
    {
      modelica_metatype _node = NULL;
      modelica_metatype _child = NULL;
      volatile mmc_switch_type tmp4;
      int tmp5;
      // _node has no default value.
      // _child has no default value.
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,0,5) == 0) goto tmp3_end;
          
          _child = tmpMeta6;
          /* Pattern matching succeeded */
          _node = omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _outNode, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 6))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _child, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_child), 5))), _node);
          goto tmp3_done;
        }
        case 1: {
          modelica_metatype tmpMeta7;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 5));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta7,1,2) == 0) goto tmp3_end;
          
          _child = tmpMeta7;
          /* Pattern matching succeeded */
          _node = omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _outNode, _OMC_LIT96, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_outNode), 6))));
          tmpMeta1 = omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData, _child, _OMC_LIT96, _node);
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _inNode;
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
  _outNode = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _outNode;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right)
{
  modelica_metatype _res = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype tmp4_2;modelica_metatype tmp4_3;
    tmp4_1 = _orig;
    tmp4_2 = _left;
    tmp4_3 = _right;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 4; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box3(4, &PackageManagement_AvailableLibraries_Tree_LEAF__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_2,2,0) == 0) goto tmp3_end;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_3,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta1 = _orig;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta7;
          modelica_boolean tmp8;
          modelica_metatype tmpMeta9;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp8 = (modelica_boolean)(omc_PackageManagement_AvailableLibraries_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 5))), _left) && omc_PackageManagement_AvailableLibraries_referenceEqOrEmpty(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 6))), _right));
          if(tmp8)
          {
            tmpMeta9 = _orig;
          }
          else
          {
            tmpMeta7 = mmc_mk_box6(3, &PackageManagement_AvailableLibraries_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_PackageManagement_AvailableLibraries_height(threadData, _left)),(modelica_integer)(omc_PackageManagement_AvailableLibraries_height(threadData, _right)))), _left, _right);
            tmpMeta9 = tmpMeta7;
          }
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta10;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box6(3, &PackageManagement_AvailableLibraries_Tree_NODE__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_orig), 3))), mmc_mk_integer(((modelica_integer) 1) + modelica_integer_max((modelica_integer)(omc_PackageManagement_AvailableLibraries_height(threadData, _left)),(modelica_integer)(omc_PackageManagement_AvailableLibraries_height(threadData, _right)))), _left, _right);
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
  _res = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _res;
}

DLLDirection
modelica_string omc_PackageManagement_AvailableLibraries_smallestKey(threadData_t *threadData, modelica_metatype _tree)
{
  modelica_string _key = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _key has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _tree;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 6));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta6,2,0) == 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
          goto tmp3_done;
        }
        case 1: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          /* Tail recursive call */
          _tree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 6)));
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 2: {
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tree), 2)));
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
  _key = tmp1;
  _return: OMC_LABEL_UNUSED
  return _key;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst)
{
  modelica_metatype _lst = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _lst = __omcQ_24in_5Flst;
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _inTree;
    {
      modelica_string _key = NULL;
      modelica_metatype _value = NULL;
      int tmp4;
      // _key has no default value.
      // _value has no default value.
      {
        switch (MMC_SWITCH_CAST(valueConstructor(tmp4_1))) {
        case 3: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta8;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,0,5) == 0) goto tmp3_end;
          tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _key = tmpMeta5;
          _value = tmpMeta6;
          /* Pattern matching succeeded */
          _lst = omc_PackageManagement_AvailableLibraries_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 6))), _lst);

          tmpMeta8 = mmc_mk_box2(0, _key, _value);
          tmpMeta7 = mmc_mk_cons(tmpMeta8, _lst);
          _lst = tmpMeta7;
          /* Tail recursive call */
          _inTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_inTree), 5)));
          __omcQ_24in_5Flst = _lst;
          goto _tailrecursive;
          /* TODO: Make sure any eventual dead code below is never generated */
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta9;
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,1,2) == 0) goto tmp3_end;
          tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 2));
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          _key = tmpMeta9;
          _value = tmpMeta10;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box2(0, _key, _value);
          tmpMeta11 = mmc_mk_cons(tmpMeta12, _lst);
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmpMeta1 = _lst;
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
  _lst = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lst;
}

DLLDirection
modelica_metatype omc_PackageManagement_AvailableLibraries_update(threadData_t *threadData, modelica_metatype _tree, modelica_string _key, modelica_metatype _value)
{
  modelica_metatype _outTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _outTree = omc_PackageManagement_AvailableLibraries_add(threadData, _tree, _key, _value, boxvar_PackageManagement_AvailableLibraries_addConflictReplace);
  _return: OMC_LABEL_UNUSED
  return _outTree;
}

DLLDirection
modelica_string omc_PackageManagement_AvailableLibraries_valueStr(threadData_t *threadData, modelica_metatype _inValue)
{
  modelica_string _outString = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _outString has no default value.
  _outString = omc_PackageManagement_VersionMap_printTreeStr(threadData, _inValue);
  _return: OMC_LABEL_UNUSED
  return _outString;
}

