/*
 * SWGSource.h
 * 
 * 
 */

#ifndef SWGSource_H_
#define SWGSource_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGSource: public SWGObject {
public:
    SWGSource();
    SWGSource(QString* json);
    virtual ~SWGSource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGSource* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    QString* getClientId();
    void setClientId(QString* client_id);
    QString* getName();
    void setName(QString* name);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 id;
    QString* client_id;
    QString* name;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGSource_H_ */
