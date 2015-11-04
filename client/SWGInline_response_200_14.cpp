
#include "SWGInline_response_200_14.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_14::SWGInline_response_200_14(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_14::SWGInline_response_200_14() {
    init();
}

SWGInline_response_200_14::~SWGInline_response_200_14() {
    this->cleanup();
}

void
SWGInline_response_200_14::init() {
    data = new SWGSource();
    success = false;
    
}

void
SWGInline_response_200_14::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_14*
SWGInline_response_200_14::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_14::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGSource", "SWGSource");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_14::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_14::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGSource"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGSource*
SWGInline_response_200_14::getData() {
    return data;
}
void
SWGInline_response_200_14::setData(SWGSource* data) {
    this->data = data;
}

bool
SWGInline_response_200_14::getSuccess() {
    return success;
}
void
SWGInline_response_200_14::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

