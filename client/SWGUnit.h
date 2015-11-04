/*
 * SWGUnit.h
 * 
 * 
 */

#ifndef SWGUnit_H_
#define SWGUnit_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

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

    qint32 getId();
    void setId(qint32 id);
    QString* getClientId();
    void setClientId(QString* client_id);
    QString* getName();
    void setName(QString* name);
    QString* getAbbreviatedName();
    void setAbbreviatedName(QString* abbreviated_name);
    qint32 getCategoryId();
    void setCategoryId(qint32 category_id);
    float getMinimumValue();
    void setMinimumValue(float minimum_value);
    float getMaximumValue();
    void setMaximumValue(float maximum_value);
    qint32 getUpdated();
    void setUpdated(qint32 updated);
    qint32 getDefaultUnitId();
    void setDefaultUnitId(qint32 default_unit_id);
    float getMultiply();
    void setMultiply(float multiply);
    float getAdd();
    void setAdd(float add);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 id;
    QString* client_id;
    QString* name;
    QString* abbreviated_name;
    qint32 category_id;
    float minimum_value;
    float maximum_value;
    qint32 updated;
    qint32 default_unit_id;
    float multiply;
    float add;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGUnit_H_ */
