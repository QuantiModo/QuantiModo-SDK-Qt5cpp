
#include "SWGConnectorInfo.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGConnectorInfo::SWGConnectorInfo(QString* json) {
    init();
    this->fromJson(*json);
}

SWGConnectorInfo::SWGConnectorInfo() {
    init();
}

SWGConnectorInfo::~SWGConnectorInfo() {
    this->cleanup();
}

void
SWGConnectorInfo::init() {
    id = NULL;
    connected = false;
    error = new QString("");
    history = new QList<SWGConnectorInfoHistoryItem*>();
    
}

void
SWGConnectorInfo::cleanup() {
    
    
    if(error != NULL) {
        delete error;
    }
    if(history != NULL) {
        QList<SWGConnectorInfoHistoryItem*>* arr = history;
        foreach(SWGConnectorInfoHistoryItem* o, *arr) {
            delete o;
        }
        delete history;
    }
    
}

SWGConnectorInfo*
SWGConnectorInfo::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGConnectorInfo::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&connected, pJson["connected"], "bool", "");
    setValue(&error, pJson["error"], "QString", "QString");
    setValue(&history, pJson["history"], "QList", "SWGConnectorInfoHistoryItem");
    
}

QString
SWGConnectorInfo::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGConnectorInfo::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    obj->insert("connected", QJsonValue(connected));
    
    
    toJsonValue(QString("error"), error, obj, QString("QString"));
    
    
    
    
    
    QList<SWGConnectorInfoHistoryItem*>* historyList = history;
    QJsonArray historyJsonArray;
    toJsonArray((QList<void*>*)history, &historyJsonArray, "history", "SWGConnectorInfoHistoryItem");

    obj->insert("history", historyJsonArray);
    
    
    

    return obj;
}

qint32
SWGConnectorInfo::getId() {
    return id;
}
void
SWGConnectorInfo::setId(qint32 id) {
    this->id = id;
}

bool
SWGConnectorInfo::getConnected() {
    return connected;
}
void
SWGConnectorInfo::setConnected(bool connected) {
    this->connected = connected;
}

QString*
SWGConnectorInfo::getError() {
    return error;
}
void
SWGConnectorInfo::setError(QString* error) {
    this->error = error;
}

QList<SWGConnectorInfoHistoryItem*>*
SWGConnectorInfo::getHistory() {
    return history;
}
void
SWGConnectorInfo::setHistory(QList<SWGConnectorInfoHistoryItem*>* history) {
    this->history = history;
}



} /* namespace Swagger */

