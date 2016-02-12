/*
 * SWGUserVariable.h
 * 
 * 
 */

#ifndef SWGUserVariable_H_
#define SWGUserVariable_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserVariable: public SWGObject {
public:
    SWGUserVariable();
    SWGUserVariable(QString* json);
    virtual ~SWGUserVariable();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserVariable* fromJson(QString &jsonString);

    qint32 getParentId();
    void setParentId(qint32 parent_id);
    qint32 getUserId();
    void setUserId(qint32 user_id);
    QString* getClientId();
    void setClientId(QString* client_id);
    qint32 getVariableId();
    void setVariableId(qint32 variable_id);
    qint32 getDefaultUnitId();
    void setDefaultUnitId(qint32 default_unit_id);
    float getMinimumAllowedValue();
    void setMinimumAllowedValue(float minimum_allowed_value);
    float getMaximumAllowedValue();
    void setMaximumAllowedValue(float maximum_allowed_value);
    float getFillingValue();
    void setFillingValue(float filling_value);
    qint32 getJoinWith();
    void setJoinWith(qint32 join_with);
    qint32 getOnsetDelay();
    void setOnsetDelay(qint32 onset_delay);
    qint32 getDurationOfAction();
    void setDurationOfAction(qint32 duration_of_action);
    qint32 getVariableCategoryId();
    void setVariableCategoryId(qint32 variable_category_id);
    qint32 getUpdated();
    void setUpdated(qint32 updated);
    qint32 getPublic();
    void setPublic(qint32 public);
    bool getCauseOnly();
    void setCauseOnly(bool cause_only);
    QString* getFillingType();
    void setFillingType(QString* filling_type);
    qint32 getNumberOfMeasurements();
    void setNumberOfMeasurements(qint32 number_of_measurements);
    qint32 getNumberOfProcessedMeasurements();
    void setNumberOfProcessedMeasurements(qint32 number_of_processed_measurements);
    qint32 getMeasurementsAtLastAnalysis();
    void setMeasurementsAtLastAnalysis(qint32 measurements_at_last_analysis);
    qint32 getLastUnitId();
    void setLastUnitId(qint32 last_unit_id);
    qint32 getLastOriginalUnitId();
    void setLastOriginalUnitId(qint32 last_original_unit_id);
    float getLastValue();
    void setLastValue(float last_value);
    qint32 getLastOriginalValue();
    void setLastOriginalValue(qint32 last_original_value);
    qint32 getLastSourceId();
    void setLastSourceId(qint32 last_source_id);
    qint32 getNumberOfCorrelations();
    void setNumberOfCorrelations(qint32 number_of_correlations);
    QString* getStatus();
    void setStatus(QString* status);
    QString* getErrorMessage();
    void setErrorMessage(QString* error_message);
    QDateTime* getLastSuccessfulUpdateTime();
    void setLastSuccessfulUpdateTime(QDateTime* last_successful_update_time);
    float getStandardDeviation();
    void setStandardDeviation(float standard_deviation);
    float getVariance();
    void setVariance(float variance);
    float getMinimumRecordedValue();
    void setMinimumRecordedValue(float minimum_recorded_value);
    float getMaximumRecordedDailyValue();
    void setMaximumRecordedDailyValue(float maximum_recorded_daily_value);
    float getMean();
    void setMean(float mean);
    float getMedian();
    void setMedian(float median);
    qint32 getMostCommonUnitId();
    void setMostCommonUnitId(qint32 most_common_unit_id);
    float getMostCommonValue();
    void setMostCommonValue(float most_common_value);
    float getNumberOfUniqueDailyValues();
    void setNumberOfUniqueDailyValues(float number_of_unique_daily_values);
    qint32 getNumberOfChanges();
    void setNumberOfChanges(qint32 number_of_changes);
    float getSkewness();
    void setSkewness(float skewness);
    float getKurtosis();
    void setKurtosis(float kurtosis);
    float getLatitude();
    void setLatitude(float latitude);
    float getLongitude();
    void setLongitude(float longitude);
    QString* getLocation();
    void setLocation(QString* location);
    QDateTime* getExperimentStartTime();
    void setExperimentStartTime(QDateTime* experiment_start_time);
    QDateTime* getExperimentEndTime();
    void setExperimentEndTime(QDateTime* experiment_end_time);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    bool getOutcome();
    void setOutcome(bool outcome);
    QString* getSources();
    void setSources(QString* sources);
    qint32 getEarliestSourceTime();
    void setEarliestSourceTime(qint32 earliest_source_time);
    qint32 getLatestSourceTime();
    void setLatestSourceTime(qint32 latest_source_time);
    qint32 getEarliestMeasurementTime();
    void setEarliestMeasurementTime(qint32 earliest_measurement_time);
    qint32 getLatestMeasurementTime();
    void setLatestMeasurementTime(qint32 latest_measurement_time);
    qint32 getEarliestFillingTime();
    void setEarliestFillingTime(qint32 earliest_filling_time);
    qint32 getLatestFillingTime();
    void setLatestFillingTime(qint32 latest_filling_time);
    

private:
    qint32 parent_id;
    qint32 user_id;
    QString* client_id;
    qint32 variable_id;
    qint32 default_unit_id;
    float minimum_allowed_value;
    float maximum_allowed_value;
    float filling_value;
    qint32 join_with;
    qint32 onset_delay;
    qint32 duration_of_action;
    qint32 variable_category_id;
    qint32 updated;
    qint32 public;
    bool cause_only;
    QString* filling_type;
    qint32 number_of_measurements;
    qint32 number_of_processed_measurements;
    qint32 measurements_at_last_analysis;
    qint32 last_unit_id;
    qint32 last_original_unit_id;
    float last_value;
    qint32 last_original_value;
    qint32 last_source_id;
    qint32 number_of_correlations;
    QString* status;
    QString* error_message;
    QDateTime* last_successful_update_time;
    float standard_deviation;
    float variance;
    float minimum_recorded_value;
    float maximum_recorded_daily_value;
    float mean;
    float median;
    qint32 most_common_unit_id;
    float most_common_value;
    float number_of_unique_daily_values;
    qint32 number_of_changes;
    float skewness;
    float kurtosis;
    float latitude;
    float longitude;
    QString* location;
    QDateTime* experiment_start_time;
    QDateTime* experiment_end_time;
    QDateTime* created_at;
    QDateTime* updated_at;
    bool outcome;
    QString* sources;
    qint32 earliest_source_time;
    qint32 latest_source_time;
    qint32 earliest_measurement_time;
    qint32 latest_measurement_time;
    qint32 earliest_filling_time;
    qint32 latest_filling_time;
    
};

} /* namespace Swagger */

#endif /* SWGUserVariable_H_ */
