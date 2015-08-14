#ifndef _SWG_SWGVariablesApi_H_
#define _SWG_SWGVariablesApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGVariable.h"
#include "SWGVariableCategory.h"
#include "SWGVariableUserSettings.h"
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

    void correlationsPost(QString* cause, QString* effect, QString* correlationcoefficient, QString* vote);
    void publicVariablesGet();
    void publicVariablesSearchSearchGet(QString* search, QString* effectOrCause, qint32 limit, qint32 offset, qint32 sort);
    void variableCategoriesGet();
    void variableUserSettingsPost(SWGVariableUserSettings sharingData);
    void variablesGet(qint32 userId, QString* category, qint32 limit, qint32 offset, qint32 sort);
    void variablesPost(SWGVariablesNew variableName);
    void variablesSearchSearchGet(QString* search, QString* categoryName, QString* source, qint32 limit, qint32 offset);
    void variablesVariableNameGet(QString* variableName);
    
private:
    void correlationsPostCallback (HttpRequestWorker * worker);
    void publicVariablesGetCallback (HttpRequestWorker * worker);
    void publicVariablesSearchSearchGetCallback (HttpRequestWorker * worker);
    void variableCategoriesGetCallback (HttpRequestWorker * worker);
    void variableUserSettingsPostCallback (HttpRequestWorker * worker);
    void variablesGetCallback (HttpRequestWorker * worker);
    void variablesPostCallback (HttpRequestWorker * worker);
    void variablesSearchSearchGetCallback (HttpRequestWorker * worker);
    void variablesVariableNameGetCallback (HttpRequestWorker * worker);
    
signals:
    void correlationsPostSignal();
    void publicVariablesGetSignal(SWGVariable* summary);
    void publicVariablesSearchSearchGetSignal(SWGVariable* summary);
    void variableCategoriesGetSignal(QList<SWGVariableCategory*>* summary);
    void variableUserSettingsPostSignal();
    void variablesGetSignal(SWGVariable* summary);
    void variablesPostSignal();
    void variablesSearchSearchGetSignal(QList<SWGVariable*>* summary);
    void variablesVariableNameGetSignal(SWGVariable* summary);
    
};
}
#endif