#include "skan_grain_main.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    skan_grain_main w;
    w.show();

    return a.exec();
}
