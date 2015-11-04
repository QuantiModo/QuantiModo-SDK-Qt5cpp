/*
 * SWGInline_response_200_27.h
 * 
 * 
 */

#ifndef SWGInline_response_200_27_H_
#define SWGInline_response_200_27_H_

#include <QJsonObject>


#include <QList>
#include "SWGVariable.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_27: public SWGObject {
public:
    SWGInline_response_200_27();
    SWGInline_response_200_27(QString* json);
    virtual ~SWGInline_response_200_27();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_27* fromJson(QString &jsonString);

    QList<SWGVariable*>* getData();
    void setData(QList<SWGVariable*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGVariable*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_27_H_ */
