#include "etlwizard.h"
#include "common.h"
#include "ui_etlwizard.h"
#include "firstwizardpage.h"
#include "secondwizardpage.h"
#include "thirdwizardpage.h"
#include "forthwizardpage.h"
#include "fifthwizardpage.h"
#include "sixthwizardpage.h"
#include "seventhwizardpage.h"

EtlWizard::EtlWizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::EtlWizard)
{
    ui->setupUi(this);

    setWindowIcon(QIcon("://image/icon.png"));
    //setWindowIcon(QIcon("://image/logo.png"));
    // 将菜单更改为中文的
    setButtonText(QWizard::BackButton, tr("<<上一步"));
    setButtonText(QWizard::NextButton, tr("下一步>>"));
    setButtonText(QWizard::CancelButton, tr("取消"));
    setButtonText(QWizard::FinishButton, tr("完成"));

    // 添加向导页
    setPage(FIRSTPAGE, new FirstWizardPage(this));
    setPage(SECONDPAGE, new SecondWizardPage(this));
    setPage(THIRDPAGE, new ThirdWizardPage(this));
    setPage(FORTHPAGE, new ForthWizardPage(this));
    setPage(FIFTHPAGE, new FifthWizardPage(this));
    setPage(SIXTHPAGE, new SixthWizardPage(this));
    setPage(SEVENTHPAGE, new SeventhWizardPage(this));

    //setStartId(SECONDPAGE);
    mapIdTitle.insert(FIRSTPAGE, tr("数据源"));
    mapIdTitle.insert(SECONDPAGE, tr("数据库选择"));
    mapIdTitle.insert(THIRDPAGE, tr("Oracle"));
    mapIdTitle.insert(FORTHPAGE, tr("目的地"));
    mapIdTitle.insert(FIFTHPAGE, tr("SCSDB"));
    mapIdTitle.insert(SIXTHPAGE, tr("参数设置"));
    mapIdTitle.insert(SEVENTHPAGE, tr("执行"));

    connect(this, SIGNAL(currentIdChanged(int)), this, SLOT(onCurrentIdChanged(int)));
}

EtlWizard::~EtlWizard()
{
    delete ui;
}

void EtlWizard::onCurrentIdChanged(int Id)
{
    setWindowTitle(mapIdTitle[(PageId)Id]);
}
