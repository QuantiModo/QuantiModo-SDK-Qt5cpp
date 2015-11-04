#ifndef _SWG_SWGSourceApi_H_
#define _SWG_SWGSourceApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_13.h"
#include "SWGInline_response_200_14.h"
#include "SWGSource.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGSourceApi: public QObject {
    Q_OBJECT

public:
    SWGSourceApi();
    SWGSourceApi(QString host, QString basePath);
    ~SWGSourceApi();

    QString host;
    QString basePath;

    void sourcesGet(QString* clientId, QString* name, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void sourcesPost(SWGSource body);
    void sourcesIdGet(qint32 id);
    void sourcesIdPut(qint32 id, SWGSource body);
    void sourcesIdDelete(qint32 id);
    
private:
    void sourcesGetCallback (HttpRequestWorker * worker);
    void sourcesPostCallback (HttpRequestWorker * worker);
    void sourcesIdGetCallback (HttpRequestWorker * worker);
    void sourcesIdPutCallback (HttpRequestWorker * worker);
    void sourcesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void sourcesGetSignal(SWGInline_response_200_13* summary);
    void sourcesPostSignal(SWGInline_response_200_14* summary);
    void sourcesIdGetSignal(SWGInline_response_200_14* summary);
    void sourcesIdPutSignal(SWGInline_response_200_2* summary);
    void sourcesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif