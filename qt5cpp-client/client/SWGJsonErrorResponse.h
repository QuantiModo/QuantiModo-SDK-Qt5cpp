/*
 * SWGJsonErrorResponse.h
 * 
 * 
 */

#ifndef SWGJsonErrorResponse_H_
#define SWGJsonErrorResponse_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGJsonErrorResponse: public SWGObject {
public:
    SWGJsonErrorResponse();
    SWGJsonErrorResponse(QString* json);
    virtual ~SWGJsonErrorResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGJsonErrorResponse* fromJson(QString &jsonString);

    QString* getStatus();
    void setStatus(QString* status);
    QString* getMessage();
    void setMessage(QString* message);
    

private:
    QString* status;
    QString* message;
    
};

} /* namespace Swagger */

#endif /* SWGJsonErrorResponse_H_ */
