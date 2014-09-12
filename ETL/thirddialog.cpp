#include <QFileDialog>
#include "thirddialog.h"
#include "forthdialog.h"
#include "ui_thirddialog.h"

ThirdDialog::ThirdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdDialog)
{
    ui->setupUi(this);
    ui->radioButtonFile->setChecked(true);
}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}

// 单击下一步按钮
void ThirdDialog::on_pushButtonNext_clicked()
{
    ForthDialog *pDialog = new ForthDialog(this);
    pDialog->setAttribute(Qt::WA_DeleteOnClose, true);
    this->hide();
    pDialog->show();
}

// 单击文件按钮
void ThirdDialog::on_pushButtonFile_clicked()
{
    QString strFile = QFileDialog::getOpenFileName(
                this,
                tr("打开文件"),
                tr("我的文档"),
                tr("SQL Files (*.sql *.txt);; Text Files (*.txt);; All Files (*.*)"));
    ui->lineEditFileName->setText(strFile);
}

// 单击上一步按钮
void ThirdDialog::on_pushButtonPre_clicked()
{
    this->parentWidget()->show();
    this->close();
}
