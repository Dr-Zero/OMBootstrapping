#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Error.h"
#include "ExpandableArray.h"
#include "List.h"
#include "NBBackendUtil.h"
#include "NBEquation.h"
#include "NBSlice.h"
#include "NBVariable.h"
#include "NBackendDAE.h"
#include "NFBackendExtension.h"
#include "NFBinding.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpression.h"
#include "NFInstNode.h"
#include "NFScalarize.h"
#include "NFSimplifyExp.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFVariable.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
