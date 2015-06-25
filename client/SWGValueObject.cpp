
#include "SWGValueObject.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGValueObject::SWGValueObject(QString* json) {
    init();
    this->fromJson(*json);
}

SWGValueObject::SWGValueObject() {
    init();
}

SWGValueObject::~SWGValueObject() {
    this->cleanup();
}

void
SWGValueObject::init() {
    timestamp = 0L;
    value = 0.0;
    note = new QString("");
    
}

void
SWGValueObject::cleanup() {
    
    if(value != NULL) {
        delete value;
    }
    if(note != NULL) {
        delete note;
    }
    
}

SWGValueObject*
SWGValueObject::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGValueObject::fromJsonObject(QJsonObject &pJson) {
    setValue(&timestamp, pJson["timestamp"], "qint64", "");
    setValue(&value, pJson["value"], "double", "double");
    setValue(&note, pJson["note"], "QString", "QString");
    
}

QString
SWGValueObject::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGValueObject::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("timestamp", QJsonValue(timestamp));
    
    
    toJsonValue(QString("value"), value, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("note"), note, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint64
SWGValueObject::getTimestamp() {
    return timestamp;
}
void
SWGValueObject::setTimestamp(qint64 timestamp) {
    this->timestamp = timestamp;
}

double*
SWGValueObject::getValue() {
    return value;
}
void
SWGValueObject::setValue(double* value) {
    this->value = value;
}

QString*
SWGValueObject::getNote() {
    return note;
}
void
SWGValueObject::setNote(QString* note) {
    this->note = note;
}



} /* namespace Swagger */

