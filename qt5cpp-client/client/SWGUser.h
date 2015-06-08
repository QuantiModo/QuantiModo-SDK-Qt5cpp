/*
 * SWGUser.h
 * 
 * 
 */

#ifndef SWGUser_H_
#define SWGUser_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUser: public SWGObject {
public:
    SWGUser();
    SWGUser(QString* json);
    virtual ~SWGUser();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUser* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    qint32 getWpId();
    void setWpId(qint32 wpId);
    QString* getDisplayName();
    void setDisplayName(QString* displayName);
    QString* getLoginName();
    void setLoginName(QString* loginName);
    QString* getEmail();
    void setEmail(QString* email);
    QString* getToken();
    void setToken(QString* token);
    bool getAdministrator();
    void setAdministrator(bool administrator);
    

private:
    qint32 id;
    qint32 wpId;
    QString* displayName;
    QString* loginName;
    QString* email;
    QString* token;
    bool administrator;
    
};

} /* namespace Swagger */

#endif /* SWGUser_H_ */
