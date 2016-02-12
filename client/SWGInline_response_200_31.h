/*
 * SWGInline_response_200_31.h
 * 
 * 
 */

#ifndef SWGInline_response_200_31_H_
#define SWGInline_response_200_31_H_

#include <QJsonObject>


#include "SWGVariableCategory.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_31: public SWGObject {
public:
    SWGInline_response_200_31();
    SWGInline_response_200_31(QString* json);
    virtual ~SWGInline_response_200_31();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_31* fromJson(QString &jsonString);

    QList<SWGVariableCategory*>* getData();
    void setData(QList<SWGVariableCategory*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGVariableCategory*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_31_H_ */
