#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Error.h"
#include "IOStream.h"
#include "Mutable.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFConnectBreakTree.h"
#include "NFEvalConstants.h"
#include "NFFunction.h"
#include "NFInst.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFLookup.h"
#include "NFRecord.h"
#include "NFType.h"
#include "NFTyping.h"
#include "Pointer.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#ifdef __cplusplus
}
#endif
