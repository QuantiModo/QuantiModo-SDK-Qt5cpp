/*
 * SWGValueObject.h
 * 
 * 
 */

#ifndef SWGValueObject_H_
#define SWGValueObject_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGValueObject: public SWGObject {
public:
    SWGValueObject();
    SWGValueObject(QString* json);
    virtual ~SWGValueObject();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGValueObject* fromJson(QString &jsonString);

    qint64 getTimestamp();
    void setTimestamp(qint64 timestamp);
    double* getValue();
    void setValue(double* value);
    QString* getNote();
    void setNote(QString* note);
    

private:
    qint64 timestamp;
    double* value;
    QString* note;
    
};

} /* namespace Swagger */

#endif /* SWGValueObject_H_ */
