#ifndef _SWG_SWGMeasurementApi_H_
#define _SWG_SWGMeasurementApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200_11.h"
#include "SWGMeasurementPost.h"
#include "SWGHttpRequest.h"
#include "SWGInline_response_200_12.h"
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

    void measurementsGet(qint32 userId, QString* clientId, qint32 connectorId, qint32 variableId, qint32 startTime, SWGNumber* value, SWGNumber* originalValue, qint32 duration, QString* note, SWGNumber* latitude, SWGNumber* longitude, QString* location, QString* createdAt, QString* updatedAt, QString* error, qint32 limit, qint32 offset, QString* sort);
    void measurementsPost(SWGMeasurementPost body);
    void measurementsCsvGet();
    void measurementsRequestCsvPost();
    void measurementsIdGet(qint32 id);
    void measurementsIdPut(qint32 id, SWGMeasurement body);
    void measurementsIdDelete(qint32 id);
    
private:
    void measurementsGetCallback (HttpRequestWorker * worker);
    void measurementsPostCallback (HttpRequestWorker * worker);
    void measurementsCsvGetCallback (HttpRequestWorker * worker);
    void measurementsRequestCsvPostCallback (HttpRequestWorker * worker);
    void measurementsIdGetCallback (HttpRequestWorker * worker);
    void measurementsIdPutCallback (HttpRequestWorker * worker);
    void measurementsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void measurementsGetSignal(SWGInline_response_200_11* summary);
    void measurementsPostSignal(SWGInline_response_200_11* summary);
    void measurementsCsvGetSignal(SWGHttpRequestInputFileElement* summary);
    void measurementsRequestCsvPostSignal(qint32 summary);
    void measurementsIdGetSignal(SWGInline_response_200_12* summary);
    void measurementsIdPutSignal(SWGInline_response_200_2* summary);
    void measurementsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif