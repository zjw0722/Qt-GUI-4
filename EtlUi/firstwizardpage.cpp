#include <QFileDialog>
#include <QDir>
#include "common.h"
#include "firstwizardpage.h"
#include "ui_firstwizardpage.h"

FirstWizardPage::FirstWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::FirstWizardPage),
    parent(parent)
{
    ui->setupUi(this);

    // 注册域
    registerField("SourceFilePath", ui->lineEditFilePath);
}

FirstWizardPage::~FirstWizardPage()
{
    delete ui;
}

// 单击文件按钮
void FirstWizardPage::on_pushButtonFile_clicked()
{
    QString strFilePath = QFileDialog::getOpenFileName(
                this,
                tr("打开文件"),
                QDir::homePath(),
                tr("SQL Files (*.sql *.txt);; Text Files (*.txt);; All Files (*.*)"));
    ui->lineEditFilePath->setText(strFilePath);
}

// 实现nextId
int FirstWizardPage::nextId() const
{
    // 根据用户选项决定下一页
    if(ui->radioButtonFile->isChecked())
    {
        return FORTHPAGE;
        
    }
    else
    {
        // 目前只有Oracle一种方式，所以禁用了选择数据库页面
        //return SECONDPAGE;
        return THIRDPAGE;
    }
}

// 初始化
void FirstWizardPage::initializePage()
{
    //parent->setWindowTitle(tr("数据源"));
}
