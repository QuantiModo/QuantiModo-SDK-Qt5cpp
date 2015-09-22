
#include "SWGConnectorInstruction.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGConnectorInstruction::SWGConnectorInstruction(QString* json) {
    init();
    this->fromJson(*json);
}

SWGConnectorInstruction::SWGConnectorInstruction() {
    init();
}

SWGConnectorInstruction::~SWGConnectorInstruction() {
    this->cleanup();
}

void
SWGConnectorInstruction::init() {
    url = new QString("");
    parameters = new QList<QString*>();
    usePopup = false;
    
}

void
SWGConnectorInstruction::cleanup() {
    if(url != NULL) {
        delete url;
    }
    if(parameters != NULL) {
        QList<QString*>* arr = parameters;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete parameters;
    }
    
    
}

SWGConnectorInstruction*
SWGConnectorInstruction::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGConnectorInstruction::fromJsonObject(QJsonObject &pJson) {
    setValue(&url, pJson["url"], "QString", "QString");
    setValue(&parameters, pJson["parameters"], "QList", "QString");
    setValue(&usePopup, pJson["usePopup"], "bool", "");
    
}

QString
SWGConnectorInstruction::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGConnectorInstruction::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("url"), url, obj, QString("QString"));
    
    
    
    
    
    QList<QString*>* parametersList = parameters;
    QJsonArray parametersJsonArray;
    toJsonArray((QList<void*>*)parameters, &parametersJsonArray, "parameters", "QString");

    obj->insert("parameters", parametersJsonArray);
    
    
    obj->insert("usePopup", QJsonValue(usePopup));
    

    return obj;
}

QString*
SWGConnectorInstruction::getUrl() {
    return url;
}
void
SWGConnectorInstruction::setUrl(QString* url) {
    this->url = url;
}

QList<QString*>*
SWGConnectorInstruction::getParameters() {
    return parameters;
}
void
SWGConnectorInstruction::setParameters(QList<QString*>* parameters) {
    this->parameters = parameters;
}

bool
SWGConnectorInstruction::getUsePopup() {
    return usePopup;
}
void
SWGConnectorInstruction::setUsePopup(bool usePopup) {
    this->usePopup = usePopup;
}



} /* namespace Swagger */

