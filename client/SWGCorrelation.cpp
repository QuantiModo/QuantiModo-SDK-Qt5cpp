
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
    id = 0;
    timestamp = 0;
    user_id = 0;
    correlation = 0.0f;
    cause_id = 0;
    effect_id = 0;
    onset_delay = 0;
    duration_of_action = 0;
    number_of_pairs = 0;
    value_predicting_high_outcome = 0.0f;
    value_predicting_low_outcome = 0.0f;
    optimal_pearson_product = 0.0f;
    vote = 0.0f;
    statistical_significance = 0.0f;
    cause_unit = new QString("");
    cause_unit_id = 0;
    cause_changes = 0;
    effect_changes = 0;
    qm_score = 0.0f;
    error = new QString("");
    created_at = NULL;
    updated_at = NULL;
    reverse_pearson_correlation_coefficient = 0.0f;
    predictive_pearson_correlation_coefficient = 0.0f;
    
}

void
SWGCorrelation::cleanup() {
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    if(cause_unit != NULL) {
        delete cause_unit;
    }
    
    
    
    
    if(error != NULL) {
        delete error;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
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
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&timestamp, pJson["timestamp"], "qint32", "");
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&correlation, pJson["correlation"], "float", "");
    setValue(&cause_id, pJson["cause_id"], "qint32", "");
    setValue(&effect_id, pJson["effect_id"], "qint32", "");
    setValue(&onset_delay, pJson["onset_delay"], "qint32", "");
    setValue(&duration_of_action, pJson["duration_of_action"], "qint32", "");
    setValue(&number_of_pairs, pJson["number_of_pairs"], "qint32", "");
    setValue(&value_predicting_high_outcome, pJson["value_predicting_high_outcome"], "float", "");
    setValue(&value_predicting_low_outcome, pJson["value_predicting_low_outcome"], "float", "");
    setValue(&optimal_pearson_product, pJson["optimal_pearson_product"], "float", "");
    setValue(&vote, pJson["vote"], "float", "");
    setValue(&statistical_significance, pJson["statistical_significance"], "float", "");
    setValue(&cause_unit, pJson["cause_unit"], "QString", "QString");
    setValue(&cause_unit_id, pJson["cause_unit_id"], "qint32", "");
    setValue(&cause_changes, pJson["cause_changes"], "qint32", "");
    setValue(&effect_changes, pJson["effect_changes"], "qint32", "");
    setValue(&qm_score, pJson["qm_score"], "float", "");
    setValue(&error, pJson["error"], "QString", "QString");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    setValue(&reverse_pearson_correlation_coefficient, pJson["reverse_pearson_correlation_coefficient"], "float", "");
    setValue(&predictive_pearson_correlation_coefficient, pJson["predictive_pearson_correlation_coefficient"], "float", "");
    
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
    obj->insert("id", QJsonValue(id));
    obj->insert("timestamp", QJsonValue(timestamp));
    obj->insert("user_id", QJsonValue(user_id));
    obj->insert("correlation", QJsonValue(correlation));
    obj->insert("cause_id", QJsonValue(cause_id));
    obj->insert("effect_id", QJsonValue(effect_id));
    obj->insert("onset_delay", QJsonValue(onset_delay));
    obj->insert("duration_of_action", QJsonValue(duration_of_action));
    obj->insert("number_of_pairs", QJsonValue(number_of_pairs));
    obj->insert("value_predicting_high_outcome", QJsonValue(value_predicting_high_outcome));
    obj->insert("value_predicting_low_outcome", QJsonValue(value_predicting_low_outcome));
    obj->insert("optimal_pearson_product", QJsonValue(optimal_pearson_product));
    obj->insert("vote", QJsonValue(vote));
    obj->insert("statistical_significance", QJsonValue(statistical_significance));
    
    
    toJsonValue(QString("cause_unit"), cause_unit, obj, QString("QString"));
    
    
    
    obj->insert("cause_unit_id", QJsonValue(cause_unit_id));
    obj->insert("cause_changes", QJsonValue(cause_changes));
    obj->insert("effect_changes", QJsonValue(effect_changes));
    obj->insert("qm_score", QJsonValue(qm_score));
    
    
    toJsonValue(QString("error"), error, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    obj->insert("reverse_pearson_correlation_coefficient", QJsonValue(reverse_pearson_correlation_coefficient));
    obj->insert("predictive_pearson_correlation_coefficient", QJsonValue(predictive_pearson_correlation_coefficient));
    

    return obj;
}

qint32
SWGCorrelation::getId() {
    return id;
}
void
SWGCorrelation::setId(qint32 id) {
    this->id = id;
}

qint32
SWGCorrelation::getTimestamp() {
    return timestamp;
}
void
SWGCorrelation::setTimestamp(qint32 timestamp) {
    this->timestamp = timestamp;
}

qint32
SWGCorrelation::getUserId() {
    return user_id;
}
void
SWGCorrelation::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

float
SWGCorrelation::getCorrelation() {
    return correlation;
}
void
SWGCorrelation::setCorrelation(float correlation) {
    this->correlation = correlation;
}

qint32
SWGCorrelation::getCauseId() {
    return cause_id;
}
void
SWGCorrelation::setCauseId(qint32 cause_id) {
    this->cause_id = cause_id;
}

qint32
SWGCorrelation::getEffectId() {
    return effect_id;
}
void
SWGCorrelation::setEffectId(qint32 effect_id) {
    this->effect_id = effect_id;
}

qint32
SWGCorrelation::getOnsetDelay() {
    return onset_delay;
}
void
SWGCorrelation::setOnsetDelay(qint32 onset_delay) {
    this->onset_delay = onset_delay;
}

qint32
SWGCorrelation::getDurationOfAction() {
    return duration_of_action;
}
void
SWGCorrelation::setDurationOfAction(qint32 duration_of_action) {
    this->duration_of_action = duration_of_action;
}

qint32
SWGCorrelation::getNumberOfPairs() {
    return number_of_pairs;
}
void
SWGCorrelation::setNumberOfPairs(qint32 number_of_pairs) {
    this->number_of_pairs = number_of_pairs;
}

float
SWGCorrelation::getValuePredictingHighOutcome() {
    return value_predicting_high_outcome;
}
void
SWGCorrelation::setValuePredictingHighOutcome(float value_predicting_high_outcome) {
    this->value_predicting_high_outcome = value_predicting_high_outcome;
}

float
SWGCorrelation::getValuePredictingLowOutcome() {
    return value_predicting_low_outcome;
}
void
SWGCorrelation::setValuePredictingLowOutcome(float value_predicting_low_outcome) {
    this->value_predicting_low_outcome = value_predicting_low_outcome;
}

float
SWGCorrelation::getOptimalPearsonProduct() {
    return optimal_pearson_product;
}
void
SWGCorrelation::setOptimalPearsonProduct(float optimal_pearson_product) {
    this->optimal_pearson_product = optimal_pearson_product;
}

float
SWGCorrelation::getVote() {
    return vote;
}
void
SWGCorrelation::setVote(float vote) {
    this->vote = vote;
}

float
SWGCorrelation::getStatisticalSignificance() {
    return statistical_significance;
}
void
SWGCorrelation::setStatisticalSignificance(float statistical_significance) {
    this->statistical_significance = statistical_significance;
}

QString*
SWGCorrelation::getCauseUnit() {
    return cause_unit;
}
void
SWGCorrelation::setCauseUnit(QString* cause_unit) {
    this->cause_unit = cause_unit;
}

qint32
SWGCorrelation::getCauseUnitId() {
    return cause_unit_id;
}
void
SWGCorrelation::setCauseUnitId(qint32 cause_unit_id) {
    this->cause_unit_id = cause_unit_id;
}

qint32
SWGCorrelation::getCauseChanges() {
    return cause_changes;
}
void
SWGCorrelation::setCauseChanges(qint32 cause_changes) {
    this->cause_changes = cause_changes;
}

qint32
SWGCorrelation::getEffectChanges() {
    return effect_changes;
}
void
SWGCorrelation::setEffectChanges(qint32 effect_changes) {
    this->effect_changes = effect_changes;
}

float
SWGCorrelation::getQmScore() {
    return qm_score;
}
void
SWGCorrelation::setQmScore(float qm_score) {
    this->qm_score = qm_score;
}

QString*
SWGCorrelation::getError() {
    return error;
}
void
SWGCorrelation::setError(QString* error) {
    this->error = error;
}

QDateTime*
SWGCorrelation::getCreatedAt() {
    return created_at;
}
void
SWGCorrelation::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGCorrelation::getUpdatedAt() {
    return updated_at;
}
void
SWGCorrelation::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}

float
SWGCorrelation::getReversePearsonCorrelationCoefficient() {
    return reverse_pearson_correlation_coefficient;
}
void
SWGCorrelation::setReversePearsonCorrelationCoefficient(float reverse_pearson_correlation_coefficient) {
    this->reverse_pearson_correlation_coefficient = reverse_pearson_correlation_coefficient;
}

float
SWGCorrelation::getPredictivePearsonCorrelationCoefficient() {
    return predictive_pearson_correlation_coefficient;
}
void
SWGCorrelation::setPredictivePearsonCorrelationCoefficient(float predictive_pearson_correlation_coefficient) {
    this->predictive_pearson_correlation_coefficient = predictive_pearson_correlation_coefficient;
}



} /* namespace Swagger */

