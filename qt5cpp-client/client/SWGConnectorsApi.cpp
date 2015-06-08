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
SWGConnectorsApi::connectorsListGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connectors/list");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::connectorsListGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::connectorsListGetCallback(HttpRequestWorker * worker) {
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

    emit connectorsListGetSignal(output);
    
}
void
SWGConnectorsApi::connectorsConnectorConnectGet(QString* connector) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connectors/{connector}/connect");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::connectorsConnectorConnectGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::connectorsConnectorConnectGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit connectorsConnectorConnectGetSignal();
}
void
SWGConnectorsApi::connectorsConnectorConnectInstructionsGet(QString* connector) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connectors/{connector}/connectInstructions");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::connectorsConnectorConnectInstructionsGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::connectorsConnectorConnectInstructionsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit connectorsConnectorConnectInstructionsGetSignal();
}
void
SWGConnectorsApi::connectorsConnectorDisconnectGet(QString* connector) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connectors/{connector}/disconnect");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::connectorsConnectorDisconnectGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::connectorsConnectorDisconnectGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit connectorsConnectorDisconnectGetSignal();
}
void
SWGConnectorsApi::connectorsConnectorInfoGet(QString* connector) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connectors/{connector}/info");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::connectorsConnectorInfoGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::connectorsConnectorInfoGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit connectorsConnectorInfoGetSignal();
}
void
SWGConnectorsApi::connectorsConnectorUpdateGet(QString* connector) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/connectors/{connector}/update");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::connectorsConnectorUpdateGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::connectorsConnectorUpdateGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit connectorsConnectorUpdateGetSignal();
}
} /* namespace Swagger */
