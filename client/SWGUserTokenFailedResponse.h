/*
 * SWGUserTokenFailedResponse.h
 * 
 * 
 */

#ifndef SWGUserTokenFailedResponse_H_
#define SWGUserTokenFailedResponse_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserTokenFailedResponse: public SWGObject {
public:
    SWGUserTokenFailedResponse();
    SWGUserTokenFailedResponse(QString* json);
    virtual ~SWGUserTokenFailedResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserTokenFailedResponse* fromJson(QString &jsonString);

    qint32 getCode();
    void setCode(qint32 code);
    QString* getMessage();
    void setMessage(QString* message);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    qint32 code;
    QString* message;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGUserTokenFailedResponse_H_ */
