
#include "SWGMeasurementValue.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGMeasurementValue::SWGMeasurementValue(QString* json) {
    init();
    this->fromJson(*json);
}

SWGMeasurementValue::SWGMeasurementValue() {
    init();
}

SWGMeasurementValue::~SWGMeasurementValue() {
    this->cleanup();
}

void
SWGMeasurementValue::init() {
    start_time = new QString("");
    value = 0.0f;
    note = new QString("");
    
}

void
SWGMeasurementValue::cleanup() {
    if(start_time != NULL) {
        delete start_time;
    }
    
    if(note != NULL) {
        delete note;
    }
    
}

SWGMeasurementValue*
SWGMeasurementValue::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMeasurementValue::fromJsonObject(QJsonObject &pJson) {
    setValue(&start_time, pJson["start_time"], "QString", "QString");
    setValue(&value, pJson["value"], "float", "");
    setValue(&note, pJson["note"], "QString", "QString");
    
}

QString
SWGMeasurementValue::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGMeasurementValue::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("start_time"), start_time, obj, QString("QString"));
    
    
    
    obj->insert("value", QJsonValue(value));
    
    
    toJsonValue(QString("note"), note, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGMeasurementValue::getStartTime() {
    return start_time;
}
void
SWGMeasurementValue::setStartTime(QString* start_time) {
    this->start_time = start_time;
}

float
SWGMeasurementValue::getValue() {
    return value;
}
void
SWGMeasurementValue::setValue(float value) {
    this->value = value;
}

QString*
SWGMeasurementValue::getNote() {
    return note;
}
void
SWGMeasurementValue::setNote(QString* note) {
    this->note = note;
}



} /* namespace Swagger */

