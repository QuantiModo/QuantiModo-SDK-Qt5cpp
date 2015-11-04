
#include "SWGVote.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVote::SWGVote(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVote::SWGVote() {
    init();
}

SWGVote::~SWGVote() {
    this->cleanup();
}

void
SWGVote::init() {
    id = 0;
    client_id = new QString("");
    user_id = 0;
    cause_id = 0;
    effect_id = 0;
    value = 0;
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGVote::cleanup() {
    
    if(client_id != NULL) {
        delete client_id;
    }
    
    
    
    
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGVote*
SWGVote::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVote::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&client_id, pJson["client_id"], "QString", "QString");
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&cause_id, pJson["cause_id"], "qint32", "");
    setValue(&effect_id, pJson["effect_id"], "qint32", "");
    setValue(&value, pJson["value"], "qint32", "");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGVote::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVote::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("client_id"), client_id, obj, QString("QString"));
    
    
    
    obj->insert("user_id", QJsonValue(user_id));
    obj->insert("cause_id", QJsonValue(cause_id));
    obj->insert("effect_id", QJsonValue(effect_id));
    obj->insert("value", QJsonValue(value));
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGVote::getId() {
    return id;
}
void
SWGVote::setId(qint32 id) {
    this->id = id;
}

QString*
SWGVote::getClientId() {
    return client_id;
}
void
SWGVote::setClientId(QString* client_id) {
    this->client_id = client_id;
}

qint32
SWGVote::getUserId() {
    return user_id;
}
void
SWGVote::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

qint32
SWGVote::getCauseId() {
    return cause_id;
}
void
SWGVote::setCauseId(qint32 cause_id) {
    this->cause_id = cause_id;
}

qint32
SWGVote::getEffectId() {
    return effect_id;
}
void
SWGVote::setEffectId(qint32 effect_id) {
    this->effect_id = effect_id;
}

qint32
SWGVote::getValue() {
    return value;
}
void
SWGVote::setValue(qint32 value) {
    this->value = value;
}

QDateTime*
SWGVote::getCreatedAt() {
    return created_at;
}
void
SWGVote::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGVote::getUpdatedAt() {
    return updated_at;
}
void
SWGVote::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

