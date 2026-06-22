#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEDump.h"
#include "DataReconciliation.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "Flags.h"
#include "List.h"
#include "Matching.h"
#include "ProgramUtil.h"
#include "Settings.h"
#include "Sorting.h"
#include "StringUtil.h"
#include "SymbolTable.h"
#include "SymbolicJacobian.h"
#include "System.h"
#include "Types.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
