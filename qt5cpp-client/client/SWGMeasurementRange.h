/*
 * SWGMeasurementRange.h
 * 
 * 
 */

#ifndef SWGMeasurementRange_H_
#define SWGMeasurementRange_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGMeasurementRange: public SWGObject {
public:
    SWGMeasurementRange();
    SWGMeasurementRange(QString* json);
    virtual ~SWGMeasurementRange();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeasurementRange* fromJson(QString &jsonString);

    qint32 getLowerLimit();
    void setLowerLimit(qint32 lowerLimit);
    qint32 getUpperLimit();
    void setUpperLimit(qint32 upperLimit);
    

private:
    qint32 lowerLimit;
    qint32 upperLimit;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurementRange_H_ */
