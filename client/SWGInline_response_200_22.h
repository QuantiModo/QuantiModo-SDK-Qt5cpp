/*
 * SWGInline_response_200_22.h
 * 
 * 
 */

#ifndef SWGInline_response_200_22_H_
#define SWGInline_response_200_22_H_

#include <QJsonObject>


#include "SWGUserVariable.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_22: public SWGObject {
public:
    SWGInline_response_200_22();
    SWGInline_response_200_22(QString* json);
    virtual ~SWGInline_response_200_22();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_22* fromJson(QString &jsonString);

    SWGUserVariable* getData();
    void setData(SWGUserVariable* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGUserVariable* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_22_H_ */
