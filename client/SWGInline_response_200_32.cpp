
#include "SWGInline_response_200_32.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_32::SWGInline_response_200_32(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_32::SWGInline_response_200_32() {
    init();
}

SWGInline_response_200_32::~SWGInline_response_200_32() {
    this->cleanup();
}

void
SWGInline_response_200_32::init() {
    data = new SWGVariableCategory();
    success = false;
    
}

void
SWGInline_response_200_32::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_32*
SWGInline_response_200_32::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_32::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGVariableCategory", "SWGVariableCategory");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_32::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_32::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGVariableCategory"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGVariableCategory*
SWGInline_response_200_32::getData() {
    return data;
}
void
SWGInline_response_200_32::setData(SWGVariableCategory* data) {
    this->data = data;
}

bool
SWGInline_response_200_32::getSuccess() {
    return success;
}
void
SWGInline_response_200_32::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

