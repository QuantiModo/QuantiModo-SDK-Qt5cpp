/*
 * SWGUserTokenRequest.h
 * 
 * 
 */

#ifndef SWGUserTokenRequest_H_
#define SWGUserTokenRequest_H_

#include <QJsonObject>


#include <QString>
#include "SWGUserTokenRequestInnerUserField.h"

#include "SWGObject.h"


namespace Swagger {

class SWGUserTokenRequest: public SWGObject {
public:
    SWGUserTokenRequest();
    SWGUserTokenRequest(QString* json);
    virtual ~SWGUserTokenRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserTokenRequest* fromJson(QString &jsonString);

    SWGUserTokenRequestInnerUserField* getUser();
    void setUser(SWGUserTokenRequestInnerUserField* user);
    QString* getOrganizationAccessToken();
    void setOrganizationAccessToken(QString* organization_access_token);
    

private:
    SWGUserTokenRequestInnerUserField* user;
    QString* organization_access_token;
    
};

} /* namespace Swagger */

#endif /* SWGUserTokenRequest_H_ */
