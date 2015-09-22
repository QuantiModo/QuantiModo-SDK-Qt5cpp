/*
 * SWGMeasurement.h
 * 
 * 
 */

#ifndef SWGMeasurement_H_
#define SWGMeasurement_H_

#include <QJsonObject>


#include <QString>
#include "SWGHumanTime.h"

#include "SWGObject.h"


namespace Swagger {

class SWGMeasurement: public SWGObject {
public:
    SWGMeasurement();
    SWGMeasurement(QString* json);
    virtual ~SWGMeasurement();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeasurement* fromJson(QString &jsonString);

    QString* getVariable();
    void setVariable(QString* variable);
    QString* getSource();
    void setSource(QString* source);
    qint64 getTimestamp();
    void setTimestamp(qint64 timestamp);
    QString* getStartTime();
    void setStartTime(QString* startTime);
    SWGHumanTime* getHumanTime();
    void setHumanTime(SWGHumanTime* humanTime);
    double* getValue();
    void setValue(double* value);
    QString* getUnit();
    void setUnit(QString* unit);
    qint32 getOriginalValue();
    void setOriginalValue(qint32 originalValue);
    double* getStoredValue();
    void setStoredValue(double* storedValue);
    QString* getStoredAbbreviatedUnitName();
    void setStoredAbbreviatedUnitName(QString* storedAbbreviatedUnitName);
    QString* getOriginalAbbreviatedUnitName();
    void setOriginalAbbreviatedUnitName(QString* originalAbbreviatedUnitName);
    QString* getAbbreviatedUnitName();
    void setAbbreviatedUnitName(QString* abbreviatedUnitName);
    QString* getNote();
    void setNote(QString* note);
    

private:
    QString* variable;
    QString* source;
    qint64 timestamp;
    QString* startTime;
    SWGHumanTime* humanTime;
    double* value;
    QString* unit;
    qint32 originalValue;
    double* storedValue;
    QString* storedAbbreviatedUnitName;
    QString* originalAbbreviatedUnitName;
    QString* abbreviatedUnitName;
    QString* note;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurement_H_ */
