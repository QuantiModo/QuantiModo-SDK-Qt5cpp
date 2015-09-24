#ifndef _SWG_SWGConnectorsApi_H_
#define _SWG_SWGConnectorsApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGConnector.h"
#include "SWGConnectorInstruction.h"
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

    void v1Connect.jsGet(QString* access token, QString* mashape key);
    void v1ConnectMobileGet(QString* t);
    void v1ConnectorsListGet();
    void v1ConnectorsConnectorConnectGet(QString* connector);
    void v1ConnectorsConnectorConnectInstructionsGet(QString* connector, QString* parameters, QString* url, bool usePopup);
    void v1ConnectorsConnectorConnectParameterGet(QString* connector, QString* displayName, QString* key, QString* placeholder, QString* type, bool usePopup, QString* defaultValue);
    void v1ConnectorsConnectorDisconnectGet(QString* connector);
    void v1ConnectorsConnectorInfoGet(QString* connector);
    void v1ConnectorsConnectorUpdateGet(QString* connector);
    
private:
    void v1Connect.jsGetCallback (HttpRequestWorker * worker);
    void v1ConnectMobileGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsListGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorConnectGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorConnectInstructionsGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorConnectParameterGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorDisconnectGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorInfoGetCallback (HttpRequestWorker * worker);
    void v1ConnectorsConnectorUpdateGetCallback (HttpRequestWorker * worker);
    
signals:
    void v1Connect.jsGetSignal();
    void v1ConnectMobileGetSignal();
    void v1ConnectorsListGetSignal(QList<SWGConnector*>* summary);
    void v1ConnectorsConnectorConnectGetSignal();
    void v1ConnectorsConnectorConnectInstructionsGetSignal();
    void v1ConnectorsConnectorConnectParameterGetSignal(SWGConnectorInstruction* summary);
    void v1ConnectorsConnectorDisconnectGetSignal();
    void v1ConnectorsConnectorInfoGetSignal(SWGConnectorInfo* summary);
    void v1ConnectorsConnectorUpdateGetSignal();
    
};
}
#endif