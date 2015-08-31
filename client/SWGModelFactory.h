#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGCommonResponse.h"
#include "SWGConnector.h"
#include "SWGConnectorInfo.h"
#include "SWGConnectorInfoHistoryItem.h"
#include "SWGConversionStep.h"
#include "SWGCorrelation.h"
#include "SWGJsonErrorResponse.h"
#include "SWGMeasurementSet.h"
#include "SWGMeasurement.h"
#include "SWGMeasurementRange.h"
#include "SWGMeasurementSource.h"
#include "SWGPairs.h"
#include "SWGPermission.h"
#include "SWGPostCorrelation.h"
#include "SWGUnit.h"
#include "SWGUnitCategory.h"
#include "SWGUser.h"
#include "SWGUserTokenRequest.h"
#include "SWGUserTokenSuccessfulResponse.h"
#include "SWGUserTokenFailedResponse.h"
#include "SWGUserTokenRequestInnerUserField.h"
#include "SWGUserTokenSuccessfulResponseInnerUserField.h"
#include "SWGValueObject.h"
#include "SWGVariable.h"
#include "SWGVariableCategory.h"
#include "SWGUserVariables.h"
#include "SWGVariableNew.h"
#include "SWGVariablesNew.h"

namespace Swagger {
  inline void* create(QString type) {
    if(QString("SWGCommonResponse").compare(type) == 0) {
      return new SWGCommonResponse();
    }
    if(QString("SWGConnector").compare(type) == 0) {
      return new SWGConnector();
    }
    if(QString("SWGConnectorInfo").compare(type) == 0) {
      return new SWGConnectorInfo();
    }
    if(QString("SWGConnectorInfoHistoryItem").compare(type) == 0) {
      return new SWGConnectorInfoHistoryItem();
    }
    if(QString("SWGConversionStep").compare(type) == 0) {
      return new SWGConversionStep();
    }
    if(QString("SWGCorrelation").compare(type) == 0) {
      return new SWGCorrelation();
    }
    if(QString("SWGJsonErrorResponse").compare(type) == 0) {
      return new SWGJsonErrorResponse();
    }
    if(QString("SWGMeasurementSet").compare(type) == 0) {
      return new SWGMeasurementSet();
    }
    if(QString("SWGMeasurement").compare(type) == 0) {
      return new SWGMeasurement();
    }
    if(QString("SWGMeasurementRange").compare(type) == 0) {
      return new SWGMeasurementRange();
    }
    if(QString("SWGMeasurementSource").compare(type) == 0) {
      return new SWGMeasurementSource();
    }
    if(QString("SWGPairs").compare(type) == 0) {
      return new SWGPairs();
    }
    if(QString("SWGPermission").compare(type) == 0) {
      return new SWGPermission();
    }
    if(QString("SWGPostCorrelation").compare(type) == 0) {
      return new SWGPostCorrelation();
    }
    if(QString("SWGUnit").compare(type) == 0) {
      return new SWGUnit();
    }
    if(QString("SWGUnitCategory").compare(type) == 0) {
      return new SWGUnitCategory();
    }
    if(QString("SWGUser").compare(type) == 0) {
      return new SWGUser();
    }
    if(QString("SWGUserTokenRequest").compare(type) == 0) {
      return new SWGUserTokenRequest();
    }
    if(QString("SWGUserTokenSuccessfulResponse").compare(type) == 0) {
      return new SWGUserTokenSuccessfulResponse();
    }
    if(QString("SWGUserTokenFailedResponse").compare(type) == 0) {
      return new SWGUserTokenFailedResponse();
    }
    if(QString("SWGUserTokenRequestInnerUserField").compare(type) == 0) {
      return new SWGUserTokenRequestInnerUserField();
    }
    if(QString("SWGUserTokenSuccessfulResponseInnerUserField").compare(type) == 0) {
      return new SWGUserTokenSuccessfulResponseInnerUserField();
    }
    if(QString("SWGValueObject").compare(type) == 0) {
      return new SWGValueObject();
    }
    if(QString("SWGVariable").compare(type) == 0) {
      return new SWGVariable();
    }
    if(QString("SWGVariableCategory").compare(type) == 0) {
      return new SWGVariableCategory();
    }
    if(QString("SWGUserVariables").compare(type) == 0) {
      return new SWGUserVariables();
    }
    if(QString("SWGVariableNew").compare(type) == 0) {
      return new SWGVariableNew();
    }
    if(QString("SWGVariablesNew").compare(type) == 0) {
      return new SWGVariablesNew();
    }
    
    return NULL;
  }

  inline void* create(QString json, QString type) {
    void* val = create(type);
    if(val != NULL) {
      SWGObject* obj = static_cast<SWGObject*>(val);
      return obj->fromJson(json);
    }
    if(type.startsWith("QString")) {
      return new QString();
    }
    return NULL;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
