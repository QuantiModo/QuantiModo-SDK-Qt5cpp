/*
 * SWGInline_response_200_3.h
 * 
 * 
 */

#ifndef SWGInline_response_200_3_H_
#define SWGInline_response_200_3_H_

#include <QJsonObject>


#include "SWGConnection.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_3: public SWGObject {
public:
    SWGInline_response_200_3();
    SWGInline_response_200_3(QString* json);
    virtual ~SWGInline_response_200_3();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_3* fromJson(QString &jsonString);

    QList<SWGConnection*>* getData();
    void setData(QList<SWGConnection*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGConnection*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_3_H_ */
