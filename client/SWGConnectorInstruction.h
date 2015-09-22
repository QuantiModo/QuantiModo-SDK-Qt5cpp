/*
 * SWGConnectorInstruction.h
 * 
 * 
 */

#ifndef SWGConnectorInstruction_H_
#define SWGConnectorInstruction_H_

#include <QJsonObject>


#include <QString>
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGConnectorInstruction: public SWGObject {
public:
    SWGConnectorInstruction();
    SWGConnectorInstruction(QString* json);
    virtual ~SWGConnectorInstruction();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGConnectorInstruction* fromJson(QString &jsonString);

    QString* getUrl();
    void setUrl(QString* url);
    QList<QString*>* getParameters();
    void setParameters(QList<QString*>* parameters);
    bool getUsePopup();
    void setUsePopup(bool usePopup);
    

private:
    QString* url;
    QList<QString*>* parameters;
    bool usePopup;
    
};

} /* namespace Swagger */

#endif /* SWGConnectorInstruction_H_ */
