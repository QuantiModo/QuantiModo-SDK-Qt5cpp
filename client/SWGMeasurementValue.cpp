
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
    start_time = 0L;
    value = 0.0f;
    
}

void
SWGMeasurementValue::cleanup() {
    
    
    
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
    setValue(&start_time, pJson["start_time"], "qint64", "");
    setValue(&value, pJson["value"], "float", "");
    
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
    obj->insert("start_time", QJsonValue(start_time));
    obj->insert("value", QJsonValue(value));
    

    return obj;
}

qint64
SWGMeasurementValue::getStartTime() {
    return start_time;
}
void
SWGMeasurementValue::setStartTime(qint64 start_time) {
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



} /* namespace Swagger */

