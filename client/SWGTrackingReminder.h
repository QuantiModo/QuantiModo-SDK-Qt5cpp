/*
 * SWGTrackingReminder.h
 * 
 * 
 */

#ifndef SWGTrackingReminder_H_
#define SWGTrackingReminder_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGTrackingReminder: public SWGObject {
public:
    SWGTrackingReminder();
    SWGTrackingReminder(QString* json);
    virtual ~SWGTrackingReminder();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGTrackingReminder* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    QString* getClientId();
    void setClientId(QString* client_id);
    qint32 getUserId();
    void setUserId(qint32 user_id);
    qint32 getVariableId();
    void setVariableId(qint32 variable_id);
    float getDefaultValue();
    void setDefaultValue(float default_value);
    QString* getReminderStartTime();
    void setReminderStartTime(QString* reminder_start_time);
    QString* getReminderEndTime();
    void setReminderEndTime(QString* reminder_end_time);
    QString* getReminderSound();
    void setReminderSound(QString* reminder_sound);
    qint32 getReminderFrequency();
    void setReminderFrequency(qint32 reminder_frequency);
    bool getPopUp();
    void setPopUp(bool pop_up);
    bool getSms();
    void setSms(bool sms);
    bool getEmail();
    void setEmail(bool email);
    bool getNotificationBar();
    void setNotificationBar(bool notification_bar);
    QDateTime* getLastReminded();
    void setLastReminded(QDateTime* last_reminded);
    QDateTime* getLastTracked();
    void setLastTracked(QDateTime* last_tracked);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 id;
    QString* client_id;
    qint32 user_id;
    qint32 variable_id;
    float default_value;
    QString* reminder_start_time;
    QString* reminder_end_time;
    QString* reminder_sound;
    qint32 reminder_frequency;
    bool pop_up;
    bool sms;
    bool email;
    bool notification_bar;
    QDateTime* last_reminded;
    QDateTime* last_tracked;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGTrackingReminder_H_ */
