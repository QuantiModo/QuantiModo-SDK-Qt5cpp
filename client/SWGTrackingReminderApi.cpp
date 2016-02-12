#include "SWGTrackingReminderApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGTrackingReminderApi::SWGTrackingReminderApi() {}

SWGTrackingReminderApi::~SWGTrackingReminderApi() {}

SWGTrackingReminderApi::SWGTrackingReminderApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGTrackingReminderApi::trackingRemindersGet(QString* accessToken, QString* clientId, qint32 userId, qint32 variableId, bool popUp, bool sms, bool email, bool notificationBar, QString* lastReminded, QString* lastTracked, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/trackingReminders");

    

    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("clientId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(clientId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("userId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(userId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("variableId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(variableId)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("popUp"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(popUp)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sms"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sms)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("email"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(email)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("notificationBar"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(notificationBar)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastReminded"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastReminded)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("lastTracked"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(lastTracked)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("createdAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(createdAt)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("updatedAt"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(updatedAt)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("offset"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(offset)));
    

    
    
    
    if (fullPath.indexOf("?") > 0) 
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
            &SWGTrackingReminderApi::trackingRemindersGetCallback);

    worker->execute(&input);
}

void
SWGTrackingReminderApi::trackingRemindersGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_6* output = static_cast<SWGInline_response_200_6*>(create(json, QString("SWGInline_response_200_6")));
    
    
    

    worker->deleteLater();

    emit trackingRemindersGetSignal(output);
    
}
void
SWGTrackingReminderApi::trackingRemindersPost(QString* accessToken, SWGTrackingReminder body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/trackingReminders");

    

    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGTrackingReminderApi::trackingRemindersPostCallback);

    worker->execute(&input);
}

void
SWGTrackingReminderApi::trackingRemindersPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_23* output = static_cast<SWGInline_response_200_23*>(create(json, QString("SWGInline_response_200_23")));
    
    
    

    worker->deleteLater();

    emit trackingRemindersPostSignal(output);
    
}
void
SWGTrackingReminderApi::trackingRemindersIdGet(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/trackingReminders/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGTrackingReminderApi::trackingRemindersIdGetCallback);

    worker->execute(&input);
}

void
SWGTrackingReminderApi::trackingRemindersIdGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGInline_response_200_23* output = static_cast<SWGInline_response_200_23*>(create(json, QString("SWGInline_response_200_23")));
    
    
    

    worker->deleteLater();

    emit trackingRemindersIdGetSignal(output);
    
}
void
SWGTrackingReminderApi::trackingRemindersIdPut(qint32 id, QString* accessToken, SWGTrackingReminder body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/trackingReminders/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    

    
    
    
    QString output = body.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGTrackingReminderApi::trackingRemindersIdPutCallback);

    worker->execute(&input);
}

void
SWGTrackingReminderApi::trackingRemindersIdPutCallback(HttpRequestWorker * worker) {
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

    emit trackingRemindersIdPutSignal(output);
    
}
void
SWGTrackingReminderApi::trackingRemindersIdDelete(qint32 id, QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/trackingReminders/{id}");

    
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));
    

    
    
    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGTrackingReminderApi::trackingRemindersIdDeleteCallback);

    worker->execute(&input);
}

void
SWGTrackingReminderApi::trackingRemindersIdDeleteCallback(HttpRequestWorker * worker) {
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

    emit trackingRemindersIdDeleteSignal(output);
    
}
} /* namespace Swagger */
