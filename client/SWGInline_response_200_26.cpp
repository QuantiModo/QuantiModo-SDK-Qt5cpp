
#include "SWGInline_response_200_26.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_26::SWGInline_response_200_26(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_26::SWGInline_response_200_26() {
    init();
}

SWGInline_response_200_26::~SWGInline_response_200_26() {
    this->cleanup();
}

void
SWGInline_response_200_26::init() {
    data = new SWGVariableUserSource();
    success = false;
    
}

void
SWGInline_response_200_26::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_26*
SWGInline_response_200_26::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_26::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGVariableUserSource", "SWGVariableUserSource");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_26::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_26::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGVariableUserSource"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGVariableUserSource*
SWGInline_response_200_26::getData() {
    return data;
}
void
SWGInline_response_200_26::setData(SWGVariableUserSource* data) {
    this->data = data;
}

bool
SWGInline_response_200_26::getSuccess() {
    return success;
}
void
SWGInline_response_200_26::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

