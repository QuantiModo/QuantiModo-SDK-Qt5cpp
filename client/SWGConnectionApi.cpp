#include "SWGConnectionApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGConnectionApi::SWGConnectionApi() {}

SWGConnectionApi::~SWGConnectionApi() {}

SWGConnectionApi::SWGConnectionApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGConnectionApi::connectionsGet(QString* accessToken, qint32 userId, qint32 connectorId, QString* connectStatus, QString* connectError, QString* updateRequestedAt, QString* updateStatus, QString* updateError, QString* lastSuccessfulUpdatedAt, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connections");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("userId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(userId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("connectorId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(connectorId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("connectStatus"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(connectStatus)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("connectError"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(connectError)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("updateRequestedAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(updateRequestedAt)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("updateStatus"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(updateStatus)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("updateError"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(updateError)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastSuccessfulUpdatedAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastSuccessfulUpdatedAt)));
    

    
    
    
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
            &SWGConnectionApi::connectionsGetCallback);

    worker->execute(&input);
}

void
SWGConnectionApi::connectionsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_3* output = static_cast<SWGInline_response_200_3*>(create(json, QString("SWGInline_response_200_3")));
    
    
    

    worker->deleteLater();

    emit connectionsGetSignal(output);
    
}
void
SWGConnectionApi::connectionsPost(QString* accessToken, SWGConnection body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connections");

    

    
    
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
            &SWGConnectionApi::connectionsPostCallback);

    worker->execute(&input);
}

void
SWGConnectionApi::connectionsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_14* output = static_cast<SWGInline_response_200_14*>(create(json, QString("SWGInline_response_200_14")));
    
    
    

    worker->deleteLater();

    emit connectionsPostSignal(output);
    
}
void
SWGConnectionApi::connectionsIdGet(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connections/{id}");

    
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
            &SWGConnectionApi::connectionsIdGetCallback);

    worker->execute(&input);
}

void
SWGConnectionApi::connectionsIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_14* output = static_cast<SWGInline_response_200_14*>(create(json, QString("SWGInline_response_200_14")));
    
    
    

    worker->deleteLater();

    emit connectionsIdGetSignal(output);
    
}
void
SWGConnectionApi::connectionsIdPut(qint32 id, QString* accessToken, SWGConnection body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connections/{id}");

    
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
            &SWGConnectionApi::connectionsIdPutCallback);

    worker->execute(&input);
}

void
SWGConnectionApi::connectionsIdPutCallback(HttpRequestWorker * worker) {
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

    emit connectionsIdPutSignal(output);
    
}
void
SWGConnectionApi::connectionsIdDelete(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connections/{id}");

    
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
            &SWGConnectionApi::connectionsIdDeleteCallback);

    worker->execute(&input);
}

void
SWGConnectionApi::connectionsIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit connectionsIdDeleteSignal(output);
    
}
} /* namespace Swagger */
