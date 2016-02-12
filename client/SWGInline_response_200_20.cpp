
#include "SWGInline_response_200_20.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_20::SWGInline_response_200_20(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_20::SWGInline_response_200_20() {
    init();
}

SWGInline_response_200_20::~SWGInline_response_200_20() {
    this->cleanup();
}

void
SWGInline_response_200_20::init() {
    data = new SWGMeasurement();
    success = false;
    
}

void
SWGInline_response_200_20::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_20*
SWGInline_response_200_20::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_20::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGMeasurement", "SWGMeasurement");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_20::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_20::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGMeasurement"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGMeasurement*
SWGInline_response_200_20::getData() {
    return data;
}
void
SWGInline_response_200_20::setData(SWGMeasurement* data) {
    this->data = data;
}

bool
SWGInline_response_200_20::getSuccess() {
    return success;
}
void
SWGInline_response_200_20::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

