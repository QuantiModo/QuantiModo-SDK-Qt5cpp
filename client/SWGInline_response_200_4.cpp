
#include "SWGInline_response_200_4.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_4::SWGInline_response_200_4(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_4::SWGInline_response_200_4() {
    init();
}

SWGInline_response_200_4::~SWGInline_response_200_4() {
    this->cleanup();
}

void
SWGInline_response_200_4::init() {
    data = new SWGConnection();
    success = false;
    
}

void
SWGInline_response_200_4::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_4*
SWGInline_response_200_4::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_4::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGConnection", "SWGConnection");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_4::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_4::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGConnection"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGConnection*
SWGInline_response_200_4::getData() {
    return data;
}
void
SWGInline_response_200_4::setData(SWGConnection* data) {
    this->data = data;
}

bool
SWGInline_response_200_4::getSuccess() {
    return success;
}
void
SWGInline_response_200_4::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

