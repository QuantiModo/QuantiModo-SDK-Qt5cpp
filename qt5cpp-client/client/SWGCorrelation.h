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
    QString* getEffect();
    void setEffect(QString* effect);
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
    

private:
    SWGNumber* correlationCoefficient;
    QString* cause;
    QString* effect;
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
    
};

} /* namespace Swagger */

#endif /* SWGCorrelation_H_ */
