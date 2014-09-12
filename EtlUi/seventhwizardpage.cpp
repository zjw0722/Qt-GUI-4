#include "common.h"
#include "seventhwizardpage.h"
#include "ui_seventhwizardpage.h"

SeventhWizardPage::SeventhWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::SeventhWizardPage),
    parent(parent)
{
    ui->setupUi(this);

}

SeventhWizardPage::~SeventhWizardPage()
{
    delete ui;
}

// 实现nextId
int SeventhWizardPage::nextId() const
{
    // 没有下一页了
    return -1;
}

// 初始化
void SeventhWizardPage::initializePage()
{
    ui->textEdit->setText(field("SourceFilePath").toString());
    ui->textEdit->append(field("DestinationFilePath").toString());
    ui->textEdit->append(field("DataBase").toString());

    //parent->setWindowTitle(tr("抽取线程"));
}
