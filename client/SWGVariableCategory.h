/*
 * SWGVariableCategory.h
 * 
 * 
 */

#ifndef SWGVariableCategory_H_
#define SWGVariableCategory_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVariableCategory: public SWGObject {
public:
    SWGVariableCategory();
    SWGVariableCategory(QString* json);
    virtual ~SWGVariableCategory();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVariableCategory* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    QString* getName();
    void setName(QString* name);
    float getFillingValue();
    void setFillingValue(float filling_value);
    float getMaximumAllowedValue();
    void setMaximumAllowedValue(float maximum_allowed_value);
    float getMinimumAllowedValue();
    void setMinimumAllowedValue(float minimum_allowed_value);
    qint32 getDurationOfAction();
    void setDurationOfAction(qint32 duration_of_action);
    qint32 getOnsetDelay();
    void setOnsetDelay(qint32 onset_delay);
    QString* getCombinationOperation();
    void setCombinationOperation(QString* combination_operation);
    qint32 getUpdated();
    void setUpdated(qint32 updated);
    bool getCauseOnly();
    void setCauseOnly(bool cause_only);
    qint32 getPublic();
    void setPublic(qint32 public);
    bool getOutcome();
    void setOutcome(bool outcome);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    QString* getImageUrl();
    void setImageUrl(QString* image_url);
    qint32 getDefaultUnitId();
    void setDefaultUnitId(qint32 default_unit_id);
    

private:
    qint32 id;
    QString* name;
    float filling_value;
    float maximum_allowed_value;
    float minimum_allowed_value;
    qint32 duration_of_action;
    qint32 onset_delay;
    QString* combination_operation;
    qint32 updated;
    bool cause_only;
    qint32 public;
    bool outcome;
    QDateTime* created_at;
    QDateTime* updated_at;
    QString* image_url;
    qint32 default_unit_id;
    
};

} /* namespace Swagger */

#endif /* SWGVariableCategory_H_ */
