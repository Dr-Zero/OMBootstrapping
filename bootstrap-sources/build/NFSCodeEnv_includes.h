#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynToSCode.h"
#include "AbsynUtil.h"
#include "Error.h"
#include "FBuiltin.h"
#include "List.h"
#include "Mutable.h"
#include "NFEnvExtends.h"
#include "NFSCodeCheck.h"
#include "NFSCodeEnv.h"
#include "NFSCodeFlattenRedeclare.h"
#include "NFSCodeLookup.h"
#include "SCodeDump.h"
#include "SCodeUtil.h"
#include "System.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
