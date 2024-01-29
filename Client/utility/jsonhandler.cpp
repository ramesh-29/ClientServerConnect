#include "jsonhandler.h"

JsonHandler::JsonHandler()
{

}
bool JsonHandler::isError(QNetworkReply *reply) {
    // Check if there's an error in the network reply
    return reply->error() != QNetworkReply::NoError;
}

bool JsonHandler::hasJsonParseError(QNetworkReply *reply, QJsonParseError &jsonError) {
    // Attempt to parse the reply data as JSON
    QJsonDocument jsonResponse = QJsonDocument::fromJson(reply->readAll(), &jsonError);
    return jsonError.error != QJsonParseError::NoError;
}

bool JsonHandler::parseJsonObjectResponse(QNetworkReply *reply, QJsonObject &parsedObject) {
    QJsonParseError jsonError;
    QJsonDocument jsonResponse = QJsonDocument::fromJson(reply->readAll(), &jsonError);
    if (jsonError.error == QJsonParseError::NoError){
        if (jsonResponse.isObject()) {
            parsedObject = jsonResponse.object();
            return true;
        }else{
            qDebug()<<"jsonObject not found";
        }
    }else{
        qDebug()<<jsonError.error;
    }
    return false;
}
