/*
 * SWGInline_response_200_7.h
 * 
 * 
 */

#ifndef SWGInline_response_200_7_H_
#define SWGInline_response_200_7_H_

#include <QJsonObject>


#include "SWGUpdate.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_7: public SWGObject {
public:
    SWGInline_response_200_7();
    SWGInline_response_200_7(QString* json);
    virtual ~SWGInline_response_200_7();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_7* fromJson(QString &jsonString);

    QList<SWGUpdate*>* getData();
    void setData(QList<SWGUpdate*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGUpdate*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_7_H_ */
