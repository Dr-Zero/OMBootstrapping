#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "BaseHashTable.h"
#include "CheckModel.h"
#include "ComponentReferenceBasics.h"
#include "Config.h"
#include "DAEDump.h"
#include "DAEUtil.h"
#include "DoubleEnded.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "FindZeroCrossings.h"
#include "Flags.h"
#include "HashTableExpToIndex.h"
#include "List.h"
#include "SynchronousFeatures.h"
#include "Util.h"
#include "ZeroCrossings.h"
#ifdef __cplusplus
}
#endif
