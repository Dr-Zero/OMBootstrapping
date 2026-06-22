#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "CodegenCppCommon.h"
#include "CodegenCppInit.h"
#include "CodegenFMU2.h"
#include "CodegenFMUCommon.h"
#include "CodegenUtil.h"
#include "Expression.h"
#include "FMI.h"
#include "Settings.h"
#include "SimCodeUtil.h"
#include "System.h"
#include "Tpl.h"
#include "Types.h"
#include "TypesDump.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
