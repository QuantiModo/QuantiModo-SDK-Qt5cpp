/*
 * SWGInline_response_200_22.h
 * 
 * 
 */

#ifndef SWGInline_response_200_22_H_
#define SWGInline_response_200_22_H_

#include <QJsonObject>


#include "SWGSource.h"

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

    SWGSource* getData();
    void setData(SWGSource* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGSource* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_22_H_ */
