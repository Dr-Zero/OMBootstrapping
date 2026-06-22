#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynToSCode.h"
#include "AbsynUtil.h"
#include "BackendInterface.h"
#include "Dump.h"
#include "Error.h"
#include "ErrorExt.h"
#include "Flags.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFInst.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFLookup.h"
#include "NFLookupState.h"
#include "SCodeUtil.h"
#include "Settings.h"
#include "System.h"
#include "Testsuite.h"
#include "UnorderedMap.h"
#ifdef __cplusplus
}
#endif
