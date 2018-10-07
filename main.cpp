#include "mainwindow.h"
#include <QApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "MCModFounder v0.15 Linux" << endl;
    cout << "Build on LUbuntu 18.04.1 LTS, using Qt 5.00" << endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
