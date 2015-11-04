/*
 * SWGInline_response_200_17.h
 * 
 * 
 */

#ifndef SWGInline_response_200_17_H_
#define SWGInline_response_200_17_H_

#include <QJsonObject>


#include <QList>
#include "SWGUnit.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_17: public SWGObject {
public:
    SWGInline_response_200_17();
    SWGInline_response_200_17(QString* json);
    virtual ~SWGInline_response_200_17();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_17* fromJson(QString &jsonString);

    QList<SWGUnit*>* getData();
    void setData(QList<SWGUnit*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGUnit*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_17_H_ */
