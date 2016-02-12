/*
 * SWGMeasurementValue.h
 * 
 * 
 */

#ifndef SWGMeasurementValue_H_
#define SWGMeasurementValue_H_

#include <QJsonObject>


#include <QString>

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

    QString* getStartTime();
    void setStartTime(QString* start_time);
    float getValue();
    void setValue(float value);
    QString* getNote();
    void setNote(QString* note);
    

private:
    QString* start_time;
    float value;
    QString* note;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurementValue_H_ */
