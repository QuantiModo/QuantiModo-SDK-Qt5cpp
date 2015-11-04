/*
 * SWGInline_response_200_25.h
 * 
 * 
 */

#ifndef SWGInline_response_200_25_H_
#define SWGInline_response_200_25_H_

#include <QJsonObject>


#include <QList>
#include "SWGVariableUserSource.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_25: public SWGObject {
public:
    SWGInline_response_200_25();
    SWGInline_response_200_25(QString* json);
    virtual ~SWGInline_response_200_25();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_25* fromJson(QString &jsonString);

    QList<SWGVariableUserSource*>* getData();
    void setData(QList<SWGVariableUserSource*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGVariableUserSource*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_25_H_ */
