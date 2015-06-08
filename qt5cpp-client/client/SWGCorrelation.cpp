
#include "SWGCorrelation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCorrelation::SWGCorrelation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCorrelation::SWGCorrelation() {
    init();
}

SWGCorrelation::~SWGCorrelation() {
    this->cleanup();
}

void
SWGCorrelation::init() {
    correlationCoefficient = 0.0;
    cause = new QString("");
    effect = new QString("");
    onsetDelay = 0.0;
    durationOfAction = 0.0;
    numberOfPairs = 0.0;
    effectSize = new QString("");
    statisticalSignificance = new QString("");
    timestamp = 0.0;
    reverseCorrelation = 0.0;
    causalityFactor = 0.0;
    causeCategory = new QString("");
    effectCategory = new QString("");
    
}

void
SWGCorrelation::cleanup() {
    if(correlationCoefficient != NULL) {
        delete correlationCoefficient;
    }
    if(cause != NULL) {
        delete cause;
    }
    if(effect != NULL) {
        delete effect;
    }
    if(onsetDelay != NULL) {
        delete onsetDelay;
    }
    if(durationOfAction != NULL) {
        delete durationOfAction;
    }
    if(numberOfPairs != NULL) {
        delete numberOfPairs;
    }
    if(effectSize != NULL) {
        delete effectSize;
    }
    if(statisticalSignificance != NULL) {
        delete statisticalSignificance;
    }
    if(timestamp != NULL) {
        delete timestamp;
    }
    if(reverseCorrelation != NULL) {
        delete reverseCorrelation;
    }
    if(causalityFactor != NULL) {
        delete causalityFactor;
    }
    if(causeCategory != NULL) {
        delete causeCategory;
    }
    if(effectCategory != NULL) {
        delete effectCategory;
    }
    
}

SWGCorrelation*
SWGCorrelation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCorrelation::fromJsonObject(QJsonObject &pJson) {
    setValue(&correlationCoefficient, pJson["correlationCoefficient"], "SWGNumber", "SWGNumber");
    setValue(&cause, pJson["cause"], "QString", "QString");
    setValue(&effect, pJson["effect"], "QString", "QString");
    setValue(&onsetDelay, pJson["onsetDelay"], "double", "double");
    setValue(&durationOfAction, pJson["durationOfAction"], "SWGNumber", "SWGNumber");
    setValue(&numberOfPairs, pJson["numberOfPairs"], "SWGNumber", "SWGNumber");
    setValue(&effectSize, pJson["effectSize"], "QString", "QString");
    setValue(&statisticalSignificance, pJson["statisticalSignificance"], "QString", "QString");
    setValue(&timestamp, pJson["timestamp"], "SWGNumber", "SWGNumber");
    setValue(&reverseCorrelation, pJson["reverseCorrelation"], "SWGNumber", "SWGNumber");
    setValue(&causalityFactor, pJson["causalityFactor"], "SWGNumber", "SWGNumber");
    setValue(&causeCategory, pJson["causeCategory"], "QString", "QString");
    setValue(&effectCategory, pJson["effectCategory"], "QString", "QString");
    
}

QString
SWGCorrelation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCorrelation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("correlationCoefficient"), correlationCoefficient, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("cause"), cause, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("effect"), effect, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("onsetDelay"), onsetDelay, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("durationOfAction"), durationOfAction, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("numberOfPairs"), numberOfPairs, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("effectSize"), effectSize, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("statisticalSignificance"), statisticalSignificance, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("timestamp"), timestamp, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("reverseCorrelation"), reverseCorrelation, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("causalityFactor"), causalityFactor, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("causeCategory"), causeCategory, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("effectCategory"), effectCategory, obj, QString("QString"));
    
    
    
    

    return obj;
}

SWGNumber*
SWGCorrelation::getCorrelationCoefficient() {
    return correlationCoefficient;
}
void
SWGCorrelation::setCorrelationCoefficient(SWGNumber* correlationCoefficient) {
    this->correlationCoefficient = correlationCoefficient;
}

QString*
SWGCorrelation::getCause() {
    return cause;
}
void
SWGCorrelation::setCause(QString* cause) {
    this->cause = cause;
}

QString*
SWGCorrelation::getEffect() {
    return effect;
}
void
SWGCorrelation::setEffect(QString* effect) {
    this->effect = effect;
}

double*
SWGCorrelation::getOnsetDelay() {
    return onsetDelay;
}
void
SWGCorrelation::setOnsetDelay(double* onsetDelay) {
    this->onsetDelay = onsetDelay;
}

SWGNumber*
SWGCorrelation::getDurationOfAction() {
    return durationOfAction;
}
void
SWGCorrelation::setDurationOfAction(SWGNumber* durationOfAction) {
    this->durationOfAction = durationOfAction;
}

SWGNumber*
SWGCorrelation::getNumberOfPairs() {
    return numberOfPairs;
}
void
SWGCorrelation::setNumberOfPairs(SWGNumber* numberOfPairs) {
    this->numberOfPairs = numberOfPairs;
}

QString*
SWGCorrelation::getEffectSize() {
    return effectSize;
}
void
SWGCorrelation::setEffectSize(QString* effectSize) {
    this->effectSize = effectSize;
}

QString*
SWGCorrelation::getStatisticalSignificance() {
    return statisticalSignificance;
}
void
SWGCorrelation::setStatisticalSignificance(QString* statisticalSignificance) {
    this->statisticalSignificance = statisticalSignificance;
}

SWGNumber*
SWGCorrelation::getTimestamp() {
    return timestamp;
}
void
SWGCorrelation::setTimestamp(SWGNumber* timestamp) {
    this->timestamp = timestamp;
}

SWGNumber*
SWGCorrelation::getReverseCorrelation() {
    return reverseCorrelation;
}
void
SWGCorrelation::setReverseCorrelation(SWGNumber* reverseCorrelation) {
    this->reverseCorrelation = reverseCorrelation;
}

SWGNumber*
SWGCorrelation::getCausalityFactor() {
    return causalityFactor;
}
void
SWGCorrelation::setCausalityFactor(SWGNumber* causalityFactor) {
    this->causalityFactor = causalityFactor;
}

QString*
SWGCorrelation::getCauseCategory() {
    return causeCategory;
}
void
SWGCorrelation::setCauseCategory(QString* causeCategory) {
    this->causeCategory = causeCategory;
}

QString*
SWGCorrelation::getEffectCategory() {
    return effectCategory;
}
void
SWGCorrelation::setEffectCategory(QString* effectCategory) {
    this->effectCategory = effectCategory;
}



} /* namespace Swagger */

