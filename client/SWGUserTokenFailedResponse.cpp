
#include "SWGUserTokenFailedResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserTokenFailedResponse::SWGUserTokenFailedResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserTokenFailedResponse::SWGUserTokenFailedResponse() {
    init();
}

SWGUserTokenFailedResponse::~SWGUserTokenFailedResponse() {
    this->cleanup();
}

void
SWGUserTokenFailedResponse::init() {
    code = NULL;
    message = new QString("");
    success = false;
    
}

void
SWGUserTokenFailedResponse::cleanup() {
    
    if(message != NULL) {
        delete message;
    }
    
    
}

SWGUserTokenFailedResponse*
SWGUserTokenFailedResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserTokenFailedResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&code, pJson["code"], "qint32", "");
    setValue(&message, pJson["message"], "QString", "QString");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGUserTokenFailedResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserTokenFailedResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("code", QJsonValue(code));
    
    
    toJsonValue(QString("message"), message, obj, QString("QString"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

qint32
SWGUserTokenFailedResponse::getCode() {
    return code;
}
void
SWGUserTokenFailedResponse::setCode(qint32 code) {
    this->code = code;
}

QString*
SWGUserTokenFailedResponse::getMessage() {
    return message;
}
void
SWGUserTokenFailedResponse::setMessage(QString* message) {
    this->message = message;
}

bool
SWGUserTokenFailedResponse::getSuccess() {
    return success;
}
void
SWGUserTokenFailedResponse::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

