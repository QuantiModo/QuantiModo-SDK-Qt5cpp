/*
 * SWGInline_response_200_5.h
 * 
 * 
 */

#ifndef SWGInline_response_200_5_H_
#define SWGInline_response_200_5_H_

#include <QJsonObject>


#include "SWGMeasurement.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_5: public SWGObject {
public:
    SWGInline_response_200_5();
    SWGInline_response_200_5(QString* json);
    virtual ~SWGInline_response_200_5();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_5* fromJson(QString &jsonString);

    QList<SWGMeasurement*>* getData();
    void setData(QList<SWGMeasurement*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGMeasurement*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_5_H_ */
