#include "SWGVoteApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGVoteApi::SWGVoteApi() {}

SWGVoteApi::~SWGVoteApi() {}

SWGVoteApi::SWGVoteApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGVoteApi::votesGet(QString* accessToken, QString* clientId, qint32 userId, qint32 causeId, qint32 effectId, qint32 value, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/votes");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("clientId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(clientId)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("causeId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(causeId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("effectId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(effectId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("value"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(value)));
    

    
    
    
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
            &SWGVoteApi::votesGetCallback);

    worker->execute(&input);
}

void
SWGVoteApi::votesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_11* output = static_cast<SWGInline_response_200_11*>(create(json, QString("SWGInline_response_200_11")));
    
    
    

    worker->deleteLater();

    emit votesGetSignal(output);
    
}
void
SWGVoteApi::votesPost(QString* accessToken, SWGVote body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/votes");

    

    
    
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
            &SWGVoteApi::votesPostCallback);

    worker->execute(&input);
}

void
SWGVoteApi::votesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_36* output = static_cast<SWGInline_response_200_36*>(create(json, QString("SWGInline_response_200_36")));
    
    
    

    worker->deleteLater();

    emit votesPostSignal(output);
    
}
void
SWGVoteApi::votesIdGet(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/votes/{id}");

    
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
            &SWGVoteApi::votesIdGetCallback);

    worker->execute(&input);
}

void
SWGVoteApi::votesIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_36* output = static_cast<SWGInline_response_200_36*>(create(json, QString("SWGInline_response_200_36")));
    
    
    

    worker->deleteLater();

    emit votesIdGetSignal(output);
    
}
void
SWGVoteApi::votesIdPut(qint32 id, QString* accessToken, SWGVote body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/votes/{id}");

    
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
            &SWGVoteApi::votesIdPutCallback);

    worker->execute(&input);
}

void
SWGVoteApi::votesIdPutCallback(HttpRequestWorker * worker) {
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

    emit votesIdPutSignal(output);
    
}
void
SWGVoteApi::votesIdDelete(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/votes/{id}");

    
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
            &SWGVoteApi::votesIdDeleteCallback);

    worker->execute(&input);
}

void
SWGVoteApi::votesIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit votesIdDeleteSignal(output);
    
}
} /* namespace Swagger */
