#include "SWGUserVariableApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUserVariableApi::SWGUserVariableApi() {}

SWGUserVariableApi::~SWGUserVariableApi() {}

SWGUserVariableApi::SWGUserVariableApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUserVariableApi::userVariablesGet(QString* clientId, qint32 variableId, qint32 defaultUnitId, SWGNumber* minimumAllowedValue, SWGNumber* maximumAllowedValue, SWGNumber* fillingValue, qint32 joinWith, qint32 onsetDelay, qint32 durationOfAction, qint32 variableCategoryId, qint32 updated, qint32 public, bool causeOnly, QString* fillingType, qint32 numberOfMeasurements, qint32 numberOfProcessedMeasurements, qint32 measurementsAtLastAnalysis, qint32 lastUnitId, qint32 lastOriginalUnitId, qint32 lastOriginalValue, SWGNumber* lastValue, qint32 lastSourceId, qint32 numberOfCorrelations, QString* status, QString* errorMessage, QString* lastSuccessfulUpdateTime, SWGNumber* standardDeviation, SWGNumber* variance, SWGNumber* minimumRecordedDailyValue, SWGNumber* maximumRecordedDailyValue, SWGNumber* mean, SWGNumber* median, qint32 mostCommonUnitId, SWGNumber* mostCommonValue, SWGNumber* numberOfUniqueDailyValues, qint32 numberOfChanges, SWGNumber* skewness, SWGNumber* kurtosis, SWGNumber* latitude, SWGNumber* longitude, QString* location, QString* createdAt, QString* updatedAt, bool outcome, QString* sources, qint32 earliestSourceTime, qint32 latestSourceTime, qint32 earliestMeasurementTime, qint32 latestMeasurementTime, qint32 earliestFillingTime, qint32 latestFillingTime, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariables");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("variableId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variableId)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("minimumAllowedValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(minimumAllowedValue)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("fillingValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(fillingValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("joinWith"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(joinWith)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("variableCategoryId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variableCategoryId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("updated"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(updated)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("fillingType"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(fillingType)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("numberOfProcessedMeasurements"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfProcessedMeasurements)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("measurementsAtLastAnalysis"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(measurementsAtLastAnalysis)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastUnitId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastUnitId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastOriginalUnitId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastOriginalUnitId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastOriginalValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastOriginalValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastSourceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastSourceId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("numberOfCorrelations"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfCorrelations)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("minimumRecordedDailyValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(minimumRecordedDailyValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("maximumRecordedDailyValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(maximumRecordedDailyValue)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("mostCommonUnitId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(mostCommonUnitId)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("numberOfUniqueDailyValues"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfUniqueDailyValues)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("numberOfChanges"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfChanges)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("outcome"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(outcome)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sources"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sources)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("earliestSourceTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(earliestSourceTime)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("latestSourceTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(latestSourceTime)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("earliestMeasurementTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(earliestMeasurementTime)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("latestMeasurementTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(latestMeasurementTime)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("earliestFillingTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(earliestFillingTime)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("latestFillingTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(latestFillingTime)));
    

    
    
    
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
            &SWGUserVariableApi::userVariablesGetCallback);

    worker->execute(&input);
}

void
SWGUserVariableApi::userVariablesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_21* output = static_cast<SWGInline_response_200_21*>(create(json, QString("SWGInline_response_200_21")));
    
    
    

    worker->deleteLater();

    emit userVariablesGetSignal(output);
    
}
void
SWGUserVariableApi::userVariablesPost(SWGUserVariable body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariables");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUserVariableApi::userVariablesPostCallback);

    worker->execute(&input);
}

void
SWGUserVariableApi::userVariablesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_22* output = static_cast<SWGInline_response_200_22*>(create(json, QString("SWGInline_response_200_22")));
    
    
    

    worker->deleteLater();

    emit userVariablesPostSignal(output);
    
}
void
SWGUserVariableApi::userVariablesIdGet(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariables/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUserVariableApi::userVariablesIdGetCallback);

    worker->execute(&input);
}

void
SWGUserVariableApi::userVariablesIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_22* output = static_cast<SWGInline_response_200_22*>(create(json, QString("SWGInline_response_200_22")));
    
    
    

    worker->deleteLater();

    emit userVariablesIdGetSignal(output);
    
}
void
SWGUserVariableApi::userVariablesIdPut(qint32 id, SWGUserVariable body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariables/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUserVariableApi::userVariablesIdPutCallback);

    worker->execute(&input);
}

void
SWGUserVariableApi::userVariablesIdPutCallback(HttpRequestWorker * worker) {
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

    emit userVariablesIdPutSignal(output);
    
}
void
SWGUserVariableApi::userVariablesIdDelete(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariables/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUserVariableApi::userVariablesIdDeleteCallback);

    worker->execute(&input);
}

void
SWGUserVariableApi::userVariablesIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit userVariablesIdDeleteSignal(output);
    
}
} /* namespace Swagger */
