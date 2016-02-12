/*
 * SWGAggregatedCorrelation.h
 * 
 * 
 */

#ifndef SWGAggregatedCorrelation_H_
#define SWGAggregatedCorrelation_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAggregatedCorrelation: public SWGObject {
public:
    SWGAggregatedCorrelation();
    SWGAggregatedCorrelation(QString* json);
    virtual ~SWGAggregatedCorrelation();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAggregatedCorrelation* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
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
    qint32 getNumberOfUsers();
    void setNumberOfUsers(qint32 number_of_users);
    qint32 getNumberOfCorrelations();
    void setNumberOfCorrelations(qint32 number_of_correlations);
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
    float getAggregateQmScore();
    void setAggregateQmScore(float aggregate_qm_score);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    QString* getStatus();
    void setStatus(QString* status);
    QString* getErrorMessage();
    void setErrorMessage(QString* error_message);
    QDateTime* getLastSuccessfulUpdateTime();
    void setLastSuccessfulUpdateTime(QDateTime* last_successful_update_time);
    float getReversePearsonCorrelationCoefficient();
    void setReversePearsonCorrelationCoefficient(float reverse_pearson_correlation_coefficient);
    float getPredictivePearsonCorrelationCoefficient();
    void setPredictivePearsonCorrelationCoefficient(float predictive_pearson_correlation_coefficient);
    QString* getDataSource();
    void setDataSource(QString* data_source);
    

private:
    qint32 id;
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
    qint32 number_of_users;
    qint32 number_of_correlations;
    float statistical_significance;
    QString* cause_unit;
    qint32 cause_unit_id;
    qint32 cause_changes;
    qint32 effect_changes;
    float aggregate_qm_score;
    QDateTime* created_at;
    QDateTime* updated_at;
    QString* status;
    QString* error_message;
    QDateTime* last_successful_update_time;
    float reverse_pearson_correlation_coefficient;
    float predictive_pearson_correlation_coefficient;
    QString* data_source;
    
};

} /* namespace Swagger */

#endif /* SWGAggregatedCorrelation_H_ */
