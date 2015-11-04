/*
 * SWGVariable.h
 * 
 * 
 */

#ifndef SWGVariable_H_
#define SWGVariable_H_

#include <QJsonObject>


#include "QDateTime.h"
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

    qint32 getId();
    void setId(qint32 id);
    QString* getClientId();
    void setClientId(QString* client_id);
    qint32 getParentId();
    void setParentId(qint32 parent_id);
    QString* getName();
    void setName(QString* name);
    qint32 getVariableCategoryId();
    void setVariableCategoryId(qint32 variable_category_id);
    qint32 getDefaultUnitId();
    void setDefaultUnitId(qint32 default_unit_id);
    QString* getCombinationOperation();
    void setCombinationOperation(QString* combination_operation);
    float getFillingValue();
    void setFillingValue(float filling_value);
    float getMaximumAllowedValue();
    void setMaximumAllowedValue(float maximum_allowed_value);
    float getMinimumAllowedValue();
    void setMinimumAllowedValue(float minimum_allowed_value);
    qint32 getOnsetDelay();
    void setOnsetDelay(qint32 onset_delay);
    qint32 getDurationOfAction();
    void setDurationOfAction(qint32 duration_of_action);
    qint32 getPublic();
    void setPublic(qint32 public);
    bool getCauseOnly();
    void setCauseOnly(bool cause_only);
    float getMostCommonValue();
    void setMostCommonValue(float most_common_value);
    qint32 getMostCommonUnitId();
    void setMostCommonUnitId(qint32 most_common_unit_id);
    float getStandardDeviation();
    void setStandardDeviation(float standard_deviation);
    float getVariance();
    void setVariance(float variance);
    float getMean();
    void setMean(float mean);
    float getMedian();
    void setMedian(float median);
    float getNumberOfMeasurements();
    void setNumberOfMeasurements(float number_of_measurements);
    float getNumberOfUniqueValues();
    void setNumberOfUniqueValues(float number_of_unique_values);
    float getSkewness();
    void setSkewness(float skewness);
    float getKurtosis();
    void setKurtosis(float kurtosis);
    QString* getStatus();
    void setStatus(QString* status);
    QString* getErrorMessage();
    void setErrorMessage(QString* error_message);
    QDateTime* getLastSuccessfulUpdateTime();
    void setLastSuccessfulUpdateTime(QDateTime* last_successful_update_time);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    QString* getProductUrl();
    void setProductUrl(QString* product_url);
    QString* getImageUrl();
    void setImageUrl(QString* image_url);
    float getPrice();
    void setPrice(float price);
    qint32 getNumberOfUserVariables();
    void setNumberOfUserVariables(qint32 number_of_user_variables);
    bool getOutcome();
    void setOutcome(bool outcome);
    float getMinimumRecordedValue();
    void setMinimumRecordedValue(float minimum_recorded_value);
    float getMaximumRecordedValue();
    void setMaximumRecordedValue(float maximum_recorded_value);
    

private:
    qint32 id;
    QString* client_id;
    qint32 parent_id;
    QString* name;
    qint32 variable_category_id;
    qint32 default_unit_id;
    QString* combination_operation;
    float filling_value;
    float maximum_allowed_value;
    float minimum_allowed_value;
    qint32 onset_delay;
    qint32 duration_of_action;
    qint32 public;
    bool cause_only;
    float most_common_value;
    qint32 most_common_unit_id;
    float standard_deviation;
    float variance;
    float mean;
    float median;
    float number_of_measurements;
    float number_of_unique_values;
    float skewness;
    float kurtosis;
    QString* status;
    QString* error_message;
    QDateTime* last_successful_update_time;
    QDateTime* created_at;
    QDateTime* updated_at;
    QString* product_url;
    QString* image_url;
    float price;
    qint32 number_of_user_variables;
    bool outcome;
    float minimum_recorded_value;
    float maximum_recorded_value;
    
};

} /* namespace Swagger */

#endif /* SWGVariable_H_ */
