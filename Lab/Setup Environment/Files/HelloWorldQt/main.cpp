/*
@file:      main.cpp
@author:    Uriel Salazar
@date:      September 22, 2018
@section:   47985
@brief:     Simple program to test Qt development environment
*/

#include <QtCore/QCoreApplication>
#include <QtSql>
#include <QtDebug>



int main(int argc, char **argv)
{
    QCoreApplication a(argc, argv);

    //Create database connection
    QString servername = "LOCALHOST\\OpenOffice";
    QString dbname = "test";
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setConnectOptions();

    QString dsn = QString ("DRIVER = (SQL Native Client);SERVER=%1;DATABASE=%2;"
                  "Trusted_Connection=Yes;").arg(servername).arg(dbname);

    db.setDatabaseName(dsn);

    if(db.open())
    {
        qDebug() << "Opened";
        db.close();
    }
    else
    {
        qDebug() << "Error = " << db.lastError().text();
    }

    return a.exec();

}
