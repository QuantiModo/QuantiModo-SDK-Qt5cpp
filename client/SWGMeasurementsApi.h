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

    void v1MeasurementSourcesGet();
    void v1MeasurementSourcesPost(SWGMeasurementSource name);
    void v1MeasurementsGet(QString* variableName, QString* unit, QString* startTime, QString* endTime, qint32 groupingWidth, QString* groupingTimezone, qint32 limit, qint32 offset, qint32 sort);
    void v1MeasurementsPost(SWGMeasurementSet measurements);
    void v1MeasurementsDailyGet(QString* variableName, QString* abbreviatedUnitName, QString* startTime, QString* endTime, qint32 groupingWidth, QString* groupingTimezone, qint32 limit, qint32 offset, qint32 sort);
    void v1MeasurementsRangeGet(QString* sources, qint32 user);
    
private:
    void v1MeasurementSourcesGetCallback (HttpRequestWorker * worker);
    void v1MeasurementSourcesPostCallback (HttpRequestWorker * worker);
    void v1MeasurementsGetCallback (HttpRequestWorker * worker);
    void v1MeasurementsPostCallback (HttpRequestWorker * worker);
    void v1MeasurementsDailyGetCallback (HttpRequestWorker * worker);
    void v1MeasurementsRangeGetCallback (HttpRequestWorker * worker);
    
signals:
    void v1MeasurementSourcesGetSignal(SWGMeasurementSource* summary);
    void v1MeasurementSourcesPostSignal();
    void v1MeasurementsGetSignal(SWGMeasurement* summary);
    void v1MeasurementsPostSignal();
    void v1MeasurementsDailyGetSignal(SWGMeasurement* summary);
    void v1MeasurementsRangeGetSignal(SWGMeasurementRange* summary);
    
};
}
#endif