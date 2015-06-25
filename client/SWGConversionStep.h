/*
 * SWGConversionStep.h
 * 
 * 
 */

#ifndef SWGConversionStep_H_
#define SWGConversionStep_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGConversionStep: public SWGObject {
public:
    SWGConversionStep();
    SWGConversionStep(QString* json);
    virtual ~SWGConversionStep();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGConversionStep* fromJson(QString &jsonString);

    QString* getOperation();
    void setOperation(QString* operation);
    double* getValue();
    void setValue(double* value);
    

private:
    QString* operation;
    double* value;
    
};

} /* namespace Swagger */

#endif /* SWGConversionStep_H_ */
