/*
 * SWGConnectorInfoHistoryItem.h
 * 
 * 
 */

#ifndef SWGConnectorInfoHistoryItem_H_
#define SWGConnectorInfoHistoryItem_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGConnectorInfoHistoryItem: public SWGObject {
public:
    SWGConnectorInfoHistoryItem();
    SWGConnectorInfoHistoryItem(QString* json);
    virtual ~SWGConnectorInfoHistoryItem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGConnectorInfoHistoryItem* fromJson(QString &jsonString);

    qint32 getNumberOfMeasurements();
    void setNumberOfMeasurements(qint32 number_of_measurements);
    bool getSuccess();
    void setSuccess(bool success);
    QString* getMessage();
    void setMessage(QString* message);
    QString* getCreatedAt();
    void setCreatedAt(QString* created_at);
    

private:
    qint32 number_of_measurements;
    bool success;
    QString* message;
    QString* created_at;
    
};

} /* namespace Swagger */

#endif /* SWGConnectorInfoHistoryItem_H_ */
