/*
 * SWGInline_response_200_5.h
 * 
 * 
 */

#ifndef SWGInline_response_200_5_H_
#define SWGInline_response_200_5_H_

#include <QJsonObject>


#include <QList>
#include "SWGConnector.h"

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

    QList<SWGConnector*>* getData();
    void setData(QList<SWGConnector*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGConnector*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_5_H_ */
