/*
 * SWGVariableNew.h
 * 
 * 
 */

#ifndef SWGVariableNew_H_
#define SWGVariableNew_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVariableNew: public SWGObject {
public:
    SWGVariableNew();
    SWGVariableNew(QString* json);
    virtual ~SWGVariableNew();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVariableNew* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
    QString* getCategory();
    void setCategory(QString* category);
    QString* getUnit();
    void setUnit(QString* unit);
    QString* getCombinationOperation();
    void setCombinationOperation(QString* combinationOperation);
    QString* getParent();
    void setParent(QString* parent);
    

private:
    QString* name;
    QString* category;
    QString* unit;
    QString* combinationOperation;
    QString* parent;
    
};

} /* namespace Swagger */

#endif /* SWGVariableNew_H_ */
