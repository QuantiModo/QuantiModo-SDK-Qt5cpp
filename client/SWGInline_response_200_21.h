/*
 * SWGInline_response_200_21.h
 * 
 * 
 */

#ifndef SWGInline_response_200_21_H_
#define SWGInline_response_200_21_H_

#include <QJsonObject>


#include "SWGSource.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_21: public SWGObject {
public:
    SWGInline_response_200_21();
    SWGInline_response_200_21(QString* json);
    virtual ~SWGInline_response_200_21();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_21* fromJson(QString &jsonString);

    QList<SWGSource*>* getData();
    void setData(QList<SWGSource*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGSource*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_21_H_ */
