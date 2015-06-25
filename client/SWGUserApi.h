#ifndef _SWG_SWGUserApi_H_
#define _SWG_SWGUserApi_H_

#include "SWGHttpRequest.h"

#include "SWGUser.h"
#include "SWGUserTokenRequest.h"
#include "SWGUserTokenFailedResponse.h"
#include "SWGUserTokenSuccessfulResponse.h"

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

    void userMeGet();
    void v1OrganizationsOrganizationIdUsersPost(qint32 organizationId, SWGUserTokenRequest body);
    
private:
    void userMeGetCallback (HttpRequestWorker * worker);
    void v1OrganizationsOrganizationIdUsersPostCallback (HttpRequestWorker * worker);
    
signals:
    void userMeGetSignal(SWGUser* summary);
    void v1OrganizationsOrganizationIdUsersPostSignal(SWGUserTokenSuccessfulResponse* summary);
    
};
}
#endif