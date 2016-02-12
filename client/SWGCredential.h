/*
 * SWGCredential.h
 * 
 * 
 */

#ifndef SWGCredential_H_
#define SWGCredential_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCredential: public SWGObject {
public:
    SWGCredential();
    SWGCredential(QString* json);
    virtual ~SWGCredential();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCredential* fromJson(QString &jsonString);

    qint32 getUserId();
    void setUserId(qint32 user_id);
    qint32 getConnectorId();
    void setConnectorId(qint32 connector_id);
    QString* getAttrKey();
    void setAttrKey(QString* attr_key);
    QString* getAttrValue();
    void setAttrValue(QString* attr_value);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 user_id;
    qint32 connector_id;
    QString* attr_key;
    QString* attr_value;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGCredential_H_ */
