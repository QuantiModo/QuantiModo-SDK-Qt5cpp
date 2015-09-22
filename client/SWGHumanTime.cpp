
#include "SWGHumanTime.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGHumanTime::SWGHumanTime(QString* json) {
    init();
    this->fromJson(*json);
}

SWGHumanTime::SWGHumanTime() {
    init();
}

SWGHumanTime::~SWGHumanTime() {
    this->cleanup();
}

void
SWGHumanTime::init() {
    date = new QString("");
    timezone_type = NULL;
    timezone = new QString("");
    
}

void
SWGHumanTime::cleanup() {
    if(date != NULL) {
        delete date;
    }
    
    if(timezone != NULL) {
        delete timezone;
    }
    
}

SWGHumanTime*
SWGHumanTime::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGHumanTime::fromJsonObject(QJsonObject &pJson) {
    setValue(&date, pJson["date"], "QString", "QString");
    setValue(&timezone_type, pJson["timezone_type"], "qint32", "");
    setValue(&timezone, pJson["timezone"], "QString", "QString");
    
}

QString
SWGHumanTime::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGHumanTime::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("date"), date, obj, QString("QString"));
    
    
    
    obj->insert("timezone_type", QJsonValue(timezone_type));
    
    
    toJsonValue(QString("timezone"), timezone, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGHumanTime::getDate() {
    return date;
}
void
SWGHumanTime::setDate(QString* date) {
    this->date = date;
}

qint32
SWGHumanTime::getTimezoneType() {
    return timezone_type;
}
void
SWGHumanTime::setTimezoneType(qint32 timezone_type) {
    this->timezone_type = timezone_type;
}

QString*
SWGHumanTime::getTimezone() {
    return timezone;
}
void
SWGHumanTime::setTimezone(QString* timezone) {
    this->timezone = timezone;
}



} /* namespace Swagger */

