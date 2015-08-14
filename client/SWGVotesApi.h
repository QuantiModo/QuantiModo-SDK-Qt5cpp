#ifndef _SWG_SWGVotesApi_H_
#define _SWG_SWGVotesApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGCommonResponse.h"

#include <QObject>

namespace Swagger {

class SWGVotesApi: public QObject {
    Q_OBJECT

public:
    SWGVotesApi();
    SWGVotesApi(QString host, QString basePath);
    ~SWGVotesApi();

    QString host;
    QString basePath;

    void v1VotesPost(QString* cause, QString* effect, bool vote);
    void v1VotesDeletePost(QString* cause, QString* effect);
    
private:
    void v1VotesPostCallback (HttpRequestWorker * worker);
    void v1VotesDeletePostCallback (HttpRequestWorker * worker);
    
signals:
    void v1VotesPostSignal(SWGCommonResponse* summary);
    void v1VotesDeletePostSignal(SWGCommonResponse* summary);
    
};
}
#endif