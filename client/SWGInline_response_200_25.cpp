
#include "SWGInline_response_200_25.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_25::SWGInline_response_200_25(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_25::SWGInline_response_200_25() {
    init();
}

SWGInline_response_200_25::~SWGInline_response_200_25() {
    this->cleanup();
}

void
SWGInline_response_200_25::init() {
    data = new SWGUnitCategory();
    success = false;
    
}

void
SWGInline_response_200_25::cleanup() {
    if(data != NULL) {
        delete data;
    }
    
    
}

SWGInline_response_200_25*
SWGInline_response_200_25::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_25::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "SWGUnitCategory", "SWGUnitCategory");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_25::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_25::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("data"), data, obj, QString("SWGUnitCategory"));
    
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

SWGUnitCategory*
SWGInline_response_200_25::getData() {
    return data;
}
void
SWGInline_response_200_25::setData(SWGUnitCategory* data) {
    this->data = data;
}

bool
SWGInline_response_200_25::getSuccess() {
    return success;
}
void
SWGInline_response_200_25::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

