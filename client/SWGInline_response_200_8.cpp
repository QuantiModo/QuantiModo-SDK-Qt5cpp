
#include "SWGInline_response_200_8.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_8::SWGInline_response_200_8(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_8::SWGInline_response_200_8() {
    init();
}

SWGInline_response_200_8::~SWGInline_response_200_8() {
    this->cleanup();
}

void
SWGInline_response_200_8::init() {
    data = new QList<SWGUserVariableRelationship*>();
    success = false;
    
}

void
SWGInline_response_200_8::cleanup() {
    if(data != NULL) {
        QList<SWGUserVariableRelationship*>* arr = data;
        foreach(SWGUserVariableRelationship* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_8*
SWGInline_response_200_8::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_8::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGUserVariableRelationship");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_8::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_8::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGUserVariableRelationship*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGUserVariableRelationship");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGUserVariableRelationship*>*
SWGInline_response_200_8::getData() {
    return data;
}
void
SWGInline_response_200_8::setData(QList<SWGUserVariableRelationship*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_8::getSuccess() {
    return success;
}
void
SWGInline_response_200_8::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

