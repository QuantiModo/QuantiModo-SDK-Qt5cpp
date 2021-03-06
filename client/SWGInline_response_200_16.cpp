
#include "SWGInline_response_200_16.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_16::SWGInline_response_200_16(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_16::SWGInline_response_200_16() {
    init();
}

SWGInline_response_200_16::~SWGInline_response_200_16() {
    this->cleanup();
}

void
SWGInline_response_200_16::init() {
    data = new SWGUnitCategory();
    success = false;
    
}

void
SWGInline_response_200_16::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_16*
SWGInline_response_200_16::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_16::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGUnitCategory", "SWGUnitCategory");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_16::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_16::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGUnitCategory"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGUnitCategory*
SWGInline_response_200_16::getData() {
    return data;
}
void
SWGInline_response_200_16::setData(SWGUnitCategory* data) {
    this->data = data;
}

bool
SWGInline_response_200_16::getSuccess() {
    return success;
}
void
SWGInline_response_200_16::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

