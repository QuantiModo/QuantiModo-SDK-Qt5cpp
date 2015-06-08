#ifndef _SWG_SWGConnectApi_H_
#define _SWG_SWGConnectApi_H_

#include "SWGHttpRequest.h"

#include <QString>

#include <QObject>

namespace Swagger {

class SWGConnectApi: public QObject {
    Q_OBJECT

public:
    SWGConnectApi();
    SWGConnectApi(QString host, QString basePath);
    ~SWGConnectApi();

    QString host;
    QString basePath;

    void v1Connect.jsGet(QString* t);
    void v1ConnectMobileGet(QString* t);
    
private:
    void v1Connect.jsGetCallback (HttpRequestWorker * worker);
    void v1ConnectMobileGetCallback (HttpRequestWorker * worker);
    
signals:
    void v1Connect.jsGetSignal();
    void v1ConnectMobileGetSignal();
    
};
}
#endif