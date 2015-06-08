/*
 * SWGMeasurementSource.h
 * 
 * 
 */

#ifndef SWGMeasurementSource_H_
#define SWGMeasurementSource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGMeasurementSource: public SWGObject {
public:
    SWGMeasurementSource();
    SWGMeasurementSource(QString* json);
    virtual ~SWGMeasurementSource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeasurementSource* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
    

private:
    QString* name;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurementSource_H_ */
