/*
 * SWGInline_response_200_4.h
 * 
 * 
 */

#ifndef SWGInline_response_200_4_H_
#define SWGInline_response_200_4_H_

#include <QJsonObject>


#include "SWGConnection.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_4: public SWGObject {
public:
    SWGInline_response_200_4();
    SWGInline_response_200_4(QString* json);
    virtual ~SWGInline_response_200_4();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_4* fromJson(QString &jsonString);

    SWGConnection* getData();
    void setData(SWGConnection* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGConnection* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_4_H_ */
