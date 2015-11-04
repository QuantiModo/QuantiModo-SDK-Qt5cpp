
#include "SWGInline_response_200_21.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_21::SWGInline_response_200_21(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_21::SWGInline_response_200_21() {
    init();
}

SWGInline_response_200_21::~SWGInline_response_200_21() {
    this->cleanup();
}

void
SWGInline_response_200_21::init() {
    data = new QList<SWGUserVariable*>();
    success = false;
    
}

void
SWGInline_response_200_21::cleanup() {
    if(data != NULL) {
        QList<SWGUserVariable*>* arr = data;
        foreach(SWGUserVariable* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_21*
SWGInline_response_200_21::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_21::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGUserVariable");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_21::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_21::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGUserVariable*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGUserVariable");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGUserVariable*>*
SWGInline_response_200_21::getData() {
    return data;
}
void
SWGInline_response_200_21::setData(QList<SWGUserVariable*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_21::getSuccess() {
    return success;
}
void
SWGInline_response_200_21::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

