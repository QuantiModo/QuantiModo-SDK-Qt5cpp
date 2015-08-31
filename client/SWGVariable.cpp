
#include "SWGVariable.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariable::SWGVariable(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariable::SWGVariable() {
    init();
}

SWGVariable::~SWGVariable() {
    this->cleanup();
}

void
SWGVariable::init() {
    id = NULL;
    name = new QString("");
    originalName = new QString("");
    category = new QString("");
    unit = new QString("");
    sources = new QString("");
    minimumValue = 0.0;
    maximumValue = 0.0;
    combinationOperation = new QString("");
    fillingValue = 0.0;
    joinWith = new QString("");
    joinedVariables = new QList<SWGVariable*>();
    parent = NULL;
    subVariables = new QList<SWGVariable*>();
    onsetDelay = NULL;
    durationOfAction = NULL;
    earliestMeasurementTime = NULL;
    latestMeasurementTime = NULL;
    updated = NULL;
    causeOnly = NULL;
    numberOfCorrelations = NULL;
    outcome = NULL;
    measurementsAtLastAnalysis = NULL;
    numberOfMeasurements = NULL;
    lastUnit = NULL;
    lastValue = NULL;
    mostCommonValue = NULL;
    mostCommonUnit = NULL;
    lastSource = NULL;
    
}

void
SWGVariable::cleanup() {
    
    if(name != NULL) {
        delete name;
    }
    if(originalName != NULL) {
        delete originalName;
    }
    if(category != NULL) {
        delete category;
    }
    if(unit != NULL) {
        delete unit;
    }
    if(sources != NULL) {
        delete sources;
    }
    if(minimumValue != NULL) {
        delete minimumValue;
    }
    if(maximumValue != NULL) {
        delete maximumValue;
    }
    if(combinationOperation != NULL) {
        delete combinationOperation;
    }
    if(fillingValue != NULL) {
        delete fillingValue;
    }
    if(joinWith != NULL) {
        delete joinWith;
    }
    if(joinedVariables != NULL) {
        QList<SWGVariable*>* arr = joinedVariables;
        foreach(SWGVariable* o, *arr) {
            delete o;
        }
        delete joinedVariables;
    }
    
    if(subVariables != NULL) {
        QList<SWGVariable*>* arr = subVariables;
        foreach(SWGVariable* o, *arr) {
            delete o;
        }
        delete subVariables;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

SWGVariable*
SWGVariable::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariable::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&originalName, pJson["originalName"], "QString", "QString");
    setValue(&category, pJson["category"], "QString", "QString");
    setValue(&unit, pJson["unit"], "QString", "QString");
    setValue(&sources, pJson["sources"], "QString", "QString");
    setValue(&minimumValue, pJson["minimumValue"], "double", "double");
    setValue(&maximumValue, pJson["maximumValue"], "double", "double");
    setValue(&combinationOperation, pJson["combinationOperation"], "QString", "QString");
    setValue(&fillingValue, pJson["fillingValue"], "double", "double");
    setValue(&joinWith, pJson["joinWith"], "QString", "QString");
    setValue(&joinedVariables, pJson["joinedVariables"], "QList", "SWGVariable");
    setValue(&parent, pJson["parent"], "qint32", "");
    setValue(&subVariables, pJson["subVariables"], "QList", "SWGVariable");
    setValue(&onsetDelay, pJson["onsetDelay"], "qint32", "");
    setValue(&durationOfAction, pJson["durationOfAction"], "qint32", "");
    setValue(&earliestMeasurementTime, pJson["earliestMeasurementTime"], "qint32", "");
    setValue(&latestMeasurementTime, pJson["latestMeasurementTime"], "qint32", "");
    setValue(&updated, pJson["updated"], "qint32", "");
    setValue(&causeOnly, pJson["causeOnly"], "qint32", "");
    setValue(&numberOfCorrelations, pJson["numberOfCorrelations"], "qint32", "");
    setValue(&outcome, pJson["outcome"], "qint32", "");
    setValue(&measurementsAtLastAnalysis, pJson["measurementsAtLastAnalysis"], "qint32", "");
    setValue(&numberOfMeasurements, pJson["numberOfMeasurements"], "qint32", "");
    setValue(&lastUnit, pJson["lastUnit"], "qint32", "");
    setValue(&lastValue, pJson["lastValue"], "qint32", "");
    setValue(&mostCommonValue, pJson["mostCommonValue"], "qint32", "");
    setValue(&mostCommonUnit, pJson["mostCommonUnit"], "qint32", "");
    setValue(&lastSource, pJson["lastSource"], "qint32", "");
    
}

