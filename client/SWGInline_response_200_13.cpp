
#include "SWGInline_response_200_13.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_13::SWGInline_response_200_13(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_13::SWGInline_response_200_13() {
    init();
}

SWGInline_response_200_13::~SWGInline_response_200_13() {
    this->cleanup();
}

void
SWGInline_response_200_13::init() {
    data = new SWGCommonVariableRelationship();
    success = false;
    
}

void
SWGInline_response_200_13::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_13*
SWGInline_response_200_13::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_13::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGCommonVariableRelationship", "SWGCommonVariableRelationship");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_13::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_13::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGCommonVariableRelationship"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGCommonVariableRelationship*
SWGInline_response_200_13::getData() {
    return data;
}
void
SWGInline_response_200_13::setData(SWGCommonVariableRelationship* data) {
    this->data = data;
}

bool
SWGInline_response_200_13::getSuccess() {
    return success;
}
void
SWGInline_response_200_13::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

