
#include "SWGPermission.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPermission::SWGPermission(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPermission::SWGPermission() {
    init();
}

SWGPermission::~SWGPermission() {
    this->cleanup();
}

void
SWGPermission::init() {
    target = 0;
    variableName = new QString("");
    min_timestamp = 0;
    max_timestamp = 0;
    min_time_of_day = 0;
    max_time_of_day = 0;
    week = new QString("");
    
}

void
SWGPermission::cleanup() {
    
    if(variableName != NULL) {
        delete variableName;
    }
    
    
    
    
    if(week != NULL) {
        delete week;
    }
    
}

SWGPermission*
SWGPermission::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPermission::fromJsonObject(QJsonObject &pJson) {
    setValue(&target, pJson["target"], "qint32", "");
    setValue(&variableName, pJson["variableName"], "QString", "QString");
    setValue(&min_timestamp, pJson["min_timestamp"], "qint32", "");
    setValue(&max_timestamp, pJson["max_timestamp"], "qint32", "");
    setValue(&min_time_of_day, pJson["min_time_of_day"], "qint32", "");
    setValue(&max_time_of_day, pJson["max_time_of_day"], "qint32", "");
    setValue(&week, pJson["week"], "QString", "QString");
    
}

QString
SWGPermission::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPermission::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("target", QJsonValue(target));
    
    
    toJsonValue(QString("variableName"), variableName, obj, QString("QString"));
    
    
    
    obj->insert("min_timestamp", QJsonValue(min_timestamp));
    obj->insert("max_timestamp", QJsonValue(max_timestamp));
    obj->insert("min_time_of_day", QJsonValue(min_time_of_day));
    obj->insert("max_time_of_day", QJsonValue(max_time_of_day));
    
    
    toJsonValue(QString("week"), week, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint32
SWGPermission::getTarget() {
    return target;
}
void
SWGPermission::setTarget(qint32 target) {
    this->target = target;
}

QString*
SWGPermission::getVariableName() {
    return variableName;
}
void
SWGPermission::setVariableName(QString* variableName) {
    this->variableName = variableName;
}

qint32
SWGPermission::getMinTimestamp() {
    return min_timestamp;
}
void
SWGPermission::setMinTimestamp(qint32 min_timestamp) {
    this->min_timestamp = min_timestamp;
}

qint32
SWGPermission::getMaxTimestamp() {
    return max_timestamp;
}
void
SWGPermission::setMaxTimestamp(qint32 max_timestamp) {
    this->max_timestamp = max_timestamp;
}

qint32
SWGPermission::getMinTimeOfDay() {
    return min_time_of_day;
}
void
SWGPermission::setMinTimeOfDay(qint32 min_time_of_day) {
    this->min_time_of_day = min_time_of_day;
}

qint32
SWGPermission::getMaxTimeOfDay() {
    return max_time_of_day;
}
void
SWGPermission::setMaxTimeOfDay(qint32 max_time_of_day) {
    this->max_time_of_day = max_time_of_day;
}

QString*
SWGPermission::getWeek() {
    return week;
}
void
SWGPermission::setWeek(QString* week) {
    this->week = week;
}



} /* namespace Swagger */

