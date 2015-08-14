#include "SWGVariablesApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGVariablesApi::SWGVariablesApi() {}

SWGVariablesApi::~SWGVariablesApi() {}

SWGVariablesApi::SWGVariablesApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGVariablesApi::correlationsPost(QString* cause, QString* effect, QString* correlationcoefficient, QString* vote) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/correlations");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cause"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cause)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("correlationcoefficient"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(correlationcoefficient)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("vote"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(vote)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::correlationsPostCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::correlationsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit correlationsPostSignal();
}
void
SWGVariablesApi::publicVariablesGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/public/variables");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::publicVariablesGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::publicVariablesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGVariable* output = static_cast<SWGVariable*>(create(json, QString("SWGVariable")));
    
    
    

    worker->deleteLater();

    emit publicVariablesGetSignal(output);
    
}
void
SWGVariablesApi::publicVariablesSearchSearchGet(QString* search, QString* effectOrCause, qint32 limit, qint32 offset, qint32 sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/public/variables/search/{search}");

    
    QString searchPathParam("{"); searchPathParam.append("search").append("}");
    fullPath.replace(searchPathParam, stringValue(search));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("effectOrCause"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(effectOrCause)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("offset"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(offset)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sort"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sort)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::publicVariablesSearchSearchGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::publicVariablesSearchSearchGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGVariable* output = static_cast<SWGVariable*>(create(json, QString("SWGVariable")));
    
    
    

    worker->deleteLater();

    emit publicVariablesSearchSearchGetSignal(output);
    
}
void
SWGVariablesApi::variableCategoriesGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableCategories");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::variableCategoriesGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::variableCategoriesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGVariableCategory*>* output = new QList<SWGVariableCategory*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGVariableCategory* o = new SWGVariableCategory();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit variableCategoriesGetSignal(output);
    
}
void
SWGVariablesApi::variableUserSettingsPost(SWGVariableUserSettings sharingData) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variableUserSettings");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = sharingData.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::variableUserSettingsPostCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::variableUserSettingsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit variableUserSettingsPostSignal();
}
void
SWGVariablesApi::variablesGet(qint32 userId, QString* category, qint32 limit, qint32 offset, qint32 sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variables");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("userId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(userId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("category"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(category)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("offset"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(offset)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sort"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sort)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::variablesGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::variablesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGVariable* output = static_cast<SWGVariable*>(create(json, QString("SWGVariable")));
    
    
    

    worker->deleteLater();

    emit variablesGetSignal(output);
    
}
void
SWGVariablesApi::variablesPost(SWGVariablesNew variableName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variables");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = variableName.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::variablesPostCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::variablesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit variablesPostSignal();
}
void
SWGVariablesApi::variablesSearchSearchGet(QString* search, QString* categoryName, QString* source, qint32 limit, qint32 offset) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variables/search/{search}");

    
    QString searchPathParam("{"); searchPathParam.append("search").append("}");
    fullPath.replace(searchPathParam, stringValue(search));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("categoryName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(categoryName)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("source"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(source)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("offset"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(offset)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::variablesSearchSearchGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::variablesSearchSearchGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGVariable*>* output = new QList<SWGVariable*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGVariable* o = new SWGVariable();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit variablesSearchSearchGetSignal(output);
    
}
void
SWGVariablesApi::variablesVariableNameGet(QString* variableName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/variables/{variableName}");

    
    QString variableNamePathParam("{"); variableNamePathParam.append("variableName").append("}");
    fullPath.replace(variableNamePathParam, stringValue(variableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::variablesVariableNameGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::variablesVariableNameGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGVariable* output = static_cast<SWGVariable*>(create(json, QString("SWGVariable")));
    
    
    

    worker->deleteLater();

    emit variablesVariableNameGetSignal(output);
    
}
} /* namespace Swagger */
