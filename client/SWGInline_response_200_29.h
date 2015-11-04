/*
 * SWGInline_response_200_29.h
 * 
 * 
 */

#ifndef SWGInline_response_200_29_H_
#define SWGInline_response_200_29_H_

#include <QJsonObject>


#include <QList>
#include "SWGVote.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_29: public SWGObject {
public:
    SWGInline_response_200_29();
    SWGInline_response_200_29(QString* json);
    virtual ~SWGInline_response_200_29();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_29* fromJson(QString &jsonString);

    QList<SWGVote*>* getData();
    void setData(QList<SWGVote*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGVote*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_29_H_ */
