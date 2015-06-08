#include "SWGCorrelationsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCorrelationsApi::SWGCorrelationsApi() {}

SWGCorrelationsApi::~SWGCorrelationsApi() {}

SWGCorrelationsApi::SWGCorrelationsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCorrelationsApi::correlationsGet(QString* effect, QString* cause) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/correlations");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("effect"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(effect)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cause"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cause)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCorrelationsApi::correlationsGetCallback);

    worker->execute(&input);
}

void
SWGCorrelationsApi::correlationsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCorrelation*>* output = new QList<SWGCorrelation*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCorrelation* o = new SWGCorrelation();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit correlationsGetSignal(output);
    
}
void
SWGCorrelationsApi::publicCorrelationsSearchSearchGet(QString* search, QString* effectOrCause) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/public/correlations/search/{search}");

    
    QString searchPathParam("{"); searchPathParam.append("search").append("}");
    fullPath.replace(searchPathParam, stringValue(search));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("effectOrCause"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(effectOrCause)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCorrelationsApi::publicCorrelationsSearchSearchGetCallback);

    worker->execute(&input);
}

void
SWGCorrelationsApi::publicCorrelationsSearchSearchGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCorrelation*>* output = new QList<SWGCorrelation*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCorrelation* o = new SWGCorrelation();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit publicCorrelationsSearchSearchGetSignal(output);
    
}
void
SWGCorrelationsApi::v1CorrelationsPost(SWGPostCorrelation body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/correlations");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCorrelationsApi::v1CorrelationsPostCallback);

    worker->execute(&input);
}

void
SWGCorrelationsApi::v1CorrelationsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1CorrelationsPostSignal();
}
void
SWGCorrelationsApi::v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGet(qint32 organizationId, qint32 userId, QString* variableName, QString* organizationToken, QString* includePublic) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/organizations/{organizationId}/users/{userId}/variables/{variableName}/causes");

    
    QString organizationIdPathParam("{"); organizationIdPathParam.append("organizationId").append("}");
    fullPath.replace(organizationIdPathParam, stringValue(organizationId));
    
    QString userIdPathParam("{"); userIdPathParam.append("userId").append("}");
    fullPath.replace(userIdPathParam, stringValue(userId));
    
    QString variableNamePathParam("{"); variableNamePathParam.append("variableName").append("}");
    fullPath.replace(variableNamePathParam, stringValue(variableName));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("organizationToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(organizationToken)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("includePublic"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(includePublic)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCorrelationsApi::v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetCallback);

    worker->execute(&input);
}

void
SWGCorrelationsApi::v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCorrelation*>* output = new QList<SWGCorrelation*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCorrelation* o = new SWGCorrelation();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetSignal(output);
    
}
void
SWGCorrelationsApi::v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGet(qint32 organizationId, qint32 userId, QString* variableName, QString* organizationToken, QString* includePublic) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/organizations/{organizationId}/users/{userId}/variables/{variableName}/effects");

    
    QString organizationIdPathParam("{"); organizationIdPathParam.append("organizationId").append("}");
    fullPath.replace(organizationIdPathParam, stringValue(organizationId));
    
    QString userIdPathParam("{"); userIdPathParam.append("userId").append("}");
    fullPath.replace(userIdPathParam, stringValue(userId));
    
    QString variableNamePathParam("{"); variableNamePathParam.append("variableName").append("}");
    fullPath.replace(variableNamePathParam, stringValue(variableName));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("organizationToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(organizationToken)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("includePublic"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(includePublic)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCorrelationsApi::v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetCallback);

    worker->execute(&input);
}

void
SWGCorrelationsApi::v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCorrelation*>* output = new QList<SWGCorrelation*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCorrelation* o = new SWGCorrelation();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetSignal(output);
    
}
void
SWGCorrelationsApi::v1VariablesVariableNameCausesGet(QString* variableName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/variables/{variableName}/causes");

    
    QString variableNamePathParam("{"); variableNamePathParam.append("variableName").append("}");
    fullPath.replace(variableNamePathParam, stringValue(variableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCorrelationsApi::v1VariablesVariableNameCausesGetCallback);

    worker->execute(&input);
}

void
SWGCorrelationsApi::v1VariablesVariableNameCausesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCorrelation*>* output = new QList<SWGCorrelation*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCorrelation* o = new SWGCorrelation();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit v1VariablesVariableNameCausesGetSignal(output);
    
}
void
SWGCorrelationsApi::v1VariablesVariableNameEffectsGet(QString* variableName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/variables/{variableName}/effects");

    
    QString variableNamePathParam("{"); variableNamePathParam.append("variableName").append("}");
    fullPath.replace(variableNamePathParam, stringValue(variableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCorrelationsApi::v1VariablesVariableNameEffectsGetCallback);

    worker->execute(&input);
}

void
SWGCorrelationsApi::v1VariablesVariableNameEffectsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCorrelation*>* output = new QList<SWGCorrelation*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCorrelation* o = new SWGCorrelation();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit v1VariablesVariableNameEffectsGetSignal(output);
    
}
void
SWGCorrelationsApi::v1VariablesVariableNamePublicCausesGet(QString* variableName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/variables/{variableName}/public/causes");

    
    QString variableNamePathParam("{"); variableNamePathParam.append("variableName").append("}");
    fullPath.replace(variableNamePathParam, stringValue(variableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCorrelationsApi::v1VariablesVariableNamePublicCausesGetCallback);

    worker->execute(&input);
}

void
SWGCorrelationsApi::v1VariablesVariableNamePublicCausesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCorrelation*>* output = new QList<SWGCorrelation*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCorrelation* o = new SWGCorrelation();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit v1VariablesVariableNamePublicCausesGetSignal(output);
    
}
void
SWGCorrelationsApi::v1VariablesVariableNamePublicEffectsGet(QString* variableName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/variables/{variableName}/public/effects");

    
    QString variableNamePathParam("{"); variableNamePathParam.append("variableName").append("}");
    fullPath.replace(variableNamePathParam, stringValue(variableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCorrelationsApi::v1VariablesVariableNamePublicEffectsGetCallback);

    worker->execute(&input);
}

void
SWGCorrelationsApi::v1VariablesVariableNamePublicEffectsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGCorrelation*>* output = new QList<SWGCorrelation*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGCorrelation* o = new SWGCorrelation();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit v1VariablesVariableNamePublicEffectsGetSignal(output);
    
}
} /* namespace Swagger */
