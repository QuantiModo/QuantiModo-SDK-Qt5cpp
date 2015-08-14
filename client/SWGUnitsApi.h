#ifndef _SWG_SWGUnitsApi_H_
#define _SWG_SWGUnitsApi_H_

#include "SWGHttpRequest.h"

#include "SWGUnitCategory.h"
#include <QString>
#include "SWGUnit.h"

#include <QObject>

namespace Swagger {

class SWGUnitsApi: public QObject {
    Q_OBJECT

public:
    SWGUnitsApi();
    SWGUnitsApi(QString host, QString basePath);
    ~SWGUnitsApi();

    QString host;
    QString basePath;

    void unitCategoriesGet();
    void unitsGet(QString* unitName, QString* abbreviatedUnitName, QString* categoryName);
    void unitsVariableGet(QString* unitName, QString* abbreviatedUnitName, QString* categoryName, QString* variable);
    
private:
    void unitCategoriesGetCallback (HttpRequestWorker * worker);
    void unitsGetCallback (HttpRequestWorker * worker);
    void unitsVariableGetCallback (HttpRequestWorker * worker);
    
signals:
    void unitCategoriesGetSignal(SWGUnitCategory* summary);
    void unitsGetSignal(QList<SWGUnit*>* summary);
    void unitsVariableGetSignal(QList<SWGUnit*>* summary);
    
};
}
#endif