/*
 * SWGInline_response_200_23.h
 * 
 * 
 */

#ifndef SWGInline_response_200_23_H_
#define SWGInline_response_200_23_H_

#include <QJsonObject>


#include "SWGTrackingReminder.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_23: public SWGObject {
public:
    SWGInline_response_200_23();
    SWGInline_response_200_23(QString* json);
    virtual ~SWGInline_response_200_23();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_23* fromJson(QString &jsonString);

    SWGTrackingReminder* getData();
    void setData(SWGTrackingReminder* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGTrackingReminder* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_23_H_ */
