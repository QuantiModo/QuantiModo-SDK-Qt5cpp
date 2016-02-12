#ifndef _SWG_SWGUserVariableRelationshipApi_H_
#define _SWG_SWGUserVariableRelationshipApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200_8.h"
#include "SWGUserVariableRelationship.h"
#include "SWGInline_response_200_29.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGUserVariableRelationshipApi: public QObject {
    Q_OBJECT

public:
    SWGUserVariableRelationshipApi();
    SWGUserVariableRelationshipApi(QString host, QString basePath);
    ~SWGUserVariableRelationshipApi();

    QString host;
    QString basePath;

    void userVariableRelationshipsGet(QString* accessToken, qint32 id, QString* confidenceLevel, SWGNumber* confidenceScore, QString* direction, qint32 durationOfAction, QString* errorMessage, qint32 onsetDelay, qint32 outcomeVariableId, qint32 predictorVariableId, qint32 predictorUnitId, SWGNumber* sinnRank, QString* strengthLevel, SWGNumber* strengthScore, qint32 userId, QString* vote, SWGNumber* valuePredictingHighOutcome, SWGNumber* valuePredictingLowOutcome, qint32 limit, qint32 offset, QString* sort);
    void userVariableRelationshipsPost(QString* accessToken, SWGUserVariableRelationship body);
    void userVariableRelationshipsIdGet(qint32 id, QString* accessToken);
    void userVariableRelationshipsIdPut(qint32 id, QString* accessToken, SWGUserVariableRelationship body);
    void userVariableRelationshipsIdDelete(qint32 id, QString* accessToken);
    
private:
    void userVariableRelationshipsGetCallback (HttpRequestWorker * worker);
    void userVariableRelationshipsPostCallback (HttpRequestWorker * worker);
    void userVariableRelationshipsIdGetCallback (HttpRequestWorker * worker);
    void userVariableRelationshipsIdPutCallback (HttpRequestWorker * worker);
    void userVariableRelationshipsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void userVariableRelationshipsGetSignal(SWGInline_response_200_8* summary);
    void userVariableRelationshipsPostSignal(SWGInline_response_200_29* summary);
    void userVariableRelationshipsIdGetSignal(SWGInline_response_200_29* summary);
    void userVariableRelationshipsIdPutSignal(SWGInline_response_200_2* summary);
    void userVariableRelationshipsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif