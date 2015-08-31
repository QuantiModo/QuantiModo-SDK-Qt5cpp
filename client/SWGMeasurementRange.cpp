
#include "SWGMeasurementRange.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGMeasurementRange::SWGMeasurementRange(QString* json) {
    init();
    this->fromJson(*json);
}

SWGMeasurementRange::SWGMeasurementRange() {
    init();
}

SWGMeasurementRange::~SWGMeasurementRange() {
    this->cleanup();
}

void
SWGMeasurementRange::init() {
    lowerLimit = NULL;
    upperLimit = NULL;
    
}

void
SWGMeasurementRange::cleanup() {
    
    
    
}

SWGMeasurementRange*
SWGMeasurementRange::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMeasurementRange::fromJsonObject(QJsonObject &pJson) {
    setValue(&lowerLimit, pJson["lowerLimit"], "qint32", "");
    setValue(&upperLimit, pJson["upperLimit"], "qint32", "");
    
}

QString
SWGMeasurementRange::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGMeasurementRange::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("lowerLimit", QJsonValue(lowerLimit));
    obj->insert("upperLimit", QJsonValue(upperLimit));
    

    return obj;
}

qint32
SWGMeasurementRange::getLowerLimit() {
    return lowerLimit;
}
void
SWGMeasurementRange::setLowerLimit(qint32 lowerLimit) {
    this->lowerLimit = lowerLimit;
}

qint32
SWGMeasurementRange::getUpperLimit() {
    return upperLimit;
}
void
SWGMeasurementRange::setUpperLimit(qint32 upperLimit) {
    this->upperLimit = upperLimit;
}



} /* namespace Swagger */

