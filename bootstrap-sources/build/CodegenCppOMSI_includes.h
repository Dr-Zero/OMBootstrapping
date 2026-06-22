#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Algorithm.h"
#include "ClassInfUtil.h"
#include "CodegenCppCommon.h"
#include "CodegenCppInit.h"
#include "CodegenCppOMSI.h"
#include "CodegenUtil.h"
#include "CodegenUtilSimulation.h"
#include "ComponentReference.h"
#include "Config.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionDumpTpl.h"
#include "Flags.h"
#include "List.h"
#include "SimCodeFunctionUtil.h"
#include "SimCodeUtil.h"
#include "System.h"
#include "Testsuite.h"
#include "Tpl.h"
#include "TypesDump.h"
#include "Util.h"
#include "ValuesUtil.h"
#ifdef __cplusplus
}
#endif
