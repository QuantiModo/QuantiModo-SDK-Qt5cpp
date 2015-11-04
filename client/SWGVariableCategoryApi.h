#ifndef _SWG_SWGVariableCategoryApi_H_
#define _SWG_SWGVariableCategoryApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNumber.h"
#include "SWGInline_response_200_23.h"
#include "SWGInline_response_200_24.h"
#include "SWGVariableCategory.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGVariableCategoryApi: public QObject {
    Q_OBJECT

public:
    SWGVariableCategoryApi();
    SWGVariableCategoryApi(QString host, QString basePath);
    ~SWGVariableCategoryApi();

    QString host;
    QString basePath;

    void variableCategoriesGet(QString* name, SWGNumber* fillingValue, SWGNumber* maximumAllowedValue, SWGNumber* minimumAllowedValue, qint32 durationOfAction, qint32 onsetDelay, QString* combinationOperation, qint32 updated, bool causeOnly, qint32 public, bool outcome, QString* createdAt, QString* updatedAt, QString* imageUrl, qint32 defaultUnitId, qint32 limit, qint32 offset, QString* sort);
    void variableCategoriesPost(SWGVariableCategory body);
    void variableCategoriesIdGet(qint32 id);
    void variableCategoriesIdPut(qint32 id, SWGVariableCategory body);
    void variableCategoriesIdDelete(qint32 id);
    
private:
    void variableCategoriesGetCallback (HttpRequestWorker * worker);
    void variableCategoriesPostCallback (HttpRequestWorker * worker);
    void variableCategoriesIdGetCallback (HttpRequestWorker * worker);
    void variableCategoriesIdPutCallback (HttpRequestWorker * worker);
    void variableCategoriesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void variableCategoriesGetSignal(SWGInline_response_200_23* summary);
    void variableCategoriesPostSignal(SWGInline_response_200_24* summary);
    void variableCategoriesIdGetSignal(SWGInline_response_200_24* summary);
    void variableCategoriesIdPutSignal(SWGInline_response_200_2* summary);
    void variableCategoriesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif