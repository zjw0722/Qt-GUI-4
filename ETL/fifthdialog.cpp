#include "fifthdialog.h"
#include "ui_fifthdialog.h"

FifthDialog::FifthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FifthDialog)
{
    ui->setupUi(this);
}

FifthDialog::~FifthDialog()
{
    delete ui;
}

// 单击下一步按钮
void FifthDialog::on_pushButtonNext_clicked()
{
    //ThirdDialog *pDialog = new ThirdDialog;
    //this->hide();
    //pDialog->show();
    //pDialog->exec();
}

// 单击上一步按钮
void FifthDialog::on_pushButtonPre_clicked()
{
    this->parentWidget()->show();
    this->close();
}
