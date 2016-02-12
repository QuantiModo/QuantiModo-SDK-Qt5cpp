/*
 * SWGInline_response_200_34.h
 * 
 * 
 */

#ifndef SWGInline_response_200_34_H_
#define SWGInline_response_200_34_H_

#include <QJsonObject>


#include "SWGVariable.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_34: public SWGObject {
public:
    SWGInline_response_200_34();
    SWGInline_response_200_34(QString* json);
    virtual ~SWGInline_response_200_34();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_34* fromJson(QString &jsonString);

    QList<SWGVariable*>* getData();
    void setData(QList<SWGVariable*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGVariable*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_34_H_ */
