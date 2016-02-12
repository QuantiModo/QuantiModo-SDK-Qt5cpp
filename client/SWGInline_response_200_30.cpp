
#include "SWGInline_response_200_30.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_30::SWGInline_response_200_30(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_30::SWGInline_response_200_30() {
    init();
}

SWGInline_response_200_30::~SWGInline_response_200_30() {
    this->cleanup();
}

void
SWGInline_response_200_30::init() {
    data = new SWGUserVariable();
    success = false;
    
}

void
SWGInline_response_200_30::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_30*
SWGInline_response_200_30::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_30::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGUserVariable", "SWGUserVariable");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_30::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_30::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGUserVariable"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGUserVariable*
SWGInline_response_200_30::getData() {
    return data;
}
void
SWGInline_response_200_30::setData(SWGUserVariable* data) {
    this->data = data;
}

bool
SWGInline_response_200_30::getSuccess() {
    return success;
}
void
SWGInline_response_200_30::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

