/*
 * SWGInline_response_200_17.h
 * 
 * 
 */

#ifndef SWGInline_response_200_17_H_
#define SWGInline_response_200_17_H_

#include <QJsonObject>


#include "SWGCorrelation.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200_17: public SWGObject {
public:
    SWGInline_response_200_17();
    SWGInline_response_200_17(QString* json);
    virtual ~SWGInline_response_200_17();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200_17* fromJson(QString &jsonString);

    QList<SWGCorrelation*>* getData();
    void setData(QList<SWGCorrelation*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGCorrelation*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_17_H_ */
