#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "CodegenFMU2.h"
#include "CodegenFMUCommon.h"
#include "CodegenUtil.h"
#include "CodegenUtilSimulation.h"
#include "FMI.h"
#include "Flags.h"
#include "Settings.h"
#include "Tpl.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
