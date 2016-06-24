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


#include "SWGCorrelation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCorrelation::SWGCorrelation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCorrelation::SWGCorrelation() {
    init();
}

SWGCorrelation::~SWGCorrelation() {
    this->cleanup();
}

void
SWGCorrelation::init() {
    correlationCoefficient = 0.0;
cause = new QString("");
originalCause = new QString("");
effect = new QString("");
originalEffect = new QString("");
onsetDelay = 0.0;
durationOfAction = 0.0;
numberOfPairs = 0.0;
effectSize = new QString("");
statisticalSignificance = new QString("");
timestamp = 0.0;
reverseCorrelation = 0.0;
causalityFactor = 0.0;
causeCategory = new QString("");
effectCategory = new QString("");
valuePredictingHighOutcome = 0.0;
valuePredictingLowOutcome = 0.0;
optimalPearsonProduct = 0.0;
averageVote = 0.0;
userVote = 0.0;
causeUnit = new QString("");
causeUnitId = NULL;
}

void
SWGCorrelation::cleanup() {
    if(correlationCoefficient != NULL) {
        delete correlationCoefficient;
    }
if(cause != NULL) {
        delete cause;
    }
if(originalCause != NULL) {
        delete originalCause;
    }
if(effect != NULL) {
        delete effect;
    }
if(originalEffect != NULL) {
        delete originalEffect;
    }

if(durationOfAction != NULL) {
        delete durationOfAction;
    }
if(numberOfPairs != NULL) {
        delete numberOfPairs;
    }
if(effectSize != NULL) {
        delete effectSize;
    }
if(statisticalSignificance != NULL) {
        delete statisticalSignificance;
    }
if(timestamp != NULL) {
        delete timestamp;
    }
if(reverseCorrelation != NULL) {
        delete reverseCorrelation;
    }
if(causalityFactor != NULL) {
        delete causalityFactor;
    }
if(causeCategory != NULL) {
        delete causeCategory;
    }
if(effectCategory != NULL) {
        delete effectCategory;
    }
if(valuePredictingHighOutcome != NULL) {
        delete valuePredictingHighOutcome;
    }
if(valuePredictingLowOutcome != NULL) {
        delete valuePredictingLowOutcome;
    }
if(optimalPearsonProduct != NULL) {
        delete optimalPearsonProduct;
    }
if(averageVote != NULL) {
        delete averageVote;
    }
if(userVote != NULL) {
        delete userVote;
    }
if(causeUnit != NULL) {
        delete causeUnit;
    }

}

SWGCorrelation*
SWGCorrelation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCorrelation::fromJsonObject(QJsonObject &pJson) {
    setValue(&correlationCoefficient, pJson["correlationCoefficient"], "SWGNumber", "SWGNumber");
setValue(&cause, pJson["cause"], "QString", "QString");
setValue(&originalCause, pJson["originalCause"], "QString", "QString");
setValue(&effect, pJson["effect"], "QString", "QString");
setValue(&originalEffect, pJson["originalEffect"], "QString", "QString");
setValue(&onsetDelay, pJson["onsetDelay"], "double", "");
setValue(&durationOfAction, pJson["durationOfAction"], "SWGNumber", "SWGNumber");
setValue(&numberOfPairs, pJson["numberOfPairs"], "SWGNumber", "SWGNumber");
setValue(&effectSize, pJson["effectSize"], "QString", "QString");
setValue(&statisticalSignificance, pJson["statisticalSignificance"], "QString", "QString");
setValue(&timestamp, pJson["timestamp"], "SWGNumber", "SWGNumber");
setValue(&reverseCorrelation, pJson["reverseCorrelation"], "SWGNumber", "SWGNumber");
setValue(&causalityFactor, pJson["causalityFactor"], "SWGNumber", "SWGNumber");
setValue(&causeCategory, pJson["causeCategory"], "QString", "QString");
setValue(&effectCategory, pJson["effectCategory"], "QString", "QString");
setValue(&valuePredictingHighOutcome, pJson["valuePredictingHighOutcome"], "SWGNumber", "SWGNumber");
setValue(&valuePredictingLowOutcome, pJson["valuePredictingLowOutcome"], "SWGNumber", "SWGNumber");
setValue(&optimalPearsonProduct, pJson["optimalPearsonProduct"], "SWGNumber", "SWGNumber");
setValue(&averageVote, pJson["averageVote"], "SWGNumber", "SWGNumber");
setValue(&userVote, pJson["userVote"], "SWGNumber", "SWGNumber");
setValue(&causeUnit, pJson["causeUnit"], "QString", "QString");
setValue(&causeUnitId, pJson["causeUnitId"], "qint32", "");
}

QString
SWGCorrelation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCorrelation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("correlationCoefficient"), correlationCoefficient, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("cause"), cause, obj, QString("QString"));
    
        

    
    toJsonValue(QString("originalCause"), originalCause, obj, QString("QString"));
    
        

    
    toJsonValue(QString("effect"), effect, obj, QString("QString"));
    
        

    
    toJsonValue(QString("originalEffect"), originalEffect, obj, QString("QString"));
    
        
obj->insert("onsetDelay", QJsonValue(onsetDelay));

    
    toJsonValue(QString("durationOfAction"), durationOfAction, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("numberOfPairs"), numberOfPairs, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("effectSize"), effectSize, obj, QString("QString"));
    
        

    
    toJsonValue(QString("statisticalSignificance"), statisticalSignificance, obj, QString("QString"));
    
        

    
    toJsonValue(QString("timestamp"), timestamp, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("reverseCorrelation"), reverseCorrelation, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("causalityFactor"), causalityFactor, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("causeCategory"), causeCategory, obj, QString("QString"));
    
        

    
    toJsonValue(QString("effectCategory"), effectCategory, obj, QString("QString"));
    
        

    
    toJsonValue(QString("valuePredictingHighOutcome"), valuePredictingHighOutcome, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("valuePredictingLowOutcome"), valuePredictingLowOutcome, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("optimalPearsonProduct"), optimalPearsonProduct, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("averageVote"), averageVote, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("userVote"), userVote, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("causeUnit"), causeUnit, obj, QString("QString"));
    
        
