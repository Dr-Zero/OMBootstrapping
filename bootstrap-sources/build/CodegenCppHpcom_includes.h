#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "CodegenCpp.h"
#include "CodegenCppCommon.h"
#include "CodegenCppHpcom.h"
#include "CodegenCppInit.h"
#include "CodegenUtil.h"
#include "Config.h"
#include "Flags.h"
#include "HpcOmScheduler.h"
#include "HpcOmTaskGraph.h"
#include "List.h"
#include "SimCodeUtil.h"
#include "Tpl.h"
#ifdef __cplusplus
}
#endif
