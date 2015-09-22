/*
 * SWGHumanTime.h
 * 
 * 
 */

#ifndef SWGHumanTime_H_
#define SWGHumanTime_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGHumanTime: public SWGObject {
public:
    SWGHumanTime();
    SWGHumanTime(QString* json);
    virtual ~SWGHumanTime();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGHumanTime* fromJson(QString &jsonString);

    QString* getDate();
    void setDate(QString* date);
    qint32 getTimezoneType();
    void setTimezoneType(qint32 timezone_type);
    QString* getTimezone();
    void setTimezone(QString* timezone);
    

private:
    QString* date;
    qint32 timezone_type;
    QString* timezone;
    
};

} /* namespace Swagger */

#endif /* SWGHumanTime_H_ */
