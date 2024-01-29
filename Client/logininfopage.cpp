#include "logininfopage.h"
#include "ui_logininfopage.h"
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonParseError>
#include <QTimer>
#include <QThread>
#include <QMessageBox>

LoginInfoPage::LoginInfoPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginInfoPage)
{
    ui->setupUi(this);
    ui->groupBox->setStyleSheet("QGroupBox { "
                                "border: 1px solid black; "
                                "background-image: url('/home/ramesh/Downloads/stock.jpg'); "
                                "background-origin: content; "
                                "background-clip: content; "
                                "background-repeat: no-repeat;"
                                "}");
    ui->labelPassword->setStyleSheet("color: red;");
    ui->labelUsername->setStyleSheet("color: red;");
    ui->bLogin->setStyleSheet("background-color: green; color: white;");

}

LoginInfoPage::~LoginInfoPage()
{
    delete ui;
}



void LoginInfoPage::on_bLogin_clicked()
{
    QUrl url("https://api-ramesh.io/api/Authenticate");
   QNetworkRequest request(url);

   QJsonObject json;
   json["userNameOrEmailAddress"] = ui->lineEusername->text();
   json["password"] = ui->lineEpassword->text();
   QJsonDocument jsonData(json);
   QByteArray postData = jsonData.toJson();

   request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json-patch+json");
    qDebug()<<url;


    emit sendPostData(request, postData);
}
