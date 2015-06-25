
#include "SWGVariableUserSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariableUserSettings::SWGVariableUserSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariableUserSettings::SWGVariableUserSettings() {
    init();
}

SWGVariableUserSettings::~SWGVariableUserSettings() {
    this->cleanup();
}

void
SWGVariableUserSettings::init() {
    user = 0;
    variable = new QString("");
    durationOfAction = 0;
    fillingValue = 0;
    joinWith = new QString("");
    maximumValue = 0.0f;
    minimumValue = 0.0f;
    name = new QString("");
    onsetDelay = 0;
    unit = new QString("");
    
}

void
SWGVariableUserSettings::cleanup() {
    
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

SWGVariableUserSettings*
SWGVariableUserSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariableUserSettings::fromJsonObject(QJsonObject &pJson) {
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
SWGVariableUserSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariableUserSettings::asJsonObject() {
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
SWGVariableUserSettings::getUser() {
    return user;
}
void
SWGVariableUserSettings::setUser(qint32 user) {
    this->user = user;
}

QString*
SWGVariableUserSettings::getVariable() {
    return variable;
}
void
SWGVariableUserSettings::setVariable(QString* variable) {
    this->variable = variable;
}

qint32
SWGVariableUserSettings::getDurationOfAction() {
    return durationOfAction;
}
void
SWGVariableUserSettings::setDurationOfAction(qint32 durationOfAction) {
    this->durationOfAction = durationOfAction;
}

qint32
SWGVariableUserSettings::getFillingValue() {
    return fillingValue;
}
void
SWGVariableUserSettings::setFillingValue(qint32 fillingValue) {
    this->fillingValue = fillingValue;
}

QString*
SWGVariableUserSettings::getJoinWith() {
    return joinWith;
}
void
SWGVariableUserSettings::setJoinWith(QString* joinWith) {
    this->joinWith = joinWith;
}

float*
SWGVariableUserSettings::getMaximumValue() {
    return maximumValue;
}
void
SWGVariableUserSettings::setMaximumValue(float* maximumValue) {
    this->maximumValue = maximumValue;
}

float*
SWGVariableUserSettings::getMinimumValue() {
    return minimumValue;
}
void
SWGVariableUserSettings::setMinimumValue(float* minimumValue) {
    this->minimumValue = minimumValue;
}

QString*
SWGVariableUserSettings::getName() {
    return name;
}
void
SWGVariableUserSettings::setName(QString* name) {
    this->name = name;
}

qint32
SWGVariableUserSettings::getOnsetDelay() {
    return onsetDelay;
}
void
SWGVariableUserSettings::setOnsetDelay(qint32 onsetDelay) {
    this->onsetDelay = onsetDelay;
}

QString*
SWGVariableUserSettings::getUnit() {
    return unit;
}
void
SWGVariableUserSettings::setUnit(QString* unit) {
    this->unit = unit;
}



} /* namespace Swagger */

