/*
 * SWGInline_response_200_12.h
 * 
 * 
 */

#ifndef SWGInline_response_200_12_H_
#define SWGInline_response_200_12_H_

#include <QJsonObject>


#include "SWGMeasurement.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_12: public SWGObject {
public:
    SWGInline_response_200_12();
    SWGInline_response_200_12(QString* json);
    virtual ~SWGInline_response_200_12();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_12* fromJson(QString &jsonString);

    SWGMeasurement* getData();
    void setData(SWGMeasurement* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGMeasurement* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_12_H_ */
