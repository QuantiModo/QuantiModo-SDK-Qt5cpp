
#include "SWGUnitConversion.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUnitConversion::SWGUnitConversion(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUnitConversion::SWGUnitConversion() {
    init();
}

SWGUnitConversion::~SWGUnitConversion() {
    this->cleanup();
}

void
SWGUnitConversion::init() {
    unit_id = 0;
    step_number = false;
    operation = false;
    value = 0.0f;
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGUnitConversion::cleanup() {
    
    
    
    
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGUnitConversion*
SWGUnitConversion::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUnitConversion::fromJsonObject(QJsonObject &pJson) {
    setValue(&unit_id, pJson["unit_id"], "qint32", "");
    setValue(&step_number, pJson["step_number"], "bool", "");
    setValue(&operation, pJson["operation"], "bool", "");
    setValue(&value, pJson["value"], "float", "");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGUnitConversion::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUnitConversion::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("unit_id", QJsonValue(unit_id));
    obj->insert("step_number", QJsonValue(step_number));
    obj->insert("operation", QJsonValue(operation));
    obj->insert("value", QJsonValue(value));
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGUnitConversion::getUnitId() {
    return unit_id;
}
void
SWGUnitConversion::setUnitId(qint32 unit_id) {
    this->unit_id = unit_id;
}

bool
SWGUnitConversion::getStepNumber() {
    return step_number;
}
void
SWGUnitConversion::setStepNumber(bool step_number) {
    this->step_number = step_number;
}

bool
SWGUnitConversion::getOperation() {
    return operation;
}
void
SWGUnitConversion::setOperation(bool operation) {
    this->operation = operation;
}

float
SWGUnitConversion::getValue() {
    return value;
}
void
SWGUnitConversion::setValue(float value) {
    this->value = value;
}

QDateTime*
SWGUnitConversion::getCreatedAt() {
    return created_at;
}
void
SWGUnitConversion::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGUnitConversion::getUpdatedAt() {
    return updated_at;
}
void
SWGUnitConversion::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

