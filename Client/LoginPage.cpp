#include "LoginPage.h"
#include "ui_LoginPage.h"
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonParseError>
#include <QTimer>
#include <QThread>
#include <QMessageBox>
#include "orderinfo.h"

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginHandler)
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
    apicontrol = new  apicontroller();


    connect(apicontrol,&apicontroller::loginSuccess,this,&LoginPage::processAuthenticatePass);
    connect(apicontrol,&apicontroller::loginFailed,this,&LoginPage::processAuthenticateFailed);


}

LoginPage::~LoginPage()
{
    delete ui;
}


void LoginPage::on_bLogin_clicked()
{
         QUrl url("https://api-stage.kushal.kimbal.io/api/TokenAuth/Authenticate");
        QNetworkRequest request(url);

        QJsonObject json;
        json["userNameOrEmailAddress"] = ui->lineEusername->text();
        json["password"] = ui->lineEpassword->text();
        json["rememberClient"] = true;
        QJsonDocument jsonData(json);
        QByteArray postData = jsonData.toJson();

        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json-patch+json");
         request.setRawHeader("Abp.TenantId", "1");
         qDebug()<<url;
         apicontrol->sendPostRequest(request,postData);
}

void LoginPage::processAuthenticateFailed()
{
    QMessageBox::warning(this,"Qt with Ramesh","Invalid Username or Password");
}

void LoginPage::processAuthenticatePass()
{
    QMessageBox::information(this,"Qt with Ramesh","Login Successful");
    this->hide();
    OrderInfoPage *orderDetail = new OrderInfoPage(nullptr);
    orderDetail->show();
}


