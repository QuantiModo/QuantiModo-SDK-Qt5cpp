
#include "SWGInline_response_200_6.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_6::SWGInline_response_200_6(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_6::SWGInline_response_200_6() {
    init();
}

SWGInline_response_200_6::~SWGInline_response_200_6() {
    this->cleanup();
}

void
SWGInline_response_200_6::init() {
    data = new QList<SWGTrackingReminder*>();
    success = false;
    
}

void
SWGInline_response_200_6::cleanup() {
    if(data != NULL) {
        QList<SWGTrackingReminder*>* arr = data;
        foreach(SWGTrackingReminder* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_6*
SWGInline_response_200_6::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_6::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGTrackingReminder");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_6::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_6::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGTrackingReminder*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGTrackingReminder");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGTrackingReminder*>*
SWGInline_response_200_6::getData() {
    return data;
}
void
SWGInline_response_200_6::setData(QList<SWGTrackingReminder*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_6::getSuccess() {
    return success;
}
void
SWGInline_response_200_6::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

