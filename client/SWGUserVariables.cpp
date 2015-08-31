
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
    maximumValue = 0.0f;
    minimumValue = 0.0f;
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
    if(maximumValue != NULL) {
        delete maximumValue;
    }
    if(minimumValue != NULL) {
        delete minimumValue;
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
    setValue(&maximumValue, pJson["maximumValue"], "float", "float");
    setValue(&minimumValue, pJson["minimumValue"], "float", "float");
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
    
    
    
    
    
    toJsonValue(QString("maximumValue"), maximumValue, obj, QString("float"));
    
    
    
    
    
    toJsonValue(QString("minimumValue"), minimumValue, obj, QString("float"));
    
    
    
    
    
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
SWGUserVariables::getMaximumValue() {
    return maximumValue;
}
void
SWGUserVariables::setMaximumValue(float* maximumValue) {
    this->maximumValue = maximumValue;
}

float*
SWGUserVariables::getMinimumValue() {
    return minimumValue;
}
void
SWGUserVariables::setMinimumValue(float* minimumValue) {
    this->minimumValue = minimumValue;
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

