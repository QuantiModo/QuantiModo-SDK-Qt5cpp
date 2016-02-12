/*
 * SWGInline_response_200_19.h
 * 
 * 
 */

#ifndef SWGInline_response_200_19_H_
#define SWGInline_response_200_19_H_

#include <QJsonObject>


#include "SWGCredential.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_19: public SWGObject {
public:
    SWGInline_response_200_19();
    SWGInline_response_200_19(QString* json);
    virtual ~SWGInline_response_200_19();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_19* fromJson(QString &jsonString);

    SWGCredential* getData();
    void setData(SWGCredential* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGCredential* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_19_H_ */
