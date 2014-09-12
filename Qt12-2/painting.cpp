#include "painting.h"

using namespace std;

Painting::Painting()
{
    myYear = 0;
}

Painting::Painting(const QString &title, const QString &artist, int year)
{
    myTitle = title;
    myArtist = artist;
    myYear = year;
}

void Painting::setTitle(const QString &title)
{
    myTitle = title;
}
QString Painting::title() const // 常函数，无法修改类成员变量
{
    return myTitle;
}

void Painting::setAritst(const QString &artist)
{
    myArtist = artist;
}
QString Painting::artist() const
{
    return myArtist;
}

void Painting::setYear(const int &year)
{
    myYear = year;
}
int Painting::year() const
{
    return myYear;
}

QDataStream &operator<<(QDataStream &out, const Painting &painting)
{
    out << painting.title() << painting.artist() <<
           quint32(painting.year());
    return out;
}

QDataStream &operator>>(QDataStream &in, Painting &painting)
{
    QString title;
    QString artist;
    quint32 year;

    in >> title >> artist >> year;
    painting = Painting(title, artist, year);
    return in;
}
