#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AdjacencyMatrix.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "Causalize.h"
#include "Debug.h"
#include "ElementSource.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "Matching.h"
#ifdef __cplusplus
}
#endif
