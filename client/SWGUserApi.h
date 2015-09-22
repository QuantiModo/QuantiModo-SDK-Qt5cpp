#ifndef _SWG_SWGUserApi_H_
#define _SWG_SWGUserApi_H_

#include "SWGHttpRequest.h"

#include "SWGUserTokenRequest.h"
#include "SWGUserTokenFailedResponse.h"
#include "SWGUserTokenSuccessfulResponse.h"
#include "SWGUser.h"

#include <QObject>

namespace Swagger {

class SWGUserApi: public QObject {
    Q_OBJECT

public:
    SWGUserApi();
    SWGUserApi(QString host, QString basePath);
    ~SWGUserApi();

    QString host;
    QString basePath;

    void v1OrganizationsOrganizationIdUsersPost(qint32 organizationId, SWGUserTokenRequest body);
    void v1UserMeGet();
    
private:
    void v1OrganizationsOrganizationIdUsersPostCallback (HttpRequestWorker * worker);
    void v1UserMeGetCallback (HttpRequestWorker * worker);
    
signals:
    void v1OrganizationsOrganizationIdUsersPostSignal(SWGUserTokenSuccessfulResponse* summary);
    void v1UserMeGetSignal(SWGUser* summary);
    
};
}
#endif