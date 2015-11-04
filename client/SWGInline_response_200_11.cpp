
#include "SWGInline_response_200_11.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_11::SWGInline_response_200_11(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_11::SWGInline_response_200_11() {
    init();
}

SWGInline_response_200_11::~SWGInline_response_200_11() {
    this->cleanup();
}

void
SWGInline_response_200_11::init() {
    data = new QList<SWGMeasurement*>();
    success = false;
    
}

void
SWGInline_response_200_11::cleanup() {
    if(data != NULL) {
        QList<SWGMeasurement*>* arr = data;
        foreach(SWGMeasurement* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_11*
SWGInline_response_200_11::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_11::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGMeasurement");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_11::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_11::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGMeasurement*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGMeasurement");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGMeasurement*>*
SWGInline_response_200_11::getData() {
    return data;
}
void
SWGInline_response_200_11::setData(QList<SWGMeasurement*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_11::getSuccess() {
    return success;
}
void
SWGInline_response_200_11::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

