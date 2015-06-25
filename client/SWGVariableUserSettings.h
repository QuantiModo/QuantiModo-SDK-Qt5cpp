/*
 * SWGVariableUserSettings.h
 * 
 * 
 */

#ifndef SWGVariableUserSettings_H_
#define SWGVariableUserSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVariableUserSettings: public SWGObject {
public:
    SWGVariableUserSettings();
    SWGVariableUserSettings(QString* json);
    virtual ~SWGVariableUserSettings();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVariableUserSettings* fromJson(QString &jsonString);

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
    float* getMaximumValue();
    void setMaximumValue(float* maximumValue);
    float* getMinimumValue();
    void setMinimumValue(float* minimumValue);
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
    float* maximumValue;
    float* minimumValue;
    QString* name;
    qint32 onsetDelay;
    QString* unit;
    
};

} /* namespace Swagger */

#endif /* SWGVariableUserSettings_H_ */
