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

    void v1UnitCategoriesGet();
    void v1UnitsGet(QString* unitName, QString* abbreviatedUnitName, QString* categoryName);
    void v1UnitsVariableGet(QString* unitName, QString* abbreviatedUnitName, QString* categoryName, QString* variable);
    
private:
    void v1UnitCategoriesGetCallback (HttpRequestWorker * worker);
    void v1UnitsGetCallback (HttpRequestWorker * worker);
    void v1UnitsVariableGetCallback (HttpRequestWorker * worker);
    
signals:
    void v1UnitCategoriesGetSignal(SWGUnitCategory* summary);
    void v1UnitsGetSignal(QList<SWGUnit*>* summary);
    void v1UnitsVariableGetSignal(QList<SWGUnit*>* summary);
    
};
}
#endif