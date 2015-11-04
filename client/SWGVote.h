/*
 * SWGVote.h
 * 
 * 
 */

#ifndef SWGVote_H_
#define SWGVote_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVote: public SWGObject {
public:
    SWGVote();
    SWGVote(QString* json);
    virtual ~SWGVote();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVote* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    QString* getClientId();
    void setClientId(QString* client_id);
    qint32 getUserId();
    void setUserId(qint32 user_id);
    qint32 getCauseId();
    void setCauseId(qint32 cause_id);
    qint32 getEffectId();
    void setEffectId(qint32 effect_id);
    qint32 getValue();
    void setValue(qint32 value);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 id;
    QString* client_id;
    qint32 user_id;
    qint32 cause_id;
    qint32 effect_id;
    qint32 value;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGVote_H_ */
