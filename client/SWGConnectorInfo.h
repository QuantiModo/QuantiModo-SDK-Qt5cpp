/*
 * SWGConnectorInfo.h
 * 
 * 
 */

#ifndef SWGConnectorInfo_H_
#define SWGConnectorInfo_H_

#include <QJsonObject>


#include "SWGConnectorInfoHistoryItem.h"
#include <QString>
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGConnectorInfo: public SWGObject {
public:
    SWGConnectorInfo();
    SWGConnectorInfo(QString* json);
    virtual ~SWGConnectorInfo();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGConnectorInfo* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    bool getConnected();
    void setConnected(bool connected);
    QString* getError();
    void setError(QString* error);
    QList<SWGConnectorInfoHistoryItem*>* getHistory();
    void setHistory(QList<SWGConnectorInfoHistoryItem*>* history);
    

private:
    qint32 id;
    bool connected;
    QString* error;
    QList<SWGConnectorInfoHistoryItem*>* history;
    
};

} /* namespace Swagger */

#endif /* SWGConnectorInfo_H_ */
