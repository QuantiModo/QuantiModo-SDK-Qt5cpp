
#include "SWGVariable.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariable::SWGVariable(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariable::SWGVariable() {
    init();
}

SWGVariable::~SWGVariable() {
    this->cleanup();
}

void
SWGVariable::init() {
    name = new QString("");
    originalName = new QString("");
    category = new QString("");
    unit = new QString("");
    sources = new QString("");
    minimumValue = 0.0;
    maximumValue = 0.0;
    combinationOperation = new QString("");
    fillingValue = 0.0;
    
}

void
SWGVariable::cleanup() {
    if(name != NULL) {
        delete name;
    }
    if(originalName != NULL) {
        delete originalName;
    }
    if(category != NULL) {
        delete category;
    }
    if(unit != NULL) {
        delete unit;
    }
    if(sources != NULL) {
        delete sources;
    }
    if(minimumValue != NULL) {
        delete minimumValue;
    }
    if(maximumValue != NULL) {
        delete maximumValue;
    }
    if(combinationOperation != NULL) {
        delete combinationOperation;
    }
    if(fillingValue != NULL) {
        delete fillingValue;
    }
    
}

SWGVariable*
SWGVariable::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariable::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&originalName, pJson["originalName"], "QString", "QString");
    setValue(&category, pJson["category"], "QString", "QString");
    setValue(&unit, pJson["unit"], "QString", "QString");
    setValue(&sources, pJson["sources"], "QString", "QString");
    setValue(&minimumValue, pJson["minimumValue"], "double", "double");
    setValue(&maximumValue, pJson["maximumValue"], "double", "double");
    setValue(&combinationOperation, pJson["combinationOperation"], "QString", "QString");
    setValue(&fillingValue, pJson["fillingValue"], "double", "double");
    
}

QString
SWGVariable::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariable::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("originalName"), originalName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("category"), category, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("unit"), unit, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("sources"), sources, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("minimumValue"), minimumValue, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("maximumValue"), maximumValue, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("combinationOperation"), combinationOperation, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("fillingValue"), fillingValue, obj, QString("double"));
    
    
    
    

    return obj;
}

QString*
SWGVariable::getName() {
    return name;
}
void
SWGVariable::setName(QString* name) {
    this->name = name;
}

QString*
SWGVariable::getOriginalName() {
    return originalName;
}
void
SWGVariable::setOriginalName(QString* originalName) {
    this->originalName = originalName;
}

QString*
SWGVariable::getCategory() {
    return category;
}
void
SWGVariable::setCategory(QString* category) {
    this->category = category;
}

QString*
SWGVariable::getUnit() {
    return unit;
}
void
SWGVariable::setUnit(QString* unit) {
    this->unit = unit;
}

QString*
SWGVariable::getSources() {
    return sources;
}
void
SWGVariable::setSources(QString* sources) {
    this->sources = sources;
}

double*
SWGVariable::getMinimumValue() {
    return minimumValue;
}
void
SWGVariable::setMinimumValue(double* minimumValue) {
    this->minimumValue = minimumValue;
}

double*
SWGVariable::getMaximumValue() {
    return maximumValue;
}
void
SWGVariable::setMaximumValue(double* maximumValue) {
    this->maximumValue = maximumValue;
}

QString*
SWGVariable::getCombinationOperation() {
    return combinationOperation;
}
void
SWGVariable::setCombinationOperation(QString* combinationOperation) {
    this->combinationOperation = combinationOperation;
}

double*
SWGVariable::getFillingValue() {
    return fillingValue;
}
void
SWGVariable::setFillingValue(double* fillingValue) {
    this->fillingValue = fillingValue;
}



} /* namespace Swagger */

