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


#include "SWGConnection.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGConnection::SWGConnection(QString* json) {
    init();
    this->fromJson(*json);
}

SWGConnection::SWGConnection() {
    init();
}

SWGConnection::~SWGConnection() {
    this->cleanup();
}

void
SWGConnection::init() {
    id = 0;
user_id = 0;
connector_id = 0;
connect_status = new QString("");
connect_error = new QString("");
update_requested_at = NULL;
update_status = new QString("");
update_error = new QString("");
last_successful_updated_at = NULL;
created_at = NULL;
updated_at = NULL;
}

void
SWGConnection::cleanup() {
    


if(connect_status != NULL) {
        delete connect_status;
    }
if(connect_error != NULL) {
        delete connect_error;
    }
if(update_requested_at != NULL) {
        delete update_requested_at;
    }
if(update_status != NULL) {
        delete update_status;
    }
if(update_error != NULL) {
        delete update_error;
    }
if(last_successful_updated_at != NULL) {
        delete last_successful_updated_at;
    }
if(created_at != NULL) {
        delete created_at;
    }
if(updated_at != NULL) {
        delete updated_at;
    }
}

SWGConnection*
SWGConnection::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGConnection::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
setValue(&user_id, pJson["user_id"], "qint32", "");
setValue(&connector_id, pJson["connector_id"], "qint32", "");
setValue(&connect_status, pJson["connect_status"], "QString", "QString");
setValue(&connect_error, pJson["connect_error"], "QString", "QString");
setValue(&update_requested_at, pJson["update_requested_at"], "QDateTime", "QDateTime");
setValue(&update_status, pJson["update_status"], "QString", "QString");
setValue(&update_error, pJson["update_error"], "QString", "QString");
setValue(&last_successful_updated_at, pJson["last_successful_updated_at"], "QDateTime", "QDateTime");
setValue(&created_at, pJson["created_at"], "QDateTime", "QDateTime");
setValue(&updated_at, pJson["updated_at"], "QDateTime", "QDateTime");
}

QString
SWGConnection::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGConnection::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
obj->insert("user_id", QJsonValue(user_id));
obj->insert("connector_id", QJsonValue(connector_id));

    
    toJsonValue(QString("connect_status"), connect_status, obj, QString("QString"));
    
        

    
    toJsonValue(QString("connect_error"), connect_error, obj, QString("QString"));
    
        

    
    toJsonValue(QString("update_requested_at"), update_requested_at, obj, QString("QDateTime"));
    
        

    
    toJsonValue(QString("update_status"), update_status, obj, QString("QString"));
    
        

    
    toJsonValue(QString("update_error"), update_error, obj, QString("QString"));
    
        

    
    toJsonValue(QString("last_successful_updated_at"), last_successful_updated_at, obj, QString("QDateTime"));
    
        

    
    toJsonValue(QString("created_at"), created_at, obj, QString("QDateTime"));
    
        

    
    toJsonValue(QString("updated_at"), updated_at, obj, QString("QDateTime"));
    
        

    return obj;
}

qint32
SWGConnection::getId() {
    return id;
}
void
SWGConnection::setId(qint32 id) {
    this->id = id;
}

qint32
SWGConnection::getUserId() {
    return user_id;
}
void
SWGConnection::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

qint32
SWGConnection::getConnectorId() {
    return connector_id;
}
void
SWGConnection::setConnectorId(qint32 connector_id) {
    this->connector_id = connector_id;
}

QString*
SWGConnection::getConnectStatus() {
    return connect_status;
}
void
SWGConnection::setConnectStatus(QString* connect_status) {
    this->connect_status = connect_status;
}

QString*
SWGConnection::getConnectError() {
    return connect_error;
}
void
SWGConnection::setConnectError(QString* connect_error) {
    this->connect_error = connect_error;
}

QDateTime*
SWGConnection::getUpdateRequestedAt() {
    return update_requested_at;
}
void
SWGConnection::setUpdateRequestedAt(QDateTime* update_requested_at) {
    this->update_requested_at = update_requested_at;
}

QString*
SWGConnection::getUpdateStatus() {
    return update_status;
}
void
SWGConnection::setUpdateStatus(QString* update_status) {
    this->update_status = update_status;
}

QString*
SWGConnection::getUpdateError() {
    return update_error;
}
void
SWGConnection::setUpdateError(QString* update_error) {
    this->update_error = update_error;
}

QDateTime*
SWGConnection::getLastSuccessfulUpdatedAt() {
    return last_successful_updated_at;
}
void
SWGConnection::setLastSuccessfulUpdatedAt(QDateTime* last_successful_updated_at) {
    this->last_successful_updated_at = last_successful_updated_at;
}

QDateTime*
SWGConnection::getCreatedAt() {
    return created_at;
}
void
SWGConnection::setCreatedAt(QDateTime* created_at) {
    this->created_at = created_at;
}

QDateTime*
SWGConnection::getUpdatedAt() {
    return updated_at;
}
void
SWGConnection::setUpdatedAt(QDateTime* updated_at) {
    this->updated_at = updated_at;
}



} /* namespace Swagger */

