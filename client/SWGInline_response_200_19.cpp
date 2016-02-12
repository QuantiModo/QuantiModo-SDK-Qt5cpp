
#include "SWGInline_response_200_19.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_19::SWGInline_response_200_19(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_19::SWGInline_response_200_19() {
    init();
}

SWGInline_response_200_19::~SWGInline_response_200_19() {
    this->cleanup();
}

void
SWGInline_response_200_19::init() {
    data = new SWGCredential();
    success = false;
    
}

void
SWGInline_response_200_19::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_19*
SWGInline_response_200_19::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_19::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGCredential", "SWGCredential");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_19::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_19::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGCredential"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGCredential*
SWGInline_response_200_19::getData() {
    return data;
}
void
SWGInline_response_200_19::setData(SWGCredential* data) {
    this->data = data;
}

bool
SWGInline_response_200_19::getSuccess() {
    return success;
}
void
SWGInline_response_200_19::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

