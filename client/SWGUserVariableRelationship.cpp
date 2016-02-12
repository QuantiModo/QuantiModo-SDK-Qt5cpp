
#include "SWGUserVariableRelationship.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserVariableRelationship::SWGUserVariableRelationship(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserVariableRelationship::SWGUserVariableRelationship() {
    init();
}

SWGUserVariableRelationship::~SWGUserVariableRelationship() {
    this->cleanup();
}

void
SWGUserVariableRelationship::init() {
    id = 0;
    confidence_level = new QString("");
    confidence_score = 0.0f;
    direction = new QString("");
    duration_of_action = 0;
    error_message = new QString("");
    onset_delay = 0;
    outcome_variable_id = 0;
    predictor_variable_id = 0;
    predictor_unit_id = 0;
    sinn_rank = 0.0f;
    strength_level = new QString("");
    strength_score = 0.0f;
    user_id = 0;
    vote = new QString("");
    value_predicting_high_outcome = 0.0f;
    value_predicting_low_outcome = 0.0f;
    
}

void
SWGUserVariableRelationship::cleanup() {
    
    if(confidence_level != NULL) {
        delete confidence_level;
    }
    
    if(direction != NULL) {
        delete direction;
    }
    
    if(error_message != NULL) {
        delete error_message;
    }
    
    
    
    
    
    if(strength_level != NULL) {
        delete strength_level;
    }
    
    
    if(vote != NULL) {
        delete vote;
    }
    
    
    
}

SWGUserVariableRelationship*
SWGUserVariableRelationship::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserVariableRelationship::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&confidence_level, pJson["confidence_level"], "QString", "QString");
    setValue(&confidence_score, pJson["confidence_score"], "float", "");
    setValue(&direction, pJson["direction"], "QString", "QString");
    setValue(&duration_of_action, pJson["duration_of_action"], "qint32", "");
    setValue(&error_message, pJson["error_message"], "QString", "QString");
    setValue(&onset_delay, pJson["onset_delay"], "qint32", "");
    setValue(&outcome_variable_id, pJson["outcome_variable_id"], "qint32", "");
    setValue(&predictor_variable_id, pJson["predictor_variable_id"], "qint32", "");
    setValue(&predictor_unit_id, pJson["predictor_unit_id"], "qint32", "");
    setValue(&sinn_rank, pJson["sinn_rank"], "float", "");
    setValue(&strength_level, pJson["strength_level"], "QString", "QString");
    setValue(&strength_score, pJson["strength_score"], "float", "");
    setValue(&user_id, pJson["user_id"], "qint32", "");
    setValue(&vote, pJson["vote"], "QString", "QString");
    setValue(&value_predicting_high_outcome, pJson["value_predicting_high_outcome"], "float", "");
    setValue(&value_predicting_low_outcome, pJson["value_predicting_low_outcome"], "float", "");
    
}

QString
SWGUserVariableRelationship::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserVariableRelationship::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("confidence_level"), confidence_level, obj, QString("QString"));
    
    
    
    obj->insert("confidence_score", QJsonValue(confidence_score));
    
    
    toJsonValue(QString("direction"), direction, obj, QString("QString"));
    
    
    
    obj->insert("duration_of_action", QJsonValue(duration_of_action));
    
    
    toJsonValue(QString("error_message"), error_message, obj, QString("QString"));
    
    
    
    obj->insert("onset_delay", QJsonValue(onset_delay));
    obj->insert("outcome_variable_id", QJsonValue(outcome_variable_id));
    obj->insert("predictor_variable_id", QJsonValue(predictor_variable_id));
    obj->insert("predictor_unit_id", QJsonValue(predictor_unit_id));
    obj->insert("sinn_rank", QJsonValue(sinn_rank));
    
    
    toJsonValue(QString("strength_level"), strength_level, obj, QString("QString"));
    
    
    
    obj->insert("strength_score", QJsonValue(strength_score));
    obj->insert("user_id", QJsonValue(user_id));
    
    
    toJsonValue(QString("vote"), vote, obj, QString("QString"));
    
    
    
    obj->insert("value_predicting_high_outcome", QJsonValue(value_predicting_high_outcome));
    obj->insert("value_predicting_low_outcome", QJsonValue(value_predicting_low_outcome));
    

    return obj;
}

