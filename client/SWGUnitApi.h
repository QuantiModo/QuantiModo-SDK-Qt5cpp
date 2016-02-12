#ifndef _SWG_SWGUnitApi_H_
#define _SWG_SWGUnitApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200_26.h"
#include "SWGInline_response_200_27.h"
#include "SWGUnit.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGUnitApi: public QObject {
    Q_OBJECT

public:
    SWGUnitApi();
    SWGUnitApi(QString host, QString basePath);
    ~SWGUnitApi();

    QString host;
    QString basePath;

    void unitsGet(QString* accessToken, QString* clientId, QString* name, QString* abbreviatedName, qint32 categoryId, SWGNumber* minimumValue, SWGNumber* maximumValue, qint32 updated, qint32 defaultUnitId, SWGNumber* multiply, SWGNumber* add, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void unitsPost(QString* accessToken, SWGUnit body);
    void unitsIdGet(qint32 id, QString* accessToken);
    void unitsIdPut(qint32 id, QString* accessToken, SWGUnit body);
    void unitsIdDelete(qint32 id, QString* accessToken);
    
private:
    void unitsGetCallback (HttpRequestWorker * worker);
    void unitsPostCallback (HttpRequestWorker * worker);
    void unitsIdGetCallback (HttpRequestWorker * worker);
    void unitsIdPutCallback (HttpRequestWorker * worker);
    void unitsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void unitsGetSignal(SWGInline_response_200_26* summary);
    void unitsPostSignal(SWGInline_response_200_27* summary);
    void unitsIdGetSignal(SWGInline_response_200_27* summary);
    void unitsIdPutSignal(SWGInline_response_200_2* summary);
    void unitsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif