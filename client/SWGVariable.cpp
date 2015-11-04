
#include "SWGVariable.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariable::SWGVariable(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariable::SWGVariable() {
    init();
}

SWGVariable::~SWGVariable() {
    this->cleanup();
}

void
SWGVariable::init() {
    id = 0;
    client_id = new QString("");
    parent_id = 0;
    name = new QString("");
    variable_category_id = 0;
    default_unit_id = 0;
    combination_operation = new QString("");
    filling_value = 0.0f;
    maximum_allowed_value = 0.0f;
    minimum_allowed_value = 0.0f;
    onset_delay = 0;
    duration_of_action = 0;
    public = 0;
    cause_only = false;
    most_common_value = 0.0f;
    most_common_unit_id = 0;
    standard_deviation = 0.0f;
    variance = 0.0f;
    mean = 0.0f;
    median = 0.0f;
    number_of_measurements = 0.0f;
    number_of_unique_values = 0.0f;
    skewness = 0.0f;
    kurtosis = 0.0f;
    status = new QString("");
    error_message = new QString("");
    last_successful_update_time = NULL;
    created_at = NULL;
    updated_at = NULL;
    product_url = new QString("");
    image_url = new QString("");
    price = 0.0f;
    number_of_user_variables = 0;
    outcome = false;
    minimum_recorded_value = 0.0f;
    maximum_recorded_value = 0.0f;
    
}

void
SWGVariable::cleanup() {
    
    if(client_id != NULL) {
        delete client_id;
    }
    
    if(name != NULL) {
        delete name;
    }
    
    
    if(combination_operation != NULL) {
        delete combination_operation;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    if(status != NULL) {
        delete status;
    }
    if(error_message != NULL) {
        delete error_message;
    }
    if(last_successful_update_time != NULL) {
        delete last_successful_update_time;
    }
    if(created_at != NULL) {
        delete created_at;
    }
    if(updated_at != NULL) {
        delete updated_at;
    }
    if(product_url != NULL) {
        delete product_url;
    }
    if(image_url != NULL) {
        delete image_url;
    }
    
    
    
    
    
    
}

SWGVariable*
SWGVariable::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariable::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&client_id, pJson["client_id"], "QString", "QString");
    setValue(&parent_id, pJson["parent_id"], "qint32", "");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&variable_category_id, pJson["variable_category_id"], "qint32", "");
    setValue(&default_unit_id, pJson["default_unit_id"], "qint32", "");
    setValue(&combination_operation, pJson["combination_operation"], "QString", "QString");
    setValue(&filling_value, pJson["filling_value"], "float", "");
    setValue(&maximum_allowed_value, pJson["maximum_allowed_value"], "float", "");
    setValue(&minimum_allowed_value, pJson["minimum_allowed_value"], "float", "");
    setValue(&onset_delay, pJson["onset_delay"], "qint32", "");
    setValue(&duration_of_action, pJson["duration_of_action"], "qint32", "");
    setValue(&public, pJson["public"], "qint32", "");
    setValue(&cause_only, pJson["cause_only"], "bool", "");
    setValue(&most_common_value, pJson["most_common_value"], "float", "");
    setValue(&most_common_unit_id, pJson["most_common_unit_id"], "qint32", "");
    setValue(&standard_deviation, pJson["standard_deviation"], "float", "");
    setValue(&variance, pJson["variance"], "float", "");
    setValue(&mean, pJson["mean"], "float", "");
    setValue(&median, pJson["median"], "float", "");
    setValue(&number_of_measurements, pJson["number_of_measurements"], "float", "");
    setValue(&number_of_unique_values, pJson["number_of_unique_values"], "float", "");
    setValue(&skewness, pJson["skewness"], "float", "");
    setValue(&kurtosis, pJson["kurtosis"], "float", "");
    setValue(&status, pJson["status"], "QString", "QString");
    setValue(&error_message, pJson["error_message"], "QString", "QString");
    setValue(&last_successful_update_time, pJson["last_successful_update_time"], "QDateTime", "QDateTime");
    setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
    setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
    setValue(&product_url, pJson["product_url"], "QString", "QString");
    setValue(&image_url, pJson["image_url"], "QString", "QString");
    setValue(&price, pJson["price"], "float", "");
    setValue(&number_of_user_variables, pJson["number_of_user_variables"], "qint32", "");
    setValue(&outcome, pJson["outcome"], "bool", "");
    setValue(&minimum_recorded_value, pJson["minimum_recorded_value"], "float", "");
    setValue(&maximum_recorded_value, pJson["maximum_recorded_value"], "float", "");
    
}

