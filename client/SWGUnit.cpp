
#include "SWGUnit.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUnit::SWGUnit(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUnit::SWGUnit() {
    init();
}

SWGUnit::~SWGUnit() {
    this->cleanup();
}

void
SWGUnit::init() {
    id = 0;
    client_id = new QString("");
    name = new QString("");
    abbreviated_name = new QString("");
    category_id = NULL;
    minimum_value = 0.0f;
    maximum_value = 0.0f;
    updated = 0;
    default_unit_id = 0;
    multiply = 0.0f;
    add = 0.0f;
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGUnit::cleanup() {
    
    if(client_id != NULL) {
        delete client_id;
    }
    if(name != NULL) {
        delete name;
    }
    if(abbreviated_name != NULL) {
        delete abbreviated_name;
    }
    
    
    
    
    
    
    
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGUnit*
SWGUnit::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUnit::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&client_id, pJson["client_id"], "QString", "QString");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&abbreviated_name, pJson["abbreviated_name"], "QString", "QString");
    setValue(&category_id, pJson["category_id"], "qint32", "");
    setValue(&minimum_value, pJson["minimum_value"], "float", "");
    setValue(&maximum_value, pJson["maximum_value"], "float", "");
    setValue(&updated, pJson["updated"], "qint32", "");
    setValue(&default_unit_id, pJson["default_unit_id"], "qint32", "");
    setValue(&multiply, pJson["multiply"], "float", "");
    setValue(&add, pJson["add"], "float", "");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGUnit::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUnit::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("client_id"), client_id, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("abbreviated_name"), abbreviated_name, obj, QString("QString"));
    
    
    
    obj->insert("category_id", QJsonValue(category_id));
    obj->insert("minimum_value", QJsonValue(minimum_value));
    obj->insert("maximum_value", QJsonValue(maximum_value));
    obj->insert("updated", QJsonValue(updated));
    obj->insert("default_unit_id", QJsonValue(default_unit_id));
    obj->insert("multiply", QJsonValue(multiply));
    obj->insert("add", QJsonValue(add));
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGUnit::getId() {
    return id;
}
void
SWGUnit::setId(qint32 id) {
    this->id = id;
}

QString*
SWGUnit::getClientId() {
    return client_id;
}
void
SWGUnit::setClientId(QString* client_id) {
    this->client_id = client_id;
}

QString*
SWGUnit::getName() {
    return name;
}
void
SWGUnit::setName(QString* name) {
    this->name = name;
}

QString*
SWGUnit::getAbbreviatedName() {
    return abbreviated_name;
}
void
SWGUnit::setAbbreviatedName(QString* abbreviated_name) {
    this->abbreviated_name = abbreviated_name;
}

qint32
SWGUnit::getCategoryId() {
    return category_id;
}
void
SWGUnit::setCategoryId(qint32 category_id) {
    this->category_id = category_id;
}

float
SWGUnit::getMinimumValue() {
    return minimum_value;
}
void
SWGUnit::setMinimumValue(float minimum_value) {
    this->minimum_value = minimum_value;
}

float
SWGUnit::getMaximumValue() {
    return maximum_value;
}
void
SWGUnit::setMaximumValue(float maximum_value) {
    this->maximum_value = maximum_value;
}

qint32
SWGUnit::getUpdated() {
    return updated;
}
void
SWGUnit::setUpdated(qint32 updated) {
    this->updated = updated;
}

qint32
SWGUnit::getDefaultUnitId() {
    return default_unit_id;
}
void
SWGUnit::setDefaultUnitId(qint32 default_unit_id) {
    this->default_unit_id = default_unit_id;
}

float
SWGUnit::getMultiply() {
    return multiply;
}
void
SWGUnit::setMultiply(float multiply) {
    this->multiply = multiply;
}

float
SWGUnit::getAdd() {
    return add;
}
void
SWGUnit::setAdd(float add) {
    this->add = add;
}

QDateTime*
SWGUnit::getCreatedAt() {
    return created_at;
}
void
SWGUnit::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGUnit::getUpdatedAt() {
    return updated_at;
}
void
SWGUnit::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

