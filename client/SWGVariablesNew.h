/*
 * SWGVariablesNew.h
 * 
 * New variables
 */

#ifndef SWGVariablesNew_H_
#define SWGVariablesNew_H_

#include <QJsonObject>


#include <QList>
#include "SWGVariableNew.h"

#include "SWGObject.h"


namespace Swagger {

class SWGVariablesNew: public SWGObject {
public:
    SWGVariablesNew();
    SWGVariablesNew(QString* json);
    virtual ~SWGVariablesNew();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVariablesNew* fromJson(QString &jsonString);

    

private:
    
};

} /* namespace Swagger */

#endif /* SWGVariablesNew_H_ */
