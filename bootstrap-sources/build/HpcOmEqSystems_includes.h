#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "BackendDAEEXT.h"
#include "BackendDAETransform.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionDump.h"
#include "ExpressionSimplify.h"
#include "ExpressionSolve.h"
#include "Flags.h"
#include "HpcOmEqSystems.h"
#include "HpcOmScheduler.h"
#include "HpcOmTaskGraph.h"
#include "IndexReduction.h"
#include "List.h"
#include "Matching.h"
#ifdef __cplusplus
}
#endif
