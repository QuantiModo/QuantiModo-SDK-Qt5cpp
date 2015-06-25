/*
 * SWGConnector.h
 * 
 * 
 */

#ifndef SWGConnector_H_
#define SWGConnector_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGConnector: public SWGObject {
public:
    SWGConnector();
    SWGConnector(QString* json);
    virtual ~SWGConnector();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGConnector* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    QString* getName();
    void setName(QString* name);
    QString* getDisplayName();
    void setDisplayName(QString* displayName);
    QString* getImage();
    void setImage(QString* image);
    QString* getGetItUrl();
    void setGetItUrl(QString* getItUrl);
    QString* getConnected();
    void setConnected(QString* connected);
    QString* getConnectInstructions();
    void setConnectInstructions(QString* connectInstructions);
    qint32 getLastUpdate();
    void setLastUpdate(qint32 lastUpdate);
    qint32 getLatestData();
    void setLatestData(qint32 latestData);
    bool getNoDataYet();
    void setNoDataYet(bool noDataYet);
    

private:
    qint32 id;
    QString* name;
    QString* displayName;
    QString* image;
    QString* getItUrl;
    QString* connected;
    QString* connectInstructions;
    qint32 lastUpdate;
    qint32 latestData;
    bool noDataYet;
    
};

} /* namespace Swagger */

#endif /* SWGConnector_H_ */
