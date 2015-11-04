
#include "SWGConnection.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGConnection::SWGConnection(QString* json) {
    init();
    this->fromJson(*json);
}

SWGConnection::SWGConnection() {
    init();
}

SWGConnection::~SWGConnection() {
    this->cleanup();
}

void
SWGConnection::init() {
    id = 0;
    user_id = 0;
    connector_id = 0;
    connect_status = new QString("");
    connect_error = new QString("");
    update_requested_at = NULL;
    update_status = new QString("");
    update_error = new QString("");
    last_successful_updated_at = NULL;
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGConnection::cleanup() {
    
    
    
    if(connect_status != NULL) {
        delete connect_status;
    }
    if(connect_error != NULL) {
        delete connect_error;
    }
    if(update_requested_at != NULL) {
        delete update_requested_at;
    }
    if(update_status != NULL) {
        delete update_status;
    }
    if(update_error != NULL) {
        delete update_error;
    }
    if(last_successful_updated_at != NULL) {
        delete last_successful_updated_at;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGConnection*
SWGConnection::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGConnection::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&connector_id, pJson["connector_id"], "qint32", "");
    setValue(&connect_status, pJson["connect_status"], "QString", "QString");
    setValue(&connect_error, pJson["connect_error"], "QString", "QString");
    setValue(&update_requested_at, pJson["update_requested_at"], "QDateTime", "QDateTime");
    setValue(&update_status, pJson["update_status"], "QString", "QString");
    setValue(&update_error, pJson["update_error"], "QString", "QString");
    setValue(&last_successful_updated_at, pJson["last_successful_updated_at"], "QDateTime", "QDateTime");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGConnection::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGConnection::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    obj->insert("user_id", QJsonValue(user_id));
    obj->insert("connector_id", QJsonValue(connector_id));
    
    
    toJsonValue(QString("connect_status"), connect_status, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("connect_error"), connect_error, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("update_requested_at"), update_requested_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("update_status"), update_status, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("update_error"), update_error, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("last_successful_updated_at"), last_successful_updated_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGConnection::getId() {
    return id;
}
void
SWGConnection::setId(qint32 id) {
    this->id = id;
}

qint32
SWGConnection::getUserId() {
    return user_id;
}
void
SWGConnection::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

qint32
SWGConnection::getConnectorId() {
    return connector_id;
}
void
SWGConnection::setConnectorId(qint32 connector_id) {
    this->connector_id = connector_id;
}

QString*
SWGConnection::getConnectStatus() {
    return connect_status;
}
void
SWGConnection::setConnectStatus(QString* connect_status) {
    this->connect_status = connect_status;
}

QString*
SWGConnection::getConnectError() {
    return connect_error;
}
void
SWGConnection::setConnectError(QString* connect_error) {
    this->connect_error = connect_error;
}

QDateTime*
SWGConnection::getUpdateRequestedAt() {
    return update_requested_at;
}
void
SWGConnection::setUpdateRequestedAt(QDateTime* update_requested_at) {
    this->update_requested_at = update_requested_at;
}

QString*
SWGConnection::getUpdateStatus() {
    return update_status;
}
void
SWGConnection::setUpdateStatus(QString* update_status) {
    this->update_status = update_status;
}

QString*
SWGConnection::getUpdateError() {
    return update_error;
}
void
SWGConnection::setUpdateError(QString* update_error) {
    this->update_error = update_error;
}

QDateTime*
SWGConnection::getLastSuccessfulUpdatedAt() {
    return last_successful_updated_at;
}
void
SWGConnection::setLastSuccessfulUpdatedAt(QDateTime* last_successful_updated_at) {
    this->last_successful_updated_at = last_successful_updated_at;
}

QDateTime*
SWGConnection::getCreatedAt() {
    return created_at;
}
void
SWGConnection::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGConnection::getUpdatedAt() {
    return updated_at;
}
void
SWGConnection::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

