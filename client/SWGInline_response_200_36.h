/*
 * SWGInline_response_200_36.h
 * 
 * 
 */

#ifndef SWGInline_response_200_36_H_
#define SWGInline_response_200_36_H_

#include <QJsonObject>


#include "SWGVote.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_36: public SWGObject {
public:
    SWGInline_response_200_36();
    SWGInline_response_200_36(QString* json);
    virtual ~SWGInline_response_200_36();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_36* fromJson(QString &jsonString);

    SWGVote* getData();
    void setData(SWGVote* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGVote* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_36_H_ */
