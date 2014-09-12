#include "dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortDialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
