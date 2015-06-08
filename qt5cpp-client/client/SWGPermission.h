/*
 * SWGPermission.h
 * 
 * 
 */

#ifndef SWGPermission_H_
#define SWGPermission_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPermission: public SWGObject {
public:
    SWGPermission();
    SWGPermission(QString* json);
    virtual ~SWGPermission();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPermission* fromJson(QString &jsonString);

    qint32 getTarget();
    void setTarget(qint32 target);
    QString* getVariableName();
    void setVariableName(QString* variableName);
    qint32 getMinTimestamp();
    void setMinTimestamp(qint32 min_timestamp);
    qint32 getMaxTimestamp();
    void setMaxTimestamp(qint32 max_timestamp);
    qint32 getMinTimeOfDay();
    void setMinTimeOfDay(qint32 min_time_of_day);
    qint32 getMaxTimeOfDay();
    void setMaxTimeOfDay(qint32 max_time_of_day);
    QString* getWeek();
    void setWeek(QString* week);
    

private:
    qint32 target;
    QString* variableName;
    qint32 min_timestamp;
    qint32 max_timestamp;
    qint32 min_time_of_day;
    qint32 max_time_of_day;
    QString* week;
    
};

} /* namespace Swagger */

#endif /* SWGPermission_H_ */
