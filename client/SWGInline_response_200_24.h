/*
 * SWGInline_response_200_24.h
 * 
 * 
 */

#ifndef SWGInline_response_200_24_H_
#define SWGInline_response_200_24_H_

#include <QJsonObject>


#include "SWGVariableCategory.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_24: public SWGObject {
public:
    SWGInline_response_200_24();
    SWGInline_response_200_24(QString* json);
    virtual ~SWGInline_response_200_24();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_24* fromJson(QString &jsonString);

    SWGVariableCategory* getData();
    void setData(SWGVariableCategory* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGVariableCategory* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_24_H_ */
