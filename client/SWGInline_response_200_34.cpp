
#include "SWGInline_response_200_34.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_34::SWGInline_response_200_34(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_34::SWGInline_response_200_34() {
    init();
}

SWGInline_response_200_34::~SWGInline_response_200_34() {
    this->cleanup();
}

void
SWGInline_response_200_34::init() {
    data = new QList<SWGVariable*>();
    success = false;
    
}

void
SWGInline_response_200_34::cleanup() {
    if(data != NULL) {
        QList<SWGVariable*>* arr = data;
        foreach(SWGVariable* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_34*
SWGInline_response_200_34::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_34::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGVariable");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_34::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_34::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGVariable*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGVariable");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGVariable*>*
SWGInline_response_200_34::getData() {
    return data;
}
void
SWGInline_response_200_34::setData(QList<SWGVariable*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_34::getSuccess() {
    return success;
}
void
SWGInline_response_200_34::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

