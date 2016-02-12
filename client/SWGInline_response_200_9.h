/*
 * SWGInline_response_200_9.h
 * 
 * 
 */

#ifndef SWGInline_response_200_9_H_
#define SWGInline_response_200_9_H_

#include <QJsonObject>


#include "SWGUserVariable.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_9: public SWGObject {
public:
    SWGInline_response_200_9();
    SWGInline_response_200_9(QString* json);
    virtual ~SWGInline_response_200_9();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_9* fromJson(QString &jsonString);

    QList<SWGUserVariable*>* getData();
    void setData(QList<SWGUserVariable*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGUserVariable*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_9_H_ */
