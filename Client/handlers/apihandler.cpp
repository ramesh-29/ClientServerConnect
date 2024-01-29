#include "apihandler.h"
#include "QDebug"


ApiHandler::ApiHandler()
{
    jsonparse = new JsonHandler;
}

void ApiHandler::handleResponse(QNetworkReply* responsedata)
{
    {
        if(jsonparse->isError(responsedata)){
            qDebug()<<responsedata->error();

        }

        QJsonObject jsonObject;
        if(jsonparse->parseJsonObjectResponse(responsedata,jsonObject)){
            qDebug() << "Response JSON:" << jsonObject;

        }
    }
}
