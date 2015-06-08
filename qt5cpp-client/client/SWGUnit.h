/*
 * SWGUnit.h
 * 
 * 
 */

#ifndef SWGUnit_H_
#define SWGUnit_H_

#include <QJsonObject>


#include <QString>
#include <QList>
#include "SWGConversionStep.h"

#include "SWGObject.h"


namespace Swagger {

class SWGUnit: public SWGObject {
public:
    SWGUnit();
    SWGUnit(QString* json);
    virtual ~SWGUnit();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUnit* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
    QString* getAbbreviatedName();
    void setAbbreviatedName(QString* abbreviatedName);
    QString* getCategory();
    void setCategory(QString* category);
    double* getMinimum();
    void setMinimum(double* minimum);
    double* getMaximum();
    void setMaximum(double* maximum);
    QList<SWGConversionStep*>* getConversionSteps();
    void setConversionSteps(QList<SWGConversionStep*>* conversionSteps);
    

private:
    QString* name;
    QString* abbreviatedName;
    QString* category;
    double* minimum;
    double* maximum;
    QList<SWGConversionStep*>* conversionSteps;
    
};

} /* namespace Swagger */

#endif /* SWGUnit_H_ */
