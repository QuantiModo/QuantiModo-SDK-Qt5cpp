#ifndef _SWG_SWGUserVariableApi_H_
#define _SWG_SWGUserVariableApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200_21.h"
#include "SWGInline_response_200_22.h"
#include "SWGUserVariable.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGUserVariableApi: public QObject {
    Q_OBJECT

public:
    SWGUserVariableApi();
    SWGUserVariableApi(QString host, QString basePath);
    ~SWGUserVariableApi();

    QString host;
    QString basePath;

    void userVariablesGet(QString* clientId, qint32 variableId, qint32 defaultUnitId, SWGNumber* minimumAllowedValue, SWGNumber* maximumAllowedValue, SWGNumber* fillingValue, qint32 joinWith, qint32 onsetDelay, qint32 durationOfAction, qint32 variableCategoryId, qint32 updated, qint32 public, bool causeOnly, QString* fillingType, qint32 numberOfMeasurements, qint32 numberOfProcessedMeasurements, qint32 measurementsAtLastAnalysis, qint32 lastUnitId, qint32 lastOriginalUnitId, qint32 lastOriginalValue, SWGNumber* lastValue, qint32 lastSourceId, qint32 numberOfCorrelations, QString* status, QString* errorMessage, QString* lastSuccessfulUpdateTime, SWGNumber* standardDeviation, SWGNumber* variance, SWGNumber* minimumRecordedDailyValue, SWGNumber* maximumRecordedDailyValue, SWGNumber* mean, SWGNumber* median, qint32 mostCommonUnitId, SWGNumber* mostCommonValue, SWGNumber* numberOfUniqueDailyValues, qint32 numberOfChanges, SWGNumber* skewness, SWGNumber* kurtosis, SWGNumber* latitude, SWGNumber* longitude, QString* location, QString* createdAt, QString* updatedAt, bool outcome, QString* sources, qint32 earliestSourceTime, qint32 latestSourceTime, qint32 earliestMeasurementTime, qint32 latestMeasurementTime, qint32 earliestFillingTime, qint32 latestFillingTime, qint32 limit, qint32 offset, QString* sort);
    void userVariablesPost(SWGUserVariable body);
    void userVariablesIdGet(qint32 id);
    void userVariablesIdPut(qint32 id, SWGUserVariable body);
    void userVariablesIdDelete(qint32 id);
    
private:
    void userVariablesGetCallback (HttpRequestWorker * worker);
    void userVariablesPostCallback (HttpRequestWorker * worker);
    void userVariablesIdGetCallback (HttpRequestWorker * worker);
    void userVariablesIdPutCallback (HttpRequestWorker * worker);
    void userVariablesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void userVariablesGetSignal(SWGInline_response_200_21* summary);
    void userVariablesPostSignal(SWGInline_response_200_22* summary);
    void userVariablesIdGetSignal(SWGInline_response_200_22* summary);
    void userVariablesIdPutSignal(SWGInline_response_200_2* summary);
    void userVariablesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif