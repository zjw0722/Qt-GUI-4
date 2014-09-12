#ifndef PAINTING_H
#define PAINTING_H
#include <QDataStream>
#include <QString>
#include <iostream>
using namespace std;

class Painting
{
public:
    Painting();
    Painting(const QString &title, const QString &artist, int year);

    void setTitle(const QString &title);
    QString title() const; // 常函数，无法修改类成员变量

    void setAritst(const QString &artist);
    QString artist() const;

    void setYear(const int &year);
    int year() const;

private:
    QString myTitle;
    QString myArtist;
    int myYear;
};

QDataStream &operator<<(QDataStream &out, const Painting &painting);
QDataStream &operator>>(QDataStream &in, Painting &painting);

#endif // PAINTING_H
