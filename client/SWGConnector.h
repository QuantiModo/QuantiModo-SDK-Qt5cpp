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
    void setDisplayName(QString* display_name);
    QString* getImage();
    void setImage(QString* image);
    QString* getGetItUrl();
    void setGetItUrl(QString* get_it_url);
    QString* getShortDescription();
    void setShortDescription(QString* short_description);
    QString* getLongDescription();
    void setLongDescription(QString* long_description);
    bool getEnabled();
    void setEnabled(bool enabled);
    bool getOauth();
    void setOauth(bool oauth);
    

private:
    qint32 id;
    QString* name;
    QString* display_name;
    QString* image;
    QString* get_it_url;
    QString* short_description;
    QString* long_description;
    bool enabled;
    bool oauth;
    
};

} /* namespace Swagger */

#endif /* SWGConnector_H_ */
