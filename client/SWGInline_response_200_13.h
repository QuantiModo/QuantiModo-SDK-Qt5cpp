/*
 * SWGInline_response_200_13.h
 * 
 * 
 */

#ifndef SWGInline_response_200_13_H_
#define SWGInline_response_200_13_H_

#include <QJsonObject>


#include <QList>
#include "SWGSource.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_13: public SWGObject {
public:
    SWGInline_response_200_13();
    SWGInline_response_200_13(QString* json);
    virtual ~SWGInline_response_200_13();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_13* fromJson(QString &jsonString);

    QList<SWGSource*>* getData();
    void setData(QList<SWGSource*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGSource*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_13_H_ */
