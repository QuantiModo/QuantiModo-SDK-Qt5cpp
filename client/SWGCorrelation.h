/*
 * SWGCorrelation.h
 * 
 * 
 */

#ifndef SWGCorrelation_H_
#define SWGCorrelation_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCorrelation: public SWGObject {
public:
    SWGCorrelation();
    SWGCorrelation(QString* json);
    virtual ~SWGCorrelation();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCorrelation* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    qint32 getTimestamp();
    void setTimestamp(qint32 timestamp);
    qint32 getUserId();
    void setUserId(qint32 user_id);
    float getCorrelation();
    void setCorrelation(float correlation);
    qint32 getCauseId();
    void setCauseId(qint32 cause_id);
    qint32 getEffectId();
    void setEffectId(qint32 effect_id);
    qint32 getOnsetDelay();
    void setOnsetDelay(qint32 onset_delay);
    qint32 getDurationOfAction();
    void setDurationOfAction(qint32 duration_of_action);
    qint32 getNumberOfPairs();
    void setNumberOfPairs(qint32 number_of_pairs);
    float getValuePredictingHighOutcome();
    void setValuePredictingHighOutcome(float value_predicting_high_outcome);
    float getValuePredictingLowOutcome();
    void setValuePredictingLowOutcome(float value_predicting_low_outcome);
    float getOptimalPearsonProduct();
    void setOptimalPearsonProduct(float optimal_pearson_product);
    float getVote();
    void setVote(float vote);
    float getStatisticalSignificance();
    void setStatisticalSignificance(float statistical_significance);
    QString* getCauseUnit();
    void setCauseUnit(QString* cause_unit);
    qint32 getCauseUnitId();
    void setCauseUnitId(qint32 cause_unit_id);
    qint32 getCauseChanges();
    void setCauseChanges(qint32 cause_changes);
    qint32 getEffectChanges();
    void setEffectChanges(qint32 effect_changes);
    float getQmScore();
    void setQmScore(float qm_score);
    QString* getError();
    void setError(QString* error);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    float getReversePearsonCorrelationCoefficient();
    void setReversePearsonCorrelationCoefficient(float reverse_pearson_correlation_coefficient);
    float getPredictivePearsonCorrelationCoefficient();
    void setPredictivePearsonCorrelationCoefficient(float predictive_pearson_correlation_coefficient);
    

private:
    qint32 id;
    qint32 timestamp;
    qint32 user_id;
    float correlation;
    qint32 cause_id;
    qint32 effect_id;
    qint32 onset_delay;
    qint32 duration_of_action;
    qint32 number_of_pairs;
    float value_predicting_high_outcome;
    float value_predicting_low_outcome;
    float optimal_pearson_product;
    float vote;
    float statistical_significance;
    QString* cause_unit;
    qint32 cause_unit_id;
    qint32 cause_changes;
    qint32 effect_changes;
    float qm_score;
    QString* error;
    QDateTime* created_at;
    QDateTime* updated_at;
    float reverse_pearson_correlation_coefficient;
    float predictive_pearson_correlation_coefficient;
    
};

} /* namespace Swagger */

#endif /* SWGCorrelation_H_ */
