
#include "SWGCommonResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCommonResponse::SWGCommonResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCommonResponse::SWGCommonResponse() {
    init();
}

SWGCommonResponse::~SWGCommonResponse() {
    this->cleanup();
}

void
SWGCommonResponse::init() {
    status = 0;
    message = new QString("");
    success = false;
    
}

void
SWGCommonResponse::cleanup() {
    
    if(message != NULL) {
        delete message;
    }
    
    
}

SWGCommonResponse*
SWGCommonResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCommonResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&status, pJson["status"], "qint32", "");
    setValue(&message, pJson["message"], "QString", "QString");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGCommonResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCommonResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("status", QJsonValue(status));
    
    
    toJsonValue(QString("message"), message, obj, QString("QString"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

qint32
SWGCommonResponse::getStatus() {
    return status;
}
void
SWGCommonResponse::setStatus(qint32 status) {
    this->status = status;
}

QString*
SWGCommonResponse::getMessage() {
    return message;
}
void
SWGCommonResponse::setMessage(QString* message) {
    this->message = message;
}

bool
SWGCommonResponse::getSuccess() {
    return success;
}
void
SWGCommonResponse::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

