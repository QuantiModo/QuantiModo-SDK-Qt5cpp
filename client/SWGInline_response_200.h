/*
 * SWGInline_response_200.h
 * 
 * 
 */

#ifndef SWGInline_response_200_H_
#define SWGInline_response_200_H_

#include <QJsonObject>


#include <QList>
#include "SWGAggregatedCorrelation.h"

#include "SWGObject.h"


namespace Swagger {

class SWGInline_response_200: public SWGObject {
public:
    SWGInline_response_200();
    SWGInline_response_200(QString* json);
    virtual ~SWGInline_response_200();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInline_response_200* fromJson(QString &jsonString);

    QList<SWGAggregatedCorrelation*>* getData();
    void setData(QList<SWGAggregatedCorrelation*>* data);
    bool getSuccess();
    void setSuccess(bool success);
    

private:
    QList<SWGAggregatedCorrelation*>* data;
    bool success;
    
};

} /* namespace Swagger */

#endif /* SWGInline_response_200_H_ */
