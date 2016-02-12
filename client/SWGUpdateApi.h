#ifndef _SWG_SWGUpdateApi_H_
#define _SWG_SWGUpdateApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_7.h"
#include "SWGUpdate.h"
#include "SWGInline_response_200_28.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGUpdateApi: public QObject {
    Q_OBJECT

public:
    SWGUpdateApi();
    SWGUpdateApi(QString host, QString basePath);
    ~SWGUpdateApi();

    QString host;
    QString basePath;

    void updatesGet(QString* accessToken, qint32 userId, qint32 connectorId, qint32 numberOfMeasurements, bool success, QString* message, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void updatesPost(QString* accessToken, SWGUpdate body);
    void updatesIdGet(qint32 id, QString* accessToken);
    void updatesIdPut(qint32 id, QString* accessToken, SWGUpdate body);
    void updatesIdDelete(qint32 id, QString* accessToken);
    
private:
    void updatesGetCallback (HttpRequestWorker * worker);
    void updatesPostCallback (HttpRequestWorker * worker);
    void updatesIdGetCallback (HttpRequestWorker * worker);
    void updatesIdPutCallback (HttpRequestWorker * worker);
    void updatesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void updatesGetSignal(SWGInline_response_200_7* summary);
    void updatesPostSignal(SWGInline_response_200_28* summary);
    void updatesIdGetSignal(SWGInline_response_200_28* summary);
    void updatesIdPutSignal(SWGInline_response_200_2* summary);
    void updatesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif