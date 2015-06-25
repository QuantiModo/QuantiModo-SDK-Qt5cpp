/*
 * SWGUserTokenSuccessfulResponse.h
 * 
 * 
 */

#ifndef SWGUserTokenSuccessfulResponse_H_
#define SWGUserTokenSuccessfulResponse_H_

#include <QJsonObject>


#include <QString>
#include "SWGUserTokenSuccessfulResponseInnerUserField.h"

#include "SWGObject.h"


namespace Swagger {

class SWGUserTokenSuccessfulResponse: public SWGObject {
public:
    SWGUserTokenSuccessfulResponse();
    SWGUserTokenSuccessfulResponse(QString* json);
    virtual ~SWGUserTokenSuccessfulResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserTokenSuccessfulResponse* fromJson(QString &jsonString);

    qint32 getCode();
    void setCode(qint32 code);
    QString* getMessage();
    void setMessage(QString* message);
    SWGUserTokenSuccessfulResponseInnerUserField* getUser();
    void setUser(SWGUserTokenSuccessfulResponseInnerUserField* user);
    

private:
    qint32 code;
    QString* message;
    SWGUserTokenSuccessfulResponseInnerUserField* user;
    
};

} /* namespace Swagger */

#endif /* SWGUserTokenSuccessfulResponse_H_ */
