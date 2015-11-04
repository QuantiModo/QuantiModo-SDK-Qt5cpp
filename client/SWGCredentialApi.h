#ifndef _SWG_SWGCredentialApi_H_
#define _SWG_SWGCredentialApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_9.h"
#include "SWGCredential.h"
#include "SWGInline_response_200_10.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGCredentialApi: public QObject {
    Q_OBJECT

public:
    SWGCredentialApi();
    SWGCredentialApi(QString host, QString basePath);
    ~SWGCredentialApi();

    QString host;
    QString basePath;

    void credentialsGet(bool connectorId, QString* attrKey, QString* attrValue, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void credentialsPost(SWGCredential body);
    void credentialsIdGet(qint32 id, QString* attrKey);
    void credentialsIdPut(qint32 id, QString* attrKey, SWGCredential body);
    void credentialsIdDelete(qint32 id, QString* attrKey);
    
private:
    void credentialsGetCallback (HttpRequestWorker * worker);
    void credentialsPostCallback (HttpRequestWorker * worker);
    void credentialsIdGetCallback (HttpRequestWorker * worker);
    void credentialsIdPutCallback (HttpRequestWorker * worker);
    void credentialsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void credentialsGetSignal(SWGInline_response_200_9* summary);
    void credentialsPostSignal(SWGInline_response_200_10* summary);
    void credentialsIdGetSignal(SWGInline_response_200_10* summary);
    void credentialsIdPutSignal(SWGInline_response_200_2* summary);
    void credentialsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif