#ifndef _SWG_SWGUpdateApi_H_
#define _SWG_SWGUpdateApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_19.h"
#include "SWGUpdate.h"
#include "SWGInline_response_200_20.h"
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

    void updatesGet(qint32 userId, qint32 connectorId, qint32 numberOfMeasurements, bool success, QString* message, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void updatesPost(SWGUpdate body);
    void updatesIdGet(qint32 id);
    void updatesIdPut(qint32 id, SWGUpdate body);
    void updatesIdDelete(qint32 id);
    
private:
    void updatesGetCallback (HttpRequestWorker * worker);
    void updatesPostCallback (HttpRequestWorker * worker);
    void updatesIdGetCallback (HttpRequestWorker * worker);
    void updatesIdPutCallback (HttpRequestWorker * worker);
    void updatesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void updatesGetSignal(SWGInline_response_200_19* summary);
    void updatesPostSignal(SWGInline_response_200_20* summary);
    void updatesIdGetSignal(SWGInline_response_200_20* summary);
    void updatesIdPutSignal(SWGInline_response_200_2* summary);
    void updatesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif