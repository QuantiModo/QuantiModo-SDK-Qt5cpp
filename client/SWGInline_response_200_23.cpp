
#include "SWGInline_response_200_23.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_23::SWGInline_response_200_23(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_23::SWGInline_response_200_23() {
    init();
}

SWGInline_response_200_23::~SWGInline_response_200_23() {
    this->cleanup();
}

void
SWGInline_response_200_23::init() {
    data = new SWGTrackingReminder();
    success = false;
    
}

void
SWGInline_response_200_23::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_23*
SWGInline_response_200_23::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_23::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGTrackingReminder", "SWGTrackingReminder");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_23::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_23::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGTrackingReminder"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGTrackingReminder*
SWGInline_response_200_23::getData() {
    return data;
}
void
SWGInline_response_200_23::setData(SWGTrackingReminder* data) {
    this->data = data;
}

bool
SWGInline_response_200_23::getSuccess() {
    return success;
}
void
SWGInline_response_200_23::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

