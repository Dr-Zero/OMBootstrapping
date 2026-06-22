#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Debug.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NFSCodeCheck.h"
#include "NFSCodeEnv.h"
#include "NFSCodeFlattenRedeclare.h"
#include "NFSCodeLookup.h"
#include "SCodeDump.h"
#include "SCodeUtil.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
