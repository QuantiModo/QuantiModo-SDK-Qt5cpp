
#include "SWGInline_response_200.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200::SWGInline_response_200(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200::SWGInline_response_200() {
    init();
}

SWGInline_response_200::~SWGInline_response_200() {
    this->cleanup();
}

void
SWGInline_response_200::init() {
    data = new QList<SWGAggregatedCorrelation*>();
    success = false;
    
}

void
SWGInline_response_200::cleanup() {
    if(data != NULL) {
        QList<SWGAggregatedCorrelation*>* arr = data;
        foreach(SWGAggregatedCorrelation* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200*
SWGInline_response_200::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGAggregatedCorrelation");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGAggregatedCorrelation*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGAggregatedCorrelation");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGAggregatedCorrelation*>*
SWGInline_response_200::getData() {
    return data;
}
void
SWGInline_response_200::setData(QList<SWGAggregatedCorrelation*>* data) {
    this->data = data;
}

bool
SWGInline_response_200::getSuccess() {
    return success;
}
void
SWGInline_response_200::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

