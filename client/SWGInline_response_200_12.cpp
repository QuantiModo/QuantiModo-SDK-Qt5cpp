
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
    data = new QList<SWGCommonVariableRelationship*>();
    success = false;
    
}

void
SWGInline_response_200_12::cleanup() {
    if(data != NULL) {
        QList<SWGCommonVariableRelationship*>* arr = data;
        foreach(SWGCommonVariableRelationship* o, *arr) {
            delete o;
        }
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
    setValue(&data, pJson["data"], "QList", "SWGCommonVariableRelationship");
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
    
    
    QList<SWGCommonVariableRelationship*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGCommonVariableRelationship");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGCommonVariableRelationship*>*
SWGInline_response_200_12::getData() {
    return data;
}
void
SWGInline_response_200_12::setData(QList<SWGCommonVariableRelationship*>* data) {
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

