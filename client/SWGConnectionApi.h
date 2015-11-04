#ifndef _SWG_SWGConnectionApi_H_
#define _SWG_SWGConnectionApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_3.h"
#include "SWGInline_response_200_4.h"
#include "SWGConnection.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGConnectionApi: public QObject {
    Q_OBJECT

public:
    SWGConnectionApi();
    SWGConnectionApi(QString host, QString basePath);
    ~SWGConnectionApi();

    QString host;
    QString basePath;

    void connectionsGet(qint32 userId, qint32 connectorId, QString* connectStatus, QString* connectError, QString* updateRequestedAt, QString* updateStatus, QString* updateError, QString* lastSuccessfulUpdatedAt, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void connectionsPost(SWGConnection body);
    void connectionsIdGet(qint32 id);
    void connectionsIdPut(qint32 id, SWGConnection body);
    void connectionsIdDelete(qint32 id);
    
private:
    void connectionsGetCallback (HttpRequestWorker * worker);
    void connectionsPostCallback (HttpRequestWorker * worker);
    void connectionsIdGetCallback (HttpRequestWorker * worker);
    void connectionsIdPutCallback (HttpRequestWorker * worker);
    void connectionsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void connectionsGetSignal(SWGInline_response_200_3* summary);
    void connectionsPostSignal(SWGInline_response_200_4* summary);
    void connectionsIdGetSignal(SWGInline_response_200_4* summary);
    void connectionsIdPutSignal(SWGInline_response_200_2* summary);
    void connectionsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif