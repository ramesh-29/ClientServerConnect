#ifndef APICONTROLLER_H
#define APICONTROLLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkReply>
#include "utility/jsonhandler.h"
#include <QMap>
#include <QSharedPointer>
#include "handlers/interfaces/irequesthandler.h"
#include "handlers/apihandler.h"
#include "logininfopage.h"

class apicontroller: public QObject
{
    Q_OBJECT
public:
    apicontroller();

private:
    void responseReceived();
    //    void processAuthenticate(QNetworkReply*  replyData);

    void registerHandlers();

    // Method to register a handler for a specific path
    void registerHandler(const QString &path, QSharedPointer<IRequestHandler> handler);

    // Map to store registered handlers based on paths
    QMap<QString, QSharedPointer<IRequestHandler>> handlerMap;


public slots:
    void sendDeleteRequest();
    void sendPutRequest(const QNetworkRequest &request, const QByteArray &data);
    void sendPostRequest(const QNetworkRequest &request, const QByteArray &data);
    void sendGetRequest(const QNetworkRequest &request);

private:
    QNetworkAccessManager *m_networkManager;
    QNetworkReply *m_reply = nullptr;
    JsonHandler *jsonparse;
    ApiHandler *m_apiHandler;
    LoginInfoPage loginpage;
};

#endif // APICONTROLLER_H
