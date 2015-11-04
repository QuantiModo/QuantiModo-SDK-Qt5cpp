/*
 * SWGInline_response_200_20.h
 * 
 * 
 */

#ifndef SWGInline_response_200_20_H_
#define SWGInline_response_200_20_H_

#include <QJsonObject>


#include "SWGUpdate.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_20: public SWGObject {
public:
    SWGInline_response_200_20();
    SWGInline_response_200_20(QString* json);
    virtual ~SWGInline_response_200_20();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_20* fromJson(QString &jsonString);

    SWGUpdate* getData();
    void setData(SWGUpdate* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGUpdate* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_20_H_ */
