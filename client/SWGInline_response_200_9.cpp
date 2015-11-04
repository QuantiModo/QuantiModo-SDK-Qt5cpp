
#include "SWGInline_response_200_9.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_9::SWGInline_response_200_9(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_9::SWGInline_response_200_9() {
    init();
}

SWGInline_response_200_9::~SWGInline_response_200_9() {
    this->cleanup();
}

void
SWGInline_response_200_9::init() {
    data = new QList<SWGCredential*>();
    success = false;
    
}

void
SWGInline_response_200_9::cleanup() {
    if(data != NULL) {
        QList<SWGCredential*>* arr = data;
        foreach(SWGCredential* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_9*
SWGInline_response_200_9::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_9::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGCredential");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_9::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_9::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGCredential*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGCredential");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGCredential*>*
SWGInline_response_200_9::getData() {
    return data;
}
void
SWGInline_response_200_9::setData(QList<SWGCredential*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_9::getSuccess() {
    return success;
}
void
SWGInline_response_200_9::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

