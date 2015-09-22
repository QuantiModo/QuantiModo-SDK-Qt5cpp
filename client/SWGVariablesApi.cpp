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
SWGVariablesApi::v1PublicVariablesGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/public/variables");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::v1PublicVariablesGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::v1PublicVariablesGetCallback(HttpRequestWorker * worker) {
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

    emit v1PublicVariablesGetSignal(output);
    
}
void
SWGVariablesApi::v1PublicVariablesSearchSearchGet(QString* search, QString* effectOrCause, qint32 limit, qint32 offset, qint32 sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/public/variables/search/{search}");

    
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
            &SWGVariablesApi::v1PublicVariablesSearchSearchGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::v1PublicVariablesSearchSearchGetCallback(HttpRequestWorker * worker) {
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

    emit v1PublicVariablesSearchSearchGetSignal(output);
    
}
void
SWGVariablesApi::v1UserVariablesPost(SWGUserVariables sharingData) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/userVariables");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = sharingData.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::v1UserVariablesPostCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::v1UserVariablesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1UserVariablesPostSignal();
}
void
SWGVariablesApi::v1VariableCategoriesGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/variableCategories");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::v1VariableCategoriesGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::v1VariableCategoriesGetCallback(HttpRequestWorker * worker) {
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

    emit v1VariableCategoriesGetSignal(output);
    
}
void
SWGVariablesApi::v1VariablesGet(qint32 userId, QString* category, qint32 limit, qint32 offset, qint32 sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/variables");

    

    
    
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
            &SWGVariablesApi::v1VariablesGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::v1VariablesGetCallback(HttpRequestWorker * worker) {
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

    emit v1VariablesGetSignal(output);
    
}
void
SWGVariablesApi::v1VariablesPost(SWGVariablesNew variableName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/variables");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = variableName.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::v1VariablesPostCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::v1VariablesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1VariablesPostSignal();
}
void
SWGVariablesApi::v1VariablesSearchSearchGet(QString* search, QString* categoryName, QString* source, qint32 limit, qint32 offset) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/variables/search/{search}");

    
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
            &SWGVariablesApi::v1VariablesSearchSearchGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::v1VariablesSearchSearchGetCallback(HttpRequestWorker * worker) {
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

    emit v1VariablesSearchSearchGetSignal(output);
    
}
void
SWGVariablesApi::v1VariablesVariableNameGet(QString* variableName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/variables/{variableName}");

    
    QString variableNamePathParam("{"); variableNamePathParam.append("variableName").append("}");
    fullPath.replace(variableNamePathParam, stringValue(variableName));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGVariablesApi::v1VariablesVariableNameGetCallback);

    worker->execute(&input);
}

void
SWGVariablesApi::v1VariablesVariableNameGetCallback(HttpRequestWorker * worker) {
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

    emit v1VariablesVariableNameGetSignal(output);
    
}
} /* namespace Swagger */
