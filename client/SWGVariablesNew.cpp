
#include "SWGVariablesNew.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariablesNew::SWGVariablesNew(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariablesNew::SWGVariablesNew() {
    init();
}

SWGVariablesNew::~SWGVariablesNew() {
    this->cleanup();
}

void
SWGVariablesNew::init() {
    
}

void
SWGVariablesNew::cleanup() {
    
}

SWGVariablesNew*
SWGVariablesNew::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariablesNew::fromJsonObject(QJsonObject &pJson) {
    
}

QString
SWGVariablesNew::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariablesNew::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    

    return obj;
}



} /* namespace Swagger */

