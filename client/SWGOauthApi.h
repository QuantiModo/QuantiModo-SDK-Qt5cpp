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

    void oauth2AccesstokenGet(QString* responseType, QString* redirectUri, QString* realm, QString* clientId, QString* scope, QString* state);
    void oauth2AuthorizeGet(QString* clientId, QString* realm, QString* redirectUri, QString* responseType, QString* scope, QString* state);
    
private:
    void oauth2AccesstokenGetCallback (HttpRequestWorker * worker);
    void oauth2AuthorizeGetCallback (HttpRequestWorker * worker);
    
signals:
    void oauth2AccesstokenGetSignal();
    void oauth2AuthorizeGetSignal();
    
};
}
#endif