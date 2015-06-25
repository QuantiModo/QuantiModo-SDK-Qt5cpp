
#include "SWGPairs.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPairs::SWGPairs(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPairs::SWGPairs() {
    init();
}

SWGPairs::~SWGPairs() {
    this->cleanup();
}

void
SWGPairs::init() {
    name = new QString("");
    
}

void
SWGPairs::cleanup() {
    if(name != NULL) {
        delete name;
    }
    
}

SWGPairs*
SWGPairs::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPairs::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
    
}

QString
SWGPairs::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPairs::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGPairs::getName() {
    return name;
}
void
SWGPairs::setName(QString* name) {
    this->name = name;
}



} /* namespace Swagger */

