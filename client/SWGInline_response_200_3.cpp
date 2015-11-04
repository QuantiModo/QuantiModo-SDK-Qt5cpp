
#include "SWGInline_response_200_3.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_3::SWGInline_response_200_3(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_3::SWGInline_response_200_3() {
    init();
}

SWGInline_response_200_3::~SWGInline_response_200_3() {
    this->cleanup();
}

void
SWGInline_response_200_3::init() {
    data = new QList<SWGConnection*>();
    success = false;
    
}

void
SWGInline_response_200_3::cleanup() {
    if(data != NULL) {
        QList<SWGConnection*>* arr = data;
        foreach(SWGConnection* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_3*
SWGInline_response_200_3::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_3::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGConnection");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_3::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_3::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGConnection*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGConnection");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGConnection*>*
SWGInline_response_200_3::getData() {
    return data;
}
void
SWGInline_response_200_3::setData(QList<SWGConnection*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_3::getSuccess() {
    return success;
}
void
SWGInline_response_200_3::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

