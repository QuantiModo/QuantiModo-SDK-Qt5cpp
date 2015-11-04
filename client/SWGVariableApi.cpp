#include "SWGVariableApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGVariableApi::SWGVariableApi() {}

SWGVariableApi::~SWGVariableApi() {}

SWGVariableApi::SWGVariableApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGVariableApi::variablesGet(qint32 id, QString* clientId, qint32 parentId, QString* name, qint32 variableCategoryId, qint32 defaultUnitId, QString* combinationOperation, SWGNumber* fillingValue, SWGNumber* maximumAllowedValue, SWGNumber* minimumAllowedValue, qint32 onsetDelay, qint32 durationOfAction, qint32 public, bool causeOnly, SWGNumber* mostCommonValue, qint32 mostCommonUnitId, SWGNumber* standardDeviation, SWGNumber* variance, SWGNumber* mean, SWGNumber* median, SWGNumber* numberOfMeasurements, SWGNumber* numberOfUniqueValues, SWGNumber* skewness, SWGNumber* kurtosis, SWGNumber* latitude, SWGNumber* longitude, QString* location, QString* status, QString* errorMessage, QString* lastSuccessfulUpdateTime, QString* createdAt, QString* updatedAt, QString* productUrl, QString* imageUrl, SWGNumber* price, qint32 numberOfUserVariables, bool outcome, SWGNumber* minimumRecordedValue, SWGNumber* maximumRecordedValue, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variables");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("id"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(id)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("clientId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(clientId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("parentId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(parentId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(name)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("variableCategoryId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variableCategoryId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("defaultUnitId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(defaultUnitId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("combinationOperation"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(combinationOperation)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("fillingValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(fillingValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("maximumAllowedValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(maximumAllowedValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("minimumAllowedValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(minimumAllowedValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("onsetDelay"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(onsetDelay)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("durationOfAction"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(durationOfAction)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("public"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(public)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("causeOnly"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(causeOnly)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("mostCommonValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(mostCommonValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("mostCommonUnitId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(mostCommonUnitId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("standardDeviation"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(standardDeviation)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("variance"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variance)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("mean"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(mean)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("median"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(median)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("numberOfMeasurements"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfMeasurements)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("numberOfUniqueValues"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfUniqueValues)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("skewness"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(skewness)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("kurtosis"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(kurtosis)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("latitude"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(latitude)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("longitude"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(longitude)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("location"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(location)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("status"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(status)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("errorMessage"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(errorMessage)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastSuccessfulUpdateTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastSuccessfulUpdateTime)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("createdAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(createdAt)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("updatedAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(updatedAt)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("productUrl"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(productUrl)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("imageUrl"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(imageUrl)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("price"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(price)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("numberOfUserVariables"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfUserVariables)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("outcome"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(outcome)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("minimumRecordedValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(minimumRecordedValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("maximumRecordedValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(maximumRecordedValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("offset"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(offset)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
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
            &SWGVariableApi::variablesGetCallback);

    worker->execute(&input);
}

void
SWGVariableApi::variablesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_27* output = static_cast<SWGInline_response_200_27*>(create(json, QString("SWGInline_response_200_27")));
    
    
    

    worker->deleteLater();

    emit variablesGetSignal(output);
    
}
void
SWGVariableApi::variablesPost(SWGVariable body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variables");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariableApi::variablesPostCallback);

    worker->execute(&input);
}

void
SWGVariableApi::variablesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_28* output = static_cast<SWGInline_response_200_28*>(create(json, QString("SWGInline_response_200_28")));
    
    
    

    worker->deleteLater();

    emit variablesPostSignal(output);
    
}
void
SWGVariableApi::variablesIdGet(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variables/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariableApi::variablesIdGetCallback);

    worker->execute(&input);
}

void
SWGVariableApi::variablesIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_28* output = static_cast<SWGInline_response_200_28*>(create(json, QString("SWGInline_response_200_28")));
    
    
    

    worker->deleteLater();

    emit variablesIdGetSignal(output);
    
}
void
SWGVariableApi::variablesIdPut(qint32 id, SWGVariable body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variables/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariableApi::variablesIdPutCallback);

    worker->execute(&input);
}

void
SWGVariableApi::variablesIdPutCallback(HttpRequestWorker * worker) {
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

    emit variablesIdPutSignal(output);
    
}
void
SWGVariableApi::variablesIdDelete(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variables/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariableApi::variablesIdDeleteCallback);

    worker->execute(&input);
}

void
SWGVariableApi::variablesIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit variablesIdDeleteSignal(output);
    
}
} /* namespace Swagger */
