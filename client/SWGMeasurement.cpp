
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
    variable = new QString("");
    source = new QString("");
    timestamp = 0L;
    value = 0.0;
    unit = new QString("");
    storedValue = 0.0;
    storedAbbreviatedUnitName = new QString("");
    
}

void
SWGMeasurement::cleanup() {
    if(variable != NULL) {
        delete variable;
    }
    if(source != NULL) {
        delete source;
    }
    
    if(value != NULL) {
        delete value;
    }
    if(unit != NULL) {
        delete unit;
    }
    if(storedValue != NULL) {
        delete storedValue;
    }
    if(storedAbbreviatedUnitName != NULL) {
        delete storedAbbreviatedUnitName;
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
    setValue(&variable, pJson["variable"], "QString", "QString");
    setValue(&source, pJson["source"], "QString", "QString");
    setValue(&timestamp, pJson["timestamp"], "qint64", "");
    setValue(&value, pJson["value"], "double", "double");
    setValue(&unit, pJson["unit"], "QString", "QString");
    setValue(&storedValue, pJson["storedValue"], "double", "double");
    setValue(&storedAbbreviatedUnitName, pJson["storedAbbreviatedUnitName"], "QString", "QString");
    
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
    
    
    toJsonValue(QString("variable"), variable, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("source"), source, obj, QString("QString"));
    
    
    
    obj->insert("timestamp", QJsonValue(timestamp));
    
    
    toJsonValue(QString("value"), value, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("unit"), unit, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("storedValue"), storedValue, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("storedAbbreviatedUnitName"), storedAbbreviatedUnitName, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGMeasurement::getVariable() {
    return variable;
}
void
SWGMeasurement::setVariable(QString* variable) {
    this->variable = variable;
}

QString*
SWGMeasurement::getSource() {
    return source;
}
void
SWGMeasurement::setSource(QString* source) {
    this->source = source;
}

qint64
SWGMeasurement::getTimestamp() {
    return timestamp;
}
void
SWGMeasurement::setTimestamp(qint64 timestamp) {
    this->timestamp = timestamp;
}

double*
SWGMeasurement::getValue() {
    return value;
}
void
SWGMeasurement::setValue(double* value) {
    this->value = value;
}

QString*
SWGMeasurement::getUnit() {
    return unit;
}
void
SWGMeasurement::setUnit(QString* unit) {
    this->unit = unit;
}

double*
SWGMeasurement::getStoredValue() {
    return storedValue;
}
void
SWGMeasurement::setStoredValue(double* storedValue) {
    this->storedValue = storedValue;
}

QString*
SWGMeasurement::getStoredAbbreviatedUnitName() {
    return storedAbbreviatedUnitName;
}
void
SWGMeasurement::setStoredAbbreviatedUnitName(QString* storedAbbreviatedUnitName) {
    this->storedAbbreviatedUnitName = storedAbbreviatedUnitName;
}



} /* namespace Swagger */

