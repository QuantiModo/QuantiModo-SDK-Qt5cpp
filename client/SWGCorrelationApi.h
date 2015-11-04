#ifndef _SWG_SWGCorrelationApi_H_
#define _SWG_SWGCorrelationApi_H_

#include "SWGHttpRequest.h"

#include "SWGNumber.h"
#include <QString>
#include "SWGInline_response_200_7.h"
#include "SWGInline_response_200_8.h"
#include "SWGCorrelation.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGCorrelationApi: public QObject {
    Q_OBJECT

public:
    SWGCorrelationApi();
    SWGCorrelationApi(QString host, QString basePath);
    ~SWGCorrelationApi();

    QString host;
    QString basePath;

    void correlationsGet(qint32 timestamp, qint32 userId, SWGNumber* correlation, qint32 causeId, qint32 effectId, qint32 onsetDelay, qint32 durationOfAction, qint32 numberOfPairs, SWGNumber* valuePredictingHighOutcome, SWGNumber* valuePredictingLowOutcome, SWGNumber* optimalPearsonProduct, SWGNumber* vote, SWGNumber* statisticalSignificance, QString* causeUnit, qint32 causeUnitId, qint32 causeChanges, qint32 effectChanges, SWGNumber* qmScore, QString* error, QString* createdAt, QString* updatedAt, SWGNumber* reversePearsonCorrelationCoefficient, SWGNumber* predictivePearsonCorrelationCoefficient, qint32 limit, qint32 offset, QString* sort);
    void correlationsPost(SWGCorrelation body);
    void correlationsIdGet(qint32 id);
    void correlationsIdPut(qint32 id, SWGCorrelation body);
    void correlationsIdDelete(qint32 id);
    
private:
    void correlationsGetCallback (HttpRequestWorker * worker);
    void correlationsPostCallback (HttpRequestWorker * worker);
    void correlationsIdGetCallback (HttpRequestWorker * worker);
    void correlationsIdPutCallback (HttpRequestWorker * worker);
    void correlationsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void correlationsGetSignal(SWGInline_response_200_7* summary);
    void correlationsPostSignal(SWGInline_response_200_8* summary);
    void correlationsIdGetSignal(SWGInline_response_200_8* summary);
    void correlationsIdPutSignal(SWGInline_response_200_2* summary);
    void correlationsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif