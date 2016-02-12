#include "SWGUserVariableRelationshipApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUserVariableRelationshipApi::SWGUserVariableRelationshipApi() {}

SWGUserVariableRelationshipApi::~SWGUserVariableRelationshipApi() {}

SWGUserVariableRelationshipApi::SWGUserVariableRelationshipApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUserVariableRelationshipApi::userVariableRelationshipsGet(QString* accessToken, qint32 id, QString* confidenceLevel, SWGNumber* confidenceScore, QString* direction, qint32 durationOfAction, QString* errorMessage, qint32 onsetDelay, qint32 outcomeVariableId, qint32 predictorVariableId, qint32 predictorUnitId, SWGNumber* sinnRank, QString* strengthLevel, SWGNumber* strengthScore, qint32 userId, QString* vote, SWGNumber* valuePredictingHighOutcome, SWGNumber* valuePredictingLowOutcome, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariableRelationships");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("strengthLevel"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(strengthLevel)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("userId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(userId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("vote"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(vote)));
    

    
    
    
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
            &SWGUserVariableRelationshipApi::userVariableRelationshipsGetCallback);

    worker->execute(&input);
}

void
SWGUserVariableRelationshipApi::userVariableRelationshipsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_8* output = static_cast<SWGInline_response_200_8*>(create(json, QString("SWGInline_response_200_8")));
    
    
    

    worker->deleteLater();

    emit userVariableRelationshipsGetSignal(output);
    
}
void
SWGUserVariableRelationshipApi::userVariableRelationshipsPost(QString* accessToken, SWGUserVariableRelationship body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariableRelationships");

    

    
    
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
            &SWGUserVariableRelationshipApi::userVariableRelationshipsPostCallback);

    worker->execute(&input);
}

void
SWGUserVariableRelationshipApi::userVariableRelationshipsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_29* output = static_cast<SWGInline_response_200_29*>(create(json, QString("SWGInline_response_200_29")));
    
    
    

    worker->deleteLater();

    emit userVariableRelationshipsPostSignal(output);
    
}
void
SWGUserVariableRelationshipApi::userVariableRelationshipsIdGet(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariableRelationships/{id}");

    
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
            &SWGUserVariableRelationshipApi::userVariableRelationshipsIdGetCallback);

    worker->execute(&input);
}

void
SWGUserVariableRelationshipApi::userVariableRelationshipsIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_29* output = static_cast<SWGInline_response_200_29*>(create(json, QString("SWGInline_response_200_29")));
    
    
    

    worker->deleteLater();

    emit userVariableRelationshipsIdGetSignal(output);
    
}
void
SWGUserVariableRelationshipApi::userVariableRelationshipsIdPut(qint32 id, QString* accessToken, SWGUserVariableRelationship body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariableRelationships/{id}");

    
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
            &SWGUserVariableRelationshipApi::userVariableRelationshipsIdPutCallback);

    worker->execute(&input);
}

void
SWGUserVariableRelationshipApi::userVariableRelationshipsIdPutCallback(HttpRequestWorker * worker) {
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

    emit userVariableRelationshipsIdPutSignal(output);
    
}
void
SWGUserVariableRelationshipApi::userVariableRelationshipsIdDelete(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/userVariableRelationships/{id}");

    
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
            &SWGUserVariableRelationshipApi::userVariableRelationshipsIdDeleteCallback);

    worker->execute(&input);
}

void
SWGUserVariableRelationshipApi::userVariableRelationshipsIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit userVariableRelationshipsIdDeleteSignal(output);
    
}
} /* namespace Swagger */
