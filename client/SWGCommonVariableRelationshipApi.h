#ifndef _SWG_SWGCommonVariableRelationshipApi_H_
#define _SWG_SWGCommonVariableRelationshipApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200_12.h"
#include "SWGInline_response_200_13.h"
#include "SWGCommonVariableRelationship.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGCommonVariableRelationshipApi: public QObject {
    Q_OBJECT

public:
    SWGCommonVariableRelationshipApi();
    SWGCommonVariableRelationshipApi(QString host, QString basePath);
    ~SWGCommonVariableRelationshipApi();

    QString host;
    QString basePath;

    void commonVariableRelationshipsGet(QString* accessToken, qint32 id, QString* confidenceLevel, SWGNumber* confidenceScore, QString* direction, qint32 durationOfAction, QString* errorMessage, qint32 onsetDelay, qint32 outcomeVariableId, qint32 predictorVariableId, qint32 predictorUnitId, SWGNumber* sinnRank, SWGNumber* strengthScore, QString* strengthLevel, qint32 upVotes, qint32 downVotes, SWGNumber* valuePredictingHighOutcome, SWGNumber* valuePredictingLowOutcome, qint32 numberOfUsers, QString* dataSource, qint32 limit, qint32 offset, QString* sort);
    void commonVariableRelationshipsPost(QString* accessToken, SWGCommonVariableRelationship body);
    void commonVariableRelationshipsIdGet(qint32 id, QString* accessToken);
    void commonVariableRelationshipsIdPut(qint32 id, QString* accessToken, SWGCommonVariableRelationship body);
    void commonVariableRelationshipsIdDelete(qint32 id, QString* accessToken);
    
private:
    void commonVariableRelationshipsGetCallback (HttpRequestWorker * worker);
    void commonVariableRelationshipsPostCallback (HttpRequestWorker * worker);
    void commonVariableRelationshipsIdGetCallback (HttpRequestWorker * worker);
    void commonVariableRelationshipsIdPutCallback (HttpRequestWorker * worker);
    void commonVariableRelationshipsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void commonVariableRelationshipsGetSignal(SWGInline_response_200_12* summary);
    void commonVariableRelationshipsPostSignal(SWGInline_response_200_13* summary);
    void commonVariableRelationshipsIdGetSignal(SWGInline_response_200_13* summary);
    void commonVariableRelationshipsIdPutSignal(SWGInline_response_200_2* summary);
    void commonVariableRelationshipsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif