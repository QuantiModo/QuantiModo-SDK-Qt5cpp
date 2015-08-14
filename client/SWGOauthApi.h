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

    void oauth2AccesstokenGet(QString* clientId, QString* clientSecret, QString* grantType, QString* responseType, QString* scope, QString* redirectUri, QString* state, QString* realm);
    void oauth2AuthorizeGet(QString* clientId, QString* clientSecret, QString* responseType, QString* scope, QString* redirectUri, QString* state, QString* realm);
    
private:
    void oauth2AccesstokenGetCallback (HttpRequestWorker * worker);
    void oauth2AuthorizeGetCallback (HttpRequestWorker * worker);
    
signals:
    void oauth2AccesstokenGetSignal();
    void oauth2AuthorizeGetSignal();
    
};
}
#endif