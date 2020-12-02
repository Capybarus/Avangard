#include "Avangard.h"
#include "RegWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RegWindow window_reg;
    window_reg.show();
    //Avangard w;
    //w.show();
    return a.exec();
}
