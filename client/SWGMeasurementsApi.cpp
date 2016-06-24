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

#include "SWGMeasurementsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGMeasurementsApi::SWGMeasurementsApi() {}

SWGMeasurementsApi::~SWGMeasurementsApi() {}

SWGMeasurementsApi::SWGMeasurementsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGMeasurementsApi::v1MeasurementSourcesGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurementSources");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementSourcesGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementSourcesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGMeasurementSource* output = static_cast<SWGMeasurementSource*>(create(json, QString("SWGMeasurementSource")));
    

    worker->deleteLater();

    emit v1MeasurementSourcesGetSignal(output);
    
}
void
SWGMeasurementsApi::v1MeasurementSourcesPost(SWGMeasurementSource body, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurementSources");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = body.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementSourcesPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementSourcesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1MeasurementSourcesPostSignal();
}
void
SWGMeasurementsApi::v1MeasurementsDailyGet(QString* variableName, QString* accessToken, QString* abbreviatedUnitName, QString* startTime, QString* endTime, qint32 groupingWidth, QString* groupingTimezone, qint32 limit, qint32 offset, qint32 sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurements/daily");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("variableName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variableName)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("abbreviatedUnitName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(abbreviatedUnitName)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("startTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(startTime)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("endTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(endTime)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("groupingWidth"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(groupingWidth)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("groupingTimezone"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(groupingTimezone)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("offset"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(offset)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sort"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sort)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementsDailyGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementsDailyGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGMeasurement* output = static_cast<SWGMeasurement*>(create(json, QString("SWGMeasurement")));
    

    worker->deleteLater();

    emit v1MeasurementsDailyGetSignal(output);
    
}
void
SWGMeasurementsApi::v1MeasurementsDeletePost(SWGMeasurementDelete body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurements/delete");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = body.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementsDeletePostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementsDeletePostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCommonResponse* output = static_cast<SWGCommonResponse*>(create(json, QString("SWGCommonResponse")));
    

    worker->deleteLater();

    emit v1MeasurementsDeletePostSignal(output);
    
}
void
SWGMeasurementsApi::v1MeasurementsGet(QString* accessToken, QString* variableName, QString* variableCategoryName, QString* source, QString* value, QString* lastUpdated, QString* unit, QString* startTime, QString* createdAt, QString* updatedAt, QString* endTime, qint32 groupingWidth, QString* groupingTimezone, qint32 limit, qint32 offset, qint32 sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurements");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("variableName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variableName)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("variableCategoryName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variableCategoryName)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("source"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(source)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("value"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(value)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastUpdated"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastUpdated)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("unit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(unit)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("startTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(startTime)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("createdAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(createdAt)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("updatedAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(updatedAt)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("endTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(endTime)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("groupingWidth"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(groupingWidth)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("groupingTimezone"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(groupingTimezone)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("offset"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(offset)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sort"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sort)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementsGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGMeasurement* output = static_cast<SWGMeasurement*>(create(json, QString("SWGMeasurement")));
    

    worker->deleteLater();

    emit v1MeasurementsGetSignal(output);
    
}
void
SWGMeasurementsApi::v1MeasurementsPost(SWGMeasurementSet body, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurements");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = body.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementsPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1MeasurementsPostSignal();
}
void
SWGMeasurementsApi::v1MeasurementsRangeGet(QString* sources, qint32 user) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurementsRange");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sources"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sources)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("user"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(user)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementsRangeGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementsRangeGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGMeasurementRange* output = static_cast<SWGMeasurementRange*>(create(json, QString("SWGMeasurementRange")));
    

    worker->deleteLater();

    emit v1MeasurementsRangeGetSignal(output);
    
}
void
SWGMeasurementsApi::v2MeasurementsCsvGet(QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v2/measurements/csv");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v2MeasurementsCsvGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v2MeasurementsCsvGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGHttpRequestInputFileElement* output = static_cast<SWGHttpRequestInputFileElement*>(create(json, QString("SWGHttpRequestInputFileElement")));
    

    worker->deleteLater();

    emit v2MeasurementsCsvGetSignal(output);
    
}
void
SWGMeasurementsApi::v2MeasurementsIdDelete(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v2/measurements/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v2MeasurementsIdDeleteCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v2MeasurementsIdDeleteCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGInline_response_200_12* output = static_cast<SWGInline_response_200_12*>(create(json, QString("SWGInline_response_200_12")));
    

    worker->deleteLater();

    emit v2MeasurementsIdDeleteSignal(output);
    
}
void
SWGMeasurementsApi::v2MeasurementsIdGet(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v2/measurements/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v2MeasurementsIdGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v2MeasurementsIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGInline_response_200_11* output = static_cast<SWGInline_response_200_11*>(create(json, QString("SWGInline_response_200_11")));
    

    worker->deleteLater();

    emit v2MeasurementsIdGetSignal(output);
    
}
void
SWGMeasurementsApi::v2MeasurementsIdPut(qint32 id, QString* accessToken, SWGMeasurement body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v2/measurements/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = body.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v2MeasurementsIdPutCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v2MeasurementsIdPutCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGInline_response_200_12* output = static_cast<SWGInline_response_200_12*>(create(json, QString("SWGInline_response_200_12")));
    

    worker->deleteLater();

    emit v2MeasurementsIdPutSignal(output);
    
}
void
SWGMeasurementsApi::v2MeasurementsRequestCsvPost(QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v2/measurements/request_csv");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v2MeasurementsRequestCsvPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v2MeasurementsRequestCsvPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    
    qint32 output;  // TODO add primitive output support
        

    worker->deleteLater();

    emit v2MeasurementsRequestCsvPostSignal(output);
    
}
void
SWGMeasurementsApi::v2MeasurementsRequestPdfPost(QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v2/measurements/request_pdf");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v2MeasurementsRequestPdfPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v2MeasurementsRequestPdfPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    
    qint32 output;  // TODO add primitive output support
        

    worker->deleteLater();

    emit v2MeasurementsRequestPdfPostSignal(output);
    
}
void
SWGMeasurementsApi::v2MeasurementsRequestXlsPost(QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v2/measurements/request_xls");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v2MeasurementsRequestXlsPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v2MeasurementsRequestXlsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    
    qint32 output;  // TODO add primitive output support
        

    worker->deleteLater();

    emit v2MeasurementsRequestXlsPostSignal(output);
    
}
} /* namespace Swagger */
