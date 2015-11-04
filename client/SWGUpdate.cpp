
#include "SWGUpdate.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUpdate::SWGUpdate(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUpdate::SWGUpdate() {
    init();
}

SWGUpdate::~SWGUpdate() {
    this->cleanup();
}

void
SWGUpdate::init() {
    id = 0;
    user_id = 0;
    connector_id = 0;
    number_of_measurements = 0;
    success = false;
    message = new QString("");
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGUpdate::cleanup() {
    
    
    
    
    
    if(message != NULL) {
        delete message;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGUpdate*
SWGUpdate::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUpdate::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&connector_id, pJson["connector_id"], "qint32", "");
    setValue(&number_of_measurements, pJson["number_of_measurements"], "qint32", "");
    setValue(&success, pJson["success"], "bool", "");
    setValue(&message, pJson["message"], "QString", "QString");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGUpdate::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUpdate::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    obj->insert("user_id", QJsonValue(user_id));
    obj->insert("connector_id", QJsonValue(connector_id));
    obj->insert("number_of_measurements", QJsonValue(number_of_measurements));
    obj->insert("success", QJsonValue(success));
    
    
    toJsonValue(QString("message"), message, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGUpdate::getId() {
    return id;
}
void
SWGUpdate::setId(qint32 id) {
    this->id = id;
}

qint32
SWGUpdate::getUserId() {
    return user_id;
}
void
SWGUpdate::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

qint32
SWGUpdate::getConnectorId() {
    return connector_id;
}
void
SWGUpdate::setConnectorId(qint32 connector_id) {
    this->connector_id = connector_id;
}

qint32
SWGUpdate::getNumberOfMeasurements() {
    return number_of_measurements;
}
void
SWGUpdate::setNumberOfMeasurements(qint32 number_of_measurements) {
    this->number_of_measurements = number_of_measurements;
}

bool
SWGUpdate::getSuccess() {
    return success;
}
void
SWGUpdate::setSuccess(bool success) {
    this->success = success;
}

QString*
SWGUpdate::getMessage() {
    return message;
}
void
SWGUpdate::setMessage(QString* message) {
    this->message = message;
}

QDateTime*
SWGUpdate::getCreatedAt() {
    return created_at;
}
void
SWGUpdate::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGUpdate::getUpdatedAt() {
    return updated_at;
}
void
SWGUpdate::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

