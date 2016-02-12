/*
 * SWGInline_response_200_26.h
 * 
 * 
 */

#ifndef SWGInline_response_200_26_H_
#define SWGInline_response_200_26_H_

#include <QJsonObject>


#include "SWGUnit.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_26: public SWGObject {
public:
    SWGInline_response_200_26();
    SWGInline_response_200_26(QString* json);
    virtual ~SWGInline_response_200_26();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_26* fromJson(QString &jsonString);

    QList<SWGUnit*>* getData();
    void setData(QList<SWGUnit*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGUnit*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_26_H_ */
