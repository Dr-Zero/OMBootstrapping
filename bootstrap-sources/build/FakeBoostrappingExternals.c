// File containing external stubs


#ifndef BackendDAEEXT__H
#define BackendDAEEXT__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif


extern int BackendDAEEXT_setAssignment(int _lenass1, int _lenass2, modelica_metatype _ass1, modelica_metatype _ass2) {
  return 0;
}

extern void BackendDAEEXT_getAssignment(modelica_metatype _ass1, modelica_metatype _ass2) {

}


extern void BackendDAEEXT_matching(int _nv, int _ne, int _matchingID, int _cheapID, double _relabel_period, int _clear_match) {

}


extern void BackendDAEEXT_setAdjacencyMatrix(int _nv, int _ne, int _nz, modelica_metatype _m) {

}

extern int BackendDAEEXT_getNumber(int _inInteger) {
  return 0;
}


extern void BackendDAEEXT_setNumber(int _inInteger1, int _inInteger2) {

}

extern int BackendDAEEXT_getLowLink(int _inInteger) {
  return 0;
}

extern void BackendDAEEXT_setLowLink(int _inInteger1, int _inInteger2) {

}

extern void BackendDAEEXT_initNumber(int _inInteger) {

}


extern void BackendDAEEXT_initLowLink(int _inInteger) {

}


extern modelica_metatype BackendDAEEXT_getMarkedVariables() {
  return 0;
}

extern void BackendDAEEXT_markDifferentiated(int _inInteger) {

}

extern void BackendDAEEXT_clearDifferentiated() {

}

extern modelica_metatype BackendDAEEXT_getDifferentiatedEqns() {
  return 0;
}

extern modelica_metatype BackendDAEEXT_getMarkedEqns() {
  return 0;
}
extern int BackendDAEEXT_getVMark(int _inInteger) {
  return 0;
}

extern void BackendDAEEXT_vMark(int _inInteger) {}

extern void BackendDAEEXT_eMark(int _inInteger) {}

extern void BackendDAEEXT_initMarks(int _inInteger1, int _inInteger2) {}


extern void FMIImpl__releaseFMIImport(modelica_metatype _inFMIModelVariablesInstance, modelica_metatype _inFMIInstance, modelica_metatype _inFMIContext, const char* _inFMIVersion) {

}

extern int FMIImpl__initializeFMIImport(const char* _inFileName, const char* _inWorkingDirectory, int _inFMILogLevel, int _inInputConnectors, int _inOutputConnectors, int _inIsModelDescriptionImport, modelica_metatype* _outFMIContext, modelica_metatype* _outFMIInstance, modelica_metatype* _outFMIInfo, modelica_metatype* _outTypeDefinitionsList, modelica_metatype* _outExperimentAnnotation, modelica_metatype* _outModelVariablesInstance, modelica_metatype* _outModelVariablesList) {
  return 0;
}

extern modelica_metatype HpcOmBenchmarkExt_readCalcTimesFromJson(const char* _fileName) {
  return 0;
}

extern modelica_metatype HpcOmBenchmarkExt_readCalcTimesFromXml(const char* _fileName) {
  return 0;
}


extern modelica_metatype HpcOmBenchmarkExt_requiredTimeForOp() {
  return 0;
}

extern modelica_metatype HpcOmBenchmarkExt_requiredTimeForComm() {
  return 0;
}

extern modelica_metatype HpcOmSchedulerExt_schedulehMetis(modelica_metatype _vwgts, modelica_metatype _eptr, modelica_metatype _eint, modelica_metatype _hewgts, int _nparts) {
  return 0;
}

extern modelica_metatype HpcOmSchedulerExt_scheduleMetis(modelica_metatype _xadj, modelica_metatype _adjncy, modelica_metatype _vwgt, modelica_metatype _adjwgt, int _nparts) {
  return 0;
}

extern modelica_metatype HpcOmSchedulerExt_readScheduleFromGraphMl(const char* _filename) {
  return 0;
}

extern void ASSC_printMatrix() {
}

extern void ASSC_freeMatrix() {

}

extern void ASSC_setMatrix(int _nv, int _ne, int _nz, modelica_metatype _adj, modelica_metatype _val) {

}

void* Inst_makeTopNode(void *program, void *annotationProgram) {
  return NULL;
}

extern modelica_metatype TaskGraphResults_checkCodeGraph(const char* _graphfile, const char* _codefile) {
  return 0;
}

DLLExport
extern modelica_metatype TaskGraphResults_checkTaskGraph(const char* _filename, const char* _reffilename) {
  return 0;
}

#ifdef __cplusplus
}
#endif
#endif
