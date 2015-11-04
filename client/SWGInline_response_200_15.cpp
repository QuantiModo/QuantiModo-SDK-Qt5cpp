
#include "SWGInline_response_200_15.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_15::SWGInline_response_200_15(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_15::SWGInline_response_200_15() {
    init();
}

SWGInline_response_200_15::~SWGInline_response_200_15() {
    this->cleanup();
}

void
SWGInline_response_200_15::init() {
    data = new QList<SWGUnitCategory*>();
    success = false;
    
}

void
SWGInline_response_200_15::cleanup() {
    if(data != NULL) {
        QList<SWGUnitCategory*>* arr = data;
        foreach(SWGUnitCategory* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_15*
SWGInline_response_200_15::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_15::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGUnitCategory");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_15::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_15::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGUnitCategory*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGUnitCategory");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGUnitCategory*>*
SWGInline_response_200_15::getData() {
    return data;
}
void
SWGInline_response_200_15::setData(QList<SWGUnitCategory*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_15::getSuccess() {
    return success;
}
void
SWGInline_response_200_15::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

