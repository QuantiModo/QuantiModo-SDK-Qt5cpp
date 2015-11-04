#ifndef _SWG_SWGVoteApi_H_
#define _SWG_SWGVoteApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_29.h"
#include "SWGInline_response_200_30.h"
#include "SWGVote.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGVoteApi: public QObject {
    Q_OBJECT

public:
    SWGVoteApi();
    SWGVoteApi(QString host, QString basePath);
    ~SWGVoteApi();

    QString host;
    QString basePath;

    void votesGet(QString* clientId, qint32 userId, qint32 causeId, qint32 effectId, qint32 value, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void votesPost(SWGVote body);
    void votesIdGet(qint32 id);
    void votesIdPut(qint32 id, SWGVote body);
    void votesIdDelete(qint32 id);
    
private:
    void votesGetCallback (HttpRequestWorker * worker);
    void votesPostCallback (HttpRequestWorker * worker);
    void votesIdGetCallback (HttpRequestWorker * worker);
    void votesIdPutCallback (HttpRequestWorker * worker);
    void votesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void votesGetSignal(SWGInline_response_200_29* summary);
    void votesPostSignal(SWGInline_response_200_30* summary);
    void votesIdGetSignal(SWGInline_response_200_30* summary);
    void votesIdPutSignal(SWGInline_response_200_2* summary);
    void votesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif