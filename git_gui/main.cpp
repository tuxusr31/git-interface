#include "mainwindow.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

#if defined(Q_OS_LINUX)
    qDebug("Linux");
#else
    qDebug("Win");
#endif

    return QApplication::exec();
}
