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

#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGCommonResponse.h"
#include "SWGConnection.h"
#include "SWGConnector.h"
#include "SWGConnectorInfo.h"
#include "SWGConnectorInfoHistoryItem.h"
#include "SWGConnectorInstruction.h"
#include "SWGConversionStep.h"
#include "SWGCorrelation.h"
#include "SWGCredential.h"
#include "SWGHumanTime.h"
#include "SWGInline_response_200.h"
#include "SWGInline_response_200_1.h"
#include "SWGInline_response_200_10.h"
#include "SWGInline_response_200_11.h"
#include "SWGInline_response_200_12.h"
#include "SWGInline_response_200_2.h"
#include "SWGInline_response_200_3.h"
#include "SWGInline_response_200_4.h"
#include "SWGInline_response_200_5.h"
#include "SWGInline_response_200_6.h"
#include "SWGInline_response_200_7.h"
#include "SWGInline_response_200_8.h"
#include "SWGInline_response_200_9.h"
#include "SWGJsonErrorResponse.h"
#include "SWGMeasurement.h"
#include "SWGMeasurementDelete.h"
#include "SWGMeasurementRange.h"
#include "SWGMeasurementSet.h"
#include "SWGMeasurementSource.h"
#include "SWGPairs.h"
#include "SWGPermission.h"
#include "SWGPostCorrelation.h"
#include "SWGPostVote.h"
#include "SWGTrackingReminder.h"
#include "SWGTrackingReminderDelete.h"
#include "SWGTrackingReminderNotification.h"
#include "SWGTrackingReminderNotificationSkip.h"
#include "SWGTrackingReminderNotificationSnooze.h"
#include "SWGTrackingReminderNotificationTrack.h"
#include "SWGUnit.h"
#include "SWGUnitCategory.h"
#include "SWGUpdate.h"
#include "SWGUser.h"
#include "SWGUserTag.h"
#include "SWGUserTokenFailedResponse.h"
#include "SWGUserTokenRequest.h"
#include "SWGUserTokenRequestInnerUserField.h"
#include "SWGUserTokenSuccessfulResponse.h"
#include "SWGUserTokenSuccessfulResponseInnerUserField.h"
#include "SWGUserVariable.h"
#include "SWGUserVariableRelationship.h"
#include "SWGUserVariables.h"
#include "SWGValueObject.h"
#include "SWGVariable.h"
#include "SWGVariableCategory.h"
#include "SWGVariableNew.h"
#include "SWGVariableUserSource.h"
#include "SWGVariablesNew.h"
#include "SWGVote.h"
#include "SWGVoteDelete.h"

namespace Swagger {
  inline void* create(QString type) {
    if(QString("SWGCommonResponse").compare(type) == 0) {
      return new SWGCommonResponse();
    }
    if(QString("SWGConnection").compare(type) == 0) {
      return new SWGConnection();
    }
    if(QString("SWGConnector").compare(type) == 0) {
      return new SWGConnector();
    }
    if(QString("SWGConnectorInfo").compare(type) == 0) {
      return new SWGConnectorInfo();
    }
    if(QString("SWGConnectorInfoHistoryItem").compare(type) == 0) {
      return new SWGConnectorInfoHistoryItem();
    }
    if(QString("SWGConnectorInstruction").compare(type) == 0) {
      return new SWGConnectorInstruction();
    }
    if(QString("SWGConversionStep").compare(type) == 0) {
      return new SWGConversionStep();
    }
    if(QString("SWGCorrelation").compare(type) == 0) {
      return new SWGCorrelation();
    }
    if(QString("SWGCredential").compare(type) == 0) {
      return new SWGCredential();
    }
    if(QString("SWGHumanTime").compare(type) == 0) {
      return new SWGHumanTime();
    }
    if(QString("SWGInline_response_200").compare(type) == 0) {
      return new SWGInline_response_200();
    }
    if(QString("SWGInline_response_200_1").compare(type) == 0) {
      return new SWGInline_response_200_1();
    }
    if(QString("SWGInline_response_200_10").compare(type) == 0) {
      return new SWGInline_response_200_10();
    }
    if(QString("SWGInline_response_200_11").compare(type) == 0) {
      return new SWGInline_response_200_11();
    }
    if(QString("SWGInline_response_200_12").compare(type) == 0) {
      return new SWGInline_response_200_12();
    }
    if(QString("SWGInline_response_200_2").compare(type) == 0) {
      return new SWGInline_response_200_2();
    }
    if(QString("SWGInline_response_200_3").compare(type) == 0) {
      return new SWGInline_response_200_3();
    }
    if(QString("SWGInline_response_200_4").compare(type) == 0) {
      return new SWGInline_response_200_4();
    }
    if(QString("SWGInline_response_200_5").compare(type) == 0) {
      return new SWGInline_response_200_5();
    }
    if(QString("SWGInline_response_200_6").compare(type) == 0) {
      return new SWGInline_response_200_6();
    }
    if(QString("SWGInline_response_200_7").compare(type) == 0) {
      return new SWGInline_response_200_7();
    }
    if(QString("SWGInline_response_200_8").compare(type) == 0) {
      return new SWGInline_response_200_8();
    }
    if(QString("SWGInline_response_200_9").compare(type) == 0) {
      return new SWGInline_response_200_9();
    }
    if(QString("SWGJsonErrorResponse").compare(type) == 0) {
      return new SWGJsonErrorResponse();
    }
    if(QString("SWGMeasurement").compare(type) == 0) {
      return new SWGMeasurement();
    }
    if(QString("SWGMeasurementDelete").compare(type) == 0) {
      return new SWGMeasurementDelete();
    }
    if(QString("SWGMeasurementRange").compare(type) == 0) {
      return new SWGMeasurementRange();
    }
    if(QString("SWGMeasurementSet").compare(type) == 0) {
      return new SWGMeasurementSet();
    }
    if(QString("SWGMeasurementSource").compare(type) == 0) {
      return new SWGMeasurementSource();
    }
    if(QString("SWGPairs").compare(type) == 0) {
      return new SWGPairs();
    }
    if(QString("SWGPermission").compare(type) == 0) {
      return new SWGPermission();
    }
    if(QString("SWGPostCorrelation").compare(type) == 0) {
      return new SWGPostCorrelation();
    }
    if(QString("SWGPostVote").compare(type) == 0) {
      return new SWGPostVote();
    }
    if(QString("SWGTrackingReminder").compare(type) == 0) {
      return new SWGTrackingReminder();
    }
    if(QString("SWGTrackingReminderDelete").compare(type) == 0) {
      return new SWGTrackingReminderDelete();
    }
    if(QString("SWGTrackingReminderNotification").compare(type) == 0) {
      return new SWGTrackingReminderNotification();
    }
    if(QString("SWGTrackingReminderNotificationSkip").compare(type) == 0) {
      return new SWGTrackingReminderNotificationSkip();
    }
    if(QString("SWGTrackingReminderNotificationSnooze").compare(type) == 0) {
      return new SWGTrackingReminderNotificationSnooze();
    }
    if(QString("SWGTrackingReminderNotificationTrack").compare(type) == 0) {
      return new SWGTrackingReminderNotificationTrack();
    }
    if(QString("SWGUnit").compare(type) == 0) {
      return new SWGUnit();
    }
    if(QString("SWGUnitCategory").compare(type) == 0) {
      return new SWGUnitCategory();
    }
    if(QString("SWGUpdate").compare(type) == 0) {
      return new SWGUpdate();
    }
    if(QString("SWGUser").compare(type) == 0) {
      return new SWGUser();
    }
    if(QString("SWGUserTag").compare(type) == 0) {
      return new SWGUserTag();
    }
    if(QString("SWGUserTokenFailedResponse").compare(type) == 0) {
      return new SWGUserTokenFailedResponse();
    }
    if(QString("SWGUserTokenRequest").compare(type) == 0) {
      return new SWGUserTokenRequest();
    }
    if(QString("SWGUserTokenRequestInnerUserField").compare(type) == 0) {
      return new SWGUserTokenRequestInnerUserField();
    }
    if(QString("SWGUserTokenSuccessfulResponse").compare(type) == 0) {
      return new SWGUserTokenSuccessfulResponse();
    }
    if(QString("SWGUserTokenSuccessfulResponseInnerUserField").compare(type) == 0) {
      return new SWGUserTokenSuccessfulResponseInnerUserField();
    }
    if(QString("SWGUserVariable").compare(type) == 0) {
      return new SWGUserVariable();
    }
    if(QString("SWGUserVariableRelationship").compare(type) == 0) {
      return new SWGUserVariableRelationship();
    }
    if(QString("SWGUserVariables").compare(type) == 0) {
      return new SWGUserVariables();
    }
    if(QString("SWGValueObject").compare(type) == 0) {
      return new SWGValueObject();
    }
    if(QString("SWGVariable").compare(type) == 0) {
      return new SWGVariable();
    }
    if(QString("SWGVariableCategory").compare(type) == 0) {
      return new SWGVariableCategory();
    }
    if(QString("SWGVariableNew").compare(type) == 0) {
      return new SWGVariableNew();
    }
    if(QString("SWGVariableUserSource").compare(type) == 0) {
      return new SWGVariableUserSource();
    }
    if(QString("SWGVariablesNew").compare(type) == 0) {
      return new SWGVariablesNew();
    }
    if(QString("SWGVote").compare(type) == 0) {
      return new SWGVote();
    }
    if(QString("SWGVoteDelete").compare(type) == 0) {
      return new SWGVoteDelete();
    }
    
    return NULL;
  }

  inline void* create(QString json, QString type) {
    void* val = create(type);
    if(val != NULL) {
      SWGObject* obj = static_cast<SWGObject*>(val);
      return obj->fromJson(json);
    }
    if(type.startsWith("QString")) {
      return new QString();
    }
    return NULL;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
