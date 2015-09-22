#ifndef _SWG_SWGOauthApi_H_
#define _SWG_SWGOauthApi_H_

#include "SWGHttpRequest.h"

#include <QString>

#include <QObject>

namespace Swagger {

class SWGOauthApi: public QObject {
    Q_OBJECT

public:
    SWGOauthApi();
    SWGOauthApi(QString host, QString basePath);
    ~SWGOauthApi();

    QString host;
    QString basePath;

    void v1Oauth2AuthorizeGet(QString* clientId, QString* clientSecret, QString* responseType, QString* scope, QString* redirectUri, QString* state);
    void v1Oauth2TokenGet(QString* clientId, QString* clientSecret, QString* grantType, QString* responseType, QString* scope, QString* redirectUri, QString* state);
    
private:
    void v1Oauth2AuthorizeGetCallback (HttpRequestWorker * worker);
    void v1Oauth2TokenGetCallback (HttpRequestWorker * worker);
    
signals:
    void v1Oauth2AuthorizeGetSignal();
    void v1Oauth2TokenGetSignal();
    
};
}
#endif