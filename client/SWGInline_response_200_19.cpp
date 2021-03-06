
#include "SWGInline_response_200_19.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_19::SWGInline_response_200_19(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_19::SWGInline_response_200_19() {
    init();
}

SWGInline_response_200_19::~SWGInline_response_200_19() {
    this->cleanup();
}

void
SWGInline_response_200_19::init() {
    data = new QList<SWGUpdate*>();
    success = false;
    
}

void
SWGInline_response_200_19::cleanup() {
    if(data != NULL) {
        QList<SWGUpdate*>* arr = data;
        foreach(SWGUpdate* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_19*
SWGInline_response_200_19::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_19::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGUpdate");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_19::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_19::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGUpdate*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGUpdate");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGUpdate*>*
SWGInline_response_200_19::getData() {
    return data;
}
void
SWGInline_response_200_19::setData(QList<SWGUpdate*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_19::getSuccess() {
    return success;
}
void
SWGInline_response_200_19::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

