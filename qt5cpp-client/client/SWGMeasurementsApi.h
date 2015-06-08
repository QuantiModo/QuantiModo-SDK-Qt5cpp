#ifndef _SWG_SWGMeasurementsApi_H_
#define _SWG_SWGMeasurementsApi_H_

#include "SWGHttpRequest.h"

#include "SWGMeasurementSource.h"
#include <QList>
#include <QString>
#include "SWGMeasurement.h"
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
    void measurementSourcesPost(QList<SWGMeasurementSource*>* name);
    void measurementsGet(QString* variableName, QString* unit, QString* startTime, QString* endTime, qint32 groupingWidth, QString* groupingTimezone);
    void measurementsV2Post(QList<SWGMeasurement*>* measurements);
    void measurementsRangeGet(QString* sources, qint32 user);
    
private:
    void measurementSourcesGetCallback (HttpRequestWorker * worker);
    void measurementSourcesPostCallback (HttpRequestWorker * worker);
    void measurementsGetCallback (HttpRequestWorker * worker);
    void measurementsV2PostCallback (HttpRequestWorker * worker);
    void measurementsRangeGetCallback (HttpRequestWorker * worker);
    
signals:
    void measurementSourcesGetSignal();
    void measurementSourcesPostSignal();
    void measurementsGetSignal();
    void measurementsV2PostSignal();
    void measurementsRangeGetSignal();
    
};
}
#endif