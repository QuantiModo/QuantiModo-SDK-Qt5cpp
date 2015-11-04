
#include "SWGInline_response_200_24.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_24::SWGInline_response_200_24(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_24::SWGInline_response_200_24() {
    init();
}

SWGInline_response_200_24::~SWGInline_response_200_24() {
    this->cleanup();
}

void
SWGInline_response_200_24::init() {
    data = new SWGVariableCategory();
    success = false;
    
}

void
SWGInline_response_200_24::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_24*
SWGInline_response_200_24::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_24::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGVariableCategory", "SWGVariableCategory");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_24::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_24::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGVariableCategory"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGVariableCategory*
SWGInline_response_200_24::getData() {
    return data;
}
void
SWGInline_response_200_24::setData(SWGVariableCategory* data) {
    this->data = data;
}

bool
SWGInline_response_200_24::getSuccess() {
    return success;
}
void
SWGInline_response_200_24::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

