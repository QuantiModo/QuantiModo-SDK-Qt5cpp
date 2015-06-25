
#include "SWGUserTokenRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserTokenRequest::SWGUserTokenRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserTokenRequest::SWGUserTokenRequest() {
    init();
}

SWGUserTokenRequest::~SWGUserTokenRequest() {
    this->cleanup();
}

void
SWGUserTokenRequest::init() {
    user = new SWGUserTokenRequestInnerUserField();
    organization_access_token = new QString("");
    
}

void
SWGUserTokenRequest::cleanup() {
    if(user != NULL) {
        delete user;
    }
    if(organization_access_token != NULL) {
        delete organization_access_token;
    }
    
}

SWGUserTokenRequest*
SWGUserTokenRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserTokenRequest::fromJsonObject(QJsonObject &pJson) {
    setValue(&user, pJson["user"], "SWGUserTokenRequestInnerUserField", "SWGUserTokenRequestInnerUserField");
    setValue(&organization_access_token, pJson["organization_access_token"], "QString", "QString");
    
}

QString
SWGUserTokenRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserTokenRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("user"), user, obj, QString("SWGUserTokenRequestInnerUserField"));
    
    
    
    
    
    toJsonValue(QString("organization_access_token"), organization_access_token, obj, QString("QString"));
    
    
    
    

    return obj;
}

SWGUserTokenRequestInnerUserField*
SWGUserTokenRequest::getUser() {
    return user;
}
void
SWGUserTokenRequest::setUser(SWGUserTokenRequestInnerUserField* user) {
    this->user = user;
}

QString*
SWGUserTokenRequest::getOrganizationAccessToken() {
    return organization_access_token;
}
void
SWGUserTokenRequest::setOrganizationAccessToken(QString* organization_access_token) {
    this->organization_access_token = organization_access_token;
}



} /* namespace Swagger */

