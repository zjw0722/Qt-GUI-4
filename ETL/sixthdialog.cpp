#include "sixthdialog.h"
#include "ui_sixthdialog.h"

SixthDialog::SixthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SixthDialog)
{
    ui->setupUi(this);
}

SixthDialog::~SixthDialog()
{
    delete ui;
}
