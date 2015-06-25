/*
 * SWGUserTokenRequestInnerUserField.h
 * 
 * 
 */

#ifndef SWGUserTokenRequestInnerUserField_H_
#define SWGUserTokenRequestInnerUserField_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGUserTokenRequestInnerUserField: public SWGObject {
public:
    SWGUserTokenRequestInnerUserField();
    SWGUserTokenRequestInnerUserField(QString* json);
    virtual ~SWGUserTokenRequestInnerUserField();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserTokenRequestInnerUserField* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 _id);
    

private:
    qint32 _id;
    
};

} /* namespace Swagger */

#endif /* SWGUserTokenRequestInnerUserField_H_ */
