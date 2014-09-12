#include "connection.h"

Connection::Connection()
{
    this->strName = "";
    this->strPasswd = "";
    this->strIp = "";
}

Connection::Connection(QString &name, QString &passwd, QString &ip, QString &database)
{
    this->strName = name;
    this->strPasswd = passwd;
    this->strIp = ip;
    this->strDatabase = database;
}

QDataStream &operator <<(QDataStream &out, const Connection &con)
{
    out << con.strName
        << con.strPasswd
        << con.strIp
        << con.strDatabase;
    return out;
}

QDataStream &operator >>(QDataStream &in, Connection &con)
{
    QString name, passwd, ip, database;
    in >> name >> passwd >> ip >> database;
    con = Connection(name, passwd, ip, database);

    return in;
}
