#ifndef _SWG_SWGTrackingReminderApi_H_
#define _SWG_SWGTrackingReminderApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGInline_response_200_6.h"
#include "SWGTrackingReminder.h"
#include "SWGInline_response_200_23.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGTrackingReminderApi: public QObject {
    Q_OBJECT

public:
    SWGTrackingReminderApi();
    SWGTrackingReminderApi(QString host, QString basePath);
    ~SWGTrackingReminderApi();

    QString host;
    QString basePath;

    void trackingRemindersGet(QString* accessToken, QString* clientId, qint32 userId, qint32 variableId, bool popUp, bool sms, bool email, bool notificationBar, QString* lastReminded, QString* lastTracked, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void trackingRemindersPost(QString* accessToken, SWGTrackingReminder body);
    void trackingRemindersIdGet(qint32 id, QString* accessToken);
    void trackingRemindersIdPut(qint32 id, QString* accessToken, SWGTrackingReminder body);
    void trackingRemindersIdDelete(qint32 id, QString* accessToken);
    
private:
    void trackingRemindersGetCallback (HttpRequestWorker * worker);
    void trackingRemindersPostCallback (HttpRequestWorker * worker);
    void trackingRemindersIdGetCallback (HttpRequestWorker * worker);
    void trackingRemindersIdPutCallback (HttpRequestWorker * worker);
    void trackingRemindersIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void trackingRemindersGetSignal(SWGInline_response_200_6* summary);
    void trackingRemindersPostSignal(SWGInline_response_200_23* summary);
    void trackingRemindersIdGetSignal(SWGInline_response_200_23* summary);
    void trackingRemindersIdPutSignal(SWGInline_response_200_2* summary);
    void trackingRemindersIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif