
#include "SWGVariableCategory.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariableCategory::SWGVariableCategory(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariableCategory::SWGVariableCategory() {
    init();
}

SWGVariableCategory::~SWGVariableCategory() {
    this->cleanup();
}

void
SWGVariableCategory::init() {
    name = new QString("");
    
}

void
SWGVariableCategory::cleanup() {
    if(name != NULL) {
        delete name;
    }
    
}

SWGVariableCategory*
SWGVariableCategory::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariableCategory::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
    
}

QString
SWGVariableCategory::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariableCategory::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGVariableCategory::getName() {
    return name;
}
void
SWGVariableCategory::setName(QString* name) {
    this->name = name;
}



} /* namespace Swagger */

