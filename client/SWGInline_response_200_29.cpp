
#include "SWGInline_response_200_29.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_29::SWGInline_response_200_29(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_29::SWGInline_response_200_29() {
    init();
}

SWGInline_response_200_29::~SWGInline_response_200_29() {
    this->cleanup();
}

void
SWGInline_response_200_29::init() {
    data = new SWGUserVariableRelationship();
    success = false;
    
}

void
SWGInline_response_200_29::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_29*
SWGInline_response_200_29::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_29::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGUserVariableRelationship", "SWGUserVariableRelationship");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_29::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_29::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGUserVariableRelationship"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGUserVariableRelationship*
SWGInline_response_200_29::getData() {
    return data;
}
void
SWGInline_response_200_29::setData(SWGUserVariableRelationship* data) {
    this->data = data;
}

bool
SWGInline_response_200_29::getSuccess() {
    return success;
}
void
SWGInline_response_200_29::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

