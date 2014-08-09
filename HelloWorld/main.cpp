#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.setWindowTitle(QObject::tr("HelloWorld"));
    w.setMaximumWidth(400);
    w.setMaximumHeight(300);
    w.setMinimumWidth(400);
    w.setMinimumHeight(300);
    w.show();

    return a.exec();
}
