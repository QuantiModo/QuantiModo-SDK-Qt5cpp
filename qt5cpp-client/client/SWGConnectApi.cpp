#include "SWGConnectApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGConnectApi::SWGConnectApi() {}

SWGConnectApi::~SWGConnectApi() {}

SWGConnectApi::SWGConnectApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGConnectApi::v1Connect.jsGet(QString* t) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connect.js");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("t"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(t)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectApi::v1Connect.jsGetCallback);

    worker->execute(&input);
}

void
SWGConnectApi::v1Connect.jsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1Connect.jsGetSignal();
}
void
SWGConnectApi::v1ConnectMobileGet(QString* t) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connect/mobile");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("t"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(t)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectApi::v1ConnectMobileGetCallback);

    worker->execute(&input);
}

void
SWGConnectApi::v1ConnectMobileGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1ConnectMobileGetSignal();
}
} /* namespace Swagger */
