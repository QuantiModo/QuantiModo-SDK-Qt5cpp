#include "SWGCommonVariableRelationshipApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCommonVariableRelationshipApi::SWGCommonVariableRelationshipApi() {}

SWGCommonVariableRelationshipApi::~SWGCommonVariableRelationshipApi() {}

SWGCommonVariableRelationshipApi::SWGCommonVariableRelationshipApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsGet(QString* accessToken, qint32 id, QString* confidenceLevel, SWGNumber* confidenceScore, QString* direction, qint32 durationOfAction, QString* errorMessage, qint32 onsetDelay, qint32 outcomeVariableId, qint32 predictorVariableId, qint32 predictorUnitId, SWGNumber* sinnRank, SWGNumber* strengthScore, QString* strengthLevel, qint32 upVotes, qint32 downVotes, SWGNumber* valuePredictingHighOutcome, SWGNumber* valuePredictingLowOutcome, qint32 numberOfUsers, QString* dataSource, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/commonVariableRelationships");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("id"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(id)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("confidenceLevel"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(confidenceLevel)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("confidenceScore"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(confidenceScore)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("direction"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(direction)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("errorMessage"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(errorMessage)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("outcomeVariableId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(outcomeVariableId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("predictorVariableId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(predictorVariableId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("predictorUnitId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(predictorUnitId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sinnRank"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sinnRank)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("strengthScore"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(strengthScore)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("strengthLevel"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(strengthLevel)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("upVotes"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(upVotes)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("downVotes"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(downVotes)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("valuePredictingHighOutcome"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(valuePredictingHighOutcome)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("valuePredictingLowOutcome"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(valuePredictingLowOutcome)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("numberOfUsers"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(numberOfUsers)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("dataSource"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(dataSource)));
    

    
    
    
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
            &SWGCommonVariableRelationshipApi::commonVariableRelationshipsGetCallback);

    worker->execute(&input);
}

void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_12* output = static_cast<SWGInline_response_200_12*>(create(json, QString("SWGInline_response_200_12")));
    
    
    

    worker->deleteLater();

    emit commonVariableRelationshipsGetSignal(output);
    
}
void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsPost(QString* accessToken, SWGCommonVariableRelationship body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/commonVariableRelationships");

    

    
    
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
            &SWGCommonVariableRelationshipApi::commonVariableRelationshipsPostCallback);

    worker->execute(&input);
}

void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_13* output = static_cast<SWGInline_response_200_13*>(create(json, QString("SWGInline_response_200_13")));
    
    
    

    worker->deleteLater();

    emit commonVariableRelationshipsPostSignal(output);
    
}
void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsIdGet(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/commonVariableRelationships/{id}");

    
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
            &SWGCommonVariableRelationshipApi::commonVariableRelationshipsIdGetCallback);

    worker->execute(&input);
}

void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_13* output = static_cast<SWGInline_response_200_13*>(create(json, QString("SWGInline_response_200_13")));
    
    
    

    worker->deleteLater();

    emit commonVariableRelationshipsIdGetSignal(output);
    
}
void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsIdPut(qint32 id, QString* accessToken, SWGCommonVariableRelationship body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/commonVariableRelationships/{id}");

    
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
            &SWGCommonVariableRelationshipApi::commonVariableRelationshipsIdPutCallback);

    worker->execute(&input);
}

void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsIdPutCallback(HttpRequestWorker * worker) {
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

    emit commonVariableRelationshipsIdPutSignal(output);
    
}
void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsIdDelete(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/commonVariableRelationships/{id}");

    
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
            &SWGCommonVariableRelationshipApi::commonVariableRelationshipsIdDeleteCallback);

    worker->execute(&input);
}

void
SWGCommonVariableRelationshipApi::commonVariableRelationshipsIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit commonVariableRelationshipsIdDeleteSignal(output);
    
}
} /* namespace Swagger */
