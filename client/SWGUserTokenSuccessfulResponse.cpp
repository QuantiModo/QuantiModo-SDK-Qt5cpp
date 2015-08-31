
#include "SWGUserTokenSuccessfulResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserTokenSuccessfulResponse::SWGUserTokenSuccessfulResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserTokenSuccessfulResponse::SWGUserTokenSuccessfulResponse() {
    init();
}

SWGUserTokenSuccessfulResponse::~SWGUserTokenSuccessfulResponse() {
    this->cleanup();
}

void
SWGUserTokenSuccessfulResponse::init() {
    code = NULL;
    message = new QString("");
    user = new SWGUserTokenSuccessfulResponseInnerUserField();
    
}

void
SWGUserTokenSuccessfulResponse::cleanup() {
    
    if(message != NULL) {
        delete message;
    }
    if(user != NULL) {
        delete user;
    }
    
}

SWGUserTokenSuccessfulResponse*
SWGUserTokenSuccessfulResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserTokenSuccessfulResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&code, pJson["code"], "qint32", "");
    setValue(&message, pJson["message"], "QString", "QString");
    setValue(&user, pJson["user"], "SWGUserTokenSuccessfulResponseInnerUserField", "SWGUserTokenSuccessfulResponseInnerUserField");
    
}

QString
SWGUserTokenSuccessfulResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserTokenSuccessfulResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("code", QJsonValue(code));
    
    
    toJsonValue(QString("message"), message, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("user"), user, obj, QString("SWGUserTokenSuccessfulResponseInnerUserField"));
    
    
    
    

    return obj;
}

qint32
SWGUserTokenSuccessfulResponse::getCode() {
    return code;
}
void
SWGUserTokenSuccessfulResponse::setCode(qint32 code) {
    this->code = code;
}

QString*
SWGUserTokenSuccessfulResponse::getMessage() {
    return message;
}
void
SWGUserTokenSuccessfulResponse::setMessage(QString* message) {
    this->message = message;
}

SWGUserTokenSuccessfulResponseInnerUserField*
SWGUserTokenSuccessfulResponse::getUser() {
    return user;
}
void
SWGUserTokenSuccessfulResponse::setUser(SWGUserTokenSuccessfulResponseInnerUserField* user) {
    this->user = user;
}



} /* namespace Swagger */

