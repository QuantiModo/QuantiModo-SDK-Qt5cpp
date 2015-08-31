
#include "SWGPostCorrelation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPostCorrelation::SWGPostCorrelation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPostCorrelation::SWGPostCorrelation() {
    init();
}

SWGPostCorrelation::~SWGPostCorrelation() {
    this->cleanup();
}

void
SWGPostCorrelation::init() {
    cause = new QString("");
    effect = new QString("");
    correlation = 0.0;
    vote = NULL;
    
}

void
SWGPostCorrelation::cleanup() {
    if(cause != NULL) {
        delete cause;
    }
    if(effect != NULL) {
        delete effect;
    }
    if(correlation != NULL) {
        delete correlation;
    }
    
    
}

SWGPostCorrelation*
SWGPostCorrelation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPostCorrelation::fromJsonObject(QJsonObject &pJson) {
    setValue(&cause, pJson["cause"], "QString", "QString");
    setValue(&effect, pJson["effect"], "QString", "QString");
    setValue(&correlation, pJson["correlation"], "double", "double");
    setValue(&vote, pJson["vote"], "qint32", "");
    
}

QString
SWGPostCorrelation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPostCorrelation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("cause"), cause, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("effect"), effect, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("correlation"), correlation, obj, QString("double"));
    
    
    
    obj->insert("vote", QJsonValue(vote));
    

    return obj;
}

QString*
SWGPostCorrelation::getCause() {
    return cause;
}
void
SWGPostCorrelation::setCause(QString* cause) {
    this->cause = cause;
}

QString*
SWGPostCorrelation::getEffect() {
    return effect;
}
void
SWGPostCorrelation::setEffect(QString* effect) {
    this->effect = effect;
}

double*
SWGPostCorrelation::getCorrelation() {
    return correlation;
}
void
SWGPostCorrelation::setCorrelation(double* correlation) {
    this->correlation = correlation;
}

qint32
SWGPostCorrelation::getVote() {
    return vote;
}
void
SWGPostCorrelation::setVote(qint32 vote) {
    this->vote = vote;
}



} /* namespace Swagger */

