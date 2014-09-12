#ifndef CONNECTION_H
#define CONNECTION_H
#include <QDataStream>

class Connection
{
public:
    Connection();
    Connection(QString &name, QString &passwd, QString &ip, QString &database);

    friend QDataStream &operator <<(QDataStream &out, const Connection &con);
    friend QDataStream &operator >>(QDataStream &in, Connection &con);
public:
    QString strName;
    QString strPasswd;
    QString strIp;
    QString strDatabase;
};

#endif // CONNECTION_H
