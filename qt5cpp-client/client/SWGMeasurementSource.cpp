
#include "SWGMeasurementSource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGMeasurementSource::SWGMeasurementSource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGMeasurementSource::SWGMeasurementSource() {
    init();
}

SWGMeasurementSource::~SWGMeasurementSource() {
    this->cleanup();
}

void
SWGMeasurementSource::init() {
    name = new QString("");
    
}

void
SWGMeasurementSource::cleanup() {
    if(name != NULL) {
        delete name;
    }
    
}

SWGMeasurementSource*
SWGMeasurementSource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMeasurementSource::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
    
}

QString
SWGMeasurementSource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGMeasurementSource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGMeasurementSource::getName() {
    return name;
}
void
SWGMeasurementSource::setName(QString* name) {
    this->name = name;
}



} /* namespace Swagger */

