
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
    originalCause = new QString("");
    effect = new QString("");
    originalEffect = new QString("");
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
    valuePredictingHighOutcome = 0.0;
    valuePredictingLowOutcome = 0.0;
    optimalPearsonProduct = 0.0;
    averageVote = 0.0;
    userVote = 0.0;
    causeUnit = new QString("");
    causeUnitId = NULL;
    
}

void
SWGCorrelation::cleanup() {
    if(correlationCoefficient != NULL) {
        delete correlationCoefficient;
    }
    if(cause != NULL) {
        delete cause;
    }
    if(originalCause != NULL) {
        delete originalCause;
    }
    if(effect != NULL) {
        delete effect;
    }
    if(originalEffect != NULL) {
        delete originalEffect;
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
    if(valuePredictingHighOutcome != NULL) {
        delete valuePredictingHighOutcome;
    }
    if(valuePredictingLowOutcome != NULL) {
        delete valuePredictingLowOutcome;
    }
    if(optimalPearsonProduct != NULL) {
        delete optimalPearsonProduct;
    }
    if(averageVote != NULL) {
        delete averageVote;
    }
    if(userVote != NULL) {
        delete userVote;
    }
    if(causeUnit != NULL) {
        delete causeUnit;
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
    setValue(&originalCause, pJson["originalCause"], "QString", "QString");
    setValue(&effect, pJson["effect"], "QString", "QString");
    setValue(&originalEffect, pJson["originalEffect"], "QString", "QString");
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
    setValue(&valuePredictingHighOutcome, pJson["valuePredictingHighOutcome"], "SWGNumber", "SWGNumber");
    setValue(&valuePredictingLowOutcome, pJson["valuePredictingLowOutcome"], "SWGNumber", "SWGNumber");
    setValue(&optimalPearsonProduct, pJson["optimalPearsonProduct"], "SWGNumber", "SWGNumber");
    setValue(&averageVote, pJson["averageVote"], "SWGNumber", "SWGNumber");
    setValue(&userVote, pJson["userVote"], "SWGNumber", "SWGNumber");
    setValue(&causeUnit, pJson["causeUnit"], "QString", "QString");
    setValue(&causeUnitId, pJson["causeUnitId"], "qint32", "");
    
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
    
    
    
    
    
    toJsonValue(QString("originalCause"), originalCause, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("effect"), effect, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("originalEffect"), originalEffect, obj, QString("QString"));
    
    
    
    
    
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
    
    
    
    
    
    toJsonValue(QString("valuePredictingHighOutcome"), valuePredictingHighOutcome, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("valuePredictingLowOutcome"), valuePredictingLowOutcome, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("optimalPearsonProduct"), optimalPearsonProduct, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("averageVote"), averageVote, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("userVote"), userVote, obj, QString("SWGNumber"));
    
    
    
    
    
    toJsonValue(QString("causeUnit"), causeUnit, obj, QString("QString"));
    
    
    
    obj->insert("causeUnitId", QJsonValue(causeUnitId));
    

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
SWGCorrelation::getOriginalCause() {
    return originalCause;
}
void
SWGCorrelation::setOriginalCause(QString* originalCause) {
    this->originalCause = originalCause;
}

QString*
SWGCorrelation::getEffect() {
    return effect;
}
void
SWGCorrelation::setEffect(QString* effect) {
    this->effect = effect;
}

QString*
SWGCorrelation::getOriginalEffect() {
    return originalEffect;
}
void
SWGCorrelation::setOriginalEffect(QString* originalEffect) {
    this->originalEffect = originalEffect;
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

SWGNumber*
SWGCorrelation::getValuePredictingHighOutcome() {
    return valuePredictingHighOutcome;
}
void
SWGCorrelation::setValuePredictingHighOutcome(SWGNumber* valuePredictingHighOutcome) {
    this->valuePredictingHighOutcome = valuePredictingHighOutcome;
}

SWGNumber*
SWGCorrelation::getValuePredictingLowOutcome() {
    return valuePredictingLowOutcome;
}
void
SWGCorrelation::setValuePredictingLowOutcome(SWGNumber* valuePredictingLowOutcome) {
    this->valuePredictingLowOutcome = valuePredictingLowOutcome;
}

SWGNumber*
SWGCorrelation::getOptimalPearsonProduct() {
    return optimalPearsonProduct;
}
void
SWGCorrelation::setOptimalPearsonProduct(SWGNumber* optimalPearsonProduct) {
    this->optimalPearsonProduct = optimalPearsonProduct;
}

SWGNumber*
SWGCorrelation::getAverageVote() {
    return averageVote;
}
void
SWGCorrelation::setAverageVote(SWGNumber* averageVote) {
    this->averageVote = averageVote;
}

SWGNumber*
SWGCorrelation::getUserVote() {
    return userVote;
}
void
SWGCorrelation::setUserVote(SWGNumber* userVote) {
    this->userVote = userVote;
}

QString*
SWGCorrelation::getCauseUnit() {
    return causeUnit;
}
void
SWGCorrelation::setCauseUnit(QString* causeUnit) {
    this->causeUnit = causeUnit;
}

qint32
SWGCorrelation::getCauseUnitId() {
    return causeUnitId;
}
void
SWGCorrelation::setCauseUnitId(qint32 causeUnitId) {
    this->causeUnitId = causeUnitId;
}



} /* namespace Swagger */

