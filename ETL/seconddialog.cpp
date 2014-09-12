#include "seconddialog.h"
#include "thirddialog.h"
#include "ui_seconddialog.h"

SecondDialog::SecondDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
{
    ui->setupUi(this);
}

SecondDialog::~SecondDialog()
{
    delete ui;
}

// 单击下一步按钮
void SecondDialog::on_pushButtonNext_clicked()
{
    ThirdDialog *pDialog = new ThirdDialog(this);
    pDialog->setAttribute(Qt::WA_DeleteOnClose, true);
    this->hide();
    pDialog->show();
}

// 单击上一步按钮
void SecondDialog::on_pushButtonPre_clicked()
{
    this->parentWidget()->show();
    this->close();
}
