/*
 * SWGInline_response_200_10.h
 * 
 * 
 */

#ifndef SWGInline_response_200_10_H_
#define SWGInline_response_200_10_H_

#include <QJsonObject>


#include "SWGVariableUserSource.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_10: public SWGObject {
public:
    SWGInline_response_200_10();
    SWGInline_response_200_10(QString* json);
    virtual ~SWGInline_response_200_10();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_10* fromJson(QString &jsonString);

    QList<SWGVariableUserSource*>* getData();
    void setData(QList<SWGVariableUserSource*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGVariableUserSource*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_10_H_ */
