/*
 * SWGInline_response_200_6.h
 * 
 * 
 */

#ifndef SWGInline_response_200_6_H_
#define SWGInline_response_200_6_H_

#include <QJsonObject>


#include "SWGTrackingReminder.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_6: public SWGObject {
public:
    SWGInline_response_200_6();
    SWGInline_response_200_6(QString* json);
    virtual ~SWGInline_response_200_6();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_6* fromJson(QString &jsonString);

    QList<SWGTrackingReminder*>* getData();
    void setData(QList<SWGTrackingReminder*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGTrackingReminder*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_6_H_ */
