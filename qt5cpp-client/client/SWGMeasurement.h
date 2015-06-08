/*
 * SWGMeasurement.h
 * 
 * 
 */

#ifndef SWGMeasurement_H_
#define SWGMeasurement_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGMeasurement: public SWGObject {
public:
    SWGMeasurement();
    SWGMeasurement(QString* json);
    virtual ~SWGMeasurement();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMeasurement* fromJson(QString &jsonString);

    QString* getVariable();
    void setVariable(QString* variable);
    QString* getSource();
    void setSource(QString* source);
    qint64 getTimestamp();
    void setTimestamp(qint64 timestamp);
    double* getValue();
    void setValue(double* value);
    QString* getUnit();
    void setUnit(QString* unit);
    QString* getNote();
    void setNote(QString* note);
    

private:
    QString* variable;
    QString* source;
    qint64 timestamp;
    double* value;
    QString* unit;
    QString* note;
    
};

} /* namespace Swagger */

#endif /* SWGMeasurement_H_ */
