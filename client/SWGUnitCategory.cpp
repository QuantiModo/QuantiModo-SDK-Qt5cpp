
#include "SWGUnitCategory.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUnitCategory::SWGUnitCategory(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUnitCategory::SWGUnitCategory() {
    init();
}

SWGUnitCategory::~SWGUnitCategory() {
    this->cleanup();
}

void
SWGUnitCategory::init() {
    name = new QString("");
    
}

void
SWGUnitCategory::cleanup() {
    if(name != NULL) {
        delete name;
    }
    
}

SWGUnitCategory*
SWGUnitCategory::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUnitCategory::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
    
}

QString
SWGUnitCategory::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUnitCategory::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGUnitCategory::getName() {
    return name;
}
void
SWGUnitCategory::setName(QString* name) {
    this->name = name;
}



} /* namespace Swagger */

