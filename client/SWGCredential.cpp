
#include "SWGCredential.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCredential::SWGCredential(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCredential::SWGCredential() {
    init();
}

SWGCredential::~SWGCredential() {
    this->cleanup();
}

void
SWGCredential::init() {
    user_id = NULL;
    connector_id = NULL;
    attr_key = new QString("");
    attr_value = new QString("");
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGCredential::cleanup() {
    
    
    if(attr_key != NULL) {
        delete attr_key;
    }
    if(attr_value != NULL) {
        delete attr_value;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGCredential*
SWGCredential::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCredential::fromJsonObject(QJsonObject &pJson) {
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&connector_id, pJson["connector_id"], "qint32", "");
    setValue(&attr_key, pJson["attr_key"], "QString", "QString");
    setValue(&attr_value, pJson["attr_value"], "QString", "QString");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGCredential::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCredential::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("user_id", QJsonValue(user_id));
    obj->insert("connector_id", QJsonValue(connector_id));
    
    
    toJsonValue(QString("attr_key"), attr_key, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("attr_value"), attr_value, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGCredential::getUserId() {
    return user_id;
}
void
SWGCredential::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

qint32
SWGCredential::getConnectorId() {
    return connector_id;
}
void
SWGCredential::setConnectorId(qint32 connector_id) {
    this->connector_id = connector_id;
}

QString*
SWGCredential::getAttrKey() {
    return attr_key;
}
void
SWGCredential::setAttrKey(QString* attr_key) {
    this->attr_key = attr_key;
}

QString*
SWGCredential::getAttrValue() {
    return attr_value;
}
void
SWGCredential::setAttrValue(QString* attr_value) {
    this->attr_value = attr_value;
}

QDateTime*
SWGCredential::getCreatedAt() {
    return created_at;
}
void
SWGCredential::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGCredential::getUpdatedAt() {
    return updated_at;
}
void
SWGCredential::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

