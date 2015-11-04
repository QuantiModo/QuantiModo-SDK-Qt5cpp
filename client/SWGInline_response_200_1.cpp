
#include "SWGInline_response_200_1.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_1::SWGInline_response_200_1(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_1::SWGInline_response_200_1() {
    init();
}

SWGInline_response_200_1::~SWGInline_response_200_1() {
    this->cleanup();
}

void
SWGInline_response_200_1::init() {
    data = new SWGAggregatedCorrelation();
    success = false;
    
}

void
SWGInline_response_200_1::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_1*
SWGInline_response_200_1::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_1::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGAggregatedCorrelation", "SWGAggregatedCorrelation");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_1::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_1::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGAggregatedCorrelation"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGAggregatedCorrelation*
SWGInline_response_200_1::getData() {
    return data;
}
void
SWGInline_response_200_1::setData(SWGAggregatedCorrelation* data) {
    this->data = data;
}

bool
SWGInline_response_200_1::getSuccess() {
    return success;
}
void
SWGInline_response_200_1::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

