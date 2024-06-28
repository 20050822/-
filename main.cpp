#include "mainwindow.h"

#include <QApplication>

//设置主窗口
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();//显示主窗口
    return a.exec();
}
