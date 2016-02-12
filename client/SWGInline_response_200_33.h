/*
 * SWGInline_response_200_33.h
 * 
 * 
 */

#ifndef SWGInline_response_200_33_H_
#define SWGInline_response_200_33_H_

#include <QJsonObject>


#include "SWGVariableUserSource.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_33: public SWGObject {
public:
    SWGInline_response_200_33();
    SWGInline_response_200_33(QString* json);
    virtual ~SWGInline_response_200_33();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_33* fromJson(QString &jsonString);

    SWGVariableUserSource* getData();
    void setData(SWGVariableUserSource* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGVariableUserSource* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_33_H_ */
