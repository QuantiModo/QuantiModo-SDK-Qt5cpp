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
    
private:
    void unitCategoriesGetCallback (HttpRequestWorker * worker);
    void unitsGetCallback (HttpRequestWorker * worker);
    
signals:
    void unitCategoriesGetSignal(SWGUnitCategory* summary);
    void unitsGetSignal(QList<SWGUnit*>* summary);
    
};
}
#endif