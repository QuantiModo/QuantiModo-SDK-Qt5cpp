
#include "SWGConnectorInfoHistoryItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGConnectorInfoHistoryItem::SWGConnectorInfoHistoryItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGConnectorInfoHistoryItem::SWGConnectorInfoHistoryItem() {
    init();
}

SWGConnectorInfoHistoryItem::~SWGConnectorInfoHistoryItem() {
    this->cleanup();
}

void
SWGConnectorInfoHistoryItem::init() {
    number_of_measurements = NULL;
    success = false;
    message = new QString("");
    created_at = new QString("");
    
}

void
SWGConnectorInfoHistoryItem::cleanup() {
    
    
    if(message != NULL) {
        delete message;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    
}

SWGConnectorInfoHistoryItem*
SWGConnectorInfoHistoryItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGConnectorInfoHistoryItem::fromJsonObject(QJsonObject &pJson) {
    setValue(&number_of_measurements, pJson["number_of_measurements"], "qint32", "");
    setValue(&success, pJson["success"], "bool", "");
    setValue(&message, pJson["message"], "QString", "QString");
    setValue(&created_at, pJson["created_at"], "QString", "QString");
    
}

QString
SWGConnectorInfoHistoryItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGConnectorInfoHistoryItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("number_of_measurements", QJsonValue(number_of_measurements));
    obj->insert("success", QJsonValue(success));
    
    
    toJsonValue(QString("message"), message, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint32
SWGConnectorInfoHistoryItem::getNumberOfMeasurements() {
    return number_of_measurements;
}
void
SWGConnectorInfoHistoryItem::setNumberOfMeasurements(qint32 number_of_measurements) {
    this->number_of_measurements = number_of_measurements;
}

bool
SWGConnectorInfoHistoryItem::getSuccess() {
    return success;
}
void
SWGConnectorInfoHistoryItem::setSuccess(bool success) {
    this->success = success;
}

QString*
SWGConnectorInfoHistoryItem::getMessage() {
    return message;
}
void
SWGConnectorInfoHistoryItem::setMessage(QString* message) {
    this->message = message;
}

QString*
SWGConnectorInfoHistoryItem::getCreatedAt() {
    return created_at;
}
void
SWGConnectorInfoHistoryItem::setCreatedAt(QString* created_at) {
    this->created_at = created_at;
}



} /* namespace Swagger */

