/*
 * SWGPairs.h
 * 
 * 
 */

#ifndef SWGPairs_H_
#define SWGPairs_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPairs: public SWGObject {
public:
    SWGPairs();
    SWGPairs(QString* json);
    virtual ~SWGPairs();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPairs* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
    

private:
    QString* name;
    
};

} /* namespace Swagger */

#endif /* SWGPairs_H_ */
