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
SWGConnectorsApi::v1Connect.jsGet(QString* access token, QString* mashape key) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connect.js");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("access token"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(access token)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("mashape key"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(mashape key)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::v1Connect.jsGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::v1Connect.jsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1Connect.jsGetSignal();
}
void
SWGConnectorsApi::v1ConnectMobileGet(QString* t) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connect/mobile");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("t"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(t)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::v1ConnectMobileGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::v1ConnectMobileGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1ConnectMobileGetSignal();
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
SWGConnectorsApi::v1ConnectorsConnectorConnectInstructionsGet(QString* connector, QString* parameters, QString* url, bool usePopup) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connectors/{connector}/connectInstructions");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("parameters"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(parameters)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("url"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(url)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("usePopup"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(usePopup)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::v1ConnectorsConnectorConnectInstructionsGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::v1ConnectorsConnectorConnectInstructionsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit v1ConnectorsConnectorConnectInstructionsGetSignal();
}
void
SWGConnectorsApi::v1ConnectorsConnectorConnectParameterGet(QString* connector, QString* displayName, QString* key, QString* placeholder, QString* type, bool usePopup, QString* defaultValue) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/v1/connectors/{connector}/connectParameter");

    
    QString connectorPathParam("{"); connectorPathParam.append("connector").append("}");
    fullPath.replace(connectorPathParam, stringValue(connector));
    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("defaultValue"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(defaultValue)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("displayName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(displayName)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("key"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(key)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("placeholder"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(placeholder)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("type"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(type)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("usePopup"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(usePopup)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGConnectorsApi::v1ConnectorsConnectorConnectParameterGetCallback);

    worker->execute(&input);
}

void
SWGConnectorsApi::v1ConnectorsConnectorConnectParameterGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGConnectorInstruction* output = static_cast<SWGConnectorInstruction*>(create(json, QString("SWGConnectorInstruction")));
    
    
    

    worker->deleteLater();

    emit v1ConnectorsConnectorConnectParameterGetSignal(output);
    
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
