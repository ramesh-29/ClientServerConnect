#ifndef IREQUESTHANDLER_H
#define IREQUESTHANDLER_H

#include <QObject>
#include <QNetworkReply>

class IRequestHandler
{
public:
    virtual void handleResponse(QNetworkReply *response) = 0;
};

#endif // IREQUESTHANDLER_H
