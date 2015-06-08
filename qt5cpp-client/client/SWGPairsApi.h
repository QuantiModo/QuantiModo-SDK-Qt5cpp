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

    void pairsGet(QString* cause, QString* causeSource, QString* causeUnit, QString* delay, QString* duration, QString* effect, QString* effectSource, QString* effectUnit, QString* endTime, QString* startTime);
    
private:
    void pairsGetCallback (HttpRequestWorker * worker);
    
signals:
    void pairsGetSignal();
    
};
}
#endif