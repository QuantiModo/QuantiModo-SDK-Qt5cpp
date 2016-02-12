
#include "SWGCommonVariableRelationship.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCommonVariableRelationship::SWGCommonVariableRelationship(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCommonVariableRelationship::SWGCommonVariableRelationship() {
    init();
}

SWGCommonVariableRelationship::~SWGCommonVariableRelationship() {
    this->cleanup();
}

void
SWGCommonVariableRelationship::init() {
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
    strength_score = 0.0f;
    strength_level = new QString("");
    up_votes = 0;
    down_votes = 0;
    value_predicting_high_outcome = 0.0f;
    value_predicting_low_outcome = 0.0f;
    number_of_users = 0;
    data_source = new QString("");
    
}

void
SWGCommonVariableRelationship::cleanup() {
    
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
    
    
    
    
    
    if(data_source != NULL) {
        delete data_source;
    }
    
}

SWGCommonVariableRelationship*
SWGCommonVariableRelationship::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCommonVariableRelationship::fromJsonObject(QJsonObject &pJson) {
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
    setValue(&strength_score, pJson["strength_score"], "float", "");
    setValue(&strength_level, pJson["strength_level"], "QString", "QString");
    setValue(&up_votes, pJson["up_votes"], "qint32", "");
    setValue(&down_votes, pJson["down_votes"], "qint32", "");
    setValue(&value_predicting_high_outcome, pJson["value_predicting_high_outcome"], "float", "");
    setValue(&value_predicting_low_outcome, pJson["value_predicting_low_outcome"], "float", "");
    setValue(&number_of_users, pJson["number_of_users"], "qint32", "");
    setValue(&data_source, pJson["data_source"], "QString", "QString");
    
}

QString
SWGCommonVariableRelationship::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCommonVariableRelationship::asJsonObject() {
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
    obj->insert("strength_score", QJsonValue(strength_score));
    
    
    toJsonValue(QString("strength_level"), strength_level, obj, QString("QString"));
    
    
    
    obj->insert("up_votes", QJsonValue(up_votes));
    obj->insert("down_votes", QJsonValue(down_votes));
    obj->insert("value_predicting_high_outcome", QJsonValue(value_predicting_high_outcome));
    obj->insert("value_predicting_low_outcome", QJsonValue(value_predicting_low_outcome));
    obj->insert("number_of_users", QJsonValue(number_of_users));
    
    
    toJsonValue(QString("data_source"), data_source, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint32
SWGCommonVariableRelationship::getId() {
    return id;
}
void
SWGCommonVariableRelationship::setId(qint32 id) {
    this->id = id;
}

QString*
SWGCommonVariableRelationship::getConfidenceLevel() {
    return confidence_level;
}
void
SWGCommonVariableRelationship::setConfidenceLevel(QString* confidence_level) {
    this->confidence_level = confidence_level;
}

float
SWGCommonVariableRelationship::getConfidenceScore() {
    return confidence_score;
}
void
SWGCommonVariableRelationship::setConfidenceScore(float confidence_score) {
    this->confidence_score = confidence_score;
}

QString*
SWGCommonVariableRelationship::getDirection() {
    return direction;
}
void
SWGCommonVariableRelationship::setDirection(QString* direction) {
    this->direction = direction;
}

qint32
SWGCommonVariableRelationship::getDurationOfAction() {
    return duration_of_action;
}
void
SWGCommonVariableRelationship::setDurationOfAction(qint32 duration_of_action) {
    this->duration_of_action = duration_of_action;
}

QString*
SWGCommonVariableRelationship::getErrorMessage() {
    return error_message;
}
void
SWGCommonVariableRelationship::setErrorMessage(QString* error_message) {
    this->error_message = error_message;
}

qint32
SWGCommonVariableRelationship::getOnsetDelay() {
    return onset_delay;
}
void
SWGCommonVariableRelationship::setOnsetDelay(qint32 onset_delay) {
    this->onset_delay = onset_delay;
}

qint32
SWGCommonVariableRelationship::getOutcomeVariableId() {
    return outcome_variable_id;
}
void
SWGCommonVariableRelationship::setOutcomeVariableId(qint32 outcome_variable_id) {
    this->outcome_variable_id = outcome_variable_id;
}

qint32
SWGCommonVariableRelationship::getPredictorVariableId() {
    return predictor_variable_id;
}
void
SWGCommonVariableRelationship::setPredictorVariableId(qint32 predictor_variable_id) {
    this->predictor_variable_id = predictor_variable_id;
}

qint32
SWGCommonVariableRelationship::getPredictorUnitId() {
    return predictor_unit_id;
}
void
SWGCommonVariableRelationship::setPredictorUnitId(qint32 predictor_unit_id) {
    this->predictor_unit_id = predictor_unit_id;
}

float
SWGCommonVariableRelationship::getSinnRank() {
    return sinn_rank;
}
void
SWGCommonVariableRelationship::setSinnRank(float sinn_rank) {
    this->sinn_rank = sinn_rank;
}

float
SWGCommonVariableRelationship::getStrengthScore() {
    return strength_score;
}
void
SWGCommonVariableRelationship::setStrengthScore(float strength_score) {
    this->strength_score = strength_score;
}

QString*
SWGCommonVariableRelationship::getStrengthLevel() {
    return strength_level;
}
void
SWGCommonVariableRelationship::setStrengthLevel(QString* strength_level) {
    this->strength_level = strength_level;
}

qint32
SWGCommonVariableRelationship::getUpVotes() {
    return up_votes;
}
void
SWGCommonVariableRelationship::setUpVotes(qint32 up_votes) {
    this->up_votes = up_votes;
}

qint32
SWGCommonVariableRelationship::getDownVotes() {
    return down_votes;
}
void
SWGCommonVariableRelationship::setDownVotes(qint32 down_votes) {
    this->down_votes = down_votes;
}

float
SWGCommonVariableRelationship::getValuePredictingHighOutcome() {
    return value_predicting_high_outcome;
}
void
SWGCommonVariableRelationship::setValuePredictingHighOutcome(float value_predicting_high_outcome) {
    this->value_predicting_high_outcome = value_predicting_high_outcome;
}

float
SWGCommonVariableRelationship::getValuePredictingLowOutcome() {
    return value_predicting_low_outcome;
}
void
SWGCommonVariableRelationship::setValuePredictingLowOutcome(float value_predicting_low_outcome) {
    this->value_predicting_low_outcome = value_predicting_low_outcome;
}

qint32
SWGCommonVariableRelationship::getNumberOfUsers() {
    return number_of_users;
}
void
SWGCommonVariableRelationship::setNumberOfUsers(qint32 number_of_users) {
    this->number_of_users = number_of_users;
}

QString*
SWGCommonVariableRelationship::getDataSource() {
    return data_source;
}
void
SWGCommonVariableRelationship::setDataSource(QString* data_source) {
    this->data_source = data_source;
}



} /* namespace Swagger */