QString
SWGVariable::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariable::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("client_id"), client_id, obj, QString("QString"));
    
    
    
    obj->insert("parent_id", QJsonValue(parent_id));
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    obj->insert("variable_category_id", QJsonValue(variable_category_id));
    obj->insert("default_unit_id", QJsonValue(default_unit_id));
    
    
    toJsonValue(QString("combination_operation"), combination_operation, obj, QString("QString"));
    
    
    
    obj->insert("filling_value", QJsonValue(filling_value));
    obj->insert("maximum_allowed_value", QJsonValue(maximum_allowed_value));
    obj->insert("minimum_allowed_value", QJsonValue(minimum_allowed_value));
    obj->insert("onset_delay", QJsonValue(onset_delay));
    obj->insert("duration_of_action", QJsonValue(duration_of_action));
    obj->insert("public", QJsonValue(public));
    obj->insert("cause_only", QJsonValue(cause_only));
    obj->insert("most_common_value", QJsonValue(most_common_value));
    obj->insert("most_common_unit_id", QJsonValue(most_common_unit_id));
    obj->insert("standard_deviation", QJsonValue(standard_deviation));
    obj->insert("variance", QJsonValue(variance));
    obj->insert("mean", QJsonValue(mean));
    obj->insert("median", QJsonValue(median));
    obj->insert("number_of_measurements", QJsonValue(number_of_measurements));
    obj->insert("number_of_unique_values", QJsonValue(number_of_unique_values));
    obj->insert("skewness", QJsonValue(skewness));
    obj->insert("kurtosis", QJsonValue(kurtosis));
    
    
    toJsonValue(QString("status"), status, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("error_message"), error_message, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("last_successful_update_time"), last_successful_update_time, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
    
    
    
    
    toJsonValue(QString("product_url"), product_url, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("image_url"), image_url, obj, QString("QString"));
    
    
    
    obj->insert("price", QJsonValue(price));
    obj->insert("number_of_user_variables", QJsonValue(number_of_user_variables));
    obj->insert("outcome", QJsonValue(outcome));
    obj->insert("minimum_recorded_value", QJsonValue(minimum_recorded_value));
    obj->insert("maximum_recorded_value", QJsonValue(maximum_recorded_value));
    

    return obj;
}

qint32
SWGVariable::getId() {
    return id;
}
void
SWGVariable::setId(qint32 id) {
    this->id = id;
}

QString*
SWGVariable::getClientId() {
    return client_id;
}
void
SWGVariable::setClientId(QString* client_id) {
    this->client_id = client_id;
}

qint32
SWGVariable::getParentId() {
    return parent_id;
}
void
SWGVariable::setParentId(qint32 parent_id) {
    this->parent_id = parent_id;
}

QString*
SWGVariable::getName() {
    return name;
}
void
SWGVariable::setName(QString* name) {
    this->name = name;
}

qint32
SWGVariable::getVariableCategoryId() {
    return variable_category_id;
}
void
SWGVariable::setVariableCategoryId(qint32 variable_category_id) {
    this->variable_category_id = variable_category_id;
}

qint32
SWGVariable::getDefaultUnitId() {
    return default_unit_id;
}
void
SWGVariable::setDefaultUnitId(qint32 default_unit_id) {
    this->default_unit_id = default_unit_id;
}

QString*
SWGVariable::getCombinationOperation() {
    return combination_operation;
}
void
SWGVariable::setCombinationOperation(QString* combination_operation) {
    this->combination_operation = combination_operation;
}

float
SWGVariable::getFillingValue() {
    return filling_value;
}
void
SWGVariable::setFillingValue(float filling_value) {
    this->filling_value = filling_value;
}

float
SWGVariable::getMaximumAllowedValue() {
    return maximum_allowed_value;
}
void
SWGVariable::setMaximumAllowedValue(float maximum_allowed_value) {
    this->maximum_allowed_value = maximum_allowed_value;
}

float
SWGVariable::getMinimumAllowedValue() {
    return minimum_allowed_value;
}
void
SWGVariable::setMinimumAllowedValue(float minimum_allowed_value) {
    this->minimum_allowed_value = minimum_allowed_value;
}

qint32
SWGVariable::getOnsetDelay() {
    return onset_delay;
}
void
SWGVariable::setOnsetDelay(qint32 onset_delay) {
    this->onset_delay = onset_delay;
}

