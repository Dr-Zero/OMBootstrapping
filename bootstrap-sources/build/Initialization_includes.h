#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "AvlSetCR.h"
#include "BackendDAECreate.h"
#include "BackendDAEOptimize.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "BaseHashSet.h"
#include "CheckModel.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "Config.h"
#include "DAEUtil.h"
#include "DoubleEnded.h"
#include "ElementSource.h"
#include "Error.h"
#include "ExecStat.h"
#include "ExpandableArray.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "Flags.h"
#include "GCExt.h"
#include "HashSet.h"
#include "IndexReduction.h"
#include "Initialization.h"
#include "List.h"
#include "Matching.h"
#include "Sorting.h"
#include "StringUtil.h"
#include "SymbolicJacobian.h"
#include "SynchronousFeatures.h"
#include "System.h"
#include "Types.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
