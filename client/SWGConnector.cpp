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