qint32
SWGVariable::getDurationOfAction() {
    return duration_of_action;
}
void
SWGVariable::setDurationOfAction(qint32 duration_of_action) {
    this->duration_of_action = duration_of_action;
}

qint32
SWGVariable::getPublic() {
    return public;
}
void
SWGVariable::setPublic(qint32 public) {
    this->public = public;
}

bool
SWGVariable::getCauseOnly() {
    return cause_only;
}
void
SWGVariable::setCauseOnly(bool cause_only) {
    this->cause_only = cause_only;
}

float
SWGVariable::getMostCommonValue() {
    return most_common_value;
}
void
SWGVariable::setMostCommonValue(float most_common_value) {
    this->most_common_value = most_common_value;
}

qint32
SWGVariable::getMostCommonUnitId() {
    return most_common_unit_id;
}
void
SWGVariable::setMostCommonUnitId(qint32 most_common_unit_id) {
    this->most_common_unit_id = most_common_unit_id;
}

float
SWGVariable::getStandardDeviation() {
    return standard_deviation;
}
void
SWGVariable::setStandardDeviation(float standard_deviation) {
    this->standard_deviation = standard_deviation;
}

float
SWGVariable::getVariance() {
    return variance;
}
void
SWGVariable::setVariance(float variance) {
    this->variance = variance;
}

float
SWGVariable::getMean() {
    return mean;
}
void
SWGVariable::setMean(float mean) {
    this->mean = mean;
}

float
SWGVariable::getMedian() {
    return median;
}
void
SWGVariable::setMedian(float median) {
    this->median = median;
}

float
SWGVariable::getNumberOfMeasurements() {
    return number_of_measurements;
}
void
SWGVariable::setNumberOfMeasurements(float number_of_measurements) {
    this->number_of_measurements = number_of_measurements;
}

float
SWGVariable::getNumberOfUniqueValues() {
    return number_of_unique_values;
}
void
SWGVariable::setNumberOfUniqueValues(float number_of_unique_values) {
    this->number_of_unique_values = number_of_unique_values;
}

float
SWGVariable::getSkewness() {
    return skewness;
}
void
SWGVariable::setSkewness(float skewness) {
    this->skewness = skewness;
}

float
SWGVariable::getKurtosis() {
    return kurtosis;
}
void
SWGVariable::setKurtosis(float kurtosis) {
    this->kurtosis = kurtosis;
}

QString*
SWGVariable::getStatus() {
    return status;
}
void
SWGVariable::setStatus(QString* status) {
    this->status = status;
}

QString*
SWGVariable::getErrorMessage() {
    return error_message;
}
void
SWGVariable::setErrorMessage(QString* error_message) {
    this->error_message = error_message;
}

QDateTime*
SWGVariable::getLastSuccessfulUpdateTime() {
    return last_successful_update_time;
}
void
SWGVariable::setLastSuccessfulUpdateTime(QDateTime* last_successful_update_time) {
    this->last_successful_update_time = last_successful_update_time;
}

QDateTime*
SWGVariable::getCreatedAt() {
    return created_at;
}
void
SWGVariable::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGVariable::getUpdatedAt() {
    return updated_at;
}
void
SWGVariable::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}

QString*
SWGVariable::getProductUrl() {
    return product_url;
}
void
SWGVariable::setProductUrl(QString* product_url) {
    this->product_url = product_url;
}

QString*
SWGVariable::getImageUrl() {
    return image_url;
}
void
SWGVariable::setImageUrl(QString* image_url) {
    this->image_url = image_url;
}

float
SWGVariable::getPrice() {
    return price;
}
void
SWGVariable::setPrice(float price) {
    this->price = price;
}

qint32
SWGVariable::getNumberOfUserVariables() {
    return number_of_user_variables;
}
void
SWGVariable::setNumberOfUserVariables(qint32 number_of_user_variables) {
    this->number_of_user_variables = number_of_user_variables;
}

bool
SWGVariable::getOutcome() {
    return outcome;
}
void
SWGVariable::setOutcome(bool outcome) {
    this->outcome = outcome;
}

float
SWGVariable::getMinimumRecordedValue() {
    return minimum_recorded_value;
}
void
SWGVariable::setMinimumRecordedValue(float minimum_recorded_value) {
    this->minimum_recorded_value = minimum_recorded_value;
}

float
SWGVariable::getMaximumRecordedValue() {
    return maximum_recorded_value;
}
void
SWGVariable::setMaximumRecordedValue(float maximum_recorded_value) {
    this->maximum_recorded_value = maximum_recorded_value;
}



} /* namespace Swagger */

