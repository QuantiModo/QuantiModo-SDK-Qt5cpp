
#include "SWGInline_response_200_12.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_12::SWGInline_response_200_12(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_12::SWGInline_response_200_12() {
    init();
}

SWGInline_response_200_12::~SWGInline_response_200_12() {
    this->cleanup();
}

void
SWGInline_response_200_12::init() {
    data = new SWGMeasurement();
    success = false;
    
}

void
SWGInline_response_200_12::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_12*
SWGInline_response_200_12::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_12::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGMeasurement", "SWGMeasurement");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_12::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_12::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGMeasurement"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGMeasurement*
SWGInline_response_200_12::getData() {
    return data;
}
void
SWGInline_response_200_12::setData(SWGMeasurement* data) {
    this->data = data;
}

bool
SWGInline_response_200_12::getSuccess() {
    return success;
}
void
SWGInline_response_200_12::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

