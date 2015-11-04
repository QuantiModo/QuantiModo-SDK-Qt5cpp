#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGMeasurementValue.h"
#include "SWGMeasurementPost.h"
#include "SWGAggregatedCorrelation.h"
#include "SWGConnection.h"
#include "SWGConnector.h"
#include "SWGCorrelation.h"
#include "SWGCredential.h"
#include "SWGMeasurement.h"
#include "SWGMeasurementExport.h"
#include "SWGSource.h"
#include "SWGUnit.h"
#include "SWGUnitCategory.h"
#include "SWGUnitConversion.h"
#include "SWGUpdate.h"
#include "SWGUserVariable.h"
#include "SWGVariable.h"
#include "SWGVariableCategory.h"
#include "SWGVariableUserSource.h"
#include "SWGVote.h"
#include "SWGInline_response_200.h"
#include "SWGInline_response_200_1.h"
#include "SWGInline_response_200_2.h"
#include "SWGInline_response_200_3.h"
#include "SWGInline_response_200_4.h"
#include "SWGInline_response_200_5.h"
#include "SWGInline_response_200_6.h"
#include "SWGInline_response_200_7.h"
#include "SWGInline_response_200_8.h"
#include "SWGInline_response_200_9.h"
#include "SWGInline_response_200_10.h"
#include "SWGInline_response_200_11.h"
#include "SWGInline_response_200_12.h"
#include "SWGInline_response_200_13.h"
#include "SWGInline_response_200_14.h"
#include "SWGInline_response_200_15.h"
#include "SWGInline_response_200_16.h"
#include "SWGInline_response_200_17.h"
#include "SWGInline_response_200_18.h"
#include "SWGInline_response_200_19.h"
#include "SWGInline_response_200_20.h"
#include "SWGInline_response_200_21.h"
#include "SWGInline_response_200_22.h"
#include "SWGInline_response_200_23.h"
#include "SWGInline_response_200_24.h"
#include "SWGInline_response_200_25.h"
#include "SWGInline_response_200_26.h"
#include "SWGInline_response_200_27.h"
#include "SWGInline_response_200_28.h"
#include "SWGInline_response_200_29.h"
#include "SWGInline_response_200_30.h"