obj->insert("causeUnitId", QJsonValue(causeUnitId));

    return obj;
}

SWGNumber*
SWGCorrelation::getCorrelationCoefficient() {
    return correlationCoefficient;
}
void
SWGCorrelation::setCorrelationCoefficient(SWGNumber* correlationCoefficient) {
    this->correlationCoefficient = correlationCoefficient;
}

QString*
SWGCorrelation::getCause() {
    return cause;
}
void
SWGCorrelation::setCause(QString* cause) {
    this->cause = cause;
}

QString*
SWGCorrelation::getOriginalCause() {
    return originalCause;
}
void
SWGCorrelation::setOriginalCause(QString* originalCause) {
    this->originalCause = originalCause;
}

QString*
SWGCorrelation::getEffect() {
    return effect;
}
void
SWGCorrelation::setEffect(QString* effect) {
    this->effect = effect;
}

QString*
SWGCorrelation::getOriginalEffect() {
    return originalEffect;
}
void
SWGCorrelation::setOriginalEffect(QString* originalEffect) {
    this->originalEffect = originalEffect;
}

double
SWGCorrelation::getOnsetDelay() {
    return onsetDelay;
}
void
SWGCorrelation::setOnsetDelay(double onsetDelay) {
    this->onsetDelay = onsetDelay;
}

SWGNumber*
SWGCorrelation::getDurationOfAction() {
    return durationOfAction;
}
void
SWGCorrelation::setDurationOfAction(SWGNumber* durationOfAction) {
    this->durationOfAction = durationOfAction;
}

SWGNumber*
SWGCorrelation::getNumberOfPairs() {
    return numberOfPairs;
}
void
SWGCorrelation::setNumberOfPairs(SWGNumber* numberOfPairs) {
    this->numberOfPairs = numberOfPairs;
}

QString*
SWGCorrelation::getEffectSize() {
    return effectSize;
}
void
SWGCorrelation::setEffectSize(QString* effectSize) {
    this->effectSize = effectSize;
}

QString*
SWGCorrelation::getStatisticalSignificance() {
    return statisticalSignificance;
}
void
SWGCorrelation::setStatisticalSignificance(QString* statisticalSignificance) {
    this->statisticalSignificance = statisticalSignificance;
}

SWGNumber*
SWGCorrelation::getTimestamp() {
    return timestamp;
}
void
SWGCorrelation::setTimestamp(SWGNumber* timestamp) {
    this->timestamp = timestamp;
}

SWGNumber*
SWGCorrelation::getReverseCorrelation() {
    return reverseCorrelation;
}
void
SWGCorrelation::setReverseCorrelation(SWGNumber* reverseCorrelation) {
    this->reverseCorrelation = reverseCorrelation;
}

SWGNumber*
SWGCorrelation::getCausalityFactor() {
    return causalityFactor;
}
void
SWGCorrelation::setCausalityFactor(SWGNumber* causalityFactor) {
    this->causalityFactor = causalityFactor;
}

QString*
SWGCorrelation::getCauseCategory() {
    return causeCategory;
}
void
SWGCorrelation::setCauseCategory(QString* causeCategory) {
    this->causeCategory = causeCategory;
}

QString*
SWGCorrelation::getEffectCategory() {
    return effectCategory;
}
void
SWGCorrelation::setEffectCategory(QString* effectCategory) {
    this->effectCategory = effectCategory;
}

SWGNumber*
SWGCorrelation::getValuePredictingHighOutcome() {
    return valuePredictingHighOutcome;
}
void
SWGCorrelation::setValuePredictingHighOutcome(SWGNumber* valuePredictingHighOutcome) {
    this->valuePredictingHighOutcome = valuePredictingHighOutcome;
}

SWGNumber*
SWGCorrelation::getValuePredictingLowOutcome() {
    return valuePredictingLowOutcome;
}
void
SWGCorrelation::setValuePredictingLowOutcome(SWGNumber* valuePredictingLowOutcome) {
    this->valuePredictingLowOutcome = valuePredictingLowOutcome;
}

SWGNumber*
SWGCorrelation::getOptimalPearsonProduct() {
    return optimalPearsonProduct;
}
void
SWGCorrelation::setOptimalPearsonProduct(SWGNumber* optimalPearsonProduct) {
    this->optimalPearsonProduct = optimalPearsonProduct;
}

SWGNumber*
SWGCorrelation::getAverageVote() {
    return averageVote;
}
void
SWGCorrelation::setAverageVote(SWGNumber* averageVote) {
    this->averageVote = averageVote;
}

SWGNumber*
SWGCorrelation::getUserVote() {
    return userVote;
}
void
SWGCorrelation::setUserVote(SWGNumber* userVote) {
    this->userVote = userVote;
}

QString*
SWGCorrelation::getCauseUnit() {
    return causeUnit;
}
void
SWGCorrelation::setCauseUnit(QString* causeUnit) {
    this->causeUnit = causeUnit;
}

qint32
SWGCorrelation::getCauseUnitId() {
    return causeUnitId;
}
void
SWGCorrelation::setCauseUnitId(qint32 causeUnitId) {
    this->causeUnitId = causeUnitId;
}



} /* namespace Swagger */

