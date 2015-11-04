/*
 * SWGInline_response_200_15.h
 * 
 * 
 */

#ifndef SWGInline_response_200_15_H_
#define SWGInline_response_200_15_H_

#include <QJsonObject>


#include <QList>
#include "SWGUnitCategory.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_15: public SWGObject {
public:
    SWGInline_response_200_15();
    SWGInline_response_200_15(QString* json);
    virtual ~SWGInline_response_200_15();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_15* fromJson(QString &jsonString);

    QList<SWGUnitCategory*>* getData();
    void setData(QList<SWGUnitCategory*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGUnitCategory*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_15_H_ */
