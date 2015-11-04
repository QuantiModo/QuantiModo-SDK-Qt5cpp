
#include "SWGMeasurementPost.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGMeasurementPost::SWGMeasurementPost(QString* json) {
    init();
    this->fromJson(*json);
}

SWGMeasurementPost::SWGMeasurementPost() {
    init();
}

SWGMeasurementPost::~SWGMeasurementPost() {
    this->cleanup();
}

void
SWGMeasurementPost::init() {
    variable_id = 0;
    source_id = 0;
    unit_id = 0;
    measurements = new QList<SWGMeasurementValue*>();
    
}

void
SWGMeasurementPost::cleanup() {
    
    
    
    if(measurements != NULL) {
        QList<SWGMeasurementValue*>* arr = measurements;
        foreach(SWGMeasurementValue* o, *arr) {
            delete o;
        }
        delete measurements;
    }
    
}

SWGMeasurementPost*
SWGMeasurementPost::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMeasurementPost::fromJsonObject(QJsonObject &pJson) {
    setValue(&variable_id, pJson["variable_id"], "qint32", "");
    setValue(&source_id, pJson["source_id"], "qint32", "");
    setValue(&unit_id, pJson["unit_id"], "qint32", "");
    setValue(&measurements, pJson["measurements"], "QList", "SWGMeasurementValue");
    
}

QString
SWGMeasurementPost::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGMeasurementPost::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("variable_id", QJsonValue(variable_id));
    obj->insert("source_id", QJsonValue(source_id));
    obj->insert("unit_id", QJsonValue(unit_id));
    
    
    QList<SWGMeasurementValue*>* measurementsList = measurements;
    QJsonArray measurementsJsonArray;
    toJsonArray((QList<void*>*)measurements, &measurementsJsonArray, "measurements", "SWGMeasurementValue");

    obj->insert("measurements", measurementsJsonArray);
    
    
    

    return obj;
}

qint32
SWGMeasurementPost::getVariableId() {
    return variable_id;
}
void
SWGMeasurementPost::setVariableId(qint32 variable_id) {
    this->variable_id = variable_id;
}

qint32
SWGMeasurementPost::getSourceId() {
    return source_id;
}
void
SWGMeasurementPost::setSourceId(qint32 source_id) {
    this->source_id = source_id;
}

qint32
SWGMeasurementPost::getUnitId() {
    return unit_id;
}
void
SWGMeasurementPost::setUnitId(qint32 unit_id) {
    this->unit_id = unit_id;
}

QList<SWGMeasurementValue*>*
SWGMeasurementPost::getMeasurements() {
    return measurements;
}
void
SWGMeasurementPost::setMeasurements(QList<SWGMeasurementValue*>* measurements) {
    this->measurements = measurements;
}



} /* namespace Swagger */

