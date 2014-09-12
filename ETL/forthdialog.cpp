#include "forthdialog.h"
#include "fifthdialog.h"
#include "ui_forthdialog.h"

ForthDialog::ForthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForthDialog)
{
    ui->setupUi(this);
}

ForthDialog::~ForthDialog()
{
    delete ui;
}

// 单击下一步按钮
void ForthDialog::on_pushButtonNext_clicked()
{
    FifthDialog *pDialog = new FifthDialog(this);
    pDialog->setAttribute(Qt::WA_DeleteOnClose, true);
    this->hide();
    pDialog->show();
}

// 单击上一步按钮
void ForthDialog::on_pushButtonPre_clicked()
{
    this->parentWidget()->show();
    this->close();
}
