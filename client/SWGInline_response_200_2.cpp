
#include "SWGInline_response_200_2.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_2::SWGInline_response_200_2(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_2::SWGInline_response_200_2() {
    init();
}

SWGInline_response_200_2::~SWGInline_response_200_2() {
    this->cleanup();
}

void
SWGInline_response_200_2::init() {
    data = new QString("");
    success = false;
    
}

void
SWGInline_response_200_2::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_2*
SWGInline_response_200_2::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_2::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QString", "QString");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_2::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_2::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("QString"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QString*
SWGInline_response_200_2::getData() {
    return data;
}
void
SWGInline_response_200_2::setData(QString* data) {
    this->data = data;
}

bool
SWGInline_response_200_2::getSuccess() {
    return success;
}
void
SWGInline_response_200_2::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

