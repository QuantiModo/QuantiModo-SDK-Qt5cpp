/*
 * SWGInline_response_200_9.h
 * 
 * 
 */

#ifndef SWGInline_response_200_9_H_
#define SWGInline_response_200_9_H_

#include <QJsonObject>


#include <QList>
#include "SWGCredential.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_9: public SWGObject {
public:
    SWGInline_response_200_9();
    SWGInline_response_200_9(QString* json);
    virtual ~SWGInline_response_200_9();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_9* fromJson(QString &jsonString);

    QList<SWGCredential*>* getData();
    void setData(QList<SWGCredential*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGCredential*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_9_H_ */
