#ifndef _SWG_SWGMeasurementApi_H_
#define _SWG_SWGMeasurementApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200_5.h"
#include "SWGMeasurementPost.h"
#include "SWGHttpRequest.h"
#include "SWGInline_response_200_20.h"
#include "SWGMeasurement.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGMeasurementApi: public QObject {
    Q_OBJECT

public:
    SWGMeasurementApi();
    SWGMeasurementApi(QString host, QString basePath);
    ~SWGMeasurementApi();

    QString host;
    QString basePath;

    void measurementsGet(QString* accessToken, qint32 userId, QString* clientId, qint32 connectorId, qint32 variableId, qint32 sourceId, QString* startTime, SWGNumber* value, qint32 unitId, SWGNumber* originalValue, qint32 originalUnitId, qint32 duration, QString* note, SWGNumber* latitude, SWGNumber* longitude, QString* location, QString* createdAt, QString* updatedAt, QString* error, qint32 limit, qint32 offset, QString* sort);
    void measurementsPost(QString* accessToken, SWGMeasurementPost body);
    void measurementsCsvGet(QString* accessToken);
    void measurementsRequestCsvPost(QString* accessToken);
    void measurementsIdGet(qint32 id, QString* accessToken);
    void measurementsIdPut(qint32 id, QString* accessToken, SWGMeasurement body);
    void measurementsIdDelete(qint32 id, QString* accessToken);
    
private:
    void measurementsGetCallback (HttpRequestWorker * worker);
    void measurementsPostCallback (HttpRequestWorker * worker);
    void measurementsCsvGetCallback (HttpRequestWorker * worker);
    void measurementsRequestCsvPostCallback (HttpRequestWorker * worker);
    void measurementsIdGetCallback (HttpRequestWorker * worker);
    void measurementsIdPutCallback (HttpRequestWorker * worker);
    void measurementsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void measurementsGetSignal(SWGInline_response_200_5* summary);
    void measurementsPostSignal(SWGInline_response_200_5* summary);
    void measurementsCsvGetSignal(SWGHttpRequestInputFileElement* summary);
    void measurementsRequestCsvPostSignal(qint32 summary);
    void measurementsIdGetSignal(SWGInline_response_200_20* summary);
    void measurementsIdPutSignal(SWGInline_response_200_2* summary);
    void measurementsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif