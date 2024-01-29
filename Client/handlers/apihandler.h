#ifndef APIHANDLER_H
#define APIHANDLER_H
#include <QObject>
#include <QNetworkReply>
#include "utility/jsonhandler.h"
#include "interfaces/irequesthandler.h"

class ApiHandler: public IRequestHandler
{
public:
    ApiHandler();

    // Implement virtual functions from IRequestHandler
    void handleResponse(QNetworkReply *response) override;
private:
    JsonHandler *jsonparse;
};

#endif // APIHANDLER_H
