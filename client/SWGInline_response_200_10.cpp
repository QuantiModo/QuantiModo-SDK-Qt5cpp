
#include "SWGInline_response_200_10.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_10::SWGInline_response_200_10(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_10::SWGInline_response_200_10() {
    init();
}

SWGInline_response_200_10::~SWGInline_response_200_10() {
    this->cleanup();
}

void
SWGInline_response_200_10::init() {
    data = new SWGCredential();
    success = false;
    
}

void
SWGInline_response_200_10::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_10*
SWGInline_response_200_10::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_10::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGCredential", "SWGCredential");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_10::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_10::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGCredential"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGCredential*
SWGInline_response_200_10::getData() {
    return data;
}
void
SWGInline_response_200_10::setData(SWGCredential* data) {
    this->data = data;
}

bool
SWGInline_response_200_10::getSuccess() {
    return success;
}
void
SWGInline_response_200_10::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

