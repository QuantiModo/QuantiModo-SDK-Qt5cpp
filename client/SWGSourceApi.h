#ifndef _SWG_SWGSourceApi_H_
#define _SWG_SWGSourceApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_21.h"
#include "SWGInline_response_200_22.h"
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

    void sourcesGet(QString* accessToken, QString* clientId, QString* name, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void sourcesPost(QString* accessToken, SWGSource body);
    void sourcesIdGet(qint32 id, QString* accessToken);
    void sourcesIdPut(qint32 id, QString* accessToken, SWGSource body);
    void sourcesIdDelete(qint32 id, QString* accessToken);
    
private:
    void sourcesGetCallback (HttpRequestWorker * worker);
    void sourcesPostCallback (HttpRequestWorker * worker);
    void sourcesIdGetCallback (HttpRequestWorker * worker);
    void sourcesIdPutCallback (HttpRequestWorker * worker);
    void sourcesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void sourcesGetSignal(SWGInline_response_200_21* summary);
    void sourcesPostSignal(SWGInline_response_200_22* summary);
    void sourcesIdGetSignal(SWGInline_response_200_22* summary);
    void sourcesIdPutSignal(SWGInline_response_200_2* summary);
    void sourcesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif