
#include "SWGVariableUserSource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariableUserSource::SWGVariableUserSource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariableUserSource::SWGVariableUserSource() {
    init();
}

SWGVariableUserSource::~SWGVariableUserSource() {
    this->cleanup();
}

void
SWGVariableUserSource::init() {
    user_id = 0;
    variable_id = 0;
    source_id = 0;
    timestamp = 0;
    earliest_measurement_time = 0;
    latest_measurement_time = 0;
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGVariableUserSource::cleanup() {
    
    
    
    
    
    
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGVariableUserSource*
SWGVariableUserSource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariableUserSource::fromJsonObject(QJsonObject &pJson) {
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&variable_id, pJson["variable_id"], "qint32", "");
    setValue(&source_id, pJson["source_id"], "qint32", "");
    setValue(&timestamp, pJson["timestamp"], "qint32", "");
    setValue(&earliest_measurement_time, pJson["earliest_measurement_time"], "qint32", "");
    setValue(&latest_measurement_time, pJson["latest_measurement_time"], "qint32", "");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGVariableUserSource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariableUserSource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("user_id", QJsonValue(user_id));
    obj->insert("variable_id", QJsonValue(variable_id));
    obj->insert("source_id", QJsonValue(source_id));
    obj->insert("timestamp", QJsonValue(timestamp));
    obj->insert("earliest_measurement_time", QJsonValue(earliest_measurement_time));
    obj->insert("latest_measurement_time", QJsonValue(latest_measurement_time));
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGVariableUserSource::getUserId() {
    return user_id;
}
void
SWGVariableUserSource::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

qint32
SWGVariableUserSource::getVariableId() {
    return variable_id;
}
void
SWGVariableUserSource::setVariableId(qint32 variable_id) {
    this->variable_id = variable_id;
}

qint32
SWGVariableUserSource::getSourceId() {
    return source_id;
}
void
SWGVariableUserSource::setSourceId(qint32 source_id) {
    this->source_id = source_id;
}

qint32
SWGVariableUserSource::getTimestamp() {
    return timestamp;
}
void
SWGVariableUserSource::setTimestamp(qint32 timestamp) {
    this->timestamp = timestamp;
}

qint32
SWGVariableUserSource::getEarliestMeasurementTime() {
    return earliest_measurement_time;
}
void
SWGVariableUserSource::setEarliestMeasurementTime(qint32 earliest_measurement_time) {
    this->earliest_measurement_time = earliest_measurement_time;
}

qint32
SWGVariableUserSource::getLatestMeasurementTime() {
    return latest_measurement_time;
}
void
SWGVariableUserSource::setLatestMeasurementTime(qint32 latest_measurement_time) {
    this->latest_measurement_time = latest_measurement_time;
}

QDateTime*
SWGVariableUserSource::getCreatedAt() {
    return created_at;
}
void
SWGVariableUserSource::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGVariableUserSource::getUpdatedAt() {
    return updated_at;
}
void
SWGVariableUserSource::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

