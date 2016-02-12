
#include "SWGInline_response_200_18.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_18::SWGInline_response_200_18(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_18::SWGInline_response_200_18() {
    init();
}

SWGInline_response_200_18::~SWGInline_response_200_18() {
    this->cleanup();
}

void
SWGInline_response_200_18::init() {
    data = new SWGCorrelation();
    success = false;
    
}

void
SWGInline_response_200_18::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_18*
SWGInline_response_200_18::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_18::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGCorrelation", "SWGCorrelation");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_18::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_18::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGCorrelation"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGCorrelation*
SWGInline_response_200_18::getData() {
    return data;
}
void
SWGInline_response_200_18::setData(SWGCorrelation* data) {
    this->data = data;
}

bool
SWGInline_response_200_18::getSuccess() {
    return success;
}
void
SWGInline_response_200_18::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

