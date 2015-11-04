
#include "SWGUnitCategory.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUnitCategory::SWGUnitCategory(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUnitCategory::SWGUnitCategory() {
    init();
}

SWGUnitCategory::~SWGUnitCategory() {
    this->cleanup();
}

void
SWGUnitCategory::init() {
    id = NULL;
    name = new QString("");
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGUnitCategory::cleanup() {
    
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

SWGUnitCategory*
SWGUnitCategory::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUnitCategory::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGUnitCategory::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUnitCategory::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGUnitCategory::getId() {
    return id;
}
void
SWGUnitCategory::setId(qint32 id) {
    this->id = id;
}

QString*
SWGUnitCategory::getName() {
    return name;
}
void
SWGUnitCategory::setName(QString* name) {
    this->name = name;
}

QDateTime*
SWGUnitCategory::getCreatedAt() {
    return created_at;
}
void
SWGUnitCategory::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGUnitCategory::getUpdatedAt() {
    return updated_at;
}
void
SWGUnitCategory::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

