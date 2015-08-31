
#include "SWGConnector.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGConnector::SWGConnector(QString* json) {
    init();
    this->fromJson(*json);
}

SWGConnector::SWGConnector() {
    init();
}

SWGConnector::~SWGConnector() {
    this->cleanup();
}

void
SWGConnector::init() {
    id = NULL;
    name = new QString("");
    displayName = new QString("");
    image = new QString("");
    getItUrl = new QString("");
    connected = new QString("");
    connectInstructions = new QString("");
    lastUpdate = NULL;
    totalMeasurementsInLastUpdate = NULL;
    noDataYet = false;
    
}

void
SWGConnector::cleanup() {
    
    if(name != NULL) {
        delete name;
    }
    if(displayName != NULL) {
        delete displayName;
    }
    if(image != NULL) {
        delete image;
    }
    if(getItUrl != NULL) {
        delete getItUrl;
    }
    if(connected != NULL) {
        delete connected;
    }
    if(connectInstructions != NULL) {
        delete connectInstructions;
    }
    
    
    
    
}

SWGConnector*
SWGConnector::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGConnector::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&displayName, pJson["displayName"], "QString", "QString");
    setValue(&image, pJson["image"], "QString", "QString");
    setValue(&getItUrl, pJson["getItUrl"], "QString", "QString");
    setValue(&connected, pJson["connected"], "QString", "QString");
    setValue(&connectInstructions, pJson["connectInstructions"], "QString", "QString");
    setValue(&lastUpdate, pJson["lastUpdate"], "qint32", "");
    setValue(&totalMeasurementsInLastUpdate, pJson["totalMeasurementsInLastUpdate"], "qint32", "");
    setValue(&noDataYet, pJson["noDataYet"], "bool", "");
    
}

QString
SWGConnector::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGConnector::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("displayName"), displayName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("image"), image, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("getItUrl"), getItUrl, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("connected"), connected, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("connectInstructions"), connectInstructions, obj, QString("QString"));
    
    
    
    obj->insert("lastUpdate", QJsonValue(lastUpdate));
    obj->insert("totalMeasurementsInLastUpdate", QJsonValue(totalMeasurementsInLastUpdate));
    obj->insert("noDataYet", QJsonValue(noDataYet));
    

    return obj;
}

qint32
SWGConnector::getId() {
    return id;
}
void
SWGConnector::setId(qint32 id) {
    this->id = id;
}

QString*
SWGConnector::getName() {
    return name;
}
void
SWGConnector::setName(QString* name) {
    this->name = name;
}

QString*
SWGConnector::getDisplayName() {
    return displayName;
}
void
SWGConnector::setDisplayName(QString* displayName) {
    this->displayName = displayName;
}

QString*
SWGConnector::getImage() {
    return image;
}
void
SWGConnector::setImage(QString* image) {
    this->image = image;
}

QString*
SWGConnector::getGetItUrl() {
    return getItUrl;
}
void
SWGConnector::setGetItUrl(QString* getItUrl) {
    this->getItUrl = getItUrl;
}

QString*
SWGConnector::getConnected() {
    return connected;
}
void
SWGConnector::setConnected(QString* connected) {
    this->connected = connected;
}

QString*
SWGConnector::getConnectInstructions() {
    return connectInstructions;
}
void
SWGConnector::setConnectInstructions(QString* connectInstructions) {
    this->connectInstructions = connectInstructions;
}

qint32
SWGConnector::getLastUpdate() {
    return lastUpdate;
}
void
SWGConnector::setLastUpdate(qint32 lastUpdate) {
    this->lastUpdate = lastUpdate;
}

qint32
SWGConnector::getTotalMeasurementsInLastUpdate() {
    return totalMeasurementsInLastUpdate;
}
void
SWGConnector::setTotalMeasurementsInLastUpdate(qint32 totalMeasurementsInLastUpdate) {
    this->totalMeasurementsInLastUpdate = totalMeasurementsInLastUpdate;
}

bool
SWGConnector::getNoDataYet() {
    return noDataYet;
}
void
SWGConnector::setNoDataYet(bool noDataYet) {
    this->noDataYet = noDataYet;
}



} /* namespace Swagger */

