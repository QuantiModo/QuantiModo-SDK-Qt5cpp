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
SWGMeasurementsApi::v1MeasurementSourcesGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurementSources");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementSourcesGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementSourcesGetCallback(HttpRequestWorker * worker) {
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

    emit v1MeasurementSourcesGetSignal(output);
    
}
void
SWGMeasurementsApi::v1MeasurementSourcesPost(SWGMeasurementSource name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurementSources");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = name.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementSourcesPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementSourcesPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1MeasurementSourcesPostSignal();
}
void
SWGMeasurementsApi::v1MeasurementsGet(QString* variableName, QString* unit, QString* startTime, QString* endTime, qint32 groupingWidth, QString* groupingTimezone, qint32 limit, qint32 offset, qint32 sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurements");

    

    
    
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
            &SWGMeasurementsApi::v1MeasurementsGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementsGetCallback(HttpRequestWorker * worker) {
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

    emit v1MeasurementsGetSignal(output);
    
}
void
SWGMeasurementsApi::v1MeasurementsPost(SWGMeasurementSet measurements) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurements");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = measurements.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMeasurementsApi::v1MeasurementsPostCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementsPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1MeasurementsPostSignal();
}
void
SWGMeasurementsApi::v1MeasurementsDailyGet(QString* variableName, QString* abbreviatedUnitName, QString* startTime, QString* endTime, qint32 groupingWidth, QString* groupingTimezone, qint32 limit, qint32 offset, qint32 sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurements/daily");

    

    
    
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
    fullPath.append(QUrl::toPercentEncoding("abbreviatedUnitName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(abbreviatedUnitName)));
    

    
    
    
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
            &SWGMeasurementsApi::v1MeasurementsDailyGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementsDailyGetCallback(HttpRequestWorker * worker) {
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

    emit v1MeasurementsDailyGetSignal(output);
    
}
void
SWGMeasurementsApi::v1MeasurementsRangeGet(QString* sources, qint32 user) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/measurementsRange");

    

    
    
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
            &SWGMeasurementsApi::v1MeasurementsRangeGetCallback);

    worker->execute(&input);
}

void
SWGMeasurementsApi::v1MeasurementsRangeGetCallback(HttpRequestWorker * worker) {
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

    emit v1MeasurementsRangeGetSignal(output);
    
}
} /* namespace Swagger */
