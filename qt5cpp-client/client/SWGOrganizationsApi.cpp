#include "SWGOrganizationsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGOrganizationsApi::SWGOrganizationsApi() {}

SWGOrganizationsApi::~SWGOrganizationsApi() {}

SWGOrganizationsApi::SWGOrganizationsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGOrganizationsApi::v1OrganizationsOrganizationIdUsersPost(qint32 organizationId, SWGUserTokenRequest body) {
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
            &SWGOrganizationsApi::v1OrganizationsOrganizationIdUsersPostCallback);

    worker->execute(&input);
}

void
SWGOrganizationsApi::v1OrganizationsOrganizationIdUsersPostCallback(HttpRequestWorker * worker) {
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
} /* namespace Swagger */
