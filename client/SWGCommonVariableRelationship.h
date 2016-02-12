/*
 * SWGCommonVariableRelationship.h
 * 
 * 
 */

#ifndef SWGCommonVariableRelationship_H_
#define SWGCommonVariableRelationship_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCommonVariableRelationship: public SWGObject {
public:
    SWGCommonVariableRelationship();
    SWGCommonVariableRelationship(QString* json);
    virtual ~SWGCommonVariableRelationship();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCommonVariableRelationship* fromJson(QString &jsonString);

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
    float getStrengthScore();
    void setStrengthScore(float strength_score);
    QString* getStrengthLevel();
    void setStrengthLevel(QString* strength_level);
    qint32 getUpVotes();
    void setUpVotes(qint32 up_votes);
    qint32 getDownVotes();
    void setDownVotes(qint32 down_votes);
    float getValuePredictingHighOutcome();
    void setValuePredictingHighOutcome(float value_predicting_high_outcome);
    float getValuePredictingLowOutcome();
    void setValuePredictingLowOutcome(float value_predicting_low_outcome);
    qint32 getNumberOfUsers();
    void setNumberOfUsers(qint32 number_of_users);
    QString* getDataSource();
    void setDataSource(QString* data_source);
    

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
    float strength_score;
    QString* strength_level;
    qint32 up_votes;
    qint32 down_votes;
    float value_predicting_high_outcome;
    float value_predicting_low_outcome;
    qint32 number_of_users;
    QString* data_source;
    
};

} /* namespace Swagger */

#endif /* SWGCommonVariableRelationship_H_ */
