#include "SWGUnitsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUnitsApi::SWGUnitsApi() {}

SWGUnitsApi::~SWGUnitsApi() {}

SWGUnitsApi::SWGUnitsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUnitsApi::v1UnitCategoriesGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/unitCategories");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUnitsApi::v1UnitCategoriesGetCallback);

    worker->execute(&input);
}

void
SWGUnitsApi::v1UnitCategoriesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGUnitCategory* output = static_cast<SWGUnitCategory*>(create(json, QString("SWGUnitCategory")));
    
    
    

    worker->deleteLater();

    emit v1UnitCategoriesGetSignal(output);
    
}
void
SWGUnitsApi::v1UnitsGet(QString* unitName, QString* abbreviatedUnitName, QString* categoryName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/units");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("unitName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(unitName)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("categoryName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(categoryName)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUnitsApi::v1UnitsGetCallback);

    worker->execute(&input);
}

void
SWGUnitsApi::v1UnitsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGUnit*>* output = new QList<SWGUnit*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGUnit* o = new SWGUnit();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit v1UnitsGetSignal(output);
    
}
void
SWGUnitsApi::v1UnitsVariableGet(QString* unitName, QString* abbreviatedUnitName, QString* categoryName, QString* variable) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/unitsVariable");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("unitName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(unitName)));
    

    
    
    
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
    fullPath.append(QUrl::toPercentEncoding("categoryName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(categoryName)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("variable"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variable)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUnitsApi::v1UnitsVariableGetCallback);

    worker->execute(&input);
}

void
SWGUnitsApi::v1UnitsVariableGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGUnit*>* output = new QList<SWGUnit*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGUnit* o = new SWGUnit();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit v1UnitsVariableGetSignal(output);
    
}
} /* namespace Swagger */
