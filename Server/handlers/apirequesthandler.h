#ifndef APIREQUESTHANDLER_H
#define APIREQUESTHANDLER_H

#include "interface/irequesthandler.h"


class ApiRequestHandler : public IRequestHandler
{
public:
    ApiRequestHandler();

    // Implement virtual functions from IRequestHandler
    void handleRequest(QHttpRequest *request, QHttpResponse *response) override;

    void handleDeleteRequest(QHttpRequest *request, QHttpResponse *response) override;
    void handlePutRequest(QHttpRequest *request, QHttpResponse *response) override;
    void handlePostRequest(QHttpRequest *request, QHttpResponse *response) override;
    void handleGetRequest(QHttpRequest *request, QHttpResponse *response) override;


};

#endif // APIREQUESTHANDLER_H
