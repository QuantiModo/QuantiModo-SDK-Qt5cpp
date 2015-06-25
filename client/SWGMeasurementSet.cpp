
#include "SWGMeasurementSet.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGMeasurementSet::SWGMeasurementSet(QString* json) {
    init();
    this->fromJson(*json);
}

SWGMeasurementSet::SWGMeasurementSet() {
    init();
}

SWGMeasurementSet::~SWGMeasurementSet() {
    this->cleanup();
}

void
SWGMeasurementSet::init() {
    measurements = new QList<SWGValueObject*>();
    name = new QString("");
    source = new QString("");
    category = new QString("");
    combinationOperation = new QString("");
    unit = new QString("");
    
}

void
SWGMeasurementSet::cleanup() {
    if(measurements != NULL) {
        QList<SWGValueObject*>* arr = measurements;
        foreach(SWGValueObject* o, *arr) {
            delete o;
        }
        delete measurements;
    }
    if(name != NULL) {
        delete name;
    }
    if(source != NULL) {
        delete source;
    }
    if(category != NULL) {
        delete category;
    }
    if(combinationOperation != NULL) {
        delete combinationOperation;
    }
    if(unit != NULL) {
        delete unit;
    }
    
}

SWGMeasurementSet*
SWGMeasurementSet::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMeasurementSet::fromJsonObject(QJsonObject &pJson) {
    setValue(&measurements, pJson["measurements"], "QList", "SWGValueObject");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&source, pJson["source"], "QString", "QString");
    setValue(&category, pJson["category"], "QString", "QString");
    setValue(&combinationOperation, pJson["combinationOperation"], "QString", "QString");
    setValue(&unit, pJson["unit"], "QString", "QString");
    
}

QString
SWGMeasurementSet::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGMeasurementSet::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGValueObject*>* measurementsList = measurements;
    QJsonArray measurementsJsonArray;
    toJsonArray((QList<void*>*)measurements, &measurementsJsonArray, "measurements", "SWGValueObject");

    obj->insert("measurements", measurementsJsonArray);
    
    
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("source"), source, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("category"), category, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("combinationOperation"), combinationOperation, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("unit"), unit, obj, QString("QString"));
    
    
    
    

    return obj;
}

QList<SWGValueObject*>*
SWGMeasurementSet::getMeasurements() {
    return measurements;
}
void
SWGMeasurementSet::setMeasurements(QList<SWGValueObject*>* measurements) {
    this->measurements = measurements;
}

QString*
SWGMeasurementSet::getName() {
    return name;
}
void
SWGMeasurementSet::setName(QString* name) {
    this->name = name;
}

QString*
SWGMeasurementSet::getSource() {
    return source;
}
void
SWGMeasurementSet::setSource(QString* source) {
    this->source = source;
}

QString*
SWGMeasurementSet::getCategory() {
    return category;
}
void
SWGMeasurementSet::setCategory(QString* category) {
    this->category = category;
}

QString*
SWGMeasurementSet::getCombinationOperation() {
    return combinationOperation;
}
void
SWGMeasurementSet::setCombinationOperation(QString* combinationOperation) {
    this->combinationOperation = combinationOperation;
}

QString*
SWGMeasurementSet::getUnit() {
    return unit;
}
void
SWGMeasurementSet::setUnit(QString* unit) {
    this->unit = unit;
}



} /* namespace Swagger */