QString
SWGVariable::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariable::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("originalName"), originalName, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("category"), category, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("unit"), unit, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("sources"), sources, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("minimumValue"), minimumValue, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("maximumValue"), maximumValue, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("combinationOperation"), combinationOperation, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("fillingValue"), fillingValue, obj, QString("double"));
    
    
    
    
    
    toJsonValue(QString("joinWith"), joinWith, obj, QString("QString"));
    
    
    
    
    
    QList<SWGVariable*>* joinedVariablesList = joinedVariables;
    QJsonArray joinedVariablesJsonArray;
    toJsonArray((QList<void*>*)joinedVariables, &joinedVariablesJsonArray, "joinedVariables", "SWGVariable");

    obj->insert("joinedVariables", joinedVariablesJsonArray);
    
    
    obj->insert("parent", QJsonValue(parent));
    
    
    QList<SWGVariable*>* subVariablesList = subVariables;
    QJsonArray subVariablesJsonArray;
    toJsonArray((QList<void*>*)subVariables, &subVariablesJsonArray, "subVariables", "SWGVariable");

    obj->insert("subVariables", subVariablesJsonArray);
    
    
    obj->insert("onsetDelay", QJsonValue(onsetDelay));
    obj->insert("durationOfAction", QJsonValue(durationOfAction));
    obj->insert("earliestMeasurementTime", QJsonValue(earliestMeasurementTime));
    obj->insert("latestMeasurementTime", QJsonValue(latestMeasurementTime));
    obj->insert("updated", QJsonValue(updated));
    obj->insert("causeOnly", QJsonValue(causeOnly));
    obj->insert("numberOfCorrelations", QJsonValue(numberOfCorrelations));
    obj->insert("outcome", QJsonValue(outcome));
    obj->insert("measurementsAtLastAnalysis", QJsonValue(measurementsAtLastAnalysis));
    obj->insert("numberOfMeasurements", QJsonValue(numberOfMeasurements));
    obj->insert("lastUnit", QJsonValue(lastUnit));
    obj->insert("lastValue", QJsonValue(lastValue));
    obj->insert("mostCommonValue", QJsonValue(mostCommonValue));
    obj->insert("mostCommonUnit", QJsonValue(mostCommonUnit));
    obj->insert("lastSource", QJsonValue(lastSource));
    

    return obj;
}

qint32
SWGVariable::getId() {
    return id;
}
void
SWGVariable::setId(qint32 id) {
    this->id = id;
}

QString*
SWGVariable::getName() {
    return name;
}
void
SWGVariable::setName(QString* name) {
    this->name = name;
}

QString*
SWGVariable::getOriginalName() {
    return originalName;
}
void
SWGVariable::setOriginalName(QString* originalName) {
    this->originalName = originalName;
}

QString*
SWGVariable::getCategory() {
    return category;
}
void
SWGVariable::setCategory(QString* category) {
    this->category = category;
}

QString*
SWGVariable::getUnit() {
    return unit;
}
void
SWGVariable::setUnit(QString* unit) {
    this->unit = unit;
}

QString*
SWGVariable::getSources() {
    return sources;
}
void
SWGVariable::setSources(QString* sources) {
    this->sources = sources;
}

double*
SWGVariable::getMinimumValue() {
    return minimumValue;
}
void
SWGVariable::setMinimumValue(double* minimumValue) {
    this->minimumValue = minimumValue;
}

double*
SWGVariable::getMaximumValue() {
    return maximumValue;
}
void
SWGVariable::setMaximumValue(double* maximumValue) {
    this->maximumValue = maximumValue;
}

QString*
SWGVariable::getCombinationOperation() {
    return combinationOperation;
}
void
SWGVariable::setCombinationOperation(QString* combinationOperation) {
    this->combinationOperation = combinationOperation;
}

double*
SWGVariable::getFillingValue() {
    return fillingValue;
}
void
SWGVariable::setFillingValue(double* fillingValue) {
    this->fillingValue = fillingValue;
}

