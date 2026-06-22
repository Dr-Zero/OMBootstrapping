#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBJacobian.h"
#include "NBPartition.h"
#include "NBVariable.h"
#include "NFComponentRef.h"
#include "NSimCode.h"
#include "NSimCodeUtil.h"
#include "NSimGenericCall.h"
#include "NSimJacobian.h"
#include "NSimStrongComponent.h"
#include "NSimVar.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
