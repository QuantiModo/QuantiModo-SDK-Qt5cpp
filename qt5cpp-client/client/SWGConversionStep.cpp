
#include "SWGConversionStep.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGConversionStep::SWGConversionStep(QString* json) {
    init();
    this->fromJson(*json);
}

SWGConversionStep::SWGConversionStep() {
    init();
}

SWGConversionStep::~SWGConversionStep() {
    this->cleanup();
}

void
SWGConversionStep::init() {
    operation = new QString("");
    value = 0.0;
    
}

void
SWGConversionStep::cleanup() {
    if(operation != NULL) {
        delete operation;
    }
    if(value != NULL) {
        delete value;
    }
    
}

SWGConversionStep*
SWGConversionStep::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGConversionStep::fromJsonObject(QJsonObject &pJson) {
    setValue(&operation, pJson["operation"], "QString", "QString");
    setValue(&value, pJson["value"], "double", "double");
    
}

QString
SWGConversionStep::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGConversionStep::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("operation"), operation, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("value"), value, obj, QString("double"));
    
    
    
    

    return obj;
}

QString*
SWGConversionStep::getOperation() {
    return operation;
}
void
SWGConversionStep::setOperation(QString* operation) {
    this->operation = operation;
}

double*
SWGConversionStep::getValue() {
    return value;
}
void
SWGConversionStep::setValue(double* value) {
    this->value = value;
}



} /* namespace Swagger */

