/*
 * SWGInline_response_200_11.h
 * 
 * 
 */

#ifndef SWGInline_response_200_11_H_
#define SWGInline_response_200_11_H_

#include <QJsonObject>


#include "SWGVote.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_11: public SWGObject {
public:
    SWGInline_response_200_11();
    SWGInline_response_200_11(QString* json);
    virtual ~SWGInline_response_200_11();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_11* fromJson(QString &jsonString);

    QList<SWGVote*>* getData();
    void setData(QList<SWGVote*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGVote*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_11_H_ */
