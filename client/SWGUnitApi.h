#ifndef _SWG_SWGUnitApi_H_
#define _SWG_SWGUnitApi_H_

#include "SWGHttpRequest.h"

#include "SWGInline_response_200_17.h"
#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200_18.h"
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

    void unitsGet(QString* clientId, QString* name, QString* abbreviatedName, bool categoryId, SWGNumber* minimumValue, SWGNumber* maximumValue, qint32 updated, SWGNumber* multiply, SWGNumber* add, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void unitsPost(SWGUnit body);
    void unitsIdGet(qint32 id);
    void unitsIdPut(qint32 id, SWGUnit body);
    void unitsIdDelete(qint32 id);
    
private:
    void unitsGetCallback (HttpRequestWorker * worker);
    void unitsPostCallback (HttpRequestWorker * worker);
    void unitsIdGetCallback (HttpRequestWorker * worker);
    void unitsIdPutCallback (HttpRequestWorker * worker);
    void unitsIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void unitsGetSignal(SWGInline_response_200_17* summary);
    void unitsPostSignal(SWGInline_response_200_18* summary);
    void unitsIdGetSignal(SWGInline_response_200_18* summary);
    void unitsIdPutSignal(SWGInline_response_200_2* summary);
    void unitsIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif