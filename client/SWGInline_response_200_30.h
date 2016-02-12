/*
 * SWGInline_response_200_30.h
 * 
 * 
 */

#ifndef SWGInline_response_200_30_H_
#define SWGInline_response_200_30_H_

#include <QJsonObject>


#include "SWGUserVariable.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_30: public SWGObject {
public:
    SWGInline_response_200_30();
    SWGInline_response_200_30(QString* json);
    virtual ~SWGInline_response_200_30();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_30* fromJson(QString &jsonString);

    SWGUserVariable* getData();
    void setData(SWGUserVariable* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGUserVariable* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_30_H_ */
