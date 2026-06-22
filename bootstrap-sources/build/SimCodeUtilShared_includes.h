#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEUtil.h"
#include "Error.h"
#include "HashTableCrIListArray.h"
#include "HashTableCrILst.h"
#include "HashTableExpToIndex.h"
#include "Inline.h"
#include "List.h"
#include "SimCodeFunctionUtil.h"
#include "SimCodeUtilShared.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
