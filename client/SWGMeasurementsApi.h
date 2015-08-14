#ifndef _SWG_SWGMeasurementsApi_H_
#define _SWG_SWGMeasurementsApi_H_

#include "SWGHttpRequest.h"

#include "SWGMeasurementSource.h"
#include <QString>
#include "SWGMeasurement.h"
#include "SWGMeasurementSet.h"
#include "SWGMeasurementRange.h"

#include <QObject>

namespace Swagger {

class SWGMeasurementsApi: public QObject {
    Q_OBJECT

public:
    SWGMeasurementsApi();
    SWGMeasurementsApi(QString host, QString basePath);
    ~SWGMeasurementsApi();

    QString host;
    QString basePath;

    void measurementSourcesGet();
    void measurementSourcesPost(SWGMeasurementSource name);
    void measurementsGet(QString* variableName, QString* unit, QString* startTime, QString* endTime, qint32 groupingWidth, QString* groupingTimezone, qint32 limit, qint32 offset, qint32 sort);
    void measurementsV2Post(SWGMeasurementSet measurements);
    void measurementsRangeGet(QString* sources, qint32 user);
    
private:
    void measurementSourcesGetCallback (HttpRequestWorker * worker);
    void measurementSourcesPostCallback (HttpRequestWorker * worker);
    void measurementsGetCallback (HttpRequestWorker * worker);
    void measurementsV2PostCallback (HttpRequestWorker * worker);
    void measurementsRangeGetCallback (HttpRequestWorker * worker);
    
signals:
    void measurementSourcesGetSignal(SWGMeasurementSource* summary);
    void measurementSourcesPostSignal();
    void measurementsGetSignal(SWGMeasurement* summary);
    void measurementsV2PostSignal();
    void measurementsRangeGetSignal(SWGMeasurementRange* summary);
    
};
}
#endif