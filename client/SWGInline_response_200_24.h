/*
 * SWGInline_response_200_24.h
 * 
 * 
 */

#ifndef SWGInline_response_200_24_H_
#define SWGInline_response_200_24_H_

#include <QJsonObject>


#include "SWGUnitCategory.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_24: public SWGObject {
public:
    SWGInline_response_200_24();
    SWGInline_response_200_24(QString* json);
    virtual ~SWGInline_response_200_24();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_24* fromJson(QString &jsonString);

    QList<SWGUnitCategory*>* getData();
    void setData(QList<SWGUnitCategory*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGUnitCategory*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_24_H_ */
