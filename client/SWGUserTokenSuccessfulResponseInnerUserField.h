/*
 * SWGUserTokenSuccessfulResponseInnerUserField.h
 * 
 * 
 */

#ifndef SWGUserTokenSuccessfulResponseInnerUserField_H_
#define SWGUserTokenSuccessfulResponseInnerUserField_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserTokenSuccessfulResponseInnerUserField: public SWGObject {
public:
    SWGUserTokenSuccessfulResponseInnerUserField();
    SWGUserTokenSuccessfulResponseInnerUserField(QString* json);
    virtual ~SWGUserTokenSuccessfulResponseInnerUserField();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserTokenSuccessfulResponseInnerUserField* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 _id);
    QString* getAccessToken();
    void setAccessToken(QString* access_token);
    

private:
    qint32 _id;
    QString* access_token;
    
};

} /* namespace Swagger */

#endif /* SWGUserTokenSuccessfulResponseInnerUserField_H_ */
