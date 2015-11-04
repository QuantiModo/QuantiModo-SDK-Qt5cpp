/*
 * SWGInline_response_200_18.h
 * 
 * 
 */

#ifndef SWGInline_response_200_18_H_
#define SWGInline_response_200_18_H_

#include <QJsonObject>


#include "SWGUnit.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_18: public SWGObject {
public:
    SWGInline_response_200_18();
    SWGInline_response_200_18(QString* json);
    virtual ~SWGInline_response_200_18();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_18* fromJson(QString &jsonString);

    SWGUnit* getData();
    void setData(SWGUnit* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGUnit* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_18_H_ */