QString*
SWGVariable::getJoinWith() {
    return joinWith;
}
void
SWGVariable::setJoinWith(QString* joinWith) {
    this->joinWith = joinWith;
}

QList<SWGVariable*>*
SWGVariable::getJoinedVariables() {
    return joinedVariables;
}
void
SWGVariable::setJoinedVariables(QList<SWGVariable*>* joinedVariables) {
    this->joinedVariables = joinedVariables;
}

qint32
SWGVariable::getParent() {
    return parent;
}
void
SWGVariable::setParent(qint32 parent) {
    this->parent = parent;
}

QList<SWGVariable*>*
SWGVariable::getSubVariables() {
    return subVariables;
}
void
SWGVariable::setSubVariables(QList<SWGVariable*>* subVariables) {
    this->subVariables = subVariables;
}

qint32
SWGVariable::getOnsetDelay() {
    return onsetDelay;
}
void
SWGVariable::setOnsetDelay(qint32 onsetDelay) {
    this->onsetDelay = onsetDelay;
}

qint32
SWGVariable::getDurationOfAction() {
    return durationOfAction;
}
void
SWGVariable::setDurationOfAction(qint32 durationOfAction) {
    this->durationOfAction = durationOfAction;
}

qint32
SWGVariable::getEarliestMeasurementTime() {
    return earliestMeasurementTime;
}
void
SWGVariable::setEarliestMeasurementTime(qint32 earliestMeasurementTime) {
    this->earliestMeasurementTime = earliestMeasurementTime;
}

qint32
SWGVariable::getLatestMeasurementTime() {
    return latestMeasurementTime;
}
void
SWGVariable::setLatestMeasurementTime(qint32 latestMeasurementTime) {
    this->latestMeasurementTime = latestMeasurementTime;
}

qint32
SWGVariable::getUpdated() {
    return updated;
}
void
SWGVariable::setUpdated(qint32 updated) {
    this->updated = updated;
}

qint32
SWGVariable::getCauseOnly() {
    return causeOnly;
}
void
SWGVariable::setCauseOnly(qint32 causeOnly) {
    this->causeOnly = causeOnly;
}

qint32
SWGVariable::getNumberOfCorrelations() {
    return numberOfCorrelations;
}
void
SWGVariable::setNumberOfCorrelations(qint32 numberOfCorrelations) {
    this->numberOfCorrelations = numberOfCorrelations;
}

qint32
SWGVariable::getOutcome() {
    return outcome;
}
void
SWGVariable::setOutcome(qint32 outcome) {
    this->outcome = outcome;
}

qint32
SWGVariable::getMeasurementsAtLastAnalysis() {
    return measurementsAtLastAnalysis;
}
void
SWGVariable::setMeasurementsAtLastAnalysis(qint32 measurementsAtLastAnalysis) {
    this->measurementsAtLastAnalysis = measurementsAtLastAnalysis;
}

qint32
SWGVariable::getNumberOfMeasurements() {
    return numberOfMeasurements;
}
void
SWGVariable::setNumberOfMeasurements(qint32 numberOfMeasurements) {
    this->numberOfMeasurements = numberOfMeasurements;
}

qint32
SWGVariable::getLastUnit() {
    return lastUnit;
}
void
SWGVariable::setLastUnit(qint32 lastUnit) {
    this->lastUnit = lastUnit;
}

qint32
SWGVariable::getLastValue() {
    return lastValue;
}
void
SWGVariable::setLastValue(qint32 lastValue) {
    this->lastValue = lastValue;
}

qint32
SWGVariable::getMostCommonValue() {
    return mostCommonValue;
}
void
SWGVariable::setMostCommonValue(qint32 mostCommonValue) {
    this->mostCommonValue = mostCommonValue;
}

qint32
SWGVariable::getMostCommonUnit() {
    return mostCommonUnit;
}
void
SWGVariable::setMostCommonUnit(qint32 mostCommonUnit) {
    this->mostCommonUnit = mostCommonUnit;
}

qint32
SWGVariable::getLastSource() {
    return lastSource;
}
void
SWGVariable::setLastSource(qint32 lastSource) {
    this->lastSource = lastSource;
}



} /* namespace Swagger */

