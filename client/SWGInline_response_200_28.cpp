
#include "SWGInline_response_200_28.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_28::SWGInline_response_200_28(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_28::SWGInline_response_200_28() {
    init();
}

SWGInline_response_200_28::~SWGInline_response_200_28() {
    this->cleanup();
}

void
SWGInline_response_200_28::init() {
    data = new SWGUpdate();
    success = false;
    
}

void
SWGInline_response_200_28::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_28*
SWGInline_response_200_28::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_28::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGUpdate", "SWGUpdate");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_28::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_28::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGUpdate"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGUpdate*
SWGInline_response_200_28::getData() {
    return data;
}
void
SWGInline_response_200_28::setData(SWGUpdate* data) {
    this->data = data;
}

bool
SWGInline_response_200_28::getSuccess() {
    return success;
}
void
SWGInline_response_200_28::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

