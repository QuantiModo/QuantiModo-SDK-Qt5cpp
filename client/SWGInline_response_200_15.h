/*
 * SWGInline_response_200_15.h
 * 
 * 
 */

#ifndef SWGInline_response_200_15_H_
#define SWGInline_response_200_15_H_

#include <QJsonObject>


#include "SWGConnector.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_15: public SWGObject {
public:
    SWGInline_response_200_15();
    SWGInline_response_200_15(QString* json);
    virtual ~SWGInline_response_200_15();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_15* fromJson(QString &jsonString);

    QList<SWGConnector*>* getData();
    void setData(QList<SWGConnector*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGConnector*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_15_H_ */
