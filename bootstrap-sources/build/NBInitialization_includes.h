#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Array.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBCausalize.h"
#include "NBEquation.h"
#include "NBInitialization.h"
#include "NBInline.h"
#include "NBModule.h"
#include "NBPartition.h"
#include "NBPartitioning.h"
#include "NBReplacements.h"
#include "NBSlice.h"
#include "NBStrongComponent.h"
#include "NBTearing.h"
#include "NBVariable.h"
#include "NBackendDAE.h"
#include "NFCall.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFFlatten.h"
#include "NFFunction.h"
#include "NFInstNode.h"
#include "NFSimplifyExp.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