namespace Swagger {
  inline void* create(QString type) {
    if(QString("SWGMeasurementValue").compare(type) == 0) {
      return new SWGMeasurementValue();
    }
    if(QString("SWGMeasurementPost").compare(type) == 0) {
      return new SWGMeasurementPost();
    }
    if(QString("SWGAggregatedCorrelation").compare(type) == 0) {
      return new SWGAggregatedCorrelation();
    }
    if(QString("SWGConnection").compare(type) == 0) {
      return new SWGConnection();
    }
    if(QString("SWGConnector").compare(type) == 0) {
      return new SWGConnector();
    }
    if(QString("SWGCorrelation").compare(type) == 0) {
      return new SWGCorrelation();
    }
    if(QString("SWGCredential").compare(type) == 0) {
      return new SWGCredential();
    }
    if(QString("SWGMeasurement").compare(type) == 0) {
      return new SWGMeasurement();
    }
    if(QString("SWGMeasurementExport").compare(type) == 0) {
      return new SWGMeasurementExport();
    }
    if(QString("SWGSource").compare(type) == 0) {
      return new SWGSource();
    }
    if(QString("SWGUnit").compare(type) == 0) {
      return new SWGUnit();
    }
    if(QString("SWGUnitCategory").compare(type) == 0) {
      return new SWGUnitCategory();
    }
    if(QString("SWGUnitConversion").compare(type) == 0) {
      return new SWGUnitConversion();
    }
    if(QString("SWGUpdate").compare(type) == 0) {
      return new SWGUpdate();
    }
    if(QString("SWGUserVariable").compare(type) == 0) {
      return new SWGUserVariable();
    }
    if(QString("SWGVariable").compare(type) == 0) {
      return new SWGVariable();
    }
    if(QString("SWGVariableCategory").compare(type) == 0) {
      return new SWGVariableCategory();
    }
    if(QString("SWGVariableUserSource").compare(type) == 0) {
      return new SWGVariableUserSource();
    }
    if(QString("SWGVote").compare(type) == 0) {
      return new SWGVote();
    }
    if(QString("SWGInline_response_200").compare(type) == 0) {
      return new SWGInline_response_200();
    }
    if(QString("SWGInline_response_200_1").compare(type) == 0) {
      return new SWGInline_response_200_1();
    }
    if(QString("SWGInline_response_200_2").compare(type) == 0) {
      return new SWGInline_response_200_2();
    }
    if(QString("SWGInline_response_200_3").compare(type) == 0) {
      return new SWGInline_response_200_3();
    }
    if(QString("SWGInline_response_200_4").compare(type) == 0) {
      return new SWGInline_response_200_4();
    }
    if(QString("SWGInline_response_200_5").compare(type) == 0) {
      return new SWGInline_response_200_5();
    }
    if(QString("SWGInline_response_200_6").compare(type) == 0) {
      return new SWGInline_response_200_6();
    }
    if(QString("SWGInline_response_200_7").compare(type) == 0) {
      return new SWGInline_response_200_7();
    }
    if(QString("SWGInline_response_200_8").compare(type) == 0) {
      return new SWGInline_response_200_8();
    }
    if(QString("SWGInline_response_200_9").compare(type) == 0) {
      return new SWGInline_response_200_9();
    }
    if(QString("SWGInline_response_200_10").compare(type) == 0) {
      return new SWGInline_response_200_10();
    }
    if(QString("SWGInline_response_200_11").compare(type) == 0) {
      return new SWGInline_response_200_11();
    }
    if(QString("SWGInline_response_200_12").compare(type) == 0) {
      return new SWGInline_response_200_12();
    }
    if(QString("SWGInline_response_200_13").compare(type) == 0) {
      return new SWGInline_response_200_13();
    }
    if(QString("SWGInline_response_200_14").compare(type) == 0) {
      return new SWGInline_response_200_14();
    }
    if(QString("SWGInline_response_200_15").compare(type) == 0) {
      return new SWGInline_response_200_15();
    }
    if(QString("SWGInline_response_200_16").compare(type) == 0) {
      return new SWGInline_response_200_16();
    }
    if(QString("SWGInline_response_200_17").compare(type) == 0) {
      return new SWGInline_response_200_17();
    }
    if(QString("SWGInline_response_200_18").compare(type) == 0) {
      return new SWGInline_response_200_18();
    }
    if(QString("SWGInline_response_200_19").compare(type) == 0) {
      return new SWGInline_response_200_19();
    }
    if(QString("SWGInline_response_200_20").compare(type) == 0) {
      return new SWGInline_response_200_20();
    }
    if(QString("SWGInline_response_200_21").compare(type) == 0) {
      return new SWGInline_response_200_21();
    }
    if(QString("SWGInline_response_200_22").compare(type) == 0) {
      return new SWGInline_response_200_22();
    }
    if(QString("SWGInline_response_200_23").compare(type) == 0) {
      return new SWGInline_response_200_23();
    }
    if(QString("SWGInline_response_200_24").compare(type) == 0) {
      return new SWGInline_response_200_24();
    }
    if(QString("SWGInline_response_200_25").compare(type) == 0) {
      return new SWGInline_response_200_25();
    }
    if(QString("SWGInline_response_200_26").compare(type) == 0) {
      return new SWGInline_response_200_26();
    }
    if(QString("SWGInline_response_200_27").compare(type) == 0) {
      return new SWGInline_response_200_27();
    }
    if(QString("SWGInline_response_200_28").compare(type) == 0) {
      return new SWGInline_response_200_28();
    }
    if(QString("SWGInline_response_200_29").compare(type) == 0) {
      return new SWGInline_response_200_29();
    }
    if(QString("SWGInline_response_200_30").compare(type) == 0) {
      return new SWGInline_response_200_30();
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
