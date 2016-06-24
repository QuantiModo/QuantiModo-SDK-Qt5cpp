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


#include "SWGUserVariableRelationship.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserVariableRelationship::SWGUserVariableRelationship(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserVariableRelationship::SWGUserVariableRelationship() {
    init();
}

SWGUserVariableRelationship::~SWGUserVariableRelationship() {
    this->cleanup();
}

void
SWGUserVariableRelationship::init() {
    id = 0;
confidence_level = new QString("");
confidence_score = 0.0f;
direction = new QString("");
duration_of_action = 0;
error_message = new QString("");
onset_delay = 0;
outcome_variable_id = 0;
predictor_variable_id = 0;
predictor_unit_id = 0;
sinn_rank = 0.0f;
strength_level = new QString("");
strength_score = 0.0f;
user_id = 0;
vote = new QString("");
value_predicting_high_outcome = 0.0f;
value_predicting_low_outcome = 0.0f;
}

void
SWGUserVariableRelationship::cleanup() {
    
if(confidence_level != NULL) {
        delete confidence_level;
    }

if(direction != NULL) {
        delete direction;
    }

if(error_message != NULL) {
        delete error_message;
    }





if(strength_level != NULL) {
        delete strength_level;
    }


if(vote != NULL) {
        delete vote;
    }


}

SWGUserVariableRelationship*
SWGUserVariableRelationship::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserVariableRelationship::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
setValue(&confidence_level, pJson["confidence_level"], "QString", "QString");
setValue(&confidence_score, pJson["confidence_score"], "float", "");
setValue(&direction, pJson["direction"], "QString", "QString");
setValue(&duration_of_action, pJson["duration_of_action"], "qint32", "");
setValue(&error_message, pJson["error_message"], "QString", "QString");
setValue(&onset_delay, pJson["onset_delay"], "qint32", "");
setValue(&outcome_variable_id, pJson["outcome_variable_id"], "qint32", "");
setValue(&predictor_variable_id, pJson["predictor_variable_id"], "qint32", "");
setValue(&predictor_unit_id, pJson["predictor_unit_id"], "qint32", "");
setValue(&sinn_rank, pJson["sinn_rank"], "float", "");
setValue(&strength_level, pJson["strength_level"], "QString", "QString");
setValue(&strength_score, pJson["strength_score"], "float", "");
setValue(&user_id, pJson["user_id"], "qint32", "");
setValue(&vote, pJson["vote"], "QString", "QString");
setValue(&value_predicting_high_outcome, pJson["value_predicting_high_outcome"], "float", "");
setValue(&value_predicting_low_outcome, pJson["value_predicting_low_outcome"], "float", "");
}

QString
SWGUserVariableRelationship::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserVariableRelationship::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));

    
    toJsonValue(QString("confidence_level"), confidence_level, obj, QString("QString"));
    
        
obj->insert("confidence_score", QJsonValue(confidence_score));

    
    toJsonValue(QString("direction"), direction, obj, QString("QString"));
    
        
obj->insert("duration_of_action", QJsonValue(duration_of_action));

    
    toJsonValue(QString("error_message"), error_message, obj, QString("QString"));
    
        
obj->insert("onset_delay", QJsonValue(onset_delay));
obj->insert("outcome_variable_id", QJsonValue(outcome_variable_id));
obj->insert("predictor_variable_id", QJsonValue(predictor_variable_id));
obj->insert("predictor_unit_id", QJsonValue(predictor_unit_id));
obj->insert("sinn_rank", QJsonValue(sinn_rank));

    
    toJsonValue(QString("strength_level"), strength_level, obj, QString("QString"));
    
        
obj->insert("strength_score", QJsonValue(strength_score));
obj->insert("user_id", QJsonValue(user_id));

    
    toJsonValue(QString("vote"), vote, obj, QString("QString"));
    
        
obj->insert("value_predicting_high_outcome", QJsonValue(value_predicting_high_outcome));
obj->insert("value_predicting_low_outcome", QJsonValue(value_predicting_low_outcome));

    return obj;
}

qint32
SWGUserVariableRelationship::getId() {
    return id;
}
void
SWGUserVariableRelationship::setId(qint32 id) {
    this->id = id;
}

QString*
SWGUserVariableRelationship::getConfidenceLevel() {
    return confidence_level;
}
void
SWGUserVariableRelationship::setConfidenceLevel(QString* confidence_level) {
    this->confidence_level = confidence_level;
}

float
SWGUserVariableRelationship::getConfidenceScore() {
    return confidence_score;
}
void
SWGUserVariableRelationship::setConfidenceScore(float confidence_score) {
    this->confidence_score = confidence_score;
}

QString*
SWGUserVariableRelationship::getDirection() {
    return direction;
}
void
SWGUserVariableRelationship::setDirection(QString* direction) {
    this->direction = direction;
}

qint32
SWGUserVariableRelationship::getDurationOfAction() {
    return duration_of_action;
}
void
SWGUserVariableRelationship::setDurationOfAction(qint32 duration_of_action) {
    this->duration_of_action = duration_of_action;
}

QString*
SWGUserVariableRelationship::getErrorMessage() {
    return error_message;
}
void
SWGUserVariableRelationship::setErrorMessage(QString* error_message) {
    this->error_message = error_message;
}

qint32
SWGUserVariableRelationship::getOnsetDelay() {
    return onset_delay;
}
void
SWGUserVariableRelationship::setOnsetDelay(qint32 onset_delay) {
    this->onset_delay = onset_delay;
}

qint32
SWGUserVariableRelationship::getOutcomeVariableId() {
    return outcome_variable_id;
}
void
SWGUserVariableRelationship::setOutcomeVariableId(qint32 outcome_variable_id) {
    this->outcome_variable_id = outcome_variable_id;
}

qint32
SWGUserVariableRelationship::getPredictorVariableId() {
    return predictor_variable_id;
}
void
SWGUserVariableRelationship::setPredictorVariableId(qint32 predictor_variable_id) {
    this->predictor_variable_id = predictor_variable_id;
}

qint32
SWGUserVariableRelationship::getPredictorUnitId() {
    return predictor_unit_id;
}
void
SWGUserVariableRelationship::setPredictorUnitId(qint32 predictor_unit_id) {
    this->predictor_unit_id = predictor_unit_id;
}

float
SWGUserVariableRelationship::getSinnRank() {
    return sinn_rank;
}
void
SWGUserVariableRelationship::setSinnRank(float sinn_rank) {
    this->sinn_rank = sinn_rank;
}

QString*
SWGUserVariableRelationship::getStrengthLevel() {
    return strength_level;
}
void
SWGUserVariableRelationship::setStrengthLevel(QString* strength_level) {
    this->strength_level = strength_level;
}

float
SWGUserVariableRelationship::getStrengthScore() {
    return strength_score;
}
void
SWGUserVariableRelationship::setStrengthScore(float strength_score) {
    this->strength_score = strength_score;
}

qint32
SWGUserVariableRelationship::getUserId() {
    return user_id;
}
void
SWGUserVariableRelationship::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

QString*
SWGUserVariableRelationship::getVote() {
    return vote;
}
void
SWGUserVariableRelationship::setVote(QString* vote) {
    this->vote = vote;
}

float
SWGUserVariableRelationship::getValuePredictingHighOutcome() {
    return value_predicting_high_outcome;
}
void
SWGUserVariableRelationship::setValuePredictingHighOutcome(float value_predicting_high_outcome) {
    this->value_predicting_high_outcome = value_predicting_high_outcome;
}

float
SWGUserVariableRelationship::getValuePredictingLowOutcome() {
    return value_predicting_low_outcome;
}
void
SWGUserVariableRelationship::setValuePredictingLowOutcome(float value_predicting_low_outcome) {
    this->value_predicting_low_outcome = value_predicting_low_outcome;
}



} /* namespace Swagger */

