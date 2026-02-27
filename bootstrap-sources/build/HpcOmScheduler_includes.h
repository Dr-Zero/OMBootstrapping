#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AdjacencyMatrix.h"
#include "Array.h"
#include "BackendVarTransform.h"
#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "Error.h"
#include "Expression.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "HashTableCrefSimVar.h"
#include "HpcOmScheduler.h"
#include "HpcOmSchedulerExt.h"
#include "HpcOmTaskGraph.h"
#include "List.h"
#include "SimCodeUtil.h"
#include "System.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
