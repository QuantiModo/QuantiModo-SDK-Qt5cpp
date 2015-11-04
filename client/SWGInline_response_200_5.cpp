
#include "SWGInline_response_200_5.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_5::SWGInline_response_200_5(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_5::SWGInline_response_200_5() {
    init();
}

SWGInline_response_200_5::~SWGInline_response_200_5() {
    this->cleanup();
}

void
SWGInline_response_200_5::init() {
    data = new QList<SWGConnector*>();
    success = false;
    
}

void
SWGInline_response_200_5::cleanup() {
    if(data != NULL) {
        QList<SWGConnector*>* arr = data;
        foreach(SWGConnector* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_5*
SWGInline_response_200_5::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_5::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGConnector");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_5::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_5::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGConnector*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGConnector");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGConnector*>*
SWGInline_response_200_5::getData() {
    return data;
}
void
SWGInline_response_200_5::setData(QList<SWGConnector*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_5::getSuccess() {
    return success;
}
void
SWGInline_response_200_5::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

