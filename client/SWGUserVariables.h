/*
 * SWGUserVariables.h
 * 
 * 
 */

#ifndef SWGUserVariables_H_
#define SWGUserVariables_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserVariables: public SWGObject {
public:
    SWGUserVariables();
    SWGUserVariables(QString* json);
    virtual ~SWGUserVariables();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserVariables* fromJson(QString &jsonString);

    qint32 getUser();
    void setUser(qint32 user);
    QString* getVariable();
    void setVariable(QString* variable);
    qint32 getDurationOfAction();
    void setDurationOfAction(qint32 durationOfAction);
    qint32 getFillingValue();
    void setFillingValue(qint32 fillingValue);
    QString* getJoinWith();
    void setJoinWith(QString* joinWith);
    float* getMaximumAllowedValue();
    void setMaximumAllowedValue(float* maximumAllowedValue);
    float* getMinimumAllowedValue();
    void setMinimumAllowedValue(float* minimumAllowedValue);
    QString* getName();
    void setName(QString* name);
    qint32 getOnsetDelay();
    void setOnsetDelay(qint32 onsetDelay);
    QString* getUnit();
    void setUnit(QString* unit);
    

private:
    qint32 user;
    QString* variable;
    qint32 durationOfAction;
    qint32 fillingValue;
    QString* joinWith;
    float* maximumAllowedValue;
    float* minimumAllowedValue;
    QString* name;
    qint32 onsetDelay;
    QString* unit;
    
};

} /* namespace Swagger */

#endif /* SWGUserVariables_H_ */
