#ifndef _SWG_SWGConnectorApi_H_
#define _SWG_SWGConnectorApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_5.h"
#include "SWGInline_response_200_6.h"
#include "SWGConnector.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGConnectorApi: public QObject {
    Q_OBJECT

public:
    SWGConnectorApi();
    SWGConnectorApi(QString host, QString basePath);
    ~SWGConnectorApi();

    QString host;
    QString basePath;

    void connectorsGet(QString* name, QString* displayName, QString* image, QString* getItUrl, QString* shortDescription, QString* longDescription, bool enabled, bool oauth, qint32 limit, qint32 offset, QString* sort);
    void connectorsPost(SWGConnector body);
    void connectorsIdGet(qint32 id);
    void connectorsIdPut(qint32 id, SWGConnector body);
    void connectorsIdDelete(qint32 id);
    
private:
    void connectorsGetCallback (HttpRequestWorker * worker);
    void connectorsPostCallback (HttpRequestWorker * worker);
    void connectorsIdGetCallback (HttpRequestWorker * worker);
    void connectorsIdPutCallback (HttpRequestWorker * worker);
    void connectorsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void connectorsGetSignal(SWGInline_response_200_5* summary);
    void connectorsPostSignal(SWGInline_response_200_6* summary);
    void connectorsIdGetSignal(SWGInline_response_200_6* summary);
    void connectorsIdPutSignal(SWGInline_response_200_2* summary);
    void connectorsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif