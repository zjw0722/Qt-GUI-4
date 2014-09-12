#include "seventhdialog.h"
#include "ui_seventhdialog.h"

SeventhDialog::SeventhDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SeventhDialog)
{
    ui->setupUi(this);
}

SeventhDialog::~SeventhDialog()
{
    delete ui;
}
