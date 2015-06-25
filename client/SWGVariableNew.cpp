
#include "SWGVariableNew.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariableNew::SWGVariableNew(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariableNew::SWGVariableNew() {
    init();
}

SWGVariableNew::~SWGVariableNew() {
    this->cleanup();
}

void
SWGVariableNew::init() {
    name = new QString("");
    category = new QString("");
    unit = new QString("");
    combinationOperation = new QString("");
    parent = new QString("");
    
}

void
SWGVariableNew::cleanup() {
    if(name != NULL) {
        delete name;
    }
    if(category != NULL) {
        delete category;
    }
    if(unit != NULL) {
        delete unit;
    }
    if(combinationOperation != NULL) {
        delete combinationOperation;
    }
    if(parent != NULL) {
        delete parent;
    }
    
}

SWGVariableNew*
SWGVariableNew::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariableNew::fromJsonObject(QJsonObject &pJson) {
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&category, pJson["category"], "QString", "QString");
    setValue(&unit, pJson["unit"], "QString", "QString");
    setValue(&combinationOperation, pJson["combinationOperation"], "QString", "QString");
    setValue(&parent, pJson["parent"], "QString", "QString");
    
}

QString
SWGVariableNew::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariableNew::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("category"), category, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("unit"), unit, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("combinationOperation"), combinationOperation, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("parent"), parent, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGVariableNew::getName() {
    return name;
}
void
SWGVariableNew::setName(QString* name) {
    this->name = name;
}

QString*
SWGVariableNew::getCategory() {
    return category;
}
void
SWGVariableNew::setCategory(QString* category) {
    this->category = category;
}

QString*
SWGVariableNew::getUnit() {
    return unit;
}
void
SWGVariableNew::setUnit(QString* unit) {
    this->unit = unit;
}

QString*
SWGVariableNew::getCombinationOperation() {
    return combinationOperation;
}
void
SWGVariableNew::setCombinationOperation(QString* combinationOperation) {
    this->combinationOperation = combinationOperation;
}

QString*
SWGVariableNew::getParent() {
    return parent;
}
void
SWGVariableNew::setParent(QString* parent) {
    this->parent = parent;
}



} /* namespace Swagger */

