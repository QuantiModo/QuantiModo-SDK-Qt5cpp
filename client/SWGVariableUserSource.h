/*
 * SWGVariableUserSource.h
 * 
 * 
 */

#ifndef SWGVariableUserSource_H_
#define SWGVariableUserSource_H_

#include <QJsonObject>


#include "QDateTime.h"

#include "SWGObject.h"


namespace Swagger {

class SWGVariableUserSource: public SWGObject {
public:
    SWGVariableUserSource();
    SWGVariableUserSource(QString* json);
    virtual ~SWGVariableUserSource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVariableUserSource* fromJson(QString &jsonString);

    qint32 getUserId();
    void setUserId(qint32 user_id);
    qint32 getVariableId();
    void setVariableId(qint32 variable_id);
    qint32 getSourceId();
    void setSourceId(qint32 source_id);
    qint32 getTimestamp();
    void setTimestamp(qint32 timestamp);
    qint32 getEarliestMeasurementTime();
    void setEarliestMeasurementTime(qint32 earliest_measurement_time);
    qint32 getLatestMeasurementTime();
    void setLatestMeasurementTime(qint32 latest_measurement_time);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 user_id;
    qint32 variable_id;
    qint32 source_id;
    qint32 timestamp;
    qint32 earliest_measurement_time;
    qint32 latest_measurement_time;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGVariableUserSource_H_ */
