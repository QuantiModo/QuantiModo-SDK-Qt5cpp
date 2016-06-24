/**
 * QuantiModo
 * Welcome to QuantiModo API! QuantiModo makes it easy to retrieve normalized user data from a wide array of devices and applications. [Learn about QuantiModo](https://quantimo.do) or contact us at <api@quantimo.do>.         Before you get started, you will need to: * Sign in/Sign up, and add some data at [https://app.quantimo.do/api/v2/account/connectors](https://app.quantimo.do/api/v2/account/connectors) to try out the API for yourself * Create an app to get your client id and secret at [https://app.quantimo.do/api/v2/apps](https://app.quantimo.do/api/v2/apps) * As long as you're signed in, it will use your browser's cookie for authentication.  However, client applications must use OAuth2 tokens to access the API.     ## Application Endpoints These endpoints give you access to all authorized users' data for that application. ### Getting Application Token Make a `POST` request to `/api/v2/oauth/access_token`         * `grant_type` Must be `client_credentials`.         * `clientId` Your application's clientId.         * `client_secret` Your application's client_secret.         * `redirect_uri` Your application's redirect url.                ## Example Queries ### Query Options The standard query options for QuantiModo API are as described in the table below. These are the available query options in QuantiModo API: <table>            <thead>                <tr>                    <th>Parameter</th>                    <th>Description</th>                </tr>            </thead>            <tbody>                <tr>                    <td>limit</td>                    <td>The LIMIT is used to limit the number of results returned.  So if you have 1000 results, but only want to the first 10, you would set this to 10 and offset to 0. The maximum limit is 200 records.</td>                </tr>                <tr>                    <td>offset</td>                    <td>Suppose you wanted to show results 11-20. You'd set the    offset to 10 and the limit to 10.</td>                </tr>                <tr>                    <td>sort</td>                    <td>Sort by given field. If the field is prefixed with '-', it    will sort in descending order.</td>                </tr>            </tbody>        </table>         ### Pagination Conventions Since the maximum limit is 200 records, to get more than that you'll have to make multiple API calls and page through the results. To retrieve all the data, you can iterate through data by using the `limit` and `offset` query parameters.For example, if you want to retrieve data from 61-80 then you can use a query with the following parameters,         `/v2/variables?limit=20&offset=60`         Generally, you'll be retrieving new or updated user data. To avoid unnecessary API calls, you'll want to store your last refresh time locally.  Initially, it should be set to 0. Then whenever you make a request to get new data, you should limit the returned results to those updated since your last refresh by appending append         `?lastUpdated=(ge)&quot2013-01-D01T01:01:01&quot`         to your request.         Also for better pagination, you can get link to the records of first, last, next and previous page from response headers: * `Total-Count` - Total number of results for given query * `Link-First` - Link to get first page records * `Link-Last` - Link to get last page records * `Link-Prev` - Link to get previous records set * `Link-Next` - Link to get next records set         Remember, response header will be only sent when the record set is available. e.g. You will not get a ```Link-Last``` & ```Link-Next``` when you query for the last page.         ### Filter operators support API supports the following operators with filter parameters: <br> **Comparison operators**         Comparison operators allow you to limit results to those greater than, less than, or equal to a specified value for a specified attribute. These operators can be used with strings, numbers, and dates. The following comparison operators are available: * `gt` for `greater than` comparison * `ge` for `greater than or equal` comparison * `lt` for `less than` comparison * `le` for `less than or equal` comparison         They are included in queries using the following format:         `(<operator>)<value>`         For example, in order to filter value which is greater than 21, the following query parameter should be used:         `?value=(gt)21` <br><br> **Equals/In Operators**         It also allows filtering by the exact value of an attribute or by a set of values, depending on the type of value passed as a query parameter. If the value contains commas, the parameter is split on commas and used as array input for `IN` filtering, otherwise the exact match is applied. In order to only show records which have the value 42, the following query should be used:         `?value=42`         In order to filter records which have value 42 or 43, the following query should be used:         `?value=42,43` <br><br> **Like operators**         Like operators allow filtering using `LIKE` query. This operator is triggered if exact match operator is used, but value contains `%` sign as the first or last character. In order to filter records which category that start with `Food`, the following query should be used:         `?category=Food%` <br><br> **Negation operator**         It is possible to get negated results of a query by prefixed the operator with `!`. Some examples:         `//filter records except those with value are not 42 or 43`<br> `?value=!42,43`         `//filter records with value not greater than 21`<br> `?value=!(ge)21` <br><br> **Multiple constraints for single attribute**         It is possible to apply multiple constraints by providing an array of query filters:         Filter all records which value is greater than 20.2 and less than 20.3<br> `?value[]=(gt)20.2&value[]=(lt)20.3`         Filter all records which value is greater than 20.2 and less than 20.3 but not 20.2778<br> `?value[]=(gt)20.2&value[]=(lt)20.3&value[]=!20.2778`<br><br> 
 *
 * OpenAPI spec version: 2.0.6
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "SWGUserVariable.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserVariable::SWGUserVariable(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserVariable::SWGUserVariable() {
    init();
}

SWGUserVariable::~SWGUserVariable() {
    this->cleanup();
}

void
SWGUserVariable::init() {
    parent_id = 0;
user_id = 0;
client_id = new QString("");
variable_id = 0;
default_unit_id = 0;
minimum_allowed_value = 0.0f;
maximum_allowed_value = 0.0f;
filling_value = 0.0f;
join_with = 0;
onset_delay = 0;
duration_of_action = 0;
variable_category_id = 0;
updated = 0;
public = 0;
cause_only = false;
filling_type = new QString("");
number_of_measurements = 0;
number_of_processed_measurements = 0;
measurements_at_last_analysis = 0;
last_unit_id = 0;
last_original_unit_id = 0;
last_value = 0.0f;
last_original_value = 0;
last_source_id = 0;
number_of_correlations = 0;
status = new QString("");
error_message = new QString("");
last_successful_update_time = NULL;
standard_deviation = 0.0f;
variance = 0.0f;
minimum_recorded_value = 0.0f;
maximum_recorded_daily_value = 0.0f;
mean = 0.0f;
median = 0.0f;
most_common_unit_id = 0;
most_common_value = 0.0f;
number_of_unique_daily_values = 0.0f;
number_of_changes = 0;
skewness = 0.0f;
kurtosis = 0.0f;
latitude = 0.0f;
longitude = 0.0f;
location = new QString("");
experiment_start_time = NULL;
experiment_end_time = NULL;
created_at = NULL;
updated_at = NULL;
outcome = false;
sources = new QString("");
earliest_source_time = 0;
latest_source_time = 0;
earliest_measurement_time = 0;
latest_measurement_time = 0;
earliest_filling_time = 0;
latest_filling_time = 0;
}

void
SWGUserVariable::cleanup() {
    

if(client_id != NULL) {
        delete client_id;
    }












if(filling_type != NULL) {
        delete filling_type;
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














if(location != NULL) {
        delete location;
    }
if(experiment_start_time != NULL) {
        delete experiment_start_time;
    }
if(experiment_end_time != NULL) {
        delete experiment_end_time;
    }
if(created_at != NULL) {
        delete created_at;
    }
if(updated_at != NULL) {
        delete updated_at;
    }

if(sources != NULL) {
        delete sources;
    }






}

SWGUserVariable*
SWGUserVariable::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserVariable::fromJsonObject(QJsonObject &pJson) {
    setValue(&parent_id, pJson["parent_id"], "qint32", "");
setValue(&user_id, pJson["user_id"], "qint32", "");
setValue(&client_id, pJson["client_id"], "QString", "QString");
setValue(&variable_id, pJson["variable_id"], "qint32", "");
setValue(&default_unit_id, pJson["default_unit_id"], "qint32", "");
setValue(&minimum_allowed_value, pJson["minimum_allowed_value"], "float", "");
setValue(&maximum_allowed_value, pJson["maximum_allowed_value"], "float", "");
setValue(&filling_value, pJson["filling_value"], "float", "");
setValue(&join_with, pJson["join_with"], "qint32", "");
setValue(&onset_delay, pJson["onset_delay"], "qint32", "");
setValue(&duration_of_action, pJson["duration_of_action"], "qint32", "");
setValue(&variable_category_id, pJson["variable_category_id"], "qint32", "");
setValue(&updated, pJson["updated"], "qint32", "");
setValue(&public, pJson["public"], "qint32", "");
setValue(&cause_only, pJson["cause_only"], "bool", "");
setValue(&filling_type, pJson["filling_type"], "QString", "QString");
setValue(&number_of_measurements, pJson["number_of_measurements"], "qint32", "");
setValue(&number_of_processed_measurements, pJson["number_of_processed_measurements"], "qint32", "");
setValue(&measurements_at_last_analysis, pJson["measurements_at_last_analysis"], "qint32", "");
setValue(&last_unit_id, pJson["last_unit_id"], "qint32", "");
setValue(&last_original_unit_id, pJson["last_original_unit_id"], "qint32", "");
setValue(&last_value, pJson["last_value"], "float", "");
setValue(&last_original_value, pJson["last_original_value"], "qint32", "");
setValue(&last_source_id, pJson["last_source_id"], "qint32", "");
setValue(&number_of_correlations, pJson["number_of_correlations"], "qint32", "");
setValue(&status, pJson["status"], "QString", "QString");
setValue(&error_message, pJson["error_message"], "QString", "QString");
setValue(&last_successful_update_time, pJson["last_successful_update_time"], "QDateTime", "QDateTime");
setValue(&standard_deviation, pJson["standard_deviation"], "float", "");
setValue(&variance, pJson["variance"], "float", "");
setValue(&minimum_recorded_value, pJson["minimum_recorded_value"], "float", "");
setValue(&maximum_recorded_daily_value, pJson["maximum_recorded_daily_value"], "float", "");
setValue(&mean, pJson["mean"], "float", "");
setValue(&median, pJson["median"], "float", "");
setValue(&most_common_unit_id, pJson["most_common_unit_id"], "qint32", "");
setValue(&most_common_value, pJson["most_common_value"], "float", "");
setValue(&number_of_unique_daily_values, pJson["number_of_unique_daily_values"], "float", "");
setValue(&number_of_changes, pJson["number_of_changes"], "qint32", "");
setValue(&skewness, pJson["skewness"], "float", "");
setValue(&kurtosis, pJson["kurtosis"], "float", "");
setValue(&latitude, pJson["latitude"], "float", "");
setValue(&longitude, pJson["longitude"], "float", "");
setValue(&location, pJson["location"], "QString", "QString");
setValue(&experiment_start_time, pJson["experiment_start_time"], "QDateTime", "QDateTime");
setValue(&experiment_end_time, pJson["experiment_end_time"], "QDateTime", "QDateTime");
setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
setValue(&outcome, pJson["outcome"], "bool", "");
setValue(&sources, pJson["sources"], "QString", "QString");
setValue(&earliest_source_time, pJson["earliest_source_time"], "qint32", "");
setValue(&latest_source_time, pJson["latest_source_time"], "qint32", "");
setValue(&earliest_measurement_time, pJson["earliest_measurement_time"], "qint32", "");
setValue(&latest_measurement_time, pJson["latest_measurement_time"], "qint32", "");
setValue(&earliest_filling_time, pJson["earliest_filling_time"], "qint32", "");
setValue(&latest_filling_time, pJson["latest_filling_time"], "qint32", "");
}

QString
SWGUserVariable::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserVariable::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("parent_id", QJsonValue(parent_id));
obj->insert("user_id", QJsonValue(user_id));

    
    toJsonValue(QString("client_id"), client_id, obj, QString("QString"));
    
        
obj->insert("variable_id", QJsonValue(variable_id));
obj->insert("default_unit_id", QJsonValue(default_unit_id));
obj->insert("minimum_allowed_value", QJsonValue(minimum_allowed_value));
obj->insert("maximum_allowed_value", QJsonValue(maximum_allowed_value));
obj->insert("filling_value", QJsonValue(filling_value));
obj->insert("join_with", QJsonValue(join_with));
obj->insert("onset_delay", QJsonValue(onset_delay));
obj->insert("duration_of_action", QJsonValue(duration_of_action));
obj->insert("variable_category_id", QJsonValue(variable_category_id));
obj->insert("updated", QJsonValue(updated));
obj->insert("public", QJsonValue(public));
obj->insert("cause_only", QJsonValue(cause_only));

    
    toJsonValue(QString("filling_type"), filling_type, obj, QString("QString"));
    
        
obj->insert("number_of_measurements", QJsonValue(number_of_measurements));
obj->insert("number_of_processed_measurements", QJsonValue(number_of_processed_measurements));
obj->insert("measurements_at_last_analysis", QJsonValue(measurements_at_last_analysis));
obj->insert("last_unit_id", QJsonValue(last_unit_id));
obj->insert("last_original_unit_id", QJsonValue(last_original_unit_id));
obj->insert("last_value", QJsonValue(last_value));
obj->insert("last_original_value", QJsonValue(last_original_value));
obj->insert("last_source_id", QJsonValue(last_source_id));
obj->insert("number_of_correlations", QJsonValue(number_of_correlations));

    
    toJsonValue(QString("status"), status, obj, QString("QString"));
    
        

    
    toJsonValue(QString("error_message"), error_message, obj, QString("QString"));
    
        

    
    toJsonValue(QString("last_successful_update_time"), last_successful_update_time, obj, QString("QDateTime"));
    
        
obj->insert("standard_deviation", QJsonValue(standard_deviation));
obj->insert("variance", QJsonValue(variance));
obj->insert("minimum_recorded_value", QJsonValue(minimum_recorded_value));
obj->insert("maximum_recorded_daily_value", QJsonValue(maximum_recorded_daily_value));
obj->insert("mean", QJsonValue(mean));
obj->insert("median", QJsonValue(median));
obj->insert("most_common_unit_id", QJsonValue(most_common_unit_id));
obj->insert("most_common_value", QJsonValue(most_common_value));
obj->insert("number_of_unique_daily_values", QJsonValue(number_of_unique_daily_values));
obj->insert("number_of_changes", QJsonValue(number_of_changes));
obj->insert("skewness", QJsonValue(skewness));
obj->insert("kurtosis", QJsonValue(kurtosis));
obj->insert("latitude", QJsonValue(latitude));
obj->insert("longitude", QJsonValue(longitude));

    
    toJsonValue(QString("location"), location, obj, QString("QString"));
    
        

    
    toJsonValue(QString("experiment_start_time"), experiment_start_time, obj, QString("QDateTime"));
    
        

    
    toJsonValue(QString("experiment_end_time"), experiment_end_time, obj, QString("QDateTime"));
    
        

    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
        

    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
        
obj->insert("outcome", QJsonValue(outcome));

    
    toJsonValue(QString("sources"), sources, obj, QString("QString"));
    
        
obj->insert("earliest_source_time", QJsonValue(earliest_source_time));
obj->insert("latest_source_time", QJsonValue(latest_source_time));
obj->insert("earliest_measurement_time", QJsonValue(earliest_measurement_time));
obj->insert("latest_measurement_time", QJsonValue(latest_measurement_time));
obj->insert("earliest_filling_time", QJsonValue(earliest_filling_time));
obj->insert("latest_filling_time", QJsonValue(latest_filling_time));

    return obj;
}

qint32
SWGUserVariable::getParentId() {
    return parent_id;
}
void
SWGUserVariable::setParentId(qint32 parent_id) {
    this->parent_id = parent_id;
}

qint32
SWGUserVariable::getUserId() {
    return user_id;
}
void
SWGUserVariable::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

QString*
SWGUserVariable::getClientId() {
    return client_id;
}
void
SWGUserVariable::setClientId(QString* client_id) {
    this->client_id = client_id;
}

qint32
SWGUserVariable::getVariableId() {
    return variable_id;
}
void
SWGUserVariable::setVariableId(qint32 variable_id) {
    this->variable_id = variable_id;
}

qint32
SWGUserVariable::getDefaultUnitId() {
    return default_unit_id;
}
void
SWGUserVariable::setDefaultUnitId(qint32 default_unit_id) {
    this->default_unit_id = default_unit_id;
}

float
SWGUserVariable::getMinimumAllowedValue() {
    return minimum_allowed_value;
}
void
SWGUserVariable::setMinimumAllowedValue(float minimum_allowed_value) {
    this->minimum_allowed_value = minimum_allowed_value;
}

float
SWGUserVariable::getMaximumAllowedValue() {
    return maximum_allowed_value;
}
void
SWGUserVariable::setMaximumAllowedValue(float maximum_allowed_value) {
    this->maximum_allowed_value = maximum_allowed_value;
}

float
SWGUserVariable::getFillingValue() {
    return filling_value;
}
void
SWGUserVariable::setFillingValue(float filling_value) {
    this->filling_value = filling_value;
}

qint32
SWGUserVariable::getJoinWith() {
    return join_with;
}
void
SWGUserVariable::setJoinWith(qint32 join_with) {
    this->join_with = join_with;
}

qint32
SWGUserVariable::getOnsetDelay() {
    return onset_delay;
}
void
SWGUserVariable::setOnsetDelay(qint32 onset_delay) {
    this->onset_delay = onset_delay;
}

qint32
SWGUserVariable::getDurationOfAction() {
    return duration_of_action;
}
void
SWGUserVariable::setDurationOfAction(qint32 duration_of_action) {
    this->duration_of_action = duration_of_action;
}

qint32
SWGUserVariable::getVariableCategoryId() {
    return variable_category_id;
}
void
SWGUserVariable::setVariableCategoryId(qint32 variable_category_id) {
    this->variable_category_id = variable_category_id;
}

qint32
SWGUserVariable::getUpdated() {
    return updated;
}
void
SWGUserVariable::setUpdated(qint32 updated) {
    this->updated = updated;
}

qint32
SWGUserVariable::getPublic() {
    return public;
}
void
SWGUserVariable::setPublic(qint32 public) {
    this->public = public;
}

bool
SWGUserVariable::getCauseOnly() {
    return cause_only;
}
void
SWGUserVariable::setCauseOnly(bool cause_only) {
    this->cause_only = cause_only;
}

QString*
SWGUserVariable::getFillingType() {
    return filling_type;
}
void
SWGUserVariable::setFillingType(QString* filling_type) {
    this->filling_type = filling_type;
}

qint32
SWGUserVariable::getNumberOfMeasurements() {
    return number_of_measurements;
}
void
SWGUserVariable::setNumberOfMeasurements(qint32 number_of_measurements) {
    this->number_of_measurements = number_of_measurements;
}

qint32
SWGUserVariable::getNumberOfProcessedMeasurements() {
    return number_of_processed_measurements;
}
void
SWGUserVariable::setNumberOfProcessedMeasurements(qint32 number_of_processed_measurements) {
    this->number_of_processed_measurements = number_of_processed_measurements;
}

qint32
SWGUserVariable::getMeasurementsAtLastAnalysis() {
    return measurements_at_last_analysis;
}
void
SWGUserVariable::setMeasurementsAtLastAnalysis(qint32 measurements_at_last_analysis) {
    this->measurements_at_last_analysis = measurements_at_last_analysis;
}

qint32
SWGUserVariable::getLastUnitId() {
    return last_unit_id;
}
void
SWGUserVariable::setLastUnitId(qint32 last_unit_id) {
    this->last_unit_id = last_unit_id;
}

qint32
SWGUserVariable::getLastOriginalUnitId() {
    return last_original_unit_id;
}
void
SWGUserVariable::setLastOriginalUnitId(qint32 last_original_unit_id) {
    this->last_original_unit_id = last_original_unit_id;
}

float
SWGUserVariable::getLastValue() {
    return last_value;
}
void
SWGUserVariable::setLastValue(float last_value) {
    this->last_value = last_value;
}

qint32
SWGUserVariable::getLastOriginalValue() {
    return last_original_value;
}
void
SWGUserVariable::setLastOriginalValue(qint32 last_original_value) {
    this->last_original_value = last_original_value;
}

qint32
SWGUserVariable::getLastSourceId() {
    return last_source_id;
}
void
SWGUserVariable::setLastSourceId(qint32 last_source_id) {
    this->last_source_id = last_source_id;
}

qint32
SWGUserVariable::getNumberOfCorrelations() {
    return number_of_correlations;
}
void
SWGUserVariable::setNumberOfCorrelations(qint32 number_of_correlations) {
    this->number_of_correlations = number_of_correlations;
}

QString*
SWGUserVariable::getStatus() {
    return status;
}
void
SWGUserVariable::setStatus(QString* status) {
    this->status = status;
}

QString*
SWGUserVariable::getErrorMessage() {
    return error_message;
}
void
SWGUserVariable::setErrorMessage(QString* error_message) {
    this->error_message = error_message;
}

QDateTime*
SWGUserVariable::getLastSuccessfulUpdateTime() {
    return last_successful_update_time;
}
void
SWGUserVariable::setLastSuccessfulUpdateTime(QDateTime* last_successful_update_time) {
    this->last_successful_update_time = last_successful_update_time;
}

float
SWGUserVariable::getStandardDeviation() {
    return standard_deviation;
}
void
SWGUserVariable::setStandardDeviation(float standard_deviation) {
    this->standard_deviation = standard_deviation;
}

float
SWGUserVariable::getVariance() {
    return variance;
}
void
SWGUserVariable::setVariance(float variance) {
    this->variance = variance;
}

float
SWGUserVariable::getMinimumRecordedValue() {
    return minimum_recorded_value;
}
void
SWGUserVariable::setMinimumRecordedValue(float minimum_recorded_value) {
    this->minimum_recorded_value = minimum_recorded_value;
}

float
SWGUserVariable::getMaximumRecordedDailyValue() {
    return maximum_recorded_daily_value;
}
void
SWGUserVariable::setMaximumRecordedDailyValue(float maximum_recorded_daily_value) {
    this->maximum_recorded_daily_value = maximum_recorded_daily_value;
}

float
SWGUserVariable::getMean() {
    return mean;
}
void
SWGUserVariable::setMean(float mean) {
    this->mean = mean;
}

float
SWGUserVariable::getMedian() {
    return median;
}
void
SWGUserVariable::setMedian(float median) {
    this->median = median;
}

qint32
SWGUserVariable::getMostCommonUnitId() {
    return most_common_unit_id;
}
void
SWGUserVariable::setMostCommonUnitId(qint32 most_common_unit_id) {
    this->most_common_unit_id = most_common_unit_id;
}

float
SWGUserVariable::getMostCommonValue() {
    return most_common_value;
}
void
SWGUserVariable::setMostCommonValue(float most_common_value) {
    this->most_common_value = most_common_value;
}

float
SWGUserVariable::getNumberOfUniqueDailyValues() {
    return number_of_unique_daily_values;
}
void
SWGUserVariable::setNumberOfUniqueDailyValues(float number_of_unique_daily_values) {
    this->number_of_unique_daily_values = number_of_unique_daily_values;
}

qint32
SWGUserVariable::getNumberOfChanges() {
    return number_of_changes;
}
void
SWGUserVariable::setNumberOfChanges(qint32 number_of_changes) {
    this->number_of_changes = number_of_changes;
}

float
SWGUserVariable::getSkewness() {
    return skewness;
}
void
SWGUserVariable::setSkewness(float skewness) {
    this->skewness = skewness;
}

float
SWGUserVariable::getKurtosis() {
    return kurtosis;
}
void
SWGUserVariable::setKurtosis(float kurtosis) {
    this->kurtosis = kurtosis;
}

float
SWGUserVariable::getLatitude() {
    return latitude;
}
void
SWGUserVariable::setLatitude(float latitude) {
    this->latitude = latitude;
}

float
SWGUserVariable::getLongitude() {
    return longitude;
}
void
SWGUserVariable::setLongitude(float longitude) {
    this->longitude = longitude;
}

QString*
SWGUserVariable::getLocation() {
    return location;
}
void
SWGUserVariable::setLocation(QString* location) {
    this->location = location;
}

QDateTime*
SWGUserVariable::getExperimentStartTime() {
    return experiment_start_time;
}
void
SWGUserVariable::setExperimentStartTime(QDateTime* experiment_start_time) {
    this->experiment_start_time = experiment_start_time;
}

QDateTime*
SWGUserVariable::getExperimentEndTime() {
    return experiment_end_time;
}
void
SWGUserVariable::setExperimentEndTime(QDateTime* experiment_end_time) {
    this->experiment_end_time = experiment_end_time;
}

QDateTime*
SWGUserVariable::getCreatedAt() {
    return created_at;
}
void
SWGUserVariable::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGUserVariable::getUpdatedAt() {
    return updated_at;
}
void
SWGUserVariable::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}

bool
SWGUserVariable::getOutcome() {
    return outcome;
}
void
SWGUserVariable::setOutcome(bool outcome) {
    this->outcome = outcome;
}

QString*
SWGUserVariable::getSources() {
    return sources;
}
void
SWGUserVariable::setSources(QString* sources) {
    this->sources = sources;
}

qint32
SWGUserVariable::getEarliestSourceTime() {
    return earliest_source_time;
}
void
SWGUserVariable::setEarliestSourceTime(qint32 earliest_source_time) {
    this->earliest_source_time = earliest_source_time;
}

qint32
SWGUserVariable::getLatestSourceTime() {
    return latest_source_time;
}
void
SWGUserVariable::setLatestSourceTime(qint32 latest_source_time) {
    this->latest_source_time = latest_source_time;
}

qint32
SWGUserVariable::getEarliestMeasurementTime() {
    return earliest_measurement_time;
}
void
SWGUserVariable::setEarliestMeasurementTime(qint32 earliest_measurement_time) {
    this->earliest_measurement_time = earliest_measurement_time;
}

qint32
SWGUserVariable::getLatestMeasurementTime() {
    return latest_measurement_time;
}
void
SWGUserVariable::setLatestMeasurementTime(qint32 latest_measurement_time) {
    this->latest_measurement_time = latest_measurement_time;
}

qint32
SWGUserVariable::getEarliestFillingTime() {
    return earliest_filling_time;
}
void
SWGUserVariable::setEarliestFillingTime(qint32 earliest_filling_time) {
    this->earliest_filling_time = earliest_filling_time;
}

qint32
SWGUserVariable::getLatestFillingTime() {
    return latest_filling_time;
}
void
SWGUserVariable::setLatestFillingTime(qint32 latest_filling_time) {
    this->latest_filling_time = latest_filling_time;
}



} /* namespace Swagger */

