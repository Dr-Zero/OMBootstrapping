#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "BackendDAEUtil.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "Config.h"
#include "Error.h"
#include "ExpandableArray.h"
#include "Expression.h"
#include "Flags.h"
#include "GraphML.h"
#include "HashTableCrIListArray.h"
#include "HashTableCrILst.h"
#include "HpcOmMemory.h"
#include "HpcOmScheduler.h"
#include "HpcOmTaskGraph.h"
#include "List.h"
#include "SimCodeUtil.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
