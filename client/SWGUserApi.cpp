#include "SWGUserApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUserApi::SWGUserApi() {}

SWGUserApi::~SWGUserApi() {}

SWGUserApi::SWGUserApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUserApi::v1OrganizationsOrganizationIdUsersPost(qint32 organizationId, SWGUserTokenRequest body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/organizations/{organizationId}/users");

    
    QString organizationIdPathParam("{"); organizationIdPathParam.append("organizationId").append("}");
    fullPath.replace(organizationIdPathParam, stringValue(organizationId));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUserApi::v1OrganizationsOrganizationIdUsersPostCallback);

    worker->execute(&input);
}

void
SWGUserApi::v1OrganizationsOrganizationIdUsersPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGUserTokenSuccessfulResponse* output = static_cast<SWGUserTokenSuccessfulResponse*>(create(json, QString("SWGUserTokenSuccessfulResponse")));
    
    
    

    worker->deleteLater();

    emit v1OrganizationsOrganizationIdUsersPostSignal(output);
    
}
void
SWGUserApi::v1UserMeGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/user/me");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUserApi::v1UserMeGetCallback);

    worker->execute(&input);
}

void
SWGUserApi::v1UserMeGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGUser* output = static_cast<SWGUser*>(create(json, QString("SWGUser")));
    
    
    

    worker->deleteLater();

    emit v1UserMeGetSignal(output);
    
}
} /* namespace Swagger */
