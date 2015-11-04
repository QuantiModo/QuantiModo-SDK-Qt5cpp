#include "SWGMeasurementApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGMeasurementApi::SWGMeasurementApi() {}

SWGMeasurementApi::~SWGMeasurementApi() {}

SWGMeasurementApi::SWGMeasurementApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGMeasurementApi::measurementsGet(qint32 userId, QString* clientId, qint32 connectorId, qint32 variableId, qint32 startTime, SWGNumber* value, SWGNumber* originalValue, qint32 duration, QString* note, SWGNumber* latitude, SWGNumber* longitude, QString* location, QString* createdAt, QString* updatedAt, QString* error, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurements");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("clientId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(clientId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("connectorId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(connectorId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("variableId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variableId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("startTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(startTime)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("value"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(value)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("originalValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(originalValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("duration"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(duration)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("note"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(note)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("latitude"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(latitude)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("longitude"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(longitude)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("location"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(location)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("error"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(error)));
    

    
    
    
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
            &SWGMeasurementApi::measurementsGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementApi::measurementsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_11* output = static_cast<SWGInline_response_200_11*>(create(json, QString("SWGInline_response_200_11")));
    
    
    

    worker->deleteLater();

    emit measurementsGetSignal(output);
    
}
void
SWGMeasurementApi::measurementsPost(SWGMeasurementPost body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurements");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementApi::measurementsPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementApi::measurementsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_11* output = static_cast<SWGInline_response_200_11*>(create(json, QString("SWGInline_response_200_11")));
    
    
    

    worker->deleteLater();

    emit measurementsPostSignal(output);
    
}
void
SWGMeasurementApi::measurementsCsvGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurements/csv");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementApi::measurementsCsvGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementApi::measurementsCsvGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGHttpRequestInputFileElement* output = static_cast<SWGHttpRequestInputFileElement*>(create(json, QString("SWGHttpRequestInputFileElement")));
    
    
    

    worker->deleteLater();

    emit measurementsCsvGetSignal(output);
    
}
void
SWGMeasurementApi::measurementsRequestCsvPost() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurements/request_csv");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementApi::measurementsRequestCsvPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementApi::measurementsRequestCsvPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    qint32 output;  // TODO add primitive output support
    
    
    
    
    
    

    worker->deleteLater();

    emit measurementsRequestCsvPostSignal(output);
    
}
void
SWGMeasurementApi::measurementsIdGet(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurements/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementApi::measurementsIdGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementApi::measurementsIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_12* output = static_cast<SWGInline_response_200_12*>(create(json, QString("SWGInline_response_200_12")));
    
    
    

    worker->deleteLater();

    emit measurementsIdGetSignal(output);
    
}
void
SWGMeasurementApi::measurementsIdPut(qint32 id, SWGMeasurement body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurements/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementApi::measurementsIdPutCallback);

    worker->execute(&input);
}

void
SWGMeasurementApi::measurementsIdPutCallback(HttpRequestWorker * worker) {
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

    emit measurementsIdPutSignal(output);
    
}
void
SWGMeasurementApi::measurementsIdDelete(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurements/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementApi::measurementsIdDeleteCallback);

    worker->execute(&input);
}

void
SWGMeasurementApi::measurementsIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit measurementsIdDeleteSignal(output);
    
}
} /* namespace Swagger */
