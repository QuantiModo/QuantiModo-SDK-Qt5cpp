#ifndef _SWG_SWGVariableApi_H_
#define _SWG_SWGVariableApi_H_

#include "SWGHttpRequest.h"

#include "SWGInline_response_200_34.h"
#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200_35.h"
#include "SWGVariable.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGVariableApi: public QObject {
    Q_OBJECT

public:
    SWGVariableApi();
    SWGVariableApi(QString host, QString basePath);
    ~SWGVariableApi();

    QString host;
    QString basePath;

    void variablesGet(QString* accessToken, qint32 id, QString* clientId, qint32 parentId, QString* name, qint32 variableCategoryId, qint32 defaultUnitId, QString* combinationOperation, SWGNumber* fillingValue, SWGNumber* maximumAllowedValue, SWGNumber* minimumAllowedValue, qint32 onsetDelay, qint32 durationOfAction, qint32 public, bool causeOnly, SWGNumber* mostCommonValue, qint32 mostCommonUnitId, SWGNumber* standardDeviation, SWGNumber* variance, SWGNumber* mean, SWGNumber* median, SWGNumber* numberOfMeasurements, SWGNumber* numberOfUniqueValues, SWGNumber* skewness, SWGNumber* kurtosis, QString* status, QString* errorMessage, QString* lastSuccessfulUpdateTime, QString* createdAt, QString* updatedAt, QString* productUrl, QString* imageUrl, SWGNumber* price, qint32 numberOfUserVariables, bool outcome, SWGNumber* minimumRecordedValue, SWGNumber* maximumRecordedValue, qint32 limit, qint32 offset, QString* sort);
    void variablesPost(QString* accessToken, SWGVariable body);
    void variablesIdGet(qint32 id, QString* accessToken);
    void variablesIdPut(qint32 id, QString* accessToken, SWGVariable body);
    void variablesIdDelete(qint32 id, QString* accessToken);
    
private:
    void variablesGetCallback (HttpRequestWorker * worker);
    void variablesPostCallback (HttpRequestWorker * worker);
    void variablesIdGetCallback (HttpRequestWorker * worker);
    void variablesIdPutCallback (HttpRequestWorker * worker);
    void variablesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void variablesGetSignal(SWGInline_response_200_34* summary);
    void variablesPostSignal(SWGInline_response_200_35* summary);
    void variablesIdGetSignal(SWGInline_response_200_35* summary);
    void variablesIdPutSignal(SWGInline_response_200_2* summary);
    void variablesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif