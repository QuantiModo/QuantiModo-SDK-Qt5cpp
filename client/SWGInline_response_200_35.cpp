
#include "SWGInline_response_200_35.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_35::SWGInline_response_200_35(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_35::SWGInline_response_200_35() {
    init();
}

SWGInline_response_200_35::~SWGInline_response_200_35() {
    this->cleanup();
}

void
SWGInline_response_200_35::init() {
    data = new SWGVariable();
    success = false;
    
}

void
SWGInline_response_200_35::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_35*
SWGInline_response_200_35::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_35::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGVariable", "SWGVariable");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_35::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_35::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGVariable"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGVariable*
SWGInline_response_200_35::getData() {
    return data;
}
void
SWGInline_response_200_35::setData(SWGVariable* data) {
    this->data = data;
}

bool
SWGInline_response_200_35::getSuccess() {
    return success;
}
void
SWGInline_response_200_35::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

