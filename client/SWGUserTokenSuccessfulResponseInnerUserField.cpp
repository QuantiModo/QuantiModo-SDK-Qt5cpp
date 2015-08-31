
#include "SWGUserTokenSuccessfulResponseInnerUserField.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserTokenSuccessfulResponseInnerUserField::SWGUserTokenSuccessfulResponseInnerUserField(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserTokenSuccessfulResponseInnerUserField::SWGUserTokenSuccessfulResponseInnerUserField() {
    init();
}

SWGUserTokenSuccessfulResponseInnerUserField::~SWGUserTokenSuccessfulResponseInnerUserField() {
    this->cleanup();
}

void
SWGUserTokenSuccessfulResponseInnerUserField::init() {
    _id = NULL;
    access_token = new QString("");
    
}

void
SWGUserTokenSuccessfulResponseInnerUserField::cleanup() {
    
    if(access_token != NULL) {
        delete access_token;
    }
    
}

SWGUserTokenSuccessfulResponseInnerUserField*
SWGUserTokenSuccessfulResponseInnerUserField::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserTokenSuccessfulResponseInnerUserField::fromJsonObject(QJsonObject &pJson) {
    setValue(&_id, pJson["_id"], "qint32", "");
    setValue(&access_token, pJson["access_token"], "QString", "QString");
    
}

QString
SWGUserTokenSuccessfulResponseInnerUserField::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserTokenSuccessfulResponseInnerUserField::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("_id", QJsonValue(_id));
    
    
    toJsonValue(QString("access_token"), access_token, obj, QString("QString"));
    
    
    
    

    return obj;
}

qint32
SWGUserTokenSuccessfulResponseInnerUserField::getId() {
    return _id;
}
void
SWGUserTokenSuccessfulResponseInnerUserField::setId(qint32 _id) {
    this->_id = _id;
}

QString*
SWGUserTokenSuccessfulResponseInnerUserField::getAccessToken() {
    return access_token;
}
void
SWGUserTokenSuccessfulResponseInnerUserField::setAccessToken(QString* access_token) {
    this->access_token = access_token;
}



} /* namespace Swagger */

