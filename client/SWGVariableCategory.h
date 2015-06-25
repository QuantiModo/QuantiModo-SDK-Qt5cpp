/*
 * SWGVariableCategory.h
 * 
 * 
 */

#ifndef SWGVariableCategory_H_
#define SWGVariableCategory_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVariableCategory: public SWGObject {
public:
    SWGVariableCategory();
    SWGVariableCategory(QString* json);
    virtual ~SWGVariableCategory();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVariableCategory* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
    

private:
    QString* name;
    
};

} /* namespace Swagger */

#endif /* SWGVariableCategory_H_ */
