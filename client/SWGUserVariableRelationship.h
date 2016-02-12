/*
 * SWGUserVariableRelationship.h
 * 
 * 
 */

#ifndef SWGUserVariableRelationship_H_
#define SWGUserVariableRelationship_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserVariableRelationship: public SWGObject {
public:
    SWGUserVariableRelationship();
    SWGUserVariableRelationship(QString* json);
    virtual ~SWGUserVariableRelationship();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserVariableRelationship* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    QString* getConfidenceLevel();
    void setConfidenceLevel(QString* confidence_level);
    float getConfidenceScore();
    void setConfidenceScore(float confidence_score);
    QString* getDirection();
    void setDirection(QString* direction);
    qint32 getDurationOfAction();
    void setDurationOfAction(qint32 duration_of_action);
    QString* getErrorMessage();
    void setErrorMessage(QString* error_message);
    qint32 getOnsetDelay();
    void setOnsetDelay(qint32 onset_delay);
    qint32 getOutcomeVariableId();
    void setOutcomeVariableId(qint32 outcome_variable_id);
    qint32 getPredictorVariableId();
    void setPredictorVariableId(qint32 predictor_variable_id);
    qint32 getPredictorUnitId();
    void setPredictorUnitId(qint32 predictor_unit_id);
    float getSinnRank();
    void setSinnRank(float sinn_rank);
    QString* getStrengthLevel();
    void setStrengthLevel(QString* strength_level);
    float getStrengthScore();
    void setStrengthScore(float strength_score);
    qint32 getUserId();
    void setUserId(qint32 user_id);
    QString* getVote();
    void setVote(QString* vote);
    float getValuePredictingHighOutcome();
    void setValuePredictingHighOutcome(float value_predicting_high_outcome);
    float getValuePredictingLowOutcome();
    void setValuePredictingLowOutcome(float value_predicting_low_outcome);
    

private:
    qint32 id;
    QString* confidence_level;
    float confidence_score;
    QString* direction;
    qint32 duration_of_action;
    QString* error_message;
    qint32 onset_delay;
    qint32 outcome_variable_id;
    qint32 predictor_variable_id;
    qint32 predictor_unit_id;
    float sinn_rank;
    QString* strength_level;
    float strength_score;
    qint32 user_id;
    QString* vote;
    float value_predicting_high_outcome;
    float value_predicting_low_outcome;
    
};

} /* namespace Swagger */

#endif /* SWGUserVariableRelationship_H_ */
