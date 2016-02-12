/*
 * SWGInline_response_200_8.h
 * 
 * 
 */

#ifndef SWGInline_response_200_8_H_
#define SWGInline_response_200_8_H_

#include <QJsonObject>


#include "SWGUserVariableRelationship.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_8: public SWGObject {
public:
    SWGInline_response_200_8();
    SWGInline_response_200_8(QString* json);
    virtual ~SWGInline_response_200_8();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_8* fromJson(QString &jsonString);

    QList<SWGUserVariableRelationship*>* getData();
    void setData(QList<SWGUserVariableRelationship*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGUserVariableRelationship*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_8_H_ */
