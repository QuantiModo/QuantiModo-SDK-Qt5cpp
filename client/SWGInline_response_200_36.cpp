
#include "SWGInline_response_200_36.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_36::SWGInline_response_200_36(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_36::SWGInline_response_200_36() {
    init();
}

SWGInline_response_200_36::~SWGInline_response_200_36() {
    this->cleanup();
}

void
SWGInline_response_200_36::init() {
    data = new SWGVote();
    success = false;
    
}

void
SWGInline_response_200_36::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_36*
SWGInline_response_200_36::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_36::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGVote", "SWGVote");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_36::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_36::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGVote"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGVote*
SWGInline_response_200_36::getData() {
    return data;
}
void
SWGInline_response_200_36::setData(SWGVote* data) {
    this->data = data;
}

bool
SWGInline_response_200_36::getSuccess() {
    return success;
}
void
SWGInline_response_200_36::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