qint32
SWGUserVariableRelationship::getId() {
    return id;
}
void
SWGUserVariableRelationship::setId(qint32 id) {
    this->id = id;
}

QString*
SWGUserVariableRelationship::getConfidenceLevel() {
    return confidence_level;
}
void
SWGUserVariableRelationship::setConfidenceLevel(QString* confidence_level) {
    this->confidence_level = confidence_level;
}

float
SWGUserVariableRelationship::getConfidenceScore() {
    return confidence_score;
}
void
SWGUserVariableRelationship::setConfidenceScore(float confidence_score) {
    this->confidence_score = confidence_score;
}

QString*
SWGUserVariableRelationship::getDirection() {
    return direction;
}
void
SWGUserVariableRelationship::setDirection(QString* direction) {
    this->direction = direction;
}

qint32
SWGUserVariableRelationship::getDurationOfAction() {
    return duration_of_action;
}
void
SWGUserVariableRelationship::setDurationOfAction(qint32 duration_of_action) {
    this->duration_of_action = duration_of_action;
}

QString*
SWGUserVariableRelationship::getErrorMessage() {
    return error_message;
}
void
SWGUserVariableRelationship::setErrorMessage(QString* error_message) {
    this->error_message = error_message;
}

qint32
SWGUserVariableRelationship::getOnsetDelay() {
    return onset_delay;
}
void
SWGUserVariableRelationship::setOnsetDelay(qint32 onset_delay) {
    this->onset_delay = onset_delay;
}

qint32
SWGUserVariableRelationship::getOutcomeVariableId() {
    return outcome_variable_id;
}
void
SWGUserVariableRelationship::setOutcomeVariableId(qint32 outcome_variable_id) {
    this->outcome_variable_id = outcome_variable_id;
}

qint32
SWGUserVariableRelationship::getPredictorVariableId() {
    return predictor_variable_id;
}
void
SWGUserVariableRelationship::setPredictorVariableId(qint32 predictor_variable_id) {
    this->predictor_variable_id = predictor_variable_id;
}

qint32
SWGUserVariableRelationship::getPredictorUnitId() {
    return predictor_unit_id;
}
void
SWGUserVariableRelationship::setPredictorUnitId(qint32 predictor_unit_id) {
    this->predictor_unit_id = predictor_unit_id;
}

float
SWGUserVariableRelationship::getSinnRank() {
    return sinn_rank;
}
void
SWGUserVariableRelationship::setSinnRank(float sinn_rank) {
    this->sinn_rank = sinn_rank;
}

QString*
SWGUserVariableRelationship::getStrengthLevel() {
    return strength_level;
}
void
SWGUserVariableRelationship::setStrengthLevel(QString* strength_level) {
    this->strength_level = strength_level;
}

float
SWGUserVariableRelationship::getStrengthScore() {
    return strength_score;
}
void
SWGUserVariableRelationship::setStrengthScore(float strength_score) {
    this->strength_score = strength_score;
}

qint32
SWGUserVariableRelationship::getUserId() {
    return user_id;
}
void
SWGUserVariableRelationship::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

QString*
SWGUserVariableRelationship::getVote() {
    return vote;
}
void
SWGUserVariableRelationship::setVote(QString* vote) {
    this->vote = vote;
}

float
SWGUserVariableRelationship::getValuePredictingHighOutcome() {
    return value_predicting_high_outcome;
}
void
SWGUserVariableRelationship::setValuePredictingHighOutcome(float value_predicting_high_outcome) {
    this->value_predicting_high_outcome = value_predicting_high_outcome;
}

float
SWGUserVariableRelationship::getValuePredictingLowOutcome() {
    return value_predicting_low_outcome;
}
void
SWGUserVariableRelationship::setValuePredictingLowOutcome(float value_predicting_low_outcome) {
    this->value_predicting_low_outcome = value_predicting_low_outcome;
}



} /* namespace Swagger */

