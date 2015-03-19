#include "Reproduction.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Reproduction w;
    w.show();

    return a.exec();
}
