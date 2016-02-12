/*
 * SWGInline_response_200_4.h
 * 
 * 
 */

#ifndef SWGInline_response_200_4_H_
#define SWGInline_response_200_4_H_

#include <QJsonObject>


#include "SWGCredential.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_4: public SWGObject {
public:
    SWGInline_response_200_4();
    SWGInline_response_200_4(QString* json);
    virtual ~SWGInline_response_200_4();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_4* fromJson(QString &jsonString);

    QList<SWGCredential*>* getData();
    void setData(QList<SWGCredential*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGCredential*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_4_H_ */
