/*
 * SWGInline_response_200_28.h
 * 
 * 
 */

#ifndef SWGInline_response_200_28_H_
#define SWGInline_response_200_28_H_

#include <QJsonObject>


#include "SWGVariable.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_28: public SWGObject {
public:
    SWGInline_response_200_28();
    SWGInline_response_200_28(QString* json);
    virtual ~SWGInline_response_200_28();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_28* fromJson(QString &jsonString);

    SWGVariable* getData();
    void setData(SWGVariable* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGVariable* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_28_H_ */
