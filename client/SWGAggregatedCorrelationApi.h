#ifndef _SWG_SWGAggregatedCorrelationApi_H_
#define _SWG_SWGAggregatedCorrelationApi_H_

#include "SWGHttpRequest.h"

#include "SWGNumber.h"
#include <QString>
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

    void aggregatedCorrelationsGet(SWGNumber* correlation, qint32 causeId, qint32 effectId, qint32 onsetDelay, qint32 durationOfAction, qint32 numberOfPairs, SWGNumber* valuePredictingHighOutcome, SWGNumber* valuePredictingLowOutcome, SWGNumber* optimalPearsonProduct, SWGNumber* vote, qint32 numberOfUsers, qint32 numberOfCorrelations, SWGNumber* statisticalSignificance, QString* causeUnit, qint32 causeUnitId, qint32 causeChanges, qint32 effectChanges, SWGNumber* aggregateQmScore, QString* createdAt, QString* updatedAt, QString* status, QString* errorMessage, QString* lastSuccessfulUpdateTime, SWGNumber* reversePearsonCorrelationCoefficient, SWGNumber* predictivePearsonCorrelationCoefficient, qint32 limit, qint32 offset, QString* sort);
    void aggregatedCorrelationsPost(SWGAggregatedCorrelation body);
    void aggregatedCorrelationsIdGet(qint32 id);
    void aggregatedCorrelationsIdPut(qint32 id, SWGAggregatedCorrelation body);
    void aggregatedCorrelationsIdDelete(qint32 id);
    
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