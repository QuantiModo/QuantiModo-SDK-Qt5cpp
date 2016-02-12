
#include "SWGAggregatedCorrelation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAggregatedCorrelation::SWGAggregatedCorrelation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAggregatedCorrelation::SWGAggregatedCorrelation() {
    init();
}

SWGAggregatedCorrelation::~SWGAggregatedCorrelation() {
    this->cleanup();
}

void
SWGAggregatedCorrelation::init() {
    id = 0;
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
    number_of_users = 0;
    number_of_correlations = 0;
    statistical_significance = 0.0f;
    cause_unit = new QString("");
    cause_unit_id = 0;
    cause_changes = 0;
    effect_changes = 0;
    aggregate_qm_score = 0.0f;
    created_at = NULL;
    updated_at = NULL;
    status = new QString("");
    error_message = new QString("");
    last_successful_update_time = NULL;
    reverse_pearson_correlation_coefficient = 0.0f;
    predictive_pearson_correlation_coefficient = 0.0f;
    data_source = new QString("");
    
}

void
SWGAggregatedCorrelation::cleanup() {
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    if(cause_unit != NULL) {
        delete cause_unit;
    }
    
    
    
    
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    if(status != NULL) {
        delete status;
    }
    if(error_message != NULL) {
        delete error_message;
    }
    if(last_successful_update_time != NULL) {
        delete last_successful_update_time;
    }
    
    
    if(data_source != NULL) {
        delete data_source;
    }
    
}

SWGAggregatedCorrelation*
SWGAggregatedCorrelation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAggregatedCorrelation::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
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
    setValue(&number_of_users, pJson["number_of_users"], "qint32", "");
    setValue(&number_of_correlations, pJson["number_of_correlations"], "qint32", "");
    setValue(&statistical_significance, pJson["statistical_significance"], "float", "");
    setValue(&cause_unit, pJson["cause_unit"], "QString", "QString");
    setValue(&cause_unit_id, pJson["cause_unit_id"], "qint32", "");
    setValue(&cause_changes, pJson["cause_changes"], "qint32", "");
    setValue(&effect_changes, pJson["effect_changes"], "qint32", "");
    setValue(&aggregate_qm_score, pJson["aggregate_qm_score"], "float", "");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    setValue(&status, pJson["status"], "QString", "QString");
    setValue(&error_message, pJson["error_message"], "QString", "QString");
    setValue(&last_successful_update_time, pJson["last_successful_update_time"], "QDateTime", "QDateTime");
    setValue(&reverse_pearson_correlation_coefficient, pJson["reverse_pearson_correlation_coefficient"], "float", "");
    setValue(&predictive_pearson_correlation_coefficient, pJson["predictive_pearson_correlation_coefficient"], "float", "");
    setValue(&data_source, pJson["data_source"], "QString", "QString");
    
}

QString
SWGAggregatedCorrelation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAggregatedCorrelation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
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
    obj->insert("number_of_users", QJsonValue(number_of_users));
    obj->insert("number_of_correlations", QJsonValue(number_of_correlations));
    obj->insert("statistical_significance", QJsonValue(statistical_significance));
    
    
    toJsonValue(QString("cause_unit"), cause_unit, obj, QString("QString"));
    
    
    
    obj->insert("cause_unit_id", QJsonValue(cause_unit_id));
    obj->insert("cause_changes", QJsonValue(cause_changes));
    obj->insert("effect_changes", QJsonValue(effect_changes));
    obj->insert("aggregate_qm_score", QJsonValue(aggregate_qm_score));
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("status"), status, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("error_message"), error_message, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("last_successful_update_time"), last_successful_update_time, obj, QString("QDateTime"));
    
    
    
    obj->insert("reverse_pearson_correlation_coefficient", QJsonValue(reverse_pearson_correlation_coefficient));
    obj->insert("predictive_pearson_correlation_coefficient", QJsonValue(predictive_pearson_correlation_coefficient));
    
    
    toJsonValue(QString("data_source"), data_source, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint32
SWGAggregatedCorrelation::getId() {
    return id;
}
void
SWGAggregatedCorrelation::setId(qint32 id) {
    this->id = id;
}

float
SWGAggregatedCorrelation::getCorrelation() {
    return correlation;
}
void
SWGAggregatedCorrelation::setCorrelation(float correlation) {
    this->correlation = correlation;
}

qint32
SWGAggregatedCorrelation::getCauseId() {
    return cause_id;
}
void
SWGAggregatedCorrelation::setCauseId(qint32 cause_id) {
    this->cause_id = cause_id;
}

qint32
SWGAggregatedCorrelation::getEffectId() {
    return effect_id;
}
void
SWGAggregatedCorrelation::setEffectId(qint32 effect_id) {
    this->effect_id = effect_id;
}

qint32
SWGAggregatedCorrelation::getOnsetDelay() {
    return onset_delay;
}
void
SWGAggregatedCorrelation::setOnsetDelay(qint32 onset_delay) {
    this->onset_delay = onset_delay;
}

qint32
SWGAggregatedCorrelation::getDurationOfAction() {
    return duration_of_action;
}
void
SWGAggregatedCorrelation::setDurationOfAction(qint32 duration_of_action) {
    this->duration_of_action = duration_of_action;
}

qint32
SWGAggregatedCorrelation::getNumberOfPairs() {
    return number_of_pairs;
}
void
SWGAggregatedCorrelation::setNumberOfPairs(qint32 number_of_pairs) {
    this->number_of_pairs = number_of_pairs;
}

float
SWGAggregatedCorrelation::getValuePredictingHighOutcome() {
    return value_predicting_high_outcome;
}
void
SWGAggregatedCorrelation::setValuePredictingHighOutcome(float value_predicting_high_outcome) {
    this->value_predicting_high_outcome = value_predicting_high_outcome;
}

float
SWGAggregatedCorrelation::getValuePredictingLowOutcome() {
    return value_predicting_low_outcome;
}
void
SWGAggregatedCorrelation::setValuePredictingLowOutcome(float value_predicting_low_outcome) {
    this->value_predicting_low_outcome = value_predicting_low_outcome;
}

float
SWGAggregatedCorrelation::getOptimalPearsonProduct() {
    return optimal_pearson_product;
}
void
SWGAggregatedCorrelation::setOptimalPearsonProduct(float optimal_pearson_product) {
    this->optimal_pearson_product = optimal_pearson_product;
}

float
SWGAggregatedCorrelation::getVote() {
    return vote;
}
void
SWGAggregatedCorrelation::setVote(float vote) {
    this->vote = vote;
}

qint32
SWGAggregatedCorrelation::getNumberOfUsers() {
    return number_of_users;
}
void
SWGAggregatedCorrelation::setNumberOfUsers(qint32 number_of_users) {
    this->number_of_users = number_of_users;
}

qint32
SWGAggregatedCorrelation::getNumberOfCorrelations() {
    return number_of_correlations;
}
void
SWGAggregatedCorrelation::setNumberOfCorrelations(qint32 number_of_correlations) {
    this->number_of_correlations = number_of_correlations;
}

float
SWGAggregatedCorrelation::getStatisticalSignificance() {
    return statistical_significance;
}
void
SWGAggregatedCorrelation::setStatisticalSignificance(float statistical_significance) {
    this->statistical_significance = statistical_significance;
}

QString*
SWGAggregatedCorrelation::getCauseUnit() {
    return cause_unit;
}
void
SWGAggregatedCorrelation::setCauseUnit(QString* cause_unit) {
    this->cause_unit = cause_unit;
}

qint32
SWGAggregatedCorrelation::getCauseUnitId() {
    return cause_unit_id;
}
void
SWGAggregatedCorrelation::setCauseUnitId(qint32 cause_unit_id) {
    this->cause_unit_id = cause_unit_id;
}

qint32
SWGAggregatedCorrelation::getCauseChanges() {
    return cause_changes;
}
void
SWGAggregatedCorrelation::setCauseChanges(qint32 cause_changes) {
    this->cause_changes = cause_changes;
}

qint32
SWGAggregatedCorrelation::getEffectChanges() {
    return effect_changes;
}
void
SWGAggregatedCorrelation::setEffectChanges(qint32 effect_changes) {
    this->effect_changes = effect_changes;
}

float
SWGAggregatedCorrelation::getAggregateQmScore() {
    return aggregate_qm_score;
}
void
SWGAggregatedCorrelation::setAggregateQmScore(float aggregate_qm_score) {
    this->aggregate_qm_score = aggregate_qm_score;
}

QDateTime*
SWGAggregatedCorrelation::getCreatedAt() {
    return created_at;
}
void
SWGAggregatedCorrelation::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGAggregatedCorrelation::getUpdatedAt() {
    return updated_at;
}
void
SWGAggregatedCorrelation::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}

QString*
SWGAggregatedCorrelation::getStatus() {
    return status;
}
void
SWGAggregatedCorrelation::setStatus(QString* status) {
    this->status = status;
}

QString*
SWGAggregatedCorrelation::getErrorMessage() {
    return error_message;
}
void
SWGAggregatedCorrelation::setErrorMessage(QString* error_message) {
    this->error_message = error_message;
}

QDateTime*
SWGAggregatedCorrelation::getLastSuccessfulUpdateTime() {
    return last_successful_update_time;
}
void
SWGAggregatedCorrelation::setLastSuccessfulUpdateTime(QDateTime* last_successful_update_time) {
    this->last_successful_update_time = last_successful_update_time;
}

float
SWGAggregatedCorrelation::getReversePearsonCorrelationCoefficient() {
    return reverse_pearson_correlation_coefficient;
}
void
SWGAggregatedCorrelation::setReversePearsonCorrelationCoefficient(float reverse_pearson_correlation_coefficient) {
    this->reverse_pearson_correlation_coefficient = reverse_pearson_correlation_coefficient;
}

float
SWGAggregatedCorrelation::getPredictivePearsonCorrelationCoefficient() {
    return predictive_pearson_correlation_coefficient;
}
void
SWGAggregatedCorrelation::setPredictivePearsonCorrelationCoefficient(float predictive_pearson_correlation_coefficient) {
    this->predictive_pearson_correlation_coefficient = predictive_pearson_correlation_coefficient;
}

QString*
SWGAggregatedCorrelation::getDataSource() {
    return data_source;
}
void
SWGAggregatedCorrelation::setDataSource(QString* data_source) {
    this->data_source = data_source;
}



} /* namespace Swagger */

