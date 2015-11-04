#include "SWGUnitCategoryApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUnitCategoryApi::SWGUnitCategoryApi() {}

SWGUnitCategoryApi::~SWGUnitCategoryApi() {}

SWGUnitCategoryApi::SWGUnitCategoryApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUnitCategoryApi::unitCategoriesGet(QString* name, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/unitCategories");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(name)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("createdAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(createdAt)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("updatedAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(updatedAt)));
    

    
    
    
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
            &SWGUnitCategoryApi::unitCategoriesGetCallback);

    worker->execute(&input);
}

void
SWGUnitCategoryApi::unitCategoriesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_15* output = static_cast<SWGInline_response_200_15*>(create(json, QString("SWGInline_response_200_15")));
    
    
    

    worker->deleteLater();

    emit unitCategoriesGetSignal(output);
    
}
void
SWGUnitCategoryApi::unitCategoriesPost(SWGUnitCategory body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/unitCategories");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUnitCategoryApi::unitCategoriesPostCallback);

    worker->execute(&input);
}

void
SWGUnitCategoryApi::unitCategoriesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_16* output = static_cast<SWGInline_response_200_16*>(create(json, QString("SWGInline_response_200_16")));
    
    
    

    worker->deleteLater();

    emit unitCategoriesPostSignal(output);
    
}
void
SWGUnitCategoryApi::unitCategoriesIdGet(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/unitCategories/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUnitCategoryApi::unitCategoriesIdGetCallback);

    worker->execute(&input);
}

void
SWGUnitCategoryApi::unitCategoriesIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_16* output = static_cast<SWGInline_response_200_16*>(create(json, QString("SWGInline_response_200_16")));
    
    
    

    worker->deleteLater();

    emit unitCategoriesIdGetSignal(output);
    
}
void
SWGUnitCategoryApi::unitCategoriesIdPut(qint32 id, SWGUnitCategory body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/unitCategories/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUnitCategoryApi::unitCategoriesIdPutCallback);

    worker->execute(&input);
}

void
SWGUnitCategoryApi::unitCategoriesIdPutCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_2* output = static_cast<SWGInline_response_200_2*>(create(json, QString("SWGInline_response_200_2")));
    
    
    

    worker->deleteLater();

    emit unitCategoriesIdPutSignal(output);
    
}
void
SWGUnitCategoryApi::unitCategoriesIdDelete(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/unitCategories/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUnitCategoryApi::unitCategoriesIdDeleteCallback);

    worker->execute(&input);
}

void
SWGUnitCategoryApi::unitCategoriesIdDeleteCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_2* output = static_cast<SWGInline_response_200_2*>(create(json, QString("SWGInline_response_200_2")));
    
    
    

    worker->deleteLater();

    emit unitCategoriesIdDeleteSignal(output);
    
}
} /* namespace Swagger */
