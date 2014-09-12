#include <QFileDialog>
#include <QDir>
#include "common.h"
#include "forthwizardpage.h"
#include "ui_forthwizardpage.h"

ForthWizardPage::ForthWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::ForthWizardPage),
    parent(parent)
{
    ui->setupUi(this);

    // 注册域
    registerField("DestinationFilePath", ui->lineEditFilePath);
}

ForthWizardPage::~ForthWizardPage()
{
    delete ui;
}

// 实现nextId
int ForthWizardPage::nextId() const
{
    // 根据用户选项决定下一页
    if(ui->radioButtonFile->isChecked())
    {
        return SIXTHPAGE;
    }
    else
    {
        return FIFTHPAGE;
    }
}

// 单击文件按钮
void ForthWizardPage::on_pushButtonFile_clicked()
{
    QString strFilePath = QFileDialog::getOpenFileName(
                this,
                tr("打开文件"),
                QDir::homePath(),
                tr("SQL Files (*.sql *.txt);; Text Files (*.txt);; All Files (*.*)"));
    ui->lineEditFilePath->setText(strFilePath);
}

// 初始化
void ForthWizardPage::initializePage()
{
    //parent->setWindowTitle(tr("目的地"));
}
