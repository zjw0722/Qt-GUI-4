#include <QApplication>
#include "sortdialog.h"

int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    SortDialog *pDialog = new SortDialog;
    pDialog->setColumnRange('C', 'F');
    pDialog->show();
    return a.exec();
}
