#include <QApplication>
#include "firstdialog.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    FirstDialog *pDialog = new FirstDialog;
    pDialog->show();
    app.exec();
    return 0;
}
