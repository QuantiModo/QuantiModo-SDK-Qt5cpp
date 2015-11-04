
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
    data = new QList<SWGSource*>();
    success = false;
    
}

void
SWGInline_response_200_13::cleanup() {
    if(data != NULL) {
        QList<SWGSource*>* arr = data;
        foreach(SWGSource* o, *arr) {
            delete o;
        }
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
    setValue(&data, pJson["data"], "QList", "SWGSource");
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
    
    
    QList<SWGSource*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGSource");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGSource*>*
SWGInline_response_200_13::getData() {
    return data;
}
void
SWGInline_response_200_13::setData(QList<SWGSource*>* data) {
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

