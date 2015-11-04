/*
 * SWGUnitConversion.h
 * 
 * 
 */

#ifndef SWGUnitConversion_H_
#define SWGUnitConversion_H_

#include <QJsonObject>


#include "QDateTime.h"

#include "SWGObject.h"


namespace Swagger {

class SWGUnitConversion: public SWGObject {
public:
    SWGUnitConversion();
    SWGUnitConversion(QString* json);
    virtual ~SWGUnitConversion();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUnitConversion* fromJson(QString &jsonString);

    qint32 getUnitId();
    void setUnitId(qint32 unit_id);
    bool getStepNumber();
    void setStepNumber(bool step_number);
    bool getOperation();
    void setOperation(bool operation);
    float getValue();
    void setValue(float value);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 unit_id;
    bool step_number;
    bool operation;
    float value;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGUnitConversion_H_ */
