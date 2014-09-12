#include <QApplication>
#include "gotocelldialog.h"

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    GoToCellDialog *pDialog = new GoToCellDialog;
    pDialog->show();

    return a.exec();
}
