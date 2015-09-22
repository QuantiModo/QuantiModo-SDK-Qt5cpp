/*
 * SWGCorrelation.h
 * 
 * 
 */

#ifndef SWGCorrelation_H_
#define SWGCorrelation_H_

#include <QJsonObject>


#include <QString>
#include "SWGNumber.h"

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

    SWGNumber* getCorrelationCoefficient();
    void setCorrelationCoefficient(SWGNumber* correlationCoefficient);
    QString* getCause();
    void setCause(QString* cause);
    QString* getOriginalCause();
    void setOriginalCause(QString* originalCause);
    QString* getEffect();
    void setEffect(QString* effect);
    QString* getOriginalEffect();
    void setOriginalEffect(QString* originalEffect);
    double* getOnsetDelay();
    void setOnsetDelay(double* onsetDelay);
    SWGNumber* getDurationOfAction();
    void setDurationOfAction(SWGNumber* durationOfAction);
    SWGNumber* getNumberOfPairs();
    void setNumberOfPairs(SWGNumber* numberOfPairs);
    QString* getEffectSize();
    void setEffectSize(QString* effectSize);
    QString* getStatisticalSignificance();
    void setStatisticalSignificance(QString* statisticalSignificance);
    SWGNumber* getTimestamp();
    void setTimestamp(SWGNumber* timestamp);
    SWGNumber* getReverseCorrelation();
    void setReverseCorrelation(SWGNumber* reverseCorrelation);
    SWGNumber* getCausalityFactor();
    void setCausalityFactor(SWGNumber* causalityFactor);
    QString* getCauseCategory();
    void setCauseCategory(QString* causeCategory);
    QString* getEffectCategory();
    void setEffectCategory(QString* effectCategory);
    SWGNumber* getValuePredictingHighOutcome();
    void setValuePredictingHighOutcome(SWGNumber* valuePredictingHighOutcome);
    SWGNumber* getValuePredictingLowOutcome();
    void setValuePredictingLowOutcome(SWGNumber* valuePredictingLowOutcome);
    SWGNumber* getOptimalPearsonProduct();
    void setOptimalPearsonProduct(SWGNumber* optimalPearsonProduct);
    SWGNumber* getAverageVote();
    void setAverageVote(SWGNumber* averageVote);
    SWGNumber* getUserVote();
    void setUserVote(SWGNumber* userVote);
    QString* getCauseUnit();
    void setCauseUnit(QString* causeUnit);
    qint32 getCauseUnitId();
    void setCauseUnitId(qint32 causeUnitId);
    

private:
    SWGNumber* correlationCoefficient;
    QString* cause;
    QString* originalCause;
    QString* effect;
    QString* originalEffect;
    double* onsetDelay;
    SWGNumber* durationOfAction;
    SWGNumber* numberOfPairs;
    QString* effectSize;
    QString* statisticalSignificance;
    SWGNumber* timestamp;
    SWGNumber* reverseCorrelation;
    SWGNumber* causalityFactor;
    QString* causeCategory;
    QString* effectCategory;
    SWGNumber* valuePredictingHighOutcome;
    SWGNumber* valuePredictingLowOutcome;
    SWGNumber* optimalPearsonProduct;
    SWGNumber* averageVote;
    SWGNumber* userVote;
    QString* causeUnit;
    qint32 causeUnitId;
    
};

} /* namespace Swagger */

#endif /* SWGCorrelation_H_ */
