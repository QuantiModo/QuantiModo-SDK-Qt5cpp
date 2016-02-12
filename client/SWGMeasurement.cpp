
#include "SWGMeasurement.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGMeasurement::SWGMeasurement(QString* json) {
    init();
    this->fromJson(*json);
}

SWGMeasurement::SWGMeasurement() {
    init();
}

SWGMeasurement::~SWGMeasurement() {
    this->cleanup();
}

void
SWGMeasurement::init() {
    id = NULL;
    user_id = 0;
    client_id = new QString("");
    connector_id = 0;
    variable_id = 0;
    source_id = 0;
    start_time = new QString("");
    value = 0.0f;
    unit_id = 0;
    original_value = 0.0f;
    original_unit_id = 0;
    duration = 0;
    note = new QString("");
    latitude = 0.0f;
    longitude = 0.0f;
    location = new QString("");
    created_at = NULL;
    updated_at = NULL;
    error = new QString("");
    
}

void
SWGMeasurement::cleanup() {
    
    
    if(client_id != NULL) {
        delete client_id;
    }
    
    
    
    if(start_time != NULL) {
        delete start_time;
    }
    
    
    
    
    
    if(note != NULL) {
        delete note;
    }
    
    
    if(location != NULL) {
        delete location;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    if(error != NULL) {
        delete error;
    }
    
}

SWGMeasurement*
SWGMeasurement::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMeasurement::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&client_id, pJson["client_id"], "QString", "QString");
    setValue(&connector_id, pJson["connector_id"], "qint32", "");
    setValue(&variable_id, pJson["variable_id"], "qint32", "");
    setValue(&source_id, pJson["source_id"], "qint32", "");
    setValue(&start_time, pJson["start_time"], "QString", "QString");
    setValue(&value, pJson["value"], "float", "");
    setValue(&unit_id, pJson["unit_id"], "qint32", "");
    setValue(&original_value, pJson["original_value"], "float", "");
    setValue(&original_unit_id, pJson["original_unit_id"], "qint32", "");
    setValue(&duration, pJson["duration"], "qint32", "");
    setValue(&note, pJson["note"], "QString", "QString");
    setValue(&latitude, pJson["latitude"], "float", "");
    setValue(&longitude, pJson["longitude"], "float", "");
    setValue(&location, pJson["location"], "QString", "QString");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    setValue(&error, pJson["error"], "QString", "QString");
    
}

QString
SWGMeasurement::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGMeasurement::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    obj->insert("user_id", QJsonValue(user_id));
    
    
    toJsonValue(QString("client_id"), client_id, obj, QString("QString"));
    
    
    
    obj->insert("connector_id", QJsonValue(connector_id));
    obj->insert("variable_id", QJsonValue(variable_id));
    obj->insert("source_id", QJsonValue(source_id));
    
    
    toJsonValue(QString("start_time"), start_time, obj, QString("QString"));
    
    
    
    obj->insert("value", QJsonValue(value));
    obj->insert("unit_id", QJsonValue(unit_id));
    obj->insert("original_value", QJsonValue(original_value));
    obj->insert("original_unit_id", QJsonValue(original_unit_id));
    obj->insert("duration", QJsonValue(duration));
    
    
    toJsonValue(QString("note"), note, obj, QString("QString"));
    
    
    
    obj->insert("latitude", QJsonValue(latitude));
    obj->insert("longitude", QJsonValue(longitude));
    
    
    toJsonValue(QString("location"), location, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("error"), error, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint32
SWGMeasurement::getId() {
    return id;
}
void
SWGMeasurement::setId(qint32 id) {
    this->id = id;
}

qint32
SWGMeasurement::getUserId() {
    return user_id;
}
void
SWGMeasurement::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

QString*
SWGMeasurement::getClientId() {
    return client_id;
}
void
SWGMeasurement::setClientId(QString* client_id) {
    this->client_id = client_id;
}

qint32
SWGMeasurement::getConnectorId() {
    return connector_id;
}
void
SWGMeasurement::setConnectorId(qint32 connector_id) {
    this->connector_id = connector_id;
}

qint32
SWGMeasurement::getVariableId() {
    return variable_id;
}
void
SWGMeasurement::setVariableId(qint32 variable_id) {
    this->variable_id = variable_id;
}

qint32
SWGMeasurement::getSourceId() {
    return source_id;
}
void
SWGMeasurement::setSourceId(qint32 source_id) {
    this->source_id = source_id;
}

QString*
SWGMeasurement::getStartTime() {
    return start_time;
}
void
SWGMeasurement::setStartTime(QString* start_time) {
    this->start_time = start_time;
}

float
SWGMeasurement::getValue() {
    return value;
}
void
SWGMeasurement::setValue(float value) {
    this->value = value;
}

qint32
SWGMeasurement::getUnitId() {
    return unit_id;
}
void
SWGMeasurement::setUnitId(qint32 unit_id) {
    this->unit_id = unit_id;
}

float
SWGMeasurement::getOriginalValue() {
    return original_value;
}
void
SWGMeasurement::setOriginalValue(float original_value) {
    this->original_value = original_value;
}

qint32
SWGMeasurement::getOriginalUnitId() {
    return original_unit_id;
}
void
SWGMeasurement::setOriginalUnitId(qint32 original_unit_id) {
    this->original_unit_id = original_unit_id;
}

qint32
SWGMeasurement::getDuration() {
    return duration;
}
void
SWGMeasurement::setDuration(qint32 duration) {
    this->duration = duration;
}

QString*
SWGMeasurement::getNote() {
    return note;
}
void
SWGMeasurement::setNote(QString* note) {
    this->note = note;
}

float
SWGMeasurement::getLatitude() {
    return latitude;
}
void
SWGMeasurement::setLatitude(float latitude) {
    this->latitude = latitude;
}

float
SWGMeasurement::getLongitude() {
    return longitude;
}
void
SWGMeasurement::setLongitude(float longitude) {
    this->longitude = longitude;
}

QString*
SWGMeasurement::getLocation() {
    return location;
}
void
SWGMeasurement::setLocation(QString* location) {
    this->location = location;
}

QDateTime*
SWGMeasurement::getCreatedAt() {
    return created_at;
}
void
SWGMeasurement::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGMeasurement::getUpdatedAt() {
    return updated_at;
}
void
SWGMeasurement::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}

QString*
SWGMeasurement::getError() {
    return error;
}
void
SWGMeasurement::setError(QString* error) {
    this->error = error;
}



} /* namespace Swagger */

