#include "aplikacja.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Aplikacja w;
    w.show();

    return a.exec();
}
