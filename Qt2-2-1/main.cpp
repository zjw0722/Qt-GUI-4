#include <QApplication>
#include <QDialog>
#include "ui_form.h"

int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    Ui::Form ui;
    QDialog *pDialog = new QDialog;
    ui.setupUi(pDialog);
    pDialog->show();

    return a.exec();
}
