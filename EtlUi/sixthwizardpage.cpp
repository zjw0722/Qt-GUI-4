#include "common.h"
#include "sixthwizardpage.h"
#include "ui_sixthwizardpage.h"

SixthWizardPage::SixthWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::SixthWizardPage),
    parent(parent)
{
    ui->setupUi(this);
    // 注册域
    registerField("CharacterCode", ui->comboBoxCharacter);
}

SixthWizardPage::~SixthWizardPage()
{
    delete ui;
}

// 实现nextId
int SixthWizardPage::nextId() const
{
    // 根据用户选项决定下一页
    return SEVENTHPAGE;
}

// 初始化
void SixthWizardPage::initializePage()
{

}
