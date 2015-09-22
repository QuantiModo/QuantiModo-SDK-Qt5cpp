
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
    startTime = new QString("");
    humanTime = new SWGHumanTime();
    value = 0.0;
    unit = new QString("");
    originalValue = NULL;
    storedValue = 0.0;
    storedAbbreviatedUnitName = new QString("");
    originalAbbreviatedUnitName = new QString("");
    abbreviatedUnitName = new QString("");
    note = new QString("");
    
}

void
SWGMeasurement::cleanup() {
    if(variable != NULL) {
        delete variable;
    }
    if(source != NULL) {
        delete source;
    }
    
    if(startTime != NULL) {
        delete startTime;
    }
    if(humanTime != NULL) {
        delete humanTime;
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
    if(originalAbbreviatedUnitName != NULL) {
        delete originalAbbreviatedUnitName;
    }
    if(abbreviatedUnitName != NULL) {
        delete abbreviatedUnitName;
    }
    if(note != NULL) {
        delete note;
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
    setValue(&startTime, pJson["startTime"], "QString", "QString");
    setValue(&humanTime, pJson["humanTime"], "SWGHumanTime", "SWGHumanTime");
    setValue(&value, pJson["value"], "double", "double");
    setValue(&unit, pJson["unit"], "QString", "QString");
    setValue(&originalValue, pJson["originalValue"], "qint32", "");
    setValue(&storedValue, pJson["storedValue"], "double", "double");
    setValue(&storedAbbreviatedUnitName, pJson["storedAbbreviatedUnitName"], "QString", "QString");
    setValue(&originalAbbreviatedUnitName, pJson["originalAbbreviatedUnitName"], "QString", "QString");
    setValue(&abbreviatedUnitName, pJson["abbreviatedUnitName"], "QString", "QString");
    setValue(&note, pJson["note"], "QString", "QString");
    
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
    
    
    toJsonValue(QString("startTime"), startTime, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("humanTime"), humanTime, obj, QString("SWGHumanTime"));
    
    
    
    
    
    toJsonValue(QString("value"), value, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("unit"), unit, obj, QString("QString"));
    
    
    
    obj->insert("originalValue", QJsonValue(originalValue));
    
    
    toJsonValue(QString("storedValue"), storedValue, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("storedAbbreviatedUnitName"), storedAbbreviatedUnitName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("originalAbbreviatedUnitName"), originalAbbreviatedUnitName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("abbreviatedUnitName"), abbreviatedUnitName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("note"), note, obj, QString("QString"));
    
    
    
    

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

QString*
SWGMeasurement::getStartTime() {
    return startTime;
}
void
SWGMeasurement::setStartTime(QString* startTime) {
    this->startTime = startTime;
}

SWGHumanTime*
SWGMeasurement::getHumanTime() {
    return humanTime;
}
void
SWGMeasurement::setHumanTime(SWGHumanTime* humanTime) {
    this->humanTime = humanTime;
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

qint32
SWGMeasurement::getOriginalValue() {
    return originalValue;
}
void
SWGMeasurement::setOriginalValue(qint32 originalValue) {
    this->originalValue = originalValue;
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

QString*
SWGMeasurement::getOriginalAbbreviatedUnitName() {
    return originalAbbreviatedUnitName;
}
void
SWGMeasurement::setOriginalAbbreviatedUnitName(QString* originalAbbreviatedUnitName) {
    this->originalAbbreviatedUnitName = originalAbbreviatedUnitName;
}

QString*
SWGMeasurement::getAbbreviatedUnitName() {
    return abbreviatedUnitName;
}
void
SWGMeasurement::setAbbreviatedUnitName(QString* abbreviatedUnitName) {
    this->abbreviatedUnitName = abbreviatedUnitName;
}

QString*
SWGMeasurement::getNote() {
    return note;
}
void
SWGMeasurement::setNote(QString* note) {
    this->note = note;
}



} /* namespace Swagger */

