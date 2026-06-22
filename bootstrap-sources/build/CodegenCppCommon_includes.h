#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "ClassInfUtil.h"
#include "CodegenCppCommon.h"
#include "CodegenUtil.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "Config.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "ExpressionDumpTpl.h"
#include "Flags.h"
#include "List.h"
#include "SimCodeFunctionUtil.h"
#include "SimCodeUtil.h"
#include "System.h"
#include "Tpl.h"
#include "Types.h"
#include "TypesDump.h"
#include "Util.h"
#include "ValuesUtil.h"
#ifdef __cplusplus
}
#endif
