
#include "SWGUnit.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUnit::SWGUnit(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUnit::SWGUnit() {
    init();
}

SWGUnit::~SWGUnit() {
    this->cleanup();
}

void
SWGUnit::init() {
    name = new QString("");
    abbreviatedName = new QString("");
    category = new QString("");
    minimum = 0.0;
    maximum = 0.0;
    conversionSteps = new QList<SWGConversionStep*>();
    
}

void
SWGUnit::cleanup() {
    if(name != NULL) {
        delete name;
    }
    if(abbreviatedName != NULL) {
        delete abbreviatedName;
    }
    if(category != NULL) {
        delete category;
    }
    if(minimum != NULL) {
        delete minimum;
    }
    if(maximum != NULL) {
        delete maximum;
    }
    if(conversionSteps != NULL) {
        QList<SWGConversionStep*>* arr = conversionSteps;
        foreach(SWGConversionStep* o, *arr) {
            delete o;
        }
        delete conversionSteps;
    }
    
}

SWGUnit*
SWGUnit::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUnit::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&abbreviatedName, pJson["abbreviatedName"], "QString", "QString");
    setValue(&category, pJson["category"], "QString", "QString");
    setValue(&minimum, pJson["minimum"], "double", "double");
    setValue(&maximum, pJson["maximum"], "double", "double");
    setValue(&conversionSteps, pJson["conversionSteps"], "QList", "SWGConversionStep");
    
}

QString
SWGUnit::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUnit::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("abbreviatedName"), abbreviatedName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("category"), category, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("minimum"), minimum, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("maximum"), maximum, obj, QString("double"));
    
    
    
    
    
    QList<SWGConversionStep*>* conversionStepsList = conversionSteps;
    QJsonArray conversionStepsJsonArray;
    toJsonArray((QList<void*>*)conversionSteps, &conversionStepsJsonArray, "conversionSteps", "SWGConversionStep");

    obj->insert("conversionSteps", conversionStepsJsonArray);
    
    
    

    return obj;
}

QString*
SWGUnit::getName() {
    return name;
}
void
SWGUnit::setName(QString* name) {
    this->name = name;
}

QString*
SWGUnit::getAbbreviatedName() {
    return abbreviatedName;
}
void
SWGUnit::setAbbreviatedName(QString* abbreviatedName) {
    this->abbreviatedName = abbreviatedName;
}

QString*
SWGUnit::getCategory() {
    return category;
}
void
SWGUnit::setCategory(QString* category) {
    this->category = category;
}

double*
SWGUnit::getMinimum() {
    return minimum;
}
void
SWGUnit::setMinimum(double* minimum) {
    this->minimum = minimum;
}

double*
SWGUnit::getMaximum() {
    return maximum;
}
void
SWGUnit::setMaximum(double* maximum) {
    this->maximum = maximum;
}

QList<SWGConversionStep*>*
SWGUnit::getConversionSteps() {
    return conversionSteps;
}
void
SWGUnit::setConversionSteps(QList<SWGConversionStep*>* conversionSteps) {
    this->conversionSteps = conversionSteps;
}



} /* namespace Swagger */

