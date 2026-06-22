#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BackendDAETransform.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "Flags.h"
#include "GCExt.h"
#include "List.h"
#include "Sorting.h"
#include "SymbolicJacobian.h"
#include "System.h"
#include "Types.h"
#include "TypesDump.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
