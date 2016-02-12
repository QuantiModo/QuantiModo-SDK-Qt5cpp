
#include "SWGInline_response_200_17.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_17::SWGInline_response_200_17(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_17::SWGInline_response_200_17() {
    init();
}

SWGInline_response_200_17::~SWGInline_response_200_17() {
    this->cleanup();
}

void
SWGInline_response_200_17::init() {
    data = new QList<SWGCorrelation*>();
    success = false;
    
}

void
SWGInline_response_200_17::cleanup() {
    if(data != NULL) {
        QList<SWGCorrelation*>* arr = data;
        foreach(SWGCorrelation* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_17*
SWGInline_response_200_17::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_17::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGCorrelation");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_17::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_17::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGCorrelation*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGCorrelation");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGCorrelation*>*
SWGInline_response_200_17::getData() {
    return data;
}
void
SWGInline_response_200_17::setData(QList<SWGCorrelation*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_17::getSuccess() {
    return success;
}
void
SWGInline_response_200_17::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

