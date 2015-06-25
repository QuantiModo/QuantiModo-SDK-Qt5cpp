/*
 * SWGMeasurementSet.h
 * 
 * 
 */

#ifndef SWGMeasurementSet_H_
#define SWGMeasurementSet_H_

#include <QJsonObject>


#include <QString>
#include "SWGValueObject.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGMeasurementSet: public SWGObject {
public:
    SWGMeasurementSet();
    SWGMeasurementSet(QString* json);
    virtual ~SWGMeasurementSet();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeasurementSet* fromJson(QString &jsonString);

    QList<SWGValueObject*>* getMeasurements();
    void setMeasurements(QList<SWGValueObject*>* measurements);
    QString* getName();
    void setName(QString* name);
    QString* getSource();
    void setSource(QString* source);
    QString* getCategory();
    void setCategory(QString* category);
    QString* getCombinationOperation();
    void setCombinationOperation(QString* combinationOperation);
    QString* getUnit();
    void setUnit(QString* unit);
    

private:
    QList<SWGValueObject*>* measurements;
    QString* name;
    QString* source;
    QString* category;
    QString* combinationOperation;
    QString* unit;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurementSet_H_ */
