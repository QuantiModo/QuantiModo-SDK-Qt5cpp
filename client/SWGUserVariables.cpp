
#include "SWGUserVariables.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserVariables::SWGUserVariables(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserVariables::SWGUserVariables() {
    init();
}

SWGUserVariables::~SWGUserVariables() {
    this->cleanup();
}

void
SWGUserVariables::init() {
    user = NULL;
    variable = new QString("");
    durationOfAction = NULL;
    fillingValue = NULL;
    joinWith = new QString("");
    maximumAllowedValue = 0.0f;
    minimumAllowedValue = 0.0f;
    name = new QString("");
    onsetDelay = NULL;
    unit = new QString("");
    
}

void
SWGUserVariables::cleanup() {
    
    if(variable != NULL) {
        delete variable;
    }
    
    
    if(joinWith != NULL) {
        delete joinWith;
    }
    if(maximumAllowedValue != NULL) {
        delete maximumAllowedValue;
    }
    if(minimumAllowedValue != NULL) {
        delete minimumAllowedValue;
    }
    if(name != NULL) {
        delete name;
    }
    
    if(unit != NULL) {
        delete unit;
    }
    
}

SWGUserVariables*
SWGUserVariables::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserVariables::fromJsonObject(QJsonObject &pJson) {
    setValue(&user, pJson["user"], "qint32", "");
    setValue(&variable, pJson["variable"], "QString", "QString");
    setValue(&durationOfAction, pJson["durationOfAction"], "qint32", "");
    setValue(&fillingValue, pJson["fillingValue"], "qint32", "");
    setValue(&joinWith, pJson["joinWith"], "QString", "QString");
    setValue(&maximumAllowedValue, pJson["maximumAllowedValue"], "float", "float");
    setValue(&minimumAllowedValue, pJson["minimumAllowedValue"], "float", "float");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&onsetDelay, pJson["onsetDelay"], "qint32", "");
    setValue(&unit, pJson["unit"], "QString", "QString");
    
}

QString
SWGUserVariables::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserVariables::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("user", QJsonValue(user));
    
    
    toJsonValue(QString("variable"), variable, obj, QString("QString"));
    
    
    
    obj->insert("durationOfAction", QJsonValue(durationOfAction));
    obj->insert("fillingValue", QJsonValue(fillingValue));
    
    
    toJsonValue(QString("joinWith"), joinWith, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("maximumAllowedValue"), maximumAllowedValue, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("minimumAllowedValue"), minimumAllowedValue, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    obj->insert("onsetDelay", QJsonValue(onsetDelay));
    
    
    toJsonValue(QString("unit"), unit, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint32
SWGUserVariables::getUser() {
    return user;
}
void
SWGUserVariables::setUser(qint32 user) {
    this->user = user;
}

QString*
SWGUserVariables::getVariable() {
    return variable;
}
void
SWGUserVariables::setVariable(QString* variable) {
    this->variable = variable;
}

qint32
SWGUserVariables::getDurationOfAction() {
    return durationOfAction;
}
void
SWGUserVariables::setDurationOfAction(qint32 durationOfAction) {
    this->durationOfAction = durationOfAction;
}

qint32
SWGUserVariables::getFillingValue() {
    return fillingValue;
}
void
SWGUserVariables::setFillingValue(qint32 fillingValue) {
    this->fillingValue = fillingValue;
}

QString*
SWGUserVariables::getJoinWith() {
    return joinWith;
}
void
SWGUserVariables::setJoinWith(QString* joinWith) {
    this->joinWith = joinWith;
}

float*
SWGUserVariables::getMaximumAllowedValue() {
    return maximumAllowedValue;
}
void
SWGUserVariables::setMaximumAllowedValue(float* maximumAllowedValue) {
    this->maximumAllowedValue = maximumAllowedValue;
}

float*
SWGUserVariables::getMinimumAllowedValue() {
    return minimumAllowedValue;
}
void
SWGUserVariables::setMinimumAllowedValue(float* minimumAllowedValue) {
    this->minimumAllowedValue = minimumAllowedValue;
}

QString*
SWGUserVariables::getName() {
    return name;
}
void
SWGUserVariables::setName(QString* name) {
    this->name = name;
}

qint32
SWGUserVariables::getOnsetDelay() {
    return onsetDelay;
}
void
SWGUserVariables::setOnsetDelay(qint32 onsetDelay) {
    this->onsetDelay = onsetDelay;
}

QString*
SWGUserVariables::getUnit() {
    return unit;
}
void
SWGUserVariables::setUnit(QString* unit) {
    this->unit = unit;
}



} /* namespace Swagger */

