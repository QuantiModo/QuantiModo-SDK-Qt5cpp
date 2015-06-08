/*
 * SWGVariable.h
 * 
 * 
 */

#ifndef SWGVariable_H_
#define SWGVariable_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVariable: public SWGObject {
public:
    SWGVariable();
    SWGVariable(QString* json);
    virtual ~SWGVariable();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVariable* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
    QString* getOriginalName();
    void setOriginalName(QString* originalName);
    QString* getCategory();
    void setCategory(QString* category);
    QString* getUnit();
    void setUnit(QString* unit);
    QString* getSources();
    void setSources(QString* sources);
    double* getMinimumValue();
    void setMinimumValue(double* minimumValue);
    double* getMaximumValue();
    void setMaximumValue(double* maximumValue);
    QString* getCombinationOperation();
    void setCombinationOperation(QString* combinationOperation);
    double* getFillingValue();
    void setFillingValue(double* fillingValue);
    

private:
    QString* name;
    QString* originalName;
    QString* category;
    QString* unit;
    QString* sources;
    double* minimumValue;
    double* maximumValue;
    QString* combinationOperation;
    double* fillingValue;
    
};

} /* namespace Swagger */

#endif /* SWGVariable_H_ */
