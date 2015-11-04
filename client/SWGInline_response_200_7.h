/*
 * SWGInline_response_200_7.h
 * 
 * 
 */

#ifndef SWGInline_response_200_7_H_
#define SWGInline_response_200_7_H_

#include <QJsonObject>


#include <QList>
#include "SWGCorrelation.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_7: public SWGObject {
public:
    SWGInline_response_200_7();
    SWGInline_response_200_7(QString* json);
    virtual ~SWGInline_response_200_7();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_7* fromJson(QString &jsonString);

    QList<SWGCorrelation*>* getData();
    void setData(QList<SWGCorrelation*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGCorrelation*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_7_H_ */
