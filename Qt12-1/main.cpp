#include <QCoreApplication>
#include <QtGui/QImage>
#include <QtGui/QColor>
#include <QMap>
#include <QFile>
#include <iostream>

int writeData()
{
    QImage img("test.jpg");

    QMap<QString, QColor> map;
    map.insert("red", Qt::red);
    map.insert("green", Qt::green);
    map.insert("blue", Qt::blue);

    QFile file("test.dat");
    if(!file.open(QIODevice::WriteOnly))
    {
        std::cerr << "Cannot open file for writting: "
                  << qPrintable(file.errorString()) << std::endl;
        return -1;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_1);
    out << quint32(0x12345678) << img << map;

    std::cout << "success";
    return 0;
}

int readData()
{
    quint32 n;
    QImage img;
    QMap<QString, QColor> map;

    QFile file("test.dat");
    if(!file.open(QIODevice::ReadOnly))
    {
        std::cerr << "Cannot open file for reading: "
                  << qPrintable(file.errorString()) << std::endl;
        return -1;
    }
    QDataStream in(&file);
    in >> n >> img >> map;

    std::cout << std::hex << n << "\t" << map.size();

    return 0;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    //writeData();
    readData();

    return a.exec();
}
