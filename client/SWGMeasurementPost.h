/*
 * SWGMeasurementPost.h
 * 
 * 
 */

#ifndef SWGMeasurementPost_H_
#define SWGMeasurementPost_H_

#include <QJsonObject>


#include <QList>
#include "SWGMeasurementValue.h"

#include "SWGObject.h"


namespace Swagger {

class SWGMeasurementPost: public SWGObject {
public:
    SWGMeasurementPost();
    SWGMeasurementPost(QString* json);
    virtual ~SWGMeasurementPost();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeasurementPost* fromJson(QString &jsonString);

    qint32 getVariableId();
    void setVariableId(qint32 variable_id);
    qint32 getSourceId();
    void setSourceId(qint32 source_id);
    qint32 getUnitId();
    void setUnitId(qint32 unit_id);
    QList<SWGMeasurementValue*>* getMeasurements();
    void setMeasurements(QList<SWGMeasurementValue*>* measurements);
    

private:
    qint32 variable_id;
    qint32 source_id;
    qint32 unit_id;
    QList<SWGMeasurementValue*>* measurements;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurementPost_H_ */
