#ifndef _SWG_SWGCorrelationsApi_H_
#define _SWG_SWGCorrelationsApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGCorrelation.h"
#include "SWGJsonErrorResponse.h"
#include "SWGPostCorrelation.h"

#include <QObject>

namespace Swagger {

class SWGCorrelationsApi: public QObject {
    Q_OBJECT

public:
    SWGCorrelationsApi();
    SWGCorrelationsApi(QString host, QString basePath);
    ~SWGCorrelationsApi();

    QString host;
    QString basePath;

    void correlationsGet(QString* effect, QString* cause);
    void publicCorrelationsSearchSearchGet(QString* search, QString* effectOrCause);
    void v1CorrelationsPost(SWGPostCorrelation body);
    void v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGet(qint32 organizationId, qint32 userId, QString* variableName, QString* organizationToken, QString* includePublic);
    void v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGet(qint32 organizationId, qint32 userId, QString* variableName, QString* organizationToken, QString* includePublic);
    void v1VariablesVariableNameCausesGet(QString* variableName);
    void v1VariablesVariableNameEffectsGet(QString* variableName);
    void v1VariablesVariableNamePublicCausesGet(QString* variableName);
    void v1VariablesVariableNamePublicEffectsGet(QString* variableName);
    
private:
    void correlationsGetCallback (HttpRequestWorker * worker);
    void publicCorrelationsSearchSearchGetCallback (HttpRequestWorker * worker);
    void v1CorrelationsPostCallback (HttpRequestWorker * worker);
    void v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetCallback (HttpRequestWorker * worker);
    void v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetCallback (HttpRequestWorker * worker);
    void v1VariablesVariableNameCausesGetCallback (HttpRequestWorker * worker);
    void v1VariablesVariableNameEffectsGetCallback (HttpRequestWorker * worker);
    void v1VariablesVariableNamePublicCausesGetCallback (HttpRequestWorker * worker);
    void v1VariablesVariableNamePublicEffectsGetCallback (HttpRequestWorker * worker);
    
signals:
    void correlationsGetSignal(QList<SWGCorrelation*>* summary);
    void publicCorrelationsSearchSearchGetSignal(QList<SWGCorrelation*>* summary);
    void v1CorrelationsPostSignal();
    void v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetSignal(QList<SWGCorrelation*>* summary);
    void v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetSignal(QList<SWGCorrelation*>* summary);
    void v1VariablesVariableNameCausesGetSignal(QList<SWGCorrelation*>* summary);
    void v1VariablesVariableNameEffectsGetSignal(QList<SWGCorrelation*>* summary);
    void v1VariablesVariableNamePublicCausesGetSignal(QList<SWGCorrelation*>* summary);
    void v1VariablesVariableNamePublicEffectsGetSignal(QList<SWGCorrelation*>* summary);
    
};
}
#endif