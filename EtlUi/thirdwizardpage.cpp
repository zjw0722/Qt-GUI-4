#include <QFileDialog>
#include <QMessageBox>
#include "common.h"
#include "thirdwizardpage.h"
#include "ui_thirdwizardpage.h"

ThirdWizardPage::ThirdWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::ThirdWizardPage),
    parent(parent)
{
    ui->setupUi(this);
    m_mapConnections.clear();
}

ThirdWizardPage::~ThirdWizardPage()
{
    delete ui;
}

// 实现nextId
int ThirdWizardPage::nextId()
{
    // 将连接信息保存到文件中
    WriteConnection();
    // 根据用户选项决定下一页
    return FORTHPAGE;
}

// 初始化
void ThirdWizardPage::initializePage()
{
    ReadConnection();
}

// 读取连接信息
void ThirdWizardPage::ReadConnection()
{
    QFile file("oracle.passwd");
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this, tr("打开文件失败"),tr("错误原因：%1")
                                 .arg(file.errorString()));
        return;
    }
    QDataStream in(&file);
    Connection con;
    int i = 0;
    while(!in.atEnd())
    {
        in >> con;
        ui->comboBox->insertItem(i, con.strDatabase);
        m_mapConnections.insert(i, con);
    }
    file.close();
}

// 写入连接信息
void ThirdWizardPage::WriteConnection()
{
    QFile file("oracle.passwd");
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::information(this, tr("打开文件失败"),
                                 tr("错误原因：%1").arg(file.errorString()));
        return;
    }
    QDataStream out(&file);

    for(int i = 0;i < m_mapConnections.size();++i)
    {
        out << m_mapConnections[i];
    }
    file.close();
}
