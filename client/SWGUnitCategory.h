/*
 * SWGUnitCategory.h
 * 
 * 
 */

#ifndef SWGUnitCategory_H_
#define SWGUnitCategory_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUnitCategory: public SWGObject {
public:
    SWGUnitCategory();
    SWGUnitCategory(QString* json);
    virtual ~SWGUnitCategory();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUnitCategory* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
    

private:
    QString* name;
    
};

} /* namespace Swagger */

#endif /* SWGUnitCategory_H_ */
