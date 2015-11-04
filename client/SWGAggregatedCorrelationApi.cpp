#include "SWGAggregatedCorrelationApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGAggregatedCorrelationApi::SWGAggregatedCorrelationApi() {}

SWGAggregatedCorrelationApi::~SWGAggregatedCorrelationApi() {}

SWGAggregatedCorrelationApi::SWGAggregatedCorrelationApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGAggregatedCorrelationApi::aggregatedCorrelationsGet(SWGNumber* correlation, qint32 causeId, qint32 effectId, qint32 onsetDelay, qint32 durationOfAction, qint32 numberOfPairs, SWGNumber* valuePredictingHighOutcome, SWGNumber* valuePredictingLowOutcome, SWGNumber* optimalPearsonProduct, SWGNumber* vote, qint32 numberOfUsers, qint32 numberOfCorrelations, SWGNumber* statisticalSignificance, QString* causeUnit, qint32 causeUnitId, qint32 causeChanges, qint32 effectChanges, SWGNumber* aggregateQmScore, QString* createdAt, QString* updatedAt, QString* status, QString* errorMessage, QString* lastSuccessfulUpdateTime, SWGNumber* reversePearsonCorrelationCoefficient, SWGNumber* predictivePearsonCorrelationCoefficient, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/aggregatedCorrelations");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("correlation"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(correlation)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("causeId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(causeId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("effectId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(effectId)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("numberOfPairs"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfPairs)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("valuePredictingHighOutcome"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(valuePredictingHighOutcome)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("valuePredictingLowOutcome"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(valuePredictingLowOutcome)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("optimalPearsonProduct"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(optimalPearsonProduct)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("vote"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(vote)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("numberOfUsers"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfUsers)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("statisticalSignificance"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(statisticalSignificance)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("causeUnit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(causeUnit)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("causeUnitId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(causeUnitId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("causeChanges"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(causeChanges)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("effectChanges"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(effectChanges)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("aggregateQmScore"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(aggregateQmScore)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("reversePearsonCorrelationCoefficient"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(reversePearsonCorrelationCoefficient)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("predictivePearsonCorrelationCoefficient"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(predictivePearsonCorrelationCoefficient)));
    

    
    
    
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
            &SWGAggregatedCorrelationApi::aggregatedCorrelationsGetCallback);

    worker->execute(&input);
}

void
SWGAggregatedCorrelationApi::aggregatedCorrelationsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200* output = static_cast<SWGInline_response_200*>(create(json, QString("SWGInline_response_200")));
    
    
    

    worker->deleteLater();

    emit aggregatedCorrelationsGetSignal(output);
    
}
void
SWGAggregatedCorrelationApi::aggregatedCorrelationsPost(SWGAggregatedCorrelation body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/aggregatedCorrelations");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAggregatedCorrelationApi::aggregatedCorrelationsPostCallback);

    worker->execute(&input);
}

void
SWGAggregatedCorrelationApi::aggregatedCorrelationsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_1* output = static_cast<SWGInline_response_200_1*>(create(json, QString("SWGInline_response_200_1")));
    
    
    

    worker->deleteLater();

    emit aggregatedCorrelationsPostSignal(output);
    
}
void
SWGAggregatedCorrelationApi::aggregatedCorrelationsIdGet(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/aggregatedCorrelations/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAggregatedCorrelationApi::aggregatedCorrelationsIdGetCallback);

    worker->execute(&input);
}

void
SWGAggregatedCorrelationApi::aggregatedCorrelationsIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_1* output = static_cast<SWGInline_response_200_1*>(create(json, QString("SWGInline_response_200_1")));
    
    
    

    worker->deleteLater();

    emit aggregatedCorrelationsIdGetSignal(output);
    
}
void
SWGAggregatedCorrelationApi::aggregatedCorrelationsIdPut(qint32 id, SWGAggregatedCorrelation body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/aggregatedCorrelations/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAggregatedCorrelationApi::aggregatedCorrelationsIdPutCallback);

    worker->execute(&input);
}

void
SWGAggregatedCorrelationApi::aggregatedCorrelationsIdPutCallback(HttpRequestWorker * worker) {
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

    emit aggregatedCorrelationsIdPutSignal(output);
    
}
void
SWGAggregatedCorrelationApi::aggregatedCorrelationsIdDelete(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/aggregatedCorrelations/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAggregatedCorrelationApi::aggregatedCorrelationsIdDeleteCallback);

    worker->execute(&input);
}

void
SWGAggregatedCorrelationApi::aggregatedCorrelationsIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit aggregatedCorrelationsIdDeleteSignal(output);
    
}
} /* namespace Swagger */
