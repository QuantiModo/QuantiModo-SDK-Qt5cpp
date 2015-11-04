
#include "SWGInline_response_200_22.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_22::SWGInline_response_200_22(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_22::SWGInline_response_200_22() {
    init();
}

SWGInline_response_200_22::~SWGInline_response_200_22() {
    this->cleanup();
}

void
SWGInline_response_200_22::init() {
    data = new SWGUserVariable();
    success = false;
    
}

void
SWGInline_response_200_22::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_22*
SWGInline_response_200_22::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_22::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGUserVariable", "SWGUserVariable");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_22::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_22::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGUserVariable"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGUserVariable*
SWGInline_response_200_22::getData() {
    return data;
}
void
SWGInline_response_200_22::setData(SWGUserVariable* data) {
    this->data = data;
}

bool
SWGInline_response_200_22::getSuccess() {
    return success;
}
void
SWGInline_response_200_22::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

