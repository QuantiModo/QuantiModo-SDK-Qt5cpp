
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
    id = 0;
    name = new QString("");
    display_name = new QString("");
    image = new QString("");
    get_it_url = new QString("");
    short_description = new QString("");
    long_description = new QString("");
    enabled = false;
    oauth = false;
    created_at = NULL;
    updated_at = NULL;
    
}

void
SWGConnector::cleanup() {
    
    if(name != NULL) {
        delete name;
    }
    if(display_name != NULL) {
        delete display_name;
    }
    if(image != NULL) {
        delete image;
    }
    if(get_it_url != NULL) {
        delete get_it_url;
    }
    if(short_description != NULL) {
        delete short_description;
    }
    if(long_description != NULL) {
        delete long_description;
    }
    
    
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
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
    setValue(&display_name, pJson["display_name"], "QString", "QString");
    setValue(&image, pJson["image"], "QString", "QString");
    setValue(&get_it_url, pJson["get_it_url"], "QString", "QString");
    setValue(&short_description, pJson["short_description"], "QString", "QString");
    setValue(&long_description, pJson["long_description"], "QString", "QString");
    setValue(&enabled, pJson["enabled"], "bool", "");
    setValue(&oauth, pJson["oauth"], "bool", "");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    
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
    
    
    
    
    
    toJsonValue(QString("display_name"), display_name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("image"), image, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("get_it_url"), get_it_url, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("short_description"), short_description, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("long_description"), long_description, obj, QString("QString"));
    
    
    
    obj->insert("enabled", QJsonValue(enabled));
    obj->insert("oauth", QJsonValue(oauth));
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    

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
    return display_name;
}
void
SWGConnector::setDisplayName(QString* display_name) {
    this->display_name = display_name;
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
    return get_it_url;
}
void
SWGConnector::setGetItUrl(QString* get_it_url) {
    this->get_it_url = get_it_url;
}

QString*
SWGConnector::getShortDescription() {
    return short_description;
}
void
SWGConnector::setShortDescription(QString* short_description) {
    this->short_description = short_description;
}

QString*
SWGConnector::getLongDescription() {
    return long_description;
}
void
SWGConnector::setLongDescription(QString* long_description) {
    this->long_description = long_description;
}

bool
SWGConnector::getEnabled() {
    return enabled;
}
void
SWGConnector::setEnabled(bool enabled) {
    this->enabled = enabled;
}

bool
SWGConnector::getOauth() {
    return oauth;
}
void
SWGConnector::setOauth(bool oauth) {
    this->oauth = oauth;
}

QDateTime*
SWGConnector::getCreatedAt() {
    return created_at;
}
void
SWGConnector::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGConnector::getUpdatedAt() {
    return updated_at;
}
void
SWGConnector::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

