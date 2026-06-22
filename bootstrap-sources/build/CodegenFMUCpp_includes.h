#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "CodegenCpp.h"
#include "CodegenCppCommon.h"
#include "CodegenCppInit.h"
#include "CodegenFMU.h"
#include "CodegenFMUCommon.h"
#include "CodegenFMUCpp.h"
#include "CodegenUtil.h"
#include "Config.h"
#include "FMI.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "SimCodeUtil.h"
#include "System.h"
#include "Tpl.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
