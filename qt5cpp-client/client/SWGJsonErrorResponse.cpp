
#include "SWGJsonErrorResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGJsonErrorResponse::SWGJsonErrorResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGJsonErrorResponse::SWGJsonErrorResponse() {
    init();
}

SWGJsonErrorResponse::~SWGJsonErrorResponse() {
    this->cleanup();
}

void
SWGJsonErrorResponse::init() {
    status = new QString("");
    message = new QString("");
    
}

void
SWGJsonErrorResponse::cleanup() {
    if(status != NULL) {
        delete status;
    }
    if(message != NULL) {
        delete message;
    }
    
}

SWGJsonErrorResponse*
SWGJsonErrorResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGJsonErrorResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&status, pJson["status"], "QString", "QString");
    setValue(&message, pJson["message"], "QString", "QString");
    
}

QString
SWGJsonErrorResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGJsonErrorResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("status"), status, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("message"), message, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGJsonErrorResponse::getStatus() {
    return status;
}
void
SWGJsonErrorResponse::setStatus(QString* status) {
    this->status = status;
}

QString*
SWGJsonErrorResponse::getMessage() {
    return message;
}
void
SWGJsonErrorResponse::setMessage(QString* message) {
    this->message = message;
}



} /* namespace Swagger */

