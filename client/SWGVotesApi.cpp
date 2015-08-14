#include "SWGVotesApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGVotesApi::SWGVotesApi() {}

SWGVotesApi::~SWGVotesApi() {}

SWGVotesApi::SWGVotesApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGVotesApi::v1VotesPost(QString* cause, QString* effect, bool vote) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/votes");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cause"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cause)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("effect"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(effect)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("vote"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(vote)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVotesApi::v1VotesPostCallback);

    worker->execute(&input);
}

void
SWGVotesApi::v1VotesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCommonResponse* output = static_cast<SWGCommonResponse*>(create(json, QString("SWGCommonResponse")));
    
    
    

    worker->deleteLater();

    emit v1VotesPostSignal(output);
    
}
void
SWGVotesApi::v1VotesDeletePost(QString* cause, QString* effect) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/votes/delete");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cause"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cause)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("effect"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(effect)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVotesApi::v1VotesDeletePostCallback);

    worker->execute(&input);
}

void
SWGVotesApi::v1VotesDeletePostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGCommonResponse* output = static_cast<SWGCommonResponse*>(create(json, QString("SWGCommonResponse")));
    
    
    

    worker->deleteLater();

    emit v1VotesDeletePostSignal(output);
    
}
} /* namespace Swagger */
