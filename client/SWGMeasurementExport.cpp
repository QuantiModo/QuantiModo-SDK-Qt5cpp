
#include "SWGMeasurementExport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGMeasurementExport::SWGMeasurementExport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGMeasurementExport::SWGMeasurementExport() {
    init();
}

SWGMeasurementExport::~SWGMeasurementExport() {
    this->cleanup();
}

void
SWGMeasurementExport::init() {
    id = NULL;
    user_id = NULL;
    status = new QString("");
    error_message = new QString("");
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGMeasurementExport::cleanup() {
    
    
    if(status != NULL) {
        delete status;
    }
    if(error_message != NULL) {
        delete error_message;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGMeasurementExport*
SWGMeasurementExport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMeasurementExport::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&status, pJson["status"], "QString", "QString");
    setValue(&error_message, pJson["error_message"], "QString", "QString");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGMeasurementExport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGMeasurementExport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    obj->insert("user_id", QJsonValue(user_id));
    
    
    toJsonValue(QString("status"), status, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("error_message"), error_message, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGMeasurementExport::getId() {
    return id;
}
void
SWGMeasurementExport::setId(qint32 id) {
    this->id = id;
}

qint32
SWGMeasurementExport::getUserId() {
    return user_id;
}
void
SWGMeasurementExport::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

QString*
SWGMeasurementExport::getStatus() {
    return status;
}
void
SWGMeasurementExport::setStatus(QString* status) {
    this->status = status;
}

QString*
SWGMeasurementExport::getErrorMessage() {
    return error_message;
}
void
SWGMeasurementExport::setErrorMessage(QString* error_message) {
    this->error_message = error_message;
}

QDateTime*
SWGMeasurementExport::getCreatedAt() {
    return created_at;
}
void
SWGMeasurementExport::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGMeasurementExport::getUpdatedAt() {
    return updated_at;
}
void
SWGMeasurementExport::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

