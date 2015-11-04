#ifndef _SWG_SWGVariableUserSourceApi_H_
#define _SWG_SWGVariableUserSourceApi_H_

#include "SWGHttpRequest.h"

#include "SWGInline_response_200_25.h"
#include <QString>
#include "SWGInline_response_200_26.h"
#include "SWGVariableUserSource.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGVariableUserSourceApi: public QObject {
    Q_OBJECT

public:
    SWGVariableUserSourceApi();
    SWGVariableUserSourceApi(QString host, QString basePath);
    ~SWGVariableUserSourceApi();

    QString host;
    QString basePath;

    void variableUserSourcesGet(qint32 variableId, qint32 userId, qint32 timestamp, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void variableUserSourcesPost(SWGVariableUserSource body);
    void variableUserSourcesIdGet(qint32 id, qint32 sourceId);
    void variableUserSourcesIdPut(qint32 id, qint32 sourceId, SWGVariableUserSource body);
    void variableUserSourcesIdDelete(qint32 id, qint32 sourceId);
    
private:
    void variableUserSourcesGetCallback (HttpRequestWorker * worker);
    void variableUserSourcesPostCallback (HttpRequestWorker * worker);
    void variableUserSourcesIdGetCallback (HttpRequestWorker * worker);
    void variableUserSourcesIdPutCallback (HttpRequestWorker * worker);
    void variableUserSourcesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void variableUserSourcesGetSignal(SWGInline_response_200_25* summary);
    void variableUserSourcesPostSignal(SWGInline_response_200_26* summary);
    void variableUserSourcesIdGetSignal(SWGInline_response_200_26* summary);
    void variableUserSourcesIdPutSignal(SWGInline_response_200_2* summary);
    void variableUserSourcesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif