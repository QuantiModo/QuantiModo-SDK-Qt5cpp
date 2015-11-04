#include "SWGVariableUserSourceApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGVariableUserSourceApi::SWGVariableUserSourceApi() {}

SWGVariableUserSourceApi::~SWGVariableUserSourceApi() {}

SWGVariableUserSourceApi::SWGVariableUserSourceApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGVariableUserSourceApi::variableUserSourcesGet(qint32 variableId, qint32 userId, qint32 timestamp, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableUserSources");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("userId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(userId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("timestamp"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(timestamp)));
    

    
    
    
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
            &SWGVariableUserSourceApi::variableUserSourcesGetCallback);

    worker->execute(&input);
}

void
SWGVariableUserSourceApi::variableUserSourcesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_25* output = static_cast<SWGInline_response_200_25*>(create(json, QString("SWGInline_response_200_25")));
    
    
    

    worker->deleteLater();

    emit variableUserSourcesGetSignal(output);
    
}
void
SWGVariableUserSourceApi::variableUserSourcesPost(SWGVariableUserSource body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableUserSources");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariableUserSourceApi::variableUserSourcesPostCallback);

    worker->execute(&input);
}

void
SWGVariableUserSourceApi::variableUserSourcesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_26* output = static_cast<SWGInline_response_200_26*>(create(json, QString("SWGInline_response_200_26")));
    
    
    

    worker->deleteLater();

    emit variableUserSourcesPostSignal(output);
    
}
void
SWGVariableUserSourceApi::variableUserSourcesIdGet(qint32 id, qint32 sourceId) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableUserSources/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sourceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sourceId)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariableUserSourceApi::variableUserSourcesIdGetCallback);

    worker->execute(&input);
}

void
SWGVariableUserSourceApi::variableUserSourcesIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_26* output = static_cast<SWGInline_response_200_26*>(create(json, QString("SWGInline_response_200_26")));
    
    
    

    worker->deleteLater();

    emit variableUserSourcesIdGetSignal(output);
    
}
void
SWGVariableUserSourceApi::variableUserSourcesIdPut(qint32 id, qint32 sourceId, SWGVariableUserSource body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableUserSources/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sourceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sourceId)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariableUserSourceApi::variableUserSourcesIdPutCallback);

    worker->execute(&input);
}

void
SWGVariableUserSourceApi::variableUserSourcesIdPutCallback(HttpRequestWorker * worker) {
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

    emit variableUserSourcesIdPutSignal(output);
    
}
void
SWGVariableUserSourceApi::variableUserSourcesIdDelete(qint32 id, qint32 sourceId) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableUserSources/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sourceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sourceId)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariableUserSourceApi::variableUserSourcesIdDeleteCallback);

    worker->execute(&input);
}

void
SWGVariableUserSourceApi::variableUserSourcesIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit variableUserSourcesIdDeleteSignal(output);
    
}
} /* namespace Swagger */
