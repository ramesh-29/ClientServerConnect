#ifndef JSONHANDLER_H
#define JSONHANDLER_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QNetworkReply>

class JsonHandler
{
public:
    JsonHandler();
public slots:
    bool isError(QNetworkReply *reply);
     bool hasJsonParseError(QNetworkReply *reply, QJsonParseError &jsonError);
     bool parseJsonObjectResponse(QNetworkReply *reply,QJsonObject &parsedObject);
};

#endif // JSONHANDLER_H
