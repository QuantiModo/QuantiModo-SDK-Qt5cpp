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
SWGOauthApi::v1Oauth2AuthorizeGet(QString* clientId, QString* clientSecret, QString* responseType, QString* scope, QString* redirectUri, QString* state) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/oauth2/authorize");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("clientSecret"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(clientSecret)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("redirectUri"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(redirectUri)));
    

    
    
    
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
            &SWGOauthApi::v1Oauth2AuthorizeGetCallback);

    worker->execute(&input);
}

void
SWGOauthApi::v1Oauth2AuthorizeGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1Oauth2AuthorizeGetSignal();
}
void
SWGOauthApi::v1Oauth2TokenGet(QString* clientId, QString* clientSecret, QString* grantType, QString* responseType, QString* scope, QString* redirectUri, QString* state) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/oauth2/token");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("clientSecret"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(clientSecret)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("grantType"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(grantType)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("redirectUri"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(redirectUri)));
    

    
    
    
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
            &SWGOauthApi::v1Oauth2TokenGetCallback);

    worker->execute(&input);
}

void
SWGOauthApi::v1Oauth2TokenGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1Oauth2TokenGetSignal();
}
} /* namespace Swagger */
