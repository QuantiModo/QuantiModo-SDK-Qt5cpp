#ifndef _SWG_SWGAggregatedCorrelationApi_H_
#define _SWG_SWGAggregatedCorrelationApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200.h"
#include "SWGAggregatedCorrelation.h"
#include "SWGInline_response_200_1.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGAggregatedCorrelationApi: public QObject {
    Q_OBJECT

public:
    SWGAggregatedCorrelationApi();
    SWGAggregatedCorrelationApi(QString host, QString basePath);
    ~SWGAggregatedCorrelationApi();

    QString host;
    QString basePath;

    void aggregatedCorrelationsGet(QString* accessToken, SWGNumber* correlation, qint32 causeId, qint32 effectId, qint32 onsetDelay, qint32 durationOfAction, qint32 numberOfPairs, SWGNumber* valuePredictingHighOutcome, SWGNumber* valuePredictingLowOutcome, SWGNumber* optimalPearsonProduct, qint32 numberOfUsers, qint32 numberOfCorrelations, SWGNumber* statisticalSignificance, QString* causeUnit, qint32 causeUnitId, qint32 causeChanges, qint32 effectChanges, SWGNumber* aggregateQmScore, QString* createdAt, QString* updatedAt, QString* status, QString* errorMessage, QString* lastSuccessfulUpdateTime, SWGNumber* reversePearsonCorrelationCoefficient, SWGNumber* predictivePearsonCorrelationCoefficient, qint32 limit, qint32 offset, QString* sort);
    void aggregatedCorrelationsPost(QString* accessToken, SWGAggregatedCorrelation body);
    void aggregatedCorrelationsIdGet(qint32 id, QString* accessToken);
    void aggregatedCorrelationsIdPut(qint32 id, QString* accessToken, SWGAggregatedCorrelation body);
    void aggregatedCorrelationsIdDelete(qint32 id, QString* accessToken);
    
private:
    void aggregatedCorrelationsGetCallback (HttpRequestWorker * worker);
    void aggregatedCorrelationsPostCallback (HttpRequestWorker * worker);
    void aggregatedCorrelationsIdGetCallback (HttpRequestWorker * worker);
    void aggregatedCorrelationsIdPutCallback (HttpRequestWorker * worker);
    void aggregatedCorrelationsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void aggregatedCorrelationsGetSignal(SWGInline_response_200* summary);
    void aggregatedCorrelationsPostSignal(SWGInline_response_200_1* summary);
    void aggregatedCorrelationsIdGetSignal(SWGInline_response_200_1* summary);
    void aggregatedCorrelationsIdPutSignal(SWGInline_response_200_2* summary);
    void aggregatedCorrelationsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif