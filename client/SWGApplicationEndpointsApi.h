#ifndef _SWG_SWGApplicationEndpointsApi_H_
#define _SWG_SWGApplicationEndpointsApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_3.h"
#include "SWGInline_response_200_4.h"
#include "SWGNumber.h"
#include "SWGInline_response_200_5.h"
#include "SWGInline_response_200_6.h"
#include "SWGInline_response_200_7.h"
#include "SWGInline_response_200_8.h"
#include "SWGInline_response_200_9.h"
#include "SWGInline_response_200_10.h"
#include "SWGInline_response_200_11.h"

#include <QObject>

namespace Swagger {

class SWGApplicationEndpointsApi: public QObject {
    Q_OBJECT

public:
    SWGApplicationEndpointsApi();
    SWGApplicationEndpointsApi(QString host, QString basePath);
    ~SWGApplicationEndpointsApi();

    QString host;
    QString basePath;

    void applicationConnectionsGet(QString* accessToken, qint32 connectorId, QString* connectStatus, QString* connectError, QString* updateRequestedAt, QString* updateStatus, QString* updateError, QString* lastSuccessfulUpdatedAt, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void applicationCredentialsGet(QString* accessToken, qint32 connectorId, QString* attrKey, QString* attrValue, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void applicationMeasurementsGet(QString* accessToken, QString* clientId, qint32 connectorId, qint32 variableId, qint32 sourceId, QString* startTime, SWGNumber* value, qint32 unitId, SWGNumber* originalValue, qint32 originalUnitId, qint32 duration, QString* note, SWGNumber* latitude, SWGNumber* longitude, QString* location, QString* createdAt, QString* updatedAt, QString* error, qint32 limit, qint32 offset, QString* sort);
    void applicationTrackingRemindersGet(QString* accessToken, QString* clientId, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void applicationUpdatesGet(QString* accessToken, qint32 connectorId, qint32 numberOfMeasurements, bool success, QString* message, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void applicationUserVariableRelationshipsGet(QString* accessToken, qint32 id, QString* confidenceLevel, SWGNumber* confidenceScore, QString* direction, qint32 durationOfAction, QString* errorMessage, qint32 onsetDelay, qint32 outcomeVariableId, qint32 predictorVariableId, qint32 predictorUnitId, SWGNumber* sinnRank, QString* strengthLevel, SWGNumber* strengthScore, QString* vote, SWGNumber* valuePredictingHighOutcome, SWGNumber* valuePredictingLowOutcome, qint32 limit, qint32 offset, QString* sort);
    void applicationUserVariablesGet(QString* accessToken, QString* clientId, qint32 parentId, qint32 variableId, qint32 defaultUnitId, SWGNumber* minimumAllowedValue, SWGNumber* maximumAllowedValue, SWGNumber* fillingValue, qint32 joinWith, qint32 onsetDelay, qint32 durationOfAction, qint32 variableCategoryId, qint32 updated, qint32 public, bool causeOnly, QString* fillingType, qint32 numberOfMeasurements, qint32 numberOfProcessedMeasurements, qint32 measurementsAtLastAnalysis, qint32 lastUnitId, qint32 lastOriginalUnitId, qint32 lastOriginalValue, SWGNumber* lastValue, SWGNumber* lastOriginalValue2, qint32 lastSourceId, qint32 numberOfCorrelations, QString* status, QString* errorMessage, QString* lastSuccessfulUpdateTime, SWGNumber* standardDeviation, SWGNumber* variance, SWGNumber* minimumRecordedValue, SWGNumber* maximumRecordedValue, SWGNumber* mean, SWGNumber* median, qint32 mostCommonUnitId, SWGNumber* mostCommonValue, SWGNumber* numberOfUniqueDailyValues, qint32 numberOfChanges, SWGNumber* skewness, SWGNumber* kurtosis, SWGNumber* latitude, SWGNumber* longitude, QString* location, QString* createdAt, QString* updatedAt, bool outcome, QString* sources, qint32 earliestSourceTime, qint32 latestSourceTime, qint32 earliestMeasurementTime, qint32 latestMeasurementTime, qint32 earliestFillingTime, qint32 latestFillingTime, qint32 limit, qint32 offset, QString* sort);
    void applicationVariableUserSourcesGet(QString* accessToken, qint32 variableId, qint32 timestamp, qint32 earliestMeasurementTime, qint32 latestMeasurementTime, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void applicationVotesGet(QString* accessToken, QString* clientId, qint32 causeId, qint32 effectId, qint32 value, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    
private:
    void applicationConnectionsGetCallback (HttpRequestWorker * worker);
    void applicationCredentialsGetCallback (HttpRequestWorker * worker);
    void applicationMeasurementsGetCallback (HttpRequestWorker * worker);
    void applicationTrackingRemindersGetCallback (HttpRequestWorker * worker);
    void applicationUpdatesGetCallback (HttpRequestWorker * worker);
    void applicationUserVariableRelationshipsGetCallback (HttpRequestWorker * worker);
    void applicationUserVariablesGetCallback (HttpRequestWorker * worker);
    void applicationVariableUserSourcesGetCallback (HttpRequestWorker * worker);
    void applicationVotesGetCallback (HttpRequestWorker * worker);
    
signals:
    void applicationConnectionsGetSignal(SWGInline_response_200_3* summary);
    void applicationCredentialsGetSignal(SWGInline_response_200_4* summary);
    void applicationMeasurementsGetSignal(SWGInline_response_200_5* summary);
    void applicationTrackingRemindersGetSignal(SWGInline_response_200_6* summary);
    void applicationUpdatesGetSignal(SWGInline_response_200_7* summary);
    void applicationUserVariableRelationshipsGetSignal(SWGInline_response_200_8* summary);
    void applicationUserVariablesGetSignal(SWGInline_response_200_9* summary);
    void applicationVariableUserSourcesGetSignal(SWGInline_response_200_10* summary);
    void applicationVotesGetSignal(SWGInline_response_200_11* summary);
    
};
}
#endif