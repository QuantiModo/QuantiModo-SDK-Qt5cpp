
#include "SWGInline_response_200_29.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_29::SWGInline_response_200_29(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_29::SWGInline_response_200_29() {
    init();
}

SWGInline_response_200_29::~SWGInline_response_200_29() {
    this->cleanup();
}

void
SWGInline_response_200_29::init() {
    data = new QList<SWGVote*>();
    success = false;
    
}

void
SWGInline_response_200_29::cleanup() {
    if(data != NULL) {
        QList<SWGVote*>* arr = data;
        foreach(SWGVote* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_29*
SWGInline_response_200_29::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_29::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGVote");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_29::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_29::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGVote*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGVote");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGVote*>*
SWGInline_response_200_29::getData() {
    return data;
}
void
SWGInline_response_200_29::setData(QList<SWGVote*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_29::getSuccess() {
    return success;
}
void
SWGInline_response_200_29::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

