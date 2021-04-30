#include "mainescultor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainEscultor w;
    w.show();
    return a.exec();
}
