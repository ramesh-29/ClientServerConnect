#include "apicontroller.h"
#include <QNetworkAccessManager>
#include "handlers/apihandler.h"

apicontroller::apicontroller()
{
    m_networkManager = new QNetworkAccessManager(this);
    m_apiHandler = new ApiHandler();
    connect(m_networkManager, &QNetworkAccessManager::finished, this, &apicontroller::responseReceived);

    loginpage.show();
    connect(&loginpage,&LoginInfoPage::sendPostData,this,&apicontroller::sendPostRequest);
    connect(&loginpage,&LoginInfoPage::sendGetData,this,&apicontroller::sendGetRequest);
    connect(&loginpage,&LoginInfoPage::sendDeleteData,this,&apicontroller::sendDeleteRequest);
    connect(&loginpage,&LoginInfoPage::sendUpdateData,this,&apicontroller::sendPutRequest);
    registerHandlers();
    jsonparse = new JsonHandler();

}

void apicontroller::responseReceived()
{
    if (m_reply) {
        QUrl requestUrl = m_reply->request().url();
        QString path = requestUrl.path();
        qDebug() << path;

            // Find the handler for the specified path
            QSharedPointer<IRequestHandler> handler = nullptr;

            for (auto it = handlerMap.begin(); it != handlerMap.end(); ++it) {
                if (path.startsWith(it.key())) {
                    handler = it.value();
                    break;
                }
            }

            if (handler.isNull()) {
                qDebug()<<"No handler found for this path";
            } else {
                // Delegate handling to the registered handler
                handler->handleResponse(m_reply);
            }
            m_reply->deleteLater();
        }
}


void apicontroller::registerHandlers()
{
    // Register handlers for specific paths within the APIController
    registerHandler("/api/", QSharedPointer<ApiHandler>::create());
    // Add more registrations as needed
}


void apicontroller::registerHandler(const QString &path, QSharedPointer<IRequestHandler> handler)
{
    // Register the handler for the specified path
    handlerMap[path] = handler;
}

void apicontroller::sendDeleteRequest()
{

}

void apicontroller::sendPutRequest(const QNetworkRequest &request, const QByteArray &data)
{
    if(m_reply){
        m_reply = nullptr;
    }
        m_reply = m_networkManager->put(request,data);
}

void apicontroller::sendPostRequest(const QNetworkRequest &request, const QByteArray &data)
{
    if(m_reply){
        m_reply = nullptr;
    }
        m_reply = m_networkManager->post(request,data);
}

void apicontroller::sendGetRequest(const QNetworkRequest &request)
{
    if(m_reply){
        m_reply = nullptr;
    }
        m_reply = m_networkManager->get(request);
}


