/*
 * SWGMeasurementExport.h
 * 
 * 
 */

#ifndef SWGMeasurementExport_H_
#define SWGMeasurementExport_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGMeasurementExport: public SWGObject {
public:
    SWGMeasurementExport();
    SWGMeasurementExport(QString* json);
    virtual ~SWGMeasurementExport();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeasurementExport* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    qint32 getUserId();
    void setUserId(qint32 user_id);
    QString* getStatus();
    void setStatus(QString* status);
    QString* getErrorMessage();
    void setErrorMessage(QString* error_message);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 id;
    qint32 user_id;
    QString* status;
    QString* error_message;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurementExport_H_ */
