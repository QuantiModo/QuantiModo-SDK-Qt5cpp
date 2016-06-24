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

#include "SWGHelpers.h"
#include "SWGModelFactory.h"
#include "SWGObject.h"
#include <QDebug>
#include <QJsonArray>
#include <QJsonValue>

namespace Swagger {

void
setValue(void* value, QJsonValue obj, QString type, QString complexType) {
    if(value == NULL) {
        // can't set value with a null pointer
        return;
    }
    if(QStringLiteral("bool").compare(type) == 0) {
        bool * val = static_cast<bool*>(value);
        *val = obj.toBool();
    }
    else if(QStringLiteral("qint32").compare(type) == 0) {
        qint32 *val = static_cast<qint32*>(value);
        *val = obj.toInt();
    }
    else if(QStringLiteral("qint64").compare(type) == 0) {
        qint64 *val = static_cast<qint64*>(value);
        *val = obj.toVariant().toLongLong();
    }
    else if(QStringLiteral("float").compare(type) == 0) {
        float *val = static_cast<float*>(value);
        *val = obj.toDouble();
    }
    else if(QStringLiteral("double").compare(type) == 0) {
        double *val = static_cast<double*>(value);
        *val = obj.toDouble();
    }
    else if (QStringLiteral("QString").compare(type) == 0) {
        QString **val = static_cast<QString**>(value);

        if(val != NULL) {
            if(!obj.isNull()) {
                // create a new value and return
                delete *val;
                *val = new QString(obj.toString());
                return;
            }
            else {
                // set target to NULL
                delete *val;
                *val = NULL;
            }
        }
        else {
            qDebug() << "Can't set value because the target pointer is NULL";
        }
    }
    else if (QStringLiteral("QDateTime").compare(type) == 0) {
        QDateTime **val = static_cast<QDateTime**>(value);

        if(val != NULL) {
            if(!obj.isNull()) {
                // create a new value and return
                delete *val;
                *val = new QDateTime(QDateTime::fromString(obj.toString(), Qt::ISODate));
                return;
            }
            else {
                // set target to NULL
                delete *val;
                *val = NULL;
            }
        }
        else {
            qDebug() << "Can't set value because the target pointer is NULL";
        }
    }
    else if (QStringLiteral("QDate").compare(type) == 0) {
        QDate **val = static_cast<QDate**>(value);

        if(val != NULL) {
            if(!obj.isNull()) {
                // create a new value and return
                delete *val;
                *val = new QDate(QDate::fromString(obj.toString(), Qt::ISODate));
                return;
            }
            else {
                // set target to NULL
                delete *val;
                *val = NULL;
            }
        }
        else {
            qDebug() << "Can't set value because the target pointer is NULL";
        }
    }
    else if(type.startsWith("SWG") && obj.isObject()) {
        // complex type
        QJsonObject jsonObj = obj.toObject();
        SWGObject * so = (SWGObject*)Swagger::create(type);
        if(so != NULL) {
            so->fromJsonObject(jsonObj);
            SWGObject **val = static_cast<SWGObject**>(value);
            delete *val;
            *val = so;
        }
    }
    else if(type.startsWith("QList") && QString("").compare(complexType) != 0 && obj.isArray()) {
        // list of values
        QList<void*>* output = new QList<void*>();
        QJsonArray arr = obj.toArray();
        foreach (const QJsonValue & jval, arr) {
            if(complexType.startsWith("SWG")) {
                // it's an object
                SWGObject * val = (SWGObject*)create(complexType);
                QJsonObject t = jval.toObject();

                val->fromJsonObject(t);
                output->append(val);
            }
            else {
                // primitives
                if(QStringLiteral("qint32").compare(complexType) == 0) {
                    qint32 val;
                    setValue(&val, jval, QStringLiteral("qint32"), QStringLiteral(""));
                    output->append((void*)&val);
                }
                else if(QStringLiteral("qint64").compare(complexType) == 0) {
                    qint64 val;
                    setValue(&val, jval, QStringLiteral("qint64"), QStringLiteral(""));
                    output->append((void*)&val);
                }
                else if(QStringLiteral("bool").compare(complexType) == 0) {
                    bool val;
                    setValue(&val, jval, QStringLiteral("bool"), QStringLiteral(""));
                    output->append((void*)&val);
                }
                else if(QStringLiteral("float").compare(complexType) == 0) {
                    float val;
                    setValue(&val, jval, QStringLiteral("float"), QStringLiteral(""));
                    output->append((void*)&val);
                }
                else if(QStringLiteral("double").compare(complexType) == 0) {
                    double val;
                    setValue(&val, jval, QStringLiteral("double"), QStringLiteral(""));
                    output->append((void*)&val);
                }
                else if(QStringLiteral("QString").compare(complexType) == 0) {
                    QString val;
                    setValue(&val, jval, QStringLiteral("QString"), QStringLiteral(""));
                    output->append((void*)&val);
                }
                else if(QStringLiteral("QDate").compare(complexType) == 0) {
                    QDate val;
                    setValue(&val, jval, QStringLiteral("QDate"), QStringLiteral(""));
                    output->append((void*)&val);
                }
                else if(QStringLiteral("QDateTime").compare(complexType) == 0) {
                    QDateTime val;
                    setValue(&val, jval, QStringLiteral("QDateTime"), QStringLiteral(""));
                    output->append((void*)&val);
                }
            }
        }
        QList<void*> **val = static_cast<QList<void*>**>(value);
        delete *val;
        *val = output;
    }
}

void
toJsonValue(QString name, void* value, QJsonObject* output, QString type) {
    if(value == NULL) {
        return;
    }
    if(type.startsWith("SWG")) {
        SWGObject *swgObject = reinterpret_cast<SWGObject *>(value);
        if(swgObject != NULL) {
            QJsonObject* o = (*swgObject).asJsonObject();
            if(name != NULL) {
                output->insert(name, *o);
                delete o;
            }
            else {
                output->empty();
                foreach(QString key, o->keys()) {
                    output->insert(key, o->value(key));
                }
            }
        }
    }
    else if(QStringLiteral("QString").compare(type) == 0) {
        QString* str = static_cast<QString*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("qint32").compare(type) == 0) {
        qint32* str = static_cast<qint32*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("qint64").compare(type) == 0) {
        qint64* str = static_cast<qint64*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("bool").compare(type) == 0) {
        bool* str = static_cast<bool*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("float").compare(type) == 0) {
        float* str = static_cast<float*>(value);
        output->insert(name, QJsonValue((double)*str));
    }
    else if(QStringLiteral("double").compare(type) == 0) {
        double* str = static_cast<double*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("QDate").compare(type) == 0) {
        QDate* date = static_cast<QDate*>(value);
        output->insert(name, QJsonValue(date->toString(Qt::ISODate)));
    }
    else if(QStringLiteral("QDateTime").compare(type) == 0) {
        QDateTime* datetime = static_cast<QDateTime*>(value);
        output->insert(name, QJsonValue(datetime->toString(Qt::ISODate)));
    }
}

void
toJsonArray(QList<void*>* value, QJsonArray* output, QString innerName, QString innerType) {
    foreach(void* obj, *value) {
        QJsonObject element;

        toJsonValue(NULL, obj, &element, innerType);
        output->append(element);
    }
}

QString
stringValue(QString* value) {
    QString* str = static_cast<QString*>(value);
    return QString(*str);
}

QString
stringValue(qint32 value) {
    return QString::number(value);
}

QString
stringValue(qint64 value) {
    return QString::number(value);
}

QString
stringValue(bool value) {
    return QString(value ? "true" : "false");
}
} /* namespace Swagger */
