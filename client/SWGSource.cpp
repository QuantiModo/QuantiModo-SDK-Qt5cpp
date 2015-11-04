
#include "SWGSource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSource::SWGSource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSource::SWGSource() {
    init();
}

SWGSource::~SWGSource() {
    this->cleanup();
}

void
SWGSource::init() {
    id = 0;
    client_id = new QString("");
    name = new QString("");
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGSource::cleanup() {
    
    if(client_id != NULL) {
        delete client_id;
    }
    if(name != NULL) {
        delete name;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGSource*
SWGSource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSource::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&client_id, pJson["client_id"], "QString", "QString");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGSource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("client_id"), client_id, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGSource::getId() {
    return id;
}
void
SWGSource::setId(qint32 id) {
    this->id = id;
}

QString*
SWGSource::getClientId() {
    return client_id;
}
void
SWGSource::setClientId(QString* client_id) {
    this->client_id = client_id;
}

QString*
SWGSource::getName() {
    return name;
}
void
SWGSource::setName(QString* name) {
    this->name = name;
}

QDateTime*
SWGSource::getCreatedAt() {
    return created_at;
}
void
SWGSource::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGSource::getUpdatedAt() {
    return updated_at;
}
void
SWGSource::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

