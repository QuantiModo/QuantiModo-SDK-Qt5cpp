#include "SWGMeasurementsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGMeasurementsApi::SWGMeasurementsApi() {}

SWGMeasurementsApi::~SWGMeasurementsApi() {}

SWGMeasurementsApi::SWGMeasurementsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGMeasurementsApi::measurementSourcesGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurementSources");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::measurementSourcesGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::measurementSourcesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGMeasurementSource* output = static_cast<SWGMeasurementSource*>(create(json, QString("SWGMeasurementSource")));
    
    
    

    worker->deleteLater();

    emit measurementSourcesGetSignal(output);
    
}
void
SWGMeasurementsApi::measurementSourcesPost(SWGMeasurementSource name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurementSources");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = name.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::measurementSourcesPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::measurementSourcesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit measurementSourcesPostSignal();
}
void
SWGMeasurementsApi::measurementsGet(QString* variableName, QString* unit, QString* startTime, QString* endTime, qint32 groupingWidth, QString* groupingTimezone) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurements");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("variableName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variableName)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("unit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(unit)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("endTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(endTime)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("groupingWidth"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(groupingWidth)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("groupingTimezone"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(groupingTimezone)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::measurementsGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::measurementsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGMeasurement* output = static_cast<SWGMeasurement*>(create(json, QString("SWGMeasurement")));
    
    
    

    worker->deleteLater();

    emit measurementsGetSignal(output);
    
}
void
SWGMeasurementsApi::measurementsV2Post(SWGMeasurementSet measurements) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurements/v2");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = measurements.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::measurementsV2PostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::measurementsV2PostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit measurementsV2PostSignal();
}
void
SWGMeasurementsApi::measurementsRangeGet(QString* sources, qint32 user) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/measurementsRange");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sources"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sources)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("user"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(user)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::measurementsRangeGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::measurementsRangeGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGMeasurementRange* output = static_cast<SWGMeasurementRange*>(create(json, QString("SWGMeasurementRange")));
    
    
    

    worker->deleteLater();

    emit measurementsRangeGetSignal(output);
    
}
} /* namespace Swagger */
