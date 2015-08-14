/*
 * SWGCommonResponse.h
 * 
 * 
 */

#ifndef SWGCommonResponse_H_
#define SWGCommonResponse_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCommonResponse: public SWGObject {
public:
    SWGCommonResponse();
    SWGCommonResponse(QString* json);
    virtual ~SWGCommonResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCommonResponse* fromJson(QString &jsonString);

    qint32 getStatus();
    void setStatus(qint32 status);
    QString* getMessage();
    void setMessage(QString* message);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    qint32 status;
    QString* message;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGCommonResponse_H_ */
