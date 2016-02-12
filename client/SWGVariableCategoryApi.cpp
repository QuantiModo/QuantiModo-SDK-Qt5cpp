#include "SWGVariableCategoryApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGVariableCategoryApi::SWGVariableCategoryApi() {}

SWGVariableCategoryApi::~SWGVariableCategoryApi() {}

SWGVariableCategoryApi::SWGVariableCategoryApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGVariableCategoryApi::variableCategoriesGet(QString* accessToken, QString* name, SWGNumber* fillingValue, SWGNumber* maximumAllowedValue, SWGNumber* minimumAllowedValue, qint32 durationOfAction, qint32 onsetDelay, QString* combinationOperation, qint32 updated, bool causeOnly, qint32 public, bool outcome, QString* createdAt, QString* updatedAt, QString* imageUrl, qint32 defaultUnitId, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableCategories");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(name)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("fillingValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(fillingValue)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("maximumAllowedValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(maximumAllowedValue)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("minimumAllowedValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(minimumAllowedValue)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("durationOfAction"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(durationOfAction)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("onsetDelay"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(onsetDelay)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("combinationOperation"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(combinationOperation)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("updated"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(updated)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("causeOnly"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(causeOnly)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("public"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(public)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("outcome"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(outcome)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("imageUrl"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(imageUrl)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("defaultUnitId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(defaultUnitId)));
    

    
    
    
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
            &SWGVariableCategoryApi::variableCategoriesGetCallback);

    worker->execute(&input);
}

void
SWGVariableCategoryApi::variableCategoriesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_31* output = static_cast<SWGInline_response_200_31*>(create(json, QString("SWGInline_response_200_31")));
    
    
    

    worker->deleteLater();

    emit variableCategoriesGetSignal(output);
    
}
void
SWGVariableCategoryApi::variableCategoriesPost(QString* accessToken, SWGVariableCategory body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableCategories");

    

    
    
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
            &SWGVariableCategoryApi::variableCategoriesPostCallback);

    worker->execute(&input);
}

void
SWGVariableCategoryApi::variableCategoriesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_32* output = static_cast<SWGInline_response_200_32*>(create(json, QString("SWGInline_response_200_32")));
    
    
    

    worker->deleteLater();

    emit variableCategoriesPostSignal(output);
    
}
void
SWGVariableCategoryApi::variableCategoriesIdGet(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableCategories/{id}");

    
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
            &SWGVariableCategoryApi::variableCategoriesIdGetCallback);

    worker->execute(&input);
}

void
SWGVariableCategoryApi::variableCategoriesIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_32* output = static_cast<SWGInline_response_200_32*>(create(json, QString("SWGInline_response_200_32")));
    
    
    

    worker->deleteLater();

    emit variableCategoriesIdGetSignal(output);
    
}
void
SWGVariableCategoryApi::variableCategoriesIdPut(qint32 id, QString* accessToken, SWGVariableCategory body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableCategories/{id}");

    
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
            &SWGVariableCategoryApi::variableCategoriesIdPutCallback);

    worker->execute(&input);
}

void
SWGVariableCategoryApi::variableCategoriesIdPutCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_2* output = static_cast<SWGInline_response_200_2*>(create(json, QString("SWGInline_response_200_2")));
    
    
    

    worker->deleteLater();

    emit variableCategoriesIdPutSignal(output);
    
}
void
SWGVariableCategoryApi::variableCategoriesIdDelete(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableCategories/{id}");

    
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
            &SWGVariableCategoryApi::variableCategoriesIdDeleteCallback);

    worker->execute(&input);
}

void
SWGVariableCategoryApi::variableCategoriesIdDeleteCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_2* output = static_cast<SWGInline_response_200_2*>(create(json, QString("SWGInline_response_200_2")));
    
    
    

    worker->deleteLater();

    emit variableCategoriesIdDeleteSignal(output);
    
}
} /* namespace Swagger */
