#include <QFileDialog>
#include "firstdialog.h"
#include "seconddialog.h"
#include "ui_firstdialog.h"

FirstDialog::FirstDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstDialog)
{
    ui->setupUi(this);
    ui->radioButtonFile->setChecked(true);
}

FirstDialog::~FirstDialog()
{
    delete ui;
}

// 单击文件按钮
void FirstDialog::on_pushButtonFile_clicked()
{
    QString strFile = QFileDialog::getOpenFileName(
                this,
                tr("打开文件"),
                tr("C:\\"),
                tr("SQL Files (*.sql *.txt);; Text Files (*.txt);; All Files (*.*)"));
    ui->lineEditFileName->setText(strFile);
}

// 点击下一步按钮
void FirstDialog::on_pushButtonNext_clicked()
{
    SecondDialog *pDialog = new SecondDialog(this);
    pDialog->setAttribute(Qt::WA_DeleteOnClose, true);
    this->hide();
    pDialog->show();
}
