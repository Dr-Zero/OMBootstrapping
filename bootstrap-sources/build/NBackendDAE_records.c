#include <meta/meta_modelica.h>
/* Automatically generated header for bootstrapping MetaModelica */
#ifdef __cplusplus
extern "C" {
#endif
#ifdef ADD_METARECORD_DEFINITIONS
#ifndef NBackendDAE_MAIN__desc_added
#define NBackendDAE_MAIN__desc_added
ADD_METARECORD_DEFINITIONS const char* NBackendDAE_MAIN__desc__fields[13] = {"ode","algebraic","ode_event","alg_event","clocked","init","init_0","dae","varData","eqData","eventInfo","clockedInfo","funcMap"};
ADD_METARECORD_DEFINITIONS struct record_description NBackendDAE_MAIN__desc = {
  "NBackendDAE_MAIN",
  "NBackendDAE.MAIN",
  NBackendDAE_MAIN__desc__fields
};
#endif
#else /* Only use the file as a header */
extern struct record_description NBackendDAE_MAIN__desc;
#endif
#ifdef ADD_METARECORD_DEFINITIONS
#ifndef NBackendDAE_JACOBIAN__desc_added
#define NBackendDAE_JACOBIAN__desc_added
ADD_METARECORD_DEFINITIONS const char* NBackendDAE_JACOBIAN__desc__fields[7] = {"name","jacType","varData","comps","sparsityPattern","sparsityColoring","isAdjoint"};
ADD_METARECORD_DEFINITIONS struct record_description NBackendDAE_JACOBIAN__desc = {
  "NBackendDAE_JACOBIAN",
  "NBackendDAE.JACOBIAN",
  NBackendDAE_JACOBIAN__desc__fields
};
#endif
#else /* Only use the file as a header */
extern struct record_description NBackendDAE_JACOBIAN__desc;
#endif
#ifdef ADD_METARECORD_DEFINITIONS
#ifndef NBackendDAE_HESSIAN__desc_added
#define NBackendDAE_HESSIAN__desc_added
ADD_METARECORD_DEFINITIONS const char* NBackendDAE_HESSIAN__desc__fields[2] = {"varData","eqData"};
ADD_METARECORD_DEFINITIONS struct record_description NBackendDAE_HESSIAN__desc = {
  "NBackendDAE_HESSIAN",
  "NBackendDAE.HESSIAN",
  NBackendDAE_HESSIAN__desc__fields
};
#endif
#else /* Only use the file as a header */
extern struct record_description NBackendDAE_HESSIAN__desc;
#endif
#ifdef __cplusplus
}
#endif

