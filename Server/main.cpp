#include "widget.h"
#include "controller/apicontroller.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();
    APIController *apicontrol = new APIController();
    apicontrol->startServer();

    return a.exec();
}
