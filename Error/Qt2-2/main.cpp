#include <QApplication>

#include "gotocelldialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GotoCellDialog *dialog = new GotoCellDialog;
    dialog->show();

    return a.exec();
}
