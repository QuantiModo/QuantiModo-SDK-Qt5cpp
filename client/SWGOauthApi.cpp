#include "SWGOauthApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGOauthApi::SWGOauthApi() {}

SWGOauthApi::~SWGOauthApi() {}

SWGOauthApi::SWGOauthApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGOauthApi::oauth2AccesstokenGet(QString* responseType, QString* redirectUri, QString* realm, QString* clientId, QString* scope, QString* state) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/oauth2/accesstoken");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("responseType"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(responseType)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("redirectUri"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(redirectUri)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("realm"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(realm)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("scope"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(scope)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("state"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(state)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOauthApi::oauth2AccesstokenGetCallback);

    worker->execute(&input);
}

void
SWGOauthApi::oauth2AccesstokenGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit oauth2AccesstokenGetSignal();
}
void
SWGOauthApi::oauth2AuthorizeGet(QString* clientId, QString* realm, QString* redirectUri, QString* responseType, QString* scope, QString* state) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/oauth2/authorize");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("realm"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(realm)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("redirectUri"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(redirectUri)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("responseType"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(responseType)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("scope"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(scope)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("state"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(state)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOauthApi::oauth2AuthorizeGetCallback);

    worker->execute(&input);
}

void
SWGOauthApi::oauth2AuthorizeGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit oauth2AuthorizeGetSignal();
}
} /* namespace Swagger */
