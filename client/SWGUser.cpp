
#include "SWGUser.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUser::SWGUser(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUser::SWGUser() {
    init();
}

SWGUser::~SWGUser() {
    this->cleanup();
}

void
SWGUser::init() {
    id = NULL;
    wpId = NULL;
    displayName = new QString("");
    loginName = new QString("");
    email = new QString("");
    token = new QString("");
    administrator = false;
    
}

void
SWGUser::cleanup() {
    
    
    if(displayName != NULL) {
        delete displayName;
    }
    if(loginName != NULL) {
        delete loginName;
    }
    if(email != NULL) {
        delete email;
    }
    if(token != NULL) {
        delete token;
    }
    
    
}

SWGUser*
SWGUser::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUser::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&wpId, pJson["wpId"], "qint32", "");
    setValue(&displayName, pJson["displayName"], "QString", "QString");
    setValue(&loginName, pJson["loginName"], "QString", "QString");
    setValue(&email, pJson["email"], "QString", "QString");
    setValue(&token, pJson["token"], "QString", "QString");
    setValue(&administrator, pJson["administrator"], "bool", "");
    
}

QString
SWGUser::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUser::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    obj->insert("wpId", QJsonValue(wpId));
    
    
    toJsonValue(QString("displayName"), displayName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("loginName"), loginName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("email"), email, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("token"), token, obj, QString("QString"));
    
    
    
    obj->insert("administrator", QJsonValue(administrator));
    

    return obj;
}

qint32
SWGUser::getId() {
    return id;
}
void
SWGUser::setId(qint32 id) {
    this->id = id;
}

qint32
SWGUser::getWpId() {
    return wpId;
}
void
SWGUser::setWpId(qint32 wpId) {
    this->wpId = wpId;
}

QString*
SWGUser::getDisplayName() {
    return displayName;
}
void
SWGUser::setDisplayName(QString* displayName) {
    this->displayName = displayName;
}

QString*
SWGUser::getLoginName() {
    return loginName;
}
void
SWGUser::setLoginName(QString* loginName) {
    this->loginName = loginName;
}

QString*
SWGUser::getEmail() {
    return email;
}
void
SWGUser::setEmail(QString* email) {
    this->email = email;
}

QString*
SWGUser::getToken() {
    return token;
}
void
SWGUser::setToken(QString* token) {
    this->token = token;
}

bool
SWGUser::getAdministrator() {
    return administrator;
}
void
SWGUser::setAdministrator(bool administrator) {
    this->administrator = administrator;
}



} /* namespace Swagger */

