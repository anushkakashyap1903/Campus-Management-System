#include "mainwindow.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setQuitOnLastWindowClosed(false);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/CampusFriction/campusfriction.db");

    if(db.open())
        qDebug() << "Database connected!";
    else
        qDebug() << "Database NOT connected!";

    MainWindow w;
    w.show();
    return a.exec();
}
