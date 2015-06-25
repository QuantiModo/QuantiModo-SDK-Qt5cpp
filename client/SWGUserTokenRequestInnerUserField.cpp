
#include "SWGUserTokenRequestInnerUserField.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserTokenRequestInnerUserField::SWGUserTokenRequestInnerUserField(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserTokenRequestInnerUserField::SWGUserTokenRequestInnerUserField() {
    init();
}

SWGUserTokenRequestInnerUserField::~SWGUserTokenRequestInnerUserField() {
    this->cleanup();
}

void
SWGUserTokenRequestInnerUserField::init() {
    _id = 0;
    
}

void
SWGUserTokenRequestInnerUserField::cleanup() {
    
    
}

SWGUserTokenRequestInnerUserField*
SWGUserTokenRequestInnerUserField::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserTokenRequestInnerUserField::fromJsonObject(QJsonObject &pJson) {
    setValue(&_id, pJson["_id"], "qint32", "");
    
}

QString
SWGUserTokenRequestInnerUserField::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserTokenRequestInnerUserField::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("_id", QJsonValue(_id));
    

    return obj;
}

qint32
SWGUserTokenRequestInnerUserField::getId() {
    return _id;
}
void
SWGUserTokenRequestInnerUserField::setId(qint32 _id) {
    this->_id = _id;
}



} /* namespace Swagger */

