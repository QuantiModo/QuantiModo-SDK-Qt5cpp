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


#include "SWGVariableUserSource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariableUserSource::SWGVariableUserSource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariableUserSource::SWGVariableUserSource() {
    init();
}

SWGVariableUserSource::~SWGVariableUserSource() {
    this->cleanup();
}

void
SWGVariableUserSource::init() {
    user_id = 0;
variable_id = 0;
source_id = 0;
timestamp = 0;
earliest_measurement_time = 0;
latest_measurement_time = 0;
created_at = NULL;
updated_at = NULL;
}

void
SWGVariableUserSource::cleanup() {
    





if(created_at != NULL) {
        delete created_at;
    }
if(updated_at != NULL) {
        delete updated_at;
    }
}

SWGVariableUserSource*
SWGVariableUserSource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariableUserSource::fromJsonObject(QJsonObject &pJson) {
    setValue(&user_id, pJson["user_id"], "qint32", "");
setValue(&variable_id, pJson["variable_id"], "qint32", "");
setValue(&source_id, pJson["source_id"], "qint32", "");
setValue(&timestamp, pJson["timestamp"], "qint32", "");
setValue(&earliest_measurement_time, pJson["earliest_measurement_time"], "qint32", "");
setValue(&latest_measurement_time, pJson["latest_measurement_time"], "qint32", "");
setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
}

QString
SWGVariableUserSource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariableUserSource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("user_id", QJsonValue(user_id));
obj->insert("variable_id", QJsonValue(variable_id));
obj->insert("source_id", QJsonValue(source_id));
obj->insert("timestamp", QJsonValue(timestamp));
obj->insert("earliest_measurement_time", QJsonValue(earliest_measurement_time));
obj->insert("latest_measurement_time", QJsonValue(latest_measurement_time));

    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
        

    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
        

    return obj;
}

qint32
SWGVariableUserSource::getUserId() {
    return user_id;
}
void
SWGVariableUserSource::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

qint32
SWGVariableUserSource::getVariableId() {
    return variable_id;
}
void
SWGVariableUserSource::setVariableId(qint32 variable_id) {
    this->variable_id = variable_id;
}

qint32
SWGVariableUserSource::getSourceId() {
    return source_id;
}
void
SWGVariableUserSource::setSourceId(qint32 source_id) {
    this->source_id = source_id;
}

qint32
SWGVariableUserSource::getTimestamp() {
    return timestamp;
}
void
SWGVariableUserSource::setTimestamp(qint32 timestamp) {
    this->timestamp = timestamp;
}

qint32
SWGVariableUserSource::getEarliestMeasurementTime() {
    return earliest_measurement_time;
}
void
SWGVariableUserSource::setEarliestMeasurementTime(qint32 earliest_measurement_time) {
    this->earliest_measurement_time = earliest_measurement_time;
}

qint32
SWGVariableUserSource::getLatestMeasurementTime() {
    return latest_measurement_time;
}
void
SWGVariableUserSource::setLatestMeasurementTime(qint32 latest_measurement_time) {
    this->latest_measurement_time = latest_measurement_time;
}

QDateTime*
SWGVariableUserSource::getCreatedAt() {
    return created_at;
}
void
SWGVariableUserSource::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGVariableUserSource::getUpdatedAt() {
    return updated_at;
}
void
SWGVariableUserSource::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

