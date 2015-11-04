/*
 * SWGMeasurementValue.h
 * 
 * 
 */

#ifndef SWGMeasurementValue_H_
#define SWGMeasurementValue_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGMeasurementValue: public SWGObject {
public:
    SWGMeasurementValue();
    SWGMeasurementValue(QString* json);
    virtual ~SWGMeasurementValue();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeasurementValue* fromJson(QString &jsonString);

    qint64 getStartTime();
    void setStartTime(qint64 start_time);
    float getValue();
    void setValue(float value);
    

private:
    qint64 start_time;
    float value;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurementValue_H_ */
