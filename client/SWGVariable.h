/*
 * SWGVariable.h
 * 
 * 
 */

#ifndef SWGVariable_H_
#define SWGVariable_H_

#include <QJsonObject>


#include <QString>
#include <QList>
#include "SWGVariable.h"

#include "SWGObject.h"


namespace Swagger {

class SWGVariable: public SWGObject {
public:
    SWGVariable();
    SWGVariable(QString* json);
    virtual ~SWGVariable();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVariable* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    QString* getName();
    void setName(QString* name);
    QString* getOriginalName();
    void setOriginalName(QString* originalName);
    QString* getCategory();
    void setCategory(QString* category);
    QString* getAbbreviatedUnitName();
    void setAbbreviatedUnitName(QString* abbreviatedUnitName);
    qint32 getAbbreviatedUnitId();
    void setAbbreviatedUnitId(qint32 abbreviatedUnitId);
    QString* getSources();
    void setSources(QString* sources);
    double* getMinimumValue();
    void setMinimumValue(double* minimumValue);
    double* getMaximumValue();
    void setMaximumValue(double* maximumValue);
    QString* getCombinationOperation();
    void setCombinationOperation(QString* combinationOperation);
    double* getFillingValue();
    void setFillingValue(double* fillingValue);
    QString* getJoinWith();
    void setJoinWith(QString* joinWith);
    QList<SWGVariable*>* getJoinedVariables();
    void setJoinedVariables(QList<SWGVariable*>* joinedVariables);
    qint32 getParent();
    void setParent(qint32 parent);
    QList<SWGVariable*>* getSubVariables();
    void setSubVariables(QList<SWGVariable*>* subVariables);
    qint32 getOnsetDelay();
    void setOnsetDelay(qint32 onsetDelay);
    qint32 getDurationOfAction();
    void setDurationOfAction(qint32 durationOfAction);
    qint32 getEarliestMeasurementTime();
    void setEarliestMeasurementTime(qint32 earliestMeasurementTime);
    qint32 getLatestMeasurementTime();
    void setLatestMeasurementTime(qint32 latestMeasurementTime);
    qint32 getUpdated();
    void setUpdated(qint32 updated);
    qint32 getCauseOnly();
    void setCauseOnly(qint32 causeOnly);
    qint32 getNumberOfCorrelations();
    void setNumberOfCorrelations(qint32 numberOfCorrelations);
    qint32 getOutcome();
    void setOutcome(qint32 outcome);
    qint32 getMeasurementsAtLastAnalysis();
    void setMeasurementsAtLastAnalysis(qint32 measurementsAtLastAnalysis);
    qint32 getNumberOfMeasurements();
    void setNumberOfMeasurements(qint32 numberOfMeasurements);
    QString* getLastUnit();
    void setLastUnit(QString* lastUnit);
    qint32 getLastValue();
    void setLastValue(qint32 lastValue);
    qint32 getMostCommonValue();
    void setMostCommonValue(qint32 mostCommonValue);
    QString* getMostCommonUnit();
    void setMostCommonUnit(QString* mostCommonUnit);
    qint32 getLastSource();
    void setLastSource(qint32 lastSource);
    

private:
    qint32 id;
    QString* name;
    QString* originalName;
    QString* category;
    QString* abbreviatedUnitName;
    qint32 abbreviatedUnitId;
    QString* sources;
    double* minimumValue;
    double* maximumValue;
    QString* combinationOperation;
    double* fillingValue;
    QString* joinWith;
    QList<SWGVariable*>* joinedVariables;
    qint32 parent;
    QList<SWGVariable*>* subVariables;
    qint32 onsetDelay;
    qint32 durationOfAction;
    qint32 earliestMeasurementTime;
    qint32 latestMeasurementTime;
    qint32 updated;
    qint32 causeOnly;
    qint32 numberOfCorrelations;
    qint32 outcome;
    qint32 measurementsAtLastAnalysis;
    qint32 numberOfMeasurements;
    QString* lastUnit;
    qint32 lastValue;
    qint32 mostCommonValue;
    QString* mostCommonUnit;
    qint32 lastSource;
    
};

} /* namespace Swagger */

#endif /* SWGVariable_H_ */
