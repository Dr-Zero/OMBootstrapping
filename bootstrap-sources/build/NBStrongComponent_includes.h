#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Error.h"
#include "List.h"
#include "NBEquation.h"
#include "NBInitialization.h"
#include "NBInline.h"
#include "NBPartition.h"
#include "NBResizable.h"
#include "NBSlice.h"
#include "NBSolve.h"
#include "NBStrongComponent.h"
#include "NBTearing.h"
#include "NBVariable.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFVariable.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
