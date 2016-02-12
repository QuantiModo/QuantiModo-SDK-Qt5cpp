/*
 * SWGInline_response_200_12.h
 * 
 * 
 */

#ifndef SWGInline_response_200_12_H_
#define SWGInline_response_200_12_H_

#include <QJsonObject>


#include "SWGCommonVariableRelationship.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_12: public SWGObject {
public:
    SWGInline_response_200_12();
    SWGInline_response_200_12(QString* json);
    virtual ~SWGInline_response_200_12();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_12* fromJson(QString &jsonString);

    QList<SWGCommonVariableRelationship*>* getData();
    void setData(QList<SWGCommonVariableRelationship*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGCommonVariableRelationship*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_12_H_ */
