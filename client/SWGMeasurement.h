/*
 * SWGMeasurement.h
 * 
 * 
 */

#ifndef SWGMeasurement_H_
#define SWGMeasurement_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGMeasurement: public SWGObject {
public:
    SWGMeasurement();
    SWGMeasurement(QString* json);
    virtual ~SWGMeasurement();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeasurement* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    qint32 getUserId();
    void setUserId(qint32 user_id);
    QString* getClientId();
    void setClientId(QString* client_id);
    qint32 getConnectorId();
    void setConnectorId(qint32 connector_id);
    qint32 getVariableId();
    void setVariableId(qint32 variable_id);
    qint32 getSourceId();
    void setSourceId(qint32 source_id);
    QString* getStartTime();
    void setStartTime(QString* start_time);
    float getValue();
    void setValue(float value);
    qint32 getUnitId();
    void setUnitId(qint32 unit_id);
    float getOriginalValue();
    void setOriginalValue(float original_value);
    qint32 getOriginalUnitId();
    void setOriginalUnitId(qint32 original_unit_id);
    qint32 getDuration();
    void setDuration(qint32 duration);
    QString* getNote();
    void setNote(QString* note);
    float getLatitude();
    void setLatitude(float latitude);
    float getLongitude();
    void setLongitude(float longitude);
    QString* getLocation();
    void setLocation(QString* location);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    QString* getError();
    void setError(QString* error);
    

private:
    qint32 id;
    qint32 user_id;
    QString* client_id;
    qint32 connector_id;
    qint32 variable_id;
    qint32 source_id;
    QString* start_time;
    float value;
    qint32 unit_id;
    float original_value;
    qint32 original_unit_id;
    qint32 duration;
    QString* note;
    float latitude;
    float longitude;
    QString* location;
    QDateTime* created_at;
    QDateTime* updated_at;
    QString* error;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurement_H_ */
