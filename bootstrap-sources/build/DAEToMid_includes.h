#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEDump.h"
#include "DAEToMid.h"
#include "DoubleEnded.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionDump.h"
#include "HashTableMidVar.h"
#include "List.h"
#include "MidToMid.h"
#include "Mutable.h"
#include "System.h"
#include "Types.h"
#ifdef __cplusplus
}
#endif
