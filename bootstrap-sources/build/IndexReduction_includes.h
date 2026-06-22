#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AdjacencyMatrix.h"
#include "Array.h"
#include "AvlSetInt.h"
#include "BackendDAEEXT.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendInline.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "BaseHashTable.h"
#include "Ceval.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "Config.h"
#include "DAEUtil.h"
#include "Differentiate.h"
#include "ElementSource.h"
#include "Error.h"
#include "ErrorExt.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "Flags.h"
#include "HashTable2.h"
#include "HashTable3.h"
#include "HashTableCG.h"
#include "HashTableCrIntToExp.h"
#include "IndexReduction.h"
#include "Inline.h"
#include "InlineArrayEquations.h"
#include "List.h"
#include "Matching.h"
#include "Sorting.h"
#include "System.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
