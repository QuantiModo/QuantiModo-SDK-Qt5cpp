/*
 * SWGInline_response_200_25.h
 * 
 * 
 */

#ifndef SWGInline_response_200_25_H_
#define SWGInline_response_200_25_H_

#include <QJsonObject>


#include "SWGUnitCategory.h"

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

    SWGUnitCategory* getData();
    void setData(SWGUnitCategory* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    SWGUnitCategory* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_25_H_ */
