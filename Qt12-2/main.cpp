#include <QCoreApplication>
#include <QFile>
#include <QDataStream>
#include <iostream>
#include "painting.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    Painting p("hcloud", "mysql", 10);

    QFile file("test.dat");
    if(!file.open(QIODevice::WriteOnly))
    {
        cout << "open file failed!" << endl;
        return 0;
    }
    QDataStream out(&file);
    out << p;
    file.flush();

    Painting p1;

    QFile file1("test.dat");
    if(!file1.open(QIODevice::ReadOnly))
    {
        cout << "open file1 failed!";
        return 0;
    }
    QDataStream in(&file1);
    in >> p1;

    cout << p1.title().toStdString() << endl << p1.artist().toStdString()
         << endl << p1.year() << endl;
    return a.exec();
}
