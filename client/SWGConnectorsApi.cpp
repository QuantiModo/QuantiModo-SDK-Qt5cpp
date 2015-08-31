#include "SWGConnectorsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGConnectorsApi::SWGConnectorsApi() {}

SWGConnectorsApi::~SWGConnectorsApi() {}

SWGConnectorsApi::SWGConnectorsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGConnectorsApi::v1ConnectorsListGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connectors/list");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::v1ConnectorsListGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::v1ConnectorsListGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGConnector*>* output = new QList<SWGConnector*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGConnector* o = new SWGConnector();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }
    

    

    worker->deleteLater();

    emit v1ConnectorsListGetSignal(output);
    
}
void
SWGConnectorsApi::v1ConnectorsConnectorConnectGet(QString* connector) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connectors/{connector}/connect");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::v1ConnectorsConnectorConnectGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::v1ConnectorsConnectorConnectGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1ConnectorsConnectorConnectGetSignal();
}
void
SWGConnectorsApi::v1ConnectorsConnectorDisconnectGet(QString* connector) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connectors/{connector}/disconnect");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::v1ConnectorsConnectorDisconnectGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::v1ConnectorsConnectorDisconnectGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1ConnectorsConnectorDisconnectGetSignal();
}
void
SWGConnectorsApi::v1ConnectorsConnectorInfoGet(QString* connector) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connectors/{connector}/info");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::v1ConnectorsConnectorInfoGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::v1ConnectorsConnectorInfoGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGConnectorInfo* output = static_cast<SWGConnectorInfo*>(create(json, QString("SWGConnectorInfo")));
    
    
    

    worker->deleteLater();

    emit v1ConnectorsConnectorInfoGetSignal(output);
    
}
void
SWGConnectorsApi::v1ConnectorsConnectorUpdateGet(QString* connector) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connectors/{connector}/update");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::v1ConnectorsConnectorUpdateGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::v1ConnectorsConnectorUpdateGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1ConnectorsConnectorUpdateGetSignal();
}
} /* namespace Swagger */
