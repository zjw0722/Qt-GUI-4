#include "common.h"
#include "secondwizardpage.h"
#include "ui_secondwizardpage.h"

SecondWizardPage::SecondWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::SecondWizardPage),
    parent(parent)
{
    ui->setupUi(this);

    // 注册域
    registerField("DataBase", ui->comboBox);
}

SecondWizardPage::~SecondWizardPage()
{
    delete ui;
}

// 实现nextId
int SecondWizardPage::nextId() const
{
    // 根据用户选项决定下一页
    return THIRDPAGE;
}

// 初始化
void SecondWizardPage::initializePage()
{
    //parent->setWindowTitle(tr("数据库选择"));
}
