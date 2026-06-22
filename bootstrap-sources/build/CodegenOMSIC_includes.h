#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "CodegenFMU.h"
#include "CodegenOMSIC.h"
#include "CodegenOMSI_common.h"
#include "CodegenUtil.h"
#include "CodegenUtilSimulation.h"
#include "Config.h"
#include "FMI.h"
#include "Flags.h"
#include "Settings.h"
#include "System.h"
#include "Tpl.h"
#ifdef __cplusplus
}
#endif
