#include <QMessageBox>
#include <QFileDialog>
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
                this, tr("open file"),
                " ",  tr("Allfile(*.*);;mp3file(*.mp3)"));
    QMessageBox::information(this, QString("FilePath"), fileName, QMessageBox::Ok);
}
