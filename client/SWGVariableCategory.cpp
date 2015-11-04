
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
    id = NULL;
    name = new QString("");
    filling_value = 0.0f;
    maximum_allowed_value = 0.0f;
    minimum_allowed_value = 0.0f;
    duration_of_action = 0;
    onset_delay = 0;
    combination_operation = new QString("");
    updated = 0;
    cause_only = false;
    public = 0;
    outcome = false;
    created_at = NULL;
    updated_at = NULL;
    image_url = new QString("");
    default_unit_id = 0;
    
}

void
SWGVariableCategory::cleanup() {
    
    if(name != NULL) {
        delete name;
    }
    
    
    
    
    
    if(combination_operation != NULL) {
        delete combination_operation;
    }
    
    
    
    
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    if(image_url != NULL) {
        delete image_url;
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
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&filling_value, pJson["filling_value"], "float", "");
    setValue(&maximum_allowed_value, pJson["maximum_allowed_value"], "float", "");
    setValue(&minimum_allowed_value, pJson["minimum_allowed_value"], "float", "");
    setValue(&duration_of_action, pJson["duration_of_action"], "qint32", "");
    setValue(&onset_delay, pJson["onset_delay"], "qint32", "");
    setValue(&combination_operation, pJson["combination_operation"], "QString", "QString");
    setValue(&updated, pJson["updated"], "qint32", "");
    setValue(&cause_only, pJson["cause_only"], "bool", "");
    setValue(&public, pJson["public"], "qint32", "");
    setValue(&outcome, pJson["outcome"], "bool", "");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    setValue(&image_url, pJson["image_url"], "QString", "QString");
    setValue(&default_unit_id, pJson["default_unit_id"], "qint32", "");
    
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
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    obj->insert("filling_value", QJsonValue(filling_value));
    obj->insert("maximum_allowed_value", QJsonValue(maximum_allowed_value));
    obj->insert("minimum_allowed_value", QJsonValue(minimum_allowed_value));
    obj->insert("duration_of_action", QJsonValue(duration_of_action));
    obj->insert("onset_delay", QJsonValue(onset_delay));
    
    
    toJsonValue(QString("combination_operation"), combination_operation, obj, QString("QString"));
    
    
    
    obj->insert("updated", QJsonValue(updated));
    obj->insert("cause_only", QJsonValue(cause_only));
    obj->insert("public", QJsonValue(public));
    obj->insert("outcome", QJsonValue(outcome));
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("image_url"), image_url, obj, QString("QString"));
    
    
    
    obj->insert("default_unit_id", QJsonValue(default_unit_id));
    

    return obj;
}

qint32
SWGVariableCategory::getId() {
    return id;
}
void
SWGVariableCategory::setId(qint32 id) {
    this->id = id;
}

QString*
SWGVariableCategory::getName() {
    return name;
}
void
SWGVariableCategory::setName(QString* name) {
    this->name = name;
}

float
SWGVariableCategory::getFillingValue() {
    return filling_value;
}
void
SWGVariableCategory::setFillingValue(float filling_value) {
    this->filling_value = filling_value;
}

float
SWGVariableCategory::getMaximumAllowedValue() {
    return maximum_allowed_value;
}
void
SWGVariableCategory::setMaximumAllowedValue(float maximum_allowed_value) {
    this->maximum_allowed_value = maximum_allowed_value;
}

float
SWGVariableCategory::getMinimumAllowedValue() {
    return minimum_allowed_value;
}
void
SWGVariableCategory::setMinimumAllowedValue(float minimum_allowed_value) {
    this->minimum_allowed_value = minimum_allowed_value;
}

qint32
SWGVariableCategory::getDurationOfAction() {
    return duration_of_action;
}
void
SWGVariableCategory::setDurationOfAction(qint32 duration_of_action) {
    this->duration_of_action = duration_of_action;
}

qint32
SWGVariableCategory::getOnsetDelay() {
    return onset_delay;
}
void
SWGVariableCategory::setOnsetDelay(qint32 onset_delay) {
    this->onset_delay = onset_delay;
}

QString*
SWGVariableCategory::getCombinationOperation() {
    return combination_operation;
}
void
SWGVariableCategory::setCombinationOperation(QString* combination_operation) {
    this->combination_operation = combination_operation;
}

qint32
SWGVariableCategory::getUpdated() {
    return updated;
}
void
SWGVariableCategory::setUpdated(qint32 updated) {
    this->updated = updated;
}

bool
SWGVariableCategory::getCauseOnly() {
    return cause_only;
}
void
SWGVariableCategory::setCauseOnly(bool cause_only) {
    this->cause_only = cause_only;
}

qint32
SWGVariableCategory::getPublic() {
    return public;
}
void
SWGVariableCategory::setPublic(qint32 public) {
    this->public = public;
}

bool
SWGVariableCategory::getOutcome() {
    return outcome;
}
void
SWGVariableCategory::setOutcome(bool outcome) {
    this->outcome = outcome;
}

QDateTime*
SWGVariableCategory::getCreatedAt() {
    return created_at;
}
void
SWGVariableCategory::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGVariableCategory::getUpdatedAt() {
    return updated_at;
}
void
SWGVariableCategory::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}

QString*
SWGVariableCategory::getImageUrl() {
    return image_url;
}
void
SWGVariableCategory::setImageUrl(QString* image_url) {
    this->image_url = image_url;
}

qint32
SWGVariableCategory::getDefaultUnitId() {
    return default_unit_id;
}
void
SWGVariableCategory::setDefaultUnitId(qint32 default_unit_id) {
    this->default_unit_id = default_unit_id;
}



} /* namespace Swagger */

