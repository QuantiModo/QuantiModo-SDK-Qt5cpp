#ifndef _SWG_SWGPairsApi_H_
#define _SWG_SWGPairsApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGPairs.h"

#include <QObject>

namespace Swagger {

class SWGPairsApi: public QObject {
    Q_OBJECT

public:
    SWGPairsApi();
    SWGPairsApi(QString host, QString basePath);
    ~SWGPairsApi();

    QString host;
    QString basePath;

    void v1PairsGet(QString* cause, QString* effect, QString* causeSource, QString* causeUnit, QString* delay, QString* duration, QString* effectSource, QString* effectUnit, QString* endTime, QString* startTime, qint32 limit, qint32 offset, qint32 sort);
    
private:
    void v1PairsGetCallback (HttpRequestWorker * worker);
    
signals:
    void v1PairsGetSignal(QList<SWGPairs*>* summary);
    
};
}
#endif