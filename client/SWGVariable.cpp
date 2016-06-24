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
    id = NULL;
name = new QString("");
originalName = new QString("");
category = new QString("");
abbreviatedUnitName = new QString("");
abbreviatedUnitId = NULL;
sources = new QString("");
minimumValue = 0.0;
maximumValue = 0.0;
combinationOperation = new QString("");
fillingValue = 0.0;
joinWith = new QString("");
joinedVariables = new QList<SWGVariable*>();
parent = NULL;
subVariables = new QList<SWGVariable*>();
onsetDelay = NULL;
durationOfAction = NULL;
earliestMeasurementTime = NULL;
latestMeasurementTime = NULL;
updated = NULL;
causeOnly = NULL;
numberOfCorrelations = NULL;
outcome = NULL;
measurementsAtLastAnalysis = NULL;
numberOfMeasurements = NULL;
lastUnit = new QString("");
lastValue = NULL;
mostCommonValue = NULL;
mostCommonUnit = new QString("");
lastSource = NULL;
}

void
SWGVariable::cleanup() {
    
if(name != NULL) {
        delete name;
    }
if(originalName != NULL) {
        delete originalName;
    }
if(category != NULL) {
        delete category;
    }
if(abbreviatedUnitName != NULL) {
        delete abbreviatedUnitName;
    }

if(sources != NULL) {
        delete sources;
    }


if(combinationOperation != NULL) {
        delete combinationOperation;
    }

if(joinWith != NULL) {
        delete joinWith;
    }
if(joinedVariables != NULL) {
        QList<SWGVariable*>* arr = joinedVariables;
        foreach(SWGVariable* o, *arr) {
            delete o;
        }
        delete joinedVariables;
    }

if(subVariables != NULL) {
        QList<SWGVariable*>* arr = subVariables;
        foreach(SWGVariable* o, *arr) {
            delete o;
        }
        delete subVariables;
    }










if(lastUnit != NULL) {
        delete lastUnit;
    }


if(mostCommonUnit != NULL) {
        delete mostCommonUnit;
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
setValue(&name, pJson["name"], "QString", "QString");
setValue(&originalName, pJson["originalName"], "QString", "QString");
setValue(&category, pJson["category"], "QString", "QString");
setValue(&abbreviatedUnitName, pJson["abbreviatedUnitName"], "QString", "QString");
setValue(&abbreviatedUnitId, pJson["abbreviatedUnitId"], "qint32", "");
setValue(&sources, pJson["sources"], "QString", "QString");
setValue(&minimumValue, pJson["minimumValue"], "double", "");
setValue(&maximumValue, pJson["maximumValue"], "double", "");
setValue(&combinationOperation, pJson["combinationOperation"], "QString", "QString");
setValue(&fillingValue, pJson["fillingValue"], "double", "");
setValue(&joinWith, pJson["joinWith"], "QString", "QString");
setValue(&joinedVariables, pJson["joinedVariables"], "QList", "SWGVariable");
setValue(&parent, pJson["parent"], "qint32", "");
setValue(&subVariables, pJson["subVariables"], "QList", "SWGVariable");
setValue(&onsetDelay, pJson["onsetDelay"], "qint32", "");
setValue(&durationOfAction, pJson["durationOfAction"], "qint32", "");
setValue(&earliestMeasurementTime, pJson["earliestMeasurementTime"], "qint32", "");
setValue(&latestMeasurementTime, pJson["latestMeasurementTime"], "qint32", "");
setValue(&updated, pJson["updated"], "qint32", "");
setValue(&causeOnly, pJson["causeOnly"], "qint32", "");
setValue(&numberOfCorrelations, pJson["numberOfCorrelations"], "qint32", "");
setValue(&outcome, pJson["outcome"], "qint32", "");
setValue(&measurementsAtLastAnalysis, pJson["measurementsAtLastAnalysis"], "qint32", "");
setValue(&numberOfMeasurements, pJson["numberOfMeasurements"], "qint32", "");
setValue(&lastUnit, pJson["lastUnit"], "QString", "QString");
setValue(&lastValue, pJson["lastValue"], "qint32", "");
setValue(&mostCommonValue, pJson["mostCommonValue"], "qint32", "");
setValue(&mostCommonUnit, pJson["mostCommonUnit"], "QString", "QString");
setValue(&lastSource, pJson["lastSource"], "qint32", "");
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

    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
        

    
    toJsonValue(QString("originalName"), originalName, obj, QString("QString"));
    
        

    
    toJsonValue(QString("category"), category, obj, QString("QString"));
    
        

    
    toJsonValue(QString("abbreviatedUnitName"), abbreviatedUnitName, obj, QString("QString"));
    
        
obj->insert("abbreviatedUnitId", QJsonValue(abbreviatedUnitId));

    
    toJsonValue(QString("sources"), sources, obj, QString("QString"));
    
        
obj->insert("minimumValue", QJsonValue(minimumValue));
obj->insert("maximumValue", QJsonValue(maximumValue));

    
    toJsonValue(QString("combinationOperation"), combinationOperation, obj, QString("QString"));
    
        
obj->insert("fillingValue", QJsonValue(fillingValue));

    
    toJsonValue(QString("joinWith"), joinWith, obj, QString("QString"));
    
        

    
    QList<SWGVariable*>* joinedVariablesList = joinedVariables;
    QJsonArray joinedVariablesJsonArray;
    toJsonArray((QList<void*>*)joinedVariables, &joinedVariablesJsonArray, "joinedVariables", "SWGVariable");

    obj->insert("joinedVariables", joinedVariablesJsonArray);
    
obj->insert("parent", QJsonValue(parent));

    
    QList<SWGVariable*>* subVariablesList = subVariables;
    QJsonArray subVariablesJsonArray;
    toJsonArray((QList<void*>*)subVariables, &subVariablesJsonArray, "subVariables", "SWGVariable");

    obj->insert("subVariables", subVariablesJsonArray);
    
obj->insert("onsetDelay", QJsonValue(onsetDelay));
obj->insert("durationOfAction", QJsonValue(durationOfAction));
obj->insert("earliestMeasurementTime", QJsonValue(earliestMeasurementTime));
obj->insert("latestMeasurementTime", QJsonValue(latestMeasurementTime));
obj->insert("updated", QJsonValue(updated));
obj->insert("causeOnly", QJsonValue(causeOnly));
obj->insert("numberOfCorrelations", QJsonValue(numberOfCorrelations));
obj->insert("outcome", QJsonValue(outcome));
obj->insert("measurementsAtLastAnalysis", QJsonValue(measurementsAtLastAnalysis));
obj->insert("numberOfMeasurements", QJsonValue(numberOfMeasurements));

    
    toJsonValue(QString("lastUnit"), lastUnit, obj, QString("QString"));
    
        
obj->insert("lastValue", QJsonValue(lastValue));
obj->insert("mostCommonValue", QJsonValue(mostCommonValue));

    
    toJsonValue(QString("mostCommonUnit"), mostCommonUnit, obj, QString("QString"));
    
        
obj->insert("lastSource", QJsonValue(lastSource));

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
SWGVariable::getName() {
    return name;
}
void
SWGVariable::setName(QString* name) {
    this->name = name;
}

QString*
SWGVariable::getOriginalName() {
    return originalName;
}
void
SWGVariable::setOriginalName(QString* originalName) {
    this->originalName = originalName;
}

QString*
SWGVariable::getCategory() {
    return category;
}
void
SWGVariable::setCategory(QString* category) {
    this->category = category;
}

QString*
SWGVariable::getAbbreviatedUnitName() {
    return abbreviatedUnitName;
}
void
SWGVariable::setAbbreviatedUnitName(QString* abbreviatedUnitName) {
    this->abbreviatedUnitName = abbreviatedUnitName;
}

qint32
SWGVariable::getAbbreviatedUnitId() {
    return abbreviatedUnitId;
}
void
SWGVariable::setAbbreviatedUnitId(qint32 abbreviatedUnitId) {
    this->abbreviatedUnitId = abbreviatedUnitId;
}

QString*
SWGVariable::getSources() {
    return sources;
}
void
SWGVariable::setSources(QString* sources) {
    this->sources = sources;
}

double
SWGVariable::getMinimumValue() {
    return minimumValue;
}
void
SWGVariable::setMinimumValue(double minimumValue) {
    this->minimumValue = minimumValue;
}

double
SWGVariable::getMaximumValue() {
    return maximumValue;
}
void
SWGVariable::setMaximumValue(double maximumValue) {
    this->maximumValue = maximumValue;
}

QString*
SWGVariable::getCombinationOperation() {
    return combinationOperation;
}
void
SWGVariable::setCombinationOperation(QString* combinationOperation) {
    this->combinationOperation = combinationOperation;
}

double
SWGVariable::getFillingValue() {
    return fillingValue;
}
void
SWGVariable::setFillingValue(double fillingValue) {
    this->fillingValue = fillingValue;
}

QString*
SWGVariable::getJoinWith() {
    return joinWith;
}
void
SWGVariable::setJoinWith(QString* joinWith) {
    this->joinWith = joinWith;
}

QList<SWGVariable*>*
SWGVariable::getJoinedVariables() {
    return joinedVariables;
}
void
SWGVariable::setJoinedVariables(QList<SWGVariable*>* joinedVariables) {
    this->joinedVariables = joinedVariables;
}

qint32
SWGVariable::getParent() {
    return parent;
}
void
SWGVariable::setParent(qint32 parent) {
    this->parent = parent;
}

QList<SWGVariable*>*
SWGVariable::getSubVariables() {
    return subVariables;
}
void
SWGVariable::setSubVariables(QList<SWGVariable*>* subVariables) {
    this->subVariables = subVariables;
}

qint32
SWGVariable::getOnsetDelay() {
    return onsetDelay;
}
void
SWGVariable::setOnsetDelay(qint32 onsetDelay) {
    this->onsetDelay = onsetDelay;
}

qint32
SWGVariable::getDurationOfAction() {
    return durationOfAction;
}
void
SWGVariable::setDurationOfAction(qint32 durationOfAction) {
    this->durationOfAction = durationOfAction;
}

qint32
SWGVariable::getEarliestMeasurementTime() {
    return earliestMeasurementTime;
}
void
SWGVariable::setEarliestMeasurementTime(qint32 earliestMeasurementTime) {
    this->earliestMeasurementTime = earliestMeasurementTime;
}

qint32
SWGVariable::getLatestMeasurementTime() {
    return latestMeasurementTime;
}
void
SWGVariable::setLatestMeasurementTime(qint32 latestMeasurementTime) {
    this->latestMeasurementTime = latestMeasurementTime;
}

qint32
SWGVariable::getUpdated() {
    return updated;
}
void
SWGVariable::setUpdated(qint32 updated) {
    this->updated = updated;
}

qint32
SWGVariable::getCauseOnly() {
    return causeOnly;
}
void
SWGVariable::setCauseOnly(qint32 causeOnly) {
    this->causeOnly = causeOnly;
}

qint32
SWGVariable::getNumberOfCorrelations() {
    return numberOfCorrelations;
}
void
SWGVariable::setNumberOfCorrelations(qint32 numberOfCorrelations) {
    this->numberOfCorrelations = numberOfCorrelations;
}

qint32
SWGVariable::getOutcome() {
    return outcome;
}
void
SWGVariable::setOutcome(qint32 outcome) {
    this->outcome = outcome;
}

qint32
SWGVariable::getMeasurementsAtLastAnalysis() {
    return measurementsAtLastAnalysis;
}
void
SWGVariable::setMeasurementsAtLastAnalysis(qint32 measurementsAtLastAnalysis) {
    this->measurementsAtLastAnalysis = measurementsAtLastAnalysis;
}

qint32
SWGVariable::getNumberOfMeasurements() {
    return numberOfMeasurements;
}
void
SWGVariable::setNumberOfMeasurements(qint32 numberOfMeasurements) {
    this->numberOfMeasurements = numberOfMeasurements;
}

QString*
SWGVariable::getLastUnit() {
    return lastUnit;
}
void
SWGVariable::setLastUnit(QString* lastUnit) {
    this->lastUnit = lastUnit;
}

qint32
SWGVariable::getLastValue() {
    return lastValue;
}
void
SWGVariable::setLastValue(qint32 lastValue) {
    this->lastValue = lastValue;
}

qint32
SWGVariable::getMostCommonValue() {
    return mostCommonValue;
}
void
SWGVariable::setMostCommonValue(qint32 mostCommonValue) {
    this->mostCommonValue = mostCommonValue;
}

QString*
SWGVariable::getMostCommonUnit() {
    return mostCommonUnit;
}
void
SWGVariable::setMostCommonUnit(QString* mostCommonUnit) {
    this->mostCommonUnit = mostCommonUnit;
}

qint32
SWGVariable::getLastSource() {
    return lastSource;
}
void
SWGVariable::setLastSource(qint32 lastSource) {
    this->lastSource = lastSource;
}



} /* namespace Swagger */

