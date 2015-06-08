#ifndef _SWG_SWGOrganizationsApi_H_
#define _SWG_SWGOrganizationsApi_H_

#include "SWGHttpRequest.h"

#include "SWGUserTokenRequest.h"
#include "SWGUserTokenFailedResponse.h"
#include "SWGUserTokenSuccessfulResponse.h"

#include <QObject>

namespace Swagger {

class SWGOrganizationsApi: public QObject {
    Q_OBJECT

public:
    SWGOrganizationsApi();
    SWGOrganizationsApi(QString host, QString basePath);
    ~SWGOrganizationsApi();

    QString host;
    QString basePath;

    void v1OrganizationsOrganizationIdUsersPost(qint32 organizationId, SWGUserTokenRequest body);
    
private:
    void v1OrganizationsOrganizationIdUsersPostCallback (HttpRequestWorker * worker);
    
signals:
    void v1OrganizationsOrganizationIdUsersPostSignal(SWGUserTokenSuccessfulResponse* summary);
    
};
}
#endif