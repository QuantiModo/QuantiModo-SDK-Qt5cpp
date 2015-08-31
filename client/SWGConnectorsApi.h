#ifndef _SWG_SWGConnectorsApi_H_
#define _SWG_SWGConnectorsApi_H_

#include "SWGHttpRequest.h"

#include "SWGConnector.h"
#include <QString>
#include "SWGConnectorInfo.h"

#include <QObject>

namespace Swagger {

class SWGConnectorsApi: public QObject {
    Q_OBJECT

public:
    SWGConnectorsApi();
    SWGConnectorsApi(QString host, QString basePath);
    ~SWGConnectorsApi();

    QString host;
    QString basePath;

    void v1ConnectorsListGet();
    void v1ConnectorsConnectorConnectGet(QString* connector);
    void v1ConnectorsConnectorDisconnectGet(QString* connector);
    void v1ConnectorsConnectorInfoGet(QString* connector);
    void v1ConnectorsConnectorUpdateGet(QString* connector);
    
private:
    void v1ConnectorsListGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorConnectGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorDisconnectGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorInfoGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorUpdateGetCallback (HttpRequestWorker * worker);
    
signals:
    void v1ConnectorsListGetSignal(QList<SWGConnector*>* summary);
    void v1ConnectorsConnectorConnectGetSignal();
    void v1ConnectorsConnectorDisconnectGetSignal();
    void v1ConnectorsConnectorInfoGetSignal(SWGConnectorInfo* summary);
    void v1ConnectorsConnectorUpdateGetSignal();
    
};
}
#endif