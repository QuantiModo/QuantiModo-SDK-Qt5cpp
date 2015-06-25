/*
 * SWGPostCorrelation.h
 * 
 * 
 */

#ifndef SWGPostCorrelation_H_
#define SWGPostCorrelation_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPostCorrelation: public SWGObject {
public:
    SWGPostCorrelation();
    SWGPostCorrelation(QString* json);
    virtual ~SWGPostCorrelation();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPostCorrelation* fromJson(QString &jsonString);

    QString* getCause();
    void setCause(QString* cause);
    QString* getEffect();
    void setEffect(QString* effect);
    double* getCorrelation();
    void setCorrelation(double* correlation);
    qint32 getVote();
    void setVote(qint32 vote);
    

private:
    QString* cause;
    QString* effect;
    double* correlation;
    qint32 vote;
    
};

} /* namespace Swagger */

#endif /* SWGPostCorrelation_H_ */
