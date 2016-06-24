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

/*
 * SWGUserVariable.h
 * 
 * 
 */

#ifndef SWGUserVariable_H_
#define SWGUserVariable_H_

#include <QJsonObject>


#include <QDateTime>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserVariable: public SWGObject {
public:
    SWGUserVariable();
    SWGUserVariable(QString* json);
    virtual ~SWGUserVariable();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserVariable* fromJson(QString &jsonString);

    qint32 getParentId();
    void setParentId(qint32 parent_id);
qint32 getUserId();
    void setUserId(qint32 user_id);
QString* getClientId();
    void setClientId(QString* client_id);
qint32 getVariableId();
    void setVariableId(qint32 variable_id);
qint32 getDefaultUnitId();
    void setDefaultUnitId(qint32 default_unit_id);
float getMinimumAllowedValue();
    void setMinimumAllowedValue(float minimum_allowed_value);
float getMaximumAllowedValue();
    void setMaximumAllowedValue(float maximum_allowed_value);
float getFillingValue();
    void setFillingValue(float filling_value);
qint32 getJoinWith();
    void setJoinWith(qint32 join_with);
qint32 getOnsetDelay();
    void setOnsetDelay(qint32 onset_delay);
qint32 getDurationOfAction();
    void setDurationOfAction(qint32 duration_of_action);
qint32 getVariableCategoryId();
    void setVariableCategoryId(qint32 variable_category_id);
qint32 getUpdated();
    void setUpdated(qint32 updated);
qint32 getPublic();
    void setPublic(qint32 public);
bool getCauseOnly();
    void setCauseOnly(bool cause_only);
QString* getFillingType();
    void setFillingType(QString* filling_type);
qint32 getNumberOfMeasurements();
    void setNumberOfMeasurements(qint32 number_of_measurements);
qint32 getNumberOfProcessedMeasurements();
    void setNumberOfProcessedMeasurements(qint32 number_of_processed_measurements);
qint32 getMeasurementsAtLastAnalysis();
    void setMeasurementsAtLastAnalysis(qint32 measurements_at_last_analysis);
qint32 getLastUnitId();
    void setLastUnitId(qint32 last_unit_id);
qint32 getLastOriginalUnitId();
    void setLastOriginalUnitId(qint32 last_original_unit_id);
float getLastValue();
    void setLastValue(float last_value);
qint32 getLastOriginalValue();
    void setLastOriginalValue(qint32 last_original_value);
qint32 getLastSourceId();
    void setLastSourceId(qint32 last_source_id);
qint32 getNumberOfCorrelations();
    void setNumberOfCorrelations(qint32 number_of_correlations);
QString* getStatus();
    void setStatus(QString* status);
QString* getErrorMessage();
    void setErrorMessage(QString* error_message);
QDateTime* getLastSuccessfulUpdateTime();
    void setLastSuccessfulUpdateTime(QDateTime* last_successful_update_time);
float getStandardDeviation();
    void setStandardDeviation(float standard_deviation);
float getVariance();
    void setVariance(float variance);
float getMinimumRecordedValue();
    void setMinimumRecordedValue(float minimum_recorded_value);
float getMaximumRecordedDailyValue();
    void setMaximumRecordedDailyValue(float maximum_recorded_daily_value);
float getMean();
    void setMean(float mean);
float getMedian();
    void setMedian(float median);
qint32 getMostCommonUnitId();
    void setMostCommonUnitId(qint32 most_common_unit_id);
float getMostCommonValue();
    void setMostCommonValue(float most_common_value);
float getNumberOfUniqueDailyValues();
    void setNumberOfUniqueDailyValues(float number_of_unique_daily_values);
qint32 getNumberOfChanges();
    void setNumberOfChanges(qint32 number_of_changes);
float getSkewness();
    void setSkewness(float skewness);
float getKurtosis();
    void setKurtosis(float kurtosis);
float getLatitude();
    void setLatitude(float latitude);
float getLongitude();
    void setLongitude(float longitude);
QString* getLocation();
    void setLocation(QString* location);
QDateTime* getExperimentStartTime();
    void setExperimentStartTime(QDateTime* experiment_start_time);
QDateTime* getExperimentEndTime();
    void setExperimentEndTime(QDateTime* experiment_end_time);
QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
bool getOutcome();
    void setOutcome(bool outcome);
QString* getSources();
    void setSources(QString* sources);
qint32 getEarliestSourceTime();
    void setEarliestSourceTime(qint32 earliest_source_time);
qint32 getLatestSourceTime();
    void setLatestSourceTime(qint32 latest_source_time);
qint32 getEarliestMeasurementTime();
    void setEarliestMeasurementTime(qint32 earliest_measurement_time);
qint32 getLatestMeasurementTime();
    void setLatestMeasurementTime(qint32 latest_measurement_time);
qint32 getEarliestFillingTime();
    void setEarliestFillingTime(qint32 earliest_filling_time);
qint32 getLatestFillingTime();
    void setLatestFillingTime(qint32 latest_filling_time);

private:
    qint32 parent_id;
qint32 user_id;
QString* client_id;
qint32 variable_id;
qint32 default_unit_id;
float minimum_allowed_value;
float maximum_allowed_value;
float filling_value;
qint32 join_with;
qint32 onset_delay;
qint32 duration_of_action;
qint32 variable_category_id;
qint32 updated;
qint32 public;
bool cause_only;
QString* filling_type;
qint32 number_of_measurements;
qint32 number_of_processed_measurements;
qint32 measurements_at_last_analysis;
qint32 last_unit_id;
qint32 last_original_unit_id;
float last_value;
qint32 last_original_value;
qint32 last_source_id;
qint32 number_of_correlations;
QString* status;
QString* error_message;
QDateTime* last_successful_update_time;
float standard_deviation;
float variance;
float minimum_recorded_value;
float maximum_recorded_daily_value;
float mean;
float median;
qint32 most_common_unit_id;
float most_common_value;
float number_of_unique_daily_values;
qint32 number_of_changes;
float skewness;
float kurtosis;
float latitude;
float longitude;
QString* location;
QDateTime* experiment_start_time;
QDateTime* experiment_end_time;
QDateTime* created_at;
QDateTime* updated_at;
bool outcome;
QString* sources;
qint32 earliest_source_time;
qint32 latest_source_time;
qint32 earliest_measurement_time;
qint32 latest_measurement_time;
qint32 earliest_filling_time;
qint32 latest_filling_time;
};

} /* namespace Swagger */

#endif /* SWGUserVariable_H_ */
