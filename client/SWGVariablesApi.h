#ifndef _SWG_SWGVariablesApi_H_
#define _SWG_SWGVariablesApi_H_

#include "SWGHttpRequest.h"

#include "SWGVariable.h"
#include <QString>
#include "SWGUserVariables.h"
#include "SWGVariableCategory.h"
#include "SWGVariablesNew.h"

#include <QObject>

namespace Swagger {

class SWGVariablesApi: public QObject {
    Q_OBJECT

public:
    SWGVariablesApi();
    SWGVariablesApi(QString host, QString basePath);
    ~SWGVariablesApi();

    QString host;
    QString basePath;

    void v1PublicVariablesGet();
    void v1PublicVariablesSearchSearchGet(QString* search, QString* effectOrCause, qint32 limit, qint32 offset, qint32 sort);
    void v1UserVariablesPost(SWGUserVariables sharingData);
    void v1VariableCategoriesGet();
    void v1VariablesGet(qint32 userId, QString* category, qint32 limit, qint32 offset, qint32 sort);
    void v1VariablesPost(SWGVariablesNew variableName);
    void v1VariablesSearchSearchGet(QString* search, QString* categoryName, QString* source, qint32 limit, qint32 offset);
    void v1VariablesVariableNameGet(QString* variableName);
    
private:
    void v1PublicVariablesGetCallback (HttpRequestWorker * worker);
    void v1PublicVariablesSearchSearchGetCallback (HttpRequestWorker * worker);
    void v1UserVariablesPostCallback (HttpRequestWorker * worker);
    void v1VariableCategoriesGetCallback (HttpRequestWorker * worker);
    void v1VariablesGetCallback (HttpRequestWorker * worker);
    void v1VariablesPostCallback (HttpRequestWorker * worker);
    void v1VariablesSearchSearchGetCallback (HttpRequestWorker * worker);
    void v1VariablesVariableNameGetCallback (HttpRequestWorker * worker);
    
signals:
    void v1PublicVariablesGetSignal(SWGVariable* summary);
    void v1PublicVariablesSearchSearchGetSignal(SWGVariable* summary);
    void v1UserVariablesPostSignal();
    void v1VariableCategoriesGetSignal(QList<SWGVariableCategory*>* summary);
    void v1VariablesGetSignal(SWGVariable* summary);
    void v1VariablesPostSignal();
    void v1VariablesSearchSearchGetSignal(QList<SWGVariable*>* summary);
    void v1VariablesVariableNameGetSignal(SWGVariable* summary);
    
};
}
#endif