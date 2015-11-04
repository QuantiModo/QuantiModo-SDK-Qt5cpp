/*
 * SWGUnitCategory.h
 * 
 * 
 */

#ifndef SWGUnitCategory_H_
#define SWGUnitCategory_H_

#include <QJsonObject>


#include "QDateTime.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUnitCategory: public SWGObject {
public:
    SWGUnitCategory();
    SWGUnitCategory(QString* json);
    virtual ~SWGUnitCategory();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUnitCategory* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);
    QString* getName();
    void setName(QString* name);
    QDateTime* getCreatedAt();
    void setCreatedAt(QDateTime* created_at);
    QDateTime* getUpdatedAt();
    void setUpdatedAt(QDateTime* updated_at);
    

private:
    qint32 id;
    QString* name;
    QDateTime* created_at;
    QDateTime* updated_at;
    
};

} /* namespace Swagger */

#endif /* SWGUnitCategory_H_ */
