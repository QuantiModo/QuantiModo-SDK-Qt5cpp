/*
 * SWGUpdate.h
 * 
 * 
 */

#ifndef SWGUpdate_H_
#define SWGUpdate_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUpdate: public SWGObject {
public:
    SWGUpdate();
    SWGUpdate(QString* json);
    virtual ~SWGUpdate();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUpdate* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    qint32 getUserId();
    void setUserId(qint32 user_id);
    qint32 getConnectorId();
    void setConnectorId(qint32 connector_id);
    qint32 getNumberOfMeasurements();
    void setNumberOfMeasurements(qint32 number_of_measurements);
    bool getSuccess();
    void setSuccess(bool success);
    QString* getMessage();
    void setMessage(QString* message);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 id;
    qint32 user_id;
    qint32 connector_id;
    qint32 number_of_measurements;
    bool success;
    QString* message;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGUpdate_H_ */
