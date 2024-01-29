#ifndef LOGININFOPAGE_H
#define LOGININFOPAGE_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonObject>

namespace Ui {
class LoginInfoPage;
}

class LoginInfoPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginInfoPage(QWidget *parent = nullptr);
    ~LoginInfoPage();

private slots:

     void on_bLogin_clicked();

signals:
     emit void sendPostData(QNetworkRequest request, QByteArray postData);
     emit void sendUpdateData(QNetworkRequest request, QByteArray postData);
     emit void sendGetData(QNetworkRequest request);
     emit void sendDeleteData();

private:
    Ui::LoginInfoPage *ui;
};

#endif // LOGININFOPAGE_H
