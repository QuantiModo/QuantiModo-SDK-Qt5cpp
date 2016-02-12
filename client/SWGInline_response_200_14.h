/*
 * SWGInline_response_200_14.h
 * 
 * 
 */

#ifndef SWGInline_response_200_14_H_
#define SWGInline_response_200_14_H_

#include <QJsonObject>


#include "SWGConnection.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_14: public SWGObject {
public:
    SWGInline_response_200_14();
    SWGInline_response_200_14(QString* json);
    virtual ~SWGInline_response_200_14();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_14* fromJson(QString &jsonString);

    SWGConnection* getData();
    void setData(SWGConnection* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGConnection* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_14_H_ */
