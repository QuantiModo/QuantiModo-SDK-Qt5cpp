#ifndef _SWG_SWGConnectorsApi_H_
#define _SWG_SWGConnectorsApi_H_

#include "SWGHttpRequest.h"

#include "SWGConnector.h"
#include <QString>

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

    void connectorsListGet();
    void connectorsConnectorConnectGet(QString* connector);
    void connectorsConnectorConnectInstructionsGet(QString* connector, QString* url, QList<QString*>* parameters, bool usePopup);
    void connectorsConnectorConnectParameterGet(QString* connector, QString* displayName, QString* key, bool usePopup, QString* type, QString* placeholder, QString* defaultValue);
    void connectorsConnectorDisconnectGet(QString* connector);
    void connectorsConnectorInfoGet(QString* connector);
    void connectorsConnectorUpdateGet(QString* connector);
    
private:
    void connectorsListGetCallback (HttpRequestWorker * worker);
    void connectorsConnectorConnectGetCallback (HttpRequestWorker * worker);
    void connectorsConnectorConnectInstructionsGetCallback (HttpRequestWorker * worker);
    void connectorsConnectorConnectParameterGetCallback (HttpRequestWorker * worker);
    void connectorsConnectorDisconnectGetCallback (HttpRequestWorker * worker);
    void connectorsConnectorInfoGetCallback (HttpRequestWorker * worker);
    void connectorsConnectorUpdateGetCallback (HttpRequestWorker * worker);
    
signals:
    void connectorsListGetSignal(QList<SWGConnector*>* summary);
    void connectorsConnectorConnectGetSignal();
    void connectorsConnectorConnectInstructionsGetSignal();
    void connectorsConnectorConnectParameterGetSignal();
    void connectorsConnectorDisconnectGetSignal();
    void connectorsConnectorInfoGetSignal();
    void connectorsConnectorUpdateGetSignal();
    
};
}
#endif