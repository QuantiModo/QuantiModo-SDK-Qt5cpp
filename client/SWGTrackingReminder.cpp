
#include "SWGTrackingReminder.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGTrackingReminder::SWGTrackingReminder(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTrackingReminder::SWGTrackingReminder() {
    init();
}

SWGTrackingReminder::~SWGTrackingReminder() {
    this->cleanup();
}

void
SWGTrackingReminder::init() {
    id = 0;
    client_id = new QString("");
    user_id = 0;
    variable_id = 0;
    default_value = 0.0f;
    reminder_start_time = new QString("");
    reminder_end_time = new QString("");
    reminder_sound = new QString("");
    reminder_frequency = 0;
    pop_up = false;
    sms = false;
    email = false;
    notification_bar = false;
    last_reminded = NULL;
    last_tracked = NULL;
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGTrackingReminder::cleanup() {
    
    if(client_id != NULL) {
        delete client_id;
    }
    
    
    
    if(reminder_start_time != NULL) {
        delete reminder_start_time;
    }
    if(reminder_end_time != NULL) {
        delete reminder_end_time;
    }
    if(reminder_sound != NULL) {
        delete reminder_sound;
    }
    
    
    
    
    
    if(last_reminded != NULL) {
        delete last_reminded;
    }
    if(last_tracked != NULL) {
        delete last_tracked;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    
}

SWGTrackingReminder*
SWGTrackingReminder::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTrackingReminder::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&client_id, pJson["client_id"], "QString", "QString");
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&variable_id, pJson["variable_id"], "qint32", "");
    setValue(&default_value, pJson["default_value"], "float", "");
    setValue(&reminder_start_time, pJson["reminder_start_time"], "QString", "QString");
    setValue(&reminder_end_time, pJson["reminder_end_time"], "QString", "QString");
    setValue(&reminder_sound, pJson["reminder_sound"], "QString", "QString");
    setValue(&reminder_frequency, pJson["reminder_frequency"], "qint32", "");
    setValue(&pop_up, pJson["pop_up"], "bool", "");
    setValue(&sms, pJson["sms"], "bool", "");
    setValue(&email, pJson["email"], "bool", "");
    setValue(&notification_bar, pJson["notification_bar"], "bool", "");
    setValue(&last_reminded, pJson["last_reminded"], "QDateTime", "QDateTime");
    setValue(&last_tracked, pJson["last_tracked"], "QDateTime", "QDateTime");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
}

QString
SWGTrackingReminder::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGTrackingReminder::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("client_id"), client_id, obj, QString("QString"));
    
    
    
    obj->insert("user_id", QJsonValue(user_id));
    obj->insert("variable_id", QJsonValue(variable_id));
    obj->insert("default_value", QJsonValue(default_value));
    
    
    toJsonValue(QString("reminder_start_time"), reminder_start_time, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("reminder_end_time"), reminder_end_time, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("reminder_sound"), reminder_sound, obj, QString("QString"));
    
    
    
    obj->insert("reminder_frequency", QJsonValue(reminder_frequency));
    obj->insert("pop_up", QJsonValue(pop_up));
    obj->insert("sms", QJsonValue(sms));
    obj->insert("email", QJsonValue(email));
    obj->insert("notification_bar", QJsonValue(notification_bar));
    
    
    toJsonValue(QString("last_reminded"), last_reminded, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("last_tracked"), last_tracked, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

    return obj;
}

qint32
SWGTrackingReminder::getId() {
    return id;
}
void
SWGTrackingReminder::setId(qint32 id) {
    this->id = id;
}

QString*
SWGTrackingReminder::getClientId() {
    return client_id;
}
void
SWGTrackingReminder::setClientId(QString* client_id) {
    this->client_id = client_id;
}

qint32
SWGTrackingReminder::getUserId() {
    return user_id;
}
void
SWGTrackingReminder::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

qint32
SWGTrackingReminder::getVariableId() {
    return variable_id;
}
void
SWGTrackingReminder::setVariableId(qint32 variable_id) {
    this->variable_id = variable_id;
}

float
SWGTrackingReminder::getDefaultValue() {
    return default_value;
}
void
SWGTrackingReminder::setDefaultValue(float default_value) {
    this->default_value = default_value;
}

QString*
SWGTrackingReminder::getReminderStartTime() {
    return reminder_start_time;
}
void
SWGTrackingReminder::setReminderStartTime(QString* reminder_start_time) {
    this->reminder_start_time = reminder_start_time;
}

QString*
SWGTrackingReminder::getReminderEndTime() {
    return reminder_end_time;
}
void
SWGTrackingReminder::setReminderEndTime(QString* reminder_end_time) {
    this->reminder_end_time = reminder_end_time;
}

QString*
SWGTrackingReminder::getReminderSound() {
    return reminder_sound;
}
void
SWGTrackingReminder::setReminderSound(QString* reminder_sound) {
    this->reminder_sound = reminder_sound;
}

qint32
SWGTrackingReminder::getReminderFrequency() {
    return reminder_frequency;
}
void
SWGTrackingReminder::setReminderFrequency(qint32 reminder_frequency) {
    this->reminder_frequency = reminder_frequency;
}

bool
SWGTrackingReminder::getPopUp() {
    return pop_up;
}
void
SWGTrackingReminder::setPopUp(bool pop_up) {
    this->pop_up = pop_up;
}

bool
SWGTrackingReminder::getSms() {
    return sms;
}
void
SWGTrackingReminder::setSms(bool sms) {
    this->sms = sms;
}

bool
SWGTrackingReminder::getEmail() {
    return email;
}
void
SWGTrackingReminder::setEmail(bool email) {
    this->email = email;
}

bool
SWGTrackingReminder::getNotificationBar() {
    return notification_bar;
}
void
SWGTrackingReminder::setNotificationBar(bool notification_bar) {
    this->notification_bar = notification_bar;
}

QDateTime*
SWGTrackingReminder::getLastReminded() {
    return last_reminded;
}
void
SWGTrackingReminder::setLastReminded(QDateTime* last_reminded) {
    this->last_reminded = last_reminded;
}

QDateTime*
SWGTrackingReminder::getLastTracked() {
    return last_tracked;
}
void
SWGTrackingReminder::setLastTracked(QDateTime* last_tracked) {
    this->last_tracked = last_tracked;
}

QDateTime*
SWGTrackingReminder::getCreatedAt() {
    return created_at;
}
void
SWGTrackingReminder::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGTrackingReminder::getUpdatedAt() {
    return updated_at;
}
void
SWGTrackingReminder::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

