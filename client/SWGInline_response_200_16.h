/*
 * SWGInline_response_200_16.h
 * 
 * 
 */

#ifndef SWGInline_response_200_16_H_
#define SWGInline_response_200_16_H_

#include <QJsonObject>


#include "SWGConnector.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_16: public SWGObject {
public:
    SWGInline_response_200_16();
    SWGInline_response_200_16(QString* json);
    virtual ~SWGInline_response_200_16();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_16* fromJson(QString &jsonString);

    SWGConnector* getData();
    void setData(SWGConnector* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGConnector* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_16_H_ */
