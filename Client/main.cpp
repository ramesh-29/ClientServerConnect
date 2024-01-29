#include "controller/apicontroller.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    apicontroller *apiController = new apicontroller;
    return a.exec();
}
