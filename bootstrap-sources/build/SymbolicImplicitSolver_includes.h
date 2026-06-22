#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "ExpandableArray.h"
#include "Expression.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "List.h"
#include "SymbolicImplicitSolver.h"
#ifdef __cplusplus
}
#endif
