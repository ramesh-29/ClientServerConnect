#include "apirequesthandler.h"
#include "qhttprequest.h"
#include "qhttpresponse.h"

#include <QDebug>
#include <QJsonParseError>
#include <QJsonObject>
#include <QUrlQuery>
#include <QSqlDatabase>
#include <QSqlError>

#define basePath "/hello"

ApiRequestHandler::ApiRequestHandler()
{

}

void ApiRequestHandler::handleRequest(QHttpRequest *request, QHttpResponse *response)
{

}

void ApiRequestHandler::handleGetRequest(QHttpRequest *request, QHttpResponse *response)
{

}

void ApiRequestHandler::handlePutRequest(QHttpRequest *request, QHttpResponse *response)
{

}

void ApiRequestHandler::handlePostRequest(QHttpRequest *request, QHttpResponse *response)
{
    QString path = request->url().path();
    request->storeBody();
    QObject::connect(request, &QHttpRequest::end, [=]() {
        if(path == QString(basePath) + "/")
        {

        }
        else
        {
            // Handle other endpoints
            response->writeHead(404);
            response->end(QByteArray("Endpoint Not Found"));
        }
    });
}

void ApiRequestHandler::handleDeleteRequest(QHttpRequest *request, QHttpResponse *response)
{

}
