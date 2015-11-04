/*
 * SWGInline_response_200_2.h
 * 
 * 
 */

#ifndef SWGInline_response_200_2_H_
#define SWGInline_response_200_2_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_2: public SWGObject {
public:
    SWGInline_response_200_2();
    SWGInline_response_200_2(QString* json);
    virtual ~SWGInline_response_200_2();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_2* fromJson(QString &jsonString);

    QString* getData();
    void setData(QString* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QString* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_2_H_ */
