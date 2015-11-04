/*
 * SWGConnection.h
 * 
 * 
 */

#ifndef SWGConnection_H_
#define SWGConnection_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGConnection: public SWGObject {
public:
    SWGConnection();
    SWGConnection(QString* json);
    virtual ~SWGConnection();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGConnection* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    qint32 getUserId();
    void setUserId(qint32 user_id);
    qint32 getConnectorId();
    void setConnectorId(qint32 connector_id);
    QString* getConnectStatus();
    void setConnectStatus(QString* connect_status);
    QString* getConnectError();
    void setConnectError(QString* connect_error);
    QDateTime* getUpdateRequestedAt();
    void setUpdateRequestedAt(QDateTime* update_requested_at);
    QString* getUpdateStatus();
    void setUpdateStatus(QString* update_status);
    QString* getUpdateError();
    void setUpdateError(QString* update_error);
    QDateTime* getLastSuccessfulUpdatedAt();
    void setLastSuccessfulUpdatedAt(QDateTime* last_successful_updated_at);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 id;
    qint32 user_id;
    qint32 connector_id;
    QString* connect_status;
    QString* connect_error;
    QDateTime* update_requested_at;
    QString* update_status;
    QString* update_error;
    QDateTime* last_successful_updated_at;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGConnection_H_ */
